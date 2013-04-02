<?php

/**
 * @file
 * Generate settings for the Menu Toggle form.
 */
function at_core_menu_toggle_form(&$form) {
  $form['at']['menu-toggle'] = array(
    '#type' => 'fieldset',
    '#title' => t('Mobile Menu Toggle'),
    '#weight' => 30,
    '#description' => t('<h2>Menu Toggle for Mobile</h2><p>The Menu Toggle will hide the main menu (either a block in the Menu bar region, or the Main menu) and a single clickable link will appear. Clicking this link toggles the menu open and closed - suitable for mobile devices.</p><p>Superfish: if you start using the Superfish module you should re-save the theme settings so this will work correctly (extra CSS is added only if the module is enabled). Also enable the sf-Touchscreen plugin, which is a setting in the block configuration for your Superfish menu block.</p><p><strong>Smalltouch/smartphone</strong> breakpoints are supported by default, you can select additional devices/breakpoints.'),
  );

  // Select additional breakpoints
  $form['at']['menu-toggle']['breakpoints'] = array(
    '#type' => 'fieldset',
    '#title' => t('Breakpoints'),
    '#description' => t('<strong>Select additional devices/breakpoints you want to use the toggle menu for.</strong>'),
  );

  $form['at']['menu-toggle']['breakpoints']['menu_toggle_tablet_portrait'] = array(
    '#type' => 'checkbox',
    '#title' => t('Apply to Tablet Portrait'),
    '#default_value' => at_get_setting('menu_toggle_tablet_portrait') ? at_get_setting('menu_toggle_tablet_portrait') : 0,
    '#states' => array(
      'disabled' => array('input[name=menu_toggle_tablet_landscape]' => array('checked' => TRUE)),
    ),
  );
  $form['at']['menu-toggle']['breakpoints']['menu_toggle_tablet_landscape'] = array(
    '#type' => 'checkbox',
    '#title' => t('Apply to all Tablet breakpoints'),
    '#default_value' => at_get_setting('menu_toggle_tablet_landscape') ? at_get_setting('menu_toggle_tablet_landscape') : 0,
  );

  // Customize toggle link text
  $form['at']['menu-toggle']['main-menu-title'] = array(
    '#type' => 'fieldset',
    '#title' => t('Link Text'),
    '#description' => t('<strong>Customize the text used in the menu link.</strong>'),
  );
  $form['at']['menu-toggle']['main-menu-title']['menu_button_link_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Link Text'),
    '#description' => t('This applies if you are using the standard Drupal main menu. If you are using a block in the Menu Bar region you need to change the block title for your menu block (even if it\'s the Main menu block).'),
    '#default_value' => at_get_setting('menu_button_link_text') ? at_get_setting('menu_button_link_text') : t('Main menu'),
  );
}
