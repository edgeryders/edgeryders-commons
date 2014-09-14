<?php

/**
 * Implements hook_ckeditor_plugin().
 */
function ckeditor_ckeditor_plugin() {
  $plugins = array();
  $editor_path = ckeditor_path('local') . '/';
  $plugin_dir = ckeditor_module_path('local') . '/plugins/';
  $plugin_dir_additional = ckeditor_plugins_path('local') . '/';

  /*
   * CKEditor build-in plugins
   */
  $_editor_path = ltrim($editor_path, './');
  if (file_exists($editor_path . 'plugins/tableresize/plugin.js')) {
    $plugins['tableresize'] = array(
      'name' => 'tableresize',
      'desc' => t('Table Resize plugin'),
      'path' => $_editor_path . 'plugins/tableresize/',
      'buttons' => FALSE,
      'default' => 't'
    );
  }

  if (file_exists($editor_path . 'plugins/autogrow/plugin.js')) {
    $plugins['autogrow'] = array(
      'name' => 'autogrow',
      'desc' => t('Auto Grow plugin'),
      'path' => $_editor_path . 'plugins/autogrow/',
      'buttons' => FALSE,
      'default' => 'f'
    );
  }

  if (file_exists($editor_path . 'plugins/stylesheetparser/plugin.js')) {
    $plugins['stylesheetparser'] = array(
      'name' => 'stylesheetparser',
      'desc' => t('Stylesheet Parser plugin'),
      'path' => $_editor_path . 'plugins/stylesheetparser/',
      'buttons' => FALSE,
      'default' => 'f'
    );
  }

  /*
   * CKEditor module plugins
   */
  $_plugin_dir = ltrim($plugin_dir, './');
  if ($handle = opendir($plugin_dir)) {
    while (false !== ($file = readdir($handle))) {
      if (is_dir($plugin_dir . $file) && file_exists($plugin_dir . $file . '/plugin.js')) {
        $source = file_get_contents($plugin_dir . $file . '/plugin.js');
        if (preg_match('#@file ([^\n\r]*)#', $source, $matches)) {
          $plugins[$file] = array(
            'name' => $file,
            'desc' => t($matches[1]),
            'path' => $_plugin_dir . $file . '/',
            'buttons' => FALSE,
            'default' => 'f'
          );
        }
        else {
          $plugins[$file] = array(
            'name' => $file,
            'desc' => t('Plugin file: ' . $file),
            'path' => $_plugin_dir . $file . '/',
            'buttons' => FALSE,
            'default' => 'f'
          );
        }
      }
    }
    closedir($handle);
  }

  /*
   * CKEditor module plugins - additional directory
   */
  $_plugin_dir_additional = ltrim($plugin_dir_additional, './');
  if ($plugin_dir != $plugin_dir_additional && is_dir($plugin_dir_additional) && $handle = opendir($plugin_dir_additional)) {
    while (false !== ($file = readdir($handle))) {
      if (is_dir($plugin_dir_additional . $file) && file_exists($plugin_dir_additional . $file . '/plugin.js')) {
        $source = file_get_contents($plugin_dir_additional . $file . '/plugin.js');
        if (preg_match('#@file ([^\n\r]*)#', $source, $matches)) {
          $plugins[$file] = array(
            'name' => $file,
            'desc' => t($matches[1]),
            'path' => $_plugin_dir_additional . $file . '/',
            'buttons' => FALSE,
            'default' => 'f'
          );
        }
        else {
          $plugins[$file] = array(
            'name' => $file,
            'desc' => t('Plugin file: ' . $file),
            'path' => $_plugin_dir_additional . $file . '/',
            'buttons' => FALSE,
            'default' => 'f'
          );
        }
      }
    }

    closedir($handle);
  }

  return $plugins;
}

/**
 * Implements hook_ckeditor_plugin_alter().
 */
function ckeditor_ckeditor_plugin_alter(&$plugins) {
  if (isset($plugins['media']) && module_exists('media') == FALSE) {
    unset($plugins['media']);
  }

  if (isset($plugins['imce']) && module_exists('imce') == FALSE) {
    unset($plugins['imce']);
  }
  //remove page break button if there is no module to do this
  if (isset($plugins['drupalbreaks']['buttons']['DrupalPageBreak']) && !module_exists('paging') && !module_exists('pagebreak')) {
    unset($plugins['drupalbreaks']['buttons']['DrupalPageBreak']);
  }

  if (isset($plugins['drupalbreaks'])) {
    $plugins['drupalbreaks']['default'] = 't';
  }
}
