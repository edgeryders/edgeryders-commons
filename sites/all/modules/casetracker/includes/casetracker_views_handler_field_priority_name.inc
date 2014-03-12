<?php

/**
 * Field handler to show Selective state.
 *
 * @ingroup views_field_handlers
 */
class casetracker_views_handler_field_priority_name extends views_handler_field {

  function render($values) {
    if ($values->{$this->field_alias}) {
      return check_plain(casetracker_case_state_load($values->{$this->field_alias}, 'priority'));
    }
    return '';
  }
}
