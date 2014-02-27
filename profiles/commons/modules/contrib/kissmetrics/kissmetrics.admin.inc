<?php

/**
 * @file
 * Contains KISSmetrics administration form callbacks.
 */

/**
 * Configuration form callback.
 */
function kissmetrics_configuration_form($form, &$form_state) {
  $form['kissmetrics_api_key'] = array(
    '#title' => t('API Key'),
    '#type' => 'textfield',
    '#default_value' => variable_get('kissmetrics_api_key'),
    '#required' => TRUE,
    '#description' => t('This ID is unique to each site you want to track separately. To get an API key, <a href="@kissmetrics">register your site with KISSmetrics</a>, or if you already have registered your site, go to your <a href="@settings">KISSmetrics Settings page</a>.', array('@kissmetrics' => 'http://www.kissmetrics.com', '@settings' => 'http://app.kissmetrics.com/settings')),
  );
  $form['kissmetrics_use_cron'] = array(
    '#type' => 'checkbox',
    '#title' => t('Process requests on cron'),
    '#description' => t('Write all requests to a log for bulk processing during cron runs. When disabled, a request is made to the KISSmetrics tracking servers every time data is recorded. A large number of requests or a slow connection to the KISSmetrics servers could adversely affect site performance.'),
    '#default_value' => variable_get('kissmetrics_use_cron', TRUE),
  );
  if (!kissmetrics_check_directory()) {
    form_set_error('kissmetrics_log_dir', t('The directory %directory does not exist or is not writable.', array('%directory' => kissmetrics_get_directory())));
  }
  $form['kissmetrics_log_dir'] = array(
    '#type' => 'textfield',
    '#title' => t('Request log directory'),
    '#default_value' => variable_get('kissmetrics_log_dir', 'kissmetrics'),
    '#size' => 30,
    '#maxlength' => 255,
    '#description' => t('Subdirectory where the request log data will be stored. This folder <strong>must not be shared</strong> with any other Drupal site or install using KISSmetrics.'),
    '#field_prefix' => file_build_uri(''),
    '#states' => array(
      'visible' => array(
        ':input[name="kissmetrics_use_cron"]' => array('checked' => TRUE),
      ),
      'required' => array(
        ':input[name="kissmetrics_use_cron"]' => array('checked' => TRUE),
      ),
    ),
  );

  // Visibility settings.
  $form['visibility_title'] = array(
    '#type' => 'item',
    '#title' => t('Visibility settings'),
  );
  $form['visibility'] = array(
    '#type' => 'vertical_tabs',
    '#attached' => array(
      'js' => array(drupal_get_path('module', 'kissmetrics') . '/kissmetrics.js'),
    ),
  );

  // Per-path visibility.
  $form['visibility']['path'] = array(
    '#type' => 'fieldset',
    '#title' => t('Pages'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#group' => 'visibility',
    '#weight' => 0,
  );

  $form['visibility']['path']['kissmetrics_visibility_mode'] = array(
    '#type' => 'radios',
    '#title' => t('Add tracking to specific pages'),
    '#options' => array(
      KISSMETRICS_VISIBILITY_NOTLISTED => t('All pages except those listed'),
      KISSMETRICS_VISIBILITY_LISTED => t('Only the listed pages'),
    ),
    '#default_value' => variable_get('kissmetrics_visibility_mode', KISSMETRICS_VISIBILITY_NOTLISTED),
  );
  $form['visibility']['path']['kissmetrics_visibility_pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Pages'),
    '#description' => t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>')),
    '#default_value' => variable_get('kissmetrics_visibility_pages', KISSMETRICS_PAGES),
  );

  $form['#submit'][] = 'kissmetrics_configuration_form_submit';

  return system_settings_form($form);
}

/**
 * Configuration form validate callback.
 */
function kissmetrics_configuration_form_validate($form, &$form_state) {
  $form_state['values']['kissmetrics_visibility_pages'] = trim($form_state['values']['kissmetrics_visibility_pages']);

  // Require a directory for the request log if cron log processing is enabled.
  if ($form_state['values']['kissmetrics_use_cron']) {
    $log_dir = trim($form_state['values']['kissmetrics_log_dir']);

    if (empty($log_dir)) {
      form_set_error('kissmetrics_log_dir', t('Request log directory field is required.'));
    }
  }
}

/**
 * Configuration form submit callback.
 */
function kissmetrics_configuration_form_submit($form, &$form_state) {
  $old_dir = kissmetrics_get_directory();
  $new_dir = kissmetrics_get_directory($form_state['values']['kissmetrics_log_dir']);

  // Move the request log if the directory changed.
  if ($old_dir != $new_dir) {
    kissmetrics_directory_move($old_dir, $new_dir);
  }
}
