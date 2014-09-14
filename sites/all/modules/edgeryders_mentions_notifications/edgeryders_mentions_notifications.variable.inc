<?php

/**
 * @file
 * Variable file for Commons tasks settings.
 */

/**
 * Implements hook_variable_group_info()
 */
function edgeryders_mentions_notifications_variable_group_info() {
  $groups = array();
  $groups['edgeryders_mentions_notifications'] = array(
    'title' => t('Edgeryders mentions notifications'),
    'description' => t("Variables that belongs to Edgeryders mentions notifications feature."),
  );
  return $groups;
}

/**
 * Implements hook_variable_info().
 */
function edgeryders_mentions_notifications_variable_info($options) {
  $variables = array();
  $variables['edgeryders_mentions_notifications_check_access'] = array(
    'type' => 'boolean',
    'title' => t('Check entity access'),
    'description' => t('Check users mentioned has access to entity (node, comment)', array(), $options),
    'required' => FALSE,
    'default' => FALSE,
    'group' => 'edgeryders_mentions_notifications',
  );
  return $variables;
}

