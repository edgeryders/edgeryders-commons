<?php

/**
 * @file
 * Apache Solr Search Integration hook implementations and helper functions.
 */

/**
 * Converts the Solr field containing the image to the info field name.
 *
 * @param string $field_name
 *   The name of the image field as it is stored in Solr.
 *
 * @return string
 *   The name of the image info field as it is stored in Solr.
 */
function rich_snippets_get_apachesolr_image_info_field($field_name) {
  $base_name = substr($field_name, 3);
  return 'zm_' . $base_name . '_info';
}

/**
 * Generates a styled image programmatically.
 *
 * @param string $image_uri
 *   The URI of the source image.
 * @param string $style_name
 *   The machine name of the image style.
 *
 * @return stdClass|FALSE
 *   The loaded file object for the styled image, FALSE if the styled image
 *   could not be generated.
 *
 * @see image_style_deliver()
 */
function rich_snippets_create_styled_image($image_uri, $style_name) {

  // Get the URI of the styled image.
  if (!$derivative_uri = image_style_path($style_name, $image_uri)) {
    watchdog('rich_snippets', 'Error getting URI of styled image for @uri', array('@uri' => $image_uri), WATCHDOG_ERROR);
    return FALSE;
  }

  // If the file doesn't exist, attempt to generate it.
  if (!file_exists($derivative_uri)) {

    // Ensure that the style is loaded.
    if (!$style = image_style_load($style_name)) {
      watchdog('rich_snippets', 'Image style @style could not be loaded.', array('@style' => $style), WATCHDOG_ERROR);
      $generated = FALSE;
    }

    // Acquire lock, abort if the lock cannot be acquired.
    $lock_name = 'image_style_deliver:' . $style . ':' . drupal_hash_base64($image_uri);
    if (!$lock_acquired = lock_acquire($lock_name)) {
      watchdog('rich_snippets', 'Could not acquire lock @lock.', array('@lock' => $lock_name), WATCHDOG_WARNING);
      return FALSE;
    }

    // Generates the styled image.
    if (!$created = image_style_create_derivative($style, $image_uri, $derivative_uri)) {
      watchdog('rich_snippets', 'Error generating styled image for @uri', array('@uri' => $image_uri), WATCHDOG_ERROR);
    }

    lock_release($lock_name);
    if (!$created) {
      return FALSE;
    }
  }

  // Load the file object of the styled image.
  if (!$file = image_load($derivative_uri)) {
    watchdog('rich_snippets', 'Image @uri could not be loaded.', array('@uri' => $derivative_uri), WATCHDOG_ERROR);
  }

  return $file;
}

/**
 * Returns TRUE if the field is mapped to a Schema.org schema or property.
 *
 * This function is an inexact science because the indexing callbacks do not
 * have any information about the entity type or bundle the passed entity
 * belongs to. Therefore we have to guess a little.
 *
 * @param stdClass $entity
 *   The entity object being indexed.
 * @param string $field_name
 *   The machine name of the field being indexed.
 *
 * @return bool
 *   Our best guess at whether this field is mapped.
 */
function rich_snippets_has_schemaorg_mapping($entity, $field_name) {
  $field_info = field_info_field($field_name);
  foreach ($field_info['bundles'] as $entity_type => $bundles) {
    $bundles = array_flip($bundles);
    $bundle = rich_snippets_extract_bundle($entity_type, $entity);
    if ($bundle && isset($bundles[$bundle])) {
      $rdf_mapping = rdf_mapping_load($entity_type, $bundle);
      if ($schemata = rich_snippets_get_schema_from_predicates($rdf_mapping, $field_name)) {
        return TRUE;
      }
    }
  }
  return FALSE;
}

/**
 * Implements hook_apachesolr_query_alter().
 *
 * Include all fields that have associated schema.
 */
function rich_snippets_apachesolr_query_alter($query) {
  $solr_fields = array();

  // Add highlighting to the title.
  $query->addParam('hl.fl', 'label');

  // Load the Apache Solr Search Integration API functions if they don't exist.
  if (!function_exists('apachesolr_get_field_mappings')) {
    module_load_include('inc', 'rich_snippets', 'rich_snippets.legacy_apachesolr_get_field_mappings');
  }
  if (!function_exists('apachesolr_get_index_key_map')) {
    module_load_include('inc', 'rich_snippets', 'rich_snippets.legacy_apachesolr_get_index_key_map');
  }

  // Load the environment associated with this query.
  $env_id = $query->solr('getId');
  $enviromnent = apachesolr_environment_load($env_id);

  // For all bundles indexed by this environment, gather a list of Solr fields
  // that will need to be returned by the Solr server so we can append them to
  // the rich snippets.
  foreach ($enviromnent['index_bundles'] as $entity_type => $bundles) {
    $key_mappings = apachesolr_get_index_key_map($entity_type);
    foreach ($bundles as $bundle) {
      $rdf_mappings = rich_snippets_get_rdf_schema_mappings($entity_type, $bundle);
      foreach ($rdf_mappings as $schema => $fields) {
        foreach ($fields as $field) {
          if (0 === strpos($field, 'field_') && isset($key_mappings[$field])) {

            // Map the fiel to the corresponsding field in Solr.
            $solr_fields[$field] = array($key_mappings[$field]);

            // Assume that images map to an image field, so add the info field.
            if ('image' == $schema) {
              $solr_fields[$field][] = rich_snippets_get_apachesolr_image_info_field($key_mappings[$field]);
            }
          }
        }
      }
    }
  }

  // Add each field to the list of returned fields.
  foreach ($solr_fields as $field_names) {
    foreach ($field_names as $field_name) {
      $query->addParam('fl', $field_name);
    }
  }

  // Add the field storing the schema mappings.
  $query->addParam('fl', 'zm_rdf_schema_mappings');
}

/**
 * Implements hook_apachesolr_search_result_alter().
 */
function rich_snippets_apachesolr_search_result_alter($doc, $extra, $query) {
  $response = apachesolr_static_response_cache($query->getSearcher());
  if (!empty($response->highlighting->{$doc->id}->label)) {
    $doc->label = '';
    $highlighted = $response->highlighting->{$doc->id}->label;
    foreach ($highlighted as $text) {
      $doc->label .= $text;
    }
  }
}

/**
 * Implements hook_apachesolr_field_mappings().
 */
function rich_snippets_apachesolr_field_mappings() {
  $mappings = array();

  $mappings['image'] = array(
    'indexing_callback' => 'rich_snippets_apachesolr_image_indexing_callback',
    'index_type' => 'binary',
    'facets' => FALSE,
  );

  $mappings['text'] = array(
    'indexing_callback' => 'rich_snippets_apachesolr_text_indexing_callback',
    'index_type' => 'text',
    'facets' => FALSE,
  );

  return $mappings;
}

/**
 * Indexing callback that stores the image uri.
 */
function rich_snippets_apachesolr_image_indexing_callback($entity, $field_name, $index_key, $field_info) {
  $fields = array();
  if (!empty($entity->{$field_name}) && rich_snippets_has_schemaorg_mapping($entity, $field_name)) {
    $field = $entity->$field_name;
    list($lang, $values) = each($field);
    for ($i = 0; $i < count($values); $i++) {

      // Load the file object of the styles image, bail if FALSE is returned.
      if (!$file = rich_snippets_create_styled_image($values[$i]['uri'], RICH_SNIPPETS_STYLE_NAME)) {
        continue;
      }

      // Get the raw binary data of the image.
      if (!$data = file_get_contents($file->source)) {
        watchdog('rich_snippets', 'Error reading contents of image @uri.', array('@uri' => $derivative_uri), WATCHDOG_ERROR);
        continue;
      }

      // Store the base64 encoded image data.
      $fields[] = array(
        'key' => $index_key,
        'value' => base64_encode($data),
      );

      // Store the image info in an unindexed text field.
      $fields[] = array(
        'key' => rich_snippets_get_apachesolr_image_info_field($index_key),
        'value' => drupal_json_encode($file->info),
      );
    }
  }

  return $fields;
}

/**
 * Indexing callback that stores text.
 *
 * @see apachesolr_fields_default_indexing_callback()
 */
function rich_snippets_apachesolr_text_indexing_callback($entity, $field_name, $index_key, $field_info) {
  if (rich_snippets_has_schemaorg_mapping($entity, $field_name)) {
    return apachesolr_fields_default_indexing_callback($entity, $field_name, $index_key, $field_info);
  }
  return array();
}

/**
 * Implements hook_apachesolr_index_document_build().
 *
 * Adds schema.org mappings to the index.
 */
function rich_snippets_apachesolr_index_document_build(ApacheSolrDocument $document, $entity, $entity_type, $env_id) {
  if ($bundle = rich_snippets_extract_bundle($entity_type, $entity)) {
    $rdf_mappings = rich_snippets_get_rdf_schema_mappings($entity_type, $bundle);
    $document->setField('zm_rdf_schema_mappings', drupal_json_encode($rdf_mappings));
  }
}

/**
 * Helper function to get the entity's bundle.
 *
 * Is there really no API function to get an entity's bundle? I must have
 * missed it.
 *
 * @param string $entity_type
 *   The machine name of the entity.
 * @param stdClass $entity
 *   The entity the bundle is being extracted from.
 *
 * @return string|FALSE
 *   The machine name of the bundle, FALSE if the bundle couldn't be extracted.
 */
function rich_snippets_extract_bundle($entity_type, $entity) {
  $bundle = FALSE;
  if ($entity_info = entity_get_info($entity_type)) {
    // Attempt to extract the bundle from the entity keys. Make sure that the
    // entity we extracted is valid just in case.
    if (isset($entity_info['bundle keys'])) {
      foreach ($entity_info['bundle keys'] as $key) {
        if (isset($entity->$key) && isset($entity_info['bundles'][$entity->$key])) {
          $bundle = $entity->$key;
          break;
        }
      }
    }
  }
  return $bundle;
}
