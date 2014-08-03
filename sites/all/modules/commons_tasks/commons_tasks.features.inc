<?php
/**
 * @file
 * commons_tasks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commons_tasks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function commons_tasks_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function commons_tasks_node_info() {
  $items = array(
    'task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Start a collaboration by listing what has to be done.'),
      'has_title' => '1',
      'title_label' => t('Task name'),
      'help' => '',
    ),
  );
  return $items;
}
