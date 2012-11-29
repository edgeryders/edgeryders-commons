<?php

/**
 * @file
 * Admin settings for custom search taxonomy
 */

/**
 * Implements hook_help().
 */
function custom_search_i18n_help($path, $arg) {
  switch ($path) {
    case 'admin/config/search/custom_search/taxonomy':
      $output = t('Select the vocabularies to present as search options in the search block. If none is selected, no selector will be displayed.');
    break;
  }
  return $output;
}

function custom_search_i18n_admin() {
  $form = _custom_search_i18n_admin_form();
  return system_settings_form($form);
}

/**
 * Content admin form.
 */
function _custom_search_i18n_admin_form($delta = '') {
  if ($delta != '') $delta = 'blocks_' . $delta . '_';

  $form['custom_search_i18n_' . $delta . 'search_language'] = array(
    '#type'           => 'select',
    '#title'          => t('Search content from'),
    '#options'        => array(
      'all'     => t('any language'),
      'current' => t('current language'),
    ),
    '#description'    => t('Choose which language will be used to search content.'),
    '#default_value'  => variable_get('custom_search_i18n_' . $delta . 'search_language', 'all'),
  );

  return $form;
}
