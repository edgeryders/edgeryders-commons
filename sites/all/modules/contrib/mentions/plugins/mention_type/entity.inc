<?php

/**
 * @file
 */

$plugin = array(
  'title'       => t('Entity'),
  'description' => t('Mention an entity by specified type and unique identifier.'),
  'callbacks'   => array(
    'settings'        => 'mentions_mention_type_entity_settings',
    'settings submit' => 'mentions_mention_type_entity_settings_submit',
    'pattern'         => 'mentions_mention_type_entity_pattern',
    'target'          => 'mentions_mention_type_entity_target',
    'output'          => 'mentions_mention_type_entity_output',
    'mention presave' => 'mentions_mention_type_entity_mention_presave',
  ),
);

/**
 * Settings callback.
 *
 * @param $form
 * @param $form_state
 * @param $type
 */
function mentions_mention_type_entity_settings(&$form, $form_state, $type) {
  if (!module_exists('entityreference')) {
    $form['settings']['description']['#markup'] .= t('<p><strong>Important:</strong> It is highly recommended that you download and install the <a href="https://www.drupal.org/project/entityreference">Entity Reference</a> module before using this mention type.</p>');
  }

  $form['settings']['input']['prefix']['#required'] = TRUE;

  $entity_types = entity_get_info();
  $options      = array();
  foreach ($entity_types as $entity_type => $entity_info) {
    $options[$entity_type] = $entity_info['label'];
  }
  $form['settings']['input']['type'] = array(
    '#title'         => t('Entity type'),
    '#type'          => 'select',
    '#options'       => $options,
    '#default_value' => isset($type->input['type']) ? $type->input['type'] : '',
    '#required'      => TRUE,
  );

  switch (TRUE) {
    case isset($form_state['values']['input']['type']):
      $entity_type = $form_state['values']['input']['type'];
      break;

    case !empty($type->input['type']):
      $entity_type = $type->input['type'];
      break;

    default:
      $entity_type = key($options);
  }
  $entity_info = entity_get_info($entity_type);

  // Build list of mentionable values.
  $options = array();
  $default = NULL;
  $schema  = drupal_get_schema($entity_info['base table']);
  if (isset($schema['primary key'][0]) && isset($schema['fields'][$schema['primary key'][0]])) {
    $options["property::{$schema['primary key'][0]}::{$schema['fields'][$schema['primary key'][0]]['type']}"] = t('Property: @property (Primary key)', array('@property' => $schema['primary key'][0]));
    $default = "property::{$schema['primary key'][0]}::{$schema['fields'][$schema['primary key'][0]]['type']}";
  }
  if (isset($schema['unique keys'])) {
    foreach ($schema['unique keys'] as $keys) {
      if (count($keys) == 1 && isset($schema['fields'][$keys[0]])) {
        $options["property::{$keys[0]}::{$schema['fields'][$keys[0]]['type']}"] = t('Property: @property', array('@property' => $keys[0]));
      }
    }
  }
  drupal_alter('mentions_entity_input_options', $options, $entity_type);
  ksort($options);
  $default = is_null($default) ? key($options) : $default;

  $form['settings']['input']['value'] = array(
    '#title'         => t('Value'),
    '#type'          => 'select',
    '#options'       => $options,
    '#default_value' => isset($type->input['value']) ? $type->input['value'] : $default,
  );

  $form['settings']['output']['value']['#description'] = t('This field supports tokens.');
  $form['settings']['output']['link']['#description']  = t('This field supports tokens.');

  // Add Token module integration; Render token tree in output settings.
  if (module_exists('token')) {
    $form['settings']['input']['type']['#ajax'] = array(
      'callback' => 'mentions_type_form_ajax',
      'wrapper'  => 'settings-wrapper',
    );

    $token_types = array();
    if (isset($entity_info['token type'])) {
      $token_types[] = $entity_info['token type'];
    }
    $form['settings']['output']['token_tree'] = array(
      '#theme'       => 'token_tree',
      '#token_types' => $token_types,
      '#dialog'      => TRUE,
      '#weight'      => 100,
    );
  }
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
function mentions_mention_type_entity_settings_submit(&$form, $form_state, $type) {
  if (module_exists('entityreference')) {
    $field    = field_info_field('mention_target');
    $instance = field_info_instance('mention', 'mention_target', $type->type);
    if (empty($field)) {
      $field = array(
        'field_name'   => 'mention_target',
        'type'         => 'entityreference',
        'entity_types' => array('mention'),
        'settings'     => array(
          'target_type' => $type->input['type'],
        ),
      );
      field_create_field($field);
    }
    if (empty($instance)) {
      $instance = array(
        'field_name'  => 'mention_target',
        'entity_type' => 'mention',
        'bundle'      => $type->type,
        'label'       => t('Target'),
        'widget'      => array('type' => 'entityreference_autocomplete'),
        'settings'    => array(),
        'display'     => array(
          'default' => array(
            'label' => 'hidden',
            'type'  => 'entityreference_label',
          ),
          'teaser'  => array(
            'label' => 'hidden',
            'type'  => 'entityreference_label',
          ),
        ),
      );
      field_create_instance($instance);
    }
  }
}

/**
 * Pattern callback.
 *
 * @param $settings
 *
 * @return string
 */
function mentions_mention_type_entity_pattern($settings, $regex = TRUE) {
  $parts = explode('::', $settings['value']);

  if ($regex) {
    switch ($parts[2]) {
      case 'int':
      case 'serial':
        return '\d+';

      default:
        return '[a-zA-Z0-9]+';
    }
  }

  return $parts[1];
}

/**
 * Target callback.
 *
 * @param $value
 * @param $settings
 *
 * @return mixed
 */
function mentions_mention_type_entity_target($value, $settings) {
  $parts = explode('::', $settings->input['value']);

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', $settings->input['type']);
  switch ($parts[0]) {
    case 'field':
      $query->fieldCondition($parts[1], $parts[3], $value);
      break;

    case 'property':
      $query->propertyCondition($parts[1], $value);
      break;
  }
  $result = $query->execute();
  if (isset($result[$settings->input['type']]) && !empty($result[$settings->input['type']])) {
    $target['entity_type'] = $settings->input['type'];
    $target['entity_id']   = key($result[$settings->input['type']]);
    $target['id']          = "entity::{$target['entity_type']}::{$target['entity_id']}";

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
function mentions_mention_type_entity_output($mention, $settings) {
  $entity          = entity_load_single($mention['target']['entity_type'], $mention['target']['entity_id']);
  $output['value'] = token_replace($settings['value'], array($mention['target']['entity_type'] => $entity));
  $output['link']  = token_replace($settings['link'], array($mention['target']['entity_type'] => $entity));

  return $output;
}

/**
 * Mention pre-save callback.
 *
 * @param $entity
 */
function mentions_mention_type_entity_mention_presave($entity) {
  if (module_exists('entityreference') && isset($entity->data['target']['entity_type']) && isset($entity->data['target']['entity_id'])) {
    /** @var EntityDrupalWrapper $wrapper */
    $wrapper = entity_metadata_wrapper('mention', $entity);

    $wrapper->mention_target = $entity->data['target']['entity_id'];
  }
}
