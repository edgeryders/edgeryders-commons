<?php

/**
 * @file
 */

/**
 * Returns possible expenses based on autocompleting a string.
 */
function pmexpense_autocomplete($string = '') {
  // Autocomplete for providers textbox: shows any active organizations in Project Management system which have been selected as providers.
  $matches = array();
  if ($string) {
    $search = drupal_strtolower($string);

    $query = db_select('node', 'n');
    $query->join('pmorganization', 'org', 'n.vid = org.vid');
    $query
      ->fields('n', array('title'))
      ->condition('n.status', 1)
      ->condition('n.type', 'pmorganization')
      ->condition('org.isprovider', 1)
      ->condition('org.isactive', 1)
      ->where('lower(title) like :search', array(':search' => '%'. db_like($search) .'%'))
      ->addTag('node_access')
      ->range(0, 10);

    $result = $query->execute();
    foreach ($result as $pro) {
      $matches[$pro->title] = check_plain($pro->title);
    }
  }

  drupal_json_output($matches);
}
