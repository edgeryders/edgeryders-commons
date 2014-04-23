<?php
// $Id$

/**
 * @file
 * BUEditor integration plugin
 */

/**
  * Pseudo-hook for elfinder hook_wysiwyg_plugin implementation
  */
function elfinder_bueditor_elfinder_editor_plugin($options) {
      drupal_add_js(array('elfinder' => array('moduleUrl' => url('elfinder'))), 'setting');
      drupal_add_js(array('elfinder' => array('moduleUrl' => url('elfinder'))), 'setting');
      drupal_add_js($options['plugin_url_base'] . '/bueditor.js');

      return array(
        'elfinder' => array(
          'extensions' => array('elfinder' => t('elFinder')),
          'url' => $options['homepage_url'],
          'options' => array(),
          'load' => FALSE,
        ),
      );
}
