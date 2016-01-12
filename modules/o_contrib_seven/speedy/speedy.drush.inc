<?php

/**
 * @file
 * Drush integration for the speedy module.
 *
 * Copyright 2012 Hewlett-Packard Development Company, L.P.
 */

/**
 * Implements hook_drush_command().
 */
function speedy_drush_command() {
  $items = array();

  // @todo We do not need this high of a bootstrap. Only requires drupal codebase
  // without database.
  $items['speedy-min'] = array(
    'description' => 'Minify core JS for this version of core.',
    'arguments' => array(
      'uglifyjs' => 'The path to UglifyJS to minify the files.',
    ),
    'aliases' => array('smj'),
  );
  $items['speedy-min-module'] = array(
    'description' => 'Minify JS for a module.',
    'arguments' => array(
      'module' => 'The name of a particular module whose files you wish to minify.',
    ),
    'aliases' => array('smm'),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function speedy_drush_help($section) {
  switch ($section) {
    case 'drush:speedy-min':
      return dt("Look for unminified core JavaScript files and generate minified files that can be replaced via hook_library_alter().");
    case 'drush:speedy-min-module':
      return dt("Look for unminified JavaScript files in a particular module directory and minify them.");
  }
}

/**
 * Command callback to minify JS using UglifyJS.
 *
 * This is a command that walks through a Drupal codebase and produces minified
 * JavaScript files.
 */
function drush_speedy_min($uglifyjs) {

  if (empty($uglifyjs)) {
    drush_log(dt('The path to UglifyJS is missing.'), 'error');
    return;
  }

  $directory = DRUPAL_ROOT . '/' . drupal_get_path('module', 'speedy') . '/js/' . VERSION . '/';
  $directory_strlen = strlen(DRUPAL_ROOT . '/');

  // @todo Is there a cleaner way to create the directory?
  if (!is_dir($directory)) {
    mkdir($directory, 0775, TRUE);
  }

  // A list of files and directories to not act on.
  // @todo Make this configurable
  $blacklist = array(
    'misc/jquery.js',
    'misc/farbtastic/farbtastic.js',
    'misc/jquery.ba-bbq.js',
    'misc/jquery.cookie.js',
    'misc/jquery.form.js',
    'misc/ui',
    'sites',
  );

  // Make the blacklist full paths so all things are equal.
  foreach ($blacklist as $k => $v) {
    $blacklist[$k] = DRUPAL_ROOT . '/' . $v;
  }

  // @todo Replace file_scan_directory with PHP native call. Why does Drupal
  // reproduce a native php feature?
  $all_files = file_scan_directory(DRUPAL_ROOT, '/.js/');

  // Walk though each file and act on those not blacklisted.
  foreach ($all_files as $k => $file) {
    
    // Make sure the file isn't blacklisted.
    if (!_speedy_drush_blacklisted($blacklist, $file)) {
      // Minify and store the file.

      $new_path = $directory . substr($file->uri, $directory_strlen);
      $pathinfo = pathinfo($new_path);
      if (!is_dir($pathinfo['dirname'])) {
        mkdir($pathinfo['dirname'], 0775, TRUE);
      }

      $return = drush_shell_exec($uglifyjs . ' ' . $file->uri . ' > ' . $new_path);

      if ($return) {
        drush_log(dt('!filename was minified.', array('!filename' => $file->filename)), 'success');
      }
      else {
        // @todo Note that a file was created with the error information in it.
        drush_log(dt('There was an error when trying to minify !filename.', array('!filename' => $file->filename)), 'error');
      }
    }
  }
}

/**
 * Command callback to minify JS using UglifyJS.
 *
 * This is a command that walks through a particular Drupal module's codebase and produces minified
 * JavaScript files.
 */
function drush_speedy_min_module($module) {
  $directory = drupal_get_path('module', $module);
  $directory_strlen = strlen($directory);

  $all_files = file_scan_directory($directory, '/.js/');

  // Walk though each file.
  foreach ($all_files as $k => $file) {
    if (!strstr($file->filename, '.min.js')) {
      // Minify and store the file.
      $new_path = DRUPAL_ROOT . '/' . $directory . substr(str_replace('.js', '.min.js', $file->uri), $directory_strlen);
      // Delete an old version if it exists.
      if (file_exists($new_path)) {
        $result = drupal_unlink($new_path);
      }
      $pathinfo = pathinfo($new_path);
      if (is_dir($pathinfo['dirname'])) {
        chmod($pathinfo['dirname'], 0775);
      }

      $return = drush_shell_exec('/usr/local/bin/uglifyjs' . ' ' . $file->uri . ' > ' . $new_path);

      if ($return) {
        drush_log(dt('!filename was minified.', array('!filename' => $file->filename)), 'success');
      }
      else {
        drush_log(dt('There was an error when trying to minify !filename.', array('!filename' => $file->filename)), 'error');
      }
    }
  }

}

/**
 * Make sure a file uri is not on a blacklist.
 *
 * @param array $blacklist
 *  A list of files and directories for a blacklist.
 * @param stdClass $file
 *  A file object as returned from file_scan_directory(). At the very least it
 *  needs to have the public property $file->uri with the full path to the file.
 *
 * @return bool
 *  TRUE if the file is on the blacklist and FALSE otherwise.
 */
function _speedy_drush_blacklisted($blacklist, $file) {
  foreach ($blacklist as $k => $v) {
    if (is_dir($v)) {
      if (strpos($file->uri, $v) === 0) {
        return TRUE;
      }
    }
    elseif ($v == $file->uri) {
      return TRUE;
    }
  }

  return FALSE;
}