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
    '#description' => t('The wysiwyg profile this rule applies to.<br/> For ethnographic tags, choose "Filtered_HTML_and_Tagging".'),
  );

  $form['element'] = array(
    '#type' => 'textfield',
    '#title' => t('Element'),
    '#default_value' => $item->element,
    '#required' => TRUE,
    '#description' => t('Enter a specific html element.<br/> For ethnographic tags, enter "span".'),
  );

  // Additional configuration.
  $form['attributes'] = array(
    '#type' => 'fieldset',
    '#title' => t('Attributes'),
    '#tree' => TRUE,
  );

  $form['attributes']['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#description' => t('HTML title attribute to apply to the element; will appear as tooltip when mousing over markup in the editor and in the page on the frontend.<br/> For ethnographic tags, put in tag type, a colon, and the full tag name so you can recognize it later. For example, "Topic: International labor migration".'),
    '#default_value' => $item->attributes['title'],
  );
  $form['attributes']['property'] = array(
    '#type' => 'textfield',
    '#title' => t('Property'),
    '#description' => t('RDFa property attribute.<br/> For ethnographic tags, (1) let it contain the tag type, (2) use the "eoe:" prefix, (3) else use only lowercase characters and "-", for example: "eoe:topic" or "eoe:place"'),
    '#default_value' => $item->attributes['property'],
  );
  $form['attributes']['resource'] = array(
    '#type' => 'textfield',
    '#title' => t('Resource'),
    '#description' => t('RDFa resource attribute.<br/> For ethnographic tags, (1) let it contain a short / abbreviated name of a specific tag of the type you put in "property", (2) use the "eoe:" prefix, (3) use square brackets, (4) else use only lowercase characters and "-", for example: "[eoe:intl-labor-migration]" for a topic tag."'),
    '#default_value' => $item->attributes['resource'],
  );
  $form['attributes']['class'] = array(
    '#type' => 'textfield',
    '#title' => t('Class'),
    '#description' => t('Class attribute to set for the style. Multiple classes have to be separated by spaces.<br/> For ethnographic tags, you can leave this empty. Your tags will still be colored for you.'),
    '#default_value' => $item->attributes['class'],
  );
  $form['attributes']['style'] = array(
    '#type' => 'textfield',
    '#title' => t('Style'),
    '#description' => t('CSS style attribute to set for the style rule.<br/> For ethnographic tags, leave this empty.'),
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

  if(function_exists('ckeditor_profile_load')){
    $profiles = ckeditor_profile_load();
    foreach ($profiles as $profile) {
      //dont apply for CKEditor Global Profile
      if($profile->name != 'CKEditor Global Profile'){
        $options[strtolower($profile->name)] = $profile->name;
      }
    }
  }else{
    $profiles = wysiwyg_profile_load_all();
    $formats = filter_formats();
    // Select only those profiles, that are using ckeditor and a valid format is
    // associated
    foreach ($profiles as $profile) {
      if ($profile->editor == 'ckeditor' && isset($formats[$profile->format])) {
        $options[$profile->format] = $formats[$profile->format]->name;
      }
    }
  }
  return $options;
}
