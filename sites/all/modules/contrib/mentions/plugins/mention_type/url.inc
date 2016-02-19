<?php

/**
 * @file
 */

$plugin = array(
  'title'       => t('URL'),
  'description' => t('Mention a URL within a specified domain range (prefix).'),
  'callbacks'   => array(
    'settings'        => 'mentions_mention_type_url_settings',
    'settings submit' => 'mentions_mention_type_url_settings_submit',
    'pattern'         => 'mentions_mention_type_url_pattern',
    'target'          => 'mentions_mention_type_url_target',
    'output'          => 'mentions_mention_type_url_output',
    'mention presave' => 'mentions_mention_type_url_mention_presave',
  ),
);

/**
 * Settings callback.
 *
 * @param $form
 * @param $form_state
 * @param $type
 */
function mentions_mention_type_url_settings(&$form, $form_state, $type) {
  $form['settings']['input']['prefix']['#required'] = TRUE;

  $form['settings']['output']['prefix'] = array(
    '#title'         => t('Prefix'),
    '#type'          => 'textfield',
    '#default_value' => isset($type->output['prefix']) ? $type->output['prefix'] : '',
    '#required'      => TRUE,
    '#weight'        => -10,
  );

  unset($form['settings']['output']['value'], $form['settings']['output']['link']);
  $form['settings']['output']['render_link'] = array(
    '#type'  => 'value',
    '#value' => TRUE,
  );
}

/**
 * Settings submit callback.
 *
 * @param $form
 * @param $form_state
 * @param $type
 *
 * @throws Exception
 * @throws FieldException
 */
function mentions_mention_type_url_settings_submit(&$form, $form_state, $type) {
  //  $field    = field_info_field('mention_target');
  //  $instance = field_info_instance('mention', 'mention_target', $type->type);
  //  if (empty($field)) {
  //    $field = array(
  //      'field_name'   => 'mention_target',
  //      'type'         => 'entityreference',
  //      'entity_types' => array('mention'),
  //      'settings'     => array(
  //        'target_type' => $type->input['type'],
  //      ),
  //    );
  //    field_create_field($field);
  //  }
  //  if (empty($instance)) {
  //    $instance = array(
  //      'field_name'  => 'mention_target',
  //      'entity_type' => 'mention',
  //      'bundle'      => $type->type,
  //      'label'       => t('Target'),
  //      'widget'      => array('type' => 'entityreference_autocomplete'),
  //      'settings'    => array(),
  //      'display'     => array(
  //        'default' => array(
  //          'label' => 'hidden',
  //          'type'  => 'entityreference_label',
  //        ),
  //        'teaser'  => array(
  //          'label' => 'hidden',
  //          'type'  => 'entityreference_label',
  //        ),
  //      ),
  //    );
  //    field_create_instance($instance);
  //  }
}

/**
 * Pattern callback.
 *
 * @param $settings
 *
 * @return string
 */
function mentions_mention_type_url_pattern($settings, $regex = TRUE) {
  return $regex ? '.*?' : '*';
}

/**
 * Target callback.
 *
 * @param $value
 * @param $settings
 *
 * @return mixed
 */
function mentions_mention_type_url_target($value, $settings) {
  $url     = $settings->output['prefix'] . $value;
  $request = drupal_http_request($url, array(
    'method' => 'HEAD',
  ));

  if ($request->code == 200) {
    $target['url'] = $url;
    $target['id']  = "url::{$url}";

    return $target;
  }

  return FALSE;
}

/**
 * Filter output callback.
 *
 * @param $mention
 * @param $settings
 *
 * @return mixed
 */
function mentions_mention_type_url_output($mention, $settings) {
  $request = drupal_http_request($mention['target']['url']);
  preg_match('/\<title\>(.*?)\<\/title\>/', $request->data, $match);

  $output['value'] = $match[1];
  $output['link']  = $mention['target']['url'];

  return $output;
}

/**
 * Mention pre-save callback.
 *
 * @param $entity
 */
function mentions_mention_type_url_mention_presave($entity) {
  //  if (isset($entity->data['target']['entity_type']) && isset($entity->data['target']['entity_id'])) {
  //    /** @var EntityDrupalWrapper $wrapper */
  //    $wrapper = entity_metadata_wrapper('mention', $entity);
  //
  //    $wrapper->mention_target = $entity->data['target']['entity_id'];
  //  }
}
