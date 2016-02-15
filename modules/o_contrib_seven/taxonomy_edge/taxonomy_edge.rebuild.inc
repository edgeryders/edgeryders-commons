<?php
/**
 * @file
 * This file contains the functions for reuilding various tables.
 */

/**
 * Start batch job for rebuild of edges.
 */
function taxonomy_edge_rebuild_edges_batch($vids) {
  $batch = array(
    'finished' => 'taxonomy_edge_rebuild_finished',
    'file' => drupal_get_path('module', 'taxonomy_edge') . '/taxonomy_edge.rebuild.inc',
    'title' => t('Rebuilding taxonomy edges'),
    'init_message' => t('Rebuilding taxonomy edges'),
  );
  foreach ($vids as $vid) {
    $batch['operations'][] = array('taxonomy_edge_rebuild_edges', array($vid));
  }
  batch_set($batch);
}

/**
 * Start batch job for rebuild of order.
 */
function taxonomy_edge_rebuild_order_batch($vids) {
  $batch = array(
    'finished' => 'taxonomy_edge_rebuild_finished',
    'file' => drupal_get_path('module', 'taxonomy_edge') . '/taxonomy_edge.rebuild.inc',
    'title' => t('Rebuilding taxonomy edge order'),
    'init_message' => t('Rebuilding taxonomy edge order'),
  );
  foreach ($vids as $vid) {
    $batch['operations'][] = array('taxonomy_edge_rebuild_order', array($vid));
  }
  batch_set($batch);
}

/**
 * Start batch job for rebuild of edges and order.
 */
function taxonomy_edge_rebuild_all_batch($vids) {
  $batch = array(
    'finished' => 'taxonomy_edge_rebuild_finished',
    'file' => drupal_get_path('module', 'taxonomy_edge') . '/taxonomy_edge.rebuild.inc',
    'title' => t('Rebuilding taxonomy edges and order'),
    'init_message' => t('Rebuilding taxonomy edges and order'),
  );
  foreach ($vids as $vid) {
    $batch['operations'][] = array('taxonomy_edge_rebuild_edges', array($vid));
    $batch['operations'][] = array('taxonomy_edge_rebuild_order', array($vid));
  }
  batch_set($batch);
}

/**
 * Finished function for rebuild tree batch operation.
 */
function taxonomy_edge_rebuild_finished($success, $results, $operations) {
  if ($success) {
    // Here we do something meaningful with the results.
    $message = theme('item_list', array('items' => $results));
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    $message = t('An error occurred while processing %error_operation with arguments: @arguments', array('%error_operation' => $error_operation[0], '@arguments' => print_r($error_operation[1], TRUE)));
  }
  drupal_set_message($message, 'status');
}

/**
 * Rebuild entire edge list.
 *
 * @return integer
 *   Total number of rows inserted.
 */
function taxonomy_edge_rebuild_edges($vid, &$context) {
  $depth = 0;
  $max_depth = variable_get('taxonomy_edge_max_depth', TAXONOMY_EDGE_MAX_DEPTH);

  $vocabulary = taxonomy_vocabulary_load($vid);
  if (!$vocabulary) {
    $context['success'] = FALSE;
    $context['results'][] = t('Invalid vocabulary ID: %vid', array('%vid' => $vid));
    return;
  }

  // Acquire lock to avoid conflicts with queue.
  if (!lock_acquire('taxonomy_edge_rebuild_edges_' . $vid)) {
    $context['success'] = FALSE;
    $context['results'][] = t('Could not acquire lock!');
    return;
  }

  $time = microtime(TRUE);
  set_time_limit(86400);

  // Clear the queue, we're rebulding anyways ...
  $queue = DrupalQueue::get('taxonomy_edge', TRUE);
  $queue->deleteQueue();

  // Please use a proper isolation level, so that transaction provides us with a
  // snapshot.
  $tx = db_transaction();

  // Clear out edge data for vocabulary.
  taxonomy_edge_taxonomy_vocabulary_insert($vocabulary);
  $total_rows = 1;

  $result = db_query("INSERT INTO {taxonomy_term_edge} (vid, tid, parent, distance)
    SELECT DISTINCT d.vid, h.tid, h.tid, 0
    FROM {taxonomy_term_hierarchy} h
    INNER JOIN {taxonomy_term_data} d ON d.tid = h.tid
    WHERE h.tid <> 0
    AND h.tid <> h.parent
    AND d.vid = :vid
  ", array(':vid' => $vid));
  $total_rows += $result->rowCount();

  $context['message'] = t('Processed %rows rows - current depth: %depth', array('%rows' => $total_rows, '%depth' => $depth));
  $context['finished'] = 0.5;

  while ($max_depth-- > 0) {
    $result = db_query("INSERT INTO {taxonomy_term_edge} (vid, tid, parent, distance)
      SELECT e.vid, e.tid, h.parent, e.distance + 1
      FROM {taxonomy_term_edge} e
      INNER JOIN {taxonomy_term_hierarchy} h ON h.tid = e.parent
      INNER JOIN {taxonomy_term_data} d ON d.tid = h.tid
      WHERE e.distance = :depth
      AND e.vid = :vid
      AND h.tid <> 0
      AND h.tid <> h.parent
    ", array(':vid' => $vid, ':depth' => $depth));

    $rows = $result->rowCount();
    if ($rows <= 0) {
      break;
    }

    $depth++;

    $total_rows += $rows;
    $context['message'] = t('Processed %rows rows - current depth: %depth', array('%rows' => $total_rows, '%depth' => $depth));
    $context['finished'] += (1 - $context['finished']) / 2;
  }
  taxonomy_edge_invalidate_order($vid);
  lock_release('taxonomy_edge_rebuild_edges_' . $vid);

  $context['success'] = TRUE;
  $context['finished'] = 1;
  $context['results'][] = t('%name rebuilt: %rows processed with depth %depth in %time seconds',
      array('%rows' => $total_rows, '%depth' => $depth, '%time' => sprintf("%.03f", microtime(TRUE) - $time), '%name' => $vocabulary->name)
  );

  return $total_rows;
}

/**
 * Rebuild the sorted tree.
 */
function taxonomy_edge_rebuild_order($vid, &$context) {
  $vocabulary = taxonomy_vocabulary_load($vid);
  if (!$vocabulary) {
    $context['success'] = FALSE;
    $context['message'] = t('Invalid vocabulary ID: %vid', array('%vid' => $vid));
    return;
  }

  // Acquire lock.
  if (!lock_acquire('taxonomy_edge_rebuild_edges_' . $vid)) {
    $context['success'] = FALSE;
    $context['message'] = t('Could not acquire lock!');
    return;
  }

  $tx = db_transaction();

  $time = microtime(TRUE);
  taxonomy_edge_invalidate_order($vid);
  db_query("DELETE FROM {taxonomy_term_edge_order} WHERE vid = :vid", array(':vid' => $vid));

  $total_rows = db_query("INSERT INTO {taxonomy_term_edge_order} (vid, parent, eid)
    SELECT op.vid, op.parent, op.eid
    FROM {taxonomy_term_edge} op
    WHERE op.vid = :vid
    ORDER BY " . _taxonomy_edge_generate_term_path_query('op.tid'),
    array(':vid' => $vid))->rowCount();

  $context['success'] = TRUE;
  $context['finished'] = 1;
  $context['results'][] = t('%name sorted: %rows edges in %time seconds',
      array('%rows' => $total_rows, '%time' => sprintf("%.03f", microtime(TRUE) - $time), '%name' => $vocabulary->name)
  );

  db_insert('taxonomy_term_edge_order')
    ->fields(array('vid' => -$vid))
    ->execute();

  lock_release('taxonomy_edge_rebuild_edges_' . $vid);
}
