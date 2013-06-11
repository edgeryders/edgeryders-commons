<?php

/**
 * Implements hook_views_default_views().
 */
function casetracker_views_default_views() {
  $list = array(
    'casetracker_project_options',
    'casetracker_project_cases',
    'casetracker_assignee_options',
  );
  $views = array();
  foreach ($list as $view_name) {
    $view = call_user_func('_view_' . $view_name);
    $views[$view->name] = $view;
  }
  return $views;
}

function _view_casetracker_project_options() {
  $view = new view;
  $view->name = 'casetracker_project_options';
  $view->description = 'Case Tracker > Project options query builder';
  $view->tag = 'casetracker';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
      'nid' => array(
        'label' => 'Nid',
        'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'title' => array(
      'order' => 'ASC',
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
  ));

  // Add project node types from stored variable
  $projects = array();
  foreach (variable_get('casetracker_project_node_types', array('casetracker_basic_project')) as $type) {
    $projects[$type] = $type;
  }

  $filters = array(
    'status' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => $projects,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  );
  $handler->override_option('filters', $filters);
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'access content',
  ));
  $handler->override_option('items_per_page', 0);

//dpm($view);
  return $view;
}

function _view_casetracker_assignee_options() {
  $view = new view;
  $view->name = 'casetracker_assignee_options';
  $view->description = 'Case tracker >  User options query builder';
  $view->tag = 'casetracker';
  $view->view_php = '';
  $view->base_table = 'users';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'name' => array(
      'label' => 'Name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_user' => 0,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
    ),
    'uid' => array(
      'label' => 'Uid',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_user' => 0,
      'exclude' => 0,
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'name' => array(
      'order' => 'ASC',
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'users',
      'field' => 'status',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'access content',
  ));
  $handler->override_option('items_per_page', 0);

  return $view;
}

function _view_casetracker_project_cases() {
  $view = new view;
  $view->name = 'casetracker_project_cases';
  $view->description = 'Case Tracker > Cases by project page';
  $view->tag = 'casetracker';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Cases';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'case_number' => 'case_number',
    'title' => 'title',
    'last_updated' => 'last_updated',
    'case_priority_id' => 'case_priority_id',
    'case_status_id' => 'case_status_id',
    'case_type_id' => 'case_type_id',
    'assign_to' => 'assign_to',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'case_number' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'last_updated' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'case_priority_id' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'case_status_id' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'case_type_id' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'assign_to' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Relationship: Case Tracker: Assigned to */
  $handler->display->display_options['relationships']['assign_to']['id'] = 'assign_to';
  $handler->display->display_options['relationships']['assign_to']['table'] = 'casetracker_case';
  $handler->display->display_options['relationships']['assign_to']['field'] = 'assign_to';
  $handler->display->display_options['relationships']['assign_to']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Last updated';
  $handler->display->display_options['fields']['last_updated']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['last_updated']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['last_updated']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['last_updated']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['last_updated']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['last_updated']['alter']['html'] = 0;
  /* Field: Case Tracker: Case priority */
  $handler->display->display_options['fields']['case_priority_id']['id'] = 'case_priority_id';
  $handler->display->display_options['fields']['case_priority_id']['table'] = 'casetracker_case';
  $handler->display->display_options['fields']['case_priority_id']['field'] = 'case_priority_id';
  $handler->display->display_options['fields']['case_priority_id']['label'] = 'Priority';
  $handler->display->display_options['fields']['case_priority_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['case_priority_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['case_priority_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['case_priority_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['case_priority_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['case_priority_id']['alter']['html'] = 0;
  /* Field: Case Tracker: Case status */
  $handler->display->display_options['fields']['case_status_id']['id'] = 'case_status_id';
  $handler->display->display_options['fields']['case_status_id']['table'] = 'casetracker_case';
  $handler->display->display_options['fields']['case_status_id']['field'] = 'case_status_id';
  $handler->display->display_options['fields']['case_status_id']['label'] = 'Status';
  $handler->display->display_options['fields']['case_status_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['case_status_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['case_status_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['case_status_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['case_status_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['case_status_id']['alter']['html'] = 0;
  /* Field: Case Tracker: Case type */
  $handler->display->display_options['fields']['case_type_id']['id'] = 'case_type_id';
  $handler->display->display_options['fields']['case_type_id']['table'] = 'casetracker_case';
  $handler->display->display_options['fields']['case_type_id']['field'] = 'case_type_id';
  $handler->display->display_options['fields']['case_type_id']['label'] = 'Type';
  $handler->display->display_options['fields']['case_type_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['case_type_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['case_type_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['case_type_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['case_type_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['case_type_id']['alter']['html'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'assign_to';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['empty'] = 'Unassigned';
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Sort criterion: Content: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Case Tracker case */
  $handler->display->display_options['filters']['case']['id'] = 'case';
  $handler->display->display_options['filters']['case']['table'] = 'node';
  $handler->display->display_options['filters']['case']['field'] = 'case';
  $handler->display->display_options['filters']['case']['group'] = '0';
  $handler->display->display_options['filters']['case']['expose']['operator'] = FALSE;
  /* Filter criterion: Case Tracker: Project */
  $handler->display->display_options['filters']['pid']['id'] = 'pid';
  $handler->display->display_options['filters']['pid']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['pid']['field'] = 'pid';
  $handler->display->display_options['filters']['pid']['group'] = '0';
  $handler->display->display_options['filters']['pid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['pid']['expose']['operator_id'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['pid']['expose']['operator'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['identifier'] = 'pid';
  $handler->display->display_options['filters']['pid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['pid']['reduce_duplicates'] = 0;
  /* Filter criterion: Case Tracker: Case type */
  $handler->display->display_options['filters']['case_type_id']['id'] = 'case_type_id';
  $handler->display->display_options['filters']['case_type_id']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['case_type_id']['field'] = 'case_type_id';
  $handler->display->display_options['filters']['case_type_id']['group'] = '0';
  $handler->display->display_options['filters']['case_type_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['case_type_id']['expose']['operator_id'] = 'case_type_id_op';
  $handler->display->display_options['filters']['case_type_id']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['case_type_id']['expose']['operator'] = 'case_type_id_op';
  $handler->display->display_options['filters']['case_type_id']['expose']['identifier'] = 'case_type_id';
  $handler->display->display_options['filters']['case_type_id']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['case_type_id']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['case_type_id']['reduce_duplicates'] = 0;
  /* Filter criterion: Case Tracker: Case priority */
  $handler->display->display_options['filters']['case_priority_id']['id'] = 'case_priority_id';
  $handler->display->display_options['filters']['case_priority_id']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['case_priority_id']['field'] = 'case_priority_id';
  $handler->display->display_options['filters']['case_priority_id']['group'] = '0';
  $handler->display->display_options['filters']['case_priority_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['case_priority_id']['expose']['operator_id'] = 'case_priority_id_op';
  $handler->display->display_options['filters']['case_priority_id']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['case_priority_id']['expose']['operator'] = 'case_priority_id_op';
  $handler->display->display_options['filters']['case_priority_id']['expose']['identifier'] = 'case_priority_id';
  $handler->display->display_options['filters']['case_priority_id']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['case_priority_id']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['case_priority_id']['reduce_duplicates'] = 0;
  /* Filter criterion: Case Tracker: Case status */
  $handler->display->display_options['filters']['case_status_id']['id'] = 'case_status_id';
  $handler->display->display_options['filters']['case_status_id']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['case_status_id']['field'] = 'case_status_id';
  $handler->display->display_options['filters']['case_status_id']['group'] = '0';
  $handler->display->display_options['filters']['case_status_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['case_status_id']['expose']['operator_id'] = 'case_status_id_op';
  $handler->display->display_options['filters']['case_status_id']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['case_status_id']['expose']['operator'] = 'case_status_id_op';
  $handler->display->display_options['filters']['case_status_id']['expose']['identifier'] = 'case_status_id';
  $handler->display->display_options['filters']['case_status_id']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['case_status_id']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['case_status_id']['reduce_duplicates'] = 0;

  /* Display: Cases */
  $handler = $view->new_display('page', 'Cases', 'page_1');
  $handler->display->display_options['path'] = 'casetracker';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Case Tracker';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: My cases */
  $handler = $view->new_display('page', 'My cases', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My cases';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Last updated';
  $handler->display->display_options['fields']['last_updated']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['last_updated']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['last_updated']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['last_updated']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['last_updated']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['last_updated']['alter']['html'] = 0;
  /* Field: Case Tracker: Case priority */
  $handler->display->display_options['fields']['case_priority_id']['id'] = 'case_priority_id';
  $handler->display->display_options['fields']['case_priority_id']['table'] = 'casetracker_case';
  $handler->display->display_options['fields']['case_priority_id']['field'] = 'case_priority_id';
  $handler->display->display_options['fields']['case_priority_id']['label'] = 'Priority';
  $handler->display->display_options['fields']['case_priority_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['case_priority_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['case_priority_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['case_priority_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['case_priority_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['case_priority_id']['alter']['html'] = 0;
  /* Field: Case Tracker: Case status */
  $handler->display->display_options['fields']['case_status_id']['id'] = 'case_status_id';
  $handler->display->display_options['fields']['case_status_id']['table'] = 'casetracker_case';
  $handler->display->display_options['fields']['case_status_id']['field'] = 'case_status_id';
  $handler->display->display_options['fields']['case_status_id']['label'] = 'Status';
  $handler->display->display_options['fields']['case_status_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['case_status_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['case_status_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['case_status_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['case_status_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['case_status_id']['alter']['html'] = 0;
  /* Field: Case Tracker: Case type */
  $handler->display->display_options['fields']['case_type_id']['id'] = 'case_type_id';
  $handler->display->display_options['fields']['case_type_id']['table'] = 'casetracker_case';
  $handler->display->display_options['fields']['case_type_id']['field'] = 'case_type_id';
  $handler->display->display_options['fields']['case_type_id']['label'] = 'Type';
  $handler->display->display_options['fields']['case_type_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['case_type_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['case_type_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['case_type_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['case_type_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['case_type_id']['alter']['html'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Case Tracker case */
  $handler->display->display_options['filters']['case']['id'] = 'case';
  $handler->display->display_options['filters']['case']['table'] = 'node';
  $handler->display->display_options['filters']['case']['field'] = 'case';
  /* Filter criterion: Case Tracker: Assigned to */
  $handler->display->display_options['filters']['assign_to']['id'] = 'assign_to';
  $handler->display->display_options['filters']['assign_to']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['assign_to']['field'] = 'assign_to';
  $handler->display->display_options['filters']['assign_to']['value'] = array(
    '***CURRENT_USER***' => '***CURRENT_USER***',
  );
  $handler->display->display_options['filters']['assign_to']['group'] = '0';
  $handler->display->display_options['filters']['assign_to']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['assign_to']['reduce_duplicates'] = 0;
  /* Filter criterion: Case Tracker: Project */
  $handler->display->display_options['filters']['pid']['id'] = 'pid';
  $handler->display->display_options['filters']['pid']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['pid']['field'] = 'pid';
  $handler->display->display_options['filters']['pid']['group'] = '0';
  $handler->display->display_options['filters']['pid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['pid']['expose']['operator_id'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['pid']['expose']['operator'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['identifier'] = 'pid';
  $handler->display->display_options['filters']['pid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['pid']['reduce_duplicates'] = 0;
  /* Filter criterion: Case Tracker: Case type */
  $handler->display->display_options['filters']['case_type_id']['id'] = 'case_type_id';
  $handler->display->display_options['filters']['case_type_id']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['case_type_id']['field'] = 'case_type_id';
  $handler->display->display_options['filters']['case_type_id']['group'] = '0';
  $handler->display->display_options['filters']['case_type_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['case_type_id']['expose']['operator_id'] = 'case_type_id_op';
  $handler->display->display_options['filters']['case_type_id']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['case_type_id']['expose']['operator'] = 'case_type_id_op';
  $handler->display->display_options['filters']['case_type_id']['expose']['identifier'] = 'case_type_id';
  $handler->display->display_options['filters']['case_type_id']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['case_type_id']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['case_type_id']['reduce_duplicates'] = 0;
  /* Filter criterion: Case Tracker: Case priority */
  $handler->display->display_options['filters']['case_priority_id']['id'] = 'case_priority_id';
  $handler->display->display_options['filters']['case_priority_id']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['case_priority_id']['field'] = 'case_priority_id';
  $handler->display->display_options['filters']['case_priority_id']['group'] = '0';
  $handler->display->display_options['filters']['case_priority_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['case_priority_id']['expose']['operator_id'] = 'case_priority_id_op';
  $handler->display->display_options['filters']['case_priority_id']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['case_priority_id']['expose']['operator'] = 'case_priority_id_op';
  $handler->display->display_options['filters']['case_priority_id']['expose']['identifier'] = 'case_priority_id';
  $handler->display->display_options['filters']['case_priority_id']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['case_priority_id']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['case_priority_id']['reduce_duplicates'] = 0;
  /* Filter criterion: Case Tracker: Case status */
  $handler->display->display_options['filters']['case_status_id']['id'] = 'case_status_id';
  $handler->display->display_options['filters']['case_status_id']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['case_status_id']['field'] = 'case_status_id';
  $handler->display->display_options['filters']['case_status_id']['group'] = '0';
  $handler->display->display_options['filters']['case_status_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['case_status_id']['expose']['operator_id'] = 'case_status_id_op';
  $handler->display->display_options['filters']['case_status_id']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['case_status_id']['expose']['operator'] = 'case_status_id_op';
  $handler->display->display_options['filters']['case_status_id']['expose']['identifier'] = 'case_status_id';
  $handler->display->display_options['filters']['case_status_id']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['case_status_id']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['case_status_id']['reduce_duplicates'] = 0;
  $handler->display->display_options['path'] = 'casetracker/my';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My cases';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Projects */
  $handler = $view->new_display('page', 'Projects', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Case Tracker: Project: Case count */
  $handler->display->display_options['fields']['case_count']['id'] = 'case_count';
  $handler->display->display_options['fields']['case_count']['table'] = 'casetracker_case';
  $handler->display->display_options['fields']['case_count']['field'] = 'case_count';
  $handler->display->display_options['fields']['case_count']['label'] = 'Amount of cases';
  $handler->display->display_options['fields']['case_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['case_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['case_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['case_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['case_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['case_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['case_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['case_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['case_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['case_count']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['case_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['case_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['case_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['case_count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['case_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['case_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['case_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['case_count']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['case_count']['type'] = '0';
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Last updated';
  $handler->display->display_options['fields']['last_updated']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['last_updated']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['last_updated']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['last_updated']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['last_updated']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['last_updated']['alter']['html'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Case Tracker project */
  $handler->display->display_options['filters']['project']['id'] = 'project';
  $handler->display->display_options['filters']['project']['table'] = 'node';
  $handler->display->display_options['filters']['project']['field'] = 'project';
  $handler->display->display_options['filters']['project']['group'] = '0';
  $handler->display->display_options['filters']['project']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'casetracker/projects';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Default tab */
  $handler = $view->new_display('page', 'Default tab', 'page_4');
  $handler->display->display_options['path'] = 'casetracker/cases';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Cases';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['title'] = 'Casetracker';
  $handler->display->display_options['tab_options']['weight'] = '0';

  return $view;
}

