<?php
/**
 * @file
 * edgeryders_users_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function edgeryders_users_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.realname_pattern.value"] = '[user:name-raw-no-spaces]';

 return $overrides;
}
