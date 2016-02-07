<?php
/**
 * @file
 * Machine name module integration.
 */

/**
 * Implements hook_mentions_input_source() on behalf of machine_name.module.
 */
function machine_name_mentions_input_source() {
  $sources = array();

  $instances = field_info_instances('user');
  if (is_array($instances['user'])) {
    foreach ($instances['user'] as $field_name => $instance) {
      $field = field_info_field($field_name);
      if ('machine_name' == $field['type']) {
        $sources["field:{$field_name}:value"] = t('Field: @field_name', array('@field_name' => $instance['label']));
      }
    }
  }

  return $sources;
}
