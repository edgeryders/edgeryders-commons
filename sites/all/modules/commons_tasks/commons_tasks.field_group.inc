<?php
/**
 * @file
 * commons_tasks.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function commons_tasks_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_stuff|node|task|form';
  $field_group->group_name = 'group_admin_stuff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'task';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin stuff',
    'weight' => '30',
    'children' => array(
      0 => 'field_lote3_activity_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-admin-stuff field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_admin_stuff|node|task|form'] = $field_group;

  return $export;
}
