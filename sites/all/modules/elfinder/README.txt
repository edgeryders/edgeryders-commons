elFinder file manager integration module for Drupal
===================================================

System Requirements:

 - Drupal 7.x
 - elFinder 2.0+ 

   Note: elFinder 2.0rc1 no more supported - use 2.x dev build from 
         http://sourceforge.net/projects/drupal-elfinder/files/Library/ 
         or use production version if it is available

Optional:
 
 - Wysiwyg module
 - Wysiwyg editor:
 
    - CKEditor
    - FCKeditor
    - TinyMCE 3
    - BUEdtor
    - jWYSIWYG (jWYSIWYG 0.93+, jquery 1.3+, jquery ui 1.7+)
    - YUI Editor
    - WYMeditor

  
Installation:

  1. Unpack archive contents into modules/elfinder
  2. Get latest elFinder at http://sourceforge.net/projects/drupal-elfinder/files/Library/ and it's contents to sites/all/libraries/elfinder
  3. REMOVE following files from library directory if it exists to avoid security hole:

     sites/all/libraries/elfinder/elfinder.html
     sites/all/libraries/elfinder/elfinder.php.html
     sites/all/libraries/elfinder/connectors/php/connector.php
     sites/all/libraries/elfinder/php/connector.php

  4. Enable elFinder module in Modules > List menu
  5. Add 'use file manager' permission to users who will be able to use elFinder at Modules > elFinder > Permissions menu
  6. Enable elFinder checkbox in your editor Wysiwyg profile at Configuration > Wysiwyg profiles > <Editor Profile> Buttons and Plugins
  
Usage:

 1. Administration backend
  
  a. Open /elfinder url (or ?q=elfinder if seo-capable urls disabled)
  b. Go to Administer page. Click 'Files' under Content section.

 2. Inside CKEditor (FCKeditor)
  2.1. Open Image Properties dialog in editor
  2.2. Click Browse Server button near image url
 
 3. Inside TinyMCE
  3.1. Open Insert/edit image dialog
  3.2. Click Browse button near image url
  
 4. Inside BUEditor
  4.1. Click 'Insert/edit image'
  4.2. Click 'Browse'
  4.3. Select file
  4.4. Enter alt text then click OK
 
 5. Inside jWYSIWYG
  5.1. Make sure that you have jWYSYWIG 0.93+ (http://github.com/akzhan/jwysiwyg/), jQuery 1.3+ and jQuery UI 1.7+ installed
  5.2. Click 'Insert image' button
  5.3. Click 'Browse Server' button near image url
 
 6. Inside YUI Editor
  6.1. Click 'Insert Image' button
  6.2. Click 'Browse Server' button near image url

 7. Inside WYMeditor
  7.1. Click 'Image' button
  7.2. Click 'Browse Server' button near image url
 

  
Known Issues:

 - Not all editors supported
 - Conflicting with some devel module features



