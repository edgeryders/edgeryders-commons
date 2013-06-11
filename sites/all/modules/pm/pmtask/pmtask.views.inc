<?php
/**
 * @file
 * Functions to expose Project Management Task module data to the Views module.
 */

/**
 * Implements hook_views_data().
 */
function pmtask_views_data() {
  $data['pmtask']['table']['group']  = 'Project Management Task';
  $data['pmtask']['table']['join'] = array(
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  $data['pmtask']['stepno'] = array(
    'title' => t('Step number'),
    'help' => t('Project Management Task Step Number'),
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

  $data['pmtask']['organization_nid'] = array(
    'title' => t('Organization'),
    'help' => t('Task -> Organization'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Task -> Organization'),
    ),
  );

  $data['pmtask']['organization_title'] = array(
    'title' => t('Organization'),
    'help' => t('Project Management Task Organization (title only)'),
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

  $data['pmtask']['project_nid'] = array(
    'title' => t('Project'),
    'help' => t('Task -> Project'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Task -> Project'),
    ),
  );

  $data['pmtask']['project_title'] = array(
    'title' => t('Project'),
    'help' => t('Project Management Task Project (title only)'),
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

  $data['pmtask']['parent_nid'] = array(
    'title' => t('Parent task'),
    'help' => t('Task -> Parent Task'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Task -> Parent Task'),
    ),
  );

  $data['pmtask']['weight'] = array(
    'title' => t('Weight'),
    'help' => t('Project Management Task Weight'),
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

  $data['pmtask']['taskstatus'] = array(
    'title' => t('Status'),
    'help' => t('Project Management Task Status'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'pm_handler_field_attributes_domain',
      'domain' => 'Task Status',
      'icon' => 'status',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'pm_handler_filter_attributes_domain',
      'domain' => 'Task Status',
    ),
  );

  $data['pmtask']['taskcategory'] = array(
    'title' => t('Category'),
    'help' => t('Project Management Task Category'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'pm_handler_field_attributes_domain',
      'domain' => 'Task Category',
      'icon' => 'category',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'pm_handler_filter_attributes_domain',
      'domain' => 'Task Category',
    ),
  );

  $data['pmtask']['taskpriority'] = array(
    'title' => t('Priority'),
    'help' => t('Project Management Task Priority'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'pm_handler_field_attributes_domain',
      'domain' => 'Task Priority',
      'icon' => 'priority',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'pm_handler_filter_attributes_domain',
      'domain' => 'Task Priority',
    ),
  );

  $data['pmtask']['pricemode'] = array(
    'title' => t('Price mode'),
    'help' => t('Project Management Task Price Mode'),
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

  $data['pmtask']['price'] = array(
    'title' => t('Price'),
    'help' => t('Project Management Task Price'),
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

  $data['pmtask']['currency'] = array(
    'title' => t('Currency'),
    'help' => t('Project Management Task Currency'),
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

  $data['pmtask']['datebegin'] = array(
    'title' => t('Date begin'),
    'help' => t('Project Management Task Date Begin'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['pmtask']['dateend'] = array(
    'title' => t('Date end'),
    'help' => t('Project Management Task Date End'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['pmtask']['durationunit'] = array(
    'title' => t('Duration unit'),
    'help' => t('Project Management Task Duration Unit'),
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

  $data['pmtask']['duration'] = array(
    'title' => t('Duration'),
    'help' => t('Project Management Task Duration'),
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

  $data['pmtask']['assigned_nid'] = array(
    'title' => t('Assigned'),
    'help' => t('Task -> Assigned'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Task -> Assigned'),
    ),
  );

  $data['pmtask']['assigned_title'] = array(
    'title' => t('Assigned'),
    'help' => t('Project Management Task Assigned (title only)'),
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

  $data['pmtask']['billable'] = array(
    'title' => t('Task billable'),
    'help' => 'Project Management Task Billable',
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  $data['pmtask']['billed'] = array(
    'title' => t('Task billed'),
    'help' => 'Project Management Task Billed',
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  $data['pmtask']['operation'] = array(
    'field' => array(
      'title' => t('Edit/Delete link'),
      'help' => t('Provide a simple link to edit and delete the node.'),
      'handler' => 'pm_handler_field_operation',
      'type' => 'pmtask',
    ),
  );

  return $data;
}

/**
 * Implements hook_views_handlers().
 */
function pmtask_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'pm'),
    ),
    'handlers' => array(
      'pm_handler_field_attributes_domain' => array(
        'parent' => 'views_handler_field',
      ),
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

/**
 * Implements hook_date_api_fields().
 */
function pmtask_date_api_fields($field) {
  $values = array(
    'sql_type' => DATE_UNIX,
    'tz_handling' => 'site',
    'timezone_field' => '',
    'offset_field' => '',
    'related_fields' => array(),
    'granularity' => array('year', 'month', 'day', 'hour', 'minute', 'second'),
  );

  switch ($field) {
    case 'pmtask.datebegin':
    case 'pmtask.dateend':
      return $values;
  }

}

/**
 * Implement hook_date_api_tables().
 */
function pmtask_date_api_tables() {
  return array('pmtask');
}
