<?php

/**
 * @file
 */

/**
  * Returns HTML for an expense.
  *
  * @param array $variables
  *   An associative array containing:
  *   - node: The node object that is being formatted.
  *
  * @ingroup themeable
  */
function theme_pmexpense_view($variables) {
  $node = $variables['node'];

  // Used to increase the link position number (see issue 814820)
  $l_pos = 1;
  drupal_add_css(drupal_get_path('module', 'pm') . '/pm-node.css');

  $node->content['links'] = array(
    '#prefix' => '<div class="pmlinks"><dl>',
    '#suffix' => '</dl></div>',
    '#weight' => -25,
  );
  // Code to create invoice auto_add link.
  if (module_exists('pminvoice') && user_access('Project Management invoice: add')) {
    $v = '';
    $v .= '<strong>' . t('Invoice this item:') . '</strong>';
    $v .= '<ul>';
    $v .= '<li>' . l(t('Add to new invoice'), 'pm/invoice/auto_add/new/' . $node->nid) . '</li>';
    $v .= '<li>' . l(t('Add to existing invoice'), 'pm/invoice/auto_add/existing/' . $node->nid) . '</li>';
    $v .= '</ul>';

    $node->content['links']['auto_invoice'] = array(
      '#prefix' => '<dt id="pminvoices" class="pmcomponent">',
      '#suffix' => '</dt>',
      '#value' => $v,
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

  $node->content['group1']['task'] = array(
    '#prefix' => '<div class="task">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Task'), 'value' => l($node->task_title, 'node/' . $node->task_nid))),
    '#weight' => 3,
  );

  $node->content['group1']['ticket'] = array(
    '#prefix' => '<div class="ticket">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Ticket'), 'value' => l($node->ticket_title, 'node/' . $node->ticket_nid))),
    '#weight' => 4,
  );

  $node->content['group2'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group2') : -19,
  );

  $node->content['group2']['expensedate'] = array(
    '#prefix' => '<div class="expensedate">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Date'), 'value' => format_date($node->expensedate, 'custom', 'Y-m-d'))),
    '#weight' => 1,
  );

  $node->content['group2']['provider'] = array(
    '#prefix' => '<div class="provider">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Provider'), 'value' => $node->provider_title)),
    '#weight' => 2,
  );

  $node->content['group3'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group3') : -18,
  );

  $node->content['group3']['amount'] = array(
    '#prefix' => '<div class="amount">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Amount'), 'value' => sprintf('%.2f', $node->amount))),
    '#weight' => 1,
  );

  $node->content['group4'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group4') : -17,
  );

  if ($node->tax1) {
    $node->content['group4']['tax1'] = array(
      '#prefix' => '<div class="tax">',
      '#suffix' => '</div>',
      '#markup' => theme('pm_view_item', array('label' => variable_get('pm_tax1_name', 'VAT'), 'value' => sprintf('%.2f', $node->tax1))),
      '#weight' => 1,
    );
  }

  if ($node->tax2) {
    $node->content['group4']['tax2'] = array(
      '#prefix' => '<div class="tax">',
      '#suffix' => '</div>',
      '#markup' => theme('pm_view_item', array('label' => variable_get('pm_tax2_name', 'Tax 2'), 'value' => sprintf('%.2f', $node->tax2))),
      '#weight' => 2,
    );
  }

  if ($node->tax1 || $node->tax2) {
    $node->content['group4']['total'] = array(
      '#prefix' => '<div class="total">',
      '#suffix' => '</div>',
      '#markup' => theme('pm_view_item', array('label' => t('Total'), 'value' => sprintf('%.2f', $node->total))),
      '#weight' => 3,
    );
  }

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
