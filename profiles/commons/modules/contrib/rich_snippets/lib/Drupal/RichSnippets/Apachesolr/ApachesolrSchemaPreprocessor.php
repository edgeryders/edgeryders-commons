<?php

/**
 * @file
 * Contains Drupal_RichSnippets_Apachesolr_ApachesolrSchemaPreprocessor.
 */

/**
 * Rich Snippets preprocessor for the Apache Solr Search Integration module.
 */
class Drupal_RichSnippets_Apachesolr_ApachesolrSchemaPreprocessor implements Drupal_RichSnippets_SchemaPreprocessorInterface {

  /**
   * The machine name of the search result's entity.
   *
   * @var string
   */
  protected $_entityType;

  /**
   * The machine name of the search result's bundle.
   *
   * @var string
   */
  protected $_bundle;

  /**
   * Reference to the SERP template variables.
   *
   * @var array
   */
  protected $_variables;

  /**
   * An array of Solr fields modeling the search result's entity.
   *
   * @var array
   */
  protected $_solrFields;

  /**
   * An array mapping RDF data to Solr field.
   *
   * @var array
   */
  protected $_rdfMappings = array();

  /**
   * Implements Drupal_RichSnippets_SchemaPreprocessorAbstract::__construct().
   */
  public function __construct(array &$variables) {
    $this->_variables = &$variables;

    // Captures class variables.
    $this->_entityType = $variables['result']['entity_type'];
    $this->_bundle = $variables['result']['bundle'];
    $this->_solrFields = $variables['result']['fields'];

    // Decode the RDF schema mappings.
    if (isset($this->_solrFields['zm_rdf_schema_mappings'])) {
      $this->_rdfMappings = (array) drupal_json_decode($this->_solrFields['zm_rdf_schema_mappings'][0]);
    }

    // Delete the info split so we can populate it ourselves.
    $this->_variables['info_split'] = array();
  }

  /**
   * Returns the entity field / Solr field mappings for all fields associated
   * with the passed schema.
   *
   * @param string $schema
   *   The schema that mappings are generated for.
   *
   * @return array
   *   An associative array keyed by schema field name to solr field name.
   */
  public function getFieldSchemaMappings($schema) {
    $schema_mappings = array();

    // Check if there are any fields associated with the requested schema.
    $this->_rdfMappings = rich_snippets_get_rdf_schema_mappings($this->_entityType, $this->_bundle);
    if (!empty($this->_rdfMappings[$schema])) {

      // If so, get the Solr field name associated with the Drupal field name.
      $key_mappings = apachesolr_get_index_key_map($this->_entityType);
      foreach ($this->_rdfMappings[$schema] as $field_name) {
        if (isset($key_mappings[$field_name])) {
          $schema_mappings[$field_name] = $key_mappings[$field_name];
        }
      }
    }

    return $schema_mappings;
  }

  /**
   * Helper function that decodes the image info from the corresponding field.
   *
   * @param stirng $field_name
   *   The name of the field containing the image data.
   *
   * @return array|FALSE
   *   An array of image info matching what is returned from image_get_info(),
   *   FALSE if the data is not available.
   */
  public function decodeImageInfo($field_name) {
    $info = FALSE;
    $info_field_name = rich_snippets_get_apachesolr_image_info_field($field_name);
    if (!empty($this->_solrFields[$info_field_name])) {
      if ($info = drupal_json_decode($this->_solrFields[$info_field_name][0])) {
        $info += array(
          'width' => 0,
          'height' => 0,
          'extension' => '',
          'mime_type' => '',
          'file_size' => 0,
        );
      }
    }
    return $info;
  }

  /**
   * Implements Drupal_RichSnippets_SchemaPreprocessorAbstract::getSchemaFields().
   */
  public function getSchemaFields($schema) {
    $schema_fields = array();
    $schema_mappings = $this->getFieldSchemaMappings($schema);
    foreach ($schema_mappings as $field_name) {
      if (!empty($this->_solrFields[$field_name])) {
        $schema_fields[$field_name] = (array) $this->_solrFields[$field_name];
      }
    }
    return $schema_fields;
  }

  /**
   * Implements Drupal_RichSnippets_SchemaPreprocessorAbstract::addImage().
   */
  public function addImage($schema) {
    foreach ($this->getSchemaFields($schema) as $field_name => $solr_field) {
      if ($info = $this->decodeImageInfo($field_name)) {
        $attributes = array(
          'src' => 'data:' . $info['mime_type'] .  ';base64,' . $solr_field[0],
          'height' => $info['height'],
          'width' => $info['width'],
        );

        // @todo Make this a theme function.
        $this->_variables['image'] = '<img' . drupal_attributes($attributes) . ' />';
      }
    }
  }

  /**
   * Implements Drupal_RichSnippets_SchemaPreprocessorAbstract::addDateToInfo().
   */
  public function addDateToInfo($schema) {
    foreach ($this->getSchemaFields($schema) as $solr_field) {
      $timestamp = strtotime($solr_field[0]);
      $this->_variables['info_split'][$schema] = format_date($timestamp, 'rich_snippets_event_date');
    }
  }

  /**
   * Implements Drupal_RichSnippets_SchemaPreprocessorAbstract::addTextToInfo().
   */
  public function addTextToInfo($schema) {
    foreach ($this->getSchemaFields($schema) as $solr_field) {
      $this->_variables['info_split'][$schema] = check_plain($solr_field[0]);
    }
  }
}
