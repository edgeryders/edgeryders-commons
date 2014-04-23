<?php
// $Id$

/**
 * @file
 * jWYSIWYG integration plugin
 */

/**
  * Pseudo-hook for elfinder hook_wysiwyg_plugin implementation
  */
function elfinder_jwysiwyg_elfinder_editor_plugin($options) {
      if (VERSION < 7) {
        if (module_exists('jquery_update') && module_exists('jquery_ui')) {
          drupal_add_css(JQUERY_UI_PATH . '/themes/base/ui.all.css');
          jquery_ui_add(array('ui.dialog', 'ui.accordion', 'ui.draggable', 'ui.droppable', 'ui.selectable'));
        } 
        else {
          drupal_set_message(t('elFinder requires jQuery 1.3+ and jQuery UI 1.7+ for jWYSIWYG support. Please install and enable <a href="http://drupal.org/project/jquery_update">jquery_update</a> and <a href="http://drupal.org/project/jquery_ui">jquery_ui</a> modules.'), 'error');
        }
      }
      
      drupal_add_js(array('elfinder' => array('file_browser_url' => $options['elfinder_url'])), 'setting');
      drupal_add_js($options['plugin_url_base'] . '/jwysiwyg.js');
      
      return array(
        'elfinder' => array(
          'extensions' => array('elfinder' => t('elFinder')),
          'url' => $options['homepage_url'],
          'options' => array(),
          'load' => FALSE,
        ),
      );
}
