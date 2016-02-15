CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Technical details

INTRODUCTION
------------

Current Maintainers:

 * Devin Carlson <http://drupal.org/user/290182>

Entity Embed integrates with CKEditor to allow any entity to be embedded within
a text area.

REQUIREMENTS
------------

Entity Embed requires Drupal 7.37 or later. It has six dependencies.

Drupal core modules
 * Filter

Contributed modules
 * Chaos Tools
 * Editor CKEditor
 * Dialog
 * Entity
 * Entity Reference
 * jQuery Update - Configured to use jQuery 1.7 or higher.

INSTALLATION
------------

* Install Entity Embed via the standard Drupal installation process:
  'http://drupal.org/node/895232'.
* Configure the jQuery Update module to use jQuery 1.7 or higher:
  '/admin/config/development/jquery_update'.
* Enable the entity-embed filter 'Display embedded entities' for the desired
  text formats from the Text Formats configuration page:
  '/admin/config/content/formats'.
* If the 'Limit allowed HTML tags' filter is enabled, add '<drupal-entity>' to
  the 'Allowed HTML tags'.
* To enable the WYSIWYG plugin, move the entity-embed 'E' button into the
  Active toolbar for the desired text formats from the Text Formats
  configuration page: '/admin/config/content/formats'.

By default, Entity Embed includes a single button for embedding nodes.
Additional buttons can be added from the configuration page:
'/admin/config/content/embed-button'.

TECHNICAL DETAILS
-----------------

Users should be embedding entities using the CKEditor WYSIWYG button as
described above. This section is more technical about the HTML markup that is
used to embed the actual entity.

Embed by UUID (recommended: requires the UUID module):
<div data-entity-type="node" data-entity-uuid="07bf3a2e-1941-4a44-9b02-2d1d7a41ec0e" data-view-mode="teaser" />

Embed by ID (not recommended):
<div data-entity-type="node" data-entity-id="1" data-view-mode="teaser" />

Display Plugins
<div data-entity-type="node" data-entity-id="1" data-entity-embed-display="entityreference:entityreference_entity_view" data-entity-embed-settings='{"view_mode":"teaser"}' />

A more advanced use for embedding entities uses an entity embed display plugin,
provided in the data-entity-embed-display attribute.

Configuration for the display plugin can be provided by using a
data-entity-embed-settings attribute, which contains a JSON-encoded array value.
Note that care must be used to use single quotes around the attribute value
since JSON-encoded arrays typically contain double quotes.

The above example renders the entity using the entityreference_entity_view
formatter from the Entity Reference module, using the teaser view mode.
