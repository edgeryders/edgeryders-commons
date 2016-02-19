<?php
/**
 * @file
 * Field handler to present a link to mention.
 */

/**
 * Class mentions_views_handler_field_title
 */
class mentions_views_handler_field_title extends views_handler_field {
  function construct() {
    parent::construct();
    $this->additional_fields['entity_type'] = 'entity_type';
    $this->additional_fields['entity_id']   = 'entity_id';

    // Invoke mentions_hook_views_handler_field_title_fields().
    foreach (module_list() as $module) {
      $function = 'mentions_' . $module . '_views_handler_field_title_fields';
      if (function_exists($function)) {
        $function($this);
      }
    }
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    // Invoke mentions_hook_views_handler_field_title().
    $function = 'mentions_' . $values->{$this->aliases['entity_type']} . '_views_handler_field_title';
    if (function_exists($function)) {
      return check_plain($function($this, $values));
    }

    // Generic function for any entity.
    else {
      $entities = entity_load($values->{$this->aliases['entity_type']}, array($values->{$this->aliases['entity_id']}));
      if (isset($entities[$values->{$this->aliases['entity_id']}])) {
        $entity = $entities[$values->{$this->aliases['entity_id']}];
        $title  = entity_label($values->{$this->aliases['entity_type']}, $entity);
        if (!empty($title)) {
          return check_plain($title);
        }
      }
    }

    return FALSE;
  }
}
