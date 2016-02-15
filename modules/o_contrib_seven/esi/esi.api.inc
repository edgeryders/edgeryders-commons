<?php
/**
 * @file
 * API documentation for hooks defined by the ESI module.
 */

/**
 * Declare a handler for delivering content through ESI.
 */
function hook_esi_component() {
  return array(
    'block' => array(
      'preprocess' => 'esi_block__esi_block_prepare',
      'render'     => 'esi_block__esi_block_render',
      'flush'      => 'esi_block__esi_block_flush',
      'file'       => 'esi_block.esi.inc',
    ),
  );
}

/**
 * Alter the ESI handlers.
 *
 * @see hook_esi_component_info().
 *
 * @param Array $esi_component_info
 * Array of ESI component handlers.
 */
function hook_esi_component_info_alter(&$esi_component_info) {
  // Change the block handler to use a custom renderer.
  $esi_component_info['block']['render'] = 'my_custom_fast_renderer';
}

/**
 * Alter the rendered ESI component.
 *
 * @param Array $esi_rendered_component
 * An ESI component, delivered as a renderable array.
 */
function hook_esi_rendered_component_alter(&$esi_rendered_component) {
  $key = key($esi_rendered_component);
  // Add another theme wrapper.
  $esi_rendered_component[$key]['#theme_wrappers'][] = 'custom_rounded_corners';
}

/**
 * ESI cache contexts allow the best granularity of cache-contexts for a user.
 * For example, a natal module might provide granularity based on gender, where
 * information is targeted at specific genders (according to recorded gender in
 * a profile, for example).
 *
 * @param Object $account
 * A fully-loaded Drupal account.
 *
 * @return Array
 * Array where the keys are the context, and the value is the specific context
 * for the user account provided.
 */
function hook_esi_context($account) {
  $gender = my_module__get_gender($account);
  return array(
    'GENDER' => $gender,
  );
}

/**
 * Allow other modules to alter the context setting.
 *
 * @see hook_esi_context().
 *
 * @param array $contexts
 * Array of context data as provided by hook_esi_context().
 * @param Object $account
 * A fully-loaded Drupal account.
 */
function hook_esi_context_alter($contexts, $account) {
  // Change the 'GENDER' context so it's relevant to the location, in order to
  // provide information appropriate to the local region as well as gender.
  $region = my_module__get_region($account);
  $contexts['GENDER'] = $region . ':' . $contexts['GENDER'];
}

/**
 * Change the context-specific cookie data before it's sent as cookies.
 */
function hook_esi_context_cookies_alter(&$cookie_data) {
  // "Encrypt" data with ROT 13.
  foreach ($cookie_data as &$cookie) {
    $cookie['value'] = str_rot13($cookie['value']);
  }
}

/**
 * Provide a method of rendering an ESI URL: for example, as an ESI tag, or an
 * SSI tag, or a div to render via AJAX.
 *
 * @return array(
 *   'mode_identifier' => array(
 *     // This title will be translated where used in the UI.
 *     'title' => 'Human-readable name of this ESI mode.',
 *     // The render handler receives a single parameter: $url.
 *     'render' => 'render_function_to_call',
 *   )
 * )
 */
function hook_esi_mode() {
  return array(
    'ssi' => array(
      'title' => 'SSI tag',
      'render' => 'mymodule_ssi_tag',
    ),
  );
}

/**
 * Change the ESI render modes provided by hook_esi_mode().
 *
 * @see hook_esi_mode().
 */
function hook_esi_mode_alter(&$modes) {
  // Change the SSI render function to a replacement which changes "<!-- #" to
  // "<!--#".
  $modes['ssi']['render'] = 'mymodule_ssi_tag';
}
