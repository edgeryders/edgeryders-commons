<?php

/**
 * @file
 * Save custom CSS to file
 */
function at_core_submit_custom_css($form_state, $theme_name) {
  $values = $form_state['values'];
  $path = $values['path'];
  $custom_css = '';
  if (!empty($values['custom_css'])) {
    // sanitize user entered data
    $custom_css = filter_xss_admin($values['custom_css']);
  }

  $file_name = $theme_name . '.custom.css';
  $filepath = $path . '/' . $file_name;
  file_unmanaged_save_data($custom_css, $filepath, FILE_EXISTS_REPLACE);
}
