<?php

/**
 * @file
 * User page callbacks for the custom_search module.
 */

/*
 * Presents links to filter the search results.
 */
function custom_search_preprocess_search_results(&$variables) {
  if ($variables['module'] == 'node') {
    $variables['filter_position'] = variable_get('custom_search_filter', 'disabled');
    // Save # of results for collapsing advanced search.
    $GLOBALS['custom_search_nb_results'] = count($variables['results']);
    // Generate the filter.
    if (user_access('use custom search') && $variables['filter_position'] != 'disabled') {
      // Get search words (minus type:node_type).
      $path = explode('/', $_GET['q'], 3);
      $keys = empty($_REQUEST['keys']) ? '' : $_REQUEST['keys'];
      if (count($path) == 3) {
        $keys = $path[2];
      }
      if (strpos($keys, 'type:') !== FALSE) {
        $keys = drupal_substr($keys, 0, strpos($keys, 'type:') - 1);
      }
      // Get Custom Search authorized types.
      $searchable_node_types = variable_get('custom_search_node_types', array());
      $searchable_node_types = array_keys(array_filter($searchable_node_types, 'custom_search_filter_array'));
      if (!count($searchable_node_types)) {
        $searchable_node_types = array_keys(node_type_get_names());
      }
      $node_types = db_query("SELECT type, name FROM {node_type} WHERE type IN (:ntypes)", array(':ntypes' => $searchable_node_types));
      // Build menu.
      $items = array();
      $items[] = l(variable_get('custom_search_type_selector_all', CUSTOM_SEARCH_ALL_TEXT_DEFAULT), 'search/node/' . $keys);
      foreach ($node_types as $node_type) {
        // Count # of results per type.
        $nbresults = 0;
        foreach ($variables['results'] as $result) {
          if ($result['node']->type == $node_type->type) {
            $nbresults++;
          }
        }
        if ($nbresults) {
          $items[] = l($node_type->name, 'search/node/' . $keys . ' type:' . $node_type->type);
        }
      }
      if (!isset($variables['filter-title'])) {
        $variables['filter-title'] = filter_xss(variable_get('custom_search_filter_label', CUSTOM_SEARCH_FILTER_LABEL_DEFAULT));
      }
      if (count($items) > 2) {
        $variables['filter'] = theme('item_list', array('items' => $items, 'title' => $variables['filter-title']));
      }
    }
    $variables['theme_hook_suggestions'][] = 'custom_search_results';
  }
}

/*
 * Customisation of the results info.
 */
function custom_search_preprocess_search_result(&$variables) {
  $infos = array();
  // In Drupal 7 the content type is no longer in the info array.
  if (variable_get('custom_search_results_info_type', TRUE) && $variables['module'] == 'node') {
    $infos[] = $variables['result']['type'];
  }
  if (isset($variables['info_split'])) {
    foreach ($variables['info_split'] as $key => $info) {
      if (variable_get('custom_search_results_info_' . $key, TRUE)) {
        array_push($infos, $info);
      }
    }
  }
  $variables['info'] = implode(' - ', $infos);
  $variables['theme_hook_suggestions'][] = 'custom_search_result';
}
