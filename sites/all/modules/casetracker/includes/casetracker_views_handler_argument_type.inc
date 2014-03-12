<?php

/**
 * Argument handler for case type.
 *
 * @ingroup views_field_handlers
 */
class casetracker_views_handler_argument_type extends views_handler_argument_numeric {
  function summary_name($data) {
    if (!isset($this->case_type_options)) {
      $this->case_type_options = casetracker_realm_load('type');
    }
    return $this->case_type_options[$data->{$this->name_alias}];
  }
}
