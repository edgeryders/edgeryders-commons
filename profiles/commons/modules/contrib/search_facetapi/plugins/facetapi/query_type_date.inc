<?php

/**
 * @file
 * Date query type plugin for the Apache Solr adapter.
 */

/**
 * Plugin for "date" query types.
 */
class SearchFacetapiDate extends FacetapiQueryTypeDate implements FacetapiQueryTypeInterface {

  /**
   * Returns the query type associated with the plugin.
   *
   * @return string
   *   The query type.
   */
  static public function getType() {
    return 'date';
  }

  /**
   * Adds the filter to the query object.
   *
   * @param $query
   *   An object containing the query in the backend's native API.
   */
  public function execute($query) {
    // Gets the last active date, bails if there isn't one.
    $active_items = $this->adapter->getActiveItems($this->facet);
    if (!$active_item = end($active_items)) {
      return;
    }

    // Gets facet query and this facet's query info.
    $facet_query = $this->adapter->getFacetQueryExtender();
    $query_info = $this->adapter->getQueryInfo($this->facet);
    $tables_joined = array();

    // Formats start and end date.
    $start = strtotime($active_item['start']);
    $end = strtotime($active_item['end']);

    foreach ($query_info['fields'] as $field_info) {

      // Adds join to the facet query.
      $facet_query->addFacetJoin($query_info, $field_info['table_alias']);

      // Adds adds join to search query, makes sure it is only added once.
      if (isset($query_info['joins'][$field_info['table_alias']])) {
        if (!isset($tables_joined[$field_info['table_alias']])) {
          $tables_joined[$field_info['table_alias']] = TRUE;
          $join_info = $query_info['joins'][$field_info['table_alias']];
          $query->join($join_info['table'], $join_info['alias'], $join_info['condition']);
        }
      }

      // Adds field conditions to the facet and search query.
      $field = $field_info['table_alias'] . '.' . $this->facet['field'];
      $query->condition($field, $start, '>=');
      $query->condition($field, $end, '<');
      $facet_query->condition($field, $start, '>=');
      $facet_query->condition($field, $end, '<');
    }
  }

  /**
   * Initializes the facet's build array.
   *
   * @return array
   *   The initialized render array.
   */
  public function build() {
    $build = array();

    // Makes sure there was at least one match.
    if (!$this->adapter->hasMatches) {
      return array();
    }

    // Gets base facet query, adds facet field and filters.
    $facet_query = clone $this->adapter->getFacetQueryExtender();
    $query_info = $this->adapter->getQueryInfo($this->facet);
    $facet_query->addFacetField($query_info);
    foreach ($query_info['joins'] as $table_alias => $join_info) {
      $facet_query->addFacetJoin($query_info, $table_alias);
    }

    // Executes query, iterates over results.
    $result = $facet_query->execute();
    foreach ($result as $record) {
      $raw_values[$record->value] = $record->count;
    }
    ksort($raw_values);

    // Gets active facets, starts building hierarchy.
    $parent = $gap = NULL;
    foreach ($this->adapter->getActiveItems($this->facet) as $value => $item) {
      // If the item is active, the count is the result set count.
      $build[$value] = array('#count' => $this->adapter->getResultCount());

      // Gets next "gap" increment, mintue being the lowest be can go.
      $date_gap = facetapi_get_date_gap($item['start'], $item['end']);
      $gap = facetapi_get_next_date_gap($date_gap, FACETAPI_DATE_MINUTE);

      // If there is a previous item, there is a parent, uses a reference so the
      // arrays are populated when they are updated.
      if (NULL !== $parent) {
        $build[$parent]['#item_children'][$value] = &$build[$value];
        $build[$value]['#item_parents'][$parent] = $parent;
      }

      // Stores the last value iterated over.
      $parent = $value;
    }

    // Mind the gap! Calculates gap from min and max timestamps.
    $timestamps = array_keys($raw_values);
    if (NULL === $parent) {
      if (count($raw_values) > 1) {
        $gap = facetapi_get_timestamp_gap(min($timestamps), max($timestamps));
      }
      else {
        $gap = FACETAPI_DATE_HOUR;
      }
    }

    // Converts all timestamps to dates in ISO 8601 format.
    $dates = array();
    foreach ($timestamps as $timestamp) {
      $dates[$timestamp] = facetapi_isodate($timestamp, $gap);
    }

    // Treat each date as the range start and next date as the range end.
    $range_end = array();
    $previous = NULL;
    foreach (array_unique($dates) as $date) {
      if (NULL !== $previous) {
        $range_end[$previous] = facetapi_get_next_date_increment($previous, $gap);
      }
      $previous = $date;
    }
    $range_end[$previous] = facetapi_get_next_date_increment($previous, $gap);

    // Groups dates by the range they belong to, builds the $build array
    // with the facet counts and formatted range values.
    foreach ($raw_values as $value => $count) {
      $new_value = '[' . $dates[$value] . ' TO ' . $range_end[$dates[$value]] . ']';
      if (!isset($build[$new_value])) {
        $build[$new_value] = array('#count' => $count);
      }
      else {
        $build[$new_value]['#count'] += $count;
      }

      // Adds parent information if not already set.
      if (NULL !== $parent && !isset($build[$new_value]['#item_parents'])) {
        $build[$parent]['#item_children'][$new_value] = &$build[$new_value];
        $build[$new_value]['#item_parents'][$parent] = $parent;
      }
    }

    return $build;
  }
}
