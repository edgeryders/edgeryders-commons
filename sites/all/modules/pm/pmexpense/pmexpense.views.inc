<?php
/**
 * @file
 * Functions to expose Project Management expense data to views
 */
function pmexpense_views_data() {
  $data['pmexpense']['table']['group']  = t('Project Management Expense');
  $data['pmexpense']['table']['join'] = array(
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  $data['pmexpense']['organization_nid'] = array(
    'title' => t('Organization'),
    'help' => t('Expense -> Organization'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Expense -> Organization'),
    ),
  );

  $data['pmexpense']['organization_title'] = array(
    'title' => t('Organization'),
    'help' => t('Project Management Expense: Organization (title only)'),
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

  $data['pmexpense']['project_nid'] = array(
    'title' => t('Project'),
    'help' => t('Expense -> Project'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Expense -> Project'),
    ),
  );

  $data['pmexpense']['project_title'] = array(
    'title' => t('Project'),
    'help' => t('Project Management Expense Project (title only)'),
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

  $data['pmexpense']['task_nid'] = array(
    'title' => t('Task'),
    'help' => t('Expense -> Task'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Expense -> Task'),
    ),
  );

  $data['pmexpense']['task_stepno'] = array(
    'title' => t('Task step number'),
    'help' => t('Project Management Expense Task Step Number'),
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

  $data['pmexpense']['task_title'] = array(
    'title' => t('Task'),
    'help' => t('Project Management Expense Task (title only)'),
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

  $data['pmexpense']['ticket_nid'] = array(
    'title' => t('Ticket'),
    'help' => t('Expense -> Ticket'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Expense -> Ticket'),
    ),
  );

  $data['pmexpense']['ticket_title'] = array(
    'title' => t('Ticket'),
    'help' => t('Project Management Expense Ticket (title only)'),
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

  $data['pmexpense']['provider_nid'] = array(
    'title' => t('Provider'),
    'help' => t('Expense -> Provider'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Expense -> Provider'),
    ),
  );

  $data['pmexpense']['provider_title'] = array(
    'title' => t('Provider'),
    'help' => t('Project Management Expense Provider (title only)'),
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

  $data['pmexpense']['expensedate'] = array(
    'title' => t('Date'),
    'help' => t('Project Management Expense Date'),
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

  $data['pmexpense']['amount'] = array(
    'title' => t('Amount'),
    'help' => t('Project Management Expense Amount'),
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

  $data['pmexpense']['tax'] = array(
    'title' => t('Tax'),
    'help' => t('Project Management Expense Tax'),
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

  $data['pmexpense']['total'] = array(
    'title' => t('Total'),
    'help' => t('Project Management Expense Total'),
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

  $data['pmexpense']['billable'] = array(
    'title' => t('Expense billable'),
    'help' => 'Project Management Expense Billable',
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'label' => t('Expense billable'),
      'type' => 'yes-no',
      'handler' => 'views_handler_filter_boolean_operator',
      'use equal' => TRUE,
    ),
  );

  $data['pmexpense']['billed'] = array(
    'title' => t('Expense billed'),
    'help' => 'Project Management Expense Billed',
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'label' => t('Expense billed'),
      'type' => 'yes-no',
      'handler' => 'views_handler_filter_boolean_operator',
      'use equal' => TRUE,
    ),
  );

  $data['pmexpense']['operation'] = array(
    'field' => array(
      'title' => t('Edit/Delete link'),
      'help' => t('Provide a simple link to edit and delete the node.'),
      'handler' => 'pm_handler_field_operation',
      'type' => 'pmexpense',
    ),
  );

  return $data;
}

function pmexpense_views_handlers() {
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

function pmexpense_date_api_fields($field) {
  $values = array(
    'sql_type' => DATE_UNIX,
    'tz_handling' => 'site',
    'timezone_field' => '',
    'offset_field' => '',
    'related_fields' => array(),
    'granularity' => array('year', 'month', 'day'),
  );

  switch ($field) {
    case 'pmexpense.expensedate':
      return $values;
  }

}

function pmexpense_date_api_tables() {
  return array('pmexpense');
}
