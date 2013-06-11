<?php

/**
 * @file
 * Contains functions to provide the project node tasks tab.
 */

/**
 * Callback for the project node tasks tab.
 */
function pmtask_tasks($project) {
  $breadcrumb = array();
  $breadcrumb[] = l(t('Project Management'), 'pm');
  $breadcrumb[] = l(t('Projects'), 'pm/projects');
  $breadcrumb[] = l(t('Project : !project', array('!project' => $project->title)), 'node/' . $project->nid);
  drupal_set_breadcrumb($breadcrumb);

  $i = new stdClass();
  $i->type = 'pmtask';

  $o = drupal_get_form('pmtask_tasks_filter');

  $params = $_GET;
  $params['organization_nid'] = $project->organization_nid;
  $params['project_nid'] = $project->nid;

  $header = array(
    array(
      'data' => t('Title'),
    ),
    array(
      'data' => t('Category'),
    ),
    array(
      'data' => t('Status'),
    ),
    array(
      'data' => t('Priority'),
    ),
    array(
      'data' => t('Duration'),
      'style' => 'text-align: right;',
    ),
    array(
      'data' => t('Parent'),
    ),
    array(
      'data' => t('Weight'),
    ),
    array(
      'data' => pm_icon_add_node($i, $params),
      'class' => 'pm_list_operations',
    ),
  );

  if (!pmproject_access('update', $project->nid)) {
    unset($header[5]);
    unset($header[6]);
  }

  $where = array();
  $args = array();

  $taskcategory = $_SESSION['pmtask_tasks_filter']['taskcategory'];
  if (!$taskcategory) {
    $category_list = pm_attributes_bydomain('Task category search');
    $taskcategory = $category_list['default'];
    $_SESSION['pmtask_tasks_filter']['taskcategory'] = $taskcategory;
  }
  if ($taskcategory && $taskcategory != '-') {
    $category = split(',', $taskcategory);
    $v = array();
    foreach ($category as $item) $v[] = '%s';
    $where[] = "sta.taskcategory IN ('" . implode("','", $v) . "')";
    foreach ($category as $key => $value) {
      $args[] = $value;
    }
  }

  $taskstatus = $_SESSION['pmtask_tasks_filter']['taskstatus'];
  if (!$taskstatus) {
    $status_list = pm_attributes_bydomain('Task status search');
    $taskstatus = $status_list['default'];
    $_SESSION['pmtask_tasks_filter']['taskstatus'] = $taskstatus;
  }
  if ($taskstatus && $taskstatus != '-') {
    $status = split(',', $taskstatus);
    $v = array();
    foreach ($status as $item) $v[] = '%s';
    $where[] = "sta.taskstatus IN ('" . implode("','", $v) . "')";
    foreach ($status as $key => $value) {
      $args[] = $value;
    }
  }

  $taskpriority = $_SESSION['pmtask_tasks_filter']['taskpriority'];
  if (!$taskpriority) {
    $priority_list = pm_attributes_bydomain('Task priority search');
    $taskpriority = $priority_list['default'];
    $_SESSION['pmtask_tasks_filter']['taskpriority'] = $taskpriority;
  }
  if ($taskpriority && $taskpriority != '-') {
    $priority = split(',', $taskpriority);
    $v = array();
    foreach ($priority as $item) $v[] = '%s';
    $where[] = "sta.taskpriority IN ('" . implode("','", $v) . "')";
    foreach ($priority as $key => $value) {
      $args[] = $value;
    }
  }

  $taskstree = _pmtask_get_tree($project->nid, 0, -1, NULL, $where, $args);

  $o_gantt ="";
  $jsgantt_dir = drupal_get_path('module', 'pmtask') . '/jsgantt';

  $display_options = variable_get('pmtask_jsgantt_options', array());
  if ($display_options['ShowStartDate']) {
    $display_options['ShowStartDate']=1;
  }
  if ($display_options['ShowEndDate']) {
    $display_options['ShowEndDate']=1;
  }
  if ($display_options['ShowDur']) {
    $display_options['ShowDur']=1;
  }

  if (variable_get('pmtask_enable_ganttchart', 0)) {
    drupal_add_js($jsgantt_dir . "/jsgantt.js");
    drupal_add_css($jsgantt_dir . "/jsgantt.css");
    drupal_add_css(drupal_get_path('module', 'pmtask') . '/pmtask-gantt.css');

    // version w/o xml file
    $pMile = 0;
    $pRes = "";
    $pComp = 50;
    $pGroup = 0;
    $pParent = 0;
    $pOpen = 1;
    $js = "";
    $pDepend = 0;
    $pParent = 0;

    $now = time();
    $one_day = (24 * 60 * 60);
    $pColor_default = variable_get('pmtask_jsgantt_color', '00CCFF');
    $pColor_overdue = variable_get('pmtask_jsgantt_color_overdue', 'FF0D0D');

    foreach ($taskstree as $task ) {
      $pID = $task->nid;
      $pName = check_plain($task->title);
      $pCaption = $pName;
      $pLink = base_path() . "node/" . $task->nid;
      $pStart = date("n/j/Y", $task->datebegin);
      $pEnd = date("n/j/Y", $task->dateend);
      $pColor = variable_get('pmtask_jsgantt_color', '00CCFF'); // $task->taskstatus;
      // $pDepend = $task->parents[0];
      // $pParent = $task->parents[0];

      // theme by task status
      $pColor = variable_get('pmtask_jsgantt_color_' . str_replace(' ', '_', $task->taskstatus), $pColor_default);
      $pComp = 0;
      switch ($task->taskstatus) {
        case 'completed':
          $pComp = 100;
          break;

        case 'on hold':
          $pComp = 50;
          break;

        case 'in progress':
          // percent complete as f($now), end date inclusive
          if ($now > $task->datebegin && $task->dateend > $task->datebegin) {
            $pComp = ($now - $task->datebegin) / ($task->dateend - $task->datebegin + $one_day);
            $pComp = round(100 * $pComp, 2);
          }
          // highlight overdue tasks
          if ($now > $task->dateend) {
            $pColor = $pColor_overdue;
          }
          break;
      }

      // show tasks with depth
      if ($task->depth) {
        $pName = str_repeat('--', $task->depth) . ' ' . $pName;
      }

      $js .= "g.AddTaskItem(new JSGantt.TaskItem(" . $pID . ",'" . $pName . "','" . $pStart . "','" . $pEnd . "','" . $pColor . "','" . $pLink . "'," . $pMile . ",'" . $pRes . "'," . $pComp . "," . $pGroup . "," . $pParent . "," . $pOpen . "," . $pDepend . ",'" . $pCaption . "'));\n";
    }

    $o_gantt .= "<div style='position:relative' class='gantt' id='GanttChartDIV'></div>";

    drupal_add_js("
      // Here is all the html code neccessary to display the chart object
      // Future idea would be to allow XML file name to be passed in and chart tasks built from file.
      var g = new JSGantt.GanttChart('g',document.getElementById('GanttChartDIV'), 'day');
        g.setShowRes(0); // Show/Hide Responsible (0/1)
        g.setShowComp(0); // Show/Hide % Complete(0/1)
        g.setShowDur('" . $display_options['ShowDur'] . "'); // Show/Hide Duration (0/1)
        g.setShowStartDate('" . $display_options['ShowStartDate'] . "'); // Show/Hide Start Date(0/1)
        g.setShowEndDate('" . $display_options['ShowEndDate'] . "'); // Show/Hide End Date(0/1)
        //g.setFormatArr('day','week','month')
        g.setCaptionType('Resource');  // Set to Show Caption (None,Caption,Resource,Duration,Complete)
      if( g ) {
// Parameters (pID, pName, pStart, pEnd, pColor, pLink, pMile, pRes,  pComp, pGroup, pParent, pOpen)
" . $js . "

// use the XML file parser
//    JSGantt.parseXML('http://localhost/services/sites/default/files/project.xml',g)

    g.Draw();
    g.DrawDependencies();
      }
      else
      {
    alert('not defined');
      }", 'inline', 'footer'); // end drupal_add_js
  }

  $o .= drupal_get_form('pmtask_tasks_form', $header, $taskstree, $project);
  $o .= $o_gantt;
  return $o;
}

/**
 * Provides form for project node tasks tab.
 */
function pmtask_tasks_form($form_id, $header, $tasks, $project) {
  $form = array();

  $form['tasks'] = array(
    '#theme' => 'pmtask_tasks',
  );

  $form['tasks']['header'] = array(
    '#value' => $header,
  );

  $tree = _pmtask_get_tree($project->nid);
  $parent_tasks = _pmtask_plain_tree($tree);

  $params = $_GET;
  $params['project_nid'] = $project->nid;

  foreach ($tasks as $task) {
    $task->type = 'pmtask';

    $form['tasks']['tasks'][$task->nid]['task_depth_' . $task->nid] = array(
      '#value' => $task->depth,
    );

    $form['tasks']['tasks'][$task->nid]['task_description_' . $task->nid] = array(
      '#value' => l($task->stepno . ' ' . $task->title, 'node/' . $task->nid, array('html' => TRUE)),
    );

    $form['tasks']['tasks'][$task->nid]['task_category_' . $task->nid] = array(
      '#value' => pm_icon('category_' . $task->taskcategory, pm_attribute_value('Task category', $task->taskcategory)),
    );

    $form['tasks']['tasks'][$task->nid]['task_status_' . $task->nid] = array(
      '#value' => pm_icon('status_' . $task->taskstatus, pm_attribute_value('Task status', $task->taskstatus)),
    );

    $form['tasks']['tasks'][$task->nid]['task_priority_' . $task->nid] = array(
      '#value' => pm_icon('priority_' . $task->taskpriority, pm_attribute_value('Task priority', $task->taskpriority)),
    );

    $form['tasks']['tasks'][$task->nid]['task_duration_' . $task->nid] = array(
      '#value' => $task->duration,
    );

    $form['tasks']['tasks'][$task->nid]['task_durationunit_' . $task->nid] = array(
      '#type' => 'hidden',
      '#value' => $task->durationunit,
    );

    $form['tasks']['tasks'][$task->nid]['task_parent-nid_' . $task->nid] = array(
      '#type' => 'select',
      '#options' => array(0 => '-') + $parent_tasks,
      '#default_value' => $task->parent_nid,
    );

    $form['tasks']['tasks'][$task->nid]['task_nid_' . $task->nid] = array(
      '#type' => 'hidden',
      '#default_value' => $task->nid,
    );

    $form['tasks']['tasks'][$task->nid]['task_weight_' . $task->nid] = array(
      '#type' => 'weight',
      '#default_value' => $task->weight,
    );

    $params['task_nid'] = $task->nid;

    $v = pm_icon_edit_node($task, $params);
    $v .= '&nbsp;' . pm_icon_delete_node($task, $params);
    $v .= '&nbsp;' . pm_icon_add_node($task, $params);

    $form['tasks']['tasks'][$task->nid]['task_operations_' . $task->nid] = array(
      '#value' => $v,
    );
  }

  $form['tasks']['project'] = array(
    '#type' => 'hidden',
    '#value' => $project->nid,
  );

  if (pmproject_access('update', $project->nid)) {
    // This form is displayed for users which may not have edit permissions for the nodes displayed.
    // Furthermore, permissions can mean that the user could have edit permissions for some nodes displayed and not others.
    // Therefore, the submit button must only be displayed if the user has the permission 'edit all', which guarantees the user is allowed to edit all nodes displayed.
    $form['submit'] = array(
      '#type' => 'submit',
      '#submit' => array('pmtask_tasks_submit'),
      '#value' => t('Save'),
    );
  }

  return $form;
}

/**
 * Submit function for pmtask_tasks_form().
 */
function pmtask_tasks_submit($form, &$form_state) {
  $tasks = array();
  foreach ($form_state['values'] as $key => $value) {
    $ar = explode('_', $key);
    if ($ar[0]=='task') {
      if ($ar[1]=='weight') $tasks[$ar[2]]['weight'] = $value;
      if ($ar[1]=='parent-nid') $tasks[$ar[2]]['parent-nid'] = $value;
    }
  }

  $s = "UPDATE {pmtask} SET weight=%d, parent_nid=%d WHERE nid=%d";
  foreach ($tasks as $nid => $values) {
    db_query($s, $values['weight'], $values['parent-nid'], $nid);
  }

  drupal_set_message(t('Tasks saved'));
}

/**
 * Defines filter form for project node tasks tab.
 */
function pmtask_tasks_filter() {
  $category_list = pm_attributes_bydomain('Task category search');
  $taskcategory = $_SESSION['pmtask_tasks_filter']['taskcategory'];

  $status_list = pm_attributes_bydomain('Task status search');
  $taskstatus = $_SESSION['pmtask_tasks_filter']['taskstatus'];

  $priority_list = pm_attributes_bydomain('Task priority search');
  $taskpriority = $_SESSION['pmtask_tasks_filter']['taskpriority'];

  $form = array();

  $form['filter'] = array(
        '#type' => 'fieldset',
        '#title' => t('Filter'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
  );

  $form['filter']['group1'] = array(
    '#type' => 'markup',
    '#theme' => 'pm_form_group',
  );

  $form['filter']['group1']['taskcategory'] = array(
    '#type' => 'select',
    '#title' => t('Category'),
    '#default_value' => $taskcategory,
    '#options' => $category_list['values'],
  );

  $form['filter']['group1']['taskstatus'] = array(
    '#type' => 'select',
    '#title' => t('Status'),
    '#default_value' => $taskstatus,
    '#options' => $status_list['values'],
  );

  $form['filter']['group1']['taskpriority'] = array(
    '#type' => 'select',
    '#title' => t('Priority'),
    '#default_value' => $taskpriority,
    '#options' => $priority_list['values'],
  );

  $form['filter']['group2'] = array(
    '#type' => 'markup',
    '#theme' => 'pm_form_group',
  );

  $form['filter']['group2']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Filter'),
    '#submit' => array('pmtask_tasks_filter_filter'),
  );

  $form['filter']['group2']['reset'] = array(
    '#type' => 'submit',
    '#value' => t('Reset'),
    '#submit' => array('pmtask_tasks_filter_reset'),
  );

  return $form;
}

/**
 * Saves filter values on project node tasks tab.
 */
function pmtask_tasks_filter_filter($form, &$form_state) {
  $_SESSION['pmtask_tasks_filter']['taskcategory'] = $form_state['values']['taskcategory'];
  $_SESSION['pmtask_tasks_filter']['taskstatus'] = $form_state['values']['taskstatus'];
  $_SESSION['pmtask_tasks_filter']['taskpriority'] = $form_state['values']['taskpriority'];
}

/**
 * Forgets stored filter values on project node tasks tab.
 */
function pmtask_tasks_filter_reset($form, &$form_state) {
  unset($_SESSION['pmtask_tasks_filter']);
}

/**
 * Javascript callback for tasks.
 */
function _pmtask_project_tasks_js($project_nid) {
  $tree = _pmtask_get_tree($project_nid);
  $tasks = _pmtask_plain_tree($tree);
  print drupal_to_js($tasks);
  exit();
}

/**
 * Javascript callback for task assignments.
 */
function _pmtask_project_assignments_js($organization_nid, $project_nid) {
  $assignments = pm_get_assignment_options($organization_nid, $project_nid);
  print drupal_to_js($assignments);
  exit();
}
