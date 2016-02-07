<?php
/**
 * @file
 * User module integration.
 */

/**
 * Implements hook_mentions_input_source() on behalf of user.module.
 */
function user_mentions_input_source() {
  return array(
    'property:name' => t('User: account name'),
  );
}
