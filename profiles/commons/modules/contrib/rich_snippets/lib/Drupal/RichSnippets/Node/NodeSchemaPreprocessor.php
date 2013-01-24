<?php

/**
 * @file
 * Contains Drupal_RichSnippets_Node_NodeSchemaPreprocessor.
 */

/**
 * Rich Snippets preprocessor for the Node module.
 */
class Drupal_RichSnippets_Node_NodeSchemaPreprocessor implements Drupal_RichSnippets_SchemaPreprocessorInterface {

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
   * The entity matched in the search result, usually a node object.
   *
   * @var stdClass
   */
  protected $_entity;

  /**
   * Implements Drupal_RichSnippets_SchemaPreprocessorAbstract::__construct().
   */
  public function __construct(array &$variables) {
    $this->_variables = &$variables;

    // Captures class variables.
    $this->_entity = $variables['result']['node'];
    $this->_entityType = 'node';
    $this->_bundle = $this->_entity->type;

    // Delete the info split so we can populate it ourselves.
    $this->_variables['info_split'] = array();
  }

  /**
   * Strips tags and reduces duplicate spaces.
   *
   * @param string $html
   *   The raw HTML markup.
   *
   * @return string
   *   The text with HTML tags stripped.
   */
  public function normalize($html) {
    $text = str_replace(array('<', '>'), array(' <', '> '), $html);
    $text = html_entity_decode(strip_tags($text), ENT_QUOTES, 'UTF-8');
    return preg_replace('/\s{2,}/', ' ', trim($text));
  }

  /**
   * Implements Drupal_RichSnippets_SchemaPreprocessorAbstract::getSchemaFields().
   */
  public function getSchemaFields($schema) {
    $schema_fields = array();
    $rdf_mappings = rich_snippets_get_rdf_schema_mappings($this->_entityType, $this->_bundle);
    if (!empty($rdf_mappings[$schema])) {
      foreach ($rdf_mappings[$schema] as $field_name) {
        $items = field_get_items($this->_entityType, $this->_entity, $field_name);
        $schema_fields[$field_name] = ($items) ? $items : array();
      }
    }
    return $schema_fields;
  }

  /**
   * Implements Drupal_RichSnippets_SchemaPreprocessorAbstract::addImage().
   */
  public function addImage($schema) {
    foreach ($this->getSchemaFields($schema) as $items) {
      $image = array(
        'path' => $items[0]['uri'],
        'style_name' => RICH_SNIPPETS_STYLE_NAME,
      );
      $this->_variables['image'] = theme('image_style', $image);
    }
  }

  /**
   * Implements Drupal_RichSnippets_SchemaPreprocessorAbstract::addDateToInfo().
   */
  public function addDateToInfo($schema) {
    foreach ($this->getSchemaFields($schema) as $items) {
      $timestamp = strtotime($items[0]['value']);
      $this->_variables['info_split'][$schema] = format_date($timestamp, 'rich_snippets_event_date');
    }
  }

  /**
   * Implements Drupal_RichSnippets_SchemaPreprocessorAbstract::addTextToInfo().
   */
  public function addTextToInfo($schema) {
    foreach ($this->getSchemaFields($schema) as $field_name => $items) {
      $build = field_view_field($this->_entityType, $this->_entity, $field_name, array('label' => 'hidden'));
      $rendered = $this->normalize(drupal_render($build));
      $this->_variables['info_split'][$schema] = check_plain($rendered);
    }
  }
}
