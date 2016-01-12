<?php
/**
 * @file
 * Drush commands for Taxonomy Edge.
 */

/**
 * Implements hook_drush_command().
 */
function taxonomy_edge_drush_command() {
  $items = array();

  $items['rebuild-edges'] = array(
    'description' => "Rebuild tree edges.",
    'arguments' => array(
      'type' => 'Name of the vocabulary (e.g. tags)',
    ),
    'options' => array(
      'order' => 'Rebuild order',
    ),
    'examples' => array(
      'drush rebuild-edges tags --order' => 'Rebuild edges and order for vocabulary "tags"',
    ),
  );

  $items['rebuild-order'] = array(
    'description' => "Rebuild order for a tree.",
    'arguments' => array(
      'type' => 'Name of the vocabulary (e.g. tags)',
    ),
    'examples' => array(
      'drush rebuild-order tags' => 'Rebuild order for vocabulary "tags"',
    ),
  );
  return $items;
}

/**
 * Implements hook_drush_help().
 */
function taxonomy_edge_drush_help($section) {
  switch ($section) {
    case 'drush:rebuild-edges':
      return dt("This command will rebuild the edges for a vocabulary.");

    case 'drush:rebuild-order':
      return dt("This command will rebuild the order for a vocabulary.");
  }
}

/**
 * Get vocabulary id by machine name.
 *
 * @param string $name
 *   The vocabulary machine name.
 *
 * @return integer
 *   The vocabulary ID, FALSE if not found.
 */
function _drush_taxonomy_edge_get_vid($name) {
  $vocabulary = taxonomy_vocabulary_machine_name_load($name);
  if (!$vocabulary) {
    return drush_set_error(dt('Vocabulary: !name not found!.', array('!name' => $name)));
  }
  $vid = $vocabulary->vid;
  return $vid;
}

/**
 * Rebuild edges.
 */
function drush_taxonomy_edge_rebuild_edges($name) {
  $vid = _drush_taxonomy_edge_get_vid($name);
  if (!$vid) {
    return $vid;
  }

  module_load_include('rebuild.inc', 'taxonomy_edge');

  $function = drush_get_option('order') ? 'taxonomy_edge_rebuild_all_batch' : 'taxonomy_edge_rebuild_edges_batch';
  $function(array($vid));
  $batch = &batch_get();
  $batch['progressive'] = FALSE;
  drush_backend_batch_process();
}

/**
 * Rebuild order.
 */
function drush_taxonomy_edge_rebuild_order($name) {
  $vid = _drush_taxonomy_edge_get_vid($name);
  if (!$vid) {
    return $vid;
  }

  module_load_include('rebuild.inc', 'taxonomy_edge');

  taxonomy_edge_rebuild_order_batch(array($vid));
  $batch = &batch_get();
  $batch['progressive'] = FALSE;
  drush_backend_batch_process();
}
