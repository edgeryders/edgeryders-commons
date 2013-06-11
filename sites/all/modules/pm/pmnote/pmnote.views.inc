<?php
/**
 * @file
 * Functions to expose pm note module data to views
 */
function pmnote_views_data() {
  $data['pmnote']['table']['group']  = t('Project Management Note');
  $data['pmnote']['table']['join'] = array(
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  $data['pmnote']['organization_nid'] = array(
    'title' => t('Organization'),
    'help' => t('Note -> Organization'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Note -> Organization'),
    ),
  );

  $data['pmnote']['organization_title'] = array(
    'title' => t('Organization'),
    'help' => t('Project Management Note Organization (title only)'),
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

  $data['pmnote']['project_nid'] = array(
    'title' => t('Project'),
    'help' => t('Note -> Project'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Note -> Project'),
    ),
  );

  $data['pmnote']['project_title'] = array(
    'title' => t('Project'),
    'help' => t('Project Management Note Project (title only)'),
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

  $data['pmnote']['task_nid'] = array(
    'title' => t('Task'),
    'help' => t('Note -> Task'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Note -> Task'),
    ),
  );

  $data['pmnote']['task_stepno'] = array(
    'title' => t('Task step number'),
    'help' => t('Project Management Note Task Step Number'),
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

  $data['pmnote']['task_title'] = array(
    'title' => t('Task'),
    'help' => t('Project Management Note Task (title only)'),
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

  $data['pmnote']['operation'] = array(
    'field' => array(
      'title' => t('Edit/Delete link'),
      'help' => t('Provide a simple link to edit and delete the node.'),
      'handler' => 'pm_handler_field_operation',
      'type' => 'pmnote',
    ),
  );

  return $data;
}

function pmnote_views_handlers() {
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
