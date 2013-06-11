<?php
/**
 * @file
 * Functions to expose Project Management Team module data to the Views module.
 */

/**
 * Implements hook_views_data().
 */
function pmteam_views_data() {
  $data['pmteam']['table']['group']  = 'Project Management Team';
  $data['pmteam']['table']['join'] = array(
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  $data['pmteam']['mnid'] = array(
    'title' => t('Team member nid'),
    'help' => 'Project Management Team Members',
    'field' => array(
      'handler' => 'views_handler_field_node',
      'click sortable' => FALSE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_node_nid',
      'parent' => 'views_handler_argument_numeric',
      'numeric' => TRUE,
      'validate type' => 'nid',
    ),
    // Information for accepting a nid as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_nid',
    ),
    // Information for sorting on a nid.
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Member -> Node'),
    ),
  );

  $data['pmteam']['operation'] = array(
    'field' => array(
      'title' => t('Edit/Delete link'),
      'help' => t('Provide a simple link to edit and delete the node.'),
      'handler' => 'pm_handler_field_operation',
      'type' => 'pmteam',
    ),
  );

  return $data;
}

/**
 * Implements hook_views_handlers().
 */
function pmteam_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'pm'),
    ),
    'handlers' => array(
      'pm_handler_field_operation' => array(
        'parent' => 'views_handler_field_node_link',
      ),
    ),
  );
}
