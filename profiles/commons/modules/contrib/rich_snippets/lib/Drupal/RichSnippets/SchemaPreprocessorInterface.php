<?php

/**
 * @file
 * Contains Drupal_RichSnippets_SchemaPreprocessorInterface.
 */

/**
 * Interface implemented by all Rich Snippets preprocessor classes.
 *
 * Preprocessors generally take data from the fields marked with shcmeata and
 * properties and append them to a template variable.
 */
interface Drupal_RichSnippets_SchemaPreprocessorInterface {

  /**
   * Constructs a Drupal_RichSnippets_SchemaPreprocessorInterface object.
   *
   * @param array &$variables
   *   An associative array of template variables.
   */
  public function __construct(array &$variables);

  /**
   * Returns an associative array of field names to values associated with the
   * passed schema or property.
   *
   * The field names are the names as stored in the object returned by the
   * search backend. For example, the Apache Solr Search Integration will use
   * the field names as stored in Solr and not the Field API names.
   *
   * @param string $schema
   *   The normalized schema associated with the search result.
   *
   * @return array
   *   An associative array keyed by field names to values.
   */
  public function getSchemaFields($schema);

  /**
   * Adds fields of the passed schema to the image section.
   *
   * It is expected that the fields contains the URI to the resource. The
   * processed data is added to $variables['image'].
   *
   * @param string $schema
   *   The normalized schema associated with the search result.
   */
  public function addImage($schema);

  /**
   * Adds fields of the passed schema to the info section.
   *
   * It is expected that the fields contains a timestamp of some sort. The
   * processed data is added to the $variables['info_split'] array.
   *
   * @param string $schema
   *   The normalized schema associated with the search result.
   */
  public function addDateToInfo($schema);

  /**
   * Adds the text in fields of the passed schema to the info section.
   *
   * It is expected that the fields contains a string. The processed data is
   * added to the $variables['info_split'] array.
   *
   * @param string $schema
   *   The normalized schema associated with the search result.
   */
  public function addTextToInfo($schema);

}
