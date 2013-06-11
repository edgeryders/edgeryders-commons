<?php

/**
 * @file
 */

/**
 * Provides HTML markup for a pmticket list.
 */
function theme_pmticket_list($variables) {
  $header = $variables['header'];
  $tickets = $variables['tickets'];

  $rows = array();
  foreach ($tickets as $ticket) {
    $n = new stdClass();
    $n->nid = $ticket->nid;
    $n->uid = $ticket->uid;
    $n->organization_nid = $ticket->organization_nid;
    $n->type = 'pmticket';

    $rows[] = array(
      pm_icon('category_' . $ticket->ticketcategory, pm_attribute_value('Ticket category', $ticket->ticketcategory)),
      l($ticket->organization_title, 'node/' . $ticket->organization_nid),
      l($ticket->project_title, 'node/' . $ticket->project_nid),
      l($ticket->title, 'node/' . $ticket->nid) . theme('mark', array('type' => node_mark($ticket->nid, $ticket->changed))),
      format_date($ticket->created, 'small'),
      pm_icon('status_' . $ticket->ticketstatus, pm_attribute_value('Ticket status', $ticket->ticketstatus)),
      pm_icon('priority_' . $ticket->ticketpriority, pm_attribute_value('Ticket priority', $ticket->ticketpriority)),
      array(
        'data' => pm_icon_edit_node($n, $_GET) . '&nbsp;' . pm_icon_delete_node($n, $_GET),
//        'class' => 'pm_list_operations',
      ),
    );
  }
  return theme('table', array('header' => $header, 'rows' => $rows));
}

/**
 * Provides HTML markup for a pmticket node view.
 */
function theme_pmticket_view($variables) {
  $node = $variables['node'];

  drupal_add_css(drupal_get_path('module', 'pm') . '/pm-node.css');

  $node->content['links'] = array(
    '#prefix' => '<div class="pmlinks"><dl>',
    '#suffix' => '</dl></div>',
    '#weight' => -25,
  );

//  $node->content['links']['expenses'] = theme('pm_link', 'pmticket', 'pmexpense', $node->nid, 1);
//  $node->content['links']['timetrackings'] = theme('pm_link', 'pmticket', 'pmtimetracking', $node->nid, 2);

  // Code to create invoice auto_add link
  if (module_exists('pminvoice')) {

    $node->content['links']['auto_invoice'] = array(
      '#prefix' => variable_get('pm_icons_display', TRUE) ? '<dt id="pminvoices" class="pmcomponent">' : '<dt class="pmcomponent">',
      '#suffix' => '</dt>',
      '#value' => theme('pminvoice_autoadd_links', $node->nid, $node->billable, $node->billed),
      '#weight' => 3,
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

  $node->content['group1']['project_nid'] = array(
    '#prefix' => '<div class="project">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Project'), 'value' => l($node->project_title, 'node/' . $node->project_nid))),
    '#weight' => 2,
  );

  $node->content['group1']['task_nid'] = array(
    '#prefix' => '<div class="task">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Task'), 'value' => l($node->task_title, 'node/' . $node->task_nid))),
    '#weight' => 2,
  );

  $node->content['group2'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group2') : -19,
  );

  $node->content['group2']['category'] = array(
    '#prefix' => '<div class="category">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Category'), 'value' => check_plain(pm_attribute_value('Ticket category', $node->ticketcategory)))),
    '#weight' => 1,
  );

  $node->content['group2']['status'] = array(
    '#prefix' => '<div class="pm_status">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Status'), 'value' => check_plain(pm_attribute_value('Ticket status', $node->ticketstatus)))),
    '#weight' => 2,
  );

  $node->content['group2']['priority'] = array(
    '#prefix' => '<div class="priority">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Priority'), 'value' => check_plain(pm_attribute_value('Ticket priority', $node->ticketpriority)))),
    '#weight' => 3,
  );

  $node->content['group5'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group2') : -16,
  );

  $node->content['group5']['assigned'] = array(
    '#prefix' => '<div class="assigned">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Assigned to'), 'value' => l($node->assigned_title, 'node/' . $node->assigned_nid))),
  );

  $body = field_get_items('node', $node, 'body');
  if ($body) {
    $node->content['body'] = array(
      '#prefix' => '<div class="pmbody">',
      '#suffix' => '</div>',
      '#markup' => theme('pm_view_item', array('label' => t('Description'), 'value' => $body[0]['safe_value'])),
      '#weight' => -15,
    );
  }

  return $node;
}
