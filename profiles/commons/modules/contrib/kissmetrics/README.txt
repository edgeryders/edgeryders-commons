CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Permissions
 * Usage
 * Sponsors

INTRODUCTION
------------

Current Maintainers:

 * farhadhf <http://drupal.org/user/697352>
 * Devin Carlson <http://drupal.org/user/290182>

KISSmetrics provides integration with the KISSmetrics person-based analytics service.

KISSmetrics gives administrators four important tools:

 * A simple method of automatically tracking basic data such as page views, form
   fields and search engine hits.
 * Unique user identification and aliasing based on account information.
 * Rules integration to track custom events and user properties.
 * The ability to log events to be processed in bulk during cron runs.

REQUIREMENTS
------------

KISSmetrics has two dependencies:

Contributed modules
 * Libraries API - 2.x
 * Rules

KISSmetrics optionally integrates with the Session API module to identify
anonymous users using a unique session ID that persists between site visits and
logging in/out.

INSTALLATION
------------

To install KISSmetrics:

 * Download the latest version of the KISSmetrics PHP library
   (http://github.com/kissmetrics/KISSmetrics) and extract it to
   sites/all/libraries or sites/sitename/libraries as you require. The
   extracted folder must be named kissmetrics.
 * Enable KISSmetrics and all of the modules that it requires.
 * Visit the KISSmetrics administration page and enter your KISSmetrics API key.

PERMISSIONS
------------

KISSmetrics provides one permission:

 * Administer KISSmetrics
    Allows a user to configure KISSmetrics.

USAGE
-----

KISSmetrics adds the KISSmetrics JavaScript library to non-administration pages.
The JavaScript library automatically tracks basic data such as page views, form
fields and search engine hits.

For more advanced event recording, KISSmetrics provides a Rules action for
logging events with KISSmetrics. Administrators can build rules to track custom
events, such as when a user edits an existing page or posts a new comment.

For each custom event, a new rule should be created which is triggered by the
event to track. The rule should trigger the "Log a KISSmetrics event" action
which will log an event using the specified name and properties.

Note: If an action does not have a name, any specified properties will be set on
the identified user instead of recording an event.

Sponsors
--------

Development of KISSmetrics is sponsored by teamdeal.co (http://www.teamdeal.co).
