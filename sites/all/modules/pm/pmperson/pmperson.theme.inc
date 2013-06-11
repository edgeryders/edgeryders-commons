<?php

/**
 * @file
 */

function theme_pmperson_view($variables) {
  $node = $variables['node'];

  drupal_add_css(drupal_get_path('module', 'pm') . '/pm-node.css', 'module');

  $node->content['links'] = array(
    '#prefix' => '<div class="pmlinks"><dl>',
    '#suffix' => '</dl></div>',
    '#weight' => -25,
  );

  $node->content['group1'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group1') : -20,
  );

  $node->content['group1']['organization'] = array(
    '#prefix' => '<div id="organization">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Organization'), 'value' => l($node->organization_title, 'node/'. $node->organization_nid))),
    '#weight' => 1,
  );

  $node->content['group3'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group3') : -18,
  );

  $node->content['group3']['email'] = array(
    '#prefix' => '<div id="email">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('E-mail'), 'value' => l($node->email, 'mailto:'. $node->email, array('absolute' => TRUE)))),
    '#weight' => 1,
  );

  $node->content['group3']['www'] = array(
    '#prefix' => '<div id="www">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('WWW'), 'value' => l($node->www, $node->www, array('absolute' => TRUE)))),
    '#weight' => 2,
  );

  $node->content['group4'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group4') : -17,
  );

  $node->content['group4']['phone'] = array(
    '#prefix' => '<div id="phone">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('Phone'), 'value' => check_plain($node->phone))),
    '#weight' => 1,
  );

  $node->content['group4']['im'] = array(
    '#prefix' => '<div id="im">',
    '#suffix' => '</div>',
    '#markup' => theme('pm_view_item', array('label' => t('IM'), 'value' => check_plain($node->im))),
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
