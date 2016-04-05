# About Edgeryders Commons

Edgeryders Commons is a heavily customized version of the Drupal Commons distribution of Drupal 7. It is primarily being developed for use on edgeryders.eu, but you are welcome to use it for any other purpose as well.


# Troubleshooting during Installation and Configuration

## How to change the favicon?

This can be done from the `admin/appearance/settings` page and its sub-pages. Drupal's "Shortcut icon settings" forms there are buggy however, so use [these instructions](http://drupal.stackexchange.com/a/196765/16305) to make the changes successfully. Use the following information:

 * For the original edgeryders.eu site, the `commons_edge` theme folder contains the favicons. They cannot be referenced from the Drupal theme settings forms due to bugs, so download them, and upload them in these forms. This will save them in `sites/default/files`.
 * We use the "Common Edge" theme as default theme, means you have to make the settings for this one only. It is a subtheme of "Commons Origins", which again is a subtheme of "AT Core".
 * For some reason, changing the favicon of the "AT Admin" theme does not work from the Drupal theme settings pages. This is a known issue for us.


# What is implemented how

## Messages Digest E-mails

Users are notified by e-mail about new nodes created in groups they follow, and new comments created on nodes they follow. Only one e-mail per day and user is sent.

For sending message digest e-mails, the following modules work together:

 * *module message.* Base module of the Drupal message stack. Allows to define message types, which are templates with tokens that are used to generated actual messages.
 * *module message_subscribe.* Allows users to "follow" content, to de
 * *module message_digest.* A module that aggregates all messages meant for a user and sends them together in one e-mail.
 * *module mimemail.* A module that allows sending e-mails as HTML, also providing a template system that allows to add a header and footer for the message digest e-mail.
 * *various Drupal Commons modules.* (TODO)

To edit the templates used for messages:

 * To edit the individual messages from which an e-mail is composed: Go to "Menu → Admin → Structure → Message types" (`admin/structure/messages`) and edit the `commons_notify_*` message types.
 * To edit the header and footer of the message digest e-mail, and its CSS: edit `sites/all/themes/commons_edge/mimemail-message.tpl.php`.

Note that only the English language versions of the `commons_notify_*` message types have to be defined, because only English messages will be sent. So it is not necessary to use the "[Copy Message Text](https://edgeryders.eu/en/admin/config/system/message/text-copy)" utility to populate the other language versions. This step is only required for the activity streams messages, when using a site with a multilingual UI, because then the other language versions are read (without a fallback to the "Undefined Language" version, which is a bug in Drupal).


## Mentions

You can use @username mentions in all rich text editors to mention a user. There will be username suggestions below the editor area as you type. When saving, the @mention turns into a link, indicating that mentioning the user was successful and that an e-mail notification has been sent to the user. These notifications are sent directly, not in the usual digest format otherwise used on the platform.

This behavior is made up from the following components:

 * *module [mentions](http://drupal.org/project/mentions).* A contrib module that provides the basic mentions detection functionality, and the event to react to for sending notification e-mails (done in hook_entity_insert()). We use the 7.x-2.x branch. We applied various own patches to this module to fix some bugs, among other things to allow @mentions immediately after a closing tag character ">", and to allow all characters in @mentions that are valid in usernames.
 * *module [mentions_notify](https://github.com/edgeryders/edgeryders-commons/tree/master/sites/all/modules/mentions_notify).* This is a custom module, so far published only as part of this repo. It sends the e-mail notifications to mentioned users. The mention module has to be configured by creating a mention type named "at_mention" for this to work, and has to refer to  target type "user".
 * *module [ckeditor_mentions](http://drupal.org/project/ckeditor_mentions).* A contrib module that provides the auto-suggestions for usernames while typing. It is not integrated with the mentions module, but they work flawlessly alongside. We changed it with two own patches: one to make it insert suggestions as text (not links, which is done by the mention module's text filter); the second to make it work with the new editor_ckeditor Drupal module rather than the ckeditor module it is built for.
 * *module [edgeryders_users_overrides](https://github.com/edgeryders/edgeryders-commons/tree/master/sites/all/modules/edgeryders_users_overrides).* A custom module, so far only published as part of this repo. It provides a version of the usernames where " " (space) is replaced with underscore. This version is used by ckeditor_mentions for the username suggestions, and also used inside the mentions module to detect mentions (via a custom patch). This solution is temporary. Usernames will eventually be renamed so they do not contain spaces, and spaces in new usernames will be prohibited.

