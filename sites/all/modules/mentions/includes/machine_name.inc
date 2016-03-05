<?php

/**
 * @file
 * Machine name module integration.
 */

/**
 * Implements hook_mentions_entity_input_source() on behalf of
 * machine_name.module.
 *
 * @param $options
 * @param $entity_type
 */
function machine_name_mentions_entity_input_options_alter(&$options, $entity_type) {
  $instances = field_info_instances($entity_type);
  if (isset($instances[$entity_type]) && is_array($instances[$entity_type])) {
    foreach ($instances[$entity_type] as $field_name => $instance) {
      $field = field_info_field($field_name);
      if ('machine_name' == $field['type']) {
        $options["field::{$field_name}::varchar::value"] = t('Field: @field_name', array('@field_name' => $instance['label']));
      }
    }
  }
}
