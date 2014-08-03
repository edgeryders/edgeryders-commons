<?php
/**
 * @file
 * edgeryders_users_overrides.features.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function edgeryders_users_overrides_strongarm_alter(&$data) {
  if (isset($data['realname_pattern'])) {
    $data['realname_pattern']->value = '[user:name-raw-no-spaces]';
  }
}
