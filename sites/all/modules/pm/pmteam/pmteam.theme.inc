<?php

/**
 * @file
 * Theme functions for the Project Management Team module
 */

/**
 * @function
 * Theme function for the Project Management Team node view
 */
function theme_pmteam_view($variables) {
  $node = $variables['node'];

  drupal_add_css(drupal_get_path('module', 'pm') . '/pm-node.css', 'module');

  $type = node_type_get_type($node);

  /* $node->content['links'] = array(
    '#prefix' => '<div class="pmlinks"><dl>',
    '#suffix' => '</dl></div>',
    '#weight' => -25,
  );*/

  $node->content['group1'] = array(
    '#prefix' => '<div class="pmfields">',
    '#suffix' => '</div>',
    '#weight' => module_exists('content') ? content_extra_field_weight($node->type, 'group2') : -20,
  );

  // Add links to each team member title
  if (isset($node->members_array) && is_array($node->members_array)) {
    foreach ($node->members_array as $nid => $name) {
      $member = node_load($nid);
      // @todo Revisit these node access checks once access control changes have been finished.
      if (($member->type == 'pmperson' && pmperson_node_access('view', $nid)) || ($member->type == 'pmorganization' && pmorganization_node_access($nid, 'view'))) {
        if (!empty($node->members_deactivated_array) && array_key_exists($nid, $node->members_deactivated_array)) {
          $name .= " (" . t('disabled') . ")";
        }
        $node->members_array[$nid] = l($name, 'node/' . $nid);
    }
  }

    $node->content['group1']['members'] = array(
      '#prefix' => '<div class="members">',
      '#suffix' => '</div>',
      '#markup' => theme('pm_view_item', array('label' => t('Members'), 'value' =>  implode(", ", $node->members_array))),
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
