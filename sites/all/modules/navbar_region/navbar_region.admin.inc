<?php
/**
 * @file
 * Administration functions for Navbar region module.
 */

/**
 * Navbar region administration form.
 *
 * @param $form
 * @param $form_state
 *
 * @return mixed
 */
function navbar_region_admin_form($form, &$form_state) {
  $settings = variable_get('navbar_region_settings', array());

  $blocks = navbar_region_get_blocks(TRUE);
  asort($blocks);

  $form['navbar_region_settings'] = array(
    '#type'  => 'container',
    '#tree'  => TRUE,
    '#theme' => 'navbar_region_admin_form',
  );

  foreach ($blocks as $block) {
    $form['navbar_region_settings'][$block->bid]['info'] = array(
      '#type'   => 'item',
      '#title'  => t('Block'),
      '#markup' => $block->info,
    );

    $form['navbar_region_settings'][$block->bid]['title'] = array(
      '#type'          => 'textfield',
      '#title'         => t('Title'),
      '#default_value' => isset($settings[$block->bid]['title']) ? $settings[$block->bid]['title'] : '',
    );

    $form['navbar_region_settings'][$block->bid]['icon'] = array(
      '#type'          => 'select',
      '#title'         => t('Icon'),
      '#options'       => navbar_region_navbar_icons(),
      '#empty_value'   => '',
      '#default_value' => isset($settings[$block->bid]['icon']) ? $settings[$block->bid]['icon'] : '',
    );

    if ($block->module == 'navbar_region') {
      $form['navbar_region_settings'][$block->bid]['icon']['#empty_option'] = t('- Default -');
    }
  }

  return system_settings_form($form);
}

/**
 * Theme function for Navbar region administration form.
 *
 * @param $elements
 *
 * @return string
 */
function theme_navbar_region_admin_form($elements) {
  $form    = $elements['form'];
  $modules = system_get_info('module');
  $output  = '';

  drupal_add_css(drupal_get_path('module', 'block') . '/block.css');

  $rows = array();
  foreach (element_children($form) as $child) {
    // Hide field titles.
    foreach (element_children($form[$child]) as $field) {
      $form[$child][$field]['#title_display'] = 'invisible';
    }

    // Group by module.
    list($module, $delta) = explode('-', $child);
    if (isset($modules[$module])) {
      $rows[] = array(
        'data'        => array(
          array(
            'data'    => $modules[$module]['name'],
            'colspan' => 3,
          ),
        ),
        'class'       => array('region-title', 'region-title-header'),
        'no_striping' => TRUE,
      );
      unset($modules[$module]);
    }

    $rows[] = array(
      'data' => array(
        render($form[$child]['info']),
        render($form[$child]['title']),
        render($form[$child]['icon']),
      ),
    );
  }

  $output .= theme('table', array(
    'header'     => array(t('Block'), t('Title'), t('Icon')),
    'rows'       => $rows,
    'attributes' => array(
      'id' => array('blocks'),
    ),
    'sticky'     => TRUE,
  ));

  return $output . drupal_render_children($form);
}
