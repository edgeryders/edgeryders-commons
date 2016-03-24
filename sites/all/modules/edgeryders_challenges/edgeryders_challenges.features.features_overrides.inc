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
  $overrides["field_instance.node-challenge-field_group_logo.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-challenge-field_group_logo.display|default|settings|image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.node-challenge-field_group_logo.display|default|weight"] = 5;
  $overrides["field_instance.node-challenge-field_og_access_default_value.display|default|weight"] = 8;
  $overrides["field_instance.node-challenge-field_og_subscribe_settings.display|default|type"] = 'hidden';
  $overrides["field_instance.node-challenge-field_og_subscribe_settings.display|default|weight"] = 9;
  $overrides["field_instance.node-challenge-group_access.display|default|weight"] = 6;
  $overrides["field_instance.node-challenge-group_group.display|default|type"] = 'hidden';
  $overrides["field_instance.node-challenge-group_group.display|default|weight"] = 4;
  $overrides["field_instance.node-challenge-og_roles_permissions.display|default|type"] = 'hidden';
  $overrides["field_instance.node-challenge-og_roles_permissions.display|default|weight"] = 7;
  $overrides["field_instance.node-challenge-title_field.display|default|label"] = 'hidden';
  $overrides["field_instance.node-challenge-title_field.display|default|module"] = 'text';
  $overrides["field_instance.node-challenge-title_field.display|default|type"] = 'text_default';
  $overrides["field_instance.node-challenge-title_field.display|default|weight"] = 0;
  $overrides["field_instance.node-challenge_chain-field_challenges.display_label"] = '';
  $overrides["field_instance.node-challenge_chain-field_challenges.display|default|label"] = 'hidden';
  $overrides["field_instance.node-challenge_chain-field_challenges.display|default|module"] = 'edgeryders_challenges';
  $overrides["field_instance.node-challenge_chain-field_challenges.display|default|settings|link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-challenge_chain-field_challenges.display|default|type"] = 'progress_bar';
  $overrides["field_instance.node-challenge_chain-field_challenges.display|default|weight"] = 1;
  $overrides["field_instance.node-challenge_chain-field_challenges.widget|settings|match_operator"] = 'CONTAINS';
  $overrides["field_instance.node-challenge_chain-title_field.display|default|label"] = 'hidden';
  $overrides["field_instance.node-challenge_chain-title_field.display|default|module"] = 'text';
  $overrides["field_instance.node-challenge_chain-title_field.display|default|type"] = 'text_default';
  $overrides["field_instance.node-challenge_chain-title_field.display|default|weight"] = 0;
  $overrides["field_instance.node-challenge_response-field_audience_collaborators.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-challenge_response-field_audience_collaborators.display|default|type"] = 'hidden';
  $overrides["field_instance.node-challenge_response-field_audience_collaborators.display|default|weight"] = 6;
  $overrides["field_instance.node-challenge_response-field_audience_multiplicators.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-challenge_response-field_audience_multiplicators.display|default|type"] = 'hidden';
  $overrides["field_instance.node-challenge_response-field_audience_multiplicators.display|default|weight"] = 7;
  $overrides["field_instance.node-challenge_response-field_audience_supporters.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-challenge_response-field_audience_supporters.display|default|type"] = 'hidden';
  $overrides["field_instance.node-challenge_response-field_audience_supporters.display|default|weight"] = 5;
  $overrides["field_instance.node-challenge_response-field_request_experiences.display_in_partial_form"] = 0;
  $overrides["field_instance.node-challenge_response-field_request_experiences.display_label"] = '';
  $overrides["field_instance.node-challenge_response-field_request_experiences.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-challenge_response-field_request_experiences.display|default|type"] = 'hidden';
  $overrides["field_instance.node-challenge_response-field_request_experiences.display|default|weight"] = 8;
  $overrides["field_instance.node-challenge_response-field_request_experiences.required"] = 0;
  $overrides["field_instance.node-challenge_response-field_request_help.display_label"] = '';
  $overrides["field_instance.node-challenge_response-field_request_help.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-challenge_response-field_request_help.display|default|type"] = 'hidden';
  $overrides["field_instance.node-challenge_response-field_request_help.display|default|weight"] = 9;
  $overrides["field_instance.node-challenge_response-field_request_help.required"] = 0;
  $overrides["field_instance.node-challenge_response-field_request_other.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-challenge_response-field_request_other.display|default|type"] = 'hidden';
  $overrides["field_instance.node-challenge_response-field_request_other.display|default|weight"] = 10;
  $overrides["field_instance.node-challenge_response-field_response_image.display_label"] = '';
  $overrides["field_instance.node-challenge_response-field_response_image.display|default|label"] = 'hidden';
  $overrides["field_instance.node-challenge_response-field_response_image.display|default|settings|image_style"] = 'challenge_response_node';
  $overrides["field_instance.node-challenge_response-field_response_image.display|default|weight"] = 1;
  $overrides["field_instance.node-challenge_response-field_response_image.settings|file_extensions"] = 'jpg jpeg';
  $overrides["field_instance.node-challenge_response-field_response_image.settings|max_filesize"] = '4 MB';
  $overrides["field_instance.node-challenge_response-field_response_image.widget|module"] = 'dragndrop_upload_image';
  $overrides["field_instance.node-challenge_response-field_response_image.widget|settings|allow_replace"] = 1;
  $overrides["field_instance.node-challenge_response-field_response_image.widget|settings|droppable_area_text"] = 'Drag & drop your cover image here';
  $overrides["field_instance.node-challenge_response-field_response_image.widget|settings|filefield_sources"]["DELETED"] = TRUE;
  $overrides["field_instance.node-challenge_response-field_response_image.widget|settings|media_browser"] = 0;
  $overrides["field_instance.node-challenge_response-field_response_image.widget|settings|multiupload"] = 0;
  $overrides["field_instance.node-challenge_response-field_response_image.widget|settings|preview_image_style"] = 'challenge_response_node';
  $overrides["field_instance.node-challenge_response-field_response_image.widget|settings|standard_upload"] = 1;
  $overrides["field_instance.node-challenge_response-field_response_image.widget|settings|upload_button_text"] = 'Upload';
  $overrides["field_instance.node-challenge_response-field_response_image.widget|settings|upload_event"] = 'auto';
  $overrides["field_instance.node-challenge_response-field_response_image.widget|type"] = 'dragndrop_upload_image';
  $overrides["field_instance.node-challenge_response-field_response_image.widget|weight"] = 3;
  $overrides["field_instance.node-challenge_response-title_field.display|default|label"] = 'hidden';
  $overrides["field_instance.node-challenge_response-title_field.display|default|module"] = 'text';
  $overrides["field_instance.node-challenge_response-title_field.display|default|type"] = 'text_default';
  $overrides["field_instance.node-challenge_response-title_field.display|default|weight"] = 0;
  $overrides["field_instance.node-challenge_response-title_field.widget|weight"] = 4;

  // Exported overrides for: variable
  $overrides["variable.comment_form_location_challenge.value"] = 0;
  $overrides["variable.comment_form_location_challenge_chain.value"] = 0;
  $overrides["variable.comment_preview_challenge.value"] = 0;
  $overrides["variable.comment_preview_challenge_chain.value"] = 0;
  $overrides["variable.field_bundle_settings_node__challenge.value|extra_fields|display|sharethis"] = array(
    'default' => array(
      'weight' => 3,
      'visible' => TRUE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__challenge.value|extra_fields|form|metatags"] = array(
    'weight' => 5,
  );
  $overrides["variable.field_bundle_settings_node__challenge.value|extra_fields|form|path"] = array(
    'weight' => 3,
  );
  $overrides["variable.field_bundle_settings_node__challenge.value|extra_fields|form|redirect"] = array(
    'weight' => 4,
  );
  $overrides["variable.field_bundle_settings_node__challenge.value|extra_fields|form|title"]["DELETED"] = TRUE;
  $overrides["variable.field_bundle_settings_node__challenge_chain.value|extra_fields|display|sharethis"] = array(
    'default' => array(
      'weight' => 2,
      'visible' => TRUE,
    ),
    'token' => array(
      'weight' => 10,
      'visible' => FALSE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__challenge_response.value|extra_fields|display|sharethis"] = array(
    'default' => array(
      'weight' => 4,
      'visible' => TRUE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__challenge_response.value|extra_fields|form|additional_settings|weight"] = 3;
  $overrides["variable.field_bundle_settings_node__challenge_response.value|extra_fields|form|metatags|weight"] = 5;
  $overrides["variable.field_bundle_settings_node__challenge_response.value|extra_fields|form|path|weight"] = 4;
  $overrides["variable.field_bundle_settings_node__challenge_response.value|extra_fields|form|redirect|weight"] = 3;

 return $overrides;
}
