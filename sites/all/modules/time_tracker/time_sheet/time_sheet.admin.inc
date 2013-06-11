<?php
/**
 * Implementation of hook_form().
 */
function time_sheet_settings_form($form, &$form_state) {
  $form = array();
  $form['time_sheet_settings']['time_sheet_week_start'] = array(
    '#type' => 'select',
    '#title' => t('First day of week'),
    '#default_value' => variable_get('time_sheet_week_start', 'monday'),
    '#options' => array(
      'sunday' => t('Sunday'),
      'monday' => t('Monday'),
      'tuesday' => t('Tuesday'),
      'wednesday' => t('Wednesday'),
      'thursday' => t('Thursday'),
      'friday' => t('Friday'),
      'saturday' => t('Saturday'),
    ),
  );

  $form['time_sheet_settings']['time_sheet_days_of_week'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Days of the week'),
    '#default_value' => variable_get('time_sheet_days_of_week', array('monday', 'tuesday', 'wednesday', 'thursday', 'friday')),
    '#options' => array(
      'sunday' => t('Sunday'),
      'monday' => t('Monday'),
      'tuesday' => t('Tuesday'),
      'wednesday' => t('Wednesday'),
      'thursday' => t('Thursday'),
      'friday' => t('Friday'),
      'saturday' => t('Saturday'),
    ),
  );

  $entity_types = entity_get_info();

  foreach ($entity_types as $id => $type) {
    if (!in_array($id, array('comment', 'time_tracker_entry', 'time_tracker_activity'))) {
      $options[$id] = array();

      foreach ($type['bundles'] as $bid => $bundle) {
        $options[$id][$id . '-' . $bid] = $bundle['label'];
      }
    }
  }

  $form['time_sheet_project'] = array(
    '#type' => 'fieldset',
    '#title' => t('Project Settings'),
    '#collapsed' => TRUE,
    '#collapsible' => TRUE,
  );
  $form['time_sheet_project']['description'] = array(
    '#markup' => '<p>As there are many uses for a time tracking system, one of the most popular is in the project management industry.</p><p>As such most project management time tracking setups include tracking time on a "task" which is part of a larger "project". To accomodate this, please select which entity/bundle is considered your "task" and which entity/bundle is considered your "project". For the module to work as expected, there should be either a node reference or entity reference from the "task" to the "project."</p>',
  );
  $form['time_sheet_project']['time_sheet_project'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable "Project - Task" Relationship'),
    '#default_value' => variable_get('time_sheet_project'),
  );
  $form['time_sheet_project']['time_sheet_project_bundle'] = array(
    '#type' => 'select',
    '#title' => t('Project Bundle'),
    '#options' => $options,
    '#empty_option' => t('Choose a bundle'),
    '#default_value' => variable_get('time_sheet_project_bundle'),
  );

  $task_settings = explode('-', variable_get('time_sheet_task_bundle'));

  $first = isset($form_state['values']['time_sheet_task_bundle']) ? $form_state['values']['time_sheet_task_bundle'] : variable_get('time_sheet_task_bundle');

  $form['time_sheet_project']['time_sheet_task_bundle'] = array(
    '#type' => 'select',
    '#title' => t('Task Bundle'),
    '#options' => $options,
    '#empty_option' => t('Choose a bundle'),
    '#ajax' => array(
      'event' => 'change',
      'wrapper' => 'task-field-wrapper',
      'callback' => 'time_sheet_settings_ajax_callback',
      'method' => 'replace',
    ),
    '#default_value' => $first,
  );


  $form['time_sheet_project']['time_sheet_task_ref_field'] = array(
    '#type' => 'select',
    '#prefix' => '<div class="task-field-wrapper">',
    '#suffix' => '</div>',
    '#title' => t('Task field that references the parent project'),
    '#options' => time_sheet_task_field_options($task_settings[0], $task_settings[1]),
    '#default_value' => isset($form_state['values']['time_sheet_task_ref_field']) ? $form_state['values']['time_sheet_task_ref_field'] : variable_get('time_sheet_task_ref_field'),
  );

  return system_settings_form($form);

}


function time_sheet_task_field_options($entity_type, $bundle_name){
  $fields = field_info_instances($entity_type, $bundle_name);
  foreach($fields as $key => $field){
    $field_options[$key] = $field['label'] . ' - (' . $field['field_name'] . ')';
  }
  return $field_options;
}



function time_sheet_settings_ajax_callback($form, $form_state) {
  return $form['time_sheet_project']['time_sheet_task_ref_field'];
}
