<?php
/**
 * @file
 * Theme functions for time_tracker.
 *
 */

/**
 * Theme the activity table as a sortable list of activities.
 *
 * @ingroup themeable
 * @see time_tracker_activity_table()
 */
function theme_time_tracker_activity_table($form) {
  // For some reason form comes in an empty array...
  $form = $form['form'];

  if(!empty($form['activities'])){
    // Take all the form elements and format theme for theme_table
    foreach (element_children($form['activities']) as $key) {
      if (isset($form['activities'][$key]['name'])) {
        // Add the table drag functionality
        drupal_add_tabledrag('activity-table', 'order', 'sibling', 'activity-weight');
        // Add class to group weight fields for drag and drop.
        $form['activities'][$key]['weight']['#attributes']['class'] = array('activity-weight');
        // array to store row data
        $rows[] = array(
          'data' => array(
            drupal_render($form['activities'][$key]['name']),
            drupal_render($form['activities'][$key]['status']),
            drupal_render($form['activities'][$key]['delete']),
            drupal_render($form['activities'][$key]['weight']),
          ),
          'class' => array('draggable'),
        );
      }
    }
    // The table headers
    $header = array(
      t('Activity Name'),
      t('Enabled'),
      t('Delete'),
      t('Weight')
    );

    $table = array(
      'header' => $header,
      'rows' => $rows,
      'attributes' => array('id' => array('activity-table')),
    );
    // Theme it as a table
    $output = theme('table', $table);

    // Render the form
    $output .= drupal_render_children($form);
  }
  else {
    $output = drupal_render_children($form);
  }

  // Return the themed activities table
  return $output;
}

/**
 * Theme function for showing time entries on nodes
 *
 * @param $time_entries
 *    An array of time entry database objects.
 *    Time entry object contains properties:
 *      $obj->teid: The time entry id
 *      $obj->nid: The node id this time entry is attached to
 *      $obj->uid: The user id to whom this time entry belongs
 *      $obj->cid: If applicable, the comment id for this time entry
 *      $obj->pid: If applicable, the casetracker project id for this time entry (removed)
 *      $obj->activity: The time entry Activity
 *      $obj->timestamp: The unix timestamp of when this time entry was dated
 *      $obj->start: If tracking time by interval, the start time of the entry
 *      $obj->end: If tracking time by interval, the end time of the entry
 *      $obj->duration: The time entry duration in HOURS
 *      $obj->note: Any notes about the time entry (Empty for time tracked on comments)
 *      $obj->billable: Whether this is billable or not (0 => no, 1 => yes)
 *      $obj->locked: Whether this entry has been locked, requires extra permissions
 */
function theme_time_tracker_time_entry_table($time_entries) {
  global $user;
  // Add the css for some base theming of the table
  drupal_add_css(drupal_get_path('module', 'time_tracker') . '/css/time_tracker.css');
  //Some Variables to make this happen
  $rows[] = array();
  //Setting up the table headers
  $header = array(
    array('data' => t('User')),
    array('data' => t('Activity')),
  );
  // If the deductions field is on
  if (variable_get('enable_deductions_field', 0)) {
    $header[] = array('data' => t('Duration'));
    $header[] = array('data' => t('Deductions'));
    $header[] = array('data' => t('Total'));
  }
  else {
    $header[] = array('data' => t('Duration'));
  }
  // These columns are always there
  $header[] = array('data' => t('Time'));
  $header[] = array('data' => t('Note'));
  // Only show the billed and billable fields if they're on
  if (variable_get('enable_billable_field', 0)) {
    $header[] = array('data' => t('Billable'));
  }
  if (variable_get('enable_billed_field', 0)) {
    $header[] = array('data' => t('Billed'));
  }
  // Need to add the operations column if permissions allow it
  if (user_access('edit any time tracker entry') || user_access('edit own time tracker entries') || user_access('administer time entries')) {
    $header[] = array('data' => t('Ops'));
  }
  //Loop through the time entries and add them to the table
  foreach ($time_entries as $time_entry) {
    if (user_access('view all time tracker entries') || (user_access('view own time tracker entries') && $GLOBALS['user']->uid == $time_entry->uid)) {
      // Special formatting for duration based time entries
      if (variable_get('time_entry_method', 'duration') == 'duration') {
        $time = format_date($time_entry->timestamp, 'custom', variable_get('timestamp_date_format', 'F d, Y'));
      }
      // Special formatting for interval based time entries
      elseif (variable_get('time_entry_method', 'duration') == 'interval') {
        if ($time_entry->start && $time_entry->end) {
          $time = '' . format_date($time_entry->start, 'custom', variable_get('time_interval_date_format', 'h:i A - M d, Y')) . '<br/>' . format_date($time_entry->end, 'custom', variable_get('time_interval_date_format', 'h:i A - M d, Y'));
        }
        else {
          $time = format_date($time_entry->timestamp, 'custom', variable_get('timestamp_date_format', 'F d, Y')) . '<br/>Entered as Duration';
        }
      }
      // Populate the row
      $row = array(//row
        'data' => array( //row data
          array( //Cell1
            'data' => user_load($time_entry->uid)->name,
            'class' => 'time_entry_username',
          ),
          array( //Cell2
            'data' => _time_tracker_get_activity_name($time_entry->activity),
            'class' => 'time_entry_activity',
          ),
          array( //Cell3
            'data' => _time_tracker_format_hours_to_hours_and_minutes($time_entry->duration),
            'class' => 'time_entry_duration',
          ),
        ),
        'class' => '', //row class
      );//endrow
      if (variable_get('enable_deductions_field', 0)) {
        $row['data'][] = array( //Cell6
          'data' => _time_tracker_format_hours_to_hours_and_minutes($time_entry->deductions),
          'class' => 'time_entry_deductions',
        );
        $row['data'][] = array( //Cell6
          'data' => _time_tracker_format_hours_to_hours_and_minutes($time_entry->duration - $time_entry->deductions),
          'class' => 'time_entry_total',
        );
      }
      // The time field is not optional
      $row['data'][] = array( //Cell4
        'data' => $time,
        'class' => 'time_entry_time',
      );
      // The note field is not optional
      $row['data'][] = array( //Cell5
        'data' => $time_entry->note,
        'class' => 'time_entry_note',
      );
      if (variable_get('enable_billable_field', 0)) {
        $row['data'][] = array( //Cell6
          'data' => $time_entry->billable ? t('Yes') : t('No'),
          'class' => 'time_entry_billable',
        );
      }
      if (variable_get('enable_billed_field', 0)) {
        $row['data'][] = array( //Cell6
          'data' => $time_entry->billed ? t('Yes') : t('No'),
          'class' => 'time_entry_billed',
        );
      }
      if (user_access('edit any time tracker entries') || user_access('edit own time tracker entries') || user_access('administer time entries')) {
        // If entry is locked and user does not have proper permissions
        if (variable_get('allow_locked_time_entries', 0) && $time_entry->locked && !user_access('administer time entries')) {
          $row['data'][] = array( //Cell6
            'data' => t('locked'),
            'class' => 'time_entry_edit',
          );
        }
        else {
          if($user->uid == $time_entry->uid || user_access('administer time entries')){
            $destination = drupal_get_destination();
            $destination = $destination['destination'];
            $row['data'][] = array( //Cell6
              'data' => l(t('edit'), 'time_entry/edit/' . $time_entry->teid),
              'class' => 'time_entry_edit',
            );
          }
        }
      }
      $rows[] = $row;
    }
  }


  $form = array();
  $form['time_tracker_time_entries'] = array(
    '#type' => 'fieldset',
    '#title' => t('Time Tracker Time Entries'),
    '#collapsible' => TRUE,
    '#collapsed' => variable_get('time_entry_table_default_collapsed', 0),
  );

  $table = array(
    'header' => $header,
    'rows' => $rows,
    'attributes' => array('class' => array('time_tracker_time_entries')),
  );
  $form['time_tracker_time_entries']['entry_table'] = array(
    '#markup' => theme('table', $table),
  );
  return drupal_render($form);
}

/**
 * Theme function for time entries on comments.
 *
 * @param $time_entry
 *    A time entry database object.
 *    Time entry object contains properties:
 *      $obj->teid: The time entry id
 *      $obj->nid: The node id this time entry is attached to
 *      $obj->uid: The user id to whom this time entry belongs
 *      $obj->cid: If applicable, the comment id for this time entry
 *      $obj->pid: If applicable, the casetracker project id for this time entry (deprecated)
 *      $obj->activity: The time entry Activity
 *      $obj->timestamp: The unix timestamp of when this time entry was dated
 *      $obj->start: If tracking time by interval, the start time of the entry
 *      $obj->end: If tracking time by interval, the end time of the entry
 *      $obj->duration: The time entry duration in HOURS
 *      $obj->note: Any notes about the time entry (Empty for time tracked on comments)
 *      $obj->billable: Whether this is billable or not (0 => no, 1 => yes)
 *      $obj->locked: Whether this entry has been locked, requires extra permissions
 */
function theme_time_tracker_comment($time_entry) {
  $time_entry = $time_entry['data'];
  if ($time_entry) {
    $rows = array();
    $time = '';

    $activity = _time_tracker_get_activity_name($time_entry->activity);
    if ($activity) {
      $activity = '(' . $activity . ') ';
    }

    // If there is a time start and end, it's a time entry that was logged as an interval
    if ($time_entry->start && $time_entry->end) {
      //Setting up the table headers
      $header[] = array('data' => t('Duration'));
      if (variable_get('enable_deductions_field', 0)) {
        $header[] = array('data' => t('Deductions'));
        $header[] = array('data' => t('Total'));
      }
      $header[] = array('data' => t('Activity'));
      $header[] = array('data' => t('Start'));
      $header[] = array('data' => t('End'));
      if (variable_get('enable_billable_field', 0)) {
        $header[] = array('data' => t('Billable'));
      }
      if (variable_get('enable_billed_field', 0)) {
        $header[] = array('data' => t('Billed'));
      }

      $row = array(//row
        'data' => array( //row data
          array( //Cell3
            'data' => _time_tracker_format_hours_to_hours_and_minutes($time_entry->duration),
            'class' => 'time_entry_duration',
          ),
        ),
        'class' => '', //row class
      );//endrow
      if (variable_get('enable_deductions_field', 0)) {
        $row['data'][] = array(
          'data' => _time_tracker_format_hours_to_hours_and_minutes($time_entry->deductions),
          'class' => 'time_entry_deductions',
        );
        $row['data'][] = array(
          'data' => _time_tracker_format_hours_to_hours_and_minutes($time_entry->duration - $time_entry->deductions),
          'class' => 'time_entry_total',
        );
      }
      $row['data'][] = array(
        'data' => _time_tracker_get_activity_name($time_entry->activity),
        'class' => 'time_entry_activity',
      );
      $row['data'][] = array(
        'data' => format_date($time_entry->start, 'custom', variable_get('time_interval_date_format', 'h:i A - M d, Y')),
        'class' => 'time_entry_start',
      );
      $row['data'][] = array(
        'data' => format_date($time_entry->end, 'custom', variable_get('time_interval_date_format', 'h:i A - M d, Y')),
        'class' => 'time_entry_end',
       );
      if (variable_get('enable_billable_field', 0)) {
        $row['data'][] = array( //Cell6
          'data' => $time_entry->billable ? t('Yes') : t('No'),
          'class' => 'time_entry_billable',
        );
      }
      if (variable_get('enable_billed_field', 0)) {
        $row['data'][] = array( //Cell6
          'data' => $time_entry->billed ? t('Yes') : t('No'),
          'class' => 'time_entry_billed',
        );
      }
      $rows[] = $row;
      $table = array(
        'header' => $header,
        'rows' => $rows,
        'attributes' => array('class' => array('time_tracker_entry_comment')),
      );
      return theme('table', $table);
    }
    else {
      $time_string = array();
      $time_string['total'] = _time_tracker_format_hours_to_hours_and_minutes($time_entry->duration - $time_entry->deductions);
      if (variable_get('enable_deductions_field', 0)) {
        $time_string['total_details'] = '(' . _time_tracker_format_hours_to_hours_and_minutes($time_entry->duration) . ' - ' . _time_tracker_format_hours_to_hours_and_minutes($time_entry->deductions) . ')';
      }
      $time_string['activity'] = $activity;
      $time_string['on'] = t('on');
      $time_string['time'] = format_date($time_entry->timestamp, 'custom', variable_get('timestamp_date_format', 'F d, Y'));
      if (variable_get('enable_billable_field', 0)) {
        $time_string['billable'] = $time_entry->billable ? t('Billable: Yes.') : t('Billable: No.');
      }
      if (variable_get('enable_billed_field', 0)) {
        $time_string['billed'] = $time_entry->billed ? t('Billed: Yes.') : t('Billed: No.');
      }

      $rows[] = array(t('Time') . ': ' . implode(' ', $time_string));

      $table = array(
        'rows' => $rows,
        'attributes' => array('class' => array('time_tracker_entry_comment')),
      );

      return theme('table', $table);
    }
  }
}

/**
 * Theme function for the time tracker entry summary.
 *
 * @param $total_time
 *    Amount of time in hours
 *
 * @return
 *    A themed table of summary data
 */
function theme_time_tracker_summary($total_time) {
  $rows = array();

  if ($total_time > 0) {
    $rows[] = array(
      t('Time logged: '),
      '<span class="time_tracker_time">' . _time_tracker_format_hours_to_hours_and_minutes($total_time, FALSE, TRUE) . '</span>',
    );
  }
  $table = array(
    'rows' => $rows,
    'attributes' => array('class' => array('time_tracker_summary')),
  );

  return theme('table', $table);
}


/**
 * Preprocess function that will tell the template file whether or not
 * to show the comment
 *
 * The $hide variable is already in the template file (comment.tpl.php)
 * it's just not being used right now by any other modules... so let's use it!
 */
function time_tracker_preprocess_comment(&$vars) {
  $comment = $vars['comment'];
  if ($comment->status == 2 && variable_get('hide_comments', 0) && !user_access('view all time tracker entries')) {
    $vars['hide'] = TRUE;
  }
}


