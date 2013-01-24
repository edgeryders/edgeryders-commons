<?php

/**
 * @file
 * Implementation of Apache Solr Search Integration hooks.
 */

/**
 * Implements hook_apachesolr_query_alter().
 */
function apachesolr_proximity_apachesolr_query_alter($query) {

  // Check whether the bias is configured for this enviromnent.
  $env_id = $query->solr('getId');
  $boost = apachesolr_proximity_get_boost($env_id);

  // Parse terms and phrases. If less than two keyowrds or phrases are found, do
  // not do anything since proximity boosting wouldn't make sense.
  $q = $query->getParam('q');
  $parsed = apachesolr_proximity_parse_query($q);
  if (count($parsed) > 1) {

    // Get the operator, defaults to OR.
    $operator = $query->getParam('q.op');
    if (!$operator) {
      $operator = 'OR';
    }

    // Replaces "q" param with the cquery containing the proximity boost. We
    // have to use the edismax request handler to support proximity queries.
    $q = apachesolr_proximity_build_query($q, $operator, $parsed, $boost);
    $query->replaceParam('q', $q);
    $query->replaceParam('defType', 'edismax');
  }
}

/**
 * Parses the keywords into terms and phrases.
 *
 * @param string $q
 *   The "q" param passed to Solr, which is the raw search query entered by the
 *   end user through the search form.
 *
 * @return array
 *   An array of parsed terms, which are associative arrays containing:
 *   - keyword: The parsed term or phrase.
 *   - type: Either "term" or "phrase".
 */
function apachesolr_proximity_parse_query($q) {

  // Return an empty array if there are no matches.
  if (!$matches = apachesolr_proximity_match_keywords($q)) {
    return array();
  }

  // Iterate over matches and determine if they are phrases or terms.
  $keywords = array();
  foreach ($matches as $match) {
    if (0 === strpos($match, '"')) {
      // Phrases start with quotes. Remove the quotes so that we can get the
      // first term of the phrase in apachesolr_proximity_build_query().
      $keywords[] = array(
        'keyword' => trim($match, '"'),
        'type' => 'phrase',
      );
    }
    elseif (!preg_match('/^AND( NOT)?|NOT|OR$/', $match)) {
      // Don't capture operators as terms.
      $keywords[] = array(
        'keyword' => $match,
        'type' => 'term',
      );
    }
    else {
      // @todo Figure out how to handle queries with mixed operators.
      // @see http://drupal.org/node/1848734
      return array();
    }
  }

  return $keywords;
}

/**
 * Builds the proximity query to be set as the "q" parameter.
 *
 * @param string $q
 *   The "q" param passed to Solr, which is the raw search query entered by the
 *   end user through the search form.
 * @param string $operator
 *   The operator, either "OR" or "AND".
 * @param array $parsed
 *   The parsed keywords as returned by apachesolr_proximity_parse_query().
 * @param float $boost
 *   The boost factor for the term proximity.
 *
 * @return string
 *   The formatted proximity query.
 */
function apachesolr_proximity_build_query($q, $operator, array $parsed, $boost) {
  $has_phrase = FALSE;

  // Gather all terms used in the proximity query.
  $proximity_terms = array();
  foreach ($parsed as $keyword) {
    if ('term' == $keyword['type']) {
      $proximity_terms[] = $keyword['keyword'];
    }
    elseif ($matches = apachesolr_proximity_match_keywords($q)) {
      // As per the relevancy tuning doc, we only need the first term.
      $proximity_terms[] = $matches[0];
      $has_phrase = TRUE;
    }
  }

  // Rebuild the "q" parameter according to the relevancy cookbook.
  // @see http://wiki.apache.org/solr/SolrRelevancyCookbook#Term_Proximity
  $proximity_clause = '"' . join($proximity_terms, ' ') . '"~1000000';
  if ('OR' == $operator) {
    $proximity_query = $q . ' ' . $proximity_clause . '^' . $boost;
  }
  elseif (!$has_phrase) {
    $proximity_query = $proximity_clause;
  }
  else {
    // @todo Figure out how to work with phrases for AND operator. Not too
    // critical since the OR operator is recommended to use in conjunction
    // with this module and it is the Apache Solr Search Integration module's
    // default setting.
    // @see http://drupal.org/node/1848722
  }

  return $proximity_query;
}

/**
 * Helper function that matches terms and phrases in the search query.
 *
 * @param string $search_query
 *   The search query that the terms and phrases are being matched in. This is
 *   usually either the raw search query entered by the end user through the
 *   search form or a phrase matched in the search query.
 *
 * @return array
 *   An array of matches, one per row.
 */
function apachesolr_proximity_match_keywords($search_query) {
  $keywords = array();
  if (preg_match_all(APACHESOLR_PROXIMITY_REGEX, ' ' . $search_query, $matches, PREG_SET_ORDER)) {
    foreach ($matches as $match) {
      $keywords[] = $match[2];
    }
  }
  return $keywords;
}
