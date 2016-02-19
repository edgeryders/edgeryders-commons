<?php

/**
 * @file
 * Administration functions for the Mentions module.
 */

/**
 * @param        $form
 * @param        $form_state
 * @param array  $type
 * @param string $op
 *
 * @return mixed
 */
function mentions_type_form($form, &$form_state, $type = array(), $op = 'edit') {
  if (!isset($type->type)) {
    $type = mentions_type_set_defaults();
  }

  $form['name'] = array(
    '#title'         => t('Name'),
    '#type'          => 'textfield',
    '#default_value' => $type->name,
    '#description'   => t('The human-readable name of this mention type. It is recommended that this name begin with a capital letter and contain only letters, numbers, and spaces. This name must be unique.'),
    '#required'      => TRUE,
    '#size'          => 30,
  );

  $form['type'] = array(
    '#type'          => 'machine_name',
    '#default_value' => $type->type,
    '#maxlength'     => 32,
    '#machine_name'  => array(
      'exists' => 'mentions_type_load',
    ),
    '#description'   => t('A unique machine-readable name for this mention type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $plugins = mentions_get_plugins();
  $options = array();
  foreach ($plugins as $plugin) {
    $options[$plugin['name']] = $plugin['title'];
  }
  $form['plugin'] = array(
    '#title'         => t('Mention type'),
    '#type'          => 'select',
    '#options'       => $options,
    '#default_value' => $type->plugin,
    '#description'   => t(''),
    '#ajax'          => array(
      'callback' => 'mentions_type_form_ajax',
      'wrapper'  => 'settings-wrapper',
    ),
  );

  // Get currently selected plugin.
  switch (TRUE) {
    case isset($form_state['values']['plugin']):
      $id = $form_state['values']['plugin'];
      break;

    case !empty($type->plugin):
      $id = $type->plugin;
      break;

    default:
      $id = key($options);
  }
  $plugin = mentions_get_plugin($id);

  // Settings.
  $form['settings'] = array(
    '#type'   => 'container',
    '#prefix' => '<div id="settings-wrapper">',
    '#suffix' => '</div>',
  );

  $form['settings']['description'] = array(
    '#type'   => 'markup',
    '#markup' => isset($plugin['description']) ? $plugin['description'] : '',
  );

  // Input settings.
  $form['settings']['input'] = array(
    '#title'       => t('Input settings'),
    '#type'        => 'fieldset',
    '#collapsible' => TRUE,
    '#tree'        => TRUE,
  );

  $form['settings']['input']['prefix'] = array(
    '#title'         => t('Prefix'),
    '#type'          => 'textfield',
    '#default_value' => isset($type->input['prefix']) ? $type->input['prefix'] : '',
    '#weight'        => -10,
  );

  $form['settings']['input']['suffix'] = array(
    '#title'         => t('Suffix'),
    '#type'          => 'textfield',
    '#default_value' => isset($type->input['suffix']) ? $type->input['suffix'] : '',
    '#weight'        => 10,
  );

  // Output settings.
  $form['settings']['output'] = array(
    '#title'       => t('Output settings'),
    '#type'        => 'fieldset',
    '#collapsible' => TRUE,
    '#tree'        => TRUE,
  );

  $form['settings']['output']['value'] = array(
    '#title'         => t('Value'),
    '#type'          => 'textfield',
    '#default_value' => isset($type->output['value']) ? $type->output['value'] : '',
    '#required'      => TRUE,
    '#weight'        => 0,
  );

  $form['settings']['output']['render_link'] = array(
    '#title'         => t('Render as link'),
    '#type'          => 'checkbox',
    '#default_value' => isset($type->output['render_link']) ? $type->output['render_link'] : FALSE,
    '#weight'        => 20,
  );

  $form['settings']['output']['link'] = array(
    '#title'         => t('Link'),
    '#type'          => 'textfield',
    '#default_value' => isset($type->output['link']) ? $type->output['link'] : '',
    '#states'        => array(
      'invisible' => array(
        ':input[name="output[render_link]"]' => array('checked' => FALSE),
      ),
    ),
    '#weight'        => 30,
  );

  // Allow plugin to alter the settings form.
  if (isset($plugin['callbacks']['settings']) && function_exists($plugin['callbacks']['settings'])) {
    $plugin['callbacks']['settings']($form, $form_state, $type);
  }

  $form['actions'] = array('#type' => 'actions');

  $form['actions']['submit'] = array(
    '#type'   => 'submit',
    '#value'  => t('Save mention type'),
    '#weight' => 40,
  );

  return $form;
}

/**
 * @param $form
 *
 * @return array
 */
function mentions_type_form_ajax($form) {
  return $form['settings'];
}

/**
 * @param $form
 * @param $form_state
 */
function mentions_type_form_validate($form, $form_state) {
}

/**
 * @param $form
 * @param $form_state
 */
function mentions_type_form_submit($form, &$form_state) {
  $mentions_type = $form_state['mentions_type'];
  entity_form_submit_build_entity('mentions_type', $mentions_type, $form, $form_state);
  mentions_type_save($mentions_type);

  // Add or remove the 'mention_text' field, as needed.
  $field    = field_info_field('mention_text');
  $instance = field_info_instance('mention', 'mention_text', $mentions_type->type);
  if (empty($field)) {
    $field = array(
      'field_name'   => 'mention_text',
      'type'         => 'text_with_summary',
      'entity_types' => array('mention'),
    );
    field_create_field($field);
  }
  if (empty($instance)) {
    $instance = array(
      'field_name'  => 'mention_text',
      'entity_type' => 'mention',
      'bundle'      => $mentions_type->type,
      'label'       => t('Mention text'),
      'widget'      => array('type' => 'text_textarea_with_summary'),
      'settings'    => array('display_summary' => TRUE),
      'display'     => array(
        'default' => array(
          'label' => 'hidden',
          'type'  => 'text_default',
        ),
        'teaser'  => array(
          'label' => 'hidden',
          'type'  => 'text_summary_or_trimmed',
        ),
      ),
    );
    field_create_instance($instance);
  }

  // Allow Mention type plugin to have it's say.
  $plugin = mentions_get_plugin($mentions_type->plugin);
  if (isset($plugin['callbacks']['settings submit']) && function_exists($plugin['callbacks']['settings submit'])) {
    $plugin['callbacks']['settings submit']($form, $form_state, $mentions_type);
  }

  $form_state['redirect'] = 'admin/structure/mentions';
  drupal_set_message(t('Mention type %title saved.', array('%title' => entity_label('mentions_type', $mentions_type))));
}
