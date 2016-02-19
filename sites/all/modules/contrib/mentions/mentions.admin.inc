<?php
/**
 * @file
 * Administration functions for the Mentions module.
 */

/**
 * Page callback for mentions.
 */
function mentions_form($form, $form_state) {
  $settings = variable_get('mentions', mentions_defaults());

  $form['mentions'] = array(
    '#type' => 'container',
    '#tree' => TRUE,
  );

  $form['mentions']['input'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Input'),
  );

  $form['mentions']['input']['prefix'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Prefix'),
    '#default_value' => $settings['input']['prefix'],
    '#size'          => 2,
  );

  $form['mentions']['input']['suffix'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Suffix'),
    '#default_value' => $settings['input']['suffix'],
    '#description'   => t('A suffix is useful when dealing with a username source that may contain spaces.'),
    '#size'          => 2,
  );

  $form['mentions']['input']['source'] = array(
    '#type'          => 'select',
    '#title'         => t('Source'),
    '#options'       => module_invoke_all('mentions_input_source'),
    '#default_value' => $settings['input']['source'],
    '#description'   => t('A unique value from the user entity to be used as the source of the mention.')
  );
  
  $form['mentions']['output'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Output'),
  );

  $form['mentions']['output']['prefix'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Prefix'),
    '#default_value' => $settings['output']['prefix'],
    '#size'          => 2,
  );

  $form['mentions']['output']['suffix'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Suffix'),
    '#default_value' => $settings['output']['suffix'],
    '#size'          => 2,
  );

  $form['mentions']['output']['text'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Text'),
    '#default_value' => '[user:name]',
    '#description'   => t('The text for the replacement link. Can use tokens.'),
    '#size'          => 20,
  );

  $form['mentions']['output']['link'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Link'),
    '#default_value' => 'user/[user:uid]',
    '#description'   => t('The destination for the replacement link. Can use tokens.'),
    '#size'          => 20,
  );

  return system_settings_form($form);
}
