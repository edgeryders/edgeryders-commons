<?php
/**
 * @file
 * edgerrides.features.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults_alter().
 */
function edgerrides_ckeditor_profile_defaults_alter(&$data) {
  if (isset($data['Advanced'])) {
    $data['Advanced'][0] = FALSE; /* WAS: '' */
    unset($data['Advanced']['input_formats']);
    unset($data['Advanced']['name']);
    unset($data['Advanced']['settings']);
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function edgerrides_field_default_field_bases_alter(&$data) {
  if (isset($data['body'])) {
    $data['body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['body']['translatable'] = 1; /* WAS: 0 */
  }
  if (isset($data['field_bio'])) {
    $data['field_bio']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_date'])) {
    $data['field_date']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['field_date']['settings']['todate'] = 'optional'; /* WAS: 'required' */
    $data['field_date']['settings']['tz_handling'] = 'date'; /* WAS: 'site' */
    $data['field_date']['type'] = 'date'; /* WAS: 'datetime' */
  }
  if (isset($data['field_document_file'])) {
    $data['field_document_file']['settings']['entity_translation_sync'] = array(
      0 => 'fid',
    ); /* WAS: '' */
  }
  if (isset($data['field_facebook_url'])) {
    $data['field_facebook_url']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_group_logo'])) {
    $data['field_group_logo']['settings']['entity_translation_sync'] = array(
      0 => 'fid',
    ); /* WAS: '' */
  }
  if (isset($data['field_linkedin_url'])) {
    unset($data['field_linkedin_url']);
  }
  if (isset($data['field_location'])) {
    $data['field_location']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_logo'])) {
    $data['field_logo']['settings']['entity_translation_sync'] = array(
      0 => 'fid',
    ); /* WAS: '' */
  }
  if (isset($data['field_message_rendered_body'])) {
    $data['field_message_rendered_body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_message_rendered_subject'])) {
    $data['field_message_rendered_subject']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_name_first'])) {
    $data['field_name_first']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_name_last'])) {
    $data['field_name_last']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_number_of_attendees'])) {
    $data['field_number_of_attendees']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_offsite_url'])) {
    $data['field_offsite_url']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_og_access_default_value'])) {
    $data['field_og_access_default_value']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_og_subscribe_settings'])) {
    $data['field_og_subscribe_settings']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_organizers'])) {
    $data['field_organizers']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_radioactivity'])) {
    $data['field_radioactivity']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_registration'])) {
    $data['field_registration']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_registration_type'])) {
    $data['field_registration_type']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_target_comments'])) {
    $data['field_target_comments']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_target_nodes'])) {
    $data['field_target_nodes']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_target_users'])) {
    $data['field_target_users']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_topics'])) {
    $data['field_topics']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_twitter_url'])) {
    $data['field_twitter_url']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['group_access'])) {
    $data['group_access']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['group_content_access'])) {
    $data['group_content_access']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['group_group'])) {
    $data['group_group']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message_subscribe_email'])) {
    $data['message_subscribe_email']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['og_group_ref'])) {
    $data['og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['og_group_ref']['settings']['handler_settings']['behaviors']['views-select-list']['status'] = 1; /* WAS: 0 */
  }
  if (isset($data['og_membership_request'])) {
    $data['og_membership_request']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['og_roles_permissions'])) {
    unset($data['og_roles_permissions']);
  }
  if (isset($data['title_field'])) {
    $data['title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function edgerrides_field_default_field_instances_alter(&$data) {
  if (isset($data['message-commons_activity_streams_comment_created-field_target_comments'])) {
    $data['message-commons_activity_streams_comment_created-field_target_comments']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_activity_streams_comment_created-field_target_nodes'])) {
    $data['message-commons_activity_streams_comment_created-field_target_nodes']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_activity_streams_node_created-field_target_nodes'])) {
    $data['message-commons_activity_streams_node_created-field_target_nodes']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_activity_streams_user_profile_updated-field_target_users'])) {
    $data['message-commons_activity_streams_user_profile_updated-field_target_users']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_events_event_node_created-field_message_rendered_body'])) {
    $data['message-commons_events_event_node_created-field_message_rendered_body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_events_event_node_created-field_message_rendered_subject'])) {
    $data['message-commons_events_event_node_created-field_message_rendered_subject']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_events_event_node_created-field_target_comments'])) {
    unset($data['message-commons_events_event_node_created-field_target_comments']);
  }
  if (isset($data['message-commons_events_event_node_created-field_target_nodes'])) {
    $data['message-commons_events_event_node_created-field_target_nodes']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_follow_user_user_followed-field_target_users'])) {
    $data['message-commons_follow_user_user_followed-field_target_users']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_like_user_likes_node-field_target_nodes'])) {
    $data['message-commons_like_user_likes_node-field_target_nodes']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_comment_created-field_message_rendered_body'])) {
    $data['message-commons_notify_comment_created-field_message_rendered_body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_comment_created-field_message_rendered_subject'])) {
    $data['message-commons_notify_comment_created-field_message_rendered_subject']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['message-commons_notify_comment_created-field_message_rendered_subject']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['message-commons_notify_comment_created-field_message_rendered_subject']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['message-commons_notify_comment_created-field_message_rendered_subject']['display']['default']['module']);
  }
  if (isset($data['message-commons_notify_comment_created-field_target_comments'])) {
    $data['message-commons_notify_comment_created-field_target_comments']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['message-commons_notify_comment_created-field_target_comments']['display']['default']['type'] = 'hidden'; /* WAS: 'entityreference_label' */
    $data['message-commons_notify_comment_created-field_target_comments']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['message-commons_notify_comment_created-field_target_comments']['display']['default']['module']);
    unset($data['message-commons_notify_comment_created-field_target_comments']['display']['default']['settings']['link']);
  }
  if (isset($data['message-commons_notify_comment_created-field_target_nodes'])) {
    $data['message-commons_notify_comment_created-field_target_nodes']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['message-commons_notify_comment_created-field_target_nodes']['display']['default']['type'] = 'hidden'; /* WAS: 'entityreference_label' */
    $data['message-commons_notify_comment_created-field_target_nodes']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['message-commons_notify_comment_created-field_target_nodes']['display']['default']['module']);
    unset($data['message-commons_notify_comment_created-field_target_nodes']['display']['default']['settings']['link']);
  }
  if (isset($data['message-commons_notify_comment_created_no_groups-field_message_rendered_body'])) {
    unset($data['message-commons_notify_comment_created_no_groups-field_message_rendered_body']);
  }
  if (isset($data['message-commons_notify_comment_created_no_groups-field_message_rendered_subject'])) {
    unset($data['message-commons_notify_comment_created_no_groups-field_message_rendered_subject']);
  }
  if (isset($data['message-commons_notify_comment_created_no_groups-field_target_comments'])) {
    unset($data['message-commons_notify_comment_created_no_groups-field_target_comments']);
  }
  if (isset($data['message-commons_notify_comment_created_no_groups-field_target_nodes'])) {
    unset($data['message-commons_notify_comment_created_no_groups-field_target_nodes']);
  }
  if (isset($data['message-commons_notify_node_created-field_message_rendered_body'])) {
    $data['message-commons_notify_node_created-field_message_rendered_body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created-field_message_rendered_subject'])) {
    $data['message-commons_notify_node_created-field_message_rendered_subject']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created-field_target_nodes'])) {
    $data['message-commons_notify_node_created-field_target_nodes']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created_no_groups-field_message_rendered_body'])) {
    $data['message-commons_notify_node_created_no_groups-field_message_rendered_body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created_no_groups-field_message_rendered_subject'])) {
    $data['message-commons_notify_node_created_no_groups-field_message_rendered_subject']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_notify_node_created_no_groups-field_target_nodes'])) {
    $data['message-commons_notify_node_created_no_groups-field_target_nodes']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_posts_post_created-field_target_nodes'])) {
    $data['message-commons_posts_post_created-field_target_nodes']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message-commons_wikis_wiki_updated-field_target_nodes'])) {
    $data['message-commons_wikis_wiki_updated-field_target_nodes']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['message_type-commons_notify-message_text'])) {
    $data['message_type-commons_notify-message_text']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-activity-title_field'])) {
    $data['node-activity-title_field']['comment_alter'] = 0; /* WAS: '' */
    $data['node-activity-title_field']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-activity-title_field']['description'] = 'The name of your project or initiative.'; /* WAS: '' */
    $data['node-activity-title_field']['display_in_partial_form'] = 0; /* WAS: FALSE */
    $data['node-activity-title_field']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-activity-title_field']['display']['default']['weight'] = 0; /* WAS: 12 */
    $data['node-activity-title_field']['label'] = 'Activity name'; /* WAS: 'Title' */
    $data['node-activity-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-activity-title_field']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
    $data['node-activity-title_field']['widget']['settings']['size'] = 160; /* WAS: 60 */
    $data['node-activity-title_field']['widget']['weight'] = 1; /* WAS: -5 */
  }
  if (isset($data['node-answer-title_field'])) {
    $data['node-answer-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-document-body'])) {
    $data['node-document-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-document-field_document_file'])) {
    $data['node-document-field_document_file']['comment_alter'] = 0; /* WAS: '' */
    $data['node-document-field_document_file']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-document-field_document_file']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-document-field_document_file']['settings']['file_extensions'] = 'txt doc docx xls xlsx ppt pptx odt odp ods pdf zip'; /* WAS: 'txt doc docx xls xlsx ppt pptx odt odp ods pdf' */
    $data['node-document-field_document_file']['settings']['max_filesize'] = '50 MB'; /* WAS: '' */
    $data['node-document-field_document_file']['widget']['settings']['filefield_sources'] = array(
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
    ); /* WAS: '' */
    $data['node-document-field_document_file']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
  }
  if (isset($data['node-document-field_radioactivity'])) {
    unset($data['node-document-field_radioactivity']);
  }
  if (isset($data['node-document-field_topics'])) {
    $data['node-document-field_topics']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-document-group_content_access'])) {
    $data['node-document-group_content_access']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-document-og_group_ref'])) {
    $data['node-document-og_group_ref']['comment_alter'] = 0; /* WAS: '' */
    $data['node-document-og_group_ref']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-document-og_group_ref']['description'] = 'The project(s) to which this document belongs.<br/>
    Usually enter one; to enter multiple projects, separate them with comma, and start with the most relevant one (it\'s used for the URL).'; /* WAS: 'Separate group names with commas' */
    $data['node-document-og_group_ref']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-document-og_group_ref']['label'] = 'Projects'; /* WAS: 'Groups' */
    $data['node-document-og_group_ref']['required'] = 1; /* WAS: 0 */
    $data['node-document-og_group_ref']['settings']['behaviors']['prepopulate']['action_on_edit'] = 0; /* WAS: '' */
    $data['node-document-og_group_ref']['settings']['behaviors']['prepopulate']['providers'] = array(
      'og_context' => 0,
      'url' => 1,
    ); /* WAS: '' */
    $data['node-document-og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-document-og_group_ref']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
    unset($data['node-document-og_group_ref']['settings']['behaviors']['prepopulate']['og_context']);
  }
  if (isset($data['node-document-title_field'])) {
    $data['node-document-title_field']['description'] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#content-2" target = "_blank">online user\'s manual</a>.</strong>'; /* WAS: '' */
    $data['node-document-title_field']['display']['default']['weight'] = 4; /* WAS: 12 */
    $data['node-document-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-document-title_field']['widget']['weight'] = 0; /* WAS: -5 */
  }
  if (isset($data['node-event-body'])) {
    $data['node-event-body']['comment_alter'] = 0; /* WAS: '' */
    $data['node-event-body']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-event-body']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-body']['display']['attend_button'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 5,
    ); /* WAS: '' */
    $data['node-event-body']['display']['teaser']['settings']['trim_length'] = 400; /* WAS: 600 */
    $data['node-event-body']['display']['teaser']['weight'] = 2; /* WAS: 3 */
    $data['node-event-body']['settings']['display_summary'] = 1; /* WAS: FALSE */
    $data['node-event-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-body']['widget']['settings']['label_help_description'] = 'Describe what\'s happening at this event. Optionally, click "Edit summary" to provide a short (1-2 sentences) version of the description. It will be displayed whenever we need compact lists of events, but there will be a link to the event\'s page with the full description as well. If you don\'t provide a summary, we will use the first 400 characters from your description, which may be ugly ;-)'; /* WAS: '' */
  }
  if (isset($data['node-event-field_address'])) {
    unset($data['node-event-field_address']);
  }
  if (isset($data['node-event-field_date'])) {
    $data['node-event-field_date']['comment_alter'] = 0; /* WAS: '' */
    $data['node-event-field_date']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-event-field_date']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_date']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_date']['display']['teaser']['weight'] = 0; /* WAS: 1 */
    $data['node-event-field_date']['settings']['default_value2'] = 'blank'; /* WAS: 'same' */
    $data['node-event-field_date']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-field_date']['widget']['settings']['display_all_day'] = 1; /* WAS: '' */
    $data['node-event-field_date']['widget']['settings']['increment'] = 5; /* WAS: 15 */
    $data['node-event-field_date']['widget']['settings']['input_format'] = 'Y-m-d H:i:s'; /* WAS: 'm/d/Y - H:i:s' */
    $data['node-event-field_date']['widget']['settings']['input_format_custom'] = ''; /* WAS: 'd M Y - h:i:s a' */
    $data['node-event-field_date']['widget']['settings']['label_help_description'] = 'When does your event happen? Be sure to also give the local timezone of where it happens.'; /* WAS: '' */
    $data['node-event-field_date']['widget']['weight'] = 6; /* WAS: 5 */
  }
  if (isset($data['node-event-field_location'])) {
    $data['node-event-field_location']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 9,
    ); /* WAS: '' */
    $data['node-event-field_location']['display']['teaser']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-event-field_location']['display']['teaser']['weight'] = 1; /* WAS: 0 */
    $data['node-event-field_location']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-field_location']['widget']['weight'] = 10; /* WAS: 7 */
  }
  if (isset($data['node-event-field_logo'])) {
    $data['node-event-field_logo']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_logo']['display']['attend_button'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_logo']['display']['teaser']['settings']['image_style'] = 'medium'; /* WAS: '50x50' */
    $data['node-event-field_logo']['display']['teaser']['weight'] = 1; /* WAS: 0 */
    $data['node-event-field_logo']['settings']['default_image'] = 3623; /* WAS: 0 */
    $data['node-event-field_logo']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-field_logo']['widget']['settings']['filefield_sources'] = array(
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
    ); /* WAS: '' */
    $data['node-event-field_logo']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
    $data['node-event-field_logo']['widget']['weight'] = 11; /* WAS: 9 */
  }
  if (isset($data['node-event-field_number_of_attendees'])) {
    $data['node-event-field_number_of_attendees']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 8,
    ); /* WAS: '' */
    $data['node-event-field_number_of_attendees']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-field_number_of_attendees']['widget']['weight'] = 14; /* WAS: 12 */
  }
  if (isset($data['node-event-field_offsite_url'])) {
    $data['node-event-field_offsite_url']['display']['attend_button'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 4,
    ); /* WAS: '' */
    $data['node-event-field_offsite_url']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_organizers'])) {
    $data['node-event-field_organizers']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 12,
    ); /* WAS: '' */
    $data['node-event-field_organizers']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['node-event-field_organizers']['display']['default']['module']);
    unset($data['node-event-field_organizers']['display']['default']['settings']['link']);
  }
  if (isset($data['node-event-field_radioactivity'])) {
    $data['node-event-field_radioactivity']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 3,
    ); /* WAS: '' */
    $data['node-event-field_radioactivity']['display']['default']['type'] = 'hidden'; /* WAS: 'radioactivity_combo_formatter' */
    $data['node-event-field_radioactivity']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-event-field_radioactivity']['widget']['weight'] = 4; /* WAS: 3 */
    unset($data['node-event-field_radioactivity']['display']['default']['module']);
    unset($data['node-event-field_radioactivity']['display']['default']['settings']['accuracy']);
    unset($data['node-event-field_radioactivity']['display']['default']['settings']['energy']);
    unset($data['node-event-field_radioactivity']['display']['default']['settings']['type']);
  }
  if (isset($data['node-event-field_registration'])) {
    $data['node-event-field_registration']['comment_alter'] = 0; /* WAS: '' */
    $data['node-event-field_registration']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-event-field_registration']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_registration']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 10,
    ); /* WAS: '' */
    $data['node-event-field_registration']['settings']['default_registration_settings']['settings']['confirmation'] = 'Registration has been saved.'; /* WAS: '' */
    $data['node-event-field_registration']['settings']['default_registration_settings']['settings']['from_address'] = 'contact@edgeryders.eu'; /* WAS: 'admin@example.com' */
    $data['node-event-field_registration']['settings']['default_registration_settings']['settings']['maximum_spaces'] = 1; /* WAS: '' */
    $data['node-event-field_registration']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-field_registration']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
    $data['node-event-field_registration']['widget']['weight'] = 12; /* WAS: 10 */
  }
  if (isset($data['node-event-field_registration_type'])) {
    $data['node-event-field_registration_type']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 11,
    ); /* WAS: '' */
    $data['node-event-field_registration_type']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-field_registration_type']['widget']['weight'] = 13; /* WAS: 11 */
  }
  if (isset($data['node-event-field_topics'])) {
    $data['node-event-field_topics']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 6,
    ); /* WAS: '' */
    $data['node-event-field_topics']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-field_topics']['widget']['weight'] = 16; /* WAS: 13 */
  }
  if (isset($data['node-event-group_content_access'])) {
    $data['node-event-group_content_access']['display']['attend_button'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 5,
    ); /* WAS: '' */
    $data['node-event-group_content_access']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-group_content_access']['widget']['weight'] = 20; /* WAS: 16 */
  }
  if (isset($data['node-event-og_group_ref'])) {
    $data['node-event-og_group_ref']['comment_alter'] = 0; /* WAS: '' */
    $data['node-event-og_group_ref']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-event-og_group_ref']['description'] = 'The project(s) to which this event belongs.<br/>
    Usually enter one; to enter multiple projects, separate them with comma, and start with the most relevant one (it\'s used for the URL).'; /* WAS: 'Separate group names with commas' */
    $data['node-event-og_group_ref']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-og_group_ref']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 11,
    ); /* WAS: '' */
    $data['node-event-og_group_ref']['display']['teaser']['weight'] = 3; /* WAS: 0 */
    $data['node-event-og_group_ref']['label'] = 'Projects'; /* WAS: 'Groups' */
    $data['node-event-og_group_ref']['required'] = 1; /* WAS: 0 */
    $data['node-event-og_group_ref']['settings']['behaviors']['prepopulate']['action_on_edit'] = 0; /* WAS: '' */
    $data['node-event-og_group_ref']['settings']['behaviors']['prepopulate']['providers'] = array(
      'og_context' => 0,
      'url' => 1,
    ); /* WAS: '' */
    $data['node-event-og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-og_group_ref']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
    $data['node-event-og_group_ref']['widget']['weight'] = 9; /* WAS: 5 */
    unset($data['node-event-og_group_ref']['settings']['behaviors']['prepopulate']['og_context']);
  }
  if (isset($data['node-event-title_field'])) {
    $data['node-event-title_field']['description'] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#events" target = "_blank">online user\'s manual</a>.</strong>'; /* WAS: '' */
    $data['node-event-title_field']['display_in_partial_form'] = 1; /* WAS: FALSE */
    $data['node-event-title_field']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 12,
    ); /* WAS: '' */
    $data['node-event-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-group-body'])) {
    $data['node-group-body']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-group-body']['label'] = 'Project Description'; /* WAS: 'Description' */
    $data['node-group-body']['required'] = 1; /* WAS: 0 */
    $data['node-group-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-group-body']['widget']['settings']['label_help_description'] = 'Describe what this project is about, so that interested people on Edgeryders can find it.'; /* WAS: '' */
    $data['node-group-body']['widget']['weight'] = 5; /* WAS: 4 */
  }
  if (isset($data['node-group-field_group_logo'])) {
    $data['node-group-field_group_logo']['description'] = 'This image should be square if possible – else parts will not be visible when it is displayed.</br>
    
    If your image is larger than 800 x 800 pixels, it will be scaled down automatically.'; /* WAS: '' */
    $data['node-group-field_group_logo']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-group-field_group_logo']['label'] = 'Project Logo'; /* WAS: 'Group Logo' */
    $data['node-group-field_group_logo']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-group-field_group_logo']['settings']['file_extensions'] = 'png jpg'; /* WAS: 'png gif jpg jpeg' */
    $data['node-group-field_group_logo']['settings']['max_filesize'] = '4 MB'; /* WAS: '20mb' */
    $data['node-group-field_group_logo']['settings']['max_resolution'] = '800x800'; /* WAS: '' */
    $data['node-group-field_group_logo']['settings']['min_resolution'] = '200x200'; /* WAS: '30x30' */
    $data['node-group-field_group_logo']['widget']['settings']['filefield_sources'] = array(
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
    ); /* WAS: '' */
    $data['node-group-field_group_logo']['widget']['settings']['label_help_description'] = 'A logo for your project. Please add one, because only then your project will be listed in the <a href="https://edgeryders.eu/projects">Edgeryders Project Directory</a>.<br/>
    
    Please respect copyrights of your sources, including to add proper attribution to CC licenced imagery in the project description field below.'; /* WAS: '' */
    $data['node-group-field_group_logo']['widget']['weight'] = 4; /* WAS: 5 */
  }
  if (isset($data['node-group-field_og_access_default_value'])) {
    $data['node-group-field_og_access_default_value']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-group-field_og_access_default_value']['widget']['weight'] = 13; /* WAS: 42 */
  }
  if (isset($data['node-group-field_og_subscribe_settings'])) {
    $data['node-group-field_og_subscribe_settings']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-group-field_og_subscribe_settings']['widget']['weight'] = 12; /* WAS: 41 */
  }
  if (isset($data['node-group-field_radioactivity'])) {
    $data['node-group-field_radioactivity']['default_value'][0]['radioactivity_energy'] = 500; /* WAS: 8 */
    $data['node-group-field_radioactivity']['default_value'][0]['radioactivity_timestamp'] = 1393921746; /* WAS: '' */
    $data['node-group-field_radioactivity']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-group-field_radioactivity']['display']['default']['label'] = 'inline'; /* WAS: 'above' */
    $data['node-group-field_radioactivity']['display']['default']['settings']['type'] = 'energy'; /* WAS: 'none' */
    $data['node-group-field_radioactivity']['display']['default']['weight'] = 7; /* WAS: 3 */
    $data['node-group-field_radioactivity']['display']['full'] = array(
      'label' => 'above',
      'module' => 'radioactivity',
      'settings' => array(
        'accuracy' => 100,
        'energy' => 10,
        'type' => 'none',
      ),
      'type' => 'radioactivity_combo_formatter',
      'weight' => 3,
    ); /* WAS: '' */
    $data['node-group-field_radioactivity']['display']['rss'] = array(
      'label' => 'above',
      'module' => 'radioactivity',
      'settings' => array(
        'accuracy' => 100,
        'energy' => 10,
        'type' => 'none',
      ),
      'type' => 'radioactivity_combo_formatter',
      'weight' => 3,
    ); /* WAS: '' */
    $data['node-group-field_radioactivity']['display']['teaser']['module'] = 'radioactivity'; /* WAS: '' */
    $data['node-group-field_radioactivity']['display']['teaser']['settings']['accuracy'] = 100; /* WAS: '' */
    $data['node-group-field_radioactivity']['display']['teaser']['settings']['energy'] = 10; /* WAS: '' */
    $data['node-group-field_radioactivity']['display']['teaser']['settings']['type'] = 'none'; /* WAS: '' */
    $data['node-group-field_radioactivity']['display']['teaser']['type'] = 'radioactivity_combo_formatter'; /* WAS: 'hidden' */
    $data['node-group-field_radioactivity']['display']['teaser']['weight'] = 3; /* WAS: 0 */
    $data['node-group-field_radioactivity']['required'] = FALSE; /* WAS: 0 */
    $data['node-group-field_radioactivity']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-group-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
  }
  if (isset($data['node-group-field_topics'])) {
    $data['node-group-field_topics']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-group-field_topics']['widget']['weight'] = 7; /* WAS: 13 */
  }
  if (isset($data['node-group-group_access'])) {
    $data['node-group-group_access']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-group-group_access']['widget']['weight'] = 11; /* WAS: 41 */
  }
  if (isset($data['node-group-group_group'])) {
    $data['node-group-group_group']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-group-group_group']['widget']['weight'] = 2; /* WAS: 0 */
  }
  if (isset($data['node-group-og_roles_permissions'])) {
    unset($data['node-group-og_roles_permissions']);
  }
  if (isset($data['node-group-title_field'])) {
    $data['node-group-title_field']['description'] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#groups" target = "_blank">online user\'s manual</a>.</strong>'; /* WAS: '' */
    $data['node-group-title_field']['display_in_partial_form'] = 0; /* WAS: FALSE */
    $data['node-group-title_field']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-group-title_field']['display']['teaser']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-group-title_field']['label'] = 'Project name'; /* WAS: 'Title' */
    $data['node-group-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-group-title_field']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
    $data['node-group-title_field']['widget']['weight'] = 1; /* WAS: -5 */
  }
  if (isset($data['node-journal-title_field'])) {
    $data['node-journal-title_field']['comment_alter'] = 0; /* WAS: '' */
    $data['node-journal-title_field']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-journal-title_field']['description'] = 'Normally just the name of the project / activity that you want to document with this journal.'; /* WAS: '' */
    $data['node-journal-title_field']['display_in_partial_form'] = 0; /* WAS: FALSE */
    $data['node-journal-title_field']['display']['attend_button'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-journal-title_field']['display']['default']['weight'] = 6; /* WAS: 12 */
    $data['node-journal-title_field']['label'] = 'Journal name'; /* WAS: 'Title' */
    $data['node-journal-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-journal-title_field']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
    $data['node-journal-title_field']['widget']['settings']['size'] = 120; /* WAS: 60 */
    $data['node-journal-title_field']['widget']['weight'] = 0; /* WAS: -5 */
  }
  if (isset($data['node-minisite_page-title_field'])) {
    $data['node-minisite_page-title_field']['display']['default']['weight'] = 5; /* WAS: 12 */
    $data['node-minisite_page-title_field']['required'] = TRUE; /* WAS: 1 */
    $data['node-minisite_page-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-minisite_page-title_field']['widget']['weight'] = 0; /* WAS: -5 */
    unset($data['node-minisite_page-title_field']['display_in_partial_form']);
    unset($data['node-minisite_page-title_field']['widget']['active']);
  }
  if (isset($data['node-notice-body'])) {
    $data['node-notice-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-notice-title_field'])) {
    $data['node-notice-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-page-body'])) {
    $data['node-page-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-page-title_field'])) {
    $data['node-page-title_field']['description'] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#content-2" target = "_blank">online user\'s manual</a>.</strong>'; /* WAS: '' */
    $data['node-page-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-poll-title_field'])) {
    $data['node-poll-title_field']['description'] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#content-2" target = "_blank">online user\'s manual</a>.</strong>'; /* WAS: '' */
    $data['node-poll-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-post-body'])) {
    $data['node-post-body']['display']['default']['weight'] = 0; /* WAS: 2 */
    $data['node-post-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-post-body']['widget']['weight'] = 3; /* WAS: 2 */
  }
  if (isset($data['node-post-field_radioactivity'])) {
    $data['node-post-field_radioactivity']['default_value'][0]['radioactivity_timestamp'] = 1374938662; /* WAS: '' */
    $data['node-post-field_radioactivity']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-post-field_radioactivity']['display']['default']['type'] = 'hidden'; /* WAS: 'radioactivity_combo_formatter' */
    $data['node-post-field_radioactivity']['display']['default']['weight'] = 9; /* WAS: 3 */
    $data['node-post-field_radioactivity']['required'] = FALSE; /* WAS: 0 */
    $data['node-post-field_radioactivity']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-post-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-post-field_radioactivity']['widget']['weight'] = 4; /* WAS: 3 */
    unset($data['node-post-field_radioactivity']['display']['default']['module']);
    unset($data['node-post-field_radioactivity']['display']['default']['settings']['accuracy']);
    unset($data['node-post-field_radioactivity']['display']['default']['settings']['energy']);
    unset($data['node-post-field_radioactivity']['display']['default']['settings']['type']);
  }
  if (isset($data['node-post-field_topics'])) {
    $data['node-post-field_topics']['display']['default']['weight'] = 4; /* WAS: 6 */
    $data['node-post-field_topics']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-post-field_topics']['widget']['weight'] = 10; /* WAS: 13 */
  }
  if (isset($data['node-post-group_content_access'])) {
    $data['node-post-group_content_access']['comment_alter'] = 0; /* WAS: '' */
    $data['node-post-group_content_access']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-post-group_content_access']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-post-group_content_access']['display']['default']['label'] = 'above'; /* WAS: 'hidden' */
    $data['node-post-group_content_access']['display']['default']['module'] = 'list'; /* WAS: '' */
    $data['node-post-group_content_access']['display']['default']['type'] = 'list_default'; /* WAS: 'hidden' */
    $data['node-post-group_content_access']['display']['default']['weight'] = 7; /* WAS: 5 */
    $data['node-post-group_content_access']['required'] = 1; /* WAS: TRUE */
    $data['node-post-group_content_access']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-post-group_content_access']['widget']['active'] = 1; /* WAS: '' */
    $data['node-post-group_content_access']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
    $data['node-post-group_content_access']['widget']['weight'] = 11; /* WAS: 16 */
  }
  if (isset($data['node-post-og_group_ref'])) {
    $data['node-post-og_group_ref']['comment_alter'] = 0; /* WAS: '' */
    $data['node-post-og_group_ref']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-post-og_group_ref']['description'] = 'The project(s) to which this post belongs.<br/>
    Usually enter one; to enter multiple projects, separate them with comma, and start with the most relevant one (it\'s used for the URL).'; /* WAS: 'Separate group names with commas' */
    $data['node-post-og_group_ref']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-post-og_group_ref']['display']['default']['weight'] = 6; /* WAS: 11 */
    $data['node-post-og_group_ref']['label'] = 'Projects'; /* WAS: 'Groups' */
    $data['node-post-og_group_ref']['required'] = 1; /* WAS: 0 */
    $data['node-post-og_group_ref']['settings']['behaviors']['og_widget']['access_override'] = 0; /* WAS: '' */
    $data['node-post-og_group_ref']['settings']['behaviors']['prepopulate']['action_on_edit'] = 0; /* WAS: '' */
    $data['node-post-og_group_ref']['settings']['behaviors']['prepopulate']['providers'] = array(
      'og_context' => 0,
      'url' => 1,
    ); /* WAS: '' */
    $data['node-post-og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-post-og_group_ref']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
    unset($data['node-post-og_group_ref']['settings']['behaviors']['prepopulate']['og_context']);
  }
  if (isset($data['node-post-title_field'])) {
    $data['node-post-title_field']['description'] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#content-2" target = "_blank">online user\'s manual</a>.</strong>'; /* WAS: '' */
    $data['node-post-title_field']['display_in_partial_form'] = 1; /* WAS: FALSE */
    $data['node-post-title_field']['display']['default']['weight'] = 10; /* WAS: 12 */
    $data['node-post-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-post-title_field']['widget']['weight'] = 2; /* WAS: -5 */
  }
  if (isset($data['node-question-title_field'])) {
    $data['node-question-title_field']['description'] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#content-2" target = "_blank">online user\'s manual</a>.</strong>'; /* WAS: '' */
    $data['node-question-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-task-body'])) {
    $data['node-task-body']['comment_alter'] = 0; /* WAS: '' */
    $data['node-task-body']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-task-body']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-task-body']['display']['default']['weight'] = 1; /* WAS: 2 */
    $data['node-task-body']['required'] = 0; /* WAS: FALSE */
    $data['node-task-body']['settings']['display_summary'] = 0; /* WAS: FALSE */
    $data['node-task-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-task-body']['widget']['active'] = 1; /* WAS: '' */
    $data['node-task-body']['widget']['settings']['label_help_description'] = 'Briefly describe what is to be done.'; /* WAS: '' */
    $data['node-task-body']['widget']['weight'] = 6; /* WAS: 2 */
  }
  if (isset($data['node-task-field_radioactivity'])) {
    unset($data['node-task-field_radioactivity']);
  }
  if (isset($data['node-task-field_topics'])) {
    unset($data['node-task-field_topics']);
  }
  if (isset($data['node-task-group_content_access'])) {
    $data['node-task-group_content_access']['display']['default']['weight'] = 4; /* WAS: 5 */
    $data['node-task-group_content_access']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-task-group_content_access']['widget']['weight'] = 12; /* WAS: 16 */
  }
  if (isset($data['node-task-og_group_ref'])) {
    $data['node-task-og_group_ref']['comment_alter'] = 0; /* WAS: '' */
    $data['node-task-og_group_ref']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-task-og_group_ref']['description'] = 'The project(s) to which this task belongs.<br/>
    Usually enter one; to enter multiple projects, separate them with comma, and start with the most relevant one (it\'s used for the URL).'; /* WAS: 'Separate group names with commas' */
    $data['node-task-og_group_ref']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-task-og_group_ref']['display']['default']['weight'] = 2; /* WAS: 11 */
    $data['node-task-og_group_ref']['label'] = 'Projects'; /* WAS: 'Groups' */
    $data['node-task-og_group_ref']['required'] = 1; /* WAS: 0 */
    $data['node-task-og_group_ref']['settings']['behaviors']['prepopulate']['action_on_edit'] = 0; /* WAS: '' */
    $data['node-task-og_group_ref']['settings']['behaviors']['prepopulate']['providers'] = array(
      'og_context' => 0,
      'url' => 1,
    ); /* WAS: '' */
    $data['node-task-og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-task-og_group_ref']['widget']['settings']['label_help_description'] = 'TODO: add the label_help message for this field, since it\'s working now for entity reference fields.'; /* WAS: '' */
    $data['node-task-og_group_ref']['widget']['weight'] = 7; /* WAS: 5 */
    unset($data['node-task-og_group_ref']['settings']['behaviors']['prepopulate']['og_context']);
  }
  if (isset($data['node-task-title_field'])) {
    $data['node-task-title_field']['description'] = '<strong>Need help? Check our <a href = "http://edgeryders.eu/edgeryders-dev/user-manual#Tasks" target = "_blank">online user\'s manual</a>.</strong>'; /* WAS: '' */
    $data['node-task-title_field']['display_in_partial_form'] = 1; /* WAS: FALSE */
    $data['node-task-title_field']['display']['default']['weight'] = 5; /* WAS: 12 */
    $data['node-task-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-task-title_field']['widget']['weight'] = 0; /* WAS: -5 */
  }
  if (isset($data['node-webform-title_field'])) {
    $data['node-webform-title_field']['display']['default']['weight'] = 2; /* WAS: 12 */
    $data['node-webform-title_field']['required'] = TRUE; /* WAS: 1 */
    $data['node-webform-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['node-webform-title_field']['display_in_partial_form']);
    unset($data['node-webform-title_field']['widget']['active']);
  }
  if (isset($data['node-wiki-body'])) {
    $data['node-wiki-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-wiki-body']['widget']['weight'] = 3; /* WAS: 1 */
  }
  if (isset($data['node-wiki-field_radioactivity'])) {
    $data['node-wiki-field_radioactivity']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-wiki-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
    $data['node-wiki-field_radioactivity']['widget']['weight'] = 4; /* WAS: 3 */
  }
  if (isset($data['node-wiki-field_topics'])) {
    $data['node-wiki-field_topics']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-wiki-field_topics']['widget']['weight'] = 8; /* WAS: 13 */
  }
  if (isset($data['node-wiki-group_content_access'])) {
    $data['node-wiki-group_content_access']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-wiki-group_content_access']['widget']['weight'] = 9; /* WAS: 16 */
  }
  if (isset($data['node-wiki-og_group_ref'])) {
    $data['node-wiki-og_group_ref']['comment_alter'] = 0; /* WAS: '' */
    $data['node-wiki-og_group_ref']['comment_alter_hide'] = 0; /* WAS: '' */
    $data['node-wiki-og_group_ref']['description'] = 'The project(s) to which this wiki belongs.<br/>
    Usually enter one; to enter multiple projects, separate them with comma, and start with the most relevant one (it\'s used for the URL).'; /* WAS: 'Separate group names with commas' */
    $data['node-wiki-og_group_ref']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-wiki-og_group_ref']['label'] = 'Projects'; /* WAS: 'Groups' */
    $data['node-wiki-og_group_ref']['required'] = 1; /* WAS: 0 */
    $data['node-wiki-og_group_ref']['settings']['behaviors']['prepopulate']['action_on_edit'] = 0; /* WAS: '' */
    $data['node-wiki-og_group_ref']['settings']['behaviors']['prepopulate']['providers'] = array(
      'og_context' => 0,
      'url' => 1,
    ); /* WAS: '' */
    $data['node-wiki-og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-wiki-og_group_ref']['widget']['settings']['label_help_description'] = ''; /* WAS: '' */
    unset($data['node-wiki-og_group_ref']['settings']['behaviors']['prepopulate']['og_context']);
  }
  if (isset($data['node-wiki-title_field'])) {
    $data['node-wiki-title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-wiki-title_field']['widget']['weight'] = 2; /* WAS: -5 */
  }
  if (isset($data['og_membership-og_membership_type_default-og_membership_request'])) {
    $data['og_membership-og_membership_type_default-og_membership_request']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['user-user-field_bio'])) {
    $data['user-user-field_bio']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['user-user-field_bio']['display']['default']['weight'] = 0; /* WAS: 8 */
    $data['user-user-field_bio']['display']['full'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 3,
    ); /* WAS: '' */
    $data['user-user-field_bio']['display']['token'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 0,
    ); /* WAS: '' */
    $data['user-user-field_bio']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['user-user-field_bio']['widget']['weight'] = 17; /* WAS: 5 */
  }
  if (isset($data['user-user-field_facebook_url'])) {
    $data['user-user-field_facebook_url']['description'] = 'Your Facebook account. Enter a complete URL such as http://facebook.com/yourname.'; /* WAS: '' */
    $data['user-user-field_facebook_url']['display']['default']['weight'] = 5; /* WAS: 6 */
    $data['user-user-field_facebook_url']['display']['full'] = array(
      'label' => 'above',
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_default',
      'weight' => 6,
    ); /* WAS: '' */
    $data['user-user-field_facebook_url']['display']['token'] = array(
      'label' => 'above',
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_default',
      'weight' => 3,
    ); /* WAS: '' */
    $data['user-user-field_facebook_url']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['user-user-field_facebook_url']['settings']['rel_remove'] = 'default'; /* WAS: '' */
    $data['user-user-field_facebook_url']['widget']['weight'] = 9; /* WAS: 6 */
  }
  if (isset($data['user-user-field_linkedin_url'])) {
    unset($data['user-user-field_linkedin_url']);
  }
  if (isset($data['user-user-field_name_first'])) {
    $data['user-user-field_name_first']['description'] = '(No longer in use. Enter your full name into the "Edit Account" tab instead.)'; /* WAS: '' */
    $data['user-user-field_name_first']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['user-user-field_name_first']['display']['default']['weight'] = 19; /* WAS: 2 */
    $data['user-user-field_name_first']['display']['full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 12,
    ); /* WAS: '' */
    $data['user-user-field_name_first']['display']['token'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 9,
    ); /* WAS: '' */
    $data['user-user-field_name_first']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['user-user-field_name_first']['settings']['user_register_form'] = 0; /* WAS: 1 */
    $data['user-user-field_name_first']['widget']['weight'] = 4; /* WAS: 3 */
    unset($data['user-user-field_name_first']['display']['default']['module']);
  }
  if (isset($data['user-user-field_name_last'])) {
    $data['user-user-field_name_last']['description'] = '(No longer in use. Enter your full name into the "Edit Account" tab instead.)'; /* WAS: '' */
    $data['user-user-field_name_last']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['user-user-field_name_last']['display']['default']['weight'] = 20; /* WAS: 3 */
    $data['user-user-field_name_last']['display']['full'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 13,
    ); /* WAS: '' */
    $data['user-user-field_name_last']['display']['token'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 10,
    ); /* WAS: '' */
    $data['user-user-field_name_last']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['user-user-field_name_last']['settings']['user_register_form'] = 0; /* WAS: 1 */
    $data['user-user-field_name_last']['widget']['weight'] = 5; /* WAS: 4 */
    unset($data['user-user-field_name_last']['display']['default']['module']);
  }
  if (isset($data['user-user-field_twitter_url'])) {
    $data['user-user-field_twitter_url']['description'] = 'Your Twitter account. Enter as a complete URL such as https://twitter.com/username.'; /* WAS: '' */
    $data['user-user-field_twitter_url']['display']['default']['weight'] = 4; /* WAS: 7 */
    $data['user-user-field_twitter_url']['display']['full'] = array(
      'label' => 'above',
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_default',
      'weight' => 5,
    ); /* WAS: '' */
    $data['user-user-field_twitter_url']['display']['token'] = array(
      'label' => 'above',
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_default',
      'weight' => 2,
    ); /* WAS: '' */
    $data['user-user-field_twitter_url']['settings']['enable_tokens'] = 0; /* WAS: 1 */
    $data['user-user-field_twitter_url']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['user-user-field_twitter_url']['settings']['rel_remove'] = 'default'; /* WAS: '' */
    $data['user-user-field_twitter_url']['widget']['weight'] = 10; /* WAS: 8 */
  }
  if (isset($data['user-user-message_subscribe_email'])) {
    $data['user-user-message_subscribe_email']['display']['default']['type'] = 'hidden'; /* WAS: 'list_default' */
    $data['user-user-message_subscribe_email']['display']['default']['weight'] = 15; /* WAS: 9 */
    $data['user-user-message_subscribe_email']['display']['full'] = array(
      'label' => 'above',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 9,
    ); /* WAS: '' */
    $data['user-user-message_subscribe_email']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['user-user-message_subscribe_email']['widget']['weight'] = 11; /* WAS: 0 */
    unset($data['user-user-message_subscribe_email']['display']['default']['module']);
  }
}

/**
 * Implements hook_file_default_displays_alter().
 */
function edgerrides_file_default_displays_alter(&$data) {
  if (isset($data['image__default__file_field_file_default'])) {
    $data['image__default__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__preview__file_field_file_default'])) {
    $data['image__preview__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__teaser__file_field_file_default'])) {
    $data['image__teaser__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
}

/**
 * Implements hook_file_default_types_alter().
 */
function edgerrides_file_default_types_alter(&$data) {
  if (isset($data['audio'])) {
    $data['audio']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['document'])) {
    $data['document']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['image'])) {
    $data['image']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['video'])) {
    $data['video']->disabled = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function edgerrides_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['filters']['filter_htmlcorrector'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => -46,
    ); /* WAS: '' */
    $data['filtered_html']['filters']['filter_mentions'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => 0,
    ); /* WAS: '' */
    $data['filtered_html']['filters']['filter_url'] = array(
      'settings' => array(
        'filter_url_length' => 128,
      ),
      'status' => 1,
      'weight' => -48,
    ); /* WAS: '' */
    $data['filtered_html']['filters']['htmLawed'] = array(
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
    ); /* WAS: '' */
    $data['filtered_html']['name'] = 'Filtered HTML (your normal choice)'; /* WAS: 'Filtered HTML' */
    $data['filtered_html']['weight'] = -10; /* WAS: 0 */
    unset($data['filtered_html']['filters']['filter_html']);
  }
  if (isset($data['full_html'])) {
    $data['full_html']['filters']['filter_mentions'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => 0,
    ); /* WAS: '' */
    $data['full_html']['filters']['filter_url'] = array(
      'settings' => array(
        'filter_url_length' => 128,
      ),
      'status' => 1,
      'weight' => -48,
    ); /* WAS: '' */
    $data['full_html']['weight'] = -8; /* WAS: 1 */
  }
}

/**
 * Implements hook_flag_default_flags_alter().
 */
function edgerrides_flag_default_flags_alter(&$data) {
  if (isset($data['commons_follow_user'])) {
    $data['commons_follow_user']['show_on_entity'] = FALSE; /* WAS: '' */
  }
  if (isset($data['email_node'])) {
    unset($data['email_node']['status']);
  }
  if (isset($data['email_term'])) {
    unset($data['email_term']['types'][0]);
  }
  if (isset($data['email_user'])) {
    $data['email_user']['show_on_entity'] = FALSE; /* WAS: '' */
  }
  if (isset($data['subscribe_user'])) {
    $data['subscribe_user']['show_on_entity'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_menu_default_menu_links_alter().
 */
function edgerrides_menu_default_menu_links_alter(&$data) {
  if (isset($data['main-menu:search'])) {
    $data['main-menu:search']['weight'] = -36; /* WAS: 3 */
  }
}

/**
 * Implements hook_default_message_type_alter().
 */
function edgerrides_default_message_type_alter(&$data) {
  if (isset($data['commons_activity_streams_comment_created'])) {
    $data['commons_activity_streams_comment_created']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->description = 'Activity Streams Entry: Comment created'; /* WAS: 'commons_activity_streams_comment_created' */
    $data['commons_activity_streams_comment_created']->language = 'en'; /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['sv'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_comment_created']->message_text['und'][0]['safe_value'] = '
    <p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture:35x35]' */
    $data['commons_activity_streams_comment_created']->message_text['und'][0]['value'] = '<p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture:35x35]' */
    $data['commons_activity_streams_comment_created']->message_text['und'][1]['safe_value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>' */
    $data['commons_activity_streams_comment_created']->message_text['und'][1]['value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> commented on <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>' */
    unset($data['commons_activity_streams_comment_created']->message_text['und'][2]);
  }
  if (isset($data['commons_activity_streams_node_created'])) {
    $data['commons_activity_streams_node_created']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->description = 'Activity Streams Entry: Node created'; /* WAS: 'commons_activity_streams_node_created' */
    $data['commons_activity_streams_node_created']->language = 'en'; /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['sv'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_node_created']->message_text['und'][0]['safe_value'] = '
    <p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture:35x35]' */
    $data['commons_activity_streams_node_created']->message_text['und'][0]['value'] = '<p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture:35x35]' */
    $data['commons_activity_streams_node_created']->message_text['und'][1]['safe_value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>' */
    $data['commons_activity_streams_node_created']->message_text['und'][1]['value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> created <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>' */
    unset($data['commons_activity_streams_node_created']->message_text['und'][2]);
  }
  if (isset($data['commons_activity_streams_user_profile_updated'])) {
    $data['commons_activity_streams_user_profile_updated']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->description = 'Activity Streams Entry: User profile updated'; /* WAS: 'commons_activity_streams_user_profile_updated' */
    $data['commons_activity_streams_user_profile_updated']->language = 'en'; /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['sv'] = array(
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
    ); /* WAS: '' */
    $data['commons_activity_streams_user_profile_updated']->message_text['und'][0]['safe_value'] = '
    <p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture:35x35]' */
    $data['commons_activity_streams_user_profile_updated']->message_text['und'][0]['value'] = '<p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture:35x35]' */
    $data['commons_activity_streams_user_profile_updated']->message_text['und'][1]['safe_value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile' */
    $data['commons_activity_streams_user_profile_updated']->message_text['und'][1]['value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile</p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> has an updated profile' */
  }
  if (isset($data['commons_follow_user_user_followed'])) {
    $data['commons_follow_user_user_followed']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->description = 'Activity Streams Entry: User followed user'; /* WAS: 'commons_follow_user_user_followed' */
    $data['commons_follow_user_user_followed']->language = 'en'; /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['sv'] = array(
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
    ); /* WAS: '' */
    $data['commons_follow_user_user_followed']->message_text['und'][0]['safe_value'] = '
    <p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture]' */
    $data['commons_follow_user_user_followed']->message_text['und'][0]['value'] = '<p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture]' */
    $data['commons_follow_user_user_followed']->message_text['und'][1]['safe_value'] = '<p><a href="[message:user:url:absolute]"><a href="/en/user/not%20yet%20assigned" class="mentions mentions-0" title="">@</a>{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> is now following <a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a>' */
    $data['commons_follow_user_user_followed']->message_text['und'][1]['value'] = '<p><a href="[message:user:url:absolute]">@{message:user:name}</a> wants to meet&nbsp;<a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a></p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> is now following <a href="[message:field-target-users:0:url]">[message:field-target-users:0:name]</a>' */
  }
  if (isset($data['commons_like_user_likes_node'])) {
    $data['commons_like_user_likes_node']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->description = 'Activity Streams Entry: User liked node'; /* WAS: 'Commons like: User likes a node' */
    $data['commons_like_user_likes_node']->language = 'en'; /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['sv'] = array(
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
    ); /* WAS: '' */
    $data['commons_like_user_likes_node']->message_text['und'][0]['safe_value'] = '<p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture]' */
    $data['commons_like_user_likes_node']->message_text['und'][0]['value'] = '<p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture]' */
    $data['commons_like_user_likes_node']->message_text['und'][1]['safe_value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>' */
    $data['commons_like_user_likes_node']->message_text['und'][1]['value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a></p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> liked the [message:field-target-nodes:0:type] <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>' */
  }
  if (isset($data['commons_notify_comment_created'])) {
    $data['commons_notify_comment_created']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->description = 'E-Mail: Comment created'; /* WAS: 'Commons Notify: Comment created' */
    $data['commons_notify_comment_created']->language = 'en'; /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created']->message_text['sv'] = array(
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
    ); /* WAS: '' */
  }
  if (isset($data['commons_notify_comment_created_no_groups'])) {
    $data['commons_notify_comment_created_no_groups']->description = 'E-Mail: Comment created that is not in groups'; /* WAS: 'Commons Notify: Comment created no groups' */
    $data['commons_notify_comment_created_no_groups']->language = 'en'; /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_comment_created_no_groups']->message_text['sv'] = array(
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
    ); /* WAS: '' */
  }
  if (isset($data['commons_notify_node_created'])) {
    $data['commons_notify_node_created']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['commons_notify_node_created']->description = 'E-Mail: Node created'; /* WAS: 'The notification sent when a user creates a node.' */
    $data['commons_notify_node_created']->language = 'en'; /* WAS: '' */
    $data['commons_notify_node_created']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created']->message_text['sv'] = array(
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
    ); /* WAS: '' */
  }
  if (isset($data['commons_notify_node_created_no_groups'])) {
    $data['commons_notify_node_created_no_groups']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->description = 'E-Mail: Node created that is not in groups'; /* WAS: 'The notification sent when a user creates a node that is not in any groups' */
    $data['commons_notify_node_created_no_groups']->language = 'en'; /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_notify_node_created_no_groups']->message_text['sv'] = array(
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
    ); /* WAS: '' */
  }
  if (isset($data['commons_posts_post_created'])) {
    $data['commons_posts_post_created']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['commons_posts_post_created']->description = 'Activity Streams Entry: Post created'; /* WAS: 'Commons Posts - Post Created' */
    $data['commons_posts_post_created']->language = 'en'; /* WAS: '' */
    $data['commons_posts_post_created']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['sv'] = array(
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
    ); /* WAS: '' */
    $data['commons_posts_post_created']->message_text['und'][0]['safe_value'] = '
    <p>[message:user:picture:35x35]</p>
    '; /* WAS: '[message:user:picture:35x35]' */
    $data['commons_posts_post_created']->message_text['und'][0]['value'] = '<p>[message:user:picture:35x35]</p>
    '; /* WAS: '[message:user:picture:35x35]' */
    $data['commons_posts_post_created']->message_text['und'][1]['safe_value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>' */
    $data['commons_posts_post_created']->message_text['und'][1]['value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>[commons-groups:in-groups-text]</p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> posted <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a>' */
    unset($data['commons_posts_post_created']->message_text['und'][2]);
  }
  if (isset($data['commons_wikis_wiki_updated'])) {
    $data['commons_wikis_wiki_updated']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->description = 'Activity Streams Entry: Wiki updated'; /* WAS: 'Message when a wiki page has been updated.' */
    $data['commons_wikis_wiki_updated']->language = 'en'; /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['en'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['sv'] = array(
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
    ); /* WAS: '' */
    $data['commons_wikis_wiki_updated']->message_text['und'][0]['safe_value'] = '<p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture:35x35]' */
    $data['commons_wikis_wiki_updated']->message_text['und'][0]['value'] = '<p>[message:user:picture:50x50]</p>
    '; /* WAS: '[message:user:picture:35x35]' */
    $data['commons_wikis_wiki_updated']->message_text['und'][1]['safe_value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page' */
    $data['commons_wikis_wiki_updated']->message_text['und'][1]['value'] = '<p><a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page[commons-groups:in-groups-text]</p>
    '; /* WAS: '<a href="[message:user:url:absolute]">[message:user:name]</a> has updated the <a href="[message:field-target-nodes:0:url]">[message:field-target-nodes:0:title_field]</a> wiki page' */
    unset($data['commons_wikis_wiki_updated']->message_text['und'][2]);
  }
  if (isset($data['edgeryders_mentions_comment'])) {
    $data['edgeryders_mentions_comment']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_comment']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_comment']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_comment']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_comment']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_comment']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_comment']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_comment']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_comment']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_comment']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_comment']->message_text['sv'] = array(
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
    ); /* WAS: '' */
  }
  if (isset($data['edgeryders_mentions_node'])) {
    $data['edgeryders_mentions_node']->message_text['ar'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_node']->message_text['de'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_node']->message_text['es'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_node']->message_text['fr'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_node']->message_text['hy'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_node']->message_text['it'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_node']->message_text['ka'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_node']->message_text['nl'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_node']->message_text['ro'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_node']->message_text['ru'] = array(
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
    ); /* WAS: '' */
    $data['edgeryders_mentions_node']->message_text['sv'] = array(
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
    ); /* WAS: '' */
  }
  if (isset($data['redhen_contact'])) {
    $data['redhen_contact']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['redhen_contact']->description = 'RedHen Activity Message: Contact modified'; /* WAS: 'RedHen Contact' */
    $data['redhen_contact']->language = 'en'; /* WAS: '' */
    unset($data['redhen_contact']->message_order_display_name);
    unset($data['redhen_contact']->message_text);
  }
  if (isset($data['redhen_engagement'])) {
    $data['redhen_engagement']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['redhen_engagement']->description = 'RedHen Activity Message: Engagement modified'; /* WAS: 'RedHen Engagement' */
    $data['redhen_engagement']->language = 'en'; /* WAS: '' */
    unset($data['redhen_engagement']->message_order_display_name);
    unset($data['redhen_engagement']->message_text);
  }
  if (isset($data['redhen_membership'])) {
    $data['redhen_membership']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['redhen_membership']->description = 'RedHen Activity Message: Membership modified'; /* WAS: 'RedHen Membership' */
    $data['redhen_membership']->language = 'en'; /* WAS: '' */
    unset($data['redhen_membership']->message_order_display_name);
    unset($data['redhen_membership']->message_text);
  }
  if (isset($data['redhen_note'])) {
    $data['redhen_note']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['redhen_note']->description = 'RedHen Activity Message: Note modified'; /* WAS: 'RedHen Note' */
    $data['redhen_note']->language = 'en'; /* WAS: '' */
    unset($data['redhen_note']->message_order_display_name);
    unset($data['redhen_note']->message_text);
  }
  if (isset($data['redhen_org'])) {
    $data['redhen_org']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['redhen_org']->description = 'RedHen Activity Message: Organization modified'; /* WAS: 'RedHen Organization' */
    $data['redhen_org']->language = 'en'; /* WAS: '' */
    unset($data['redhen_org']->message_order_display_name);
    unset($data['redhen_org']->message_text);
  }
  if (isset($data['redhen_relation'])) {
    $data['redhen_relation']->data['token options'] = array(
      'clear' => 0,
    ); /* WAS: '' */
    $data['redhen_relation']->description = 'RedHen Activity Message: Relation modified'; /* WAS: 'RedHen Relation' */
    $data['redhen_relation']->language = 'en'; /* WAS: '' */
    unset($data['redhen_relation']->message_order_display_name);
    unset($data['redhen_relation']->message_text);
  }
}

/**
 * Implements hook_node_info_alter().
 */
function edgerrides_node_info_alter(&$data) {
  if (isset($data['group'])) {
    $data['group']['description'] = 'Use a project to work on an action or idea together with other Edgeryders.'; /* WAS: 'Use groups to contain people and content related by a shared interest or purpose.' */
    $data['group']['help'] = 'Use a project to work on an action or idea together with other Edgeryders.'; /* WAS: '' */
    $data['group']['name'] = 'Project'; /* WAS: 'Group' */
    $data['group']['title_label'] = 'Project name'; /* WAS: 'Group name' */
  }
  if (isset($data['poll'])) {
    $data['poll']['has_title'] = 1; /* WAS: '' */
    $data['poll']['help'] = ''; /* WAS: '' */
    unset($data['poll']['has_body']);
  }
  if (isset($data['post'])) {
    $data['post']['help'] = 'Start a conversation or share some information.'; /* WAS: '' */
  }
  if (isset($data['task'])) {
    $data['task']['title_label'] = 'Task name'; /* WAS: 'Title' */
  }
}

/**
 * Implements hook_og_features_default_permissions_alter().
 */
function edgerrides_og_features_default_permissions_alter(&$data) {
  if (isset($data['node:group:create document content'])) {
    $data['node:group:create document content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:create event content'])) {
    $data['node:group:create event content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:create post content'])) {
    $data['node:group:create post content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:create task content'])) {
    $data['node:group:create task content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:create wiki content'])) {
    $data['node:group:create wiki content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:delete own document content'])) {
    $data['node:group:delete own document content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:delete own event content'])) {
    $data['node:group:delete own event content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:delete own post content'])) {
    $data['node:group:delete own post content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:delete own task content'])) {
    $data['node:group:delete own task content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:delete own wiki content'])) {
    unset($data['node:group:delete own wiki content']['roles']['member']);
  }
  if (isset($data['node:group:update any wiki content'])) {
    $data['node:group:update any wiki content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:update own document content'])) {
    $data['node:group:update own document content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:update own event content'])) {
    $data['node:group:update own event content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:update own post content'])) {
    $data['node:group:update own post content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:update own task content'])) {
    $data['node:group:update own task content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
  if (isset($data['node:group:update own wiki content'])) {
    $data['node:group:update own wiki content']['roles']['non-member'] = 'non-member'; /* WAS: '' */
  }
}

/**
 * Implements hook_default_og_membership_type_alter().
 */
function edgerrides_default_og_membership_type_alter(&$data) {
  if (isset($data['og_membership_type_default'])) {
    $data['og_membership_type_default']->language = ''; /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function edgerrides_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_view_panel_context'])) {
    $data['node_view_panel_context']->conf['display']->content['new-2df3edec-8a4e-4435-a1b0-9468755e5293'] = (object) array(
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
        ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->content['new-2e2c7182-9047-42ca-9a8f-fa63bc6817e0'] = (object) array(
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
        ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->content['new-e5356891-e28b-48de-8758-9efd02635258'] = (object) array(
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
        ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->content['new-e83691bb-cd81-475a-acd2-c61a98ab61d2'] = (object) array(
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
        ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['three_25_50_25_bottom'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['three_25_50_25_first'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['three_25_50_25_second'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['three_25_50_25_third'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['three_25_50_25_top'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['two_33_66_bottom'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['two_33_66_first'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['two_33_66_second'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['two_33_66_top'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['two_66_33_second'] = array(
      'style' => -1,
    ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panels['two_66_33_bottom'] = array(
      0 => 'new-e83691bb-cd81-475a-acd2-c61a98ab61d2',
    ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panels['two_66_33_first'][0] = 'new-e5356891-e28b-48de-8758-9efd02635258'; /* WAS: 'new-deed05d0-e6bb-9b94-9d09-499090d1e5d3' */
    $data['node_view_panel_context']->conf['display']->panels['two_66_33_second'] = array(
      0 => 'new-2e2c7182-9047-42ca-9a8f-fa63bc6817e0',
    ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panels['two_66_33_top'] = array(
      0 => 'new-2df3edec-8a4e-4435-a1b0-9468755e5293',
    ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->title_pane = 0; /* WAS: 'new-deed05d0-e6bb-9b94-9d09-499090d1e5d3' */
    $data['node_view_panel_context']->conf['display']->uuid = 'fa24fa99-d5d6-40ee-9387-e44cd260b55f'; /* WAS: 'da99dbdb-5ba9-9ab4-7944-b91485cd4086' */
    $data['node_view_panel_context']->weight = -26; /* WAS: -98 */
    unset($data['node_view_panel_context']->conf['display']->content['new-deed05d0-e6bb-9b94-9d09-499090d1e5d3']);
  }
  if (isset($data['node_view_panelizer'])) {
    $data['node_view_panelizer']->weight = -30; /* WAS: -100 */
  }
  if (isset($data['user_view_panel_context'])) {
    $data['user_view_panel_context']->conf['display']->content['new-0b81364e-8826-4c52-bfba-90723f67751c'] = (object) array(
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
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-38b23f27-878a-f264-dd90-e55305d0f70c']->style['settings'] = NULL; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-bbfb4f81-f786-4a31-b7b9-254517af0c75'] = (object) array(
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
        ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['three_33_bottom'] = array(
      0 => 'new-bbfb4f81-f786-4a31-b7b9-254517af0c75',
      1 => 'new-0b81364e-8826-4c52-bfba-90723f67751c',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_radioactivity_decay_profile_alter().
 */
function edgerrides_default_radioactivity_decay_profile_alter(&$data) {
  if (isset($data['commons_ra_node'])) {
    $data['commons_ra_node']->cut_off = 10; /* WAS: 0.1 */
    $data['commons_ra_node']->half_life = 17280; /* WAS: 21600 */
  }
}

/**
 * Implements hook_taxonomy_default_vocabularies_alter().
 */
function edgerrides_taxonomy_default_vocabularies_alter(&$data) {
  if (isset($data['topics'])) {
    $data['topics']['weight'] = -10; /* WAS: 0 */
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function edgerrides_user_default_permissions_alter(&$data) {
  if (isset($data['access comments'])) {
    $data['access comments']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['access comments']['roles']['administrator']);
  }
  if (isset($data['access content'])) {
    $data['access content']['roles']['content manager'] = 'content manager'; /* WAS: '' */
    $data['access content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['access content']['roles']['administrator']);
  }
  if (isset($data['access user profiles'])) {
    $data['access user profiles']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['access user profiles']['roles']['administrator']);
  }
  if (isset($data['create document content'])) {
    $data['create document content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['create document content']['roles']['administrator']);
  }
  if (isset($data['create event content'])) {
    $data['create event content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['create event content']['roles']['administrator']);
  }
  if (isset($data['create event registration'])) {
    $data['create event registration']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['create event registration']['roles']['administrator']);
  }
  if (isset($data['create group content'])) {
    $data['create group content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['create group content']['roles']['administrator']);
  }
  if (isset($data['create post content'])) {
    $data['create post content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['create post content']['roles']['administrator']);
  }
  if (isset($data['create task content'])) {
    $data['create task content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['create task content']['roles']['administrator']);
  }
  if (isset($data['create wiki content'])) {
    $data['create wiki content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['create wiki content']['roles']['administrator']);
  }
  if (isset($data['delete any document content'])) {
    $data['delete any document content']['roles']['content manager'] = 'content manager'; /* WAS: '' */
    $data['delete any document content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['delete any document content']['roles']['administrator']);
  }
  if (isset($data['delete any post content'])) {
    $data['delete any post content']['roles']['content manager'] = 'content manager'; /* WAS: '' */
    $data['delete any post content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['delete any post content']['roles']['administrator']);
  }
  if (isset($data['delete any task content'])) {
    $data['delete any task content']['roles']['content manager'] = 'content manager'; /* WAS: '' */
    $data['delete any task content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['delete any task content']['roles']['administrator']);
  }
  if (isset($data['delete own document content'])) {
    $data['delete own document content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['delete own document content']['roles']['administrator']);
  }
  if (isset($data['delete own event content'])) {
    $data['delete own event content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['delete own event content']['roles']['administrator']);
  }
  if (isset($data['delete own event registration'])) {
    $data['delete own event registration']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['delete own event registration']['roles']['administrator']);
  }
  if (isset($data['delete own post content'])) {
    $data['delete own post content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['delete own post content']['roles']['administrator']);
  }
  if (isset($data['delete own task content'])) {
    $data['delete own task content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['delete own task content']['roles']['administrator']);
  }
  if (isset($data['delete own wiki content'])) {
    $data['delete own wiki content']['roles']['content manager'] = 'content manager'; /* WAS: '' */
    $data['delete own wiki content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['delete own wiki content']['roles']['administrator']);
  }
  if (isset($data['edit any document content'])) {
    $data['edit any document content']['roles']['content manager'] = 'content manager'; /* WAS: '' */
    $data['edit any document content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['edit any document content']['roles']['administrator']);
  }
  if (isset($data['edit any post content'])) {
    $data['edit any post content']['roles']['content manager'] = 'content manager'; /* WAS: '' */
    $data['edit any post content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['edit any post content']['roles']['administrator']);
  }
  if (isset($data['edit any task content'])) {
    $data['edit any task content']['roles']['content manager'] = 'content manager'; /* WAS: '' */
    $data['edit any task content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['edit any task content']['roles']['administrator']);
  }
  if (isset($data['edit any wiki content'])) {
    $data['edit any wiki content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['edit any wiki content']['roles']['administrator']);
  }
  if (isset($data['edit own document content'])) {
    $data['edit own document content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['edit own document content']['roles']['administrator']);
  }
  if (isset($data['edit own event content'])) {
    $data['edit own event content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['edit own event content']['roles']['administrator']);
  }
  if (isset($data['edit own group content'])) {
    $data['edit own group content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['edit own group content']['roles']['administrator']);
  }
  if (isset($data['edit own post content'])) {
    $data['edit own post content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['edit own post content']['roles']['administrator']);
  }
  if (isset($data['edit own task content'])) {
    $data['edit own task content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['edit own task content']['roles']['administrator']);
  }
  if (isset($data['edit own wiki content'])) {
    $data['edit own wiki content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['edit own wiki content']['roles']['administrator']);
  }
  if (isset($data['post comments'])) {
    $data['post comments']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['post comments']['roles']['administrator']);
  }
  if (isset($data['search content'])) {
    $data['search content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['search content']['roles']['administrator']);
  }
  if (isset($data['skip comment approval'])) {
    $data['skip comment approval']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['skip comment approval']['roles']['administrator']);
  }
  if (isset($data['update own event registration'])) {
    $data['update own event registration']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['update own event registration']['roles']['administrator']);
  }
  if (isset($data['use advanced search'])) {
    $data['use advanced search']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['use advanced search']['roles']['administrator']);
  }
  if (isset($data['use custom search'])) {
    $data['use custom search']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['use custom search']['roles']['administrator']);
  }
  if (isset($data['use text format filtered_html'])) {
    $data['use text format filtered_html']['roles']['content manager'] = 'content manager'; /* WAS: '' */
    $data['use text format filtered_html']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['use text format filtered_html']['roles']['administrator']);
  }
  if (isset($data['view event registration'])) {
    $data['view event registration']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['view event registration']['roles']['administrator']);
  }
  if (isset($data['view own event registration'])) {
    $data['view own event registration']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['view own event registration']['roles']['administrator']);
  }
  if (isset($data['view own unpublished content'])) {
    $data['view own unpublished content']['roles']['site admin'] = 'site admin'; /* WAS: '' */
    unset($data['view own unpublished content']['roles']['administrator']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function edgerrides_strongarm_alter(&$data) {
  if (isset($data['additional_settings__active_tab_wiki'])) {
    $data['additional_settings__active_tab_wiki']->value = 'edit-panelizer'; /* WAS: 'edit-workflow' */
  }
  if (isset($data['comment_preview_group'])) {
    $data['comment_preview_group']->value = 0; /* WAS: 1 */
  }
  if (isset($data['commons_radioactivity_entity_types'])) {
    unset($data['commons_radioactivity_entity_types']->value['node']['wiki']);
  }
  if (isset($data['field_bundle_settings_message__commons_notify_comment_created'])) {
    $data['field_bundle_settings_message__commons_notify_comment_created']->value['extra_fields']['display']['message__message_text__0']['default'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__commons_notify_comment_created']->value['extra_fields']['display']['message__message_text__1']['default'] = array(
      'weight' => 1,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__commons_notify_comment_created']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__commons_notify_comment_created']->value['view_modes']['full'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__commons_notify_comment_created']->value['view_modes']['message_notify_email_body'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__commons_notify_comment_created']->value['view_modes']['message_notify_email_subject'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__commons_notify_comment_created']->value['view_modes']['token'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__document'])) {
    $data['field_bundle_settings_node__document']->value['extra_fields']['display']['sharethis'] = array(
      'default' => array(
        'weight' => 10,
        'visible' => TRUE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 40,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['extra_fields']['form']['path'] = array(
      'weight' => 30,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 30,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['attend_button'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['full'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['rss'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['search_index'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['teaser'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__document']->value['view_modes']['token'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__event'])) {
    $data['field_bundle_settings_node__event']->value['extra_fields']['display']['sharethis'] = array(
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
    ); /* WAS: '' */
    $data['field_bundle_settings_node__event']->value['extra_fields']['form']['language'] = array(
      'weight' => 8,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__event']->value['extra_fields']['form']['metatags']['weight'] = 19; /* WAS: 15 */
    $data['field_bundle_settings_node__event']->value['extra_fields']['form']['path']['weight'] = 18; /* WAS: 14 */
    $data['field_bundle_settings_node__event']->value['extra_fields']['form']['redirect']['weight'] = 15; /* WAS: 13 */
    $data['field_bundle_settings_node__event']->value['view_modes']['attend_button'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__event']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__group'])) {
    $data['field_bundle_settings_node__group']->value['extra_fields']['form']['language'] = array(
      'weight' => 0,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__group']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 10,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__group']->value['extra_fields']['form']['path'] = array(
      'weight' => 8,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__group']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 9,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__group']->value['view_modes']['attend_button'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__post'])) {
    $data['field_bundle_settings_node__post']->value['extra_fields']['display']['sharethis'] = array(
      'default' => array(
        'weight' => 5,
        'visible' => TRUE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['extra_fields']['form']['language'] = array(
      'weight' => 1,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 15,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['extra_fields']['form']['path'] = array(
      'weight' => 13,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 14,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['view_modes']['attend_button'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['view_modes']['full'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['view_modes']['rss'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['view_modes']['search_index'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['view_modes']['search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['view_modes']['teaser'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__post']->value['view_modes']['token'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__task'])) {
    $data['field_bundle_settings_node__task']->value['extra_fields']['display']['sharethis'] = array(
      'default' => array(
        'weight' => 10,
        'visible' => TRUE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 11,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['extra_fields']['form']['path'] = array(
      'weight' => 8,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 9,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['extra_fields']['form']['title']['weight'] = 0; /* WAS: -5 */
    $data['field_bundle_settings_node__task']->value['view_modes']['attend_button'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['view_modes']['full'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['view_modes']['rss'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['view_modes']['search_index'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['view_modes']['search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['view_modes']['teaser'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__task']->value['view_modes']['token'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__wiki'])) {
    $data['field_bundle_settings_node__wiki']->value['extra_fields']['form']['language'] = array(
      'weight' => 1,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__wiki']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 12,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__wiki']->value['extra_fields']['form']['path'] = array(
      'weight' => 11,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__wiki']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 10,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__wiki']->value['view_modes']['attend_button'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__wiki']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['menu_options_wiki'])) {
    unset($data['menu_options_wiki']->value[0]);
  }
  if (isset($data['node_options_group'])) {
    $data['node_options_group']->value[0] = 'status'; /* WAS: 'revision' */
    $data['node_options_group']->value[1] = 'revision'; /* WAS: '' */
  }
  if (isset($data['node_options_task'])) {
    unset($data['node_options_task']->value[1]);
  }
  if (isset($data['panelizer_defaults_node_group'])) {
    $data['panelizer_defaults_node_group']->value['view modes']['page_manager']['choice'] = 1; /* WAS: 0 */
    $data['panelizer_defaults_node_group']->value['view modes']['teaser']['status'] = 0; /* WAS: 1 */
  }
  if (isset($data['panelizer_defaults_node_wiki'])) {
    $data['panelizer_defaults_node_wiki']->value['status'] = 0; /* WAS: 1 */
    $data['panelizer_defaults_node_wiki']->value['view modes'] = array(
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
    ); /* WAS: '' */
    unset($data['panelizer_defaults_node_wiki']->value['choice']);
    unset($data['panelizer_defaults_node_wiki']->value['default']);
  }
  if (isset($data['pathauto_node_group_pattern'])) {
    $data['pathauto_node_group_pattern']->value = '[node:title]'; /* WAS: 'groups/[node:title]' */
  }
  if (isset($data['pathauto_node_page_pattern'])) {
    $data['pathauto_node_page_pattern']->value = 'page/[node:title]'; /* WAS: 'content/[node:title]' */
  }
  if (isset($data['pathauto_node_pattern'])) {
    $data['pathauto_node_pattern']->value = '[node:og-group-audience:first]/[node:title]'; /* WAS: 'groups/[node:og-group-ref:0:title]/[node:title]' */
  }
  if (isset($data['rate_widgets'])) {
    $data['rate_widgets']->value[1]->comment_types[0] = 'document'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[1] = 'event'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[2] = 'group'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[3] = 'post'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[4] = 'task'; /* WAS: '' */
    $data['rate_widgets']->value[1]->comment_types[5] = 'wiki'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[0] = 'document'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[1] = 'event'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[2] = 'group'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[3] = 'post'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[4] = 'task'; /* WAS: '' */
    $data['rate_widgets']->value[1]->node_types[5] = 'wiki'; /* WAS: '' */
  }
  if (isset($data['search_active_modules'])) {
    $data['search_active_modules']->value['advanced_help'] = 0; /* WAS: '' */
    $data['search_active_modules']->value['apachesolr_search'] = 0; /* WAS: '' */
    $data['search_active_modules']->value['file_entity'] = 0; /* WAS: '' */
    $data['search_active_modules']->value['user'] = 'user'; /* WAS: 0 */
  }
  if (isset($data['theme_commons_origins_settings'])) {
    $data['theme_commons_origins_settings']->value['adaptivetheme_meta_clear_type'] = 0; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['adaptivetheme_meta_ie_document_mode'] = ''; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['at-settings__active_tab'] = 'edit-global-settings'; /* WAS: 'edit-bigscreen' */
    $data['theme_commons_origins_settings']->value['bigscreen_max_width'] = 1400; /* WAS: 935 */
    $data['theme_commons_origins_settings']->value['bigscreen_page_unit'] = '%'; /* WAS: 'px' */
    $data['theme_commons_origins_settings']->value['bigscreen_page_width'] = 100; /* WAS: 935 */
    $data['theme_commons_origins_settings']->value['combine_css_files'] = 0; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['combine_js_files'] = 0; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['commons_origins_palette'] = 'palette-gray-lightgray-blue'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['default_favicon'] = 0; /* WAS: 1 */
    $data['theme_commons_origins_settings']->value['default_logo'] = 0; /* WAS: 1 */
    $data['theme_commons_origins_settings']->value['enable_menu_toggle'] = 0; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['favicon_mimetype'] = 'image/png'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['favicon_path'] = 'public://SiteGraphics.Favicon.avatar-05-30px_0_0.png'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['global_default_layout'] = 'smalltouch-portrait'; /* WAS: 'smartphone-portrait' */
    $data['theme_commons_origins_settings']->value['load_matchmediajs'] = 0; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['logo_path'] = 'public://SiteGraphics.TopLeftLogo.round logo 60_1_0.png'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_five_5x20'] = 'five-5x20-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_four_4x25'] = 'four-4x25-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_layout'] = 'one_col_vert'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_media_query'] = 'only screen and (min-width:321px) and (max-width:480px)'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_page_unit'] = '%'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_page_width'] = 100; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_sidebar_first'] = 50; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_sidebar_second'] = 50; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_sidebar_unit'] = '%'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_six_6x16'] = 'six-6x16-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_25_25_50'] = 'three-25-25-50-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_25_50_25'] = 'three-25-50-25-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_3x33'] = 'three-3x33-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_50_25_25'] = 'three-50-25-25-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_inset_left'] = 'three-inset-left-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_three_inset_right'] = 'three-inset-right-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_two_33_66'] = 'two-33-66-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_two_50'] = 'two-50-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_two_66_33'] = 'two-66-33-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_landscape_two_brick'] = 'two-brick-stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_layout'] = 'one_col_stack'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_media_query'] = 'only screen and (max-width:320px)'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_page_unit'] = '%'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_page_width'] = 100; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_sidebar_first'] = 100; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_sidebar_second'] = 100; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['smalltouch_portrait_sidebar_unit'] = '%'; /* WAS: '' */
    $data['theme_commons_origins_settings']->value['toggle_comment_user_verification'] = 0; /* WAS: 1 */
    $data['theme_commons_origins_settings']->value['toggle_name'] = 0; /* WAS: 1 */
    $data['theme_commons_origins_settings']->value['toggle_secondary_menu'] = 0; /* WAS: 1 */
    unset($data['theme_commons_origins_settings']->value['chrome_edge']);
    unset($data['theme_commons_origins_settings']->value['clear_type']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_five_5x20']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_four_4x25']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_layout']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_media_query']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_page_unit']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_page_width']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_sidebar_first']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_sidebar_second']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_sidebar_unit']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_six_6x16']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_25_25_50']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_25_50_25']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_3x33']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_50_25_25']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_inset_left']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_three_inset_right']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_two_33_66']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_two_50']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_two_66_33']);
    unset($data['theme_commons_origins_settings']->value['smartphone_landscape_two_brick']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_layout']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_media_query']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_page_unit']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_page_width']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_sidebar_first']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_sidebar_second']);
    unset($data['theme_commons_origins_settings']->value['smartphone_portrait_sidebar_unit']);
  }
  if (isset($data['user_mail_register_admin_created_body'])) {
    $data['user_mail_register_admin_created_body']->value = 'Dear [user:name-raw],
    
    a site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:
    
    [user:one-time-login-url]
    
    This link can only be used once to log in and will lead you to a page where you can set your password.
    
    After setting your password, you will be able to log in at [site:login-url] in the future using:
    
    username: [user:name-raw]
    password: Your password
    
    --  [site:name] team'; /* WAS: '[user:name],
    
    A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:
    
    [user:one-time-login-url]
    
    This link can only be used once to log in and will lead you to a page where you can set your password.
    
    After setting your password, you will be able to log in at [site:login-url] in the future using:
    
    username: [user:name]
    password: Your password
    
    --  [site:name] team' */
  }
  if (isset($data['user_mail_register_no_approval_required_body'])) {
    $data['user_mail_register_no_approval_required_body']->value = 'Dear [user:name-raw],
    
    Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:
    
    [user:one-time-login-url]
    
    This link can only be used once to log in and will lead you to a page where you can set your password.
    
    After setting your password, you will be able to log in at [site:login-url] in the future using:
    
    username: [user:name-raw]
    password: Your password
    
    --  [site:name] team'; /* WAS: '[user:name],
    
    Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:
    
    [user:one-time-login-url]
    
    This link can only be used once to log in and will lead you to a page where you can set your password.
    
    After setting your password, you will be able to log in at [site:login-url] in the future using:
    
    username: [user:name]
    password: Your password
    
    --  [site:name] team' */
  }
  if (isset($data['user_mail_status_activated_body'])) {
    $data['user_mail_status_activated_body']->value = 'Dear [user:name-raw],,
    
    welcome to the Edgeryders community! Your account at [site:name] has been activated, you can start using it now:
    
    Login link: [site:login-url]
    username: [user:name-raw]
    password: (the password you have chosen)
    
    Please take the time to read about how Edgeryders works as an enterprise and community, as well as the terms of use. They are available from the main menu under <a href="https://edgeryders.eu/en/edgeryders-lbg/help-info">Help/Info</a>.
    
    --  your friendly [site:name] team'; /* WAS: '[user:name],
    
    Your account at [site:name] has been activated.
    
    You may now log in by clicking this link or copying and pasting it into your browser:
    
    [user:one-time-login-url]
    
    This link can only be used once to log in and will lead you to a page where you can set your password.
    
    After setting your password, you will be able to log in at [site:login-url] in the future using:
    
    username: [user:name]
    password: Your password
    
    --  [site:name] team' */
  }
  if (isset($data['user_register'])) {
    $data['user_register']->value = 2; /* WAS: 1 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function edgerrides_views_default_views_alter(&$data) {
  if (isset($data['archive'])) {
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
  }
  if (isset($data['backlinks'])) {
    $data['backlinks']->display['block']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['block']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['backlinks']->display['default']->display_options['empty']['text']['empty']);
    unset($data['backlinks']->display['default']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['comments_recent'])) {
    $data['comments_recent']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['comments_recent']->display['default']->display_options['fields']['subject']['link_to_comment']);
    unset($data['comments_recent']->display['page']->display_options['fields']['subject']['link_to_comment']);
    unset($data['comments_recent']->display['page']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['commons_activity_streams_activity'])) {
    unset($data['commons_activity_streams_activity']->display['default']->display_options['arguments']);
    unset($data['commons_activity_streams_activity']->display['default']->display_options['filters']['cf_user_follow_message']);
  }
  if (isset($data['commons_bw_all'])) {
    $data['commons_bw_all']->display['default']->display_options['filters']['flagged'] = array(
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
    ); /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['filters']['type']['value']['document'] = 'document'; /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['filters']['type']['value']['event'] = 'event'; /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['filters']['type']['value']['post'] = 'post'; /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['filters']['type']['value']['task'] = 'task'; /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['filters']['type']['value']['wiki'] = 'wiki'; /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['header']['view'] = array(
      'id' => 'view',
      'table' => 'views',
      'field' => 'view',
      'view_to_insert' => 'create_content_homemade_widget:default',
      'inherit_arguments' => TRUE,
    ); /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['relationships']['flag_content_rel'] = array(
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'ui_name' => 'Following',
      'label' => 'following',
      'required' => 0,
      'flag' => 'commons_follow_node',
    ); /* WAS: '' */
    $data['commons_bw_all']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
    unset($data['commons_bw_all']->display['default']->display_options['header']['commons_bw_node_partial_form']);
  }
  if (isset($data['commons_bw_documents'])) {
    $data['commons_bw_documents']->display['default']->display_options['filters']['flagged'] = array(
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
    ); /* WAS: '' */
    $data['commons_bw_documents']->display['default']->display_options['header']['view'] = array(
      'id' => 'view',
      'table' => 'views',
      'field' => 'view',
      'view_to_insert' => 'create_content_homemade_widget:default',
      'inherit_arguments' => TRUE,
    ); /* WAS: '' */
    $data['commons_bw_documents']->display['default']->display_options['relationships']['flag_content_rel'] = array(
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'ui_name' => 'Following',
      'label' => 'following',
      'required' => 0,
      'flag' => 'commons_follow_node',
    ); /* WAS: '' */
    $data['commons_bw_documents']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
    unset($data['commons_bw_documents']->display['default']->display_options['header']['commons_bw_node_partial_form']);
  }
  if (isset($data['commons_bw_posts'])) {
    $data['commons_bw_posts']->display['default']->display_options['filters']['flagged'] = array(
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
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['default']->display_options['header']['view'] = array(
      'id' => 'view',
      'table' => 'views',
      'field' => 'view',
      'view_to_insert' => 'create_content_homemade_widget:default',
      'inherit_arguments' => TRUE,
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['default']->display_options['relationships']['flag_content_rel'] = array(
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'ui_name' => 'Following',
      'label' => 'following',
      'required' => 0,
      'flag' => 'commons_follow_node',
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
    $data['commons_bw_posts']->display['panel_pane_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:5:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:19:"display_description";s:91:"Display specific for edgeryders.eu to list all posts from a group (not just followed ones).";s:8:"defaults";a:3:{s:6:"header";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:7:"filters";a:4:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"post";s:4:"post";}}s:10:"group_type";a:5:{s:2:"id";s:10:"group_type";s:5:"table";s:13:"og_membership";s:5:"field";s:10:"group_type";s:12:"relationship";s:17:"og_membership_rel";s:5:"value";a:1:{s:4:"node";s:4:"node";}}s:7:"flagged";a:8:{s:2:"id";s:7:"flagged";s:5:"table";s:12:"flag_content";s:5:"field";s:7:"flagged";s:12:"relationship";s:16:"flag_content_rel";s:7:"ui_name";s:9:"Following";s:5:"value";s:3:"All";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:0:"";s:5:"label";s:9:"Following";s:8:"operator";s:10:"flagged_op";s:10:"identifier";s:9:"following";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:4:"user";s:7:"context";s:21:"entity:comment.author";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:38:"Group ID of group to display posts for";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_1";s:13:"display_title";s:29:"Pane (all content, no header)";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_bw_posts']->display['panel_pane_2'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:7:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:8:{s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:12:"style_plugin";s:5:"table";s:13:"style_options";a:3:{s:7:"columns";a:3:{s:5:"title";s:5:"title";s:4:"body";s:11:"field_image";s:11:"field_image";s:4:"body";}s:7:"default";s:2:"-1";s:4:"info";a:3:{s:5:"title";a:5:{s:8:"sortable";i:0;s:18:"default_sort_order";s:3:"asc";s:5:"align";s:0:"";s:9:"separator";s:0:"";s:12:"empty_column";i:0;}s:4:"body";a:5:{s:8:"sortable";i:0;s:18:"default_sort_order";s:3:"asc";s:5:"align";s:0:"";s:9:"separator";s:0:"";s:12:"empty_column";i:0;}s:11:"field_image";a:3:{s:5:"align";s:0:"";s:9:"separator";s:0:"";s:12:"empty_column";i:0;}}}s:13:"relationships";a:3:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}s:16:"flag_content_rel";a:7:{s:2:"id";s:16:"flag_content_rel";s:5:"table";s:4:"node";s:5:"field";s:16:"flag_content_rel";s:7:"ui_name";s:9:"Following";s:5:"label";s:9:"following";s:8:"required";i:0;s:4:"flag";s:19:"commons_follow_node";}s:3:"uid";a:4:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";s:8:"required";b:1;}}s:6:"fields";a:3:{s:5:"title";a:6:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:19:"element_label_colon";b:0;}s:4:"body";a:8:{s:2:"id";s:4:"body";s:5:"table";s:15:"field_data_body";s:5:"field";s:4:"body";s:5:"label";s:0:"";s:5:"alter";a:4:{s:15:"trim_whitespace";b:1;s:10:"max_length";s:3:"200";s:10:"strip_tags";b:1;s:4:"trim";b:1;}s:19:"element_label_colon";b:0;s:4:"type";s:23:"text_summary_or_trimmed";s:8:"settings";a:1:{s:11:"trim_length";s:3:"200";}}s:11:"field_image";a:7:{s:2:"id";s:11:"field_image";s:5:"table";s:22:"field_data_field_image";s:5:"field";s:11:"field_image";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:6:"medium";s:10:"image_link";s:7:"content";}s:12:"delta_offset";s:1:"0";}}s:7:"filters";a:4:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"post";s:4:"post";}}s:10:"group_type";a:5:{s:2:"id";s:10:"group_type";s:5:"table";s:13:"og_membership";s:5:"field";s:10:"group_type";s:12:"relationship";s:17:"og_membership_rel";s:5:"value";a:1:{s:4:"node";s:4:"node";}}s:7:"flagged";a:8:{s:2:"id";s:7:"flagged";s:5:"table";s:12:"flag_content";s:5:"field";s:7:"flagged";s:12:"relationship";s:16:"flag_content_rel";s:7:"ui_name";s:9:"Following";s:5:"value";s:1:"1";s:7:"exposed";b:1;s:6:"expose";a:4:{s:11:"operator_id";s:0:"";s:5:"label";s:9:"Following";s:8:"operator";s:10:"flagged_op";s:10:"identifier";s:9:"following";}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_2";s:13:"display_title";s:16:"Pane, table form";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    unset($data['commons_bw_posts']->display['default']->display_options['header']['commons_bw_node_partial_form']);
  }
  if (isset($data['commons_bw_tasks'])) {
    $data['commons_bw_tasks']->description = 'List of commons_task nodes within the Commons Group Browsing Widget.'; /* WAS: '' */
    $data['commons_bw_tasks']->display['block_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:11:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"footer";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:14:"Pick up a task";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:13:"style_options";a:2:{s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;}s:10:"row_plugin";s:6:"fields";s:6:"footer";a:1:{s:4:"area";a:5:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:7:"content";s:58:"<h2><a href ="/casetracker">Browse & search tasks</a></h2>";s:6:"format";s:9:"full_html";}}s:6:"fields";a:1:{s:5:"title";a:9:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:3:{s:10:"max_length";s:2:"40";s:9:"more_link";b:1;s:4:"trim";b:1;}s:12:"element_type";s:2:"h3";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:12:"link_to_node";b:0;}}s:5:"sorts";a:3:{s:6:"sticky";a:3:{s:2:"id";s:6:"sticky";s:5:"table";s:4:"node";s:5:"field";s:6:"sticky";}s:7:"created";a:5:{s:2:"id";s:7:"created";s:5:"table";s:4:"node";s:5:"field";s:7:"created";s:5:"order";s:4:"DESC";s:6:"expose";a:1:{s:5:"label";s:11:"most recent";}}s:40:"field_radioactivity_radioactivity_energy";a:5:{s:2:"id";s:40:"field_radioactivity_radioactivity_energy";s:5:"table";s:30:"field_data_field_radioactivity";s:5:"field";s:40:"field_radioactivity_radioactivity_energy";s:5:"order";s:4:"DESC";s:6:"expose";a:1:{s:5:"label";s:11:"most active";}}}s:7:"filters";a:4:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"task";s:4:"task";}}s:9:"assign_to";a:5:{s:2:"id";s:9:"assign_to";s:5:"table";s:16:"casetracker_case";s:5:"field";s:9:"assign_to";s:8:"operator";s:2:"or";s:5:"value";a:1:{i:0;s:1:"0";}}s:14:"case_status_id";a:5:{s:2:"id";s:14:"case_status_id";s:5:"table";s:16:"casetracker_case";s:5:"field";s:14:"case_status_id";s:8:"operator";s:3:"not";s:5:"value";a:2:{i:8;s:1:"8";i:5;s:1:"5";}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_1";s:13:"display_title";s:15:"Block dashboard";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_bw_tasks']->display['default']->display_options['header']['view'] = array(
      'id' => 'view',
      'table' => 'views',
      'field' => 'view',
      'view_to_insert' => 'create_content_homemade_widget:default',
      'inherit_arguments' => TRUE,
    ); /* WAS: '' */
    $data['commons_bw_tasks']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
    $data['commons_bw_tasks']->display['panel_pane_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:10:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:11:{s:5:"title";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"footer";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;}s:5:"title";s:14:"Pick up a task";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"2";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:6:"footer";a:1:{s:4:"area";a:5:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:7:"content";s:58:"<h2><a href ="/casetracker">Browse & search tasks</a></h2>";s:6:"format";s:9:"full_html";}}s:13:"relationships";a:2:{s:17:"og_membership_rel";a:4:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";s:8:"required";b:1;}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:2:{s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"max_length";s:2:"80";s:4:"trim";b:1;}s:12:"element_type";s:2:"h3";s:19:"element_label_colon";b:0;}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:10:" by [name]";}s:12:"element_type";s:2:"h3";s:19:"element_label_colon";b:0;}}s:5:"sorts";a:3:{s:6:"sticky";a:3:{s:2:"id";s:6:"sticky";s:5:"table";s:4:"node";s:5:"field";s:6:"sticky";}s:7:"created";a:5:{s:2:"id";s:7:"created";s:5:"table";s:4:"node";s:5:"field";s:7:"created";s:5:"order";s:4:"DESC";s:6:"expose";a:1:{s:5:"label";s:11:"most recent";}}s:40:"field_radioactivity_radioactivity_energy";a:5:{s:2:"id";s:40:"field_radioactivity_radioactivity_energy";s:5:"table";s:30:"field_data_field_radioactivity";s:5:"field";s:40:"field_radioactivity_radioactivity_energy";s:5:"order";s:4:"DESC";s:6:"expose";a:1:{s:5:"label";s:11:"most active";}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_1";s:13:"display_title";s:22:"Content pane dashboard";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_bw_tasks']->human_name = 'Commons Browsing Widget - Tasks'; /* WAS: 'commons_bw_tasks' */
    $data['commons_bw_tasks']->tag = 'edgeryders'; /* WAS: 'default' */
    unset($data['commons_bw_tasks']->display['default']->display_options['header']['area']);
    unset($data['commons_bw_tasks']->display['default']->display_options['sorts']['created']['exposed']);
  }
  if (isset($data['commons_bw_wikis'])) {
    $data['commons_bw_wikis']->display['default']->display_options['filters']['flagged'] = array(
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
    ); /* WAS: '' */
    $data['commons_bw_wikis']->display['default']->display_options['header']['view'] = array(
      'id' => 'view',
      'table' => 'views',
      'field' => 'view',
      'view_to_insert' => 'create_content_homemade_widget:default',
      'inherit_arguments' => TRUE,
    ); /* WAS: '' */
    $data['commons_bw_wikis']->display['default']->display_options['relationships']['flag_content_rel'] = array(
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'ui_name' => 'Following',
      'label' => 'following',
      'required' => 0,
      'flag' => 'commons_follow_node',
    ); /* WAS: '' */
    $data['commons_bw_wikis']->display['default']->display_options['sorts']['field_radioactivity_radioactivity_energy'] = array(
      'id' => 'field_radioactivity_radioactivity_energy',
      'table' => 'field_data_field_radioactivity',
      'field' => 'field_radioactivity_radioactivity_energy',
      'order' => 'DESC',
      'exposed' => TRUE,
      'expose' => array(
        'label' => 'most active',
      ),
    ); /* WAS: '' */
    unset($data['commons_bw_wikis']->display['default']->display_options['header']['commons_bw_node_partial_form']);
  }
  if (isset($data['commons_contributors_group'])) {
    $data['commons_contributors_group']->display['page_1']->display_options['defaults']['pager'] = FALSE; /* WAS: '' */
    $data['commons_contributors_group']->display['page_1']->display_options['defaults']['use_more'] = FALSE; /* WAS: '' */
    $data['commons_contributors_group']->display['page_1']->display_options['defaults']['use_more_always'] = FALSE; /* WAS: '' */
    $data['commons_contributors_group']->display['page_1']->display_options['defaults']['use_more_text'] = FALSE; /* WAS: '' */
    $data['commons_contributors_group']->display['page_1']->display_options['pager'] = array(
      'type' => 'some',
      'options' => array(
        'items_per_page' => 0,
        'offset' => 0,
      ),
    ); /* WAS: '' */
    $data['commons_contributors_group']->display['page_1']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['commons_contributors_group']->display['panel_pane_1']->display_options['defaults']['sorts'] = FALSE; /* WAS: '' */
    $data['commons_contributors_group']->display['panel_pane_1']->display_options['fields']['picture']['empty'] = '<img typeof="foaf:Image" class="image-style-35x35" src="https://edgeryders.eu/sites/default/files/default-user-pic.jpg" width="35" height="35" alt="">'; /* WAS: '' */
    $data['commons_contributors_group']->display['panel_pane_1']->display_options['sorts'] = array(
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
    ); /* WAS: '' */
    $data['commons_contributors_group']->display['panel_pane_2']->display_options['defaults']['sorts'] = FALSE; /* WAS: '' */
    $data['commons_contributors_group']->display['panel_pane_2']->display_options['fields']['picture']['empty'] = '<a href="/user/[uid]"><img typeof="foaf:Image" class="image-style-50x50" src="https://edgeryders.eu/sites/default/files/default-user-pic.jpg" width="50" height="50" alt=""></a>'; /* WAS: '' */
    $data['commons_contributors_group']->display['panel_pane_2']->display_options['fields']['uid'] = array(
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
      'link_to_user' => FALSE,
    ); /* WAS: '' */
    $data['commons_contributors_group']->display['panel_pane_2']->display_options['sorts'] = array(
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
    ); /* WAS: '' */
  }
  if (isset($data['commons_events_event_attendee_list'])) {
    $data['commons_events_event_attendee_list']->display['commons_events_full_attendee_list']->display_options['defaults']['header'] = FALSE; /* WAS: '' */
  }
  if (isset($data['commons_events_upcoming'])) {
    $data['commons_events_upcoming']->display['default']->display_options['filters']['field_date_value2'] = array(
      'id' => 'field_date_value2',
      'table' => 'field_data_field_date',
      'field' => 'field_date_value2',
      'operator' => '>=',
      'form_type' => 'date_text',
      'default_date' => 'now',
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['default']->display_options['title'] = 'Events in this group'; /* WAS: 'Events' */
    $data['commons_events_upcoming']->display['panel_pane_1']->display_options['title'] = 'Upcoming events for this project'; /* WAS: 'Upcoming events' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['argument_input'] = array(
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
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['arguments'] = array(
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
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['defaults']['arguments'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['defaults']['pager'] = FALSE; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['display_description'] = 'Like Group pane, but with explicit group ID argument input rather than from context. Also allows selection by taxonomy term.'; /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['pager'] = array(
      'type' => 'none',
      'options' => array(
        'offset' => 0,
      ),
    ); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_options['sorts']['field_date_value']['expose']['label'] = 'Next first'; /* WAS: 'Date' */
    $data['commons_events_upcoming']->display['panel_pane_2']->display_title = 'Page pane (Teaser)'; /* WAS: 'Landing Page pane' */
    $data['commons_events_upcoming']->display['panel_pane_3'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:12:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:12:"exposed_form";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"header";b:0;s:5:"empty";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;}s:19:"display_description";s:128:"Renders a single "Attend" button for one selected event. Good for adding to an article for that event. Button by Drupal Commons.";s:12:"exposed_form";a:2:{s:4:"type";s:5:"basic";s:7:"options";a:2:{s:17:"expose_sort_order";b:0;s:10:"autosubmit";b:1;}}s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"entity";s:11:"row_options";a:1:{s:9:"view_mode";s:13:"attend_button";}s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:32:"No events have been created yet.";s:6:"format";s:13:"filtered_html";}}s:9:"arguments";a:1:{s:3:"nid";a:6:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:14:"argument_input";a:1:{s:3:"nid";a:6:{s:4:"type";s:4:"user";s:7:"context";s:21:"entity:comment.author";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:31:"Node ID of the event to display";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_3";s:13:"display_title";s:13:"Attend Button";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_events_upcoming']->display['panel_pane_5'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:6:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:19:"display_description";s:80:"Group pane for nodes that are not group nodes themselves, but belong to a group.";s:8:"defaults";a:4:{s:13:"relationships";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:9:"arguments";a:1:{s:3:"gid";a:7:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:14:"default_action";s:5:"empty";s:21:"default_argument_type";s:10:"og_context";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:5:"event";s:5:"event";}}s:17:"field_date_value2";a:6:{s:2:"id";s:17:"field_date_value2";s:5:"table";s:21:"field_data_field_date";s:5:"field";s:17:"field_date_value2";s:8:"operator";s:2:">=";s:9:"form_type";s:9:"date_text";s:12:"default_date";s:3:"now";}}s:14:"argument_input";a:1:{s:3:"gid";a:6:{s:4:"type";s:4:"user";s:7:"context";s:23:"entity:node.group_group";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:4:"3628";s:5:"label";s:37:"Display only events in group with ID:";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_5";s:13:"display_title";s:18:"Page pane (Fields)";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    unset($data['commons_events_upcoming']->display['default']->display_options['filters']['field_date_value']);
    unset($data['commons_events_upcoming']->display['panel_pane_2']->display_options['sorts']['promote']['expose']);
    unset($data['commons_events_upcoming']->display['panel_pane_2']->display_options['sorts']['promote']['exposed']);
  }
  if (isset($data['commons_events_user_upcoming_events'])) {
    $data['commons_events_user_upcoming_events']->human_name = 'Commons Events - Upcoming Events for a User'; /* WAS: 'Commons Events - User Upcoming Events' */
    $data['commons_events_user_upcoming_events']->tag = 'commons_events'; /* WAS: 'default' */
    unset($data['commons_events_user_upcoming_events']->display['panel_pane_1']->display_options['fields']['field_address']['click_sort_column']);
    unset($data['commons_events_user_upcoming_events']->display['panel_pane_1']->display_options['fields']['field_address']['settings']);
    unset($data['commons_events_user_upcoming_events']->display['panel_pane_2']->display_options['fields']['field_address']['click_sort_column']);
    unset($data['commons_events_user_upcoming_events']->display['panel_pane_2']->display_options['fields']['field_address']['settings']);
    unset($data['commons_events_user_upcoming_events']->display['panel_pane_3']->display_options['fields']['field_address']['click_sort_column']);
    unset($data['commons_events_user_upcoming_events']->display['panel_pane_3']->display_options['fields']['field_address']['settings']);
  }
  if (isset($data['commons_featured'])) {
    $data['commons_featured']->display['block_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:10:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:10:{s:5:"title";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:21:"Popular conversations";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:2:{s:6:"inline";a:2:{s:4:"name";s:4:"name";s:13:"comment_count";s:13:"comment_count";}s:9:"separator";s:3:" - ";}s:13:"relationships";a:1:{s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:3:{s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:13:"element_class";s:11:"type-[type]";s:19:"element_label_colon";b:0;}s:4:"name";a:6:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:2:"By";s:5:"alter";a:1:{s:4:"text";s:46:"[Title] ([type]) by [name] – [comment_count]";}}s:13:"comment_count";a:6:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:6:"suffix";s:9:" comments";}}s:7:"filters";a:3:{s:6:"status";a:4:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";s:1:"1";}s:7:"promote";a:4:{s:2:"id";s:7:"promote";s:5:"table";s:4:"node";s:5:"field";s:7:"promote";s:5:"value";s:1:"1";}s:13:"comment_count";a:5:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:8:"operator";s:1:">";s:5:"value";a:1:{s:5:"value";s:1:"6";}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_1";s:13:"display_title";s:5:"Block";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_featured']->display['commons_home_featured_page']->display_options['defaults']['fields'] = FALSE; /* WAS: '' */
    $data['commons_featured']->display['commons_home_featured_page']->display_options['defaults']['sorts'] = FALSE; /* WAS: '' */
    $data['commons_featured']->display['commons_home_featured_page']->display_options['defaults']['title'] = FALSE; /* WAS: '' */
    $data['commons_featured']->display['commons_home_featured_page']->display_options['fields'] = array(
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
    ); /* WAS: '' */
    $data['commons_featured']->display['commons_home_featured_page']->display_options['pager']['options']['items_per_page'] = 6; /* WAS: 15 */
    $data['commons_featured']->display['commons_home_featured_page']->display_options['row_options'] = array(
      'inline' => array(
        'name' => 'name',
        'timestamp' => 'timestamp',
      ),
    ); /* WAS: '' */
    $data['commons_featured']->display['commons_home_featured_page']->display_options['row_plugin'] = 'fields'; /* WAS: 'node' */
    $data['commons_featured']->display['commons_home_featured_page']->display_options['sorts'] = array(
      'random' => array(
        'id' => 'random',
        'table' => 'views',
        'field' => 'random',
      ),
    ); /* WAS: '' */
    $data['commons_featured']->display['commons_home_featured_page']->display_options['style_options'] = array(
      'columns' => 3,
    ); /* WAS: '' */
    $data['commons_featured']->display['commons_home_featured_page']->display_options['style_plugin'] = 'grid'; /* WAS: 'default' */
    $data['commons_featured']->display['default']->display_options['fields']['name'] = array(
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'uid',
    ); /* WAS: '' */
    $data['commons_featured']->display['default']->display_options['pager']['options']['id'] = 0; /* WAS: '' */
    $data['commons_featured']->display['default']->display_options['pager']['options']['items_per_page'] = 6; /* WAS: 3 */
    $data['commons_featured']->display['default']->display_options['pager']['options']['quantity'] = 9; /* WAS: '' */
    $data['commons_featured']->display['default']->display_options['pager']['type'] = 'load_more'; /* WAS: 'some' */
    $data['commons_featured']->display['default']->display_options['relationships'] = array(
      'uid' => array(
        'id' => 'uid',
        'table' => 'node',
        'field' => 'uid',
      ),
    ); /* WAS: '' */
    $data['commons_featured']->display['default']->display_options['title'] = 'Blog'; /* WAS: 'Featured on this site' */
    $data['commons_featured']->display['page_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:14:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"header";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:19:"display_description";s:70:"a page which gathers content relevant for spot the future participants";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"6";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:4:"grid";s:13:"style_options";a:1:{s:7:"columns";s:1:"3";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:4:"name";s:4:"name";s:9:"timestamp";s:9:"timestamp";}}s:6:"header";a:2:{s:4:"view";a:4:{s:2:"id";s:4:"view";s:5:"table";s:5:"views";s:5:"field";s:4:"view";s:14:"view_to_insert";s:22:"avatar_gallery:default";}s:4:"area";a:5:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:7:"content";s:157:"<h3>Spot The Future – Scanning the horizon for future builders in Armenia, Egypt and Georgia <a href = "/content/spot-the-future-about">learn more</a></h3>";s:6:"format";s:9:"full_html";}}s:6:"fields";a:9:{s:9:"view_node";a:6:{s:2:"id";s:9:"view_node";s:5:"table";s:17:"views_entity_node";s:5:"field";s:9:"view_node";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;}s:4:"path";a:6:{s:2:"id";s:4:"path";s:5:"table";s:4:"node";s:5:"field";s:4:"path";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;}s:11:"field_image";a:10:{s:2:"id";s:11:"field_image";s:5:"table";s:22:"field_data_field_image";s:5:"field";s:11:"field_image";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:8:"featured";s:10:"image_link";s:7:"content";}s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:9:"separator";s:0:"";}s:5:"title";a:8:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"max_length";s:2:"20";s:4:"trim";b:1;}s:12:"element_type";s:2:"h3";s:13:"element_class";s:11:"type-[type]";s:19:"element_label_colon";b:0;}s:4:"type";a:6:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;}s:13:"comment_count";a:9:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;s:13:"format_plural";b:1;s:22:"format_plural_singular";s:9:"1 comment";s:20:"format_plural_plural";s:15:"@count comments";}s:4:"name";a:7:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:3:"by ";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:26:"[name] – [comment_count]";}s:19:"element_label_colon";b:0;}s:9:"timestamp";a:6:{s:2:"id";s:9:"timestamp";s:5:"table";s:7:"history";s:5:"field";s:9:"timestamp";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:15:"– [timestamp]";}s:19:"element_label_colon";b:0;}s:4:"body";a:6:{s:2:"id";s:4:"body";s:5:"table";s:15:"field_data_body";s:5:"field";s:4:"body";s:5:"label";s:0:"";s:5:"alter";a:7:{s:10:"max_length";s:3:"130";s:9:"more_link";b:1;s:14:"more_link_text";s:9:"read more";s:14:"more_link_path";s:6:"[path]";s:10:"strip_tags";b:1;s:4:"trim";b:1;s:4:"html";b:1;}s:19:"element_label_colon";b:0;}}s:5:"sorts";a:1:{s:6:"random";a:3:{s:2:"id";s:6:"random";s:5:"table";s:5:"views";s:5:"field";s:6:"random";}}s:7:"filters";a:4:{s:6:"status";a:4:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";s:1:"1";}s:7:"promote";a:4:{s:2:"id";s:7:"promote";s:5:"table";s:4:"node";s:5:"field";s:7:"promote";s:5:"value";s:1:"1";}s:9:"timestamp";a:5:{s:2:"id";s:9:"timestamp";s:5:"table";s:13:"node_revision";s:5:"field";s:9:"timestamp";s:8:"operator";s:2:">=";s:5:"value";a:1:{s:5:"value";s:10:"2014-04-07";}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"post";s:4:"post";}}}s:4:"path";s:22:"spotthefuture_overview";s:4:"menu";a:4:{s:5:"title";s:6:"Events";s:6:"weight";s:1:"0";s:4:"name";s:9:"main-menu";s:7:"context";i:0;}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:6:"page_1";s:13:"display_title";s:24:"Spot The Future Hub Page";s:14:"display_plugin";s:4:"page";s:8:"position";i:0;}'); /* WAS: '' */
    $data['commons_featured']->display['panel_pane_2'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:11:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:19:"display_description";s:53:"The blog does not need to look like any other group..";s:8:"defaults";a:11:{s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:12:"link_display";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:15:"use_more_always";b:0;s:12:"link_display";s:26:"commons_home_featured_page";s:8:"link_url";s:12:"page/newblog";s:12:"style_plugin";s:4:"grid";s:13:"style_options";a:2:{s:17:"row_class_special";b:0;s:7:"columns";s:1:"2";}s:10:"row_plugin";s:6:"fields";s:6:"fields";a:6:{s:9:"view_node";a:4:{s:2:"id";s:9:"view_node";s:5:"table";s:17:"views_entity_node";s:5:"field";s:9:"view_node";s:7:"exclude";b:1;}s:4:"path";a:4:{s:2:"id";s:4:"path";s:5:"table";s:4:"node";s:5:"field";s:4:"path";s:7:"exclude";b:1;}s:11:"field_image";a:10:{s:2:"id";s:11:"field_image";s:5:"table";s:22:"field_data_field_image";s:5:"field";s:11:"field_image";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:5:"empty";s:103:"<img src="/sites/default/files/user-Alberto/ER_featured_image.jpg" style="width:319px;height:189px;" />";s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:8:"featured";s:10:"image_link";s:7:"content";}s:10:"group_rows";b:0;s:12:"delta_offset";s:1:"0";}s:5:"title";a:8:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:12:"element_type";s:2:"h3";s:13:"element_class";s:11:"type-[type]";s:19:"element_label_colon";b:0;}s:13:"comment_count";a:7:{s:2:"id";s:13:"comment_count";s:5:"table";s:23:"node_comment_statistics";s:5:"field";s:13:"comment_count";s:7:"exclude";b:1;s:13:"format_plural";b:1;s:22:"format_plural_singular";s:9:"1 comment";s:20:"format_plural_plural";s:15:"@count comments";}s:6:"name_1";a:5:{s:2:"id";s:6:"name_1";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:2:"by";}}s:7:"filters";a:3:{s:6:"status";a:4:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";s:1:"1";}s:3:"gid";a:4:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:5:"value";a:1:{s:5:"value";s:3:"366";}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"post";s:4:"post";}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_2";s:13:"display_title";s:15:"New blog layout";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
    unset($data['commons_featured']->display['default']->display_options['fields']['capacity_used']);
    unset($data['commons_featured']->display['default']->display_options['fields']['comment_count']);
    unset($data['commons_featured']->display['default']->display_options['fields']['field_address']);
    unset($data['commons_featured']->display['default']->display_options['fields']['field_date']);
    unset($data['commons_featured']->display['default']->display_options['fields']['type']);
    unset($data['commons_featured']->display['default']->display_options['filters']['promote']);
  }
  if (isset($data['commons_follow_node'])) {
    unset($data['commons_follow_node']->display['default']->display_options['filters']['type']['value']);
  }
  if (isset($data['commons_follow_user_followers'])) {
    $data['commons_follow_user_followers']->display['default']->display_options['fields']['picture']['empty'] = '<a href="/user/[uid]"><img typeof="foaf:Image" class="image-style-50x50" src="https://edgeryders.eu/sites/default/files/default-user-pic.jpg" width="50" height="50" alt=""></a>'; /* WAS: '' */
    $data['commons_follow_user_followers']->display['default']->display_options['fields']['uid'] = array(
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'uid',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
      'link_to_user' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['commons_follow_user_following'])) {
    $data['commons_follow_user_following']->display['default']->display_options['fields']['picture']['empty'] = '<a href="/user/[uid]"><img typeof="foaf:Image" class="image-style-50x50" src="https://edgeryders.eu/sites/default/files/default-user-pic.jpg" width="50" height="50" alt=""></a>'; /* WAS: '' */
    $data['commons_follow_user_following']->display['default']->display_options['fields']['uid'] = array(
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
      'link_to_user' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['row_options']);
  }
  if (isset($data['glossary'])) {
    $data['glossary']->display['attachment']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['summary_options']['inline'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['inherit_arguments'] = FALSE; /* WAS: 0 */
    $data['glossary']->display['default']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['glossary']->display['attachment']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['glossary']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['glossary']->display['default']->display_options['style_options']['override']);
    unset($data['glossary']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['media_default'])) {
    unset($data['media_default']->display['default']->display_options['fields']['filename']['link_to_file']);
  }
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
  }
  if (isset($data['tracker'])) {
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['arguments']['uid_touch']['title_enable'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['fields']['timestamp']['comments'] = TRUE; /* WAS: 1 */
    $data['tracker']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['tracker']->display['default']->display_options['fields']['new_comments']['link_to_comment']);
    unset($data['tracker']->display['default']->display_options['fields']['timestamp']['link_to_node']);
    unset($data['tracker']->display['default']->display_options['style_options']['override']);
  }

  /**
   * Remove group search function
   * https://edgeryders.eu/en/edgeryders-dev/task-5800
   */
  if (isset($data['commons_groups_directory'])) {
    unset($data['commons_groups_directory']->display['default']->display_options['filters']['keys']['exposed']);
  }
}

