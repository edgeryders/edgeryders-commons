define(['jquery', 'jqueryui'], function ($) {
  'use strict';
  var Utils = {

    /**
     * Wraps an element such that a label is displayed alongside it.
     *
     * Contrary to tooltips, a label is always visible and takes up
     * place in the toolbar.
     *
     * The label will wrap the given element to make an implicit
     * association between label and element (click on the label will
     * give focus to a wrapped input element for example).
     *
     * @param {string} labelText
     *       The already internationalized text the label should contain.
     * @param {!jQuery} element
     *       Any element to wrap.
     * @return {!jQuery}
     *       A new label element that wraps the given element.
     */
    wrapWithLabel: function(labelText, element) {
      return $('<label>', {'class': 'aloha-ui-label'})
        .append($('<span>', {'class': 'aloha-ui-label-text', 'text': labelText}))
        .append(element);
    },

    buttonDataIconsMapping: {
      'link': '&#xe002;',
      'unlink': '&#xe002;',
      'bold': '&#xe035;',
      'strong': '&#xe035;', // '&#xe034;',
      'italic': '&#xe00c;',
      'emphasis': '&#xe00c;', //'&#xe032;',
      'strikethrough': '&#xe00a;',
      'subscript': '&#xe039;',
      'superscript': '&#xe038;',
      'underline': '&#xe00b;',
      'strikethrough2': '&#xe00a;',
      'orderedlist': '&#xe009;',
      'unorderedlist': '&#xe006;',
      'p': '&#x2c;',
      'pre': '&#x2b;',
      'h1': '&#x2a;',
      'h2': '&#x29;',
      'h3': '&#x28;',
      'h4': '&#x27;',
      'h5': '&#x26;',
      'h6': '&#x25;',
      'indent': '&#xe008;',
      'outdent': '&#xe007;',
      'align-center': '&#xe042;',
      'align-justify': '&#xe048;',
      'align-right': '&#xe004;',
      'align-left': '&#xe005;',
      'remove-formatting': '&#xe001;',
      'characterpicker': '&#xe01a;',
      'imgAlignLeft': '&#x22;',
      'imgAlignRight': '&#x23;',
      'imgAlignCenter': '&#x24;',
      // 'imageAlignNone':
      // image plug-in
      'image-insert': '&#xe03b;',
      'image-align-left': '&#x22;',
      'image-align-right': '&#x23;',
      'image-align-none': '&#x24;'
    },

    // Source: http://stackoverflow.com/a/9609450.
    decodeEntities: (function () {
      // this prevents any overhead from creating the object each time
      var element = document.createElement('div');

      function decodeHTMLEntities (str) {
        if (str && typeof str === 'string') {
          // strip script/html tags
          str = str.replace(/<script[^>]*>([\S\s]*?)<\/script>/gmi, '');
          str = str.replace(/<\/?\w(?:[^"'>]|"[^"]*"|'[^']*')*>/gmi, '');
          element.innerHTML = str;
          str = element.textContent;
          element.textContent = '';
        }

        return str;
      }

      return decodeHTMLEntities;
    })(),

    getDataIconForClassName: function (className) {
      var icon = Utils.buttonDataIconsMapping[className];
      return Utils.decodeEntities(icon);
    },

    makeButton: function (button, props, hasMenu) {
      button.button({
        label: Utils.makeButtonLabel(props),
        text: !!(props.text || props.html),
        icons: {
          primary: props.icon || (props.iconUrl && 'aloha-ui-inline-icon-container') || null,
          secondary: (hasMenu && 'aloha-jqueryui-icon ui-icon-triangle-1-s') || null
        }
      });

      // Edit: improved accessibility.
      button.button('widget')
        .find('.ui-button-icon-primary').attr('aria-hidden', 'true');

      // Edit: remove Aloha's class-based icons and override them with our
      // custom icons, using data- attributes.
      var primaryIcon = button.button('widget')
        .find('.ui-button-icon-primary');
      if (primaryIcon.hasClass('aloha-icon') || primaryIcon.hasClass('aloha-img') || primaryIcon.hasClass('aloha-image-insert')) {
        var imgPlugin = (primaryIcon.hasClass('aloha-icon') === false);
        var classString = primaryIcon.attr('class'),
          match,
          className = null,
          classNames = [],
          re = (!imgPlugin) ? /aloha-(?:large-)?icon-([\w\-]+)/gi : /aloha-([\w\-]+)/gi;

        // Find all "aloha-(icon|image)-<something>" classes, and remember the
        // most specific match.
        /*jshint boss: true */
        while (match = re.exec(classString)) {
          className = match[1];
          classNames.push(className);
        }

        // If any match, override the icon.
        if (className) {
          var removeClassNames = classNames
            .map(function (c) { return (!imgPlugin) ? 'aloha-icon-' + c : ' aloha-' + c; })
            .join(' ');
          primaryIcon
            .removeClass('ui-icon')
            .removeClass('aloha-icon')
            .removeClass(removeClassNames)
            .addClass('spark-icon')
            .attr('data-html-tag', className)
            .attr('data-icon', Utils.getDataIconForClassName(className));
        }
      }

      button.button('widget')
        .find('.ui-button-icon-secondary')
        .addClass('spark-icon');

      if (props.iconUrl) {
        button.button('widget')
          .children('.ui-button-icon-primary')
          .append(Utils.makeButtonIconFromUrl(props.iconUrl));
      }
      return button;
    },
    makeButtonLabel: function (props) {
      // TODO text should be escaped
      return props.html || props.text || props.tooltip;
    },
    makeButtonLabelWithIcon: function (props) {
      var label = Utils.makeButtonLabel(props);
      if (props.iconUrl) {
        label = Utils.makeButtonIconFromUrl(props.iconUrl) + label;
      }
      return label;
    },
    makeButtonIconFromUrl: function (iconUrl) {
      return '<img class="aloha-ui-inline-icon" src="' + iconUrl + '">';
    },
    makeButtonElement: function (attr) {
      // Set type to button to avoid problems with IE which
      // considers buttons to be of type submit by default. One
      // problem that occurd was that hitting enter inside a
      // text-input caused a click event in the button right next
      // to it.
      return $('<button>', attr).attr('type', 'button');
    }
  };
  return Utils;
});
