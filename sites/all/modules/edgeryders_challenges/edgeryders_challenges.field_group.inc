<?php
/**
 * @file
 * edgeryders_challenges.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function edgeryders_challenges_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|challenge_response|form';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'challenge_response';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_step_3';
  $field_group->data = array(
    'label' => 'Who would you like to read this?',
    'weight' => '20',
    'children' => array(
      0 => 'field_audience_collaborators',
      1 => 'field_audience_multiplicators',
      2 => 'field_audience_supporters',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Who would you like to read this?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-audience field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_audience|node|challenge_response|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comments|node|challenge_response|form';
  $field_group->group_name = 'group_comments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'challenge_response';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_step_3';
  $field_group->data = array(
    'label' => 'Comments',
    'weight' => '21',
    'children' => array(
      0 => 'field_request_experiences',
      1 => 'field_request_help',
      2 => 'field_request_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Comments',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-comments field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_comments|node|challenge_response|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_infobox|node|challenge_response|default';
  $field_group->group_name = 'group_infobox';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'challenge_response';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infobox',
    'weight' => '2',
    'children' => array(
      0 => 'field_channels',
      1 => 'field_response_question',
      2 => 'field_response_solution',
      3 => 'field_response_problem',
      4 => 'og_challenge_ref',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Infobox',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-infobox field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_infobox|node|challenge_response|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multipages|node|challenge_response|form';
  $field_group->group_name = 'group_multipages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'challenge_response';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mulltipage Group',
    'weight' => '2',
    'children' => array(
      0 => 'group_step_3',
      1 => 'group_step_1',
      2 => 'group_step_2',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'label' => 'Mulltipage Group',
      'instance_settings' => array(
        'classes' => 'group-multipages field-group-multipage-group',
        'page_header' => '1',
        'page_counter' => '0',
        'move_button' => '1',
        'move_additional' => '1',
      ),
    ),
  );
  $field_groups['group_multipages|node|challenge_response|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_1|node|challenge_response|form';
  $field_group->group_name = 'group_step_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'challenge_response';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multipages';
  $field_group->data = array(
    'label' => 'Submit your Story – 1/3',
    'weight' => '11',
    'children' => array(
      0 => 'title_field',
      1 => 'field_response_image',
      2 => 'body',
      3 => 'og_challenge_ref',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => 'Submit your Story – 1/3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-step-1',
        'description' => '',
      ),
      'formatter' => 'start',
    ),
  );
  $field_groups['group_step_1|node|challenge_response|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_2|node|challenge_response|form';
  $field_group->group_name = 'group_step_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'challenge_response';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multipages';
  $field_group->data = array(
    'label' => 'Submit your Story – 2/3',
    'weight' => '13',
    'children' => array(
      0 => 'field_channels',
      1 => 'group_summary',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => 'Submit your Story – 2/3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-step-2',
        'description' => '',
      ),
      'formatter' => 'no-start',
    ),
  );
  $field_groups['group_step_2|node|challenge_response|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_3|node|challenge_response|form';
  $field_group->group_name = 'group_step_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'challenge_response';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multipages';
  $field_group->data = array(
    'label' => 'Submit your Story – 3/3',
    'weight' => '15',
    'children' => array(
      0 => 'group_audience',
      1 => 'group_comments',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => 'Submit your Story – 3/3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-step-3',
        'description' => '',
      ),
      'formatter' => 'no-start',
    ),
  );
  $field_groups['group_step_3|node|challenge_response|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary|node|challenge_response|form';
  $field_group->group_name = 'group_summary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'challenge_response';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_step_2';
  $field_group->data = array(
    'label' => 'Summarize main ideas, problems, concepts or solutions presented in your post.',
    'weight' => '4',
    'children' => array(
      0 => 'field_response_question',
      1 => 'field_response_solution',
      2 => 'field_response_problem',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Summarize main ideas, problems, concepts or solutions presented in your post.',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-summary field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_summary|node|challenge_response|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Comments');
  t('Infobox');
  t('Mulltipage Group');
  t('Submit your Story – 1/3');
  t('Submit your Story – 2/3');
  t('Submit your Story – 3/3');
  t('Summarize main ideas, problems, concepts or solutions presented in your post.');
  t('Who would you like to read this?');

  return $field_groups;
}
