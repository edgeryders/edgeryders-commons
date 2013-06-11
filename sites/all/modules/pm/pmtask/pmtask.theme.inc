<?php

/**
 * @file
 * Theme functions for the Project Management Task module.
 */

/**
 * Provides HTML for the project node tasks list.
 */
function theme_pmtask_tasks($form) {
  if (count($form['tasks'])>0 && pmproject_access('update', $form['project']['#value'])) {
    drupal_add_tabledrag('tasks', 'match', 'parent', 'task-parent-nid', 'task-parent-nid', 'task-nid', TRUE);
    drupal_add_tabledrag('tasks', 'order', 'sibling', 'task-weight');
  }

  $header = array();
  $row = array();

  $header = $form['header']['#value'];
  unset($form['header']);

  foreach (element_children($form['tasks']) as $key) {
    $form['tasks'][$key]['task_parent-nid_' . $key]['#attributes']['class'] = 'task-parent-nid';
    $form['tasks'][$key]['task_nid_' . $key]['#attributes']['class'] = 'task-nid';
    $form['tasks'][$key]['task_weight_' . $key]['#attributes']['class'] = 'task-weight';
    $durationunit = $form['tasks'][$key]['task_durationunit_' . $key]['#value'];

    $data = array(
      theme('indentation', $form['tasks'][$key]['task_depth_' . $key]['#value']) . drupal_render($form['tasks'][$key]['task_description_' . $key]),
      drupal_render($form['tasks'][$key]['task_category_' . $key]),
      drupal_render($form['tasks'][$key]['task_status_' . $key]),
      drupal_render($form['tasks'][$key]['task_priority_' . $key]),
      array(
        'data' => sprintf('%.2f', drupal_render($form['tasks'][$key]['task_duration_' . $key])) . ' ' . substr($durationunit, 0, 1),
        'style' => 'text-align: right'),
      drupal_render($form['tasks'][$key]['task_parent-nid_' . $key]) . drupal_render($form['tasks'][$key]['task_nid_' . $key]),
      drupal_render($form['tasks'][$key]['task_weight_' . $key]),
      array(
        'data' => drupal_render($form['tasks'][$key]['task_operations_' . $key]),
        'class' => 'pm_list_operations',
      ),
    );
    if (!pmproject_access('update', $form['project']['#value'])) {
      unset($data[5]);
      unset($data[6]);
    }
    $row['data'] = $data;
    if (pmproject_access('update', $form['project']['#value'])) {
      $row['class'] = empty($row['class']) ? 'draggable' : $row['class'] . ' draggable';
    }
    $rows[] = $row;
  }
  return theme('table', array('header' => $header, 'rows' => $rows));
}

/**
 * Provides HTML for the task node view.
 */
function theme_pmtask_view($variables) {
  $node = $variables['node'];

  drupal_add_css(drupal_get_path('module', 'pm') . '/pm-node.css', 'module');

  $l_pos = 1; // Used to increase the link position number (see issue 814820)

  $node->content['links'] = array(
    '#prefix' => '<div class="pmlinks">',
    '#suffix' => '</div>',
    '#weight' => -25,
  );

//  $node->content['links']['expenses'] = theme('pm_link', 'pmtask', 'pmexpense', $node->nid, $l_pos++);
//  $node->content['links']['notes'] = theme('pm_link', 'pmtask', 'pmnote', $node->nid, $l_pos++);
//  $node->content['links']['tickets'] = theme('pm_link', 'pmtask', 'pmticket', $node->nid, $l_pos++);
//  $node->content['links']['timetrackings'] = theme('pm_link', 'pmtask', 'pmtimetracking', $node->nid, $l_pos++);

  // Code to create invoice auto_add link
  if (module_exists('pminvoice')) {

    $node->content['links']['auto_invoice'] = array(
      '#prefix' => variable_get('pm_icons_display', TRUE) ? '<dt id="pminvoices" class="pmcomponent">' : '<dt class="pmcomponent">',
      '#suffix' => '</dt>',
      '#markup' => theme('pminvoice_autoadd_links', array('label' => $node->nid, 'value' => $node->billable, $node->billed)),
      '#weight' => $l_pos++,
    );
  }

  $node->content['group1'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group1') : -20,
  );

  $node->content['group1']['organization'] = array(
    '#prefix' => '<div class="organization">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Organization'), 'value' => l($node->organization_title, 'node/' . $node->organization_nid))),
    '#weight' => 1,
  );

  $node->content['group1']['project'] = array(
    '#prefix' => '<div class="project">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Project'), 'value' => l($node->project_title, 'node/' . $node->project_nid))),
    '#weight' => 2,
  );

  $node->content['group1']['stepno'] = array(
    '#prefix' => '<div class="stepno">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Step no.'), 'value' => check_plain($node->stepno))),
    '#weight' => 3,
  );

  $node->content['group2'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group2') : -19,
  );

  $node->content['group2']['category'] = array(
    '#prefix' => '<div class="category">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Category'), 'value' => check_plain(pm_attribute_value('Task category', $node->taskcategory)))),
    '#weight' => 1,
  );

  $node->content['group2']['status'] = array(
    '#prefix' => '<div class="pm_status">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Status'), 'value' => check_plain(pm_attribute_value('Task status', $node->taskstatus)))),
    '#weight' => 2,
  );

  $node->content['group2']['priority'] = array(
    '#prefix' => '<div class="priority">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Priority'), 'value' => check_plain(pm_attribute_value('Task priority', $node->taskpriority)))),
    '#weight' => 3,
  );

  $node->content['group5'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group5') : -16,
  );

  $node->content['group5']['assigned'] = array(
    '#prefix' => '<div class="assigned">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Assigned to'), 'value' => l($node->assigned_title, 'node/' . $node->assigned_nid))),
    '#weight' => 2,
  );

  $body = field_get_items('node', $node, 'body');
    if ($body) {
      $node->content['body'] = array(
        '#prefix' => '<div class="pmbody">',
        '#suffix' => '</div>',
        '#markup' => theme('pm_view_item', array('label' => t('Description'), 'value' => $body[0]['safe_value'])),
        '#weight' => 4,
      );
    }

  return $node;
}
