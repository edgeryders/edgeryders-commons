<?php
/**
 * @file
 * Libraries module integration.
 */

/**
 * Implements hook_libraries_info().
 */
function mentions_libraries_info() {
  $libraries['textcomplete'] = array(
    'name' => 'Textcomplete.js',
    'vendor url' => 'http://yuku-t.com/jquery-textcomplete/',
    'download url' => 'https://github.com/yuku-t/jquery-textcomplete/archive/master.zip',
    'version arguments' => array(
      'file' => 'package.json',
      'pattern' => '@([0-9a-zA-Z\.-]+)@',
    ),
    'files' => array(
      'css' => array(
        'dist/jquery.textcomplete.css',
      ),
      'js' => array(
        'dist/jquery.textcomplete.min.js',
      ),
    ),
  );

  return $libraries;
}
