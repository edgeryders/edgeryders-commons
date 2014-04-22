<?php

/**
 * @file
 * Admin settings for custom search taxonomy
 */

/**
 * Implements hook_help().
 */
function custom_search_taxonomy_help($path, $arg) {
  switch ($path) {
    case 'admin/config/search/custom_search/taxonomy':
      $output = t('Select the vocabularies to present as search options in the search block. If none is selected, no selector will be displayed.');
      break;
  }
  return $output;
}

function custom_search_taxonomy_admin() {
  $vocabularies = taxonomy_get_vocabularies();
  if (count($vocabularies)) {
    $form = _custom_search_taxonomy_admin_form($vocabularies);
    return system_settings_form($form);
  }
}
