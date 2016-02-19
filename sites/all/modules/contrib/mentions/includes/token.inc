<?php
/**
 * @file
 * Token module integration.
 */

/**
 * Implements hook_form_mentions_form_alter() on behalf of token.module.
 */
function token_form_mentions_form_alter(&$form, $form_state) {
  $form['mentions']['output']['tokens'] = array(
    '#markup' => theme('token_tree', array(
      'token_types' => array('user'),
      'global_types' => TRUE,
      'click_insert' => TRUE,
      'dialog' => TRUE,
    )),
  );
}
