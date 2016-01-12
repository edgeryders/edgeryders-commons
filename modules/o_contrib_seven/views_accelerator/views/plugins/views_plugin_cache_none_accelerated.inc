<?php

/**
 * @file
 * views_plugin_cache_fake.inc
 *
 * Definition of class views_plugin_cache_none_accelerated.
 */

/**
 * Tricks the Views module into believing there is a cache when there isn't.
 *
 * @ingroup views_cache_plugins
 */
class views_plugin_cache_none_accelerated extends views_plugin_cache_none {

  function summary_title() {
    return t('Pseudo-cache for Views Accelerator');
  }

  // In order to by-pass the time-consuming function _post_execute() we need
  // to implement cache_get('results') so it returns TRUE.
  // See view::execute(), file views/includes/view.inc, line 1152.
  function cache_get($type) {
    return $type == 'results';
  }
}
