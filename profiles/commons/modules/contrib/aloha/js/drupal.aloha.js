/**
 * @file
 * A simple interface to interact with Aloha Editor.
 */

(function ($, Drupal, Aloha) {

"use strict";

Drupal.aloha = {

  state: {
    initializing: false,
    ready: false,
    initCallbacks: []
  },

  /**
   * Initialize Aloha Editor.
   *
   * @param callback
   *   An optional callback that will be called whenever Aloha Editor is ready.
   *   If this is called multiple times while Aloha Editor is initializing, each
   *   callback will be queued and will be executed when Aloha Editor is ready.
   *   If Aloha Editor is already ready when you call this, the callback will be
   *   called immediately.
   */
  init: function (callback) {
    // If Aloha is ready, immediately execute the callback. If it is,
    // initializing then add it to the list of init callbacks, all of which will
    // be called as soon as Aloha is ready.
    if (Drupal.aloha.state.initializing) {
      if (typeof callback === "function") {
        if (Drupal.aloha.state.ready) {
          callback();
        }
        else {
          Drupal.aloha.state.initCallbacks.push(callback);
        }
      }
      return;
    }
    else {
      Drupal.aloha.state.initializing = true;
      if (typeof callback === "function") {
        Drupal.aloha.state.initCallbacks.push(callback);
      }
    }

    // Migrate Aloha.settings from Drupal.settings.
    Aloha.settings = Drupal.settings.aloha.settings;

    // Give all Drupal modules' JS the opportunity to alter Aloha Editor's
    // settings, before Aloha Editor gets initialized.
    $(document).trigger('aloha-before-init', [Aloha.settings]);
    // Use a setTimeout to make sure this code will run after all event
    // handlers have been run.
    setTimeout(function () {
      Aloha.settings.plugins.load = Aloha.settings.plugins.load.join(',');
      Aloha.deferInit();
      Aloha.ready(function () {
        Drupal.aloha.state.ready = true;

        // Execute all queued init callbacks.
        for (var i = 0; i < Drupal.aloha.state.initCallbacks.length; i++) {
          var callback = Drupal.aloha.state.initCallbacks[i];
          callback();
        }

        // Also fire an event.
        $(document).trigger('aloha-ready');
      });
    }, 0);
  },

  /**
   * Attach Aloha Editor to an editable.
   *
   * @param $editable
   *   The editable to which Aloha Editor should be applied. Can be a <textarea>
   *   or any HTML tag that contains HTML that should be edited (e.g. <div>,
   *   <article>, etc.) Should have a data-allowed-tags attribute (see README).
   * @param format
   *   The format object of the selected text format. The following properties
   *   are used:
   *   - class: Class to add to the editable while this format is active.
   */
  attach: function ($editable, format) {
    $editable.addClass('aloha-attached');
    Drupal.aloha._ensureID($editable);
    Drupal.aloha._ensureNonFormElement($editable);
    var $alohaEditable = Drupal.aloha._getAlohaEditable($editable);
    var id = $alohaEditable.attr('id');

    Drupal.aloha._setFormatClass($alohaEditable, format.className);

    Aloha.jQuery('#' + id).aloha();

    // Trigger 'aloha-content-changed' event whenever content has changed.
    Aloha.bind('aloha-smart-content-changed.aloha', function (event, ae) {
      if (ae.editable.obj[0].id === id && ae.triggerType !== 'blur') {
        // Listeners can use ae.editable.getContents() to get the current
        // cleaned (i.e. WYSIWYG-supporting mark-up removed) contents.
        $editable.trigger('aloha-content-changed', [$alohaEditable, ae]);
      }
    });
  },

  /**
   * Enforce the activation of an attached Aloha Editor on a specific editable.
   *
   * @param $editable
   *   The editable on which Aloha Editor should be activated.
   */
  activate: function ($editable) {
    var $alohaEditable = Drupal.aloha._getAlohaEditable($editable);
    var id = $alohaEditable.attr('id');

    Aloha.getEditableById(id).activate();
    // This hack will trigger the floating menu to appear *immediately*.
    Aloha.jQuery('#' + id).focus().trigger('mousedown').trigger('mouseup');
  },

  /**
   * Detach Aloha Editor from an editable.
   *
   * @param $editable
   *   The editable from which Aloha Editor should be detached. This will also
   *   cause Aloha Editor's additional mark-up to be cleaned up.
   */
  detach: function ($editable) {
    if (!$editable.hasClass('aloha-attached')) {
      return false;
    }

    var $alohaEditable = Drupal.aloha._getAlohaEditable($editable);
    var id = $alohaEditable.attr('id');

    Aloha.jQuery('#' + id)
      .unbind('aloha-smart-content-changed.aloha')
      .mahalo();

    Drupal.aloha._restoreNonFormElement($editable);
    Drupal.aloha._restoreID($editable);

    $editable.removeClass('aloha-attached');
  },

  /**
   * Remove any previous format classes and set the one for the current format.
   *
   * @param $alohaEditable
   *   The "Aloha" editable, typically a <div>, possibly a temporary one because
   *   the "original" editable is a <textarea>.
   * @param formatClassName
   *   The class name for the current format.
   */
  _setFormatClass: function($alohaEditable, formatClassName) {
    var formats = Drupal.settings.aloha.formats;
    for (var format in formats) {
      if (formats.hasOwnProperty(format)) {
        $alohaEditable.removeClass(formats[format].className);
      }
    }

    if (typeof formatClassName !== 'undefined') {
      $alohaEditable.addClass(formatClassName);
    }
  },

  /**
   * If no ID is set on this editable, then generate one.
   *
   * @param $editable
   *   The "original" editable, typically a <div> or a <textarea>.
   */
  _ensureID: function ($editable) {
    var id = $editable.attr('id');
    if (typeof id === 'undefined' || id === '') {
      id = 'aloha-' + new Date().getTime();
      $editable.attr('id', id);
    }
  },

  /**
   * If no ID was set on this editable, remove it again.
   *
   * @param $editable
   *   The "original" editable, typically a <div> or a <textarea>.
   */
  _restoreID: function ($editable) {
    if ($editable.attr('id').match(/^aloha-\d+$/) !== null) {
      $editable.removeAttr('id');
    }
  },

  /**
   * Ensure a non-form DOM element is available for Aloha Editor to be attached
   * to. Aloha Editor can generate this for us, but if we manage it ourselves,
   * we can control how it behaves.
   *
   * @param $editable
   *   The "original" editable, typically a <div> or a <textarea>.
   */
  _ensureNonFormElement: function ($editable) {
    if ($editable.is('textarea')) {
      // Create a div alongside the textarea.
      var $div = $('<div class="drupal-aloha-textarea aloha-textarea" />')
        .attr('id', $editable.attr('id') + '-aloha')
        .insertAfter($editable);

      // Populate the div with the value of the textarea and hide the textarea.
      $div
        .css('height', $editable.height()) // @todo: make the height of the div resizable, like it is for textareas.
        .html($editable.val());
      $editable.hide();
    }
  },

  /**
   * Remove the <div> we created in _ensureNonFormElement() and move its value
   * into the original <textarea> again.
   *
   * @param $editable
   *   The "original" editable, typically a <div> or a <textarea>.
   */
  _restoreNonFormElement: function ($editable) {
    // If the original editable is a textarea, we will have created a
    // <div class="aloha-textarea" /> for it.
    if ($editable.is('textarea')) {
      var $div = $('#' + $editable.attr('id') + '-aloha');
      $editable.val($div.html());
      $div.remove();
      $editable.show();
    }
  },

  /**
   * Get the "Aloha editable", the DOM element to which Aloha Editor should be
   * attached. If $editable is a <textarea>, a generated <div> will be used
   * instead of the <textarea>. Otherwise, $editable itself will be returned.
   *
   * @param $editable
   *   The "original" editable, typically a <div> or a <textarea>.
   */
  _getAlohaEditable: function ($editable) {
    if ($editable.is('textarea')) {
      var id = $editable.attr('id') + '-aloha';
      return $('#' + id);
    }
    else {
      return $editable;
    }
  }
};

// As soon as the DOM is ready, migrate Aloha.settings from Drupal.settings and
// then immediately initialize Aloha Editor.
$(function () { Drupal.aloha.init(); });

})(jQuery, Drupal, Aloha);
