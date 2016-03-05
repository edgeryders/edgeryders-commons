<?php

/**
 * @file
 * Administrative page callbacks for the Content Experiments module.
 */

/**
 * Implements hook_admin_settings() for configuring the module.
 *
 * @param array $form_state
 *   structure associative drupal form array
 * @return array
 */
function content_experiments_admin_settings_form() {
  $form['role_vis_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Role specific script settings'),
    '#collapsible' => TRUE,
    '#group' => 'zopim',
  );

  $roles = user_roles();
  $role_options = array();
  foreach ($roles as $rid => $name) {
    $role_options[$rid] = $name;
  }
  $form['role_vis_settings']['content_experiments_roles'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Remove script for specific roles'),
    '#default_value' => variable_get('content_experiments_roles', array()),
    '#options' => $role_options,
    '#description' => t('Remove script only for the selected role(s). If none of the roles are selected, all roles will have the script. Otherwise, any roles selected here will NOT have the script.'),
  );

  // Page specific visibility configurations.
  $form['page_vis_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Page specific script settings'),
    '#collapsible' => TRUE,
    '#group' => 'content_experiments',
  );

  $access = user_access('use PHP for content experiments visibility');
  $visibility = variable_get('content_experiments_visibility', 0);
  $pages = variable_get('content_experiments_pages', '');

  if ($visibility == 2 && !$access) {
    $form['page_vis_settings'] = array();
    $form['page_vis_settings']['visibility'] = array('#type' => 'value', '#value' => 2);
    $form['page_vis_settings']['pages'] = array('#type' => 'value', '#value' => $pages);
  }
  else {
    $options = array(t('Add to every page except the listed pages.'), t('Add to the listed pages only.'));
    $description = t("Enter one page per line as Drupal paths. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>'));
    if ($access) {
      $options[] = t('Add if the following PHP code returns <code>TRUE</code> (PHP-mode, experts only).');
      $description .= ' '. t('If the PHP-mode is chosen, enter PHP code between %php tags. Note that executing incorrect PHP-code can break your Drupal site.', array('%php' => '<?php ?>'));
    }
    $form['page_vis_settings']['content_experiments_visibility'] = array(
      '#type' => 'radios',
      '#title' => t('Add script to specific pages'),
      '#options' => $options,
      '#default_value' => $visibility,
    );
    $form['page_vis_settings']['content_experiments_pages'] = array(
      '#type' => 'textarea',
      '#title' => t('Pages'),
      '#default_value' => $pages,
      '#description' => $description,
      '#wysiwyg' => FALSE,
    );
  }
  // END Page specific visibility configurations.

  return system_settings_form($form);
}