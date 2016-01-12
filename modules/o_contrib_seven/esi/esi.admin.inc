<?php
/**
 * @file
 * Admin integration for the ESI module.
 */

/**
 * Callback for the admin_menu module which clears all ESI caches.
 */
function esi_admin_menu_flush_cache() {
  // @TODO: Check this integrates with varnish/expire properly: this should
  // expire *all* known external caches.
  cache_clear_all('esi:', 'cache_page', TRUE);

  drupal_set_message(t('Edge-side-include caches cleared.'));

  // The menu callback actions the cache-clear request, but doesn't display a
  // page.  Ensure the user is redirected back to a suitable page.
  drupal_goto();
}

/**
 * Menu handler to display the configuration form.
 */
function esi_admin_configuration_form() {
  // Global Settings.
  $form['global'] = array(
    '#type' => 'fieldset',
    '#title' => t('Global Settings'),
  );

  $options = array();
  foreach (esi_get_modes() as $mode_key => $settings) {
    $options[$mode_key] = t($settings['title']);
  }

  $form['global']['esi_render_mode'] = array(
    '#type' => 'radios',
    '#title' => t('Render mode'),
    '#options' => $options,
    '#default_value' => variable_get('esi_render_mode', ESI_DEFAULT_RENDER_MODE),
  );
  $form['global']['esi_default_ttl'] = array(
    '#type' => 'select',
    '#title' => t('TTL'),
    '#description' => t('Default cache-lifespan for ESI fragments'),
    '#options' => esi_max_age_options(variable_get('esi_default_ttl', ESI_DEFAULT_TTL)),
    '#default_value' => variable_get('esi_default_ttl', ESI_DEFAULT_TTL),
  );

  $form['global']['esi_ajax_fallback'] = array(
    '#type' => 'checkbox',
    '#title' => t('AJAX fallback'),
    '#description' => t('Process ESI tags in the browser, to allow the use of ESI without an ESI-supporting edge device'),
    '#default_value' => variable_get('esi_ajax_fallback', ESI_DEFAULT_AJAX_FALLBACK),
  );
  $form['global']['esi_ajax_fallback_contextualize_url'] = array(
    '#type' => 'checkbox',
    '#title' => t('Personalize AJAX fallback URLs'),
    '#description' => t('When handling ESI tags in the browser, the ESI context can be retrieved from the cookie and added to the ESI URL, which allows the content to be cached by downstream proxies.'),
    '#default_value' => variable_get('esi_ajax_fallback_contextualize_url', ESI_DEFAULT_AJAX_FALLBACK_CONTEXTUALIZE_URL),
  );

  $form['context_cookies'] = array(
    '#type' => 'fieldset',
    '#title' => t('User-context cookies'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['context_cookies']['esi_harden_cookie_key'] = array(
    '#type' => 'checkbox',
    '#title' => t('Harden cookie names'),
    '#description' => t('Append the session-name (which varies per-site) to the user context-cookies.'),
    '#default_value' => variable_get('esi_harden_cookie_key', ESI_DEFAULT_CONTEXT_COOKIES_HARDENING),
  );
  $form['context_cookies']['esi_seed_key_rotation_interval'] = array(
    '#type' => 'select',
    '#title' => t('Seed rotation period'),
    '#description' => t('The user-context cookies are encrypted against a rotating key, which limits how long an invalidated user can access privileged content.'),
    '#options' => esi_max_age_options(variable_get('esi_seed_key_rotation_interval', ESI_SEED_ROTATION_INTERVAL)),
    '#default_value' => variable_get('esi_seed_key_rotation_interval', ESI_SEED_ROTATION_INTERVAL),
  );
  // @TODO: Add a 'Rotate seed key' button.

  return system_settings_form($form);
}
