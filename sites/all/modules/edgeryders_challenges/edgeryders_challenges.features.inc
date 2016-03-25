<?php
/**
 * @file
 * edgeryders_challenges.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function edgeryders_challenges_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function edgeryders_challenges_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function edgeryders_challenges_field_default_field_instances_alter(&$data) {
  if (isset($data['node-challenge-title_field'])) {
    $data['node-challenge-title_field']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-challenge-title_field']['display']['default']['module'] = 'text'; /* WAS: '' */
    $data['node-challenge-title_field']['display']['default']['type'] = 'text_default'; /* WAS: 'hidden' */
    $data['node-challenge-title_field']['display']['default']['weight'] = 0; /* WAS: -50 */
  }
  if (isset($data['node-challenge_chain-title_field'])) {
    $data['node-challenge_chain-title_field']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-challenge_chain-title_field']['display']['default']['module'] = 'text'; /* WAS: '' */
    $data['node-challenge_chain-title_field']['display']['default']['type'] = 'text_default'; /* WAS: 'hidden' */
    $data['node-challenge_chain-title_field']['display']['default']['weight'] = 0; /* WAS: -50 */
  }
  if (isset($data['node-challenge_response-title_field'])) {
    $data['node-challenge_response-title_field']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-challenge_response-title_field']['display']['default']['module'] = 'text'; /* WAS: '' */
    $data['node-challenge_response-title_field']['display']['default']['type'] = 'text_default'; /* WAS: 'hidden' */
    $data['node-challenge_response-title_field']['display']['default']['weight'] = 0; /* WAS: -50 */
    $data['node-challenge_response-title_field']['widget']['weight'] = 4; /* WAS: -50 */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function edgeryders_challenges_image_default_styles() {
  $styles = array();

  // Exported image style: challenge_response_list.
  $styles['challenge_response_list'] = array(
    'label' => 'Challenge Response: header image in lists',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 148,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: challenge_response_node.
  $styles['challenge_response_node'] = array(
    'label' => 'Challenge Response: header image',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 445,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function edgeryders_challenges_node_info() {
  $items = array(
    'challenge' => array(
      'name' => t('Challenge'),
      'base' => 'node_content',
      'description' => t('Set up a challenge (question / theme) as engagement magnet for your site\'s users, then drive them to repond to it (using the "Challenge Response" content  type).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'challenge_chain' => array(
      'name' => t('Challenge Chain'),
      'base' => 'node_content',
      'description' => t('Combine several challenges into a chain with a progress bar and one active challenge. Use one challenge chain per project to show its progress and let users navigate to the challenges of this project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'challenge_response' => array(
      'name' => t('Challenge Response'),
      'base' => 'node_content',
      'description' => t('Post a free-text article and metadata as response to a "Challenge" (content type "Challenge", acting as the OG group containing this content.)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
