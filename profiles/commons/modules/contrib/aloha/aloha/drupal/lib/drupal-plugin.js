define([
  'aloha',
  'aloha/plugin',
  'jquery',
  'aloha/contenthandlermanager',
  'drupal/drupalcontenthandler',
  'drupal/repository'
], function (Aloha, Plugin, $, ContentHandlerManager, DrupalContentHandler) {
  'use strict';

  var pluginNamespace = 'aloha-drupal';

  return Plugin.create('drupal', {
    /**
     * Configure the available languages.
     */
    languages: ['en'],

    /**
     * Default configuration.
     */
    config: [],

    /**
     * Initialize the plug-in.
     */
    init: function () {

      var allowedTags;

      var elementMapping = {
        'a': 'link',
        'b': 'bold',
        'strong': 'strong',
        'i': 'italic',
        'em': 'emphasis',
        'del': 'strikethrough',
        'sub': 'subscript',
        'sup': 'superscript',
        'u': 'underline',
        's': 'strikethrough2',
        'ol': 'orderedlist',
        'ul': 'unorderedlist',
        'p': 'p',
        'pre': 'pre',
        'h1': 'h1',
        'h2': 'h2',
        'h3': 'h3',
        'h4': 'h4',
        'h5': 'h5',
        'h6': 'h6'
      };
      var neverAllowedElements = [ 'b', 'i' ];

      // Register DrupalContentHandler.
      ContentHandlerManager.register('drupal', DrupalContentHandler);

      Aloha.bind('aloha-editable-activated', function ($event, params) {
        var config, element, i;
        var drupalConfig = Aloha.settings.plugins.drupal.editables;
        var classes = Aloha.activeEditable.originalObj.attr('class').split(' ');
        for (i = 0; i < classes.length; i++) {
          if (typeof drupalConfig['.' + classes[i]] !== 'undefined') {
            config = drupalConfig['.' + classes[i]];
          }
        }

        if (typeof config === 'undefined') {
          config = { allowedTags: [] };
        }

        var allowedTags = config.allowedTags;
        if (allowedTags.length) {
          for (element in elementMapping) {
            if (elementMapping.hasOwnProperty(element) && $.inArray(element, allowedTags) === -1) {
              $('span.ui-button-icon-primary[data-html-tag="' + elementMapping[element] + '"]')
                .closest('button')
                .addClass('aloha-drupal-ui-state-hidden');
            }
          }
        }

        // Always hide the elements that are not allowed.
        for (i = 0; i < neverAllowedElements.length; i++) {
          element = neverAllowedElements[i];
          var tag = elementMapping[element];
          $('span.ui-button-icon-primary[data-html-tag="' + tag + '"]')
            .closest('button')
            .addClass('aloha-drupal-ui-state-hidden');
        }

        // Clean up empty component groups.
        $('.aloha-ui-component-group').each(function () {
          var $this = $(this);
          // Check for hidden nodes and empty nodes.
          var cc = 0;
          $this.children().each(function () {
            var $that = $(this);
            if ($that.css('display') === 'none' || !$that.text()) {
              cc++;
            }
          });
          if (cc === $this.children().length) {
            $this.hide();
          }
        });
      });

      Aloha.bind('aloha-editable-deactivated', function ($event, params) {
        for (var element in elementMapping) {
          if (elementMapping.hasOwnProperty(element) && $.inArray(element, allowedTags) === -1) {
            $('span.ui-button-icon-primary[data-html-tag="' + elementMapping[element] + '"]')
              .closest('button')
              .removeClass('aloha-drupal-ui-state-hidden');
          }
        }

        // Restore previously empty component groups.
        $('.aloha-ui-component-group').show();
      });
    }
  });
});
