<?php

/**
 * Field handler to show Selective state.
 *
 * @ingroup views_field_handlers
 */
class casetracker_views_handler_field_user_name extends views_handler_field {

  function render($values) {
    return casetracker_get_name($values->{$this->field_alias});
  }
}
