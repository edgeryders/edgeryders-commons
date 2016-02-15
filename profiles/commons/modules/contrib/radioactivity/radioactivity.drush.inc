<?php

/**
 * Implements hook_drush_command().
 *
 * @See drush_parse_command() for a list of recognized keys.
 *
 * @return
 *   An associative array describing your command(s).
 */
function radioactivity_drush_command() {
  $items = array(); 
  
  $items['radioactivity-cron'] = array(
    'description' => 'Run Radioactivity cron job.',
    'aliases' => array('rad-cron'),
  );

  return $items;
}


function drush_radioactivity_cron() {
  radioactivity_cron();
}
