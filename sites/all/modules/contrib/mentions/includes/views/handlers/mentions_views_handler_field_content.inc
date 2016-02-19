<?php
/**
 * @file
 * Field handler to present mention content.
 */

/**
 * Class mentions_views_handler_field_content
 */
class mentions_views_handler_field_content extends views_handler_field {
  function construct() {
    parent::construct();
    $this->additional_fields['entity_type'] = 'entity_type';

    // Invoke mentions_hook_views_handler_field_content_fields().
    foreach (module_list() as $module) {
      $function = 'mentions_' . $module . '_views_handler_field_content_fields';
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
    // Invoke mentions_hook_views_handler_field_content().
    $function = 'mentions_' . $values->{$this->aliases['entity_type']} . '_views_handler_field_content';
    if (function_exists($function)) {
      return $function($this, $values);
    }

    return FALSE;
  }

  function element_type($none_supported = FALSE, $default_empty = FALSE, $inline = FALSE) {
    if (isset($this->definition['element type'])) {
      return $this->definition['element type'];
    }

    return 'div';
  }
}
