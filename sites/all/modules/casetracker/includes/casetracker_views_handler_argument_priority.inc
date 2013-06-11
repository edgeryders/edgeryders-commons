<?php

/**
 * Argument handler for case priority.
 *
 * @ingroup views_field_handlers
 */
class casetracker_views_handler_argument_priority extends views_handler_argument_numeric {
  function summary_name($data) {
    if (!isset($this->case_priority_options)) {
      $this->case_priority_options = casetracker_realm_load('priority');
    }
    return $this->case_priority_options[$data->{$this->name_alias}];
  }
}
