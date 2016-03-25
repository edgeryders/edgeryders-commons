<?php
/**
 * @file
 * Block module integration.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function navbar_region_form_block_admin_display_form_alter(&$form, &$form_state) {
  $form['#submit'][] = 'navbar_region_block_admin_display_form_submit';
}

/**
 * Submit callback for Block admin display form.
 *
 * @param $form
 * @param $form_state
 */
function navbar_region_block_admin_display_form_submit($form, &$form_state) {
  navbar_region_get_blocks(FALSE, TRUE);
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function navbar_region_form_block_admin_configure_alter(&$form, &$form_state) {
  module_load_include('admin.inc', 'navbar_region');
  $navbar_region_admin_form = navbar_region_admin_form(array(), $form_state);

  $form['navbar_region'] = array(
    '#type' => 'fieldset',
    '#title' => t('Navbar Region settings'),
    '#tree' => TRUE,
  );

  $form['navbar_region'] += $navbar_region_admin_form['navbar_region_settings']["{$form['module']['#value']}-{$form['delta']['#value']}"];
  unset($form['navbar_region']['info']);

  $form['#submit'][] = 'navbar_region_block_settings_submit';
}

/**
 * Submit callback for Block admin configuration form.
 *
 * @param $form
 * @param $form_state
 */
function navbar_region_block_settings_submit($form, &$form_state) {
  $settings = variable_get('navbar_region_settings', array());
  $settings["{$form_state['values']['module']}-{$form_state['values']['delta']}"] = $form_state['values']['navbar_region'];
  variable_set('navbar_region_settings', $settings);
}
