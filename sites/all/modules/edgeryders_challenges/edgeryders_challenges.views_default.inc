<?php
/**
 * @file
 * edgeryders_challenges.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function edgeryders_challenges_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'challenge_responses';
  $view->description = 'Lists responses to a "Challenge" node that is given as a parameter.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Challenge Responses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '21';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'More';
  $handler->display->display_options['pager']['options']['more_button_empty_text'] = 'That\'s all so far!';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'views-responsive-grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Header image */
  $handler->display->display_options['fields']['field_response_image']['id'] = 'field_response_image';
  $handler->display->display_options['fields']['field_response_image']['table'] = 'field_data_field_response_image';
  $handler->display->display_options['fields']['field_response_image']['field'] = 'field_response_image';
  $handler->display->display_options['fields']['field_response_image']['label'] = '';
  $handler->display->display_options['fields']['field_response_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_response_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_response_image']['settings'] = array(
    'image_style' => 'challenge_response_list',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by ';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'published ';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = 'One comment.';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Challenge (og_challenge_ref) */
  $handler->display->display_options['arguments']['og_challenge_ref_target_id']['id'] = 'og_challenge_ref_target_id';
  $handler->display->display_options['arguments']['og_challenge_ref_target_id']['table'] = 'field_data_og_challenge_ref';
  $handler->display->display_options['arguments']['og_challenge_ref_target_id']['field'] = 'og_challenge_ref_target_id';
  $handler->display->display_options['arguments']['og_challenge_ref_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_challenge_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_challenge_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_challenge_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_challenge_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'challenge_response' => 'challenge_response',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'og_challenge_ref_target_id' => array(
      'type' => 'user',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node ID of the challenge to display',
    ),
  );
  $translatables['challenge_responses'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('More'),
    t('That\'s all so far!'),
    t('author'),
    t('by '),
    t('published '),
    t('.'),
    t(','),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['challenge_responses'] = $view;

  return $export;
}
