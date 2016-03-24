# About Edgeryders Challenges

Quite a large feature with three content types, one view, a lot of settings, a lot of CSS and some custom code to provide an open ideation type of web application for crowdsourcing content. Built for and used on edgeryders.eu. Free and open source software, so welcome to adapt and use it elsewhere.

This module introduces these content types (Drupal node bundles):

 - **Challenge:** A question / problem you give to the crowd.
 - **Challenge Response:** An answer / reply to exactly one challenge that you get from one member of the crowd.
 - **Challenge Chain:** An aggregation content type, referencing an ordered set of challenges that belong together. A Challenge Chain node shows the referenced challenges as a progress bar, plus the Challenge Responses of the featured challenge, plus a button to add a Challenge Response to the featured challenge. The featured challenge is the first challenge in a Challenge Chain that is in state "ongoing", which is automatically determined.


# Installation instructions

To install the Edgeryders Challenges feature as part of the Edgeryders Commons distribution:

 1. Clone [the repository](https://github.com/edgeryders/edgeryders-commons) and initialize the database (no idea how).
 
 2. Enable the module: `drush en edgeryders_challenges`.

 
To install on "vanilla" Drupal Commons, some more steps are involved (here serving as documentation of code patching dependencies):

 1. **Install the newest Drupal Commons 7.x Drupal distribution.** The edgeryders_challenges module is built to avoid dependency on Drupal Commons functionality where possible, but some dependencies remain. If desired, you can relatively easily remove the remaining dependencies later, but we have not done it yet, so start from a Drupal Commons version.
 
 2. **Install and enable the commons_edge subtheme of the commons_origin Drupal Commons theme.** At least the 14d9faf262 commit version (2016-03-24) or newer. You can find it as [part of the edgeryders-commons github repo](https://github.com/edgeryders/edgeryders-commons/tree/master/sites/all/themes/commons_edge). This subtheme contains all the CSS for the Edgeryders Challenges feature, while all code is in the `edgeryders_challenges` module.
 
 3. **Update Entity Reference Prepopulate.** The edgeryders_challenges module requires a fix for the issue that prepopulation values are dropped by AJAX requests like image uploading (see [#1958800](https://www.drupal.org/node/1958800)). Eventually the patch from there will find its way into a release and then a Drupal Commons release, but as of 2016-03-24, you need to update to `entityreference_prepopulate` version 7.x-1.x-dev:
 
        drush dl --dev entityreference_prepopulate
 
 4. **Patch editor for issue #2691101.** This feature relies on [Editor](https://www.drupal.org/project/editor), a backport of CKEditor for Drupal 8. As of 2016-03-24, it unloads when uploading images to image fields in the same form, see issue [#2691101](https://www.drupal.org/node/2691101). Make sure your version of editor contains the patch, or else install the patch supplied in the issue tracker. You can also use the Edgeryders Challenges feature with a different rich text editor module (like [CKEditor](https://www.drupal.org/project/ckeditor_mentions)), but you will have to adapt the CSS if you do.
 
 5. **Install module ckeditor_divarea.** This is a custom module developed to embed CKEditor from the [editor](https://www.drupal.org/project/editor) module in a div rather than an iframe element. It allows the CSS stylings to alter the editor's background, font color etc.. If you don't need that or want to use your own CSS for forms anyway, you do not need this module. Otherwise, get it from [the edgeryders-commons github repo](https://github.com/edgeryders/edgeryders-commons/tree/master/sites/all/modules/ckeditor_divarea).

 6. **If you use [Content Experiments](https://www.drupal.org/project/content_experiments): patch it for issue [#2564247](https://www.drupal.org/node/2564247).** This patch will provide an additional permission to show or hide the use the module on the node add / edit forms. Unset that permission for users you want to submit content with the Edgeryders Challenges feature. Otherwise the Challenge Response node add form would have an ugly sidebar with the field for Content Experiments.
 
 7. **Install edgeryders_challenges.** It will tell you what modules to download and enable due to normal module dependencies.
 
          drush en edgeryders_challenges


# Usage

Basic usage is like this:

 1. Create 3-5 "Challenge" nodes.
 
 2. Create several "Challenge Response" nodes for each Challenge node, by using the "Add my Story!" button on the Challenge node view pages.
 
 3. Create one "Challenge Chain" node. In its "Challenges" field, reference all the Challenges you want to belong to it, in order, so that the first-to-be completed Challenge comes first.
 
 4. Link the URL of your "Challenge Chain" node prominently in your site's menus – this is the single entry point for participating in your Challenges that you will promote.
 
 
# Developer Notes

The following settings are included in the feature, so no need to work through this for installation. However, these are non-obvious ways to break the Edgeryders Challenges functionality, so developers should be aware of these before starting to adapt settings.

 - In content type "Challenge Response", the "Challenge" (`og_challenge_ref`) field must use the "Simple" or "Commons OG" selection handler in the "Entity Selection: Mode" field instance setting. (We use "Simple" to prevent a dependency on Organic Groups.) If you use the "Organic Groups" selection handler however, groups into which the user can post but is not member of (all relevant groups here!) can not be selected, neither manually nor view the `entityreference_prepopulate` functionality as we do in the Edgeryders Challenges module. Note that  the "Commons OG" selection handler is provided by Drupal Commons, so clone it or use "Simple" if you don't want to base your website on Commons. This behavior of Entity Reference fields is an intended (but not yet properly documented) behavior of Organic Groups. I added issues to properly document and partially fix this behavior here: [#2692525](https://www.drupal.org/node/2692525), [#2692509](https://www.drupal.org/node/2692509), [#2692481](https://www.drupal.org/node/2692481).
 
 - If you want to create a new feature based on the edgeryders_challenges module, you need to patch your `field_group` module to fix issue [#1670136](https://www.drupal.org/node/1670136) ("Field Groups in Features not importing"). Otherwise, the field groups used for the multi-page Challenge Response node add form will not be properly exported, and will fail to import.


# Licence

MIT Licence
