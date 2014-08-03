<?php
/**
 * @file
 * commons_tasks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function commons_tasks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'commons_bw_tasks';
  $view->description = 'List of commons_task nodes within the Commons Group Browsing Widget.';
  $view->tag = 'edgeryders';
  $view->base_table = 'node';
  $view->human_name = 'Commons Browsing Widget - Tasks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'lite';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '12';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'create_content_homemade_widget:default';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No tasks have been added to this group.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'most recent';
  /* Sort criterion: Content: Radioactivity (field_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['id'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['table'] = 'field_data_field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['field'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['expose']['label'] = 'most active';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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
    'task' => 'task',
  );

  /* Display: Content pane dashboard */
  $handler = $view->new_display('panel_pane', 'Content pane dashboard', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pick up a task';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h2><a href ="/casetracker">Browse & search tasks</a></h2>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = ' by [name]';
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'most recent';
  /* Sort criterion: Content: Radioactivity (field_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['id'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['table'] = 'field_data_field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['field'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['expose']['label'] = 'most active';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Block dashboard */
  $handler = $view->new_display('block', 'Block dashboard', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pick up a task';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h2><a href ="/casetracker">Browse & search tasks</a></h2>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'most recent';
  /* Sort criterion: Content: Radioactivity (field_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['id'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['table'] = 'field_data_field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['field'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['expose']['label'] = 'most active';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'task' => 'task',
  );
  /* Filter criterion: Case Tracker: Assigned to */
  $handler->display->display_options['filters']['assign_to']['id'] = 'assign_to';
  $handler->display->display_options['filters']['assign_to']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['assign_to']['field'] = 'assign_to';
  $handler->display->display_options['filters']['assign_to']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Case Tracker: Case status */
  $handler->display->display_options['filters']['case_status_id']['id'] = 'case_status_id';
  $handler->display->display_options['filters']['case_status_id']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['case_status_id']['field'] = 'case_status_id';
  $handler->display->display_options['filters']['case_status_id']['operator'] = 'not';
  $handler->display->display_options['filters']['case_status_id']['value'] = array(
    8 => '8',
    5 => '5',
  );
  $translatables['commons_bw_tasks'] = array(
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
    t('No tasks have been added to this group.'),
    t('OG membership from node'),
    t('most recent'),
    t('most active'),
    t('All'),
    t('Content pane dashboard'),
    t('Pick up a task'),
    t('<h2><a href ="/casetracker">Browse & search tasks</a></h2>'),
    t('author'),
    t(' by [name]'),
    t('View panes'),
    t('Block dashboard'),
  );
  $export['commons_bw_tasks'] = $view;

  $view = new view();
  $view->name = 'commons_tasks_casetracker_project_cases';
  $view->description = 'Case Tracker > Cases by project page';
  $view->tag = 'casetracker';
  $view->base_table = 'node';
  $view->human_name = 'commons_tasks_casetracker_project_cases';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Cases';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
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
  /* Relationship: Case Tracker: Assigned to */
  $handler->display->display_options['relationships']['assign_to']['id'] = 'assign_to';
  $handler->display->display_options['relationships']['assign_to']['table'] = 'casetracker_case';
  $handler->display->display_options['relationships']['assign_to']['field'] = 'assign_to';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Last updated';
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_priority']['id'] = 'field_priority';
  $handler->display->display_options['fields']['field_priority']['table'] = 'field_data_field_priority';
  $handler->display->display_options['fields']['field_priority']['field'] = 'field_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_taskstatus']['id'] = 'field_taskstatus';
  $handler->display->display_options['fields']['field_taskstatus']['table'] = 'field_data_field_taskstatus';
  $handler->display->display_options['fields']['field_taskstatus']['field'] = 'field_taskstatus';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'assign_to';
  $handler->display->display_options['fields']['name']['empty'] = 'Unassigned';
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
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Case Tracker case */
  $handler->display->display_options['filters']['case']['id'] = 'case';
  $handler->display->display_options['filters']['case']['table'] = 'node';
  $handler->display->display_options['filters']['case']['field'] = 'case';
  $handler->display->display_options['filters']['case']['group'] = 1;
  $handler->display->display_options['filters']['case']['expose']['operator'] = FALSE;
  /* Filter criterion: Case Tracker: Project */
  $handler->display->display_options['filters']['pid']['id'] = 'pid';
  $handler->display->display_options['filters']['pid']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['pid']['field'] = 'pid';
  $handler->display->display_options['filters']['pid']['group'] = 1;
  $handler->display->display_options['filters']['pid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['pid']['expose']['operator_id'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['pid']['expose']['operator'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['identifier'] = 'pid';
  /* Filter criterion: Content: Status (field_taskstatus) */
  $handler->display->display_options['filters']['field_taskstatus_value']['id'] = 'field_taskstatus_value';
  $handler->display->display_options['filters']['field_taskstatus_value']['table'] = 'field_data_field_taskstatus';
  $handler->display->display_options['filters']['field_taskstatus_value']['field'] = 'field_taskstatus_value';
  $handler->display->display_options['filters']['field_taskstatus_value']['group'] = 1;
  $handler->display->display_options['filters']['field_taskstatus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taskstatus_value']['expose']['operator_id'] = 'field_taskstatus_value_op';
  $handler->display->display_options['filters']['field_taskstatus_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_taskstatus_value']['expose']['operator'] = 'field_taskstatus_value_op';
  $handler->display->display_options['filters']['field_taskstatus_value']['expose']['identifier'] = 'field_taskstatus_value';
  $handler->display->display_options['filters']['field_taskstatus_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Priority (field_priority) */
  $handler->display->display_options['filters']['field_priority_value']['id'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['table'] = 'field_data_field_priority';
  $handler->display->display_options['filters']['field_priority_value']['field'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['group'] = 1;
  $handler->display->display_options['filters']['field_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_priority_value']['expose']['operator_id'] = 'field_priority_value_op';
  $handler->display->display_options['filters']['field_priority_value']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_priority_value']['expose']['operator'] = 'field_priority_value_op';
  $handler->display->display_options['filters']['field_priority_value']['expose']['identifier'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

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
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_priority']['id'] = 'field_priority';
  $handler->display->display_options['fields']['field_priority']['table'] = 'field_data_field_priority';
  $handler->display->display_options['fields']['field_priority']['field'] = 'field_priority';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_taskstatus']['id'] = 'field_taskstatus';
  $handler->display->display_options['fields']['field_taskstatus']['table'] = 'field_data_field_taskstatus';
  $handler->display->display_options['fields']['field_taskstatus']['field'] = 'field_taskstatus';
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Last updated';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Case Tracker case */
  $handler->display->display_options['filters']['case']['id'] = 'case';
  $handler->display->display_options['filters']['case']['table'] = 'node';
  $handler->display->display_options['filters']['case']['field'] = 'case';
  $handler->display->display_options['filters']['case']['group'] = 1;
  /* Filter criterion: Case Tracker: Project */
  $handler->display->display_options['filters']['pid']['id'] = 'pid';
  $handler->display->display_options['filters']['pid']['table'] = 'casetracker_case';
  $handler->display->display_options['filters']['pid']['field'] = 'pid';
  $handler->display->display_options['filters']['pid']['group'] = 1;
  $handler->display->display_options['filters']['pid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['pid']['expose']['operator_id'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['pid']['expose']['operator'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['identifier'] = 'pid';
  /* Filter criterion: Content: Status (field_taskstatus) */
  $handler->display->display_options['filters']['field_taskstatus_value']['id'] = 'field_taskstatus_value';
  $handler->display->display_options['filters']['field_taskstatus_value']['table'] = 'field_data_field_taskstatus';
  $handler->display->display_options['filters']['field_taskstatus_value']['field'] = 'field_taskstatus_value';
  $handler->display->display_options['filters']['field_taskstatus_value']['group'] = 1;
  $handler->display->display_options['filters']['field_taskstatus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taskstatus_value']['expose']['operator_id'] = 'field_taskstatus_value_op';
  $handler->display->display_options['filters']['field_taskstatus_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_taskstatus_value']['expose']['operator'] = 'field_taskstatus_value_op';
  $handler->display->display_options['filters']['field_taskstatus_value']['expose']['identifier'] = 'field_taskstatus_value';
  $handler->display->display_options['filters']['field_taskstatus_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Priority (field_priority) */
  $handler->display->display_options['filters']['field_priority_value']['id'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['table'] = 'field_data_field_priority';
  $handler->display->display_options['filters']['field_priority_value']['field'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['group'] = 1;
  $handler->display->display_options['filters']['field_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_priority_value']['expose']['operator_id'] = 'field_priority_value_op';
  $handler->display->display_options['filters']['field_priority_value']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_priority_value']['expose']['operator'] = 'field_priority_value_op';
  $handler->display->display_options['filters']['field_priority_value']['expose']['identifier'] = 'field_priority_value';
  $handler->display->display_options['filters']['field_priority_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Assign to (field_assignee) */
  $handler->display->display_options['filters']['field_assignee_target_id']['id'] = 'field_assignee_target_id';
  $handler->display->display_options['filters']['field_assignee_target_id']['table'] = 'field_data_field_assignee';
  $handler->display->display_options['filters']['field_assignee_target_id']['field'] = 'field_assignee_target_id';
  $handler->display->display_options['filters']['field_assignee_target_id']['expose']['operator_id'] = 'field_assignee_target_id_op';
  $handler->display->display_options['filters']['field_assignee_target_id']['expose']['label'] = 'Assign to (field_assignee)';
  $handler->display->display_options['filters']['field_assignee_target_id']['expose']['operator'] = 'field_assignee_target_id_op';
  $handler->display->display_options['filters']['field_assignee_target_id']['expose']['identifier'] = 'field_assignee_target_id';
  $handler->display->display_options['filters']['field_assignee_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
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
  /* Field: Case Tracker: Project: Case count */
  $handler->display->display_options['fields']['case_count']['id'] = 'case_count';
  $handler->display->display_options['fields']['case_count']['table'] = 'casetracker_case';
  $handler->display->display_options['fields']['case_count']['field'] = 'case_count';
  $handler->display->display_options['fields']['case_count']['label'] = 'Amount of cases';
  $handler->display->display_options['fields']['case_count']['type'] = '0';
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Last updated';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
  $translatables['commons_tasks_casetracker_project_cases'] = array(
    t('Defaults'),
    t('Cases'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Assigned to'),
    t('Title'),
    t('Last updated'),
    t('Priority'),
    t('Status'),
    t('Name'),
    t('Unassigned'),
    t('Project'),
    t('My cases'),
    t('Assign to (field_assignee)'),
    t('Projects'),
    t('Amount of cases'),
    t('Default tab'),
  );
  $export['commons_tasks_casetracker_project_cases'] = $view;

  return $export;
}
