(function ($, Drupal, window, document, undefined) {

"use strict";

Drupal.behaviors.alohaTextareas = {
  attach: function (context) {
    var $context = $(context);
    Drupal.aloha.init(function () {
      var first = true;
      $context.find('.aloha-formatselector-for-textarea').once('alohaTextareas', function () {
        if (!this.id || typeof Drupal.settings.aloha.textareas[this.id] === 'undefined') {
          return;
        }
        var $this = $(this);
        var format = Drupal.settings.aloha.formats[this.value];
        var field = Drupal.settings.aloha.textareas[this.id];
        var $editable = $context.find('#' + field);
        // Directly attach this editor, if the input format is enabled.
        if (format.status) {
          Drupal.aloha.attach($editable, format);

          // Activate the first Aloha Editor.
          if (first) {
            Drupal.aloha.activate($editable);
            first = false;
          }
        }

        // React appropriately to changed input formats.
        if ($this.is('select')) {
          $this.bind('change.aloha', function () {
            // NOTE: we cannot optimize this to *not* detach and reattach Aloha
            // Editor; otherwise it would not pick up the changed
            // data-allowed-tags attribute.
            Drupal.aloha.detach($editable);
            var format = Drupal.settings.aloha.formats[this.value];
            if (format.status) {
              Drupal.aloha.attach($editable, format);
              Drupal.aloha.activate($editable);
            }
          });
        }

        // Detach Aloha Editor when the containing form is submitted.
        $editable.parents('form').submit(function (event) {
          // Do not detach if the event was cancelled.
          if (event.isDefaultPrevented()) {
            return;
          }
          Drupal.aloha.detach($editable);
        });
      });
    });
  }
};

})(jQuery, Drupal, this, this.document);
