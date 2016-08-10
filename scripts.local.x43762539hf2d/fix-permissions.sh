#!/bin/bash
#
# Script to fix file permissions for edgeryders.eu Drupal sites 
# in order to make their hosting with suphp / FastCGI / PHP-FPM secure.
#
# Implementation note on xargs usage: 
# Filenames of user-uploaded files will occasionally contain whitespace, quotation characters and other 
# nonsense. xargs -I can handle whitespace, but not quotation characters. If we use it, the whole 
# find | xargs command will be without effect, perhaps leaving files unreadable by the webserver. Which 
# is really bad for a website, to be damaged by an automated command called by cron.
#   So we need the "find -print0 | xargs -0" construct to also handle quote characters. But that has 
# kind of a bug: it might silently fail to process some files if the environment size (arguments and 
# variables) gets too much to pass around. See http://unix.stackexchange.com/a/72822 . It happens in 
# some obscure cases, and also happens with the commands below. To be on the safe side, we use "xargs -n50" 
# to limit the number of arguments passed to xargs in one call. This is reported to fix it on 
# http://unix.stackexchange.com/q/72769#comment105409_72769 but it has to be confirmed for the cases below.


#
# Find out what to do.
#

if (echo "$*" | grep -q -e "--live")
then
  echo "fixing permissions for edgeryders.eu live site";
  cd /var/www/edgeryders.eu/web/;
  chown_spec="web1:client1";
elif (echo "$*" | grep -q -e "--dev2")
then
  echo "fixing permissions for edgeryders.eu dev2 site";
  cd /var/www/dev2.edgeryders.eu/web/;
  chown_spec="web14:client1";
elif (echo "$*" | grep -q -e "--dev")
then
  echo "fixing permissions for edgeryders.eu dev site";
  cd /var/www/dev.edgeryders.eu/web/;
  chown_spec="web6:client1";
else
  echo "missing argument for which site to fix permissions (--live or --dev); exiting";
  exit 1;
fi


#
# Actually fix file permissions.
#

# Set defaults for file ownership rights and permissions.
chown -R "$chown_spec" * .[a-z]*;
chmod -R u=r,go= * .[a-z]*;
find . -type d -print0 | xargs -n50 -0 -I "{}" chmod u+x,g+x {};

# Exceptions from file ownership rights.
chown -R root:root stats;

# Exceptions from file permissions: config files that have to be readable by Apache.
chmod a+r .htaccess* .htpasswd robots.txt* sites/edgeryders.eu/files/.htaccess sites/edgeryders.eu/private/.htaccess;

# Exceptions from file permissions: files that need to be read or executed via SSH.
chmod a+r sites/edgeryders.eu/edgeryders.aliases.drushrc.php;
chmod u+x scripts.local.x43762539hf2d/fix-permissions.sh;

# Exceptions from file permissions: files that need to be readable by Apache b/c they are served directly.
# (Includes all public files, media, aggregated and non-aggregated CSS and JS, static HTML.)
chmod a+r+X sites/ sites/edgeryders.eu/;
find sites/edgeryders.eu/files/ -type d -print0 | xargs -n50 -0 -I "{}" chmod a+r+x {};
chmod -R a+r sites/edgeryders.eu/files/*; # Care: * to avoid making .htaccess* writable.
# The following use of -prune is based on a tip from http://stackoverflow.com/a/1489405
find . -path "./stats" -prune -or \( -name "*.css" -or -name "*.js" -or -name "*.jpg" -or -name "*.png" -or -name "*.gif" -or -name "*.svg" -or -name "*.html" \) -print0 | xargs -n50 -0 -I "{}" chmod a+r {};

# Exceptions from file permission: upload directories and uploaded files must be writable by Drupal.
find sites/edgeryders.eu/files/ -type d -print0 | xargs -n50 -0 -I "{}" chmod u+w {};
find sites/edgeryders.eu/private/ -type d -print0 | xargs -n50 -0 -I "{}" chmod u+w {};
chmod -R u+w sites/edgeryders.eu/files/*; # Care: * to avoid making .htaccess* writable.

# Exceptions from file permissions: theme directories for generated files must be writable by PHP-FPM.
chmod -R u+w profiles/commons/themes/commons/commons_origins/generated_files;
chmod -R u+w profiles/commons/themes/contrib/adaptivetheme/at_core/generated_files;
chmod -R u+w profiles/commons/themes/contrib/adaptivetheme/at_admin/generated_files;
chmod -R u+w sites/all/themes/commons_edge/generated_files;

# Exceptions from file permissions: Edgesense files must be writable by Drupal.
# (It is not sufficient for them to be deletable and replacable due to limitations in Edgesense.)
chmod u+w sites/edgeryders.eu/private/edgesense/script/edgesense.log;
chmod u+w sites/edgeryders.eu/private/edgesense/script/run.json;
chmod u+w sites/edgeryders.eu/private/edgesense/site_data/edgesense_comments.json;
chmod u+w sites/edgeryders.eu/private/edgesense/site_data/edgesense_nodes.json;
chmod u+w sites/edgeryders.eu/private/edgesense/site_data/edgesense_users.json;

