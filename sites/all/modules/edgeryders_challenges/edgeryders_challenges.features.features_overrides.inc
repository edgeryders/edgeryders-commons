<?php
/**
 * @file
 * edgeryders_challenges.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function edgeryders_challenges_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-challenge-title_field.display|default|label"] = 'hidden';
  $overrides["field_instance.node-challenge-title_field.display|default|module"] = 'text';
  $overrides["field_instance.node-challenge-title_field.display|default|type"] = 'text_default';
  $overrides["field_instance.node-challenge-title_field.display|default|weight"] = 0;
  $overrides["field_instance.node-challenge_chain-title_field.display|default|label"] = 'hidden';
  $overrides["field_instance.node-challenge_chain-title_field.display|default|module"] = 'text';
  $overrides["field_instance.node-challenge_chain-title_field.display|default|type"] = 'text_default';
  $overrides["field_instance.node-challenge_chain-title_field.display|default|weight"] = 0;
  $overrides["field_instance.node-challenge_response-title_field.display|default|label"] = 'hidden';
  $overrides["field_instance.node-challenge_response-title_field.display|default|module"] = 'text';
  $overrides["field_instance.node-challenge_response-title_field.display|default|type"] = 'text_default';
  $overrides["field_instance.node-challenge_response-title_field.display|default|weight"] = 0;
  $overrides["field_instance.node-challenge_response-title_field.widget|weight"] = 4;

  // Exported overrides for: variable

 return $overrides;
}
