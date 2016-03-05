<?php
// $Id$

/**
 * @file
 * Admininstrative forms for hsts module.
 */

/**
 * Implements hook_form().
 *
 * Settings form
 */
function hsts_admin_settings_form() {
  $form = array();

  $form['hsts_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable HTTP Strict Transport Security'),
    '#description' => t('Whether to start adding the HSTS header information or not.'),
    '#default_value' => variable_get('hsts_enabled', FALSE),
  );

  $form['hsts_max_age'] = array(
    '#type' => 'textfield',
    '#title' => t('Max Age'),
    '#description' => t('The maximum age value for the header in seconds. See the <a href="http://lists.w3.org/Archives/Public/www-archive/2009Sep/att-0051/draft-hodges-strict-transport-sec-05.plain.html#syntax">Strict Transport Security Definition</a> for more information.'),
    '#default_value' => variable_get('hsts_max_age', 500),
    '#maxlength' => 9,
    '#size' => 11,
  );

  $form['hsts_subdomains'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include subdomains'),
    '#description' => t('Whether to include the subdomains as part of the HSTS implementation.'),
    '#default_value' => variable_get('hsts_subdomains', FALSE),
  );

  return system_settings_form($form);
}

/**
 * Implements hook_validate().
 *
 * @param $form
 * @param $form_state
 */
function hsts_admin_settings_form_validate($form, &$form_state) {
  if (!is_numeric($form_state['values']['hsts_max_age']) || $form_state['values']['hsts_max_age'] < 0) {
    form_set_error('hsts_max_age', t('Value is not a number or out of bounds.'));
  }
}
