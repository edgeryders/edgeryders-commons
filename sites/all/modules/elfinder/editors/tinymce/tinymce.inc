<?php
// $Id$

/**
 * @file
 * TinyMCE integration plugin
 */

/**
  * Pseudo-hook for elfinder hook_wysiwyg_plugin implementation
  */
function elfinder_tinymce_elfinder_editor_plugin($options) {
      drupal_add_js($options['plugin_url_base'] . '/tinymce.js');
      return array(
        'elfinder' => array(
          'extensions' => array('elfinder' => t('elFinder')),
          'url' => $options['homepage_url'],
          'options' => array(
            'file_browser_callback' => 'elfinder_tinymce_browse_callback',
            'file_browser_url' => $options['elfinder_url'], // non standard TinyMCE configuration variable to pass source application to elFinder
            'inline_styles' => TRUE,
          ),
          'load' => FALSE,
        ),
      );
}
