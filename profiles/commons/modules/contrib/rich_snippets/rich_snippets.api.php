<?php

/**
 * @file
 * Hooks provided by the Rich Snippets module.
 */

/**
 * Preprocess the search result template variables per schema.
 *
 * SCHEMA is the normalized value returned by hook_search_result_schema()
 * implementations. All characters are converted to lowercase, and all spaces
 * are replaced by underscores. For example, the "Health and medical types"
 * schema is normalized to "health_and_medical_types".
 *
 * @param array &$variables
 *   The template variables being preprocessed.
 */
function hook_preprocess_search_result_SCHEMA_schema(array &$variables, Drupal_RichSnippets_SchemaPreprocessorInterface $preprocessor) {
  $preprocessor->addImage('image');
  $preprocessor->addTextToInfo('location');
}

/**
 * Returns all preprocessor definitions.
 *
 * It is only necessary to implement this hook when integration a search backend
 * to the Rich Snippets module.
 *
 * @return array
 *   An associative array of preprocessors keyed by module name to an array
 *   containing:
 *   - class: The preprocessor class.
 */
function hook_rich_snippets_preprocessors() {
  return array(
    'apachesolr' => array(
      'class' => 'Drupal_RichSnippets_Apachesolr_ApachesolrSchemaPreprocessor',
    ),
    'node' => array(
      'class' => 'Drupal_RichSnippets_Node_NodeSchemaPreprocessor',
    ),
  );
}

/**
 * Gets the schema from the result.
 *
 * Usually a top level schema defined at http://schema.org/docs/schemas.html. It
 * is only necessary to implement this hook when integration a search backend to
 * the Rich Snippets module.
 *
 * @param array $result
 *   The search result being rencered.
 *
 * @return string|FALSE
 *   The schema associated with the search result.
 */
function hook_search_result_schema($result) {
  return 'Health and medical types';
}
