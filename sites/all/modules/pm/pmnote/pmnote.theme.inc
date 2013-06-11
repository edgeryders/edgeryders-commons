<?php

/**
 * @file
 */
function theme_pmnote_view($variables) {
  $node = $variables['node'];
  $view_mode = $variables['view_mode'];

  drupal_add_css(drupal_get_path('module', 'pm') . '/pm-node.css', 'module');

  $l_pos = 1; // Used to increase the link position number (see issue 814820)

  $node->content['links'] = array(
    '#prefix' => '<div class="pmlinks"><dl>',
    '#suffix' => '</dl></div>',
    '#weight' => $l_pos++,
  );

  $node->content['group1'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group1') : -20,
  );

  $node->content['group1']['organization'] = array(
    '#prefix' => '<div class="organization">',
    '#suffix' => '</div>',
    '#value' => theme('pm_view_item', array('label' => t('Organization'), 'value' => l($node->organization_title, 'node/'. $node->organization_nid))),
    '#weight' => 1,
  );

  $node->content['group1']['project'] = array(
    '#prefix' => '<div class="project">',
    '#suffix' => '</div>',
    '#value' => theme('pm_view_item', array('label' => t('Project'), 'value' => l($node->project_title, 'node/'. $node->project_nid))),
    '#weight' => 2,
  );

  $node->content['group1']['task'] = array(
    '#prefix' => '<div class="task">',
    '#suffix' => '</div>',
    '#value' => theme('pm_view_item', array('label' => t('Task'), 'value' => l($node->task_title, 'node/'. $node->task_nid))),
    '#weight' => 3,
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
