<?php

/**
 * @file
 * Path generation for Search API.
 *
 * Available vars:
 * $keywords: user input
 * $types: content types (machine names[])
 * $terms: taxonomy terms (tids[])
 * $page: the Search API page
 *
 * To return:
 * the complete search path
 */

function _custom_search_search_api_search($variables) {

  $type = $variables['page']->path . '/' . $variables['keywords'];
  $keys = array();

  if (count($variables['types']) && !in_array('all', $variables['types'])) {
    foreach ($variables['types'] as $key => $value) {
      $keys["filter[type][$key]"] = "\"$value\"";
    }
  }

  if (module_exists('taxonomy') && count($variables['terms'])) {
    // Get index fields info, and keeps only the taxonomy ones.
    $index = search_api_index_load($variables['page']->index_id);
    $fields = array();
    foreach ($index->options['fields'] as $field => $data) {
      if (isset($data['entity_type']) && $data['entity_type'] == 'taxonomy_term') {
        $field_info = field_info_field($field);
        $fields[$field_info['settings']['allowed_values'][0]['vocabulary']] = $field;
      }
    }
    // Adds terms.
    foreach ($variables['terms'] as $key => $value) {
      $term = taxonomy_term_load($value);
      if (array_key_exists($term->vocabulary_machine_name, $fields)) {
        $keys['filter[' . $fields[$term->vocabulary_machine_name] . '][' . $key . ']'] = "\"$value\"";
      }
    }
  }

  return array('path' => $type, 'query' => $keys);

}
