<?php
/**
 * @file
 * Contains default views for the Mentions module.
 */

/**
 * Implements hook_views_default_views().
 */
function mentions_views_default_views() {
  $view              = new view();
  $view->name        = 'Mentions';
  $view->description = 'Displays @username style Mentions made in all Nodes and Comments.';
  $view->tag         = '';
  $view->base_table  = 'mentions';
  $view->human_name  = '';
  $view->core        = 0;
  $view->api_version = '3.0';
  $view->disabled    = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler                                                        = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always']           = FALSE;
  $handler->display->display_options['access']['type']            = 'none';
  $handler->display->display_options['cache']['type']             = 'none';
  $handler->display->display_options['query']['type']             = 'views_query';
  $handler->display->display_options['exposed_form']['type']      = 'basic';
  $handler->display->display_options['pager']['type']             = 'none';
  $handler->display->display_options['style_plugin']              = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin']                = 'fields';
  /* Field: Mentions: Entity type */
  $handler->display->display_options['fields']['entity_type']['id']                  = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['table']               = 'mentions';
  $handler->display->display_options['fields']['entity_type']['field']               = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['label']               = '';
  $handler->display->display_options['fields']['entity_type']['exclude']             = TRUE;
  $handler->display->display_options['fields']['entity_type']['element_label_colon'] = FALSE;
  /* Field: Mentions: Entity id */
  $handler->display->display_options['fields']['entity_id']['id']                  = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table']               = 'mentions';
  $handler->display->display_options['fields']['entity_id']['field']               = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['label']               = '';
  $handler->display->display_options['fields']['entity_id']['exclude']             = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['separator']           = '';
  /* Field: Mentions: Title */
  $handler->display->display_options['fields']['title']['id']                  = 'title';
  $handler->display->display_options['fields']['title']['table']               = 'mentions';
  $handler->display->display_options['fields']['title']['field']               = 'title';
  $handler->display->display_options['fields']['title']['label']               = '';
  $handler->display->display_options['fields']['title']['element_type']        = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['empty']               = '[entity_type] [entity_id]';
  $handler->display->display_options['fields']['title']['hide_alter_empty']    = FALSE;
  /* Field: Mentions: Date */
  $handler->display->display_options['fields']['created']['id']                  = 'created';
  $handler->display->display_options['fields']['created']['table']               = 'mentions';
  $handler->display->display_options['fields']['created']['field']               = 'created';
  $handler->display->display_options['fields']['created']['label']               = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text']       = '[created] ago';
  $handler->display->display_options['fields']['created']['date_format']         = 'raw time ago';
  /* Field: Mentions: Author user id */
  $handler->display->display_options['fields']['auid']['id']                  = 'auid';
  $handler->display->display_options['fields']['auid']['table']               = 'mentions';
  $handler->display->display_options['fields']['auid']['field']               = 'auid';
  $handler->display->display_options['fields']['auid']['label']               = '';
  $handler->display->display_options['fields']['auid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['auid']['alter']['text']       = 'by [auid]';
  /* Field: Mentions: Link */
  $handler->display->display_options['fields']['link']['id']    = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'mentions';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  $handler->display->display_options['fields']['link']['label'] = '';
  $handler->display->display_options['fields']['link']['text']  = 'View mention';
  /* Sort criterion: Mentions: Date */
  $handler->display->display_options['sorts']['created']['id']    = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'mentions';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Mentions: Mentioned user id */
  $handler->display->display_options['arguments']['uid']['id']                        = 'uid';
  $handler->display->display_options['arguments']['uid']['table']                     = 'mentions';
  $handler->display->display_options['arguments']['uid']['field']                     = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action']            = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['default_argument_type']     = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['format']         = 'default_summary';
  $handler->display->display_options['arguments']['uid']['specify_validation']        = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type']          = 'user';

  /* Display: Page */
  $handler                                                  = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path']                = 'user/%/mentions';
  $handler->display->display_options['menu']['type']        = 'tab';
  $handler->display->display_options['menu']['title']       = 'Mentions';
  $handler->display->display_options['menu']['description'] = 'Mentions';
  $handler->display->display_options['menu']['weight']      = '0';

  $views[$view->name] = $view;

  return $views;
}
