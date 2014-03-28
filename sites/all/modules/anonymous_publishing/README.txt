ANONYMOUS PUBLISHING README.txt
===============================

This module increases your control over anonymous publishing on a
site.

Anonymous Publishing may lower the threshold for authorship and entry
to a site.  It may also be a requirement for certain sites that deal
with sensitive issues that anonymous publishing is allowed.

In Drupal, the administrator may grant the anonymous user the right to
create new content (so you don't need this module to allow anonymous
users to create content). However, simply anonymous publishing may
have the side-effect of making the site wide open to spammers.

This module offer a number of features that gives the site
administrator more control over the anonymous publishing workflow.

The major features of Anonymous Publishing are:

1. Users may publish content without first registering an account at
   the site, provided they supply a vaild e-mail address and click on
   an activation link sent them in a verification e-mail (some call
   this the "craigslist model").

2. "Lazy" registration, where the user creates the content first and
   can then "claim" the content after registering on the site
   (requires the submodule "Anonymous publishing claim"). If you
   enable this submodule, there will be a tab named "Claim anonymous
   posts" on the profile page of users with "unclaimed" content they
   created on the site before they registered.

3. Authenticated users may publish content that appear to be published
   by Anonymous (i.e. they need to be authenticated and logged in to
   publish, but the content they tag as anonymous will never be
   publicly associated with their user name or other identity).

More specifically, it may:
- let anonymous publishers self-activate;
- retain self-activated e-mail addresses for future use;
- send e-mail to administrators when anonymous content is created;
- provide simple moderation of content published anonymously;
- let the administrator block abusers based on e-mail & IP address;
- track spambots and let the administrator block them,
- provide flood control;
- purge records that links the identifier to specific content;
- let the administrator customize the verification e-mail;
- allow authenticated users to publish as the anonymous user;
- associate a persistent alias with generated accounts.


Installation
------------

+-------------------------------------------------------------------+
|  IMPORTANT:                                                       |
|  If you have installed a version of this module *older* than the  | 
|  alpha4 release, disable and *uninstall* it (use the "Uninstall"  |
|  tab on the Modules administration page)  before installing this  |
|  version. Just disabling it will not work.                        |
+-------------------------------------------------------------------+

1. Extract the anonymous publishing project directory into the
   directory where you keep contributed modules
   (e.g. sites/all/modules/).

2. Enable the Anonymous publishing module on the Modules list page.
   The database tables will be created automagically for you at this
   point.

3. If you want lazy registration, also enable the Anonymous publishing
   claim module.

4. Check the status report to see if it necessary to run the database
   update script.

5. Optionally add permissions for the anonymous user to publish and to
   skip comment approval on the Admin » People » Permissions page.

6. Configure general notification settings.  See the "Administration
   form" section below for details.


Administration form
-------------------

To access the administation form, you need to be granted the right to
administer anonymous publishing.

After installing and activating the module navigate to
   Admin » Configuration » Content authoring » Anonymous publishing.

There are seven tabs:

1. Main settings: All the main options for this module.
2. Message templates: Customize verificaton e-mail sent out.
3. Moderation: Moderate anonymously published content.
4. Blocking: Block (and unblock) users' e-mail addresses.
5. Spam: Report on spambot posting attempts, and block them.
6. Real names: List real user names of content published as anomymous.
7. Privacy: Privacy enhancing settings.


Main settings

To set up anonymous publishing for a site, go to the settings tab and
select the content type (or types) that you will manage using this
module. You may also enable anonymous publishing for comments.

If you want to allow users that are not logged in to create content,
you must also give permission for the anonymous user to create
content.  This is done at the Admin » People » Permissions.

The rest of the settings on the settings page will only have an effect
on the type or types (including comments) selected here.

Here is a brief description of the options:

- Allow self-activation of nodes (i.e. skip administrator approval)
  If you tick this option, content will be automatically published
  when the anonymous publisher verifies the e-mail.  Otherwise, the
  content will be flagged as verified, but will not be published until
  approved by a administrator.  (See description of the "Moderation"
  panel below for details about how activation works.)

- Allow self-activation of comments
  This is greyed out, as this setting is managed by the Drupal core
  comment module.  Go to Administration » People » Permissions to
  set it.

- Send e-mail to the administrator when anonymous content is created.
  Ticking this will automatically send an e-mail to the administrator
  e-mail address whenever anonymous content is created.  You may
  use this to make sure the administrator becomes aware of possible
  problems (such as spam), or to speed up the moderation process
  (if you do not allow self-activation).

- Use IP-address for blocking.
  By default, the "blocking" box only applies to the e-mail used for
  authentication. The module records the IP-address used to
  authenticate, but this normally only used for flood control
  purposes.  When this option is set, the module will also block the
  corresponding IP-address.  Note that setting this option may result
  in false positives (as one IP-address may be shared between several
  users over time), so use this option with caution.

- Associate a generated alias with not verified anonymous content.
  An unique persistent alias on the format 'userN', where N is some
  unique number, is automatically generated when an user that is not
  logged in verifies his or her email. If you enable this setting,
  this persistent alias will be used as byline for any content that is
  associated with that email address.  While this setting is disabled,
  the default name used to indicate anonymous users will be used as
  byline.  NOTE: Purging the information that links e-emails/aliases
  to anonymously published content will delete all information linking
  aliases to activation email addresses. After purging, the alias will
  no longer be used as a byline.

- Allow authenticated users to publish as 'Anonymous'.
  Ticking this will add an option to the node creation form for
  authenticated users, giving them the option to publish as
  'Anonymous'.

- Administrator's e-mail address:
  If you opt to send e-mail to the administrator when anonymous
  content is created, you need to provide a vaild e-mail address for
  the administrator.

- Verification e-mail address field weight: 
  To control where on create content form the verification e-mail
  address field is placed, you may specify a weight for this field.

- Number of hours to retain anonymous posts before auto-deletions
  removes it:
  Spambots will automatically fill in any form that looks like it is
  an open submission form, but almost never act on the verification
  e-mail.  There is no point in keeping non-verified content around,
  so it is automatically autodeleted after the number of hours you
  specify under Main settings.  As a courtesy, you should inform
  vistors about this auto-deletion limit. (N.I.)

- Number of anonymous posts allowed from a single user e-mail/ip
  allowed within an hour:

  For flood control, you may set the number of anonymous posts allowed
  from a single e-mail-address or ip-address within an hour from
  1 - 98. Use 99 for no limit.

Remember to press "Save configuration" when done.


Message templates

In this panel, there are four fields that let the administrator
customize the e-mail message sent to non-authenticated users when they
create content. The first field is the subject, the rest of the fields
may go in the body. Other settings determine what fields are used.

There is also two templates (subject and body) for the e-mail sent to
the administrator.


Moderation

This panel shows all the comtent published anonymously that have been
verified by e-mail.  It lets the administrator publish or unpublish.

Note that Drupal 7 already has a built-in workflow for unpublished
comment approval, but no built-in workflow for nodes.

Anonymous publishing adds a workflow for both, tied to the option
"Allow self-activation".  If you tick this option, the user is allowed
to selv-activate by verifing his or her e-mail address.  If you leave
this option unticked, content will not become activated until it is
approved by a moderator.

In the Comment section on the Admin » People » Permissions page,
there is a setting named "Skip comment approval".  If you want to
allow self-activation for anonymous publishers posting comments, you
must grant the anonymous user role this permission.  If you do not,
comments will be placed in the moderation queue when the user verifies
his or her e-mail adress, even if you've ticked the option to "Allow
self-activation".

If you do not allow self-activation, the moderator must activate the
content for it to be published.


Blocking

This panels list all the e-mails and IP-addresses that has been
associated with anonymous publishing verified by e-mail and let you
block (or unblock) each individual one.

The IP-address listed here is only used for blocking if you've ticked
"Use IP-address for blocking" under main settings.

This setting is to block abusive human users, not spambots.  Unlike
the blocking you may set in the "Spam" panel, the blocking is handled
by this module, not by Drupal.

To unblock, remove the tick-mark in the blocked column and press
"Execute".


Spam

The spam panel shows the IP-address of the "Top 10" spambots targeting
the site, along with some simple statistics.  You can block an IP
address by placing a tick-mark in the "Block" column.  When you press
"Execute", the is moved to the list of IP-addresses blocked by Drupal.
To unblock an IP address, go to

    Admin » Configuration » People » IP address blocking

and press "delete" for the IP-address you want to unblock.


Real names

This panels lists the real user names and subject lines of content
that is published as anonymous.  It allows the administrator to
identify authenticated users that abuse the abilty to post as
anonymous.

The rentention period of the user names listed here is controlled by
the settings under the privacy tab. (N.I.)


Privacy

While no e-mail address or username is made avialable to outsiders,
the e-mail adress or username associated with content is by default
retained indefinitely, and can be extracted from the database.  If
your site is used to publish sensitive material, you may want to limit
the period the record that links e-mails/usernames to specific content
is retained. (N.I.)

For a very sensitive site, you may want to set this to "Delete ASAP",
but you may also opt to retain for a limited time (from an hour up to
1 month) to give you some time to pick up the e-mail addresses or
IP-addresses of spammers and block them.  The purging of e-mail
adresses and usernames is done by cron, so you need to run cron at
least as often as half the maximum period set to be sure identifiers
are purged within the time limit.

The button "Purge now" bypasses cron and purges the identifiers
instantly.


Other administration
--------------------

If you want users that are not logged in to be able to create content,
you also need to navigate to:
   Admin » People » Permissions
and tick the following for the anonymous user:
- View published content
Then for each of the content type(s) you want to allow anonymous
publishing for, tick the following for the Anonymous user:
- Create new content
To allow the anonymous user to post comments, grant the following
permission:
- View comments
- Post comments
- Skip comment approval (if you'll allow self-activation)


Troubleshooting
---------------

The module uses a session cookie to keep track of anonymous
publishers.  Those who have cookies turned off or deleted or who uses
a different browser to verify may experience problems with accessing
the content they've published anonymously.


ToDo
----

- There are some boxes and fields in the admin form marked "N.I.".
  The functionality you may set with these is not implemented yet.
  They are just placeholders for future features.


Known glitches
--------------

- The core comment module allows anonymous publishers to pick their
  own non-persistant byline when they post a comment comment.  This
  conflicts with the persistent alias used as a byline by this module,
  so this feature in Drupal is disabled when this module is enabled.

- When you associate a persistent alias with generated accounts, the
  alias will not appear when there is no content directly associated
  with the display (e.g. on the forum landing page).  Instead the
  system default name for the anonymous user will appear.


Please help
-----------

Any help (patches, reviews, comments) are welcome.


Release notes
-------------

7.x-1.x-dev (2014-03-18):

- Added permission to administer module [#2219359].


7.x-1.0-alpha6 (2014-03-12):

- Fixed admin email template texts are overwritten in admin interface
  [#2216227].

7.x-1.0-alpha5 (2014-03-04):

- New Features:
  Anonymous publisher gets pseudo-username userN (like craigslist).
  Lazy registration.
  Added spambot protection and monitoring.

- Anonymous publishing of comments [#2103963].

7.x-1.0-alpha4 (2013-07-03):

- Fixes an information leak [#2021193].

7.x-1.0-alpha2 (2013-05-11):

- Adds a weight field [#1981546].

- Setting "View own unpublished content" for anonymous is no longer
  required [#1978726].

7.x-1.0-alpha1 (2013-04-10):

- First stable release.


Spam protection
---------------

If you allow anonymous publishing your site will probably be targeted
by spammers, both of the human kind, and 'bots.  There is already some
built-in 'bot protection, and very few spammers activate.  These
built-in features may be suffiscient to keep spam at bay.  If you need
more protection against spam, projects such as Captcha, Riddler,
SpamBot (and many others) may be good companions.


Credits
-------

Anonymous Publishing was first created by dropcube (Ronny López).
The current maintainer for the Drupal 7 version is Gisle Hannemyr.
