<?php
/**
 * @file
 * Drush integration.
 */

/**
 * Implements hook_drush_command().
 */
function mentions_drush_command() {
  $items = array();

  $items['mentions-library'] = array(
    'callback' => 'drush_mentions_library',
    'description' => dt('Download the Textcomplete library for Mentions.'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'arguments' => array(
      'path' => dt('Optional. A path where to install the Textcomplete library. If omitted Drush will use the default location.'),
    ),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function mentions_drush_help($section) {
  switch ($section) {
    case 'drush:mentions-library':
      return dt('Download and install the Textcomplete library, default location is sites/all/libraries.');
  }
}

/**
 * Drush command callback for Mentions library downloader.
 *
 * @param $path
 *   The path to download the library to. Defaults to 'sites/all/libraries'.
 */
function drush_mentions_library($path = 'sites/all/libraries') {
  $file = 'https://github.com/Decipher/jquery-textcomplete/archive/master.zip';
  $dirname = 'textcomplete';

  // Create the path if it does not exist.
  if (!is_dir($path)) {
    drush_op('mkdir', $path);
    drush_log(dt('Directory @path was created', array('@path' => $path)), 'notice');
  }

  // Set the directory to the download location.
  $olddir = getcwd();
  chdir($path);

  // Download the library file.
  if ($filepath = drush_download_file($file)) {
    $filename = basename($filepath);

    // Remove any existing library directory.
    if (is_dir($dirname)) {
      drush_delete_dir($dirname, TRUE);
      drush_log(dt('An existing library was deleted from @path', array('@path' => $path)), 'notice');
    }

    // Decompress the library file.
    $listing = drush_tarball_extract($filename, FALSE, TRUE);
    if (strpos(end($listing), $dirname) !== 0) {
      drush_move_dir(reset(explode('/', end($listing))), $dirname);
    }
  }

  if (is_dir($dirname)) {
    drush_log(dt('Mentions library has been installed in @path', array('@path' => $path)), 'success');
  }
  else {
    drush_log(dt('Drush was unable to install the Mentions library to @path', array('@path' => $path)), 'error');
  }

  // Set working directory back to the previous working directory.
  chdir($olddir);
}
