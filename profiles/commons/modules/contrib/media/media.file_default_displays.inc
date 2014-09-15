<?php

/**
 * @file
 * Default display configuration for the default file types.
 */

/**
 * Implements hook_file_default_displays_alter().
 */
function media_file_default_displays_alter(&$file_displays) {
  // Image previews should be displayed using the media image style.
  if (isset($file_displays['image__preview__file_field_image'])) {
    $file_displays['image__preview__file_field_image']->settings['image_style'] = 'media_thumbnail';
  }
}
