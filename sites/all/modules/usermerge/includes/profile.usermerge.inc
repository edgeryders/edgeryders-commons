<?php
/**
 * @file
 * Adds support for Profile.
 * Supplemental include loaded via usermerge_load_includes().
 */

/**
 * Implements hook_usermerge_actions_supported().
 */
function profile_usermerge_actions_supported() {
  return array(
    'profile' => t('Merging profile data using the new account where it is populated.'),
  );
}

/**
 * Implements hook_usermerge_merge_accounts() on behalf of profile module.
 */
function profile_usermerge_merge_accounts($user_to_delete, $user_to_keep, $review) {
  // retrieve kept-user's user field values
  if (module_exists('profile')) { //testing for profile, which is hidden in D6
      $result = db_query("SELECT fid FROM {profile_values} WHERE uid = :uid AND VALUE <> ''", array(':uid' => $user_to_keep->uid));
      $kept = array();
      while ($record = db_fetch_array($result)) {
        $kept[] = $record['fid'];
      }
      if (!empty($kept)) {
         // Remove profile values for blocked-user that kept-user has.
        db_delete('profile_values')
        ->condition('uid', $user_to_delete->uid)
        ->condition('fid', implode(',', $kept), 'IN')
        ->execute();
      }

      // Remove empty profile values for kept-user.
      db_delete('profile_values')
      ->condition('uid', $user_to_keep->uid)
      ->condition('VALUE', '')
      ->execute();

      // Change uid.
      db_update('profile_values')
      ->fields(array(
        'uid' => $user_to_keep->uid,
      ))
      ->condition('uid', $user_to_delete->uid)
      ->execute();
    }
}