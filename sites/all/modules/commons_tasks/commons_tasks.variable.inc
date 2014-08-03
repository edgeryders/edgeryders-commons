<?php

/**
 * @file
 * Variable file for Elite Growth migration
 */

/**
 * Implements hook_variable_group_info()
 */
function commons_tasks_variable_group_info() {
  $groups = array();
  $groups['commons_tasks'] = array(
    'title' => t('Commons tasks'),
    'description' => t("Variables that belongs to Commons tasks feature."),
  );
  return $groups;
}

/**
 * Implements hook_variable_info().
 */
function commons_tasks_variable_info($options) {
  $variables = array();
  $variables['common_tasks_assignee_notification_subject'] = array(
    'type' => 'string',
    'title' => t('Task assignee mail subject'),
    'description' => t('Task assignee mail subject', array(), $options),
    'required' => TRUE,
    'default' => '[site:name]: You have been assigned to task: [node:title]',
    'group' => 'commons_tasks',
  );
  $variables['common_tasks_assignee_notification_body'] = array(
    'type' => 'text',
    'title' => t('Task assignee mail body'),
    'description' => t('Task assignee mail subject', array(), $options),
    'required' => TRUE,
    'default callback' => 'commons_tasks_assignee_variable_default_body',
    'group' => 'commons_tasks',
  );
  return $variables;
}

/**
 * Return the default body variable.
 */
function commons_tasks_assignee_variable_default_body() {
  $text = "Dear [user:name],

You have been assigned to the following task: [node:url]

--  [site:name] team";
  return $text;
}
