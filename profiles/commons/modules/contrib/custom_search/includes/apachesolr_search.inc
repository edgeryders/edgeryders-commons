<?php

/**
 * @file
 * Path generation for Apache Solr Search.
 *
 * Available vars:
 * $keywords: user input
 * $types: content types (machine names[])
 * $terms: taxonomy terms (tids[])
 * $keys: complete search phrase, as core would have done it
 *
 * To return:
 * the complete search path
 *
 */

function _custom_search_apachesolr_search($variables) {
  $type = 'search/apachesolr_search/' . $variables['keywords'];
  $keys = array();

  if (count($variables['types']) && !in_array('all', $variables['types'])) {
    foreach ($variables['types'] as $t) {
      $keys['f[' . count($keys) . ']'] = 'bundle:' . $t;
    }
  }

  if (module_exists('taxonomy') && count($variables['terms'])) {
    // get all fields info to get correct filter names
    $fields = field_info_fields();
    $taxonomy_fields = array();
    foreach ($fields as $name => $settings) {
      if ($settings['type'] == 'taxonomy_term_reference') {
        $voc = taxonomy_vocabulary_machine_name_load($settings['settings']['allowed_values'][0]['vocabulary']);
        $taxonomy_fields[$voc->vid] = $name;
      }
    }
    // build keys for taxonomy
    foreach ($variables['terms'] as $t) {
      $vocid = taxonomy_term_load($t)->vid;
      $keys['f[' . count($keys) . ']'] = 'im_' . $taxonomy_fields[$vocid] . ':' . $t;
    }
  }

  return array('path' => $type, 'query' => $keys);
}