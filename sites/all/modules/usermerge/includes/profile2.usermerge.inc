<?php
/**
 * @file
 * Adds support for Profile 2.
 * Supplemental include loaded via usermerge_load_includes().
 */

/**
 * Implements hook_usermerge_actions_supported().
 */
function profile2_usermerge_actions_supported() {
  return array(
    'profile' => t('Merge Profile 2 profiles.'),
  );
}

/**
 * Implements hook_usermerge_account_properties().
 */
function profile2_usermerge_account_properties($user_to_delete, $user_to_keep) {
  // Set the account properties.
  $account_properties = array();

  // Retrieve all bundles for the profile.
  $bundles = field_info_bundles('profile2');

  // Set the profile fields as properties.
  foreach ($bundles as $bundle => $bundle_info) {
    // Set the bundle information.
    $account_properties[$bundle] = array(
      'title' => t('Profile - @label', array('@label' => $bundle_info['label'])),
      'type' => $bundle,
      'items' => array(),
    );

    // Add all fields from that bundle.
    foreach (field_info_instances('profile2', $bundle) as $name => $info) {
      $item = array(
        'label' => str_replace(':', '', $info['label']),
      );

      // Set the item.
      $account_properties[$bundle]['items'][$name] = $item;
    }
  }

  return array('profile2' => $account_properties);
}

/**
 * Implements hook_usermerge_build_review_form_elements().
 */
function profile2_usermerge_build_review_form_elements($review, $account_properties, $user_to_delete, $user_to_keep) {
  // Iterate through each bundle.
  foreach ($account_properties['profile2'] as $bundle => $properties) {
    // Generate form based on items.
    $review['profile2'][$bundle] = _profile2_usermerge_build_review_form_elements_by_bundle($properties, $user_to_delete, $user_to_keep);
  }

  return $review;
}

/**
 * Pass in review elements per bundle.
 *
 * @param array $properties
 *   Entity properties.
 * @param object $user_to_delete
 *   User entity to delete.
 * @param object $user_to_keep
 *   User entity to keep.
 *
 * @return array
 *   The form array to render.
 */
function _profile2_usermerge_build_review_form_elements_by_bundle($properties, $user_to_delete, $user_to_keep) {
  $review = array();

  // Set up profile tree..
  $review = array(
    '#tree' => TRUE,
    '#theme' => 'usermerge_data_review_form_table',
    '#title' => $properties['title'],
    '#weight' => -10,
  );

  // Load the profile for the user to delete and keep.
  $profile_delete = profile2_load_by_user($user_to_delete, $properties['type']);
  $profile_keep = profile2_load_by_user($user_to_keep, $properties['type']);

  // Do nothing if one of the profiles doesn't exist.
  if (empty($profile_delete) || empty($profile_keep)) {
    $review['no_info']['property_name'] = array(
      '#type' => 'markup',
      '#markup' => t('Profile'),
    );

    $review['no_info']['options']['user_to_delete'] = array(
      '#type' => 'markup',
      '#markup' => t('No Profiles Found - profile information will not be imported'),
    );

    return $review;
  }

  foreach ($properties['items'] as $name => $info) {
    $review[$name]['property_name'] = array(
      '#type' => 'markup',
      '#markup' => $info['label'],
    );

    // Init the values we will be displaying.
    $values = array(
      'delete' => _profile2_usermerge_process_field($profile_delete, $name),
      'keep' => _profile2_usermerge_process_field($profile_keep, $name),
    );

    $review[$name]['options'] = array(
      '#type' => 'radios',
      '#options' => array(
        'user_to_delete' => $values['delete'],
        'user_to_keep' => $values['keep'],
      ),
      '#default_value' => 'user_to_keep',
    );

    if (isset($info['criterion'])) {
      unset($review[$name]['options']['#options']);
      $review[$name]['options']['#options']['merge'] = 'merge';
      $review[$name]['options']['#default_value'] = 'merge';
    }
  }

  return $review;
}

/**
 * Process all fields.
 *
 * @param object $profile
 *   The profile2 entity.
 * @param string $name
 *   The name of the field.
 *
 * @return array
 *   Renderable output for the field.
 */
function _profile2_usermerge_process_field($profile, $name) {
  // Retrieve the field values.
  $values = field_get_items('profile2', $profile, $name);

  // Default to empty text.
  $ret = '';

  // Check that field_get_items returns an array.
  if (is_array($values)) {
    // Display single values.
    if (count($values) == 1) {
      $value = reset($values);
      $view = field_view_value('profile2', $profile, $name, $value);

      // Markup.
      if (isset($view['#markup'])) {
        // Take up to 50 characters from the markup.
        $ret = drupal_substr(strip_tags($view['#markup']), 0, 50);
      }
      // Title.
      elseif (isset($view['#title'])) {
        $ret = drupal_substr(strip_tags($view['#title']), 0, 50);
      }
      // Can't display for now.
      else {
        $ret = t('Value Set - Error Displaying');
      }
    }
    // Show that we are trying to merge in multiple values.
    else {
      $ret = t('Multiple Values (Array)');
    }
  }

  return $ret;
}

/**
 * Implements hook_usermerge_merge_accounts().
 */
function profile2_usermerge_merge_accounts($user_to_delete, $user_to_keep, $review) {
  // Iterate through each bundle.
  foreach ($review['profile2'] as $bundle => $options) {
    // User merge on each bundle.
    _profile2_usermerge_merge_accounts_by_bundle($bundle, $user_to_delete, $user_to_keep, $options);
  }
}

/**
 * Merge accounts by profile2 bundle name.
 *
 * @param string $bundle
 *   Profile2 bundle name.
 * @param object $user_to_delete
 *   User entity to delete.
 * @param object $user_to_keep
 *   User entity to keep.
 *
 * @return array
 *   The form array to render.
 */
function _profile2_usermerge_merge_accounts_by_bundle($bundle, $user_to_delete, $user_to_keep, $review) {
  // Load the profile for the user to delete and keep.
  $profile_delete = profile2_load_by_user($user_to_delete, $bundle);
  $profile_keep = profile2_load_by_user($user_to_keep, $bundle);

  // Do nothing if one of the profiles does not exist.
  if (empty($profile_delete) || empty($profile_keep)) {
    return;
  }

  // ===============
  // Merge fields based on review.
  // ===============
  foreach ($review as $name => $options) {
    $option = reset($options);

    // Switch on the name.
    switch ($option) {
      // Get value from merge (nust be an array).
      case 'merge':
        $value = array();

        // Retrieve the languages.
        $languages = array_merge(array_keys($profile_delete->$name), array_keys($profile_keep->$name));

        // Set language keys.
        foreach ($languages as $lang) {
          // Init to array.
          $value[$lang] = array();

          // Add user to delete items.
          if (!empty($profile_delete->$name[$lang])) {
            $value[$lang] = array_merge($value[$lang], $profile_delete->$name[$lang]);
          }

          // Add user to keep items.
          if (!empty($profile_keep->$name[$lang])) {
            $value[$lang] = array_merge($value[$lang], $profile_keep->$name[$lang]);
          }
        }
        break;

      // Get value from delete.
      case 'user_to_delete':
        $value = $profile_delete->$name;
        break;

      // User to keep is the default case.
      case 'user_to_keep':
      default:
        $value = $profile_keep->$name;
        break;
    }

    // Set the value.
    $profile_keep->$name = $value;
  }

  // Save the updated profile.
  profile2_save($profile_keep);

  // Delete the profile for the deleted user.
  profile2_delete($profile_delete);
}
