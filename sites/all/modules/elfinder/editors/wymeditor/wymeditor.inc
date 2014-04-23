<?php
// $Id$

/**
 * @file
 * WYMeditor integration plugin
 */

/**
  * Pseudo-hook for elfinder hook_wysiwyg_plugin implementation
  */
function elfinder_wymeditor_elfinder_editor_plugin($options) {
      drupal_add_js($options['plugin_url_base'] . '/wymeditor.js');
      drupal_add_js(array('elfinder' => array('file_browser_url' => $options['elfinder_url'])), 'setting');
      return array(
        'elfinder' => array(
          'extensions' => array('elfinder' => t('elFinder')),
          'url' => $options['homepage_url'],
          'options' => array(),
          'load' => FALSE,
        ),
      );
}
