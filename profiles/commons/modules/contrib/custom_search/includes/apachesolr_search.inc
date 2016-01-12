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
 */

function _custom_search_apachesolr_search($variables, &$keys, $fields) {
  // Use the search info for the apachesolr module to get the search path.
  $solr_info = apachesolr_search_search_info();
  $type = 'search/' . $solr_info['path'] . '/' . $variables['keywords'];
  $keys = array();

  if (count($variables['types']) && !in_array('all', $variables['types'])) {
    foreach ($variables['types'] as $t) {
      $keys['fq[' . count($keys) . ']'] = 'bundle:' . $t;
    }
  }

  if (module_exists('taxonomy') && count($variables['terms'])) {
    // Get all fields info to get correct filter names.
    $taxonomy_fields = array();
    foreach ($fields as $name => $settings) {
      if ($settings['type'] == 'taxonomy_term_reference') {
        $voc = taxonomy_vocabulary_machine_name_load($settings['settings']['allowed_values'][0]['vocabulary']);
        $taxonomy_fields[$voc->vid] = $name;
      }
    }
    // Build keys for taxonomy.
    foreach ($variables['terms'] as $t) {
      $vocid = taxonomy_term_load($t)->vid;
      $keys['fq[' . count($keys) . ']'] = 'im_' . $taxonomy_fields[$vocid] . ':' . $t;
    }
  }

  foreach (module_implements('custom_search_apachesolr_processing') as $module) {
    $function = $module . '_custom_search_apachesolr_processing';
    
    if (function_exists($function)) {
      call_user_func_array($function, array(&$keys, $fields, $variables['other']));
    }
  }
  return array('path' => $type, 'query' => $keys);
}
