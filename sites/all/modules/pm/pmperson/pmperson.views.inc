<?php
/**
 * @file
 * Functions to expose Project Management Person module data to the Views module.
 */
function pmperson_views_data() {
  $data['pmperson']['table']['group']  = 'Project Management Person';
  $data['pmperson']['table']['join'] = array(
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  $data['pmperson']['organization_nid'] = array(
    'title' => t('Organization'),
    'help' => t('Person -> Organization'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Person -> Organization'),
    ),
  );

  $data['pmperson']['organization_title'] = array(
    'title' => t('Organization'),
    'help' => t('Project Management Person Organization (title only)'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['pmperson']['prefix'] = array(
    'title' => t('Prefix'),
    'help' => t('Project Management Person Prefix'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['pmperson']['email'] = array(
    'title' => t('Email'),
    'help' => t('Project Management Person Email'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['pmperson']['www'] = array(
    'title' => t('WWW'),
    'help' => t('Project Management Person WWW'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['pmperson']['phone'] = array(
    'title' => t('Phone'),
    'help' => t('Project Management Person Phone'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pmperson']['im'] = array(
    'title' => t('IM'),
    'help' => t('Project Management Person IM'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['pmperson']['user_uid'] = array(
    'title' => t('Drupal user'),
    'help' => t('Project Management Person -> Drupal User'),
    'relationship' => array(
      'base' => 'users',
      'base field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('Person -> User'),
    ),
  );

  $data['pmperson']['operation'] = array(
    'field' => array(
      'title' => t('Edit/Delete link'),
      'help' => t('Provide a simple link to edit and delete the node.'),
      'handler' => 'pm_handler_field_operation',
      'type' => 'pmperson',
    ),
  );

  return $data;
}

function pmperson_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'pm'),
    ),
    'handlers' => array(
      'pm_handler_filter_attributes_domain' => array(
        'parent' => 'views_handler_filter_in_operator',
      ),
      'pm_handler_field_operation' => array(
        'parent' => 'views_handler_field_node_link',
        'path' => drupal_get_path('module', 'pm'),
      ),
    ),
  );
}
