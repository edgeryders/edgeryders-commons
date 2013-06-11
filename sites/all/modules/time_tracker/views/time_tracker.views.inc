<?php

/**
 * @file
 *   Views integration for time_tracker
 */

/**
 * Implements hook_views_data().
 */
function time_tracker_views_data() {
  $data['time_tracker_entry']['table']['group'] = t('Time Tracker');
  $data['time_tracker_entry']['table']['base'] = array(
    'field' => 'teid',
    'title' => t('Time Tracker'),
    'help' => t('Content generated from time tracker entries.'),
  );

  $entity_types = entity_get_info();
  foreach($entity_types as $key => $type){
    $bundles = $type['bundles'];
    foreach($bundles as $bkey => $bundle){
      $tracking = time_tracker_is_tracking_time($key, $bkey);
      if($tracking){
        $data['time_tracker_entry'][$type['entity keys']['id']] = array(
          'title' => t($type['label']),
          'help' => t('Relate an entry to its ' . $type['label'] . ' entity.'),
          'relationship' => array(
            'handler' => 'time_tracker_views_handler_relationship',
            'base' => $type['base table'],
            'base field' => $type['entity keys']['id'],
            'label' => t($type['label'] . ' ID'),
          ),
        );
      }
    }
  }

  $data['time_tracker_entry']['teid'] = array(
    'title' => t('ID'),
    'help' => t('Time Entry ID.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );

  $data['time_tracker_entry']['timestamp'] = array(
    'title' => t('Timestamp'),
    'help' => t('Timestamp of the Entry.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'time_tracker_views_handler_filter_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );
  $data['time_tracker_entry']['start'] = array(
    'title' => t('Start Time'),
    'help' => t('Start time of the Entry.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'time_tracker_views_handler_filter_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );
  $data['time_tracker_entry']['end'] = array(
    'title' => t('End Time'),
    'help' => t('End time of the Entry.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'time_tracker_views_handler_filter_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );
  $data['time_tracker_entry']['duration'] = array(
    'title' => t('Duration'),
    'help' => t('The Raw Time Entry Duration (without deductions).'),
    'field' => array(
      'handler' => 'time_tracker_views_handler_field_numeric',
      'float' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );
  $data['time_tracker_entry']['note'] = array(
    'title' => t('Note'),
    'help' => t('Notes for node-based time entries'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );
  $data['time_tracker_entry']['deductions'] = array(
    'title' => t('Deductions'),
    'help' => t('Time Entry Deductions.'),
    'field' => array(
      'handler' => 'time_tracker_views_handler_field_numeric',
      'float' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );
  $data['time_tracker_entry']['total_duration'] = array(
    'title' => t('Total Duration'),
    'help' => t('Time Entry Total Duration, minus the deductions'),
    'field' => array(
      'field' => 'time_tracker_total_duration',
      'handler' => 'time_tracker_views_handler_field_total_duration',
      'float' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );
  $data['time_tracker_entry']['billable'] = array(
    'title' => t('Billable'),
    'help' => t('Is the Entry Billable?'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );
  $data['time_tracker_entry']['billed'] = array(
    'title' => t('Billed'),
    'help' => t('Has the Entry been billed?'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );
  $data['time_tracker_entry']['locked'] = array(
    'title' => t('Locked'),
    'help' => t('Is the Entry Locked?'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );
  $data['time_tracker_entry']['uid'] = array(
    'title' => t('Author'),
    'help' => t('Relate an entry to the user who created it.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'uid',
      'label' => t('User'),
    ),
  );

  $data['time_tracker_entry']['comment_id'] = array(
    'title' => t('Comment'),
    'help' => t('Relate an entry to a comment.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'comment',
      'base field' => 'cid',
      'label' => t('Comment'),
    ),
  );
  $data['time_tracker_entry']['activity'] = array(
    'title' => t('Activity'),
    'help' => t('Relate an entry to an Activity Name.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'time_tracker_activity',
      'base field' => 'taid',
      'label' => t('Activity'),
    ),
  );

  $data['time_tracker_activity']['table']['join']['time_tracker_entry'] = array(
    'left_field' => 'activity',
    'field' => 'taid',
  );
  $data['time_tracker_activity']['table']['group'] = t('Time Tracker');

  $data['time_tracker_activity']['name'] = array(
    'title' => t('Activity Name'),
    'help' => t('Activity Name.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  return $data;
}


function time_tracker_form_views_exposed_form_alter(&$form, $form_state) {

  if (isset($form['timestamp']['min']) && isset($form['timestamp']['max']) && arg(0) != 'admin') {

    $start_date = $form['timestamp']['min']['#default_value'];
    $end_date = $form['timestamp']['max']['#default_value'];

    // Whaaaaa-aaaat?
    // This is a simple redirect if there is no ? in the file path
    // It's a hack, I know, but it works...
    if ( !isset($_GET['uid']) && !isset($_GET['timestamp']['min']) && !isset($_GET['timestamp']['max']) &&  !isset($_GET['pid']) && !isset($_GET['group_nid']) ) {
      drupal_goto($_GET['q'], array(
          'query' => array(
            'timestamp[min]' => $start_date,
            'timestamp[max]' => $end_date
          )
        )
      );
    }

  }
}

/**
 * Implements of hook_date_api_tables().
 */
function time_tracker_date_api_tables() {
  return array('time_tracker_entry');
}

/**
 * Implements hook_date_api_fields().
 *
 * This is required to allow timetracker timestamp
 * as a date argument in views.
 */
function time_tracker_date_api_fields($field) {
  $values = array(
    'sql_type' => DATE_UNIX,
    'tz_handling' => 'site',
    'timezone_field' => '',
    'offset_field' => '',
    'related_fields' => array(),
    'granularity' => array('year', 'month', 'day', 'hour', 'minute', 'second'),
  );

  switch ($field) {
    case 'time_tracker_entry.timestamp':
    case 'time_tracker_entry.start':
    case 'time_tracker_entry.end':
      return $values;
  }
}

/**
 * Implements hook_views_bulk_operations_object_info().
 */
function time_tracker_views_bulk_operations_object_info() {
  $object_info = array(
    'time_tracker_entry' => array(
      'type' => 'time_tracker',
      'base_table' => 'time_tracker_entry',
      'load' => '_time_tracker_entry_load',
      'oid' => 'teid',
      'title' => 'title',
    ),
  );
  return $object_info;
}
