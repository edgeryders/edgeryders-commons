<?php
/**
* @file edgeryders.aliases.drushrc.php
* Site aliases for edgeryders.eu, dev.edgeryders.eu, edgeryders.localdomain
*
* Link this file from /etc/drush/ or ~/.drush/
*
* Written according to the example at https://drupal.org/node/1401522
* See also http://drush.ws/examples/example.aliases.drushrc.php , esp. on GROUPNAME.aliases.drushrc.php.
*
* Usage:
*   To copy the development database to your local site:
*   $ drush sql-sync @yoursite.dev @yoursite.local
*
*   To copy your local database to the development site:
*   $ drush sql-sync @yoursite.local @yoursite.dev -structure-tables-key=common --no-ordered-dump --sanitize=0 --no-cache
*
*   To copy the production database to your local site:
*   $ drush sql-sync @yoursite.prod @yoursite.local
*
*   To copy all files in development site to your local site:
*   $ drush rsync @yoursite.dev:%files @yoursite.local:%files
*
*   Clear the cache in production:
*   $ drush @yoursite.prod clear-cache all
*
* You can look up the site alias configuration of an existing site as a reference:
*   $ drush site-alias @self --full --with-optional
*/

/**
* Local alias
*
* While possibly defined here, the local alias is better defined in an additional file on the local system because this is 
* in publicly visible version control, while the local path is different for every developer.
*/
//$aliases['local'] = array(
//  'root' => '/home/example/edgeryders-site/',
//  'uri'  => 'edgeryders.localdomain',
//);

/**
* Development alias
*/
$aliases['dev'] = array (
  'uri' => 'dev.edgeryders.eu',
  'root' => '/var/www/dev.edgeryders.eu/web',
);

/**
* Live site alias
*/
$aliases['live'] = array (
  // This is the full site alias name of the alias above, from which we inherit its config.
  'parent' => '@edgeryders.dev',
  'uri' => 'edgeryders.eu',
  'root' => '/var/www/edgeryders.eu/web',
);
?>

