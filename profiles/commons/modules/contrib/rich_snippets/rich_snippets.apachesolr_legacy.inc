<?php

/**
 * @file
 * Functions that are slated to be included in Apache Solr Search Integration.
 */

/**
 * Gets the Apache Solr field mappings.
 *
 * Field mappings define the various callbacks and Facet API keys associated
 * with field types, i.e. "integer", "date", etc. Mappings are gathered by
 * invoking hook_apachesolr_field_mappings().
 *
 * @param string $entity_type
 *   The machine name of the entity mappings are being collected for.
 *
 * @return array
 *   An associative array keyed by field type to an array of mappings
 *   containing:
 *   - dependency plugins: The Facet API dependency plugins associated with
 *     fields of this type.
 *   - map callback: The Facet API map callback that converts the raw values
 *     stored in the index to something human readable.
 *   - name callback:
 *   - hierarchy callback: The Facet API hierarchy processing callback for
 *     hierarchical facets.
 *   - indexing_callback: Callback used to retrieve values for indexing.
 *   - index_type: The Solr datatype associated with this field type.
 *   - facets: A boolean flagging whether facets are allowed for this field.
 *   - facet missing allowed: A boolean flagging whether the Facet API "missing
 *     facets" setting is supported by fields of this type.
 *   - facet mincount allowed: A boolean flagging whether the Facet API "minimum
 *     facet count" setting is supported by fields of this type.
 *   - multiple: A boolean flagging whether the field contains multiple values.
 *
 * @see http://drupal.org/node/1825426
 */
function apachesolr_get_field_mappings($entity_type) {
  $field_mappings = &drupal_static(__FUNCTION__, array());
  if (!isset($field_mappings[$entity_type])) {

    $field_mappings[$entity_type] = module_invoke_all('apachesolr_field_mappings');
    $mappings = &$field_mappings[$entity_type];

    foreach (array_keys($mappings) as $key) {
      // Set all values with defaults.
      $defaults = array(
        'dependency plugins' => array('bundle', 'role'),
        'map callback' => FALSE,
        'name callback' => '',
        'hierarchy callback' => FALSE,
        'indexing_callback' => '',
        'index_type' => 'string',
        'facets' => FALSE,
        'facet missing allowed' => FALSE,
        'facet mincount allowed' => FALSE,
        // Field API allows any field to be multi-valued.
        'multiple' => TRUE,
      );
      if ($key !== 'per-field') {
        $mappings[$key] += $defaults;
      }
      else {
        foreach (array_keys($mappings[$key]) as $field_key) {
          $mappings[$key][$field_key] += $defaults;
        }
      }
    }

    // Allow other modules to add or alter the field mappings.
    drupal_alter('apachesolr_field_mappings', $mappings, $entity_type);
  }

  return $field_mappings[$entity_type];
}

/**
 * Returns a mapping of entity field names to solr index keys.
 *
 * @param string $entity_type
 *   The machine name of the entity.
 *
 * @return array
 *   An associative array keyed by entity field name to solr index key, which is
 *   the name of the field as it is stored in Solr.
 */
function apachesolr_get_index_key_map($entity_type) {
  $index_key_map = &drupal_static(__FUNCTION__, array());

  $mappings = apachesolr_get_field_mappings($entity_type);
  if (!isset($index_key_map[$entity_type])) {
    foreach (field_info_fields() as $field_name => $field) {
      $row = array();
      if (isset($field['bundles'][$entity_type]) && (isset($mappings['per-field'][$field_name]) || isset($mappings[$field['type']]))) {
        // Find the mapping.
        if (isset($mappings['per-field'][$field_name])) {
          $row = $mappings['per-field'][$field_name];
        }
        else {
          $row = $mappings[$field['type']];
        }
        // The field info array.
        $row['field'] = $field;

        // @todo: For fields like taxonomy we are indexing multiple Solr fields
        // per entity field, but are keying on a single Solr field name here.
        $function = !empty($row['name callback']) ? $row['name callback'] : NULL;
        if ($function && is_callable($function)) {
          $row['name'] = $function($field);
        }
        else {
          $row['name'] = $field['field_name'];
        }

        $index_key_map[$entity_type][$row['name']] = apachesolr_index_key($row);
      }
    }
  }

  if (isset($index_key_map[$entity_type])) {
    return $index_key_map[$entity_type];
  }
  return false;
}
