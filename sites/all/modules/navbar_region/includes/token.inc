<?php
/**
 * @file
 * Token module integration.
 */

/**
 * Implements hook_form_FORM_ID_alter() on behalf of token.module.
 */
function token_form_navbar_region_admin_form_alter(&$form, &$form_state) {
  // Replacement patterns for field.
  $form['token_tree_link'] = array(
    '#type' => 'markup',
    '#markup' => theme('token_tree_link'),
  );
}
