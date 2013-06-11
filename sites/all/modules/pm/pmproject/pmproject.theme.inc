<?php

/**
 * @file
 */

/**
 * Provides HTML markup for a pmtimetracking list.
 */
function theme_pmproject_list($variables) {
  $header = $variables['header'];
  $projects = $variables['projects'];

  drupal_add_css(drupal_get_path('module', 'pm') . '/pm.css', 'module');

  $rows = array();
  foreach ($projects as $key => $project) {
    $rows[] = array(
      pm_icon('projectcategory_' . $project->projectcategory, pm_attribute_value('Project category', $project->projectcategory)),
      l($project->organization_title, 'node/' . $project->organization_nid),
      l($project->title, 'node/' . $project->nid) . theme('mark', array('type' => node_mark($project->nid, $project->changed))),
      pm_icon('status_' . $project->projectstatus, pm_attribute_value('Project status', $project->projectstatus)),
      pm_icon('priority_' . $project->projectpriority, pm_attribute_value('Project priority', $project->projectpriority)),
      array(
        'data' => pm_icon_edit_node($project, $_GET) . '&nbsp;' . pm_icon_delete_node($project, $_GET),
        'class' => 'pm_list_operations',
      ),
    );
  }
  return theme('table', array('header' => $header, 'rows' => $rows));
}

/**
 * Provides HTML markup for a pmproject node view.
 */
function theme_pmproject_view($variables) {
  $node = $variables['node'];

  drupal_add_css(drupal_get_path('module', 'pm') . '/pm-node.css');

  $l_pos = 1; // Used to increase the link position number (see issue 814820)

  $node->content['links'] = array(
    '#prefix' => '<div class="pmlinks"><dl>',
    '#suffix' => '</dl></div>',
    '#weight' => -25,
  );

//  $node->content['links']['expenses'] = theme('pm_link', 'pmproject', 'pmexpense', $node->nid, $l_pos++);
//  $node->content['links']['invoices'] = theme('pm_link', 'pmproject', 'pminvoice', $node->nid, $l_pos++);
//  $node->content['links']['notes'] = theme('pm_link', 'pmproject', 'pmnote', $node->nid, $l_pos++);
//  $node->content['links']['tasks'] = theme('pm_link', 'pmproject', 'pmtask', $node->nid, $l_pos++);
//  $node->content['links']['tickets'] = theme('pm_link', 'pmproject', 'pmticket', $node->nid, $l_pos++);
//  $node->content['links']['timetrackings'] = theme('pm_link', 'pmproject', 'pmtimetracking', $node->nid, $l_pos++);

  // Code to create invoice auto_add link
  if (module_exists('pminvoice')) {

    $node->content['links']['auto_invoice'] = array(
      '#prefix' => variable_get('pm_icons_display', TRUE) ? '<dt id="pminvoices" class="pmcomponent">' : '<dt class="pmcomponent">',
      '#suffix' => '</dt>',
      '#value' => theme('pminvoice_autoadd_links', $node->nid, $node->billable, $node->billed),
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

  $node->content['group2'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group2') : -19,
  );

  $node->content['group2']['projectcategory'] = array(
    '#prefix' => '<div class="projectcategory">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Category'), 'value' => check_plain(pm_attribute_value('Project category', $node->projectcategory)))),
    '#weight' => 1,
  );

  $node->content['group2']['projectstatus'] = array(
    '#prefix' => '<div class="projectstatus">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Status'), 'value' => check_plain(pm_attribute_value('Project status', $node->projectstatus)))),
    '#weight' => 2,
  );

  $node->content['group2']['projectpriority'] = array(
    '#prefix' => '<div class="projectpriority">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Priority'), 'value' => check_plain(pm_attribute_value('Project priority', $node->projectpriority)))),
    '#weight' => 3,
  );

  $node->content['group5'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group5') : -16,
  );

  $node->content['group5']['manager'] = array(
    '#prefix' => '<div class="manager">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Project Manager'), 'value' => l($node->manager_title, 'node/' . $node->manager_nid))),
    '#weight' => 1,
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
