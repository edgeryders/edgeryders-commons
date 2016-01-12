<?php
/**
 * @file
 * Integration with Views using Taxonomy Edge.
 *
 * Add extra views capabilities for Taxonomy Edge
 */

/**
 * Implements hook_views_data().
 */
function views_taxonomy_edge_views_data() {
  $data = array();

  // Taxonomy Edges.
  $data['taxonomy_term_edge']['table']['group']  = t('Taxonomy edge');

  // Joins for this table.
  $data['taxonomy_term_edge']['table']['join'] = array(
    'taxonomy_term_data' => array(
      'left_field' => 'tid',
      'field' => 'tid',
      'type' => 'INNER',
      'handler' => 'views_join_term_edge',
    ),
    'taxonomy_vocabulary' => array(
      'left_field' => 'vid',
      'field' => 'vid',
      'type' => 'INNER',
    ),
  );

  // Columns.
  $data['taxonomy_term_edge']['vid'] = array(
    'title' => t('Vocabulary ID'), // The item it appears as on the UI,
    'help' => t('The taxonomy vocabulary ID'),
  );

  $data['taxonomy_term_edge']['tid'] = array(
    'title' => t('Term ID'), // The item it appears as on the UI,
    'help' => t('The taxonomy term ID'),
    'relationship' => array(
      'base' => 'taxonomy_term_data',
      'field' => 'tid',
      'label' => t('Term ID'),
    ),
  );

  $data['taxonomy_term_edge']['parent'] = array(
    'title' => t('Parent term ID'), // The item it appears as on the UI,
    'help' => t('The parent taxonomy term ID'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'name field' => 'parent',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'taxonomy_term_data',
      'base field' => 'tid',
      'handler' => 'views_handler_relationship',
      'label' => t('Parent terms'),
      'title' => t('Parent terms'),
      'help' => t('The parents of the current term'),
    ),
  );

  $data['taxonomy_term_edge']['distance'] = array(
    'title' => t('Distance to root'), // The item it appears as on the UI,
    'help' => t('The taxonomy term\'s distance to the root'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'name field' => 'distance',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}
