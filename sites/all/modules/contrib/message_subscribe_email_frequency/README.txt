CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Installation


INTRODUCTION
------------

Message Subscribe Email Frequency allows the user to select the frequency of
email notifications normally sent by the Message Subscribe Email module
(https://drupal.org/project/message_subscribe) , including turning them off
completely. It integrates with the Message Digest module
(https://drupal.org/project/message_digest) to allow for selecting a daily or
weekly digest instead of immediately receiving notifications.

A field titled 'How often would you like to receive email notifications?' 
is added to the user's profile, allowing the user to select their desired 
email frequency.

This module also integrates with Drupal Commons 
(https://drupal.org/project/commons) via the Commons Follow Message Suscribe 
Email Frequency module (https://drupal.org/sandbox/anemirovsky/2125441).

For a full description of the module, visit the sandbox project page:
  https://drupal.org/sandbox/anemirovsky/2125411

To submit bug reports and feature suggestions, or to track changes:
  https://drupal.org/project/issues/2125411


INSTALLATION
------------

 * Install as usual, see 
https://drupal.org/documentation/install/modules-themes/modules-7 for 
further information.

 * On the "Message subscribe settings" page 
(/admin/config/system/message-subscribe), ensure that NONE of the following 
notifiers are selected by default".  Having any of these set as the default 
notifier prevents this module from overriding the frequency of emails 
accurately.
  ** Daily Message Digest
  ** Weekly Message Digest
  ** Email
