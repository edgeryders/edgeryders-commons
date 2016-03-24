<?php
/**
 * @file
 * edgeryders_challenges.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function edgeryders_challenges_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_34809154-e381-4873-b46b-9b1d0b19e119';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Type: Challenge Chain',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'challenge_chain' => 'challenge_chain',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ea78f4e1-e077-474c-a1d4-4b33ff329471';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-10b9fc48-87eb-4433-b9ed-dea843b0a293';
    $pane->panel = 'one_main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '10b9fc48-87eb-4433-b9ed-dea843b0a293';
    $display->content['new-10b9fc48-87eb-4433-b9ed-dea843b0a293'] = $pane;
    $display->panels['one_main'][0] = 'new-10b9fc48-87eb-4433-b9ed-dea843b0a293';
    $pane = new stdClass();
    $pane->pid = 'new-0be1aee5-7115-4b81-b27e-18c04fb37f6f';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'challenge_responses-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'og_challenge_ref_target_id' => '%node:featured_challenge',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0be1aee5-7115-4b81-b27e-18c04fb37f6f';
    $display->content['new-0be1aee5-7115-4b81-b27e-18c04fb37f6f'] = $pane;
    $display->panels['one_main'][1] = 'new-0be1aee5-7115-4b81-b27e-18c04fb37f6f';
    $pane = new stdClass();
    $pane->pid = 'new-0eb99a94-3ba3-4152-ae6d-7910c5987043';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0eb99a94-3ba3-4152-ae6d-7910c5987043';
    $display->content['new-0eb99a94-3ba3-4152-ae6d-7910c5987043'] = $pane;
    $display->panels['one_main'][2] = 'new-0eb99a94-3ba3-4152-ae6d-7910c5987043';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_34809154-e381-4873-b46b-9b1d0b19e119'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_632e4aeb-34c0-44a2-b4fd-2390ff1b0ba6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Type: Challenge Response',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'challenge_response' => 'challenge_response',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ff4879d8-14bd-46b6-9d04-aeb4b720ccb5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b00d490-fbc9-48c1-9765-84f3371326b1';
    $pane->panel = 'one_main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b00d490-fbc9-48c1-9765-84f3371326b1';
    $display->content['new-7b00d490-fbc9-48c1-9765-84f3371326b1'] = $pane;
    $display->panels['one_main'][0] = 'new-7b00d490-fbc9-48c1-9765-84f3371326b1';
    $pane = new stdClass();
    $pane->pid = 'new-fa93a54f-de1f-4a3d-8af6-36bff2db878c';
    $pane->panel = 'one_main';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'commons-pod commons-pod-comments',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa93a54f-de1f-4a3d-8af6-36bff2db878c';
    $display->content['new-fa93a54f-de1f-4a3d-8af6-36bff2db878c'] = $pane;
    $display->panels['one_main'][1] = 'new-fa93a54f-de1f-4a3d-8af6-36bff2db878c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_632e4aeb-34c0-44a2-b4fd-2390ff1b0ba6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_f0608212-2d50-449e-bba6-98b53a619e62';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Type: Challenge',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'challenge' => 'challenge',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '338f16f0-c81c-459c-bd0c-12b4f7424b7d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b6ca85ef-1d75-4b96-962e-fb8a6ebcd143';
    $pane->panel = 'one_main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b6ca85ef-1d75-4b96-962e-fb8a6ebcd143';
    $display->content['new-b6ca85ef-1d75-4b96-962e-fb8a6ebcd143'] = $pane;
    $display->panels['one_main'][0] = 'new-b6ca85ef-1d75-4b96-962e-fb8a6ebcd143';
    $pane = new stdClass();
    $pane->pid = 'new-7c35a4ac-227c-44de-96fc-f055b146b5ed';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'challenge_responses-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'arguments' => array(
        'og_challenge_ref_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c35a4ac-227c-44de-96fc-f055b146b5ed';
    $display->content['new-7c35a4ac-227c-44de-96fc-f055b146b5ed'] = $pane;
    $display->panels['one_main'][1] = 'new-7c35a4ac-227c-44de-96fc-f055b146b5ed';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_f0608212-2d50-449e-bba6-98b53a619e62'] = $handler;

  return $export;
}
