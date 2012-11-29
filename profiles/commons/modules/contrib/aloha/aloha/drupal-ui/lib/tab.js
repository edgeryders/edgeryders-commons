define([
  'aloha/core',
  'jquery',
  'ui/container',
  'ui/component',
  'PubSub',
  'jqueryui'
], function (Aloha, $, Container, Component, PubSub) {
  'use strict';

  var idCounter = 0;
  var slottedComponents = {};

  /**
   * A "tab" consists of two things: a handle and a panel. The handle is the
   * "tab" itself, the panel is the content associated with that tab.
   */

  /**
   * Defines a Container object that represents a collection of related
   * component groups to be rendered together on the toolbar.  Tabs are
   * organized by feature and functionality so that related controls can be
   * brought in and out of view depending on whether they are
   * appropriate for a given user context.
   *
   * Tabs can be defined declaritively in the Aloha configuration in the
   * following manner:
   *
   *    Aloha.settings.toolbar: [
   *      {
   *         label: 'Lists',
   *         showOn: 'ul,ol,*.parent(.aloha-editable ul,.aloha-editable ol)',
   *         components: [ [ 'orderedList', 'unorderedList' ] ]
   *      }
   *    ]
   *
   * Alternatively, tabs can also be created imperatively in this way:
   * new Tab( options, components ).
   *
   * @class
   * @extends {Container}
   */
  var Tab = Container.extend({

    _elemBySlot: null,
    _groupBySlot: null,
    _groupByComponent: null,

    /**
     * All that this constructor does is save the components array into a
     * local variable, to be used during instantialization.
     *
     * @param {object} settings
     * @param {Array.<Array<string>>} components
     * @constructor
     */
    _constructor: function (context, settings, components) {
      var thisTab = this,
        i, j,
        elem,
        groupedComponents,
        group,
        groupProps,
        componentName;

      this._elemBySlot = {};
      this._groupBySlot = {};
      this._groupByComponent = {};
      this._super(context, settings);

      this.handles = settings.handlesContainer;
      this.panels = settings.panelsContainer;
      this.state = settings.handlesContainer.data('state');
      this.id = 'aloha-drupal-ui-tab-panel-' + (++idCounter);
      this.panel = $('<div>', {id: this.id, 'unselectable': 'on'});
      this.handle = $('<li><a href="#' + this.id + '">' +
        settings.label + '</a></li>');

      for (i = 0; i < components.length; i++) {
        if (typeof components[i] === 'string') {
          if (1 === components[i].length && components[i].charCodeAt(0) === 10) {
            this.panel.append('<div>', {'unselectable': 'on'});
          } else {
            elem = $('<span>', {'unselectable': 'on'});
            this._elemBySlot[components[i]] = elem;
            this.panel.append(elem);
          }
        } else {
          group = $('<div>', {
            'class': 'aloha-ui-component-group',
            'unselectable': 'on'
          }).appendTo(this.panel);
          groupProps = {element: group, visibleCounter: 0};
          groupedComponents = components[i];
          for (j = 0; j < groupedComponents.length; j++) {
            this._groupBySlot[groupedComponents[j]] = groupProps;
            if (groupedComponents[j] &&
              1 === groupedComponents[j].length &&
              groupedComponents[j].charCodeAt(0) === 10) {
              group.append($('<div>', {'unselectable': 'on'}));
            } else {
              componentName = groupedComponents[j];
              elem = $('<span>', {'unselectable': 'on'});
              this._elemBySlot[groupedComponents[j]] = elem;
              group.append(elem);
            }
          }
        }
      }

      this.panel.append($('<div>', {'class': 'aloha-ui-clear', 'unselectable': 'on'}));
      this.handle.appendTo(this.handles);
      this.panel.appendTo(this.panels);

      var alohaTabs = this.handles.data('aloha-tabs');
      this.index = alohaTabs.length;
      alohaTabs.push(this);

      this._processTabs();
    },

    // idempotent (called whenever a tab is created)
    _processTabs: function () {
      // _processTabs()
      // Find all tab handles and set the "aria-controls" attribute.
      var anchors = this.handles.children().map(function () {
        return $("a", this)[ 0 ];
      });
      anchors.each(function (i, a) {
        var selector = a.hash;
        $(a).attr("aria-controls", selector.substring(1));
      });

      // _refresh()
      this.handles
        // tab handles container
        .addClass("aloha-drupal-ui-tab-handle-container")
        // tab handles
        .children()
        .addClass("aloha-drupal-ui-tab-handle")
        .addClass("aloha-drupal-ui-state-default");
      this.panels
        // tab panels container
        .addClass("aloha-drupal-ui-tab-panel-container")
        // tab panels
        .children()
        .addClass(" aloha-drupal-ui-tab-panel ")
        .addClass("aloha-drupal-ui-state-hidden");

      // _setupEvents()
      anchors
        // Unbind to avoid duplicates.
        .unbind(".aloha-drupal-ui-tabs")
        .bind("click.aloha-drupal-ui-tabs", $.proxy(this, "_eventHandler"));
    },

    _getHandleByIndex: function (index) {
      var that = this;
      return that.handles.children()[ index ];
    },

    _getIndexOfHandle: function (handle) {
      var that = this;
      return that.handles.children().index(handle);
    },

    _getPanelForHandle: function (handle) {
      if (!handle.length) {
        return $([]);
      }

      var that = this;
      var id = handle.find("a").attr("aria-controls");
      return that.panels.find("#" + id);
    },

    _eventHandler: function (event) {
      var that = this,
        activeHandle = that.state._tabActiveHandle,
        activeHandleIndex = that.state._tabActiveHandleIndex,
        clicked = $(event.currentTarget),
        clickedHandle = clicked.closest("li"),
        clickedIsActive = clickedHandle[ 0 ] === activeHandle[ 0 ],
        toShow = that._getPanelForHandle(clickedHandle),
        toHide = !activeHandle.length ? $() : that._getPanelForHandle(activeHandle),
        eventData = {
          oldHandle: activeHandle,
          oldPanel: toHide,
          newHandle: clickedHandle,
          newPanel: toShow
        };

      event.preventDefault();

      // If the clicked handle is already marked as active and actually *is* active, bail.
      if (clickedIsActive) {
        return;
      }

      // If the clicked handle is disabled or hidden, bail.
      if (clickedHandle.hasClass("aloha-drupal-ui-state-disabled") ||
        clickedHandle.hasClass("aloha-drupal-ui-state-hidden")) {
        clicked[ 0 ].blur();
        return;
      }

      that.state._tabActiveHandleIndex = that._getIndexOfHandle(clickedHandle);
      that.state._tabActiveHandle = clickedHandle;

      if (!toHide.length && !toShow.length) {
        throw "Aloha UI Tabs: Mismatching fragment identifier.";
      }

      that._updateUI(event, eventData);
    },

    _updateUI: function (event, eventData) {
      var that = this;

      eventData.oldPanel
        .addClass("aloha-drupal-ui-state-hidden")
        .removeClass("aloha-drupal-ui-state-default");
      eventData.oldHandle.removeClass("aloha-drupal-ui-state-active");
      eventData.newHandle.addClass("aloha-drupal-ui-state-active");
      eventData.newPanel
        .addClass("aloha-drupal-ui-state-default")
        .removeClass("aloha-drupal-ui-state-hidden");

      that._tabSelected(that);
    },

    select: function (index) {
      this.handles.children().eq(index).find("a")
        .trigger("click");
    },

    adoptInto: function (slot, component) {
      var elem = this._elemBySlot[slot],
        group;
      if (!elem) {
        return false;
      }
      slottedComponents[slot] = component;
      component.adoptParent(this);
      elem.append(component.element);
      group = this._groupBySlot[slot];
      if (group) {
        this._groupByComponent[component.id] = group;
        if (component.isVisible()) {
          group.visibleCounter += 1;
        }
      }
      return true;
    },

    foreground: function () {
      this.select(this.index);
    },

    childForeground: function (childComponent) {
      this.foreground();
    },

    hasVisibleComponents: function () {
      var siblings = this._elemBySlot;
      var slot;
      for (slot in siblings) {
        if (siblings.hasOwnProperty(slot) && slottedComponents[slot]) {
          if (slottedComponents[slot].visible) {
            return true;
          }
        }
      }
      return false;
    },

    childVisible: function (childComponent, visible) {
      if (visible) {
        childComponent.container.show();
      } else if (!childComponent.container.hasVisibleComponents()) {
        childComponent.container.hide();
      }
      var group = this._groupByComponent[childComponent.id];
      if (!group) {
        return;
      }
      if (visible) {
        if (0 === group.visibleCounter) {
          group.element.removeClass('aloha-ui-hidden');
        }
        group.visibleCounter += 1;
      } else {
        group.visibleCounter -= 1;
        if (0 === group.visibleCounter) {
          group.element.addClass('aloha-ui-hidden');
        }
      }
    },

    _tabSelected: function (tab) {
      var that = this;

      var tabs = that.handles.data('aloha-tabs');
      PubSub.pub('aloha.ui.container.selected', {data: tabs[tab.index]});
    },

    /**
     * @override
     */
    show: function () {
      if (!this.handles.children().length) {
        return;
      }
      this.handle
        .removeClass("aloha-drupal-ui-state-hidden")
        .addClass("aloha-drupal-ui-state-default");
      this.visible = true;

      // Hiding all tabs may hide the toolbar, so showing the
      // first tab again must also show the toolbar.
      // this.container.show();

      // If no tab handle is selected, then select this tab.
      // (this.foreground uses this.index, which means the current tab object's
      // panel will be shown)
      if (this.state._tabActiveHandleIndex === false) {
        this.foreground();
      }
    },

    /**
     * @override
     */
    hide: function () {
      if (0 === this.handles.children().length) {
        return;
      }
      this.handle
        .removeClass("aloha-drupal-ui-state-default")
        .addClass("aloha-drupal-ui-state-hidden");
      this.visible = false;

      // If the tab we just hid was the selected tab, then we need to
      // select another tab in its stead.  We will select the first
      // visible tab we find, or else we deselect all tabs.
      if (this.index === this.state._tabActiveHandleIndex) {
        var alohaTabs = this.handles.data('aloha-tabs');

        var i;
        for (i = 0; i < alohaTabs.length; ++i) {
          if (alohaTabs[ i ].visible) {
            this.select(i);
            return;
          }
        }

        // It doesn't make any sense to leave the toolbar
        // visible after all tabs have been hidden.
        // @todo
        // this.container.hide();
      }
    }

  });

  $.extend(Tab, {

    /**
     * Creates holding elements.
     *
     * @static
     * @return {jQuery.<HTMLElement>} The holder container.
     */
    createContainers: function () {
      var $handles = $('<ul>', { 'class': 'tab-handles', 'unselectable': 'on'})
        .data('state', {
          _tabActiveHandleIndex: false,
          _tabActiveHandle: $([])
        })
        .data('aloha-tabs', []);
      var $panels = $('<div>', { 'class': 'tab-panels', 'unselectable': 'on'});
      return { handlesContainer: $handles, panelsContainer: $panels };
    }
  });

  return Tab;
});
