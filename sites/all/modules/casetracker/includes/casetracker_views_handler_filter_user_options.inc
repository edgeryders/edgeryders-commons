<?php

/**
 * //
 */
class casetracker_views_handler_filter_user_options extends views_handler_filter_many_to_one {
  function get_value_options() {
    $options = array(
      '***CURRENT_USER***' => t('<Current user>'),
      0 => casetracker_default_assign_to(),
    );
    $options += casetracker_user_options();
    $this->value_options = $options;
  }
}
