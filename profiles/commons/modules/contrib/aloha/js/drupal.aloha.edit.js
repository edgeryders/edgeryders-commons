/**
 * @file
 * Integrate Aloha Editor with the Edit module.
 */

(function ($, Drupal, Aloha, window, document, undefined) {

"use strict";

Drupal = Drupal || {};
Drupal.edit = Drupal.edit || {};
Drupal.edit.wysiwyg = Drupal.edit.wysiwyg || {};
Drupal.edit.wysiwyg.aloha = {
  init: function () {
    Drupal.aloha.init(function () {
      $(document).trigger('edit-wysiwyg-ready');
    });
  },

  attach: function ($editable, format) {
    Drupal.aloha.attach($editable, format);
    $editable.bind('aloha-content-changed', function() {
      $editable.trigger('edit-wysiwyg-content-changed');
    });
  },

  activate: function ($editable) {
    Drupal.aloha.activate($editable);
  },

  detach: function ($editable) {
    Drupal.aloha.detach($editable);
  }
};

})(jQuery, Drupal, Aloha, this, this.document);
