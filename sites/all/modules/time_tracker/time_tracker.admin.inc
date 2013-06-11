<?php
/**
 * @file
 * Admin file for time_tracker.
 */
/**
 * Form builder function for time tracker settings.
 */
function time_tracker_settings_form($form, &$form_state) {

  $form = array();

  // Basic Settings
  $form['time_tracker_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t("General Settings"),
  );
  $form['time_tracker_settings']['hide_comments'] = array(
    '#type' => 'checkbox',
    '#title' => t("Hide comments with time tracker data entirely if user does not have 'view all time tracker entries' or 'view own time tracker entries' permission"),
    '#description' => t("Checking this setting will hide any comments that have time tracking data on them from any users without the 'view all time tracker entries' or 'view own time tracker entries' permission"),
    '#default_value' => variable_get('hide_comments', 0),
  );
  $form['time_tracker_settings']['allow_locked_time_entries'] = array(
    '#type' => 'checkbox',
    '#title' => t("Allow locking of time entries"),
    '#description' => t("Checking this setting will allow users with the 'administer time entries' permission to lock time entries, preventing them from being editied."),
    '#default_value' => variable_get('allow_locked_time_entries', 0),
  );
  $form['time_tracker_settings']['enable_billable_field'] = array(
    '#type' => 'checkbox',
    '#title' => t("Enable the 'Billable' field"),
    '#description' => t("Checking this setting will enable a checkbox to flag time entries as billable"),
    '#default_value' => variable_get('enable_billable_field', 0),
  );
  $form['time_tracker_settings']['enable_billed_field'] = array(
    '#type' => 'checkbox',
    '#title' => t("Enable the 'Billed' field"),
    '#description' => t("Checking this setting will enable a checkbox to flag time entries as billed"),
    '#default_value' => variable_get('enable_billed_field', 0),
  );
  $form['time_tracker_settings']['enable_deductions_field'] = array(
    '#type' => 'checkbox',
    '#title' => t("Enable the 'Deductions' field"),
    '#description' => t("Checking this setting will enable a text field for logging time entry deductions. An example usage of this field would be for a time entry from 9:00am to 5:00pm with a deduction of 30 minutes for a lunch break."),
    '#default_value' => variable_get('enable_deductions_field', 0),
  );

  // Default settings for time tracker time entry and time display fieldsets
  $form['time_tracker_fieldset_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t("Fieldset Settings"),
  );
  $form['time_tracker_fieldset_settings']['time_tracker_default_collapsed'] = array(
    '#type' => 'checkbox',
    '#title' => t("Collapse time entry form by default"),
    '#description' => t("Checking this setting will collapse the time tracker time entry form by default"),
    '#default_value' => variable_get('time_tracker_default_collapsed', 0),
  );
  $form['time_tracker_fieldset_settings']['time_entry_table_default_collapsed'] = array(
    '#type' => 'checkbox',
    '#title' => t("Collapse time entry table by default"),
    '#description' => t("When tracking time on nodes, checking this setting will collapse the time tracker time entry table by default"),
    '#default_value' => variable_get('time_entry_table_default_collapsed', 0),
  );

  // Default settings for time tracker time entry and time display fieldsets
  $form['time_tracker_userfield_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t("User Selection Field Settings"),
  );
  $form['time_tracker_userfield_settings']['time_tracker_user_field_type'] = array(
    '#type' => 'radios',
    '#title' => t('User field type'),
    '#description' => t('The type of field for the "user" field when logging time. Only users with the "administer time tracker" permission can view the user field'),
    '#options' => array(
      'textfield' => t('Autocomplete textfield'),
      'select' => t('Select box'),
    ),
    '#default_value' => variable_get('time_tracker_user_field_type', 'textfield'),
  );

  // Time entry settings (duration or interval)
  $form['time_entry_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t("Time Entry Settings"),
  );
  $form['time_entry_settings']['time_entry_method'] = array(
    '#type' => 'radios',
    '#title' => t('Time Tracker Time Entry Method'),
    '#default_value' => variable_get('time_entry_method', 'duration'),
    '#options' => array(
      'duration' => t('Duration'),
      'interval' => t('Time Interval (Start and End Times)')
    ),
  );

  // Warn the user about switching between time duration and time interval time entries
  $msg = t('Note that any entries that have been entered using the <em>duration</em> method will not have start and end times saved in the database. Switching from <em>duration</em> to <em>interval</em> will not retroactively create start and end times for past time entires.');
  $form['time_entry_settings']['time_entry_message'] = array(
    '#markup' => t($msg),
    '#prefix' => '<div class="description">',
    '#suffix' => '</div>',
  );
  $form['time_tracker_date_formats'] = array(
    '#type' => 'fieldset',
    '#title' => t('Time Tracker Date Formats'),
  );

  // Date formats
  $msg = 'Dates will be output using format_date(). Below, please specify PHP date format strings as required by <a href="http://php.net/manual/en/function.date.php">date()</a>. A backslash should be used before a character to avoid interpreting the character as part of a date format.';
  $form['time_tracker_date_formats']['time_entry_message'] = array(
    '#markup' => t($msg),
    '#prefix' => '<div class="description">',
    '#suffix' => '</div>',
  );
  $form['time_tracker_date_formats']['time_interval_date_format'] = array(
    '#type' => 'textfield',
    '#title' => t('Time Interval Date Formats'),
    '#description' => t('The date format for displaying time interval start and end time entries. Default is @date', array('@date' => format_date(time(), 'custom', 'h:i A - M d, Y'))),
    '#default_value' => variable_get('time_interval_date_format', 'h:i A - M d, Y'),
  );
  $form['time_tracker_date_formats']['timestamp_date_format'] = array(
    '#type' => 'textfield',
    '#title' => t('Timestamp Date Format'),
    '#description' => t('The date format for displaying time entry timestamps. Usually would be displayed without time, although time information is available if desired. Default is @date', array('@date' => format_date(time(), 'custom', 'F d, Y'))),
    '#default_value' => variable_get('timestamp_date_format', 'F d, Y'),
  );

  // Settings for time rounding
  $form['time_rounding_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Time Rounding Settings'),
  );
  $form['time_rounding_settings']['time_tracker_rounding_operation'] = array(
    '#type' => 'select',
    '#title' => t('Rounding Operation'),
    '#description' => t('The rounding operation to perform.'),
    '#default_value' => variable_get('time_tracker_rounding_operation', 'auto'),
    '#options' => array(
      'auto' => 'Auto',
      'up' => 'Round Up',
      'down' => 'Round Down',
    ),
  );
  $form['time_rounding_settings']['time_tracker_rounding_interval'] = array(
    '#type' => 'select',
    '#title' => t('Rounding Interval'),
    '#description' => t('The interval (in minutes) to round time entries to. Choose 0 for no rounding'),
    '#default_value' => variable_get('time_tracker_rounding_interval', 0),
    '#options' => array(
      0 => '0',
      5 => '5',
      10 => '10',
      15 => '15',
      20 => '20',
      30 => '30',
      60 => '60 (hour)',
    ),
  );
  $form['time_rounding_settings']['time_tracker_rounding_message'] = array(
    '#type' => 'checkbox',
    '#title' => t("Display Time Rounding message on Time Entry Form"),
    '#description' => t("Checking this setting will show a message on the time entry form, informing users that their entries will be rounded upon saving."),
    '#default_value' => variable_get('time_tracker_rounding_message', 0),
  );

  return system_settings_form($form);
}

/************************************************************************
 * BEGIN ENTITY SETUP FORM
*************************************************************************/

/**
 * Form builder function for time tracker settings.
 */
function time_tracker_entity_settings_form($form, &$form_state) {
  $entity_types = entity_get_info();

  $form['description'] = array(
    '#markup' => '<p>Foreach entity select the bundles that you want to track time on.</p>',
  );
  foreach($entity_types as $key => $type) {
    // We dont want the ability to track time on time tracker activities,
    // entries, or comments.
    if (!in_array($key, array('time_tracker_activity', 'time_tracker_entry', 'comment'))){
      // Basic Settings
      $form[$key] = array(
        '#type' => 'fieldset',
        '#title' => t(":label Settings", array(':label'=> $type['label'])),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
      );
      foreach($type['bundles'] as $bkey => $bundle){
        $form[$key][$bkey] = array(
          '#type' => 'fieldset',
          '#title' => t(":label", array(':label'=> $bundle['label'])),
          '#collapsible' => TRUE,
          '#collapsed' => TRUE,
        );

        $form[$key][$bkey]['time_tracker-' . $key . '-' . $bkey] = array(
          '#type' => 'checkbox',
          '#title' => t('Track time on this bundle.'),
          '#default_value' => variable_get('time_tracker-' . $key . '-' . $bkey),
          //'#description' => t("Track time on this bundle."),
        );

        if ($type['label'] == 'Node') {
          $form[$key][$bkey]['time_tracker_comments-' . $key . '-' . $bkey] = array(
            '#type' => 'checkbox',
            '#title' => t("Track time on this bundle's comments."),
            '#default_value' => variable_get('time_tracker_comments-' . $key . '-' . $bkey),
            //'#description' => t("Track time on this bundle's comments."),
          );
        }
      }
    }
  }

  return system_settings_form($form);
}


/************************************************************************
 * BEGIN TIME TRACKER ACTIVITY CONFIG
*************************************************************************/


/**
 * Time tracker activities table form.
 *
 * Generates the list of activites defined by users.
 * To be themed as a sortable table (above)
 *
 * @return $form
 *    - The unrendered $form array
 */
function time_tracker_activity_table_form() {

  // Grab all the activities ordered by weight
  $activities = entity_load('time_tracker_activity');

  // Setup the form
  $form = array(
    '#tree' => TRUE,
    '#theme' => 'time_tracker_activity_table'
  );

  $form['add_new_activity'] = array(
    '#type' => 'fieldset',
    '#title' => t('Add a new Activity'),
    '#tree' => TRUE,
  );

  $form['add_new_activity']['new_activity_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Activity Name'),
    '#size' => 30,
    '#description' => t('Add an activity that time can be tracked for.'),
    '#default_value' => '',
  );

  // Loop through the activites and add them to the form.
  if (!empty($activities)) {
    foreach ($activities as $activity) {
      $form['activities'][$activity->taid]['#activity'] = (array)$activity;
      // The activity name
      $form['activities'][$activity->taid]['name'] = array(
        '#type' => 'textfield',
        '#default_value' => check_plain($activity->name),
      );
      // The weight (this is for the tabledrag we'll add in the theme function
      $form['activities'][$activity->taid]['weight'] = array(
        '#type' => 'textfield',
        '#delta' => 10,
        '#default_value' => $activity->weight
      );
      // Is this activity enabled?
      $form['activities'][$activity->taid]['status'] = array(
        '#type' => 'checkbox',
        '#title' => t('enabled'),
        '#default_value' => $activity->status ? TRUE : FALSE,
      );
      // The Edit link to edit the activity
      $form['activities'][$activity->taid]['delete'] = array(
        '#markup' => l(t('delete'), "admin/config/time_tracker/activity/delete/$activity->taid")
      );
    }
  }
  elseif (isset($activity)) {
    unset($form[$activity->taid]['weight']);
  }

  // The submit button for the form
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('time_tracker_activity_table_form_submit'),
  );

  // Return the form
  return $form;
}


/**
 * Time tracker activity form submit handler.
 *
 * @param $form
 * @param $form_state
 */
function time_tracker_activity_table_form_submit($form, &$form_state) {
  // If we're adding a new one
  if ($form_state['values']['add_new_activity']['new_activity_name']) {
    $entity = new stdClass();
    $entity->name = $form_state['values']['add_new_activity']['new_activity_name'];

    if (isset($form_state['values']['activities'])) {
      $entity->weight = count($form_state['values']['activities']) + 1;
    }
    else {
      $entity->weight = 1;
    }
    $entity->status = 1;

    $entity = time_tracker_activity_save($entity);
  }
  if (isset($form_state['values']['activities']) && count($form_state['values']['activities']) > 0) {
    foreach ($form_state['values']['activities'] as $taid => $activity) {

      // If anything has changed...
      if (is_numeric($taid) && ($form['activities'][$taid]['#activity']['weight'] != $activity['weight'] ||
                                $form['activities'][$taid]['#activity']['status'] != $activity['status'] ||
                                $form['activities'][$taid]['#activity']['name'] != $activity['name'])) {
        $entity = new stdClass();
        $entity->taid = $taid;
        $entity->name = $activity['name'];
        $entity->weight = $activity['weight'];
        $entity->status = $activity['status'];

        $entity = time_tracker_activity_save($entity);
      }
    }
  }
  drupal_set_message('Activities Saved');
}

/**
 * Form builder function for module time tracker activities.
 */
function time_tracker_delete_activity_confirm($form, &$form_state, $taid) {

  if ($taid) {
    $form['taid'] = array(
      '#type' => 'value',
      '#default_value' => $taid,
    );
    $question = t('Are you sure you want to delete the activity: !activity_name', array('!activity_name' => _time_tracker_get_activity_name($taid)));
    return confirm_form($form, $question, 'admin/config/time_tracker/activities');
  }
  else {
    return $form['msg']['#value'] = 'No Activity ID passed in.';
  }
}

/**
 * Time tracker activity form submit handler.
 *
 * @param $form
 * @param $form_state
 */
function time_tracker_delete_activity_confirm_submit($form, &$form_state) {
  $form_state['redirect'] = 'admin/config/time_tracker/activities';
  $taid = $form_state['values']['taid'];
  $activity = entity_load('time_tracker_activity', array($taid));
  $activity = $activity[$taid];
  time_tracker_activity_delete($activity);
  drupal_set_message(t('Activity %name Deleted', array('%name' => $activity->name)));
}

/**
 * We save the entity by calling the controller.
 */
function time_tracker_activity_save(&$entity) {
  return entity_get_controller('time_tracker_activity')->save($entity);
}

/**
 * Use the controller to delete the entity.
 */
function time_tracker_activity_delete($entity) {
  entity_get_controller('time_tracker_activity')->delete($entity);
}

