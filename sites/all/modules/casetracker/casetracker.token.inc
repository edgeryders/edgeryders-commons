<?php

/**
 * @file
 * Token implementation for Casetracker
 */


/**
 * Implementation of hook_token_values().
 */
function _casetracker_tokens($type, $object = NULL) {
  $values = array();
  if (($type == 'node') && (casetracker_is_case($object['node']->type))) {
    $object = $object['node'];
    $values['case_status']        = casetracker_case_state_load($object->casetracker->case_status_id, 'status');
    $values['case_type']          = casetracker_case_state_load($object->casetracker->case_type_id, 'type');
    $values['case_priority']      = casetracker_case_state_load($object->casetracker->case_priority_id, 'priority');
    $values['case_assign_to_uid'] = $object->casetracker->assign_to;
    // TODO Convert "user_load" to "user_load_multiple" if "$object->casetracker->assign_to" is other than a uid.
    // To return a single user object, wrap "user_load_multiple" with "array_shift" or equivalent.
    // Example: array_shift(user_load_multiple(array(), $object->casetracker->assign_to))
    $assignedUser                 = user_load($object->casetracker->assign_to);
    $values['case_assign_to']     = $assignedUser->name;
  }
  return $values;
}

/**
 * Implementation of hook_token_list().
 */
function _casetracker_token_info($type = 'all') {
  if ($type == 'node' || $type == 'all') {
    $tokens['casetracker']['case_status']        = t('Case Status');
    $tokens['casetracker']['case_type']          = t('Case Type');
    $tokens['casetracker']['case_priority']      = t('Case Priority');
    $tokens['casetracker']['case_assign_to_uid'] = t('Case Assigned to (UID)');
    $tokens['casetracker']['case_assign_to']     = t('Case Assigned to (Name)');
    return $tokens;
  }
}

