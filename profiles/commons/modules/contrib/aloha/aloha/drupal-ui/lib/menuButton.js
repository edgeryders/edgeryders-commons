define([
  'jquery',
  'ui/component',
  'ui/utils',
  'jqueryui'
], function ($, Component, Utils) {
  'use strict';

  var MenuButton = Component.extend({
    init: function () {
      this.element = MenuButton.makeMenuButton(this);
    }
  });

  // static functions

  /**
   * @param props button properties:
   *        click - if provided will generate a split button,
   *                  otherwise just a normal select button.
   *        menu - array of props for nested buttons
   *        text - button text
   *        html - button html
   *        iconUrl - button icon url
   *        siblingContainer
   *             - a $ object that will be searched for other split buttons.
   *               If a split button is expanded, all the other split buttons in
   *               this container will be closed.
   */
  MenuButton.makeMenuButton = function (props) {
    var expand = Utils.makeButtonElement({'class': 'aloha-ui-menubutton'});
    var menu = $('<ul>').attr({'class': 'aloha-ui-menubutton-menu'});
    var action = null;
    var buttonset = null;

    if (props.click) {
      action = Utils.makeButton(Utils.makeButtonElement({'class': 'aloha-ui-menubutton-action'}), props)
        .click(props.click);

      Utils.makeButton(expand, {}, true);

      buttonset = $('<div>')
        .buttonset()
        .append(action)
        .append(expand);
    }
    else {
      Utils.makeButton(expand, props, true)
        .addClass('aloha-ui-menubutton-single');
    }

    if (!props.menu) {
      return wrapper.append(action);
    }

    function hideMenu (menu) {
      menu.hide().parent().removeClass('aloha-ui-menubutton-pressed');
    }

    expand.click(function () {
      expand.addClass('aloha-ui-menubutton-pressed');

      if (props.siblingContainer) {
        props.siblingContainer
          .find('.aloha-ui-menubutton-menu')
          .each(function () {
            if (this !== menu[0]) {
              hideMenu($(this));
            }
          });
      }

      if (menu.is(':visible')) {
        hideMenu(menu);
        return;
      }

      menu.show();

      $(document).bind('click', function (event) {
        $(this).unbind(event);
        menu.hide();
        expand.removeClass('aloha-ui-menubutton-pressed');
      });

      return false;
    });

    expand.append(menu);

    menu.append(makeNestedMenus(makeCloseHandler(menu), props.menu));

    menu.hide().menu({
      'select': onSelect
    });

    return expand;
  };

  function makeNestedMenus (parentCloseHandler, menu) {
    var elems = [];
    $.each(menu, function (_, item) {
      var elem = $('<li>');
      elem.append($('<a>', {'href': '', 'html': Utils.makeButtonLabelWithIcon(item)}));
      if (item.click) {
        elem.data('aloha-ui-menubutton-select', function () {
          parentCloseHandler();
          item.click();
        });
      }
      if (item.menu) {
        var nestedMenu = $('<ul>').appendTo(elem);
        nestedMenu.append(
          makeNestedMenus(makeCloseHandler(nestedMenu, parentCloseHandler),
            item.menu));
      }
      elems.push(elem[0]);
    });
    return elems;
  }

  function makeCloseHandler (menu, parentCloseHandler) {
    parentCloseHandler = parentCloseHandler || $.noop;
    return function () {
      // We must blur the parent menu otherwise it will remain in
      // focused state and not expand the next time it is hovered over
      // after the user has selected an item.
      menu.blur().hide();
      menu.parent().removeClass('aloha-ui-menubutton-pressed');
      parentCloseHandler();
    };
  }

  function onSelect (event, ui) {
    var clickHandler = ui.item.data('aloha-ui-menubutton-select');
    if (clickHandler) {
      clickHandler(event, ui);
    }
    // We use preventDefault() to keep a click on a menu item from
    // scrolling to the top of the page.
    event.preventDefault();
  }

  return MenuButton;
});
