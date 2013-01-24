<?php

/**
 * @file
 * Classes used by the Facet API module.
 */

/**
 * Facet API adapter for the Apache Solr Search Integration module.
 */
class SearchFacetapiAdapter extends FacetapiAdapter {

  /**
   * The result of SearchQuery::executeFirstPass().
   */
  public $hasMatches = FALSE;

  /**
   * The total number of results in the query.
   */
  protected $resultCount;

  /**
   * The facet query being executed.
   */
  protected $facetQueryExtender;

  /**
   * Returns a boolean flagging whether $this->searcher executed a search.
   */
  public function searchExecuted() {
    return !empty($this->keys);
  }

  /**
   * Returns a boolean flagging whether facets in a realm shoud be displayed.
   */
  public function suppressOutput($realm_name) {
    return FALSE;
  }

  /**
   * Sets the result count.
   */
  public function setResultCount($count) {
    $this->resultCount = $count;
    return $this;
  }

  /**
   * Returns the nmber of total results found for the current search.
   */
  public function getResultCount() {
    return $this->resultCount;
  }

  /**
   * Returns the query info for this facet field.
   *
   * @param array $facet
   *   The facet definition as returned by facetapi_facet_load().
   *
   * @return array
   *   An associative array containing:
   *   - fields: An array of field information, each of which are associative
   *      arrays containing:
   *      - table_alias: The table alias the field belongs to.
   *      - field: The name of the field containing the facet data.
   *    - joins: An array of join info, each of which are associative arrays
   *      containing:
   *      - table: The table being joined.
   *      - alias: The alias of the table being joined.
   *      - condition: The condition that joins the table.
   */
  public function getQueryInfo(array $facet) {
    if (!$facet['field api name']) {
      $query_info = array(
        'fields' => array(
          'n.' . $facet['field'] => array(
            'table_alias' => 'n',
            'field' => $facet['field'],
          ),
        ),
      );
    }
    else {
      $query_info = array();

      // Gets field info, finds table name and field name.
      $field = field_info_field($facet['field api name']);
      $table = _field_sql_storage_tablename($field);

      // Iterates over columns, adds fields to query info.
      foreach ($field['columns'] as $column_name => $attributes) {
        $column = _field_sql_storage_columnname($field['field_name'], $column_name);
        $query_info['fields'][$table . '.' . $column] = array(
          'table_alias' => $table,
          'field' => $column,
        );
      }

      // Adds the join on the node table.
      $query_info['joins'] = array(
        $table => array(
          'table' => $table,
          'alias' => $table,
          'condition' => "n.vid = $table.revision_id",
        ),
      );
    }

    // Returns query info, makes sure all keys are present.
    return $query_info + array(
      'joins' => array(),
      'fields' => array(),
    );
  }

  /**
   * Sets the facet query object.
   *
   * @return FacetapiQuery
   */
  public function getFacetQueryExtender() {
    if (!$this->facetQueryExtender) {
      $this->facetQueryExtender = db_select('search_index', 'i', array('target' => 'slave'))->extend('FacetapiQuery');
      $this->facetQueryExtender->join('node', 'n', 'n.nid = i.sid');
      $this->facetQueryExtender
        ->condition('n.status', 1)
        ->addTag('node_access')
        ->searchExpression($this->keys, 'node');
    }
    return $this->facetQueryExtender;
  }

}
