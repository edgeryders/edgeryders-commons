define([
  'jquery',
  'aloha/core',
  'ui/surface',
  'ui/tab',
  'ui/context',
  'i18n!ui/nls/i18n',
  'jqueryui'
], function ($, Aloha, Surface, Tab, Context, i18n) {
  'use strict';

  /**
   * The toolbar is configured via `settings.toolbar` and is defined as an
   * array of tabs with component groups, where the groups are arrays of
   * controls.
   *
   * There are separate components for each context, but only the components
   * for the active context are shown.
   *
   * As a container for tabs, the toolbar serves to group together groups of
   * control components so that they can be shown and hidden together in
   * their feature/functional set.  For exmaple groups of table controls
   * would be placed in a table tab, groups of list controls in an image tab,
   * and so forth.
   *
   * Toolbar class and manager
   *
   * @class
   * @extends {Surface}
   */
  var Toolbar = Surface.extend({
    $_container: null,
    _tabBySlot: null,
    _tabs: [],

    /**
     * Toolbar constructor.
     *
     * @param {!Array.<(Object|Array|string)>} tabs
     * @constructor
     * @override
     */
    _constructor: function (context, tabs) {
      var tabSettings,
        tabInstance,
        i,
        key;
      this._super(context);
      this.tabContainers = Tab.createContainers();
      Toolbar.$handlesSurfaceContainer.append(this.tabContainers.handlesContainer);
      Toolbar.$panelsSurfaceContainer.append(this.tabContainers.panelsContainer);
      this._tabBySlot = {};

      for (i = 0; i < tabs.length; i++) {
        tabSettings = tabs[i];
        tabInstance = new Tab(context, {
          label: i18n.t(tabSettings.label, tabSettings.label),
          showOn: tabSettings.showOn,
          handlesContainer: this.tabContainers.handlesContainer,
          panelsContainer: this.tabContainers.panelsContainer,
          state: this.tabContainers.handlesContainer.data('state')
        }, tabSettings.components);
        for (key in tabInstance._elemBySlot) {
          if (tabInstance._elemBySlot.hasOwnProperty(key)) {
            this._tabBySlot[key] = tabInstance;
          }
        }
        this._tabs.push({tab: tabInstance, settings: tabSettings});
      }
    },

    adoptInto: function (slot, component) {
      var tab = this._tabBySlot[slot];
      return tab && tab.adoptInto(slot, component);
    },

    /**
     * Shows the toolbar.
     */
    show: function () {
      if (Toolbar.renderOwnToolbarContainer) {
        var $textarea = Aloha.activeEditable.obj.closest('.aloha-textarea');
        Aloha.jQuery('.edit-toolbar-container .edit-toolbar.tertiary .edit-toolgroup.wysiwyg')
          .width($textarea.width() + 8);
        Toolbar.$toolbarSurfaceContainer
          .stop().fadeTo(200, 1)
          .insertBefore($textarea);
      }
      else {
        // Move the toolbar surface into our custom location.
        var $a = jQuery('<div class="aloha-surface">').append(Toolbar.$handlesSurfaceContainer.detach());
        jQuery('.edit-toolgroup.wysiwyg-tabs:first').append($a)
        var $b = jQuery('<div class="aloha-surface">').append(Toolbar.$panelsSurfaceContainer.detach());
        jQuery('.edit-toolgroup.wysiwyg:first').append($b);

        // Now show the appropriate content.
        Toolbar.$handlesSurfaceContainer.stop().fadeTo(200, 1);
        Toolbar.$panelsSurfaceContainer.stop().fadeTo(200, 1);
      }
    },

    /**
     * Hides the toolbar.
     */
    hide: function () {
      if (Toolbar.renderOwnToolbarContainer) {
        Toolbar.$toolbarSurfaceContainer.stop().fadeOut(200, function () {
          Toolbar.$toolbarSurfaceContainer
            .detach()
            .appendTo('body');
        });
      }
      else {
        Toolbar.$panelsSurfaceContainer
          .add(Toolbar.$handlesSurfaceContainer)
          .stop().fadeOut(200, function () {
            // Move the toolbar surface into its original location again.
            Toolbar.$panelsSurfaceContainer
              .detach()
              .appendTo('body');
            Toolbar.$handlesSurfaceContainer
              .detach()
              .appendTo('body');
          });
      }
    }
  });

  $.extend(Toolbar, {

    /**
     * An element on which all toolbar surfaces are to be rendered on the
     * page.
     * @type {jQuery.<HTMLElement>}
     */
    $panelsSurfaceContainer: null,

    $handlesSurfaceContainer: null,

    /**
     * When this container is used, it will contain both the panels surface
     * container and the tabs surface container.
     */
    $toolbarSurfaceContainer: null,

    // @todo: get rid of this by fixing AE plug-ins that incorrectly assume this exists!
    $surfaceContainer: $([]),

    /**
     * Initializes the toolbar manager.  Adds the surface container
     * element, and sets up floating behaviour settings.
     */
    init: function () {
      // TODO should use context.js to get the context element
      Toolbar.$panelsSurfaceContainer = $('<div>', {
        'class': 'aloha-surface aloha-toolbar-panels',
        'unselectable': 'on'
      }).hide();

      Toolbar.$handlesSurfaceContainer = $('<div>', {
        'class': 'aloha-surface aloha-toolbar-handles',
        'unselectable': 'on'
      }).hide();

      Toolbar.renderOwnToolbarContainer = Aloha.settings &&
        Aloha.settings.DrupalUI &&
        Aloha.settings.DrupalUI.renderOwnToolbarContainer === true;

      if (Toolbar.renderOwnToolbarContainer) {
        Toolbar.$toolbarSurfaceContainer = $('<div>', {
          'class': 'aloha-surface aloha-toolbar',
          'unselectable': 'on'
        })
          .append(Toolbar.$handlesSurfaceContainer)
          .append(Toolbar.$panelsSurfaceContainer)
          .hide();
        Toolbar.$handlesSurfaceContainer.removeClass('aloha-surface').show();
        Toolbar.$panelsSurfaceContainer.removeClass('aloha-surface').show();
      }

      // In the built aloha.js, init will happend before the body has
      // finished loading, so we have to defer appending the element.
      $(function () {
        if (Toolbar.renderOwnToolbarContainer) {
          Toolbar.$toolbarSurfaceContainer.appendTo('body');
        }
        else {
          Toolbar.$panelsSurfaceContainer.appendTo('body');
          Toolbar.$handlesSurfaceContainer.appendTo('body');
        }
      });
      if (Toolbar.renderOwnToolbarContainer) {
        Surface.trackRange(Toolbar.$toolbarSurfaceContainer);
      }
      else {
        Surface.trackRange(Toolbar.$panelsSurfaceContainer);
        Surface.trackRange(Toolbar.$handlesSurfaceContainer);
      }
    }
  });

  Toolbar.init();

  return Toolbar;
});
