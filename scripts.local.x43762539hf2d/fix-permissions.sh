#!/bin/bash
#
# Script tofix file permissions for edgeryders.eu Drupal sites in order to make their hosting with suphp / FastCGI / PHP-FPM secure.
#
# NOTE: Do not use "find -print0 | xargs -0" here, as due to a bug it does not process all files. 
# xargs -I is sufficient as a workaround as it also can handle files with blanks.


#
# Find out what to do.
#

if (echo "$*" | grep -q -e "--live")
then
  echo "fixing permissions for edgeryders.eu live site";
  cd /var/www/edgeryders.eu/web/;
  chown_spec="web1:client1";
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
find . -type d | xargs -I "{}" chmod u+x,g+x {};

# Exceptions from file ownership rights.
chown -R root:root stats;

# Exceptions from file permissions: make relevant config files readable by Apache.
chmod a+r .htaccess* .htpasswd robots.txt* sites/edgeryders.eu/files/.htaccess sites/edgeryders.eu/private/.htaccess;

# Exceptions from file permissions: files that need to be read or executed via SSH.
chmod a+r sites/edgeryders.eu/edgeryders.aliases.drushrc.php;
chmod u+x scripts.local.x43762539hf2d/fix-permissions.sh;

# Exceptions from file permissions: files that need to be served by Apache directly.
# (Includes media, aggregated and non-aggregated CSS and JS, static HTML.)
chmod a+r+X sites/ sites/edgeryders.eu/;
find sites/edgeryders.eu/files/ -type d | xargs -I "{}" chmod u+w,a+r+x {};
find sites/edgeryders.eu/private/ -type d | xargs -I "{}" chmod u+w {};
# Care: * needed to avoid making .htaccess writable here:
chmod -R u+w,a+r sites/edgeryders.eu/files/*;
# The following use of -prune is based on a tip from http://stackoverflow.com/a/1489405/1270008
find . -path "./stats" -prune -or \( -name "*.css" -or -name "*.js" -or -name "*.jpg" -or -name "*.png" -or -name "*.gif" -or -name "*.svg" -or -name "*.html" \) -print | xargs -I "{}" chmod a+r {};

