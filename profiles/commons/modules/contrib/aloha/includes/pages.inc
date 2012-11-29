<?php

/**
 * @file
 * Aloha Editor Repository API page callbacks.
 */

/**
 * Page callback: looks up relevant links in the site given a keyword.
 *
 * @param string $lookup
 *   The keyword to look up relevant links for.
 *
 * @return string
 *   A JSON-encoded result.
 */
function aloha_repository_link($lookup = false) {
  $lookup = check_plain($lookup);

  $search_results = node_search_execute($lookup);

  if (is_array($search_results) && empty($search_results[0])) {
    $search_results = false;
  }

  if (is_array($search_results)) {
    $json = array();
    foreach ($search_results as $result) {
      $json[] = array(
        'u' => $result['link'],
        't' => $result['title'],
        's' => $result['score'],
      );
    }
    print drupal_json_encode($json);
    exit;
  }
}

/**
 * Page callback: looks up relevant images in the site given a keyword.
 *
 * Note that also files with status = 0 are returned, i.e. those who were
 * uploaded at some point in time, but not necessarily used.
 *
 * @param string $lookup
 *   The keyword to look up relevant images for.
 *
 * @return string
 *   A JSON-encoded result.
 */
function aloha_repository_image($lookup) {
  $result = db_query("SELECT * FROM {file_managed} WHERE SUBSTRING(filemime, 1, 6) = 'image/' AND filename LIKE :lookup ORDER BY timestamp DESC", array(
    ':lookup' => "%$lookup%"
  ));

  $json = array();
  foreach ($result as $record) {
    $json[] = array(
      'u' => file_create_url($record->uri),
      't' => $record->filename,
      's' => 1.0,
    );
  }

  print drupal_json_encode($json);
  exit;
}
