<?php
/**
 * @file
 * Functions to expose Project Management Project data to the views module
 */

/**
 * Implements hook_views_data().
 */
function pmproject_views_data() {
  $data['pmproject']['table']['group']  = 'Project Management Project';
  $data['pmproject']['table']['join'] = array(
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  $data['pmproject']['organization_nid'] = array(
    'title' => t('Organization'),
    'help' => t('Project -> Organization'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Project -> Organization'),
    ),
  );

  $data['pmproject']['organization_title'] = array(
    'title' => t('Organization'),
    'help' => t('Project Management Project Organization (title only)'),
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

  $data['pmproject']['projectstatus'] = array(
    'title' => t('Status'),
    'help' => t('Project Management Project Status'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'pm_handler_field_attributes_domain',
      'domain' => 'Project Status',
      'icon' => 'status',
    ),
    'filter' => array(
      'handler' => 'pm_handler_filter_attributes_domain',
      'domain' => 'Project Status',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['pmproject']['projectcategory'] = array(
    'title' => t('Category'),
    'help' => t('Project Management Project Category'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'pm_handler_field_attributes_domain',
      'domain' => 'Project Category',
      'icon' => 'projectcategory',
    ),
    'filter' => array(
      'handler' => 'pm_handler_filter_attributes_domain',
      'domain' => 'Project Category',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['pmproject']['projectpriority'] = array(
    'title' => t('Priority'),
    'help' => t('Project Management Project Priority'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'pm_handler_field_attributes_domain',
      'domain' => 'Project Priority',
      'icon' => 'priority'
    ),
    'filter' => array(
      'handler' => 'pm_handler_filter_attributes_domain',
      'domain' => 'Project Priority',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['pmproject']['pricemode'] = array(
    'title' => t('Price mode'),
    'help' => t('Project Management Project Price Mode'),
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

  $data['pmproject']['price'] = array(
    'title' => t('Price'),
    'help' => t('Project Management Project Price'),
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

  $data['pmproject']['currency'] = array(
    'title' => t('Currency'),
    'help' => t('Project Management Project Currency'),
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

  $data['pmproject']['datebegin'] = array(
    'title' => t('Date begin'),
    'help' => t('Project Management Project Date Begin'),
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

  $data['pmproject']['dateend'] = array(
    'title' => t('Date end'),
    'help' => t('Project Management Project Date End'),
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

  $data['pmproject']['duration unit'] = array(
    'title' => t('Duration unit'),
    'help' => t('Project Management Project Duration Unit'),
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

  $data['pmproject']['duration'] = array(
    'title' => t('Duration'),
    'help' => t('Project Management Project Duration'),
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

  $data['pmproject']['manager_nid'] = array(
    'title' => t('Manager'),
    'help' => t('Project -> Manager'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Project -> Manager'),
    ),
  );

  $data['pmproject']['manager_title'] = array(
    'title' => t('Project manager'),
    'help' => t('Project Management Project Manager (title only)'),
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

  $data['pmproject']['assigned_nid'] = array(
    'title' => t('Assigned'),
    'help' => t('Project -> Assigned'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Project -> Assigned'),
    ),
  );

  $data['pmproject']['assigned_title'] = array(
    'title' => t('Assigned'),
    'help' => t('Project Management Project Assigned (title only)'),
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

  $data['pmproject']['billable'] = array(
    'title' => t('Project billable'),
    'help' => 'Project Management Project Billable',
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

  $data['pmproject']['billed'] = array(
    'title' => t('Project billed'),
    'help' => 'Project Management Project Billed',
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

  $data['pmproject']['operation'] = array(
    'field' => array(
      'title' => t('Edit/Delete link'),
      'help' => t('Provide a simple link to edit and delete the node.'),
      'handler' => 'pm_handler_field_operation',
      'type' => 'pmproject',
    ),
  );

  return $data;
}

/**
 * Implements hook_views_handlers().
 */
function pmproject_views_handlers() {
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
 *
 * All modules that create custom fields that use the
 * 'views_handler_field_date' handler can provide
 * additional information here about the type of
 * date they create so the date can be used by
 * the Date API views date argument and date filter.
 */
function pmproject_date_api_fields($field) {
  $values = array(
    'sql_type' => DATE_UNIX,
    'tz_handling' => 'site',
    'timezone_field' => '',
    'offset_field' => '',
    'related_fields' => array(),
    'granularity' => array('year', 'month', 'day', 'hour', 'minute', 'second'),
  );

  switch ($field) {
    case 'pmproject.datebegin':
    case 'pmproject.dateend':
      return $values;
  }
}

/**
 * Implement hook_date_api_tables().
 */
function pmproject_date_api_tables() {
  return array('pmproject');
}
