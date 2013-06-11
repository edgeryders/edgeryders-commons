<?php

/**
 * Implements hook_views_data().
 */
function casetracker_views_data() {
  $data = array();
  $tables = array('casetracker_case', 'casetracker_case_states');
  foreach ($tables as $table) {
    $function = "casetracker_views_data_$table";
    $data += $function();
  }
  return $data;
}

// ---------- Table casetracker_case
/**
 * @todo Please document this function.
 * @see http://drupal.org/node/1354
 */
function casetracker_views_data_casetracker_case() {
  $data['casetracker_case']['table']['group']  = t('Case Tracker');
  $data['casetracker_case']['table']['join'] = array(
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );
  $data['casetracker_case']['pid'] = array(
    'title' => t('Project'),
    'field' => array(
      'handler' => 'casetracker_views_handler_field_project_name',
      'help' => t('Display the name of the Case Tracker project.'),
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'casetracker_views_handler_filter_project_options',
      'help' => t('Filter Case Tracker cases by their project.'),
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'help' => t('Filter Case Tracker cases by their project.'),
    ),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'node',
      'field' => 'nid',
      'label' => t('project'),
    ),
  );
  $data['casetracker_case']['assign_to'] = array(
    'title' => t('Assigned to'),
    'field' => array(
      'handler' => 'casetracker_views_handler_field_user_name',
      'help' => t('Display the user name the case has been assigned to.'),
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'casetracker_views_handler_filter_user_options',
      'help' => t('Filter Case Tracker cases by the assigned user.'),
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_user_uid',
      'help' => t('Filter Case Tracker cases by the assigned user.'),
    ),
    'relationship' => array(
      'help' => t('Relate a case to the user who have been assigned to the case.'),
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'uid',
      'label' => t('Assigned to'),
    ),
  );
  $data['casetracker_case']['case_priority_id'] = array(
    'title' => t('Case priority'),
    'field' => array(
      'handler' => 'casetracker_views_handler_field_priority_name',
      'help' => t('Display the priority of the case.'),
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'casetracker_views_handler_filter_priority_options',
      'help' => t('Filter Case Tracker cases by priority.'),
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
      'help' => t('Sort by Case Tracker priority.'),
    ),
    'argument' => array(
      'handler' => 'casetracker_views_handler_argument_priority',
      'help' => t('The Case Tracker priority ID.'),
    ),
  );
  $data['casetracker_case']['case_status_id'] = array(
    'title' => t('Case status'),
    'field' => array(
      'handler' => 'casetracker_views_handler_field_status_name',
      'help' => t('Display the status of the case.'),
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'casetracker_views_handler_filter_status_options',
      'help' => t('Filter Case Tracker cases by status.'),
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
      'help' => t('Sort by Case Tracker status.'),
    ),
    'argument' => array(
      'handler' => 'casetracker_views_handler_argument_status',
      'help' => t('The Case Tracker status ID.'),
    ),
  );
  $data['casetracker_case']['case_type_id'] = array(
    'title' => t('Case type'),
    'field' => array(
      'handler' => 'casetracker_views_handler_field_type_name',
      'help' => t('Display the type of the case.'),
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'casetracker_views_handler_filter_type_options',
      'help' => t('Filter Case Tracker cases by type.'),
    ),
    'argument' => array(
      'handler' => 'casetracker_views_handler_argument_type',
      'help' => t('The Case Tracker type ID.'),
    ),
  );
  $data['casetracker_case']['case_count'] = array(
    'title' => t('Project: Case count'),
    'field' => array(
      'field' => 'pid',
      'handler' => 'casetracker_views_handler_field_case_count',
      'help' => t('Provides a count and link to the cases in a given project.'),
    ),
  );

  return $data;
}

/**
 * @todo Please document this function.
 * @see http://drupal.org/node/1354
 */
function casetracker_views_data_casetracker_case_states() {
  $data['casetracker_case_states']['table']['group']  = t('Case Tracker');
  $data['casetracker_case_states']['table']['join'] = array(
    'node' => array(
      'left_table' => 'casetracker_case',
      'left_field' => 'case_status_id',
      'field' => 'csid',
    ),
  );
  $data['casetracker_case_states']['case_state_name'] = array(
    'title' => t('Case Tracker: State Name'),
    'sort' => array(
      'handler' => 'views_handler_sort',
      'help' => t('Sort by Case Tracker state name.'),
    ),
  );

  return $data;
}

/**
 * Implements hook_views_data_alter().
 */
function casetracker_views_data_alter(&$data) {
  $data['node']['case'] = array(
    'title' => t('Case Tracker case'),
    'help' => t('Whether the node is a casetracker case'),
    'filter' => array(
      'handler' => 'casetracker_views_handler_filter_case',
    ),
  );
  $data['node']['project'] = array(
    'title' => t('Case Tracker project'),
    'help' => t('Whether the node is a casetracker project'),
    'filter' => array(
      'handler' => 'casetracker_views_handler_filter_project',
    ),
  );
}

