<?php

/**
 * @file
 * UI configuration for ckeditor_styles_config exportable objects.
 */

$plugin = array(
  'schema' => 'ckeditor_style_rules',
  'access' => 'administer ckeditor styles',

  'menu' => array(
    'menu prefix' => 'admin/config/content',
    'menu item' => 'ckeditor_styles',
    'menu title' => 'CKEditor Style rule',
    'menu description' => 'Administer ckeditor styleset rules to use in WYSIWYG profiles',
  ),

  'title singular' => t('ckeditor style rule'),
  'title singular proper' => t('CKEditor style rule'),
  'title plural' => t('ckeditor style rules'),
  'title plural proper' => t('CKEditor style rules'),

  'form' => array(
    'settings' => 'ckeditor_styles_rule_ctools_export_ui_form',
  ),
);

/**
 * UI form for the ckeditor_styles configuration.
 */
function ckeditor_styles_rule_ctools_export_ui_form(&$form, &$form_state) {

  $item = $form_state['item'];

  $form['styleset'] = array(
    '#type' => 'select',
    '#title' => t('Style Set'),
    '#options' => _ckeditor_styleset_options(),
    '#default_value' => empty($item->styleset) ? '-all-' : $item->styleset,
    '#required' => TRUE,
    '#description' => t('The wysiwyg profile this rule applies to.'),
  );

  $form['element'] = array(
    '#type' => 'textfield',
    '#title' => t('Element'),
    '#default_value' => $item->element,
    '#required' => TRUE,
    '#description' => t('Enter a specific html element.'),
  );

  // Additional configuration.
  $form['attributes'] = array(
    '#type' => 'fieldset',
    '#title' => t('Attributes'),
    '#tree' => TRUE,
  );

  $form['attributes']['class'] = array(
    '#type' => 'textfield',
    '#title' => t('Class'),
    '#description' => t('Class attribute to set for the style. Multiple classes have to be separated by spaces.'),
    '#default_value' => $item->attributes['class'],
  );
  $form['attributes']['style'] = array(
    '#type' => 'textfield',
    '#title' => t('Style'),
    '#description' => t('CSS style attribute to set for the style rule.'),
    '#default_value' => $item->attributes['style'],
  );
  return $form;
}

/**
 * Helper function to get an options array for selectable stylesets.
 */
function _ckeditor_styleset_options() {
  $options = array(
    '-all-' => t('- All wysiwyg ckeditor profiles-'),
  );

  $profiles = wysiwyg_profile_load_all();
  $formats = filter_formats();
  // Select only those profiles, that are using ckeditor and a valid format is
  // associated
  foreach ($profiles as $profile) {
    if ($profile->editor == 'ckeditor' && isset($formats[$profile->format])) {
      $options[$profile->format] = $formats[$profile->format]->name;
    }
  }
  return $options;
}
