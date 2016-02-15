<?php

/**
 * @file
 * views_plugin_cache_fake.inc
 *
 * Definition of class views_plugin_cache_none_debug.
 */

/**
 * Used by Views Aggregator to add performance stats to the 'None' cache.
 *
 * @ingroup views_cache_plugins
 */
class views_plugin_cache_none_debug extends views_plugin_cache_none {

  function summary_title() {
    return t('"None" cache with view performance statistics.');
  }

  // In order to by-pass the time-consuming function _post_execute() we need
  // to implement cache_get('results') so it returns TRUE.
  // See view::execute(), file views/includes/view.inc, line 1152.
  function cache_get($type) {
    return $type == 'results';
  }
}
