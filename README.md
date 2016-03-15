# About Edgeryders Commons

Edgeryders Commons is a heavily customized version of the Drupal Commons distribution of Drupal 7. It is primarily being developed for use on edgeryders.eu, but you are welcome to use it for any other purpose as well.

# What is implemented how

## Mentions

You can use @username mentions in all rich text editors to mention a user. There will be username suggestions below the editor area as you type. When saving, the @mention turns into a link, indicating that mentioning the user was successful and that an e-mail notification has been sent to the user. These notifications are sent directly, not in the usual digest format otherwise used on the platform.

This behavior is made up from the following components:

  * *module [mentions](http://drupal.org/project/mentions).* A contrib module that provides the basic mentions detection functionality, and the event to react to for sending notification e-mails (done in hook_entity_insert()). We use the 7.x-2.x branch. We applied various own patches to this module to fix some bugs, among other things to allow @mentions immediately after a closing tag character ">", and to allow all characters in @mentions that are valid in usernames.
  * *module [mentions_notify](https://github.com/edgeryders/edgeryders-commons/tree/master/sites/all/modules/mentions_notify).* This is a custom module, so far published only as part of this repo. It sends the e-mail notifications to mentioned users. The mention module has to be configured by creating a mention type named "at_mention" for this to work, and has to refer to  target type "user".
  * *module [ckeditor_mentions](http://drupal.org/project/ckeditor_mentions).* A contrib module that provides the auto-suggestions for usernames while typing. It is not integrated with the mentions module, but they work flawlessly alongside. We changed it with two own patches: one to make it insert suggestions as text (not links, which is done by the mention module's text filter); the second to make it work with the new editor_ckeditor Drupal module rather than the ckeditor module it is built for.
  * *module [edgeryders_users_overrides](https://github.com/edgeryders/edgeryders-commons/tree/master/sites/all/modules/edgeryders_users_overrides).* A custom module, so far only published as part of this repo. It provides a version of the usernames where " " (space) is replaced with underscore. This version is used by ckeditor_mentions for the username suggestions, and also used inside the mentions module to detect mentions (via a custom patch). This solution is temporary. Usernames will eventually be renamed so they do not contain spaces, and spaces in new usernames will be prohibited.

