/**
 * @file
 * Attaches behavior for the Editor module.
 */

(function ($, Drupal) {

  "use strict";

  /**
   * Initialize an empty object for editors to place their attachment code.
   *
   * @namespace
   */
  Drupal.editors = {};

  /**
   * Enables an editor (if any) when the matching format is selected.
   */
  Drupal.behaviors.editors = {
    attach: function (context, settings) {
      // If there are no editor settings, there are no editors to enable.
      if (!settings.editor) {
        return;
      }

      var $context = $(context);
      $context.find('.filter-list:input').once('editors', function () {
        var $this = $(this);
        var activeEditor = $this.val();
        var field = $this.closest('.text-format-wrapper').find('textarea').get(-1);

        // No textarea found. This may happen on long text elements that use a
        // single-line text field widget.
        if (!field) {
          return;
        }

        // Directly attach this editor, if the input format is enabled or there is
        // only one input format at all.
        if ($this.is(':input')) {
          if (Drupal.settings.editor.formats[activeEditor]) {
            Drupal.editorAttach(field, Drupal.settings.editor.formats[activeEditor]);
          }
        }
        // Attach onChange handlers to input format selector elements.
        if ($this.is('select')) {
          $this.change(function() {
            // Detach the current editor (if any) and attach a new editor.
            if (Drupal.settings.editor.formats[activeEditor]) {
              Drupal.editorDetach(field, Drupal.settings.editor.formats[activeEditor]);
            }
            activeEditor = $this.val();
            if (Drupal.settings.editor.formats[activeEditor]) {
              Drupal.editorAttach(field, Drupal.settings.editor.formats[activeEditor]);
            }
          });
        }
        // Detach any editor when the containing form is submitted.
        $this.parents('form').submit(function (event) {
          // Do not detach if the event was canceled.
          if (event.isDefaultPrevented()) {
            return;
          }
          Drupal.editorDetach(field, Drupal.settings.editor.formats[activeEditor]);
        });
      });
    },
    detach: function (context, settings) {
      var $context = $(context);
      $context.find('.filter-list:input').each(function () {
        var $this = $(this);
        var activeEditor = $this.val();
        var field = $this.closest('.text-format-wrapper').find('textarea').get(-1);
        if (field && Drupal.settings.editor.formats[activeEditor]) {
          Drupal.editorDetach(field, Drupal.settings.editor.formats[activeEditor]);
        }
      });
    }
  };

  Drupal.editorAttach = function(field, format) {
    if (format.editor && Drupal.editors[format.editor]) {
      Drupal.editors[format.editor].attach(field, format);
    }
  };

  Drupal.editorDetach = function(field, format) {
    if (format.editor && Drupal.editors[format.editor]) {
      Drupal.editors[format.editor].detach(field, format);
    }
  };

  /**
   * Provides toggles for uploading an image, whether by URL or upload.
   */
  Drupal.behaviors.editorImageDialog = {
    attach: function (context, settings) {
      var $newToggles = $('[data-editor-image-toggle]', context).once('editor-image-toggle');
      $newToggles.each(function() {
        var $toggleItems = $('[data-editor-image-toggle]');

        // Remove any previous toggles next to all labels.
        $toggleItems.find('label').siblings('.editor-image-toggle').remove();

        // Add toggles next to all labels.
        var $toggleLink, toggleLabel;
        $toggleItems.each(function(n) {
          $toggleItems.eq(n).find('label:first').addClass('editor-image-toggle');
          $toggleItems.each(function(m) {
            toggleLabel = $toggleItems.eq(m).attr('data-editor-image-toggle');
            $toggleLink = $('<a class="editor-image-toggle" href="#"></a>').text(toggleLabel);
            if (n > m) {
              $toggleItems.eq(n).find('label:first').before($toggleLink);
            }
            else if (n < m) {
              $toggleItems.eq(n).find('label:first').after($toggleLink);
            }
          });

          // Because these elements are not the first and last elements of their
          // parent (the form-element wrapper), we need specific classes to target
          // them instead of using :first-child and :last-child in CSS.
          $toggleItems.eq(n).find('.editor-image-toggle').removeClass('first last')
            .filter(':first').addClass('first').end()
            .filter(':last').addClass('last').end();
        });
      });

      $newToggles.click(function(e) {
        var $link = $(e.target);
        if ($link.is('.editor-image-toggle') === false) {
          return;
        }

        var $currentItem = $link.closest('[data-editor-image-toggle]');
        var $allItems = $('[data-editor-image-toggle]');
        var offset = $currentItem.find('.editor-image-toggle').index($link);
        var $shownItem = $allItems.eq(offset);
        $allItems.not($shownItem).filter(':visible').hide().trigger('editor-image-hide');
        var $newItem = $allItems.eq(offset).filter(':hidden').show();
        // Focus the first shown new element. This keeps focus on the dialog and
        // allows it to be closed with the escape key.
        $newItem.find('input, textarea, select').filter(':focusable').first().focus();
        $newItem.trigger('editor-image-show');

        return false;
      });

      $newToggles.on('editor-image-hide', function() {
        var $input;
        $(this).find('input[type="url"], input[type="text"], textarea').each(function() {
          $input = $(this);
          $input.data('editor-previous-value', $input.val());
          $input.val('');
        });
      });

      $newToggles.on('editor-image-show', function() {
        var $input, previousValue;
        $(this).find('input[type="url"], input[type="text"], textarea').each(function() {
          $input = $(this);
          previousValue = $input.data('editor-previous-value');
          if (previousValue && previousValue.length) {
            $input.val(previousValue);
          }
        });
      });

      // Add a very short delay to allow the dialog to appear.
      window.setTimeout(function() {
        var $visibleItems = $('[data-editor-image-toggle]').filter(':visible');
        if ($visibleItems.length > 1) {
          var $errorItem = $visibleItems.find('.error').closest('[data-editor-image-toggle]');
          if ($errorItem.length) {
            $visibleItems.not($errorItem).hide().trigger('editor-image-hide');
            $errorItem.find('input, textarea, select').filter(':focusable').first().focus();
            $errorItem.trigger('editor-image-show');
          }
          else {
            $visibleItems.not(':first').hide().trigger('editor-image-hide');
            $visibleItems.first().find('input, textarea, select').filter(':focusable').first().focus();
            $visibleItems.first().trigger('editor-image-show');
          }
        }
      }, 1);
    }
  };

})(jQuery, Drupal);
