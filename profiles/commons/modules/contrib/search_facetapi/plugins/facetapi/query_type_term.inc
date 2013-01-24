<?php

/**
 * @file
 * Term query type plugin for the Faceted Navigation for Search adapter.
 */

/**
 * Plugin for "term" query types.
 */
class SearchFacetapiTerm extends FacetapiQueryType implements FacetapiQueryTypeInterface {

  /**
   * Returns the query type associated with the plugin.
   *
   * @return string
   *   The query type.
   */
  static public function getType() {
    return 'term';
  }

  /**
   * Adds the filter to the query object.
   *
   * @param $query
   *   An object containing the query in the backend's native API.
   */
  public function execute($query) {
    $facet_query = $this->adapter->getFacetQueryExtender();
    $query_info = $this->adapter->getQueryInfo($this->facet);
    $tables_joined = array();

    // Iterates over active items, adds joins and conditions.
    $active_items = $this->adapter->getAllActiveItems();
    foreach ($active_items as $item) {
      if ($this->facet['name'] == $item['facets'][0]) {
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

          // Adds facet conditions to the queries.
          $field = $field_info['table_alias'] . '.' . $field_info['field'];
          $query->condition($field, $item['value']);
          $facet_query->condition($field, $item['value']);
        }
      }
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
      $build[$record->value] = array('#count' => $record->count);
    }

    // Returns initialized build.
    return $build;
  }
}
