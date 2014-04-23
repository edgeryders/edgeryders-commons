<?php
// $Id$

/**
 * @file
 * FCKeditor integration plugin
 */

/**
  * Pseudo-hook for elfinder hook_wysiwyg_plugin implementation
  */
function elfinder_fckeditor_elfinder_editor_plugin($options) {
      return array(
        'elfinder' => array(
          'extensions' => array('elfinder' => t('elFinder')),
          'url' => $options['homepage_url'],
          'options' => array(
            'LinkBrowser' => TRUE,
            'LinkBrowserURL' => $options['elfinder_url'],
            'ImageBrowser' => TRUE,
            'ImageBrowserURL' => $options['elfinder_url'],
            'FlashBrowser' => TRUE,
            'FlashBrowserURL' => $options['elfinder_url'],
            'ImageUpload' => TRUE,
            'ImageUploadURL' => url('elfinder/upload/fckeditor'),
            'FlashUpload' => TRUE,
          //  'FlashUploadURL' => $options['elfinder_connector_url'],
            'LinkUpload' => TRUE,
          //  'LinkUploadURL' => $options['elfinder_connector_url'],
            

          ),
          'load' => FALSE,
        ),
      );
}
