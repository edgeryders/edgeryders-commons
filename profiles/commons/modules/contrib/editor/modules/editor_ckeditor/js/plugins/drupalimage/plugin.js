/**
 * @file
 * Drupal Image plugin.
 *
 * This alters the existing CKEditor image2 widget plugin to:
 * - require a data-file-id attribute (which Drupal uses to track where images
 *   are being used)
 * - use a Drupal-native dialog (that is in fact just an alterable Drupal form
 *   like any other) instead of CKEditor's own dialogs.
 *   @see \Drupal\editor\Form\EditorImageDialog
 */
(function ($, Drupal, CKEDITOR) {

"use strict";

CKEDITOR.plugins.add('drupalimage', {
  requires: 'image2',

  beforeInit: function (editor) {
    // Override the image2 widget definition to require and handle the
    // additional data-entity-type and data-entity-id attributes.
    editor.on('widgetDefinition', function (event) {
      var widgetDefinition = event.data;
      if (widgetDefinition.name !== 'image') {
        return;
      }

      // Override requiredContent & allowedContent.
      widgetDefinition.requiredContent = new CKEDITOR.style({
        element: 'img',
        attributes: {
          'alt': '',
          'src': '',
          'width': '',
          'height': '',
          'data-entity-type': '',
          'data-entity-id': ''
        }
      });
      var allowedContentDefinition = {
        element: 'img',
        attributes: {
          '!data-entity-type': '',
          '!data-entity-id': ''
        }
      };
      var imgAttributes = widgetDefinition.allowedContent.img.attributes.split(/\s*,\s*/);
      for (var i = 0; i < imgAttributes.length; i++) {
        allowedContentDefinition.attributes[imgAttributes[i]] = '';
      }
      if (widgetDefinition.allowedContent.img.classes) {
        allowedContentDefinition.attributes['class'] = widgetDefinition.allowedContent.img.classes.split(/\s*,\s*/).join(' ');
      }
      if (widgetDefinition.allowedContent.img.styles) {
        var imgStyles = widgetDefinition.allowedContent.img.styles.split(/\s*,\s*/);
        for (var j = 0; j < imgStyles.length; j++) {
          allowedContentDefinition.styles[imgStyles[j]] = '';
        }
      }
      widgetDefinition.allowedContent = new CKEDITOR.style(allowedContentDefinition);

      // Override the 'link' part, to completely disable image2's link
      // support: http://dev.ckeditor.com/ticket/11341.
      widgetDefinition.parts.link = 'This is a nonsensical selector to disable this functionality completely';

      // Override downcast(): since we only accept <img> in our upcast method,
      // the element is already correct. We only need to update the element's
      // data-entity-id attribute.
      widgetDefinition.downcast = function (element) {
        element.attributes['data-entity-id'] = this.data['data-entity-id'];
      };

      // We want to upcast <img> elements to a DOM structure required by the
      // image2 widget; we only accept an <img> tag, and that <img> tag MAY
      // have a data-entity-type and a data-entity-id attribute.
      widgetDefinition.upcast = function (element, data) {
        if (element.name !== 'img') {
          return;
        }
        // Don't initialize on pasted fake objects.
        else if (element.attributes['data-cke-realelement']) {
          return;
        }

        // Parse the data-entity-type attribute.
        data['data-entity-type'] = element.attributes['data-entity-type'];
        // Parse the data-entity-id attribute.
        data['data-entity-id'] = element.attributes['data-entity-id'];

        return element;
      };

      // Protected; keys of the widget data to be sent to the Drupal dialog.
      // Keys in the hash are the keys for image2's data, values are the keys
      // that the Drupal dialog uses.
      widgetDefinition._mapDataToDialog = {
        'src': 'src',
        'alt': 'alt',
        'width': 'width',
        'height': 'height',
        'data-entity-type': 'data-entity-type',
        'data-entity-id': 'data-entity-id'
      };

      // Protected; transforms widget's data object to the format used by the
      // \Drupal\editor\Form\EditorImageDialog dialog, keeping only the data
      // listed in widgetDefinition._dataForDialog.
      widgetDefinition._dataToDialogValues = function (data) {
        var dialogValues = {};
        var map = widgetDefinition._mapDataToDialog;
        Object.keys(widgetDefinition._mapDataToDialog).forEach(function (key) {
          dialogValues[map[key]] = data[key];
        });
        return dialogValues;
      };

      // Protected; the inverse of _dataToDialogValues.
      widgetDefinition._dialogValuesToData = function (dialogReturnValues) {
        var data = {};
        var map = widgetDefinition._mapDataToDialog;
        Object.keys(widgetDefinition._mapDataToDialog).forEach(function (key) {
          if (dialogReturnValues.hasOwnProperty(map[key])) {
            data[key] = dialogReturnValues[map[key]];
          }
        });
        return data;
      };

      // Protected; creates Drupal dialog save callback.
      widgetDefinition._createDialogSaveCallback = function (editor, widget) {
        return function (dialogReturnValues) {
          var firstEdit = !widget.ready;

          // Dialog may have blurred the widget. Re-focus it first.
          if (!firstEdit) {
            widget.focus();
          }

          editor.fire('saveSnapshot');

          // Pass `true` so DocumentFragment will also be returned.
          var container = widget.wrapper.getParent(true);
          var image = widget.parts.image;

          // Set the updated widget data, after the necessary conversions from
          // the dialog's return values.
          // Note: on widget#setData this widget instance might be destroyed.
          var data = widgetDefinition._dialogValuesToData(dialogReturnValues.attributes);
          widget.setData(data);

          // Retrieve the widget once again. It could've been destroyed
          // when shifting state, so might deal with a new instance.
          widget = editor.widgets.getByElement(image);

          // It's first edit, just after widget instance creation, but before
          // it was inserted into DOM. So we need to retrieve the widget
          // wrapper from inside the DocumentFragment which we cached above
          // and finalize other things (like ready event and flag).
          if (firstEdit) {
            editor.widgets.finalizeCreation(container);
          }

          setTimeout(function () {
            // (Re-)focus the widget.
            widget.focus();
            // Save snapshot for undo support.
            editor.fire('saveSnapshot');
          });

          return widget;
        };
      };
    });

    // Add a widget#edit listener to every instance of image2 widget in order
    // to handle its editing with a Drupal-native dialog.
    // This includes also a case just after the image was created
    // and dialog should be opened for it for the first time.
    editor.widgets.on('instanceCreated', function (event) {
      var widget = event.data;

      if (widget.name !== 'image') {
        return;
      }

      widget.on('edit', function (event) {
        // Cancel edit event to break image2's dialog binding
        // (and also to prevent automatic insertion before opening dialog).
        event.cancel();

        // Open drupalimage dialog.
        editor.execCommand('editdrupalimage', {
          existingValues: widget.definition._dataToDialogValues(widget.data),
          saveCallback: widget.definition._createDialogSaveCallback(editor, widget)
        });
        // Open drupalimage dialog.
        editor.execCommand('editdrupalimage', {
          existingValues: widget.definition._dataToDialogValues(widget.data),
          saveCallback: widget.definition._createDialogSaveCallback(editor, widget),
          // Drupal.t() will not work inside CKEditor plugins because CKEditor
          // loads the JavaScript file instead of Drupal. Pull translated
          // strings from the plugin settings that are translated server-side.
          dialogTitle: widget.data.src ? editor.config.drupal.imageDialogTitleEdit : editor.config.drupal.imageDialogTitleAdd
        });
      });
    });

    // Register the "editdrupalimage" command, which essentially just replaces
    // the "image" command's CKEditor dialog with a Drupal-native dialog.
    editor.addCommand('editdrupalimage', {
      allowedContent: 'img[alt,!src,width,height,!data-entity-type,!data-entity-id]',
      requiredContent: 'img[alt,src,width,height,data-entity-type,data-entity-id]',
      modes: {wysiwyg: 1},
      canUndo: true,
      exec: function (editor, data) {
        var dialogSettings = {
          title: data.dialogTitle,
          dialogClass: 'editor-image-dialog'
        };
        Drupal.ckeditor.openDialog(editor, editor.config.drupal.imageDialogUrl + '/' + editor.config.drupal.format + '?_format=drupal_dialog', data.existingValues, data.saveCallback, dialogSettings);
      }
    });

    // Register the toolbar button.
    if (editor.ui.addButton) {
      editor.ui.addButton('DrupalImage', {
        label: Drupal.t('Image'),
        // Note that we use the original image2 command!
        command: 'image',
        icon: this.path + '/image.png'
      });
    }
  },

  // Disable image2's integration with the link/drupallink plugins: don't
  // allow the widget itself to become a link. Support for that may be added
  // by an text filter that adds a data- attribute specifically for that.
  afterInit: function (editor) {
    if (editor.plugins.drupallink) {
      var cmd = editor.getCommand('drupallink');
      // Needs to be refreshed on selection changes.
      cmd.contextSensitive = 1;
      // Disable command and cancel event when the image widget is selected.
      cmd.on('refresh', function (evt) {
        var widget = editor.widgets.focused;
        if (widget && widget.name === 'image') {
          this.setState(CKEDITOR.TRISTATE_DISABLED);
          evt.cancel();
        }
      });
    }
  }

  });

})(jQuery, Drupal, CKEDITOR);
