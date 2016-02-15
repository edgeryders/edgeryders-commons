<?php

/**
 * @file
 * Inclues the legacy function apachesolr_get_index_key_map.
 */

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
