<?php
/**
 * @file
 * edgerrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function edgerrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: ckeditor_profile
  $overrides["ckeditor_profile.Advanced.0"] = FALSE;
  $overrides["ckeditor_profile.Advanced.input_formats"]["DELETED"] = TRUE;
  $overrides["ckeditor_profile.Advanced.name"]["DELETED"] = TRUE;
  $overrides["ckeditor_profile.Advanced.settings"]["DELETED"] = TRUE;

  // Exported overrides for: field_base
  $overrides["field_base.body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.body.translatable"] = 1;
  $overrides["field_base.field_bio.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_date.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_date.settings|todate"] = 'optional';
  $overrides["field_base.field_date.settings|tz_handling"] = 'date';
  $overrides["field_base.field_date.type"] = 'date';
  $overrides["field_base.field_document_file.settings|entity_translation_sync"] = array(
    0 => 'fid',
  );
  $overrides["field_base.field_facebook_url.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_group_logo.settings|entity_translation_sync"] = array(
    0 => 'fid',
  );
  $overrides["field_base.field_linkedin_url.field_linkedin_url"]["DELETED"] = TRUE;
  $overrides["field_base.field_location.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_logo.settings|entity_translation_sync"] = array(
    0 => 'fid',
  );
  $overrides["field_base.field_message_rendered_body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_message_rendered_subject.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_name_first.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_name_last.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_number_of_attendees.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_offsite_url.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_og_access_default_value.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_og_subscribe_settings.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_organizers.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_radioactivity.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_registration.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_registration_type.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_target_comments.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_target_nodes.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_target_users.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_topics.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_twitter_url.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.group_access.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.group_content_access.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.group_group.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.message_subscribe_email.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.og_group_ref.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.og_group_ref.settings|handler_settings|behaviors|views-select-list|status"] = 1;
  $overrides["field_base.og_membership_request.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.og_roles_permissions.og_roles_permissions"]["DELETED"] = TRUE;
  $overrides["field_base.title_field.settings|entity_translation_sync"] = FALSE;

  // Exported overrides for: field_instance
  $overrides["field_instance.message-commons_activity_streams_comment_created-field_target_comments.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_activity_streams_comment_created-field_target_nodes.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_activity_streams_node_created-field_target_nodes.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_activity_streams_user_profile_updated-field_target_users.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_message_rendered_body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_message_rendered_subject.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_events_event_node_created-field_target_comments.message-commons_events_event_node_created-field_target_comments"]["DELETED"] = TRUE;
  $overrides["field_instance.message-commons_events_event_node_created-field_target_nodes.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_follow_user_user_followed-field_target_users.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_like_user_likes_node-field_target_nodes.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_message_rendered_body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_message_rendered_subject.display|default|label"] = 'hidden';
  $overrides["field_instance.message-commons_notify_comment_created-field_message_rendered_subject.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.message-commons_notify_comment_created-field_message_rendered_subject.display|default|type"] = 'hidden';
  $overrides["field_instance.message-commons_notify_comment_created-field_message_rendered_subject.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_target_comments.display|default|label"] = 'hidden';
  $overrides["field_instance.message-commons_notify_comment_created-field_target_comments.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.message-commons_notify_comment_created-field_target_comments.display|default|settings|link"]["DELETED"] = TRUE;
  $overrides["field_instance.message-commons_notify_comment_created-field_target_comments.display|default|type"] = 'hidden';
  $overrides["field_instance.message-commons_notify_comment_created-field_target_comments.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created-field_target_nodes.display|default|label"] = 'hidden';
  $overrides["field_instance.message-commons_notify_comment_created-field_target_nodes.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.message-commons_notify_comment_created-field_target_nodes.display|default|settings|link"]["DELETED"] = TRUE;
  $overrides["field_instance.message-commons_notify_comment_created-field_target_nodes.display|default|type"] = 'hidden';
  $overrides["field_instance.message-commons_notify_comment_created-field_target_nodes.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_message_rendered_body.message-commons_notify_comment_created_no_groups-field_message_rendered_body"]["DELETED"] = TRUE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_message_rendered_subject.message-commons_notify_comment_created_no_groups-field_message_rendered_subject"]["DELETED"] = TRUE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_target_comments.message-commons_notify_comment_created_no_groups-field_target_comments"]["DELETED"] = TRUE;
  $overrides["field_instance.message-commons_notify_comment_created_no_groups-field_target_nodes.message-commons_notify_comment_created_no_groups-field_target_nodes"]["DELETED"] = TRUE;
  $overrides["field_instance.message-commons_notify_node_created-field_message_rendered_body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created-field_message_rendered_subject.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created-field_target_nodes.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created_no_groups-field_message_rendered_body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created_no_groups-field_message_rendered_subject.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_notify_node_created_no_groups-field_target_nodes.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_posts_post_created-field_target_nodes.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message-commons_wikis_wiki_updated-field_target_nodes.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.message_type-commons_notify-message_text.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-activity-title_field.comment_alter"] = 0;
  $overrides["field_instance.node-activity-title_field.comment_alter_hide"] = 0;
  $overrides["field_instance.node-activity-title_field.description"] = 'The name of your project or initiative.';
  $overrides["field_instance.node-activity-title_field.display_in_partial_form"] = 0;
  $overrides["field_instance.node-activity-title_field.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-activity-title_field.display|default|weight"] = 0;
  $overrides["field_instance.node-activity-title_field.label"] = 'Activity name';
  $overrides["field_instance.node-activity-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-activity-title_field.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-activity-title_field.widget|settings|size"] = 160;
  $overrides["field_instance.node-activity-title_field.widget|weight"] = 1;
  $overrides["field_instance.node-answer-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-document-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-document-field_document_file.comment_alter"] = 0;
  $overrides["field_instance.node-document-field_document_file.comment_alter_hide"] = 0;
  $overrides["field_instance.node-document-field_document_file.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-document-field_document_file.settings|file_extensions"] = 'txt doc docx xls xlsx ppt pptx odt odp ods pdf zip';
  $overrides["field_instance.node-document-field_document_file.settings|max_filesize"] = '50 MB';
  $overrides["field_instance.node-document-field_document_file.widget|settings|filefield_sources"] = array(
    'filefield_sources' => array(
      'attach' => 0,
      'clipboard' => 0,
      'elfinder' => 0,
      'imce' => 0,
      'reference' => 0,
      'remote' => 0,
      'upload' => 'upload',
    ),
    'source_attach' => array(
      'absolute' => 0,
      'attach_mode' => 'move',
      'path' => 'file_attach',
    ),
    'source_imce' => array(
      'imce_mode' => 0,
    ),
    'source_reference' => array(
      'autocomplete' => 0,
    ),
  );
  $overrides["field_instance.node-document-field_document_file.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-document-field_radioactivity.node-document-field_radioactivity"]["DELETED"] = TRUE;
  $overrides["field_instance.node-document-field_topics.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-document-group_content_access.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-document-og_group_ref.comment_alter"] = 0;
  $overrides["field_instance.node-document-og_group_ref.comment_alter_hide"] = 0;
  $overrides["field_instance.node-document-og_group_ref.description"] = 'The project(s) to which this document belongs.<br/>
  Usually enter one; to enter multiple projects, separate them with comma, and start with the most relevant one (it\'s used for the URL).';
  $overrides["field_instance.node-document-og_group_ref.display_in_partial_form"] = 0;
  $overrides["field_instance.node-document-og_group_ref.label"] = 'Projects';
  $overrides["field_instance.node-document-og_group_ref.required"] = 1;
  $overrides["field_instance.node-document-og_group_ref.settings|behaviors|prepopulate|action_on_edit"] = 0;
  $overrides["field_instance.node-document-og_group_ref.settings|behaviors|prepopulate|og_context"]["DELETED"] = TRUE;
  $overrides["field_instance.node-document-og_group_ref.settings|behaviors|prepopulate|providers"] = array(
    'og_context' => 0,
    'url' => 1,
  );
  $overrides["field_instance.node-document-og_group_ref.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-document-og_group_ref.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-document-title_field.description"] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#content-2" target = "_blank">online user\'s manual</a>.</strong>';
  $overrides["field_instance.node-document-title_field.display|default|weight"] = 4;
  $overrides["field_instance.node-document-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-document-title_field.widget|weight"] = 0;
  $overrides["field_instance.node-event-body.comment_alter"] = 0;
  $overrides["field_instance.node-event-body.comment_alter_hide"] = 0;
  $overrides["field_instance.node-event-body.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-body.display|attend_button"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 5,
  );
  $overrides["field_instance.node-event-body.display|teaser|settings|trim_length"] = 400;
  $overrides["field_instance.node-event-body.display|teaser|weight"] = 2;
  $overrides["field_instance.node-event-body.settings|display_summary"] = 1;
  $overrides["field_instance.node-event-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-body.widget|settings|label_help_description"] = 'Describe what\'s happening at this event. Optionally, click "Edit summary" to provide a short (1-2 sentences) version of the description. It will be displayed whenever we need compact lists of events, but there will be a link to the event\'s page with the full description as well. If you don\'t provide a summary, we will use the first 400 characters from your description, which may be ugly ;-)';
  $overrides["field_instance.node-event-field_address.node-event-field_address"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_date.comment_alter"] = 0;
  $overrides["field_instance.node-event-field_date.comment_alter_hide"] = 0;
  $overrides["field_instance.node-event-field_date.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_date.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_date.display|teaser|weight"] = 0;
  $overrides["field_instance.node-event-field_date.settings|default_value2"] = 'blank';
  $overrides["field_instance.node-event-field_date.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_date.widget|settings|display_all_day"] = 1;
  $overrides["field_instance.node-event-field_date.widget|settings|increment"] = 5;
  $overrides["field_instance.node-event-field_date.widget|settings|input_format"] = 'Y-m-d H:i:s';
  $overrides["field_instance.node-event-field_date.widget|settings|input_format_custom"] = '';
  $overrides["field_instance.node-event-field_date.widget|settings|label_help_description"] = 'When does your event happen? Be sure to also give the local timezone of where it happens.';
  $overrides["field_instance.node-event-field_date.widget|weight"] = 6;
  $overrides["field_instance.node-event-field_location.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 9,
  );
  $overrides["field_instance.node-event-field_location.display|teaser|label"] = 'hidden';
  $overrides["field_instance.node-event-field_location.display|teaser|weight"] = 1;
  $overrides["field_instance.node-event-field_location.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_location.widget|weight"] = 10;
  $overrides["field_instance.node-event-field_logo.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_logo.display|attend_button"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_logo.display|teaser|settings|image_style"] = 'medium';
  $overrides["field_instance.node-event-field_logo.display|teaser|weight"] = 1;
  $overrides["field_instance.node-event-field_logo.settings|default_image"] = 3623;
  $overrides["field_instance.node-event-field_logo.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_logo.widget|settings|filefield_sources"] = array(
    'filefield_sources' => array(
      'attach' => 0,
      'clipboard' => 0,
      'elfinder' => 0,
      'imce' => 0,
      'reference' => 0,
      'remote' => 0,
      'upload' => 'upload',
    ),
    'source_attach' => array(
      'absolute' => 0,
      'attach_mode' => 'move',
      'path' => 'file_attach',
    ),
    'source_imce' => array(
      'imce_mode' => 0,
    ),
    'source_reference' => array(
      'autocomplete' => 0,
    ),
  );
  $overrides["field_instance.node-event-field_logo.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-event-field_logo.widget|weight"] = 11;
  $overrides["field_instance.node-event-field_number_of_attendees.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 8,
  );
  $overrides["field_instance.node-event-field_number_of_attendees.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_number_of_attendees.widget|weight"] = 14;
  $overrides["field_instance.node-event-field_offsite_url.display|attend_button"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 4,
  );
  $overrides["field_instance.node-event-field_offsite_url.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_organizers.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 12,
  );
  $overrides["field_instance.node-event-field_organizers.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_organizers.display|default|settings|link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_organizers.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_radioactivity.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 3,
  );
  $overrides["field_instance.node-event-field_radioactivity.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_radioactivity.display|default|settings|accuracy"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_radioactivity.display|default|settings|energy"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_radioactivity.display|default|settings|type"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_radioactivity.display|default|type"] = 'hidden';
  $overrides["field_instance.node-event-field_radioactivity.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_radioactivity.settings|history"] = 0;
  $overrides["field_instance.node-event-field_radioactivity.widget|weight"] = 4;
  $overrides["field_instance.node-event-field_registration.comment_alter"] = 0;
  $overrides["field_instance.node-event-field_registration.comment_alter_hide"] = 0;
  $overrides["field_instance.node-event-field_registration.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_registration.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 10,
  );
  $overrides["field_instance.node-event-field_registration.settings|default_registration_settings|settings|confirmation"] = 'Registration has been saved.';
  $overrides["field_instance.node-event-field_registration.settings|default_registration_settings|settings|from_address"] = 'contact@edgeryders.eu';
  $overrides["field_instance.node-event-field_registration.settings|default_registration_settings|settings|maximum_spaces"] = 1;
  $overrides["field_instance.node-event-field_registration.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_registration.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-event-field_registration.widget|weight"] = 12;
  $overrides["field_instance.node-event-field_registration_type.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 11,
  );
  $overrides["field_instance.node-event-field_registration_type.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_registration_type.widget|weight"] = 13;
  $overrides["field_instance.node-event-field_topics.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 6,
  );
  $overrides["field_instance.node-event-field_topics.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_topics.widget|weight"] = 16;
  $overrides["field_instance.node-event-group_content_access.display|attend_button"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 5,
  );
  $overrides["field_instance.node-event-group_content_access.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-group_content_access.widget|weight"] = 20;
  $overrides["field_instance.node-event-og_group_ref.comment_alter"] = 0;
  $overrides["field_instance.node-event-og_group_ref.comment_alter_hide"] = 0;
  $overrides["field_instance.node-event-og_group_ref.description"] = 'The project(s) to which this event belongs.<br/>
  Usually enter one; to enter multiple projects, separate them with comma, and start with the most relevant one (it\'s used for the URL).';
  $overrides["field_instance.node-event-og_group_ref.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-og_group_ref.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 11,
  );
  $overrides["field_instance.node-event-og_group_ref.display|teaser|weight"] = 3;
  $overrides["field_instance.node-event-og_group_ref.label"] = 'Projects';
  $overrides["field_instance.node-event-og_group_ref.required"] = 1;
  $overrides["field_instance.node-event-og_group_ref.settings|behaviors|prepopulate|action_on_edit"] = 0;
  $overrides["field_instance.node-event-og_group_ref.settings|behaviors|prepopulate|og_context"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-og_group_ref.settings|behaviors|prepopulate|providers"] = array(
    'og_context' => 0,
    'url' => 1,
  );
  $overrides["field_instance.node-event-og_group_ref.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-og_group_ref.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-event-og_group_ref.widget|weight"] = 9;
  $overrides["field_instance.node-event-title_field.description"] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#events" target = "_blank">online user\'s manual</a>.</strong>';
  $overrides["field_instance.node-event-title_field.display_in_partial_form"] = 1;
  $overrides["field_instance.node-event-title_field.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 12,
  );
  $overrides["field_instance.node-event-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-group-body.display_in_partial_form"] = 0;
  $overrides["field_instance.node-group-body.label"] = 'Project Description';
  $overrides["field_instance.node-group-body.required"] = 1;
  $overrides["field_instance.node-group-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-group-body.widget|settings|label_help_description"] = 'Describe what this project is about, so that interested people on Edgeryders can find it.';
  $overrides["field_instance.node-group-body.widget|weight"] = 5;
  $overrides["field_instance.node-group-field_group_logo.description"] = 'This image should be square if possible – else parts will not be visible when it is displayed.</br>
  
  If your image is larger than 800 x 800 pixels, it will be scaled down automatically.';
  $overrides["field_instance.node-group-field_group_logo.display_in_partial_form"] = 0;
  $overrides["field_instance.node-group-field_group_logo.label"] = 'Project Logo';
  $overrides["field_instance.node-group-field_group_logo.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-group-field_group_logo.settings|file_extensions"] = 'png jpg';
  $overrides["field_instance.node-group-field_group_logo.settings|max_filesize"] = '4 MB';
  $overrides["field_instance.node-group-field_group_logo.settings|max_resolution"] = '800x800';
  $overrides["field_instance.node-group-field_group_logo.settings|min_resolution"] = '200x200';
  $overrides["field_instance.node-group-field_group_logo.widget|settings|filefield_sources"] = array(
    'filefield_sources' => array(),
    'source_attach' => array(
      'absolute' => 0,
      'attach_mode' => 'move',
      'path' => 'file_attach',
    ),
    'source_imce' => array(
      'imce_mode' => 0,
    ),
    'source_reference' => array(
      'autocomplete' => 0,
    ),
  );
  $overrides["field_instance.node-group-field_group_logo.widget|settings|label_help_description"] = 'A logo for your project. Please add one, because only then your project will be listed in the <a href="https://edgeryders.eu/projects">Edgeryders Project Directory</a>.<br/>
  
  Please respect copyrights of your sources, including to add proper attribution to CC licenced imagery in the project description field below.';
  $overrides["field_instance.node-group-field_group_logo.widget|weight"] = 4;
  $overrides["field_instance.node-group-field_og_access_default_value.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-group-field_og_access_default_value.widget|weight"] = 13;
  $overrides["field_instance.node-group-field_og_subscribe_settings.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-group-field_og_subscribe_settings.widget|weight"] = 12;
  $overrides["field_instance.node-group-field_radioactivity.default_value|0|radioactivity_energy"] = 500;
  $overrides["field_instance.node-group-field_radioactivity.default_value|0|radioactivity_timestamp"] = 1393921746;
  $overrides["field_instance.node-group-field_radioactivity.display_in_partial_form"] = 0;
  $overrides["field_instance.node-group-field_radioactivity.display|default|label"] = 'inline';
  $overrides["field_instance.node-group-field_radioactivity.display|default|settings|type"] = 'energy';
  $overrides["field_instance.node-group-field_radioactivity.display|default|weight"] = 7;
  $overrides["field_instance.node-group-field_radioactivity.display|full"] = array(
    'label' => 'above',
    'module' => 'radioactivity',
    'settings' => array(
      'accuracy' => 100,
      'energy' => 10,
      'type' => 'none',
    ),
    'type' => 'radioactivity_combo_formatter',
    'weight' => 3,
  );
  $overrides["field_instance.node-group-field_radioactivity.display|rss"] = array(
    'label' => 'above',
    'module' => 'radioactivity',
    'settings' => array(
      'accuracy' => 100,
      'energy' => 10,
      'type' => 'none',
    ),
    'type' => 'radioactivity_combo_formatter',
    'weight' => 3,
  );
  $overrides["field_instance.node-group-field_radioactivity.display|teaser|module"] = 'radioactivity';
  $overrides["field_instance.node-group-field_radioactivity.display|teaser|settings|accuracy"] = 100;
  $overrides["field_instance.node-group-field_radioactivity.display|teaser|settings|energy"] = 10;
  $overrides["field_instance.node-group-field_radioactivity.display|teaser|settings|type"] = 'none';
  $overrides["field_instance.node-group-field_radioactivity.display|teaser|type"] = 'radioactivity_combo_formatter';
  $overrides["field_instance.node-group-field_radioactivity.display|teaser|weight"] = 3;
  $overrides["field_instance.node-group-field_radioactivity.required"] = FALSE;
  $overrides["field_instance.node-group-field_radioactivity.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-group-field_radioactivity.settings|history"] = 0;
  $overrides["field_instance.node-group-field_topics.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-group-field_topics.widget|weight"] = 7;
  $overrides["field_instance.node-group-group_access.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-group-group_access.widget|weight"] = 11;
  $overrides["field_instance.node-group-group_group.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-group-group_group.widget|weight"] = 2;
  $overrides["field_instance.node-group-og_roles_permissions.node-group-og_roles_permissions"]["DELETED"] = TRUE;
  $overrides["field_instance.node-group-title_field.description"] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#groups" target = "_blank">online user\'s manual</a>.</strong>';
  $overrides["field_instance.node-group-title_field.display_in_partial_form"] = 0;
  $overrides["field_instance.node-group-title_field.display|default|label"] = 'hidden';
  $overrides["field_instance.node-group-title_field.display|teaser|label"] = 'hidden';
  $overrides["field_instance.node-group-title_field.label"] = 'Project name';
  $overrides["field_instance.node-group-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-group-title_field.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-group-title_field.widget|weight"] = 1;
  $overrides["field_instance.node-journal-title_field.comment_alter"] = 0;
  $overrides["field_instance.node-journal-title_field.comment_alter_hide"] = 0;
  $overrides["field_instance.node-journal-title_field.description"] = 'Normally just the name of the project / activity that you want to document with this journal.';
  $overrides["field_instance.node-journal-title_field.display_in_partial_form"] = 0;
  $overrides["field_instance.node-journal-title_field.display|attend_button"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-journal-title_field.display|default|weight"] = 6;
  $overrides["field_instance.node-journal-title_field.label"] = 'Journal name';
  $overrides["field_instance.node-journal-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-journal-title_field.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-journal-title_field.widget|settings|size"] = 120;
  $overrides["field_instance.node-journal-title_field.widget|weight"] = 0;
  $overrides["field_instance.node-minisite_page-title_field.display_in_partial_form"]["DELETED"] = TRUE;
  $overrides["field_instance.node-minisite_page-title_field.display|default|weight"] = 5;
  $overrides["field_instance.node-minisite_page-title_field.required"] = TRUE;
  $overrides["field_instance.node-minisite_page-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-minisite_page-title_field.widget|active"]["DELETED"] = TRUE;
  $overrides["field_instance.node-minisite_page-title_field.widget|weight"] = 0;
  $overrides["field_instance.node-notice-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-notice-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-page-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-page-title_field.description"] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#content-2" target = "_blank">online user\'s manual</a>.</strong>';
  $overrides["field_instance.node-page-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-poll-title_field.description"] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#content-2" target = "_blank">online user\'s manual</a>.</strong>';
  $overrides["field_instance.node-poll-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-post-body.display|default|weight"] = 0;
  $overrides["field_instance.node-post-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-post-body.widget|weight"] = 3;
  $overrides["field_instance.node-post-field_radioactivity.default_value|0|radioactivity_timestamp"] = 1374938662;
  $overrides["field_instance.node-post-field_radioactivity.display|default|label"] = 'hidden';
  $overrides["field_instance.node-post-field_radioactivity.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-post-field_radioactivity.display|default|settings|accuracy"]["DELETED"] = TRUE;
  $overrides["field_instance.node-post-field_radioactivity.display|default|settings|energy"]["DELETED"] = TRUE;
  $overrides["field_instance.node-post-field_radioactivity.display|default|settings|type"]["DELETED"] = TRUE;
  $overrides["field_instance.node-post-field_radioactivity.display|default|type"] = 'hidden';
  $overrides["field_instance.node-post-field_radioactivity.display|default|weight"] = 9;
  $overrides["field_instance.node-post-field_radioactivity.required"] = FALSE;
  $overrides["field_instance.node-post-field_radioactivity.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-post-field_radioactivity.settings|history"] = 0;
  $overrides["field_instance.node-post-field_radioactivity.widget|weight"] = 4;
  $overrides["field_instance.node-post-field_topics.display|default|weight"] = 4;
  $overrides["field_instance.node-post-field_topics.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-post-field_topics.widget|weight"] = 10;
  $overrides["field_instance.node-post-group_content_access.comment_alter"] = 0;
  $overrides["field_instance.node-post-group_content_access.comment_alter_hide"] = 0;
  $overrides["field_instance.node-post-group_content_access.display_in_partial_form"] = 0;
  $overrides["field_instance.node-post-group_content_access.display|default|label"] = 'above';
  $overrides["field_instance.node-post-group_content_access.display|default|module"] = 'list';
  $overrides["field_instance.node-post-group_content_access.display|default|type"] = 'list_default';
  $overrides["field_instance.node-post-group_content_access.display|default|weight"] = 7;
  $overrides["field_instance.node-post-group_content_access.required"] = 1;
  $overrides["field_instance.node-post-group_content_access.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-post-group_content_access.widget|active"] = 1;
  $overrides["field_instance.node-post-group_content_access.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-post-group_content_access.widget|weight"] = 11;
  $overrides["field_instance.node-post-og_group_ref.comment_alter"] = 0;
  $overrides["field_instance.node-post-og_group_ref.comment_alter_hide"] = 0;
  $overrides["field_instance.node-post-og_group_ref.description"] = 'The project(s) to which this post belongs.<br/>
  Usually enter one; to enter multiple projects, separate them with comma, and start with the most relevant one (it\'s used for the URL).';
  $overrides["field_instance.node-post-og_group_ref.display_in_partial_form"] = 0;
  $overrides["field_instance.node-post-og_group_ref.display|default|weight"] = 6;
  $overrides["field_instance.node-post-og_group_ref.label"] = 'Projects';
  $overrides["field_instance.node-post-og_group_ref.required"] = 1;
  $overrides["field_instance.node-post-og_group_ref.settings|behaviors|og_widget|access_override"] = 0;
  $overrides["field_instance.node-post-og_group_ref.settings|behaviors|prepopulate|action_on_edit"] = 0;
  $overrides["field_instance.node-post-og_group_ref.settings|behaviors|prepopulate|og_context"]["DELETED"] = TRUE;
  $overrides["field_instance.node-post-og_group_ref.settings|behaviors|prepopulate|providers"] = array(
    'og_context' => 0,
    'url' => 1,
  );
  $overrides["field_instance.node-post-og_group_ref.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-post-og_group_ref.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-post-title_field.description"] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#content-2" target = "_blank">online user\'s manual</a>.</strong>';
  $overrides["field_instance.node-post-title_field.display_in_partial_form"] = 1;
  $overrides["field_instance.node-post-title_field.display|default|weight"] = 10;
  $overrides["field_instance.node-post-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-post-title_field.widget|weight"] = 2;
  $overrides["field_instance.node-question-title_field.description"] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#content-2" target = "_blank">online user\'s manual</a>.</strong>';
  $overrides["field_instance.node-question-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-task-body.comment_alter"] = 0;
  $overrides["field_instance.node-task-body.comment_alter_hide"] = 0;
  $overrides["field_instance.node-task-body.display_in_partial_form"] = 0;
  $overrides["field_instance.node-task-body.display|default|weight"] = 1;
  $overrides["field_instance.node-task-body.required"] = 0;
  $overrides["field_instance.node-task-body.settings|display_summary"] = 0;
  $overrides["field_instance.node-task-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-task-body.widget|active"] = 1;
  $overrides["field_instance.node-task-body.widget|settings|label_help_description"] = 'Briefly describe what is to be done.';
  $overrides["field_instance.node-task-body.widget|weight"] = 6;
  $overrides["field_instance.node-task-field_radioactivity.node-task-field_radioactivity"]["DELETED"] = TRUE;
  $overrides["field_instance.node-task-field_topics.node-task-field_topics"]["DELETED"] = TRUE;
  $overrides["field_instance.node-task-group_content_access.display|default|weight"] = 4;
  $overrides["field_instance.node-task-group_content_access.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-task-group_content_access.widget|weight"] = 12;
  $overrides["field_instance.node-task-og_group_ref.comment_alter"] = 0;
  $overrides["field_instance.node-task-og_group_ref.comment_alter_hide"] = 0;
  $overrides["field_instance.node-task-og_group_ref.description"] = 'The project(s) to which this task belongs.<br/>
  Usually enter one; to enter multiple projects, separate them with comma, and start with the most relevant one (it\'s used for the URL).';
  $overrides["field_instance.node-task-og_group_ref.display_in_partial_form"] = 0;
  $overrides["field_instance.node-task-og_group_ref.display|default|weight"] = 2;
  $overrides["field_instance.node-task-og_group_ref.label"] = 'Projects';
  $overrides["field_instance.node-task-og_group_ref.required"] = 1;
  $overrides["field_instance.node-task-og_group_ref.settings|behaviors|prepopulate|action_on_edit"] = 0;
  $overrides["field_instance.node-task-og_group_ref.settings|behaviors|prepopulate|og_context"]["DELETED"] = TRUE;
  $overrides["field_instance.node-task-og_group_ref.settings|behaviors|prepopulate|providers"] = array(
    'og_context' => 0,
    'url' => 1,
  );
  $overrides["field_instance.node-task-og_group_ref.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-task-og_group_ref.widget|settings|label_help_description"] = 'TODO: add the label_help message for this field, since it\'s working now for entity reference fields.';
  $overrides["field_instance.node-task-og_group_ref.widget|weight"] = 7;
  $overrides["field_instance.node-task-title_field.description"] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#Tasks" target = "_blank">online user\'s manual</a>.</strong>';
  $overrides["field_instance.node-task-title_field.display_in_partial_form"] = 1;
  $overrides["field_instance.node-task-title_field.display|default|weight"] = 5;
  $overrides["field_instance.node-task-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-task-title_field.widget|weight"] = 0;
  $overrides["field_instance.node-webform-title_field.display_in_partial_form"]["DELETED"] = TRUE;
  $overrides["field_instance.node-webform-title_field.display|default|weight"] = 2;
  $overrides["field_instance.node-webform-title_field.required"] = TRUE;
  $overrides["field_instance.node-webform-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-webform-title_field.widget|active"]["DELETED"] = TRUE;
  $overrides["field_instance.node-wiki-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-wiki-body.widget|weight"] = 3;
  $overrides["field_instance.node-wiki-field_radioactivity.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-wiki-field_radioactivity.settings|history"] = 0;
  $overrides["field_instance.node-wiki-field_radioactivity.widget|weight"] = 4;
  $overrides["field_instance.node-wiki-field_topics.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-wiki-field_topics.widget|weight"] = 8;
  $overrides["field_instance.node-wiki-group_content_access.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-wiki-group_content_access.widget|weight"] = 9;
  $overrides["field_instance.node-wiki-og_group_ref.comment_alter"] = 0;
  $overrides["field_instance.node-wiki-og_group_ref.comment_alter_hide"] = 0;
  $overrides["field_instance.node-wiki-og_group_ref.description"] = 'The project(s) to which this wiki belongs.<br/>
  Usually enter one; to enter multiple projects, separate them with comma, and start with the most relevant one (it\'s used for the URL).';
  $overrides["field_instance.node-wiki-og_group_ref.display_in_partial_form"] = 0;
  $overrides["field_instance.node-wiki-og_group_ref.label"] = 'Projects';
  $overrides["field_instance.node-wiki-og_group_ref.required"] = 1;
  $overrides["field_instance.node-wiki-og_group_ref.settings|behaviors|prepopulate|action_on_edit"] = 0;
  $overrides["field_instance.node-wiki-og_group_ref.settings|behaviors|prepopulate|og_context"]["DELETED"] = TRUE;
  $overrides["field_instance.node-wiki-og_group_ref.settings|behaviors|prepopulate|providers"] = array(
    'og_context' => 0,
    'url' => 1,
  );
  $overrides["field_instance.node-wiki-og_group_ref.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-wiki-og_group_ref.widget|settings|label_help_description"] = '';
  $overrides["field_instance.node-wiki-title_field.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-wiki-title_field.widget|weight"] = 2;
  $overrides["field_instance.og_membership-og_membership_type_default-og_membership_request.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.user-user-field_bio.display_in_partial_form"] = 0;
  $overrides["field_instance.user-user-field_bio.display|default|weight"] = 0;
  $overrides["field_instance.user-user-field_bio.display|full"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 3,
  );
  $overrides["field_instance.user-user-field_bio.display|token"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 0,
  );
  $overrides["field_instance.user-user-field_bio.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.user-user-field_bio.widget|weight"] = 17;
  $overrides["field_instance.user-user-field_facebook_url.description"] = 'Your Facebook account. Enter a complete URL such as http://facebook.com/yourname.';
  $overrides["field_instance.user-user-field_facebook_url.display|default|weight"] = 5;
  $overrides["field_instance.user-user-field_facebook_url.display|full"] = array(
    'label' => 'above',
    'module' => 'link',
    'settings' => array(),
    'type' => 'link_default',
    'weight' => 6,
  );
  $overrides["field_instance.user-user-field_facebook_url.display|token"] = array(
    'label' => 'above',
    'module' => 'link',
    'settings' => array(),
    'type' => 'link_default',
    'weight' => 3,
  );
  $overrides["field_instance.user-user-field_facebook_url.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.user-user-field_facebook_url.settings|rel_remove"] = 'default';
  $overrides["field_instance.user-user-field_facebook_url.widget|weight"] = 9;
  $overrides["field_instance.user-user-field_linkedin_url.user-user-field_linkedin_url"]["DELETED"] = TRUE;
  $overrides["field_instance.user-user-field_name_first.description"] = '(No longer in use. Enter your full name into the "Edit Account" tab instead.)';
  $overrides["field_instance.user-user-field_name_first.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.user-user-field_name_first.display|default|type"] = 'hidden';
  $overrides["field_instance.user-user-field_name_first.display|default|weight"] = 19;
  $overrides["field_instance.user-user-field_name_first.display|full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 12,
  );
  $overrides["field_instance.user-user-field_name_first.display|token"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 9,
  );
  $overrides["field_instance.user-user-field_name_first.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.user-user-field_name_first.settings|user_register_form"] = 0;
  $overrides["field_instance.user-user-field_name_first.widget|weight"] = 4;
  $overrides["field_instance.user-user-field_name_last.description"] = '(No longer in use. Enter your full name into the "Edit Account" tab instead.)';
  $overrides["field_instance.user-user-field_name_last.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.user-user-field_name_last.display|default|type"] = 'hidden';
  $overrides["field_instance.user-user-field_name_last.display|default|weight"] = 20;
  $overrides["field_instance.user-user-field_name_last.display|full"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 13,
  );
  $overrides["field_instance.user-user-field_name_last.display|token"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 10,
  );
  $overrides["field_instance.user-user-field_name_last.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.user-user-field_name_last.settings|user_register_form"] = 0;
  $overrides["field_instance.user-user-field_name_last.widget|weight"] = 5;
  $overrides["field_instance.user-user-field_twitter_url.description"] = 'Your Twitter account. Enter as a complete URL such as https://twitter.com/username.';
  $overrides["field_instance.user-user-field_twitter_url.display|default|weight"] = 4;
  $overrides["field_instance.user-user-field_twitter_url.display|full"] = array(
    'label' => 'above',
    'module' => 'link',
    'settings' => array(),
    'type' => 'link_default',
    'weight' => 5,
  );
  $overrides["field_instance.user-user-field_twitter_url.display|token"] = array(
    'label' => 'above',
    'module' => 'link',
    'settings' => array(),
    'type' => 'link_default',
    'weight' => 2,
  );
  $overrides["field_instance.user-user-field_twitter_url.settings|enable_tokens"] = 0;
  $overrides["field_instance.user-user-field_twitter_url.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.user-user-field_twitter_url.settings|rel_remove"] = 'default';
  $overrides["field_instance.user-user-field_twitter_url.widget|weight"] = 10;
  $overrides["field_instance.user-user-message_subscribe_email.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.user-user-message_subscribe_email.display|default|type"] = 'hidden';
  $overrides["field_instance.user-user-message_subscribe_email.display|default|weight"] = 15;
  $overrides["field_instance.user-user-message_subscribe_email.display|full"] = array(
    'label' => 'above',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 9,
  );
  $overrides["field_instance.user-user-message_subscribe_email.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.user-user-message_subscribe_email.widget|weight"] = 11;

  // Exported overrides for: file_display
  $overrides["file_display.image__default__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__preview__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__teaser__file_field_file_default.status"] = FALSE;

  // Exported overrides for: file_type
  $overrides["file_type.audio.disabled"] = FALSE;
  $overrides["file_type.document.disabled"] = FALSE;
  $overrides["file_type.image.disabled"] = FALSE;
  $overrides["file_type.video.disabled"] = FALSE;

  // Exported overrides for: filter
  $overrides["filter.filtered_html.filters|filter_html"]["DELETED"] = TRUE;
  $overrides["filter.filtered_html.filters|filter_htmlcorrector"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => -46,
  );
  $overrides["filter.filtered_html.filters|filter_mentions"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => 0,
  );
  $overrides["filter.filtered_html.filters|filter_url"] = array(
    'settings' => array(
      'filter_url_length' => 128,
    ),
    'status' => 1,
    'weight' => -48,
  );
  $overrides["filter.filtered_html.filters|htmLawed"] = array(
    'settings' => array(
      'htmLawed' => array(
        'config' => '\'tidy\' => 1, 
        \'elements\' => \'* -script -applet\', 
        \'deny_attribute\' => \'allowscriptaccess on*\', 
        \'comment\' => 2, 
        \'cdata\' => 2, 
        \'css_expression\' => 1',
        'help' => 'HTML filtering allows all tags except script and applet, all attributes except the "on*" JavaScript event attributes.
        Additionally allows &lt;span property=\'\' resource=\'\'&gt;&lt;/span&gt; for RDFa semantic markup.
        Additionally allows &lt;a data-hovertext=\'\'&gt;&lt;/a&gt;.',
        'spec' => 'span=property, resource;
        a=data-hovertext;',
      ),
    ),
    'status' => 1,
    'weight' => 0,
  );
  $overrides["filter.filtered_html.name"] = 'Filtered HTML (your normal choice)';
  $overrides["filter.filtered_html.weight"] = -10;
  $overrides["filter.full_html.filters|filter_mentions"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => 0,
  );
  $overrides["filter.full_html.filters|filter_url"] = array(
    'settings' => array(
      'filter_url_length' => 128,
    ),
    'status' => 1,
    'weight' => -48,
  );
  $overrides["filter.full_html.weight"] = -8;

  // Exported overrides for: flag
  $overrides["flag.commons_follow_user.show_on_entity"] = FALSE;
  $overrides["flag.email_node.status"]["DELETED"] = TRUE;
  $overrides["flag.email_term.types|0"]["DELETED"] = TRUE;
  $overrides["flag.email_user.show_on_entity"] = FALSE;
  $overrides["flag.subscribe_user.show_on_entity"] = FALSE;

  // Exported overrides for: menu_links
  $overrides["menu_links.main-menu:search.weight"] = -36;

  // Exported overrides for: message_type
  $overrides["message_type.commons_activity_streams_comment_created.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.commons_activity_streams_comment_created.description"] = 'Activity Streams Entry: Comment created';
  $overrides["message_type.commons_activity_streams_comment_created.language"] = 'en';
  $overrides["message_type.commons_activity_streams_comment_created.message_text|ar"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|de"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|en"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|es"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|fr"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|hy"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|it"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|ka"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|nl"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|ro"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|ru"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|sv"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_comment_created.message_text|und|0|safe_value"] = '
  <p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_activity_streams_comment_created.message_text|und|0|value"] = '<p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_activity_streams_comment_created.message_text|und|1|safe_value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
  ';
  $overrides["message_type.commons_activity_streams_comment_created.message_text|und|1|value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
  ';
  $overrides["message_type.commons_activity_streams_comment_created.message_text|und|2"]["DELETED"] = TRUE;
  $overrides["message_type.commons_activity_streams_node_created.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.commons_activity_streams_node_created.description"] = 'Activity Streams Entry: Node created';
  $overrides["message_type.commons_activity_streams_node_created.language"] = 'en';
  $overrides["message_type.commons_activity_streams_node_created.message_text|ar"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|de"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|en"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|es"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|fr"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|hy"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|it"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|ka"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|nl"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|ro"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|ru"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|sv"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_node_created.message_text|und|0|safe_value"] = '
  <p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_activity_streams_node_created.message_text|und|0|value"] = '<p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_activity_streams_node_created.message_text|und|1|safe_value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
  ';
  $overrides["message_type.commons_activity_streams_node_created.message_text|und|1|value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
  ';
  $overrides["message_type.commons_activity_streams_node_created.message_text|und|2"]["DELETED"] = TRUE;
  $overrides["message_type.commons_activity_streams_user_profile_updated.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.description"] = 'Activity Streams Entry: User profile updated';
  $overrides["message_type.commons_activity_streams_user_profile_updated.language"] = 'en';
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|ar"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|de"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|en"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|es"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|fr"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|hy"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|it"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|ka"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|nl"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|ro"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|ru"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|sv"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
      ',
    ),
  );
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|und|0|safe_value"] = '
  <p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|und|0|value"] = '<p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|und|1|safe_value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
  ';
  $overrides["message_type.commons_activity_streams_user_profile_updated.message_text|und|1|value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
  ';
  $overrides["message_type.commons_events_event_node_created.description"] = 'E-Mail: Event created';
  $overrides["message_type.commons_events_event_node_created.language"] = 'en';
  $overrides["message_type.commons_events_event_node_created.message_text|ar"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|de"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|en"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|es"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|fr"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|hy"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|it"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|ka"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|nl"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|ro"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|ru"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_events_event_node_created.message_text|sv"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.commons_follow_user_user_followed.description"] = 'Activity Streams Entry: User followed user';
  $overrides["message_type.commons_follow_user_user_followed.language"] = 'en';
  $overrides["message_type.commons_follow_user_user_followed.message_text|ar"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|de"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|en"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|es"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|fr"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|hy"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|it"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|ka"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|nl"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|ro"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|ru"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|sv"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_follow_user_user_followed.message_text|und|0|safe_value"] = '
  <p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_follow_user_user_followed.message_text|und|0|value"] = '<p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_follow_user_user_followed.message_text|und|1|safe_value"] = '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
  ';
  $overrides["message_type.commons_follow_user_user_followed.message_text|und|1|value"] = '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
  ';
  $overrides["message_type.commons_like_user_likes_node.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.commons_like_user_likes_node.description"] = 'Activity Streams Entry: User liked node';
  $overrides["message_type.commons_like_user_likes_node.language"] = 'en';
  $overrides["message_type.commons_like_user_likes_node.message_text|ar"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|de"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|en"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|es"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|fr"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|hy"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|it"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|ka"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|nl"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|ro"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|ru"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|sv"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
      ',
    ),
  );
  $overrides["message_type.commons_like_user_likes_node.message_text|und|0|safe_value"] = '<p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_like_user_likes_node.message_text|und|0|value"] = '<p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_like_user_likes_node.message_text|und|1|safe_value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
  ';
  $overrides["message_type.commons_like_user_likes_node.message_text|und|1|value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
  ';
  $overrides["message_type.commons_notify_comment_created.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.commons_notify_comment_created.description"] = 'E-Mail: Comment created';
  $overrides["message_type.commons_notify_comment_created.language"] = 'en';
  $overrides["message_type.commons_notify_comment_created.message_text|ar"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      [message:field-target-comments:0:body]
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>[message:field-target-comments:0:body]</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|de"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|en"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|es"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|fr"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|hy"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      [message:field-target-comments:0:body]
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>[message:field-target-comments:0:body]</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|it"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|ka"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      [message:field-target-comments:0:body]
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>[message:field-target-comments:0:body]</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|nl"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|ro"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|ru"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created.message_text|sv"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field] [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.description"] = 'E-Mail: Comment created that is not in groups';
  $overrides["message_type.commons_notify_comment_created_no_groups.language"] = 'en';
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|ar"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      [message:field-target-comments:0:body]
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>[message:field-target-comments:0:body]</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|de"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|en"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|es"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|fr"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|hy"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      [message:field-target-comments:0:body]
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>[message:field-target-comments:0:body]</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|it"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|ka"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      [message:field-target-comments:0:body]
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>[message:field-target-comments:0:body]</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|nl"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|ro"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|ru"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_comment_created_no_groups.message_text|sv"] = array(
    0 => array(
      'value' => 'New comment on [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New comment on [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-comments:0:author] commented on [message:field-target-nodes:0:title_field]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.commons_notify_node_created.description"] = 'E-Mail: Node created';
  $overrides["message_type.commons_notify_node_created.language"] = 'en';
  $overrides["message_type.commons_notify_node_created.message_text|ar"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|de"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|en"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|es"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|fr"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|hy"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|it"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|ka"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|nl"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|ro"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|ru"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created.message_text|sv"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.commons_notify_node_created_no_groups.description"] = 'E-Mail: Node created that is not in groups';
  $overrides["message_type.commons_notify_node_created_no_groups.language"] = 'en';
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|ar"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|de"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|en"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|es"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|fr"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|hy"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|it"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|ka"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|nl"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|ro"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|ru"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_notify_node_created_no_groups.message_text|sv"] = array(
    0 => array(
      'value' => 'New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]',
      'format' => 'plain_text',
      'safe_value' => '<p>New [message:field-target-nodes:0:content-type] on [site:name]: [message:field-target-nodes:0:title_field]</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      [message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:
      
      [message:field-target-nodes:0:body]
      
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] “[message:field-target-nodes:0:title_field]” on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:</p>
      <p>[message:field-target-nodes:0:body]</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.commons_posts_post_created.description"] = 'Activity Streams Entry: Post created';
  $overrides["message_type.commons_posts_post_created.language"] = 'en';
  $overrides["message_type.commons_posts_post_created.message_text|ar"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|de"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|en"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|es"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|fr"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|hy"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|it"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|ka"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|nl"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|ro"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|ru"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|sv"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:35x35]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:35x35]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_posts_post_created.message_text|und|0|safe_value"] = '
  <p>[message:user:picture:35x35]</p>
  ';
  $overrides["message_type.commons_posts_post_created.message_text|und|0|value"] = '<p>[message:user:picture:35x35]</p>
  ';
  $overrides["message_type.commons_posts_post_created.message_text|und|1|safe_value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
  ';
  $overrides["message_type.commons_posts_post_created.message_text|und|1|value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
  ';
  $overrides["message_type.commons_posts_post_created.message_text|und|2"]["DELETED"] = TRUE;
  $overrides["message_type.commons_wikis_wiki_updated.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.commons_wikis_wiki_updated.description"] = 'Activity Streams Entry: Wiki updated';
  $overrides["message_type.commons_wikis_wiki_updated.language"] = 'en';
  $overrides["message_type.commons_wikis_wiki_updated.message_text|ar"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|de"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|en"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|es"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|fr"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|hy"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|it"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|ka"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|nl"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|ro"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|ru"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|sv"] = array(
    0 => array(
      'value' => '<p>[message:user:picture:50x50]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p>[message:user:picture:50x50]</p>
      ',
    ),
    1 => array(
      'value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
      'format' => 'full_html',
      'safe_value' => '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
      ',
    ),
  );
  $overrides["message_type.commons_wikis_wiki_updated.message_text|und|0|safe_value"] = '<p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_wikis_wiki_updated.message_text|und|0|value"] = '<p>[message:user:picture:50x50]</p>
  ';
  $overrides["message_type.commons_wikis_wiki_updated.message_text|und|1|safe_value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
  ';
  $overrides["message_type.commons_wikis_wiki_updated.message_text|und|1|value"] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
  ';
  $overrides["message_type.commons_wikis_wiki_updated.message_text|und|2"]["DELETED"] = TRUE;
  $overrides["message_type.edgeryders_mentions_comment.message_text|ar"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_comment.message_text|de"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_comment.message_text|es"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_comment.message_text|fr"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_comment.message_text|hy"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_comment.message_text|it"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_comment.message_text|ka"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_comment.message_text|nl"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_comment.message_text|ro"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_comment.message_text|ru"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_comment.message_text|sv"] = array(
    0 => array(
      'value' => '<p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
      'format' => 'filtered_html',
      'safe_value' => '
      <p>[Edgeryders] You have been mentioned in a comment.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-comments:0:author]" on "[message:field-target-nodes:0:title_field]" [commons-groups:in-groups-text]:
      
      "[message:field-target-comments:0:title]
      
      [message:field-target-comments:0:body]"
      
      Read & respond: [message:field-target-comments:0:url]
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-comments:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot; [commons-groups:in-groups-text]:</p>
      <p>&quot;[message:field-target-comments:0:title]</p>
      <p>[message:field-target-comments:0:body]&quot;</p>
      <p>Read &amp; respond: [message:field-target-comments:0:url]<br />
      Update your notification settings: [site:url]/user/[message:user:uid]/notification-settings</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|ar"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|de"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|es"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|fr"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|hy"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|it"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|ka"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|nl"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|ro"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|ru"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.edgeryders_mentions_node.message_text|sv"] = array(
    0 => array(
      'value' => '[Edgeryders] You have been mentioned.
      ',
      'format' => 'plain_text',
      'safe_value' => '<p>[Edgeryders] You have been mentioned.</p>
      ',
    ),
    1 => array(
      'value' => 'Hi [message:user:name],
      
      You have been mentioned by "[message:field-target-nodes:0:author]" on "[message:field-target-nodes:0:title_field]".
      
      Permalink: [message:field-target-nodes:0:url]
      Add a comment at [message:field-target-nodes:0:url]#comment-form
      
      Change email notifications at [site:url]user/[message:user:uid]/notification-settings
      
      --
      [site:name]',
      'format' => 'plain_text',
      'safe_value' => '<p>Hi [message:user:name],</p>
      <p>You have been mentioned by &quot;[message:field-target-nodes:0:author]&quot; on &quot;[message:field-target-nodes:0:title_field]&quot;.</p>
      <p>Permalink: [message:field-target-nodes:0:url]<br />
      Add a comment at [message:field-target-nodes:0:url]#comment-form</p>
      <p>Change email notifications at [site:url]user/[message:user:uid]/notification-settings</p>
      <p>--<br />
      [site:name]</p>
      ',
    ),
  );
  $overrides["message_type.redhen_contact.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.redhen_contact.description"] = 'RedHen Activity Message: Contact modified';
  $overrides["message_type.redhen_contact.language"] = 'en';
  $overrides["message_type.redhen_contact.message_order_display_name"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_contact.message_text"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_engagement.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.redhen_engagement.description"] = 'RedHen Activity Message: Engagement modified';
  $overrides["message_type.redhen_engagement.language"] = 'en';
  $overrides["message_type.redhen_engagement.message_order_display_name"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_engagement.message_text"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_membership.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.redhen_membership.description"] = 'RedHen Activity Message: Membership modified';
  $overrides["message_type.redhen_membership.language"] = 'en';
  $overrides["message_type.redhen_membership.message_order_display_name"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_membership.message_text"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_note.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.redhen_note.description"] = 'RedHen Activity Message: Note modified';
  $overrides["message_type.redhen_note.language"] = 'en';
  $overrides["message_type.redhen_note.message_order_display_name"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_note.message_text"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_org.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.redhen_org.description"] = 'RedHen Activity Message: Organization modified';
  $overrides["message_type.redhen_org.language"] = 'en';
  $overrides["message_type.redhen_org.message_order_display_name"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_org.message_text"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_relation.data|token options"] = array(
    'clear' => 0,
  );
  $overrides["message_type.redhen_relation.description"] = 'RedHen Activity Message: Relation modified';
  $overrides["message_type.redhen_relation.language"] = 'en';
  $overrides["message_type.redhen_relation.message_order_display_name"]["DELETED"] = TRUE;
  $overrides["message_type.redhen_relation.message_text"]["DELETED"] = TRUE;

  // Exported overrides for: node
  $overrides["node.group.description"] = 'Use a project to work on an action or idea together with other Edgeryders.';
  $overrides["node.group.help"] = 'Use a project to work on an action or idea together with other Edgeryders.';
  $overrides["node.group.name"] = 'Project';
  $overrides["node.group.title_label"] = 'Project name';
  $overrides["node.poll.has_body"]["DELETED"] = TRUE;
  $overrides["node.poll.has_title"] = 1;
  $overrides["node.poll.help"] = '';
  $overrides["node.post.help"] = 'Start a conversation or share some information.';
  $overrides["node.task.title_label"] = 'Task name';

  // Exported overrides for: og_features_permission
  $overrides["og_features_permission.node:group:create document content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:create event content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:create post content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:create task content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:create wiki content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:delete own document content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:delete own event content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:delete own post content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:delete own task content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:delete own wiki content.roles|member"]["DELETED"] = TRUE;
  $overrides["og_features_permission.node:group:update any wiki content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:update own document content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:update own event content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:update own post content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:update own task content.roles|non-member"] = 'non-member';
  $overrides["og_features_permission.node:group:update own wiki content.roles|non-member"] = 'non-member';

  // Exported overrides for: og_membership_type
  $overrides["og_membership_type.og_membership_type_default.language"] = '';

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|content|new-2df3edec-8a4e-4435-a1b0-9468755e5293"] = (object) array(
      'pid' => 'new-2df3edec-8a4e-4435-a1b0-9468755e5293',
      'panel' => 'two_66_33_top',
      'type' => 'og_menu_single_menu',
      'subtype' => 'og_menu_single_menu',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'parent' => 0,
        'return' => 'Finish',
        'cancel' => 'Cancel',
        'override_title' => 1,
        'override_title_text' => '',
        'form_build_id' => 'form-q8snkIMxet459HZdu5dMG_1V7rrTIAcVC9yJFRsRMZk',
        'form_token' => 'Mn7Y09k_rTSuoiq27tgwzAk4JRb2LawsG4bJMt29NPc',
        'form_id' => 'og_menu_single_pane_edit_form',
        'op' => 'Finish',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => 'lote4menu',
        'css_class' => '',
      ),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '2df3edec-8a4e-4435-a1b0-9468755e5293',
    );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|content|new-2e2c7182-9047-42ca-9a8f-fa63bc6817e0"] = (object) array(
      'pid' => 'new-2e2c7182-9047-42ca-9a8f-fa63bc6817e0',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'commons_activity_streams_activity-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '2e2c7182-9047-42ca-9a8f-fa63bc6817e0',
    );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|content|new-deed05d0-e6bb-9b94-9d09-499090d1e5d3"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|content|new-e5356891-e28b-48de-8758-9efd02635258"] = (object) array(
      'pid' => 'new-e5356891-e28b-48de-8758-9efd02635258',
      'panel' => 'two_66_33_first',
      'type' => 'node_content',
      'subtype' => 'node_content',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'links' => 1,
        'no_extras' => 0,
        'override_title' => 1,
        'override_title_text' => '',
        'identifier' => 'fallback',
        'link' => 0,
        'leave_node_title' => 1,
        'build_mode' => 'full',
        'context' => 'argument_entity_id:node_1',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'e5356891-e28b-48de-8758-9efd02635258',
    );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|content|new-e83691bb-cd81-475a-acd2-c61a98ab61d2"] = (object) array(
      'pid' => 'new-e83691bb-cd81-475a-acd2-c61a98ab61d2',
      'panel' => 'two_66_33_bottom',
      'type' => 'block',
      'subtype' => 'google_analytics_reports-path_mini',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '%title (visible for admins only)',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'e83691bb-cd81-475a-acd2-c61a98ab61d2',
    );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|three_25_50_25_bottom"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|three_25_50_25_first"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|three_25_50_25_second"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|three_25_50_25_third"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|three_25_50_25_top"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|two_33_66_bottom"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|two_33_66_first"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|two_33_66_second"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|two_33_66_top"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|two_66_33_second"] = array(
    'style' => -1,
  );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panels|two_66_33_bottom"] = array(
    0 => 'new-e83691bb-cd81-475a-acd2-c61a98ab61d2',
  );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panels|two_66_33_first|0"] = 'new-e5356891-e28b-48de-8758-9efd02635258';
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panels|two_66_33_second"] = array(
    0 => 'new-2e2c7182-9047-42ca-9a8f-fa63bc6817e0',
  );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panels|two_66_33_top"] = array(
    0 => 'new-2df3edec-8a4e-4435-a1b0-9468755e5293',
  );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|title_pane"] = 0;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|uuid"] = 'fa24fa99-d5d6-40ee-9387-e44cd260b55f';
  $overrides["page_manager_handlers.node_view_panel_context.weight"] = -26;
  $overrides["page_manager_handlers.node_view_panelizer.weight"] = -30;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-0b81364e-8826-4c52-bfba-90723f67751c"] = (object) array(
      'pid' => 'new-0b81364e-8826-4c52-bfba-90723f67751c',
      'panel' => 'three_33_bottom',
      'type' => 'entity_field_extra',
      'subtype' => 'user:masquerade',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_mode' => 'full',
        'context' => 'argument_entity_id:user_1',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '0b81364e-8826-4c52-bfba-90723f67751c',
    );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-38b23f27-878a-f264-dd90-e55305d0f70c|style|settings"] = NULL;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-bbfb4f81-f786-4a31-b7b9-254517af0c75"] = (object) array(
      'pid' => 'new-bbfb4f81-f786-4a31-b7b9-254517af0c75',
      'panel' => 'three_33_bottom',
      'type' => 'entity_field_extra',
      'subtype' => 'user:masquerade',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_mode' => 'full',
        'context' => 'argument_entity_id:user_1',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'commons-pod',
      ),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'bbfb4f81-f786-4a31-b7b9-254517af0c75',
    );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_bottom"] = array(
    0 => 'new-bbfb4f81-f786-4a31-b7b9-254517af0c75',
    1 => 'new-0b81364e-8826-4c52-bfba-90723f67751c',
  );

  // Exported overrides for: radioactivity_decay_profile
  $overrides["radioactivity_decay_profile.commons_ra_node.cut_off"] = 10;
  $overrides["radioactivity_decay_profile.commons_ra_node.half_life"] = 17280;

  // Exported overrides for: rules_config
  $overrides["rules_config.rules_og_member_active.0"] = Array;
  $overrides["rules_config.rules_og_member_active.1"] = Array;
  $overrides["rules_config.rules_og_member_active.2"] = Array;
  $overrides["rules_config.rules_og_member_active.3"] = Array;
  $overrides["rules_config.rules_og_member_pending.0"] = Array;
  $overrides["rules_config.rules_og_member_pending.1"] = Array;
  $overrides["rules_config.rules_og_member_pending.2"] = Array;
  $overrides["rules_config.rules_og_member_pending.3"] = Array;
  $overrides["rules_config.rules_og_new_content.0"] = Array;
  $overrides["rules_config.rules_og_new_content.1"] = Array;
  $overrides["rules_config.rules_og_new_content.2"] = Array;

  // Exported overrides for: taxonomy
  $overrides["taxonomy.topics.weight"] = -10;

  // Exported overrides for: user_permission
  $overrides["user_permission.access comments.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.access comments.roles|site admin"] = 'site admin';
  $overrides["user_permission.access content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.access content.roles|content manager"] = 'content manager';
  $overrides["user_permission.access content.roles|site admin"] = 'site admin';
  $overrides["user_permission.access user profiles.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.access user profiles.roles|site admin"] = 'site admin';
  $overrides["user_permission.create document content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.create document content.roles|site admin"] = 'site admin';
  $overrides["user_permission.create event content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.create event content.roles|site admin"] = 'site admin';
  $overrides["user_permission.create event registration.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.create event registration.roles|site admin"] = 'site admin';
  $overrides["user_permission.create group content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.create group content.roles|site admin"] = 'site admin';
  $overrides["user_permission.create post content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.create post content.roles|site admin"] = 'site admin';
  $overrides["user_permission.create task content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.create task content.roles|site admin"] = 'site admin';
  $overrides["user_permission.create wiki content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.create wiki content.roles|site admin"] = 'site admin';
  $overrides["user_permission.delete any document content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any document content.roles|content manager"] = 'content manager';
  $overrides["user_permission.delete any document content.roles|site admin"] = 'site admin';
  $overrides["user_permission.delete any post content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any post content.roles|content manager"] = 'content manager';
  $overrides["user_permission.delete any post content.roles|site admin"] = 'site admin';
  $overrides["user_permission.delete any task content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any task content.roles|content manager"] = 'content manager';
  $overrides["user_permission.delete any task content.roles|site admin"] = 'site admin';
  $overrides["user_permission.delete own document content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own document content.roles|site admin"] = 'site admin';
  $overrides["user_permission.delete own event content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own event content.roles|site admin"] = 'site admin';
  $overrides["user_permission.delete own event registration.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own event registration.roles|site admin"] = 'site admin';
  $overrides["user_permission.delete own post content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own post content.roles|site admin"] = 'site admin';
  $overrides["user_permission.delete own task content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own task content.roles|site admin"] = 'site admin';
  $overrides["user_permission.delete own wiki content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own wiki content.roles|content manager"] = 'content manager';
  $overrides["user_permission.delete own wiki content.roles|site admin"] = 'site admin';
  $overrides["user_permission.edit any document content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any document content.roles|content manager"] = 'content manager';
  $overrides["user_permission.edit any document content.roles|site admin"] = 'site admin';
  $overrides["user_permission.edit any post content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any post content.roles|content manager"] = 'content manager';
  $overrides["user_permission.edit any post content.roles|site admin"] = 'site admin';
  $overrides["user_permission.edit any task content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any task content.roles|content manager"] = 'content manager';
  $overrides["user_permission.edit any task content.roles|site admin"] = 'site admin';
  $overrides["user_permission.edit any wiki content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any wiki content.roles|site admin"] = 'site admin';
  $overrides["user_permission.edit own document content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own document content.roles|site admin"] = 'site admin';
  $overrides["user_permission.edit own event content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own event content.roles|site admin"] = 'site admin';
  $overrides["user_permission.edit own group content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own group content.roles|site admin"] = 'site admin';
  $overrides["user_permission.edit own post content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own post content.roles|site admin"] = 'site admin';
  $overrides["user_permission.edit own task content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own task content.roles|site admin"] = 'site admin';
  $overrides["user_permission.edit own wiki content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own wiki content.roles|site admin"] = 'site admin';
  $overrides["user_permission.post comments.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.post comments.roles|site admin"] = 'site admin';
  $overrides["user_permission.search content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.search content.roles|site admin"] = 'site admin';
  $overrides["user_permission.skip comment approval.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.skip comment approval.roles|site admin"] = 'site admin';
  $overrides["user_permission.update own event registration.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.update own event registration.roles|site admin"] = 'site admin';
  $overrides["user_permission.use advanced search.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.use advanced search.roles|site admin"] = 'site admin';
  $overrides["user_permission.use custom search.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.use custom search.roles|site admin"] = 'site admin';
  $overrides["user_permission.use text format filtered_html.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.use text format filtered_html.roles|content manager"] = 'content manager';
  $overrides["user_permission.use text format filtered_html.roles|site admin"] = 'site admin';
  $overrides["user_permission.view event registration.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.view event registration.roles|site admin"] = 'site admin';
  $overrides["user_permission.view own event registration.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.view own event registration.roles|site admin"] = 'site admin';
  $overrides["user_permission.view own unpublished content.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.view own unpublished content.roles|site admin"] = 'site admin';

  // Exported overrides for: variable
  $overrides["variable.additional_settings__active_tab_wiki.value"] = 'edit-panelizer';
  $overrides["variable.comment_preview_group.value"] = 0;
  $overrides["variable.commons_radioactivity_entity_types.value|node|wiki"]["DELETED"] = TRUE;
  $overrides["variable.field_bundle_settings_message__commons_notify_comment_created.value|extra_fields|display|message__message_text__0|default"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__commons_notify_comment_created.value|extra_fields|display|message__message_text__1|default"] = array(
    'weight' => 1,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__commons_notify_comment_created.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__commons_notify_comment_created.value|view_modes|full"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__commons_notify_comment_created.value|view_modes|message_notify_email_body"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__commons_notify_comment_created.value|view_modes|message_notify_email_subject"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__commons_notify_comment_created.value|view_modes|token"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|extra_fields|display|sharethis"] = array(
    'default' => array(
      'weight' => 10,
      'visible' => TRUE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__document.value|extra_fields|form|metatags"] = array(
    'weight' => 40,
  );
  $overrides["variable.field_bundle_settings_node__document.value|extra_fields|form|path"] = array(
    'weight' => 30,
  );
  $overrides["variable.field_bundle_settings_node__document.value|extra_fields|form|redirect"] = array(
    'weight' => 30,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|attend_button"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|full"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|rss"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|search_index"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|teaser"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__document.value|view_modes|token"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__event.value|extra_fields|display|sharethis"] = array(
    'teaser' => array(
      'weight' => 10,
      'visible' => TRUE,
    ),
    'attend_button' => array(
      'weight' => 10,
      'visible' => FALSE,
    ),
    'default' => array(
      'weight' => 10,
      'visible' => TRUE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__event.value|extra_fields|form|language"] = array(
    'weight' => 8,
  );
  $overrides["variable.field_bundle_settings_node__event.value|extra_fields|form|metatags|weight"] = 19;
  $overrides["variable.field_bundle_settings_node__event.value|extra_fields|form|path|weight"] = 18;
  $overrides["variable.field_bundle_settings_node__event.value|extra_fields|form|redirect|weight"] = 15;
  $overrides["variable.field_bundle_settings_node__event.value|view_modes|attend_button"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__event.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__group.value|extra_fields|form|language"] = array(
    'weight' => 0,
  );
  $overrides["variable.field_bundle_settings_node__group.value|extra_fields|form|metatags"] = array(
    'weight' => 10,
  );
  $overrides["variable.field_bundle_settings_node__group.value|extra_fields|form|path"] = array(
    'weight' => 8,
  );
  $overrides["variable.field_bundle_settings_node__group.value|extra_fields|form|redirect"] = array(
    'weight' => 9,
  );
  $overrides["variable.field_bundle_settings_node__group.value|view_modes|attend_button"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|extra_fields|display|sharethis"] = array(
    'default' => array(
      'weight' => 5,
      'visible' => TRUE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__post.value|extra_fields|form|language"] = array(
    'weight' => 1,
  );
  $overrides["variable.field_bundle_settings_node__post.value|extra_fields|form|metatags"] = array(
    'weight' => 15,
  );
  $overrides["variable.field_bundle_settings_node__post.value|extra_fields|form|path"] = array(
    'weight' => 13,
  );
  $overrides["variable.field_bundle_settings_node__post.value|extra_fields|form|redirect"] = array(
    'weight' => 14,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|attend_button"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|full"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|rss"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|search_index"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|teaser"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__post.value|view_modes|token"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__task.value|extra_fields|display|sharethis"] = array(
    'default' => array(
      'weight' => 10,
      'visible' => TRUE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__task.value|extra_fields|form|metatags"] = array(
    'weight' => 11,
  );
  $overrides["variable.field_bundle_settings_node__task.value|extra_fields|form|path"] = array(
    'weight' => 8,
  );
  $overrides["variable.field_bundle_settings_node__task.value|extra_fields|form|redirect"] = array(
    'weight' => 9,
  );
  $overrides["variable.field_bundle_settings_node__task.value|extra_fields|form|title|weight"] = 0;
  $overrides["variable.field_bundle_settings_node__task.value|view_modes|attend_button"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__task.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__task.value|view_modes|full"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__task.value|view_modes|rss"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__task.value|view_modes|search_index"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__task.value|view_modes|search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__task.value|view_modes|teaser"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__task.value|view_modes|token"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__wiki.value|extra_fields|form|language"] = array(
    'weight' => 1,
  );
  $overrides["variable.field_bundle_settings_node__wiki.value|extra_fields|form|metatags"] = array(
    'weight' => 12,
  );
  $overrides["variable.field_bundle_settings_node__wiki.value|extra_fields|form|path"] = array(
    'weight' => 11,
  );
  $overrides["variable.field_bundle_settings_node__wiki.value|extra_fields|form|redirect"] = array(
    'weight' => 10,
  );
  $overrides["variable.field_bundle_settings_node__wiki.value|view_modes|attend_button"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__wiki.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.menu_options_wiki.value|0"]["DELETED"] = TRUE;
  $overrides["variable.node_options_group.value|0"] = 'status';
  $overrides["variable.node_options_group.value|1"] = 'revision';
  $overrides["variable.node_options_task.value|1"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_group.value|view modes|page_manager|choice"] = 1;
  $overrides["variable.panelizer_defaults_node_group.value|view modes|teaser|status"] = 0;
  $overrides["variable.panelizer_defaults_node_wiki.value|choice"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_wiki.value|default"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_wiki.value|status"] = 0;
  $overrides["variable.panelizer_defaults_node_wiki.value|view modes"] = array(
    'page_manager' => array(
      'status' => 1,
      'default' => 1,
      'choice' => 0,
    ),
    'default' => array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ),
    'teaser' => array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ),
  );
  $overrides["variable.pathauto_node_group_pattern.value"] = '[node:title]';
  $overrides["variable.pathauto_node_page_pattern.value"] = 'page/[node:title]';
  $overrides["variable.pathauto_node_pattern.value"] = '[node:og-group-audience:first]/[node:title]';
  $overrides["variable.rate_widgets.value|1|comment_types|0"] = 'document';
  $overrides["variable.rate_widgets.value|1|comment_types|1"] = 'event';
  $overrides["variable.rate_widgets.value|1|comment_types|2"] = 'group';
  $overrides["variable.rate_widgets.value|1|comment_types|3"] = 'post';
  $overrides["variable.rate_widgets.value|1|comment_types|4"] = 'task';
  $overrides["variable.rate_widgets.value|1|comment_types|5"] = 'wiki';
  $overrides["variable.rate_widgets.value|1|node_types|0"] = 'document';
  $overrides["variable.rate_widgets.value|1|node_types|1"] = 'event';
  $overrides["variable.rate_widgets.value|1|node_types|2"] = 'group';
  $overrides["variable.rate_widgets.value|1|node_types|3"] = 'post';
  $overrides["variable.rate_widgets.value|1|node_types|4"] = 'task';
  $overrides["variable.rate_widgets.value|1|node_types|5"] = 'wiki';
  $overrides["variable.search_active_modules.value|advanced_help"] = 0;
  $overrides["variable.search_active_modules.value|apachesolr_search"] = 0;
  $overrides["variable.search_active_modules.value|file_entity"] = 0;
  $overrides["variable.search_active_modules.value|user"] = 'user';
  $overrides["variable.theme_commons_origins_settings.value|adaptivetheme_meta_clear_type"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|adaptivetheme_meta_ie_document_mode"] = '';
  $overrides["variable.theme_commons_origins_settings.value|at-settings__active_tab"] = 'edit-global-settings';
  $overrides["variable.theme_commons_origins_settings.value|bigscreen_max_width"] = 1400;
  $overrides["variable.theme_commons_origins_settings.value|bigscreen_page_unit"] = '%';
  $overrides["variable.theme_commons_origins_settings.value|bigscreen_page_width"] = 100;
  $overrides["variable.theme_commons_origins_settings.value|chrome_edge"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|clear_type"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|combine_css_files"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|combine_js_files"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|commons_origins_palette"] = 'palette-gray-lightgray-blue';
  $overrides["variable.theme_commons_origins_settings.value|default_favicon"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|default_logo"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|enable_menu_toggle"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|favicon_mimetype"] = 'image/png';
  $overrides["variable.theme_commons_origins_settings.value|favicon_path"] = 'public://SiteGraphics.Favicon.avatar-05-30px_0_0.png';
  $overrides["variable.theme_commons_origins_settings.value|global_default_layout"] = 'smalltouch-portrait';
  $overrides["variable.theme_commons_origins_settings.value|load_matchmediajs"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|logo_path"] = 'public://SiteGraphics.TopLeftLogo.round logo 60_1_0.png';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_five_5x20"] = 'five-5x20-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_four_4x25"] = 'four-4x25-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_layout"] = 'one_col_vert';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_media_query"] = 'only screen and (min-width:321px) and (max-width:480px)';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_page_unit"] = '%';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_page_width"] = 100;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_sidebar_first"] = 50;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_sidebar_second"] = 50;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_sidebar_unit"] = '%';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_six_6x16"] = 'six-6x16-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_25_25_50"] = 'three-25-25-50-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_25_50_25"] = 'three-25-50-25-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_3x33"] = 'three-3x33-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_50_25_25"] = 'three-50-25-25-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_inset_left"] = 'three-inset-left-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_three_inset_right"] = 'three-inset-right-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_two_33_66"] = 'two-33-66-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_two_50"] = 'two-50-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_two_66_33"] = 'two-66-33-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_landscape_two_brick"] = 'two-brick-stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_layout"] = 'one_col_stack';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_media_query"] = 'only screen and (max-width:320px)';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_page_unit"] = '%';
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_page_width"] = 100;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_sidebar_first"] = 100;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_sidebar_second"] = 100;
  $overrides["variable.theme_commons_origins_settings.value|smalltouch_portrait_sidebar_unit"] = '%';
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_five_5x20"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_four_4x25"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_layout"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_media_query"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_page_unit"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_page_width"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_sidebar_first"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_sidebar_second"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_sidebar_unit"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_six_6x16"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_25_25_50"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_25_50_25"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_3x33"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_50_25_25"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_inset_left"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_three_inset_right"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_two_33_66"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_two_50"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_two_66_33"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_landscape_two_brick"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_layout"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_media_query"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_page_unit"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_page_width"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_sidebar_first"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_sidebar_second"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|smartphone_portrait_sidebar_unit"]["DELETED"] = TRUE;
  $overrides["variable.theme_commons_origins_settings.value|toggle_comment_user_verification"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|toggle_name"] = 0;
  $overrides["variable.theme_commons_origins_settings.value|toggle_secondary_menu"] = 0;
  $overrides["variable.user_mail_register_admin_created_body.value"] = 'Dear [user:name-raw],
  
  a site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:
  
  [user:one-time-login-url]
  
  This link can only be used once to log in and will lead you to a page where you can set your password.
  
  After setting your password, you will be able to log in at [site:login-url] in the future using:
  
  username: [user:name-raw]
  password: Your password
  
  --  [site:name] team';
  $overrides["variable.user_mail_register_no_approval_required_body.value"] = 'Dear [user:name-raw],
  
  Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:
  
  [user:one-time-login-url]
  
  This link can only be used once to log in and will lead you to a page where you can set your password.
  
  After setting your password, you will be able to log in at [site:login-url] in the future using:
  
  username: [user:name-raw]
  password: Your password
  
  --  [site:name] team';
  $overrides["variable.user_mail_status_activated_body.value"] = 'Dear [user:name-raw],,
  
  welcome to the Edgeryders community! Your account at [site:name] has been activated, you can start using it now:
  
  Login link: [site:login-url]
  username: [user:name-raw]
  password: (the password you have chosen)
  
  Please take the time to read about how Edgeryders works as an enterprise and community, as well as the terms of use. They are available from the main menu under <a href="https://edgeryders.eu/en/edgeryders-lbg/help-info">Help/Info</a>.
  
  --  your friendly [site:name] team';
  $overrides["variable.user_register.value"] = 2;

  // Exported overrides for: views_view
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|empty|text|empty"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.comments_recent.display|default|display_options|fields|subject|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.comments_recent.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.comments_recent.display|page|display_options|fields|subject|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.comments_recent.display|page|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.commons_activity_streams_activity.display|default|display_options|arguments"]["DELETED"] = TRUE;
  $overrides["views_view.commons_activity_streams_activity.display|default|display_options|filters|cf_user_follow_message"]["DELETED"] = TRUE;
  $overrides["views_view.commons_bw_all.display|default|display_options|filters|flagged"] = array(
    'id' => 'flagged',
    'table' => 'flag_content',
    'field' => 'flagged',
    'relationship' => 'flag_content_rel',
    'ui_name' => 'Following',
    'value' => 1,
    'exposed' => TRUE,
    'expose' => array(
      'operator_id' => '',
      'label' => 'Following',
      'operator' => 'flagged_op',
      'identifier' => 'following',
    ),
  );
  $overrides["views_view.commons_bw_all.display|default|display_options|filters|type|value|document"] = 'document';
  $overrides["views_view.commons_bw_all.display|default|display_options|filters|type|value|event"] = 'event';
  $overrides["views_view.commons_bw_all.display|default|display_options|filters|type|value|post"] = 'post';
  $overrides["views_view.commons_bw_all.display|default|display_options|filters|type|value|task"] = 'task';
  $overrides["views_view.commons_bw_all.display|default|display_options|filters|type|value|wiki"] = 'wiki';
  $overrides["views_view.commons_bw_all.display|default|display_options|header|commons_bw_node_partial_form"]["DELETED"] = TRUE;
  $overrides["views_view.commons_bw_all.display|default|display_options|header|view"] = array(
    'id' => 'view',
    'table' => 'views',
    'field' => 'view',
    'view_to_insert' => 'create_content_homemade_widget:default',
    'inherit_arguments' => TRUE,
  );
  $overrides["views_view.commons_bw_all.display|default|display_options|relationships|flag_content_rel"] = array(
    'id' => 'flag_content_rel',
    'table' => 'node',
    'field' => 'flag_content_rel',
    'ui_name' => 'Following',
    'label' => 'following',
    'required' => 0,
    'flag' => 'commons_follow_node',
  );
  $overrides["views_view.commons_bw_all.display|default|display_options|sorts|field_radioactivity_radioactivity_energy"] = array(
    'id' => 'field_radioactivity_radioactivity_energy',
    'table' => 'field_data_field_radioactivity',
    'field' => 'field_radioactivity_radioactivity_energy',
    'order' => 'DESC',
    'exposed' => TRUE,
    'expose' => array(
      'label' => 'most active',
    ),
  );
  $overrides["views_view.commons_bw_documents.display|default|display_options|filters|flagged"] = array(
    'id' => 'flagged',
    'table' => 'flag_content',
    'field' => 'flagged',
    'relationship' => 'flag_content_rel',
    'ui_name' => 'Following',
    'value' => 1,
    'exposed' => TRUE,
    'expose' => array(
      'operator_id' => '',
      'label' => 'Following',
      'operator' => 'flagged_op',
      'identifier' => 'following',
    ),
  );
  $overrides["views_view.commons_bw_documents.display|default|display_options|header|commons_bw_node_partial_form"]["DELETED"] = TRUE;
  $overrides["views_view.commons_bw_documents.display|default|display_options|header|view"] = array(
    'id' => 'view',
    'table' => 'views',
    'field' => 'view',
    'view_to_insert' => 'create_content_homemade_widget:default',
    'inherit_arguments' => TRUE,
  );
  $overrides["views_view.commons_bw_documents.display|default|display_options|relationships|flag_content_rel"] = array(
    'id' => 'flag_content_rel',
    'table' => 'node',
    'field' => 'flag_content_rel',
    'ui_name' => 'Following',
    'label' => 'following',
    'required' => 0,
    'flag' => 'commons_follow_node',
  );
  $overrides["views_view.commons_bw_documents.display|default|display_options|sorts|field_radioactivity_radioactivity_energy"] = array(
    'id' => 'field_radioactivity_radioactivity_energy',
    'table' => 'field_data_field_radioactivity',
    'field' => 'field_radioactivity_radioactivity_energy',
    'order' => 'DESC',
    'exposed' => TRUE,
    'expose' => array(
      'label' => 'most active',
    ),
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|filters|flagged"] = array(
    'id' => 'flagged',
    'table' => 'flag_content',
    'field' => 'flagged',
    'relationship' => 'flag_content_rel',
    'ui_name' => 'Following',
    'value' => 1,
    'exposed' => TRUE,
    'expose' => array(
      'operator_id' => '',
      'label' => 'Following',
      'operator' => 'flagged_op',
      'identifier' => 'following',
    ),
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|header|commons_bw_node_partial_form"]["DELETED"] = TRUE;
  $overrides["views_view.commons_bw_posts.display|default|display_options|header|view"] = array(
    'id' => 'view',
    'table' => 'views',
    'field' => 'view',
    'view_to_insert' => 'create_content_homemade_widget:default',
    'inherit_arguments' => TRUE,
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|relationships|flag_content_rel"] = array(
    'id' => 'flag_content_rel',
    'table' => 'node',
    'field' => 'flag_content_rel',
    'ui_name' => 'Following',
    'label' => 'following',
    'required' => 0,
    'flag' => 'commons_follow_node',
  );
  $overrides["views_view.commons_bw_posts.display|default|display_options|sorts|field_radioactivity_radioactivity_energy"] = array(
    'id' => 'field_radioactivity_radioactivity_energy',
    'table' => 'field_data_field_radioactivity',
    'field' => 'field_radioactivity_radioactivity_energy',
    'order' => 'DESC',
    'exposed' => TRUE,
    'expose' => array(
      'label' => 'most active',
    ),
  );
  $overrides["views_view.commons_bw_posts.display|panel_pane_1"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:5:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:19:"display_description";s:91:"Display specific for edgeryders.eu to list all posts from a group (not just followed ones).";s:8:"defaults";a:3:{s:6:"header";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:7:"filters";a:4:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"post";s:4:"post";}}s:10:"group_type";a:5:{s:2:"id";s:10:"group_type";s:5:"table";s:13:"og_membership";s:5:"field";s:10:"group_type";s:12:"relationship";s:17:"og_membership_rel";s:5:"value";a:1:{s:4:"node";s:4:"node";}}s:7:"flagged";a:8:{s:2:"id";s:7:"flagged";s:5:"table";s:12:"flag_content";s:5:"field";s:7:"flagged";s:12:"relationship";s:16:"flag_content_rel";s:7:"ui_name";s:9:"Following";s:5:"value";s:3:"All";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:0:"";s:5:"label";s:9:"Following";s:8:"operator";s:10:"flagged_op";s:10:"identifier";s:9:"following";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:4:"user";s:7:"context";s:21:"entity:comment.author";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:38:"Group ID of group to display posts for";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_1";s:13:"display_title";s:29:"Pane (all content, no header)";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.commons_bw_posts.display|panel_pane_2"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:7:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:8:{s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:12:"style_plugin";s:5:"table";s:13:"style_options";a:3:{s:7:"columns";a:3:{s:5:"title";s:5:"title";s:4:"body";s:11:"field_image";s:11:"field_image";s:4:"body";}s:7:"default";s:2:"-1";s:4:"info";a:3:{s:5:"title";a:5:{s:8:"sortable";i:0;s:18:"default_sort_order";s:3:"asc";s:5:"align";s:0:"";s:9:"separator";s:0:"";s:12:"empty_column";i:0;}s:4:"body";a:5:{s:8:"sortable";i:0;s:18:"default_sort_order";s:3:"asc";s:5:"align";s:0:"";s:9:"separator";s:0:"";s:12:"empty_column";i:0;}s:11:"field_image";a:3:{s:5:"align";s:0:"";s:9:"separator";s:0:"";s:12:"empty_column";i:0;}}}s:13:"relationships";a:3:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}s:16:"flag_content_rel";a:7:{s:2:"id";s:16:"flag_content_rel";s:5:"table";s:4:"node";s:5:"field";s:16:"flag_content_rel";s:7:"ui_name";s:9:"Following";s:5:"label";s:9:"following";s:8:"required";i:0;s:4:"flag";s:19:"commons_follow_node";}s:3:"uid";a:4:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";s:8:"required";b:1;}}s:6:"fields";a:3:{s:5:"title";a:6:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:19:"element_label_colon";b:0;}s:4:"body";a:8:{s:2:"id";s:4:"body";s:5:"table";s:15:"field_data_body";s:5:"field";s:4:"body";s:5:"label";s:0:"";s:5:"alter";a:4:{s:15:"trim_whitespace";b:1;s:10:"max_length";s:3:"200";s:10:"strip_tags";b:1;s:4:"trim";b:1;}s:19:"element_label_colon";b:0;s:4:"type";s:23:"text_summary_or_trimmed";s:8:"settings";a:1:{s:11:"trim_length";s:3:"200";}}s:11:"field_image";a:7:{s:2:"id";s:11:"field_image";s:5:"table";s:22:"field_data_field_image";s:5:"field";s:11:"field_image";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:6:"medium";s:10:"image_link";s:7:"content";}s:12:"delta_offset";s:1:"0";}}s:7:"filters";a:4:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"post";s:4:"post";}}s:10:"group_type";a:5:{s:2:"id";s:10:"group_type";s:5:"table";s:13:"og_membership";s:5:"field";s:10:"group_type";s:12:"relationship";s:17:"og_membership_rel";s:5:"value";a:1:{s:4:"node";s:4:"node";}}s:7:"flagged";a:8:{s:2:"id";s:7:"flagged";s:5:"table";s:12:"flag_content";s:5:"field";s:7:"flagged";s:12:"relationship";s:16:"flag_content_rel";s:7:"ui_name";s:9:"Following";s:5:"value";s:1:"1";s:7:"exposed";b:1;s:6:"expose";a:4:{s:11:"operator_id";s:0:"";s:5:"label";s:9:"Following";s:8:"operator";s:10:"flagged_op";s:10:"identifier";s:9:"following";}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_2";s:13:"display_title";s:16:"Pane, table form";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.commons_bw_tasks.description"] = 'List of commons_task nodes within the Commons Group Browsing Widget.';
  $overrides["views_view.commons_bw_tasks.display|block_1"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:11:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"footer";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:14:"Pick up a task";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:13:"style_options";a:2:{s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;}s:10:"row_plugin";s:6:"fields";s:6:"footer";a:1:{s:4:"area";a:5:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:7:"content";s:58:"<h2><a href ="/casetracker">Browse & search tasks</a></h2>";s:6:"format";s:9:"full_html";}}s:6:"fields";a:1:{s:5:"title";a:9:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:3:{s:10:"max_length";s:2:"40";s:9:"more_link";b:1;s:4:"trim";b:1;}s:12:"element_type";s:2:"h3";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:12:"link_to_node";b:0;}}s:5:"sorts";a:3:{s:6:"sticky";a:3:{s:2:"id";s:6:"sticky";s:5:"table";s:4:"node";s:5:"field";s:6:"sticky";}s:7:"created";a:5:{s:2:"id";s:7:"created";s:5:"table";s:4:"node";s:5:"field";s:7:"created";s:5:"order";s:4:"DESC";s:6:"expose";a:1:{s:5:"label";s:11:"most recent";}}s:40:"field_radioactivity_radioactivity_energy";a:5:{s:2:"id";s:40:"field_radioactivity_radioactivity_energy";s:5:"table";s:30:"field_data_field_radioactivity";s:5:"field";s:40:"field_radioactivity_radioactivity_energy";s:5:"order";s:4:"DESC";s:6:"expose";a:1:{s:5:"label";s:11:"most active";}}}s:7:"filters";a:4:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"task";s:4:"task";}}s:9:"assign_to";a:5:{s:2:"id";s:9:"assign_to";s:5:"table";s:16:"casetracker_case";s:5:"field";s:9:"assign_to";s:8:"operator";s:2:"or";s:5:"value";a:1:{i:0;s:1:"0";}}s:14:"case_status_id";a:5:{s:2:"id";s:14:"case_status_id";s:5:"table";s:16:"casetracker_case";s:5:"field";s:14:"case_status_id";s:8:"operator";s:3:"not";s:5:"value";a:2:{i:8;s:1:"8";i:5;s:1:"5";}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_1";s:13:"display_title";s:15:"Block dashboard";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}');
  $overrides["views_view.commons_bw_tasks.display|default|display_options|header|area"]["DELETED"] = TRUE;
  $overrides["views_view.commons_bw_tasks.display|default|display_options|header|view"] = array(
    'id' => 'view',
    'table' => 'views',
    'field' => 'view',
    'view_to_insert' => 'create_content_homemade_widget:default',
    'inherit_arguments' => TRUE,
  );
  $overrides["views_view.commons_bw_tasks.display|default|display_options|sorts|created|exposed"]["DELETED"] = TRUE;
  $overrides["views_view.commons_bw_tasks.display|default|display_options|sorts|field_radioactivity_radioactivity_energy"] = array(
    'id' => 'field_radioactivity_radioactivity_energy',
    'table' => 'field_data_field_radioactivity',
    'field' => 'field_radioactivity_radioactivity_energy',
    'order' => 'DESC',
    'expose' => array(
      'label' => 'most active',
    ),
  );
  $overrides["views_view.commons_bw_tasks.display|panel_pane_1"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:10:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:11:{s:5:"title";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"footer";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;}s:5:"title";s:14:"Pick up a task";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"2";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:6:"footer";a:1:{s:4:"area";a:5:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:7:"content";s:58:"<h2><a href ="/casetracker">Browse & search tasks</a></h2>";s:6:"format";s:9:"full_html";}}s:13:"relationships";a:2:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:2:{s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"max_length";s:2:"80";s:4:"trim";b:1;}s:12:"element_type";s:2:"h3";s:19:"element_label_colon";b:0;}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:10:" by [name]";}s:12:"element_type";s:2:"h3";s:19:"element_label_colon";b:0;}}s:5:"sorts";a:3:{s:6:"sticky";a:3:{s:2:"id";s:6:"sticky";s:5:"table";s:4:"node";s:5:"field";s:6:"sticky";}s:7:"created";a:5:{s:2:"id";s:7:"created";s:5:"table";s:4:"node";s:5:"field";s:7:"created";s:5:"order";s:4:"DESC";s:6:"expose";a:1:{s:5:"label";s:11:"most recent";}}s:40:"field_radioactivity_radioactivity_energy";a:5:{s:2:"id";s:40:"field_radioactivity_radioactivity_energy";s:5:"table";s:30:"field_data_field_radioactivity";s:5:"field";s:40:"field_radioactivity_radioactivity_energy";s:5:"order";s:4:"DESC";s:6:"expose";a:1:{s:5:"label";s:11:"most active";}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_1";s:13:"display_title";s:22:"Content pane dashboard";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.commons_bw_tasks.human_name"] = 'Commons Browsing Widget - Tasks';
  $overrides["views_view.commons_bw_tasks.tag"] = 'edgeryders';
  $overrides["views_view.commons_bw_wikis.display|default|display_options|filters|flagged"] = array(
    'id' => 'flagged',
    'table' => 'flag_content',
    'field' => 'flagged',
    'relationship' => 'flag_content_rel',
    'ui_name' => 'Following',
    'value' => 1,
    'exposed' => TRUE,
    'expose' => array(
      'operator_id' => '',
      'label' => 'Following',
      'operator' => 'flagged_op',
      'identifier' => 'following',
    ),
  );
  $overrides["views_view.commons_bw_wikis.display|default|display_options|header|commons_bw_node_partial_form"]["DELETED"] = TRUE;
  $overrides["views_view.commons_bw_wikis.display|default|display_options|header|view"] = array(
    'id' => 'view',
    'table' => 'views',
    'field' => 'view',
    'view_to_insert' => 'create_content_homemade_widget:default',
    'inherit_arguments' => TRUE,
  );
  $overrides["views_view.commons_bw_wikis.display|default|display_options|relationships|flag_content_rel"] = array(
    'id' => 'flag_content_rel',
    'table' => 'node',
    'field' => 'flag_content_rel',
    'ui_name' => 'Following',
    'label' => 'following',
    'required' => 0,
    'flag' => 'commons_follow_node',
  );
  $overrides["views_view.commons_bw_wikis.display|default|display_options|sorts|field_radioactivity_radioactivity_energy"] = array(
    'id' => 'field_radioactivity_radioactivity_energy',
    'table' => 'field_data_field_radioactivity',
    'field' => 'field_radioactivity_radioactivity_energy',
    'order' => 'DESC',
    'exposed' => TRUE,
    'expose' => array(
      'label' => 'most active',
    ),
  );
  $overrides["views_view.commons_contributors_group.display|page_1|display_options|defaults|pager"] = FALSE;
  $overrides["views_view.commons_contributors_group.display|page_1|display_options|defaults|use_more"] = FALSE;
  $overrides["views_view.commons_contributors_group.display|page_1|display_options|defaults|use_more_always"] = FALSE;
  $overrides["views_view.commons_contributors_group.display|page_1|display_options|defaults|use_more_text"] = FALSE;
  $overrides["views_view.commons_contributors_group.display|page_1|display_options|pager"] = array(
    'type' => 'some',
    'options' => array(
      'items_per_page' => 0,
      'offset' => 0,
    ),
  );
  $overrides["views_view.commons_contributors_group.display|page_1|display_options|use_more_always"] = FALSE;
  $overrides["views_view.commons_contributors_group.display|panel_pane_1|display_options|defaults|sorts"] = FALSE;
  $overrides["views_view.commons_contributors_group.display|panel_pane_1|display_options|fields|picture|empty"] = '<img typeof="foaf:Image" class="image-style-35x35" src="https://edgeryders.eu/sites/default/files/default-user-pic.jpg" width="35" height="35" alt="">';
  $overrides["views_view.commons_contributors_group.display|panel_pane_1|display_options|sorts"] = array(
    'picture' => array(
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'order' => 'DESC',
    ),
    'created' => array(
      'id' => 'created',
      'table' => 'users',
      'field' => 'created',
      'order' => 'DESC',
    ),
  );
  $overrides["views_view.commons_contributors_group.display|panel_pane_2|display_options|defaults|sorts"] = FALSE;
  $overrides["views_view.commons_contributors_group.display|panel_pane_2|display_options|fields|picture|empty"] = '<a href="/user/[uid]"><img typeof="foaf:Image" class="image-style-50x50" src="https://edgeryders.eu/sites/default/files/default-user-pic.jpg" width="50" height="50" alt=""></a>';
  $overrides["views_view.commons_contributors_group.display|panel_pane_2|display_options|fields|uid"] = array(
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'link_to_user' => FALSE,
  );
  $overrides["views_view.commons_contributors_group.display|panel_pane_2|display_options|sorts"] = array(
    'picture' => array(
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'order' => 'DESC',
    ),
    'created' => array(
      'id' => 'created',
      'table' => 'users',
      'field' => 'created',
      'order' => 'DESC',
    ),
  );
  $overrides["views_view.commons_events_event_attendee_list.display|commons_events_full_attendee_list|display_options|defaults|header"] = FALSE;
  $overrides["views_view.commons_events_upcoming.display|default|display_options|filters|field_date_value"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_upcoming.display|default|display_options|filters|field_date_value2"] = array(
    'id' => 'field_date_value2',
    'table' => 'field_data_field_date',
    'field' => 'field_date_value2',
    'operator' => '>=',
    'form_type' => 'date_text',
    'default_date' => 'now',
  );
  $overrides["views_view.commons_events_upcoming.display|default|display_options|title"] = 'Events in this group';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_1|display_options|title"] = 'Upcoming events for this project';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|argument_input"] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Display only events having taxonomy term with ID: (optional)',
    ),
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Display only events in group with ID: (optional)',
    ),
  );
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|arguments"] = array(
    'tid' => array(
      'id' => 'tid',
      'table' => 'taxonomy_index',
      'field' => 'tid',
      'default_argument_type' => 'fixed',
      'summary' => array(
        'number_of_records' => 0,
        'format' => 'default_summary',
      ),
      'summary_options' => array(
        'items_per_page' => 25,
      ),
    ),
    'gid' => array(
      'id' => 'gid',
      'table' => 'og_membership',
      'field' => 'gid',
      'default_argument_type' => 'fixed',
      'summary' => array(
        'number_of_records' => 0,
        'format' => 'default_summary',
      ),
      'summary_options' => array(
        'items_per_page' => 25,
      ),
    ),
  );
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|defaults|arguments"] = FALSE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|defaults|pager"] = FALSE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|display_description"] = 'Like Group pane, but with explicit group ID argument input rather than from context. Also allows selection by taxonomy term.';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|pager"] = array(
    'type' => 'none',
    'options' => array(
      'offset' => 0,
    ),
  );
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|sorts|field_date_value|expose|label"] = 'Next first';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|sorts|promote|expose"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_options|sorts|promote|exposed"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_upcoming.display|panel_pane_2|display_title"] = 'Page pane (Teaser)';
  $overrides["views_view.commons_events_upcoming.display|panel_pane_3"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:12:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:12:"exposed_form";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"header";b:0;s:5:"empty";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;}s:19:"display_description";s:128:"Renders a single "Attend" button for one selected event. Good for adding to an article for that event. Button by Drupal Commons.";s:12:"exposed_form";a:2:{s:4:"type";s:5:"basic";s:7:"options";a:2:{s:17:"expose_sort_order";b:0;s:10:"autosubmit";b:1;}}s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"entity";s:11:"row_options";a:1:{s:9:"view_mode";s:13:"attend_button";}s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:32:"No events have been created yet.";s:6:"format";s:13:"filtered_html";}}s:9:"arguments";a:1:{s:3:"nid";a:6:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:14:"argument_input";a:1:{s:3:"nid";a:6:{s:4:"type";s:4:"user";s:7:"context";s:21:"entity:comment.author";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:31:"Node ID of the event to display";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_3";s:13:"display_title";s:13:"Attend Button";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.commons_events_upcoming.display|panel_pane_5"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:6:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:19:"display_description";s:80:"Group pane for nodes that are not group nodes themselves, but belong to a group.";s:8:"defaults";a:4:{s:13:"relationships";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:9:"arguments";a:1:{s:3:"gid";a:7:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:14:"default_action";s:5:"empty";s:21:"default_argument_type";s:10:"og_context";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:5:"event";s:5:"event";}}s:17:"field_date_value2";a:6:{s:2:"id";s:17:"field_date_value2";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:17:"field_date_value2";s:8:"operator";s:2:">=";s:9:"form_type";s:9:"date_text";s:12:"default_date";s:3:"now";}}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:4:"user";s:7:"context";s:23:"entity:node.group_group";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:4:"3628";s:5:"label";s:37:"Display only events in group with ID:";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_5";s:13:"display_title";s:18:"Page pane (Fields)";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.commons_events_user_upcoming_events.display|panel_pane_1|display_options|fields|field_address|click_sort_column"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_user_upcoming_events.display|panel_pane_1|display_options|fields|field_address|settings"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_user_upcoming_events.display|panel_pane_2|display_options|fields|field_address|click_sort_column"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_user_upcoming_events.display|panel_pane_2|display_options|fields|field_address|settings"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_user_upcoming_events.display|panel_pane_3|display_options|fields|field_address|click_sort_column"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_user_upcoming_events.display|panel_pane_3|display_options|fields|field_address|settings"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_user_upcoming_events.human_name"] = 'Commons Events - Upcoming Events for a User';
  $overrides["views_view.commons_events_user_upcoming_events.tag"] = 'commons_events';
  $overrides["views_view.commons_featured.display|block_1"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:10:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:10:{s:5:"title";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:21:"Popular conversations";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:2:{s:6:"inline";a:2:{s:4:"name";s:4:"name";s:13:"comment_count";s:13:"comment_count";}s:9:"separator";s:3:" - ";}s:13:"relationships";a:1:{s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:3:{s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:13:"element_class";s:11:"type-[type]";s:19:"element_label_colon";b:0;}s:4:"name";a:6:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:2:"By";s:5:"alter";a:1:{s:4:"text";s:46:"[Title] ([type]) by [name] – [comment_count]";}}s:13:"comment_count";a:6:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:6:"suffix";s:9:" comments";}}s:7:"filters";a:3:{s:6:"status";a:4:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";s:1:"1";}s:7:"promote";a:4:{s:2:"id";s:7:"promote";s:5:"table";s:4:"node";s:5:"field";s:7:"promote";s:5:"value";s:1:"1";}s:13:"comment_count";a:5:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:8:"operator";s:1:">";s:5:"value";a:1:{s:5:"value";s:1:"6";}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_1";s:13:"display_title";s:5:"Block";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}');
  $overrides["views_view.commons_featured.display|commons_home_featured_page|display_options|defaults|fields"] = FALSE;
  $overrides["views_view.commons_featured.display|commons_home_featured_page|display_options|defaults|sorts"] = FALSE;
  $overrides["views_view.commons_featured.display|commons_home_featured_page|display_options|defaults|title"] = FALSE;
  $overrides["views_view.commons_featured.display|commons_home_featured_page|display_options|fields"] = array(
    'view_node' => array(
      'id' => 'view_node',
      'table' => 'views_entity_node',
      'field' => 'view_node',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
    ),
    'path' => array(
      'id' => 'path',
      'table' => 'node',
      'field' => 'path',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
    ),
    'field_image' => array(
      'id' => 'field_image',
      'table' => 'field_data_field_image',
      'field' => 'field_image',
      'label' => '',
      'element_label_colon' => FALSE,
      'click_sort_column' => 'fid',
      'settings' => array(
        'image_style' => 'featured',
        'image_link' => 'content',
      ),
      'delta_limit' => 1,
      'delta_offset' => 0,
      'separator' => '',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'alter' => array(
        'word_boundary' => FALSE,
        'ellipsis' => FALSE,
      ),
      'element_type' => 'h3',
      'element_class' => 'type-[type]',
      'element_label_colon' => FALSE,
    ),
    'type' => array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
    ),
    'comment_count' => array(
      'id' => 'comment_count',
      'table' => 'node_comment_statistics',
      'field' => 'comment_count',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
      'format_plural' => TRUE,
      'format_plural_singular' => '1 comment',
      'format_plural_plural' => '@count comments',
    ),
    'name' => array(
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'uid',
      'label' => 'by ',
      'alter' => array(
        'alter_text' => TRUE,
        'text' => '[name] – [comment_count]',
      ),
      'element_label_colon' => FALSE,
    ),
    'timestamp' => array(
      'id' => 'timestamp',
      'table' => 'history',
      'field' => 'timestamp',
      'label' => '',
      'alter' => array(
        'alter_text' => TRUE,
        'text' => '– [timestamp]',
      ),
      'element_label_colon' => FALSE,
    ),
    'body' => array(
      'id' => 'body',
      'table' => 'field_data_body',
      'field' => 'body',
      'label' => '',
      'alter' => array(
        'max_length' => 130,
        'more_link' => TRUE,
        'more_link_text' => 'read more',
        'more_link_path' => '[path]',
        'strip_tags' => TRUE,
        'trim' => TRUE,
        'html' => TRUE,
      ),
      'element_label_colon' => FALSE,
    ),
  );
  $overrides["views_view.commons_featured.display|commons_home_featured_page|display_options|pager|options|items_per_page"] = 6;
  $overrides["views_view.commons_featured.display|commons_home_featured_page|display_options|row_options"] = array(
    'inline' => array(
      'name' => 'name',
      'timestamp' => 'timestamp',
    ),
  );
  $overrides["views_view.commons_featured.display|commons_home_featured_page|display_options|row_plugin"] = 'fields';
  $overrides["views_view.commons_featured.display|commons_home_featured_page|display_options|sorts"] = array(
    'random' => array(
      'id' => 'random',
      'table' => 'views',
      'field' => 'random',
    ),
  );
  $overrides["views_view.commons_featured.display|commons_home_featured_page|display_options|style_options"] = array(
    'columns' => 3,
  );
  $overrides["views_view.commons_featured.display|commons_home_featured_page|display_options|style_plugin"] = 'grid';
  $overrides["views_view.commons_featured.display|default|display_options|fields|capacity_used"]["DELETED"] = TRUE;
  $overrides["views_view.commons_featured.display|default|display_options|fields|comment_count"]["DELETED"] = TRUE;
  $overrides["views_view.commons_featured.display|default|display_options|fields|field_address"]["DELETED"] = TRUE;
  $overrides["views_view.commons_featured.display|default|display_options|fields|field_date"]["DELETED"] = TRUE;
  $overrides["views_view.commons_featured.display|default|display_options|fields|name"] = array(
    'id' => 'name',
    'table' => 'users',
    'field' => 'name',
    'relationship' => 'uid',
  );
  $overrides["views_view.commons_featured.display|default|display_options|fields|type"]["DELETED"] = TRUE;
  $overrides["views_view.commons_featured.display|default|display_options|filters|promote"]["DELETED"] = TRUE;
  $overrides["views_view.commons_featured.display|default|display_options|pager|options|id"] = 0;
  $overrides["views_view.commons_featured.display|default|display_options|pager|options|items_per_page"] = 6;
  $overrides["views_view.commons_featured.display|default|display_options|pager|options|quantity"] = 9;
  $overrides["views_view.commons_featured.display|default|display_options|pager|type"] = 'load_more';
  $overrides["views_view.commons_featured.display|default|display_options|relationships"] = array(
    'uid' => array(
      'id' => 'uid',
      'table' => 'node',
      'field' => 'uid',
    ),
  );
  $overrides["views_view.commons_featured.display|default|display_options|title"] = 'Blog';
  $overrides["views_view.commons_featured.display|page_1"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:14:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"header";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:19:"display_description";s:70:"a page which gathers content relevant for spot the future participants";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"6";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:4:"grid";s:13:"style_options";a:1:{s:7:"columns";s:1:"3";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:4:"name";s:4:"name";s:9:"timestamp";s:9:"timestamp";}}s:6:"header";a:2:{s:4:"view";a:4:{s:2:"id";s:4:"view";s:5:"table";s:5:"views";s:5:"field";s:4:"view";s:14:"view_to_insert";s:22:"avatar_gallery:default";}s:4:"area";a:5:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:7:"content";s:157:"<h3>Spot The Future – Scanning the horizon for future builders in Armenia, Egypt and Georgia <a href = "/content/spot-the-future-about">learn more</a></h3>";s:6:"format";s:9:"full_html";}}s:6:"fields";a:9:{s:9:"view_node";a:6:{s:2:"id";s:9:"view_node";s:5:"table";s:17:"views_entity_node";s:5:"field";s:9:"view_node";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;}s:4:"path";a:6:{s:2:"id";s:4:"path";s:5:"table";s:4:"node";s:5:"field";s:4:"path";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;}s:11:"field_image";a:10:{s:2:"id";s:11:"field_image";s:5:"table";s:22:"field_data_field_image";s:5:"field";s:11:"field_image";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:8:"featured";s:10:"image_link";s:7:"content";}s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:9:"separator";s:0:"";}s:5:"title";a:8:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"max_length";s:2:"20";s:4:"trim";b:1;}s:12:"element_type";s:2:"h3";s:13:"element_class";s:11:"type-[type]";s:19:"element_label_colon";b:0;}s:4:"type";a:6:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;}s:13:"comment_count";a:9:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;s:13:"format_plural";b:1;s:22:"format_plural_singular";s:9:"1 comment";s:20:"format_plural_plural";s:15:"@count comments";}s:4:"name";a:7:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:3:"by ";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:26:"[name] – [comment_count]";}s:19:"element_label_colon";b:0;}s:9:"timestamp";a:6:{s:2:"id";s:9:"timestamp";s:5:"table";s:7:"history";s:5:"field";s:9:"timestamp";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:15:"– [timestamp]";}s:19:"element_label_colon";b:0;}s:4:"body";a:6:{s:2:"id";s:4:"body";s:5:"table";s:15:"field_data_body";s:5:"field";s:4:"body";s:5:"label";s:0:"";s:5:"alter";a:7:{s:10:"max_length";s:3:"130";s:9:"more_link";b:1;s:14:"more_link_text";s:9:"read more";s:14:"more_link_path";s:6:"[path]";s:10:"strip_tags";b:1;s:4:"trim";b:1;s:4:"html";b:1;}s:19:"element_label_colon";b:0;}}s:5:"sorts";a:1:{s:6:"random";a:3:{s:2:"id";s:6:"random";s:5:"table";s:5:"views";s:5:"field";s:6:"random";}}s:7:"filters";a:4:{s:6:"status";a:4:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";s:1:"1";}s:7:"promote";a:4:{s:2:"id";s:7:"promote";s:5:"table";s:4:"node";s:5:"field";s:7:"promote";s:5:"value";s:1:"1";}s:9:"timestamp";a:5:{s:2:"id";s:9:"timestamp";s:5:"table";s:13:"node_revision";s:5:"field";s:9:"timestamp";s:8:"operator";s:2:">=";s:5:"value";a:1:{s:5:"value";s:10:"2014-04-07";}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"post";s:4:"post";}}}s:4:"path";s:22:"spotthefuture_overview";s:4:"menu";a:4:{s:5:"title";s:6:"Events";s:6:"weight";s:1:"0";s:4:"name";s:9:"main-menu";s:7:"context";i:0;}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:6:"page_1";s:13:"display_title";s:24:"Spot The Future Hub Page";s:14:"display_plugin";s:4:"page";s:8:"position";i:0;}');
  $overrides["views_view.commons_featured.display|panel_pane_2"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:11:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:19:"display_description";s:53:"The blog does not need to look like any other group..";s:8:"defaults";a:11:{s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:12:"link_display";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:15:"use_more_always";b:0;s:12:"link_display";s:26:"commons_home_featured_page";s:8:"link_url";s:12:"page/newblog";s:12:"style_plugin";s:4:"grid";s:13:"style_options";a:2:{s:17:"row_class_special";b:0;s:7:"columns";s:1:"2";}s:10:"row_plugin";s:6:"fields";s:6:"fields";a:6:{s:9:"view_node";a:4:{s:2:"id";s:9:"view_node";s:5:"table";s:17:"views_entity_node";s:5:"field";s:9:"view_node";s:7:"exclude";b:1;}s:4:"path";a:4:{s:2:"id";s:4:"path";s:5:"table";s:4:"node";s:5:"field";s:4:"path";s:7:"exclude";b:1;}s:11:"field_image";a:10:{s:2:"id";s:11:"field_image";s:5:"table";s:22:"field_data_field_image";s:5:"field";s:11:"field_image";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:5:"empty";s:103:"<img src="/sites/default/files/user-Alberto/ER_featured_image.jpg" style="width:319px;height:189px;" />";s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:8:"featured";s:10:"image_link";s:7:"content";}s:10:"group_rows";b:0;s:12:"delta_offset";s:1:"0";}s:5:"title";a:8:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:12:"element_type";s:2:"h3";s:13:"element_class";s:11:"type-[type]";s:19:"element_label_colon";b:0;}s:13:"comment_count";a:7:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:7:"exclude";b:1;s:13:"format_plural";b:1;s:22:"format_plural_singular";s:9:"1 comment";s:20:"format_plural_plural";s:15:"@count comments";}s:6:"name_1";a:5:{s:2:"id";s:6:"name_1";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:2:"by";}}s:7:"filters";a:3:{s:6:"status";a:4:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";s:1:"1";}s:3:"gid";a:4:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:5:"value";a:1:{s:5:"value";s:3:"366";}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"post";s:4:"post";}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_2";s:13:"display_title";s:15:"New blog layout";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.commons_follow_node.display|default|display_options|filters|type|value"]["DELETED"] = TRUE;
  $overrides["views_view.commons_follow_user_followers.display|default|display_options|fields|picture|empty"] = '<a href="/user/[uid]"><img typeof="foaf:Image" class="image-style-50x50" src="https://edgeryders.eu/sites/default/files/default-user-pic.jpg" width="50" height="50" alt=""></a>';
  $overrides["views_view.commons_follow_user_followers.display|default|display_options|fields|uid"] = array(
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'uid',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'link_to_user' => FALSE,
  );
  $overrides["views_view.commons_follow_user_following.display|default|display_options|fields|picture|empty"] = '<a href="/user/[uid]"><img typeof="foaf:Image" class="image-style-50x50" src="https://edgeryders.eu/sites/default/files/default-user-pic.jpg" width="50" height="50" alt=""></a>';
  $overrides["views_view.commons_follow_user_following.display|default|display_options|fields|uid"] = array(
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'link_to_user' => FALSE,
  );
  $overrides["views_view.frontpage.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|summary_options|inline"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|inherit_arguments"] = FALSE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|name|link_to_user"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|sticky"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.media_default.display|default|display_options|fields|filename|link_to_file"]["DELETED"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|break_phrase"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|exception|title_enable"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|specify_validation"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|arguments|uid_touch|title_enable"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|new_comments|link_to_comment"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|timestamp|comments"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|fields|timestamp|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.tracker.display|default|display_options|use_more_always"] = FALSE;

 return $overrides;
}
