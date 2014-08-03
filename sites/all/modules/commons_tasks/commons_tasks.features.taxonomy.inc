<?php
/**
 * @file
 * commons_tasks.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function commons_tasks_taxonomy_default_vocabularies() {
  return array(
    'behaviors' => array(
      'name' => 'Behaviors',
      'machine_name' => 'behaviors',
      'description' => 'Tags that add behaviors to content items (that is, they influence handling of content in views etc.).',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
