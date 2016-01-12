<?php

/**
 * @file
 * Theme functions for Editor module.
 */

/**
 * Returns HTML for a captioned item, usually an image.
 */
function theme_editor_caption($variables) {
  $output = '';
  $output .= '<figure' . drupal_attributes($variables['attributes']) . '>';
  $output .= $variables['item'];
  $output .= '<figcaption>' . $variables['caption'] . '</figcaption>';
  $output .= '</figure>';
  return $output;
}
