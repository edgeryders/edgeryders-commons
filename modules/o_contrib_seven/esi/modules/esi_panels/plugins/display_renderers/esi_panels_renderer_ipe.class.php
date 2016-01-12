<?php
/**
 * @file
 * Replacement for IPE editor.
 */

/**
 * Extend the panels_renderer_ipe class.
 */
class esi_panels_renderer_ipe extends panels_renderer_ipe {

  /**
   * Prepare the list of panes to be rendered, accounting for visibility/access
   * settings and rendering order.
   *
   * This method represents the standard approach for determining the list of
   * panes to be rendered that is compatible with all parts of the Panels
   * architecture. It first applies visibility checks, then sorts panes into
   * their proper rendering order, and returns the result as an array.
   *
   * Inheriting classes should override this method if that renderer needs to
   * regularly make additions to the set of panes that will be rendered.
   *
   * @param array $panes
   *   An associative array of pane data (stdClass objects), keyed on pane id.
   *
   * @return array
   *    An associative array of panes to be rendered, keyed on pane id and sorted
   *    into proper rendering order.
   */
  function prepare_panes($panes) {
    // Override parent::prepare_panes, so that any access-controls are not
    // applied to ESI panes. This ensures that panes are al
    ctools_include('content');
    // Use local variables as writing to them is very slightly faster
    $first = $normal = $last = array();

    // Prepare the list of panes to be rendered
    foreach ($panes as $pid => $pane) {
      if (empty($this->admin)) {
        // @TODO remove in 7.x and ensure the upgrade path weeds out any stragglers; it's been long enough
        $pane->shown = !empty($pane->shown); // guarantee this field exists.
        // If this pane is not displayed, skip out and do the next one.
        // Do not handle user-access controls here for ESI panes (handle in the
        // ESI rendering).
        if (!$this->pane_should_be_rendered($pane)) {
          continue;
        }
      }

      $content_type = ctools_get_content_type($pane->type);

      // If this pane wants to render last, add it to the $last array. We allow
      // this because some panes need to be rendered after other panes,
      // primarily so they can do things like the leftovers of forms.
      if (!empty($content_type['render last'])) {
        $last[$pid] = $pane;
      }
      // If it wants to render first, add it to the $first array. This is used
      // by panes that need to do some processing before other panes are
      // rendered.
      else if (!empty($content_type['render first'])) {
        $first[$pid] = $pane;
      }
      // Otherwise, render it in the normal order.
      else {
        $normal[$pid] = $pane;
      }
    }
    $this->prepared['panes'] = $first + $normal + $last;
    return $this->prepared['panes'];
  }

  /**
   * Test if a pane (or ESI tag) should be rendered. Normal panes are checked
   * for visibility and access-control rules. Panes rendered by ESI are just
   * checked for visibility.
   */
  function pane_should_be_rendered($pane) {
    if (!$pane->shown) {
      return FALSE;
    }
    elseif (!empty($pane->cache) && $pane->cache['method'] == 'esi') {
      // ESI panes are always rendered (access callbacks)
      return TRUE;
    }

    return panels_pane_access($pane, $this->display);
  }

  /**
   * Perform display/layout-level render operations.
   *
   * This method triggers all the inner pane/region rendering processes, passes
   * that to the layout plugin's theme callback, and returns the rendered HTML.
   *
   * If display-level caching is enabled and that cache is warm, this method
   * will not be called.
   *
   * @return string
   *   The HTML string representing the entire rendered, themed panel.
   */
  function render_layout() {
    if (empty($this->prep_run)) {
      $this->prepare();
    }
    // Get the default rendering of the panes.
    $this->render_panes();
    // Replace content with ESI tags, as needed.
    $this->handle_esi();
    $this->render_regions();

    if ($this->admin && !empty($this->plugins['layout']['admin theme'])) {
      $theme = $this->plugins['layout']['admin theme'];
    }
    else {
      $theme = $this->plugins['layout']['theme'];
    }

    $this->rendered['layout'] = theme($theme, array('css_id' => check_plain($this->display->css_id), 'content' => $this->rendered['regions'], 'settings' => $this->display->layout_settings, 'display' => $this->display, 'layout' => $this->plugins['layout'], 'renderer' => $this));
    return $this->prefix . $this->rendered['layout'] . $this->suffix;
  }

  /**
   * Parse the rendered panes, replacing the ESI-handled panes with ESI tags.
   */
  function handle_esi() {
    foreach ($this->prepared['panes'] as $pid => $pane) {
      if (!empty($pane->cache) && $pane->cache['method'] == 'esi') {
        $this->handle_esi_pane($pane);
      }
    }
  }

  /**
   * Replace a pane's rendered content with ESI content.
   */
  function handle_esi_pane($pane) {
    // Get the initial output.
    $url = url(esi_panels_url($pane, $this->display), array('absolute' => TRUE));
    $render =array(
      '#type' => 'esi',
      '#url' => $url,
    );
    $output = drupal_render($render);

    // If there are region locks, add them.
    if (!empty($pane->locks['type']) && $pane->locks['type'] == 'regions') {
      static $key = NULL;
      $javascript = &drupal_static('drupal_add_js', array());

      // drupal_add_js breaks as we add these, but we can't just lump them
      // together because panes can be rendered independently. So game the system:
      if (empty($key)) {
        $settings['Panels']['RegionLock'][$pane->pid] = $pane->locks['regions'];
        drupal_add_js($settings, 'setting');

        // These are just added via [] so we have to grab the last one
        // and reference it.
        $keys = array_keys($javascript['settings']['data']);
        $key = end($keys);
      }
      else {
        $javascript['settings']['data'][$key]['Panels']['RegionLock'][$pane->pid] = $pane->locks['regions'];
      }

    }

    if (empty($pane->IPE_empty)) {
      // Add an inner layer wrapper to the pane content before placing it into
      // draggable portlet
      $output = "<div class=\"panels-ipe-portlet-content\">$output</div>";
    }
    else {
      $output = "<div class=\"panels-ipe-portlet-content panels-ipe-empty-pane\">$output</div>";
    }
    // Hand it off to the plugin/theme for placing draggers/buttons
    $output = theme('panels_ipe_pane_wrapper', array('output' => $output, 'pane' => $pane, 'display' => $this->display, 'renderer' => $this));

    if (!empty($pane->locks['type']) && $pane->locks['type'] == 'immovable') {
      return "<div id=\"panels-ipe-paneid-{$pane->pid}\" class=\"panels-ipe-nodrag panels-ipe-portlet-wrapper panels-ipe-portlet-marker\">" . $output . "</div>";
    }

    $result = "<div id=\"panels-ipe-paneid-{$pane->pid}\" class=\"panels-ipe-portlet-wrapper panels-ipe-portlet-marker\">" . $output . "</div>";
    $this->rendered['panes'][$pane->pid] = $result;
  }
}
