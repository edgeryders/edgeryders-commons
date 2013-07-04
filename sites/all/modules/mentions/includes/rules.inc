<?php
/**
 * @file
 * Rules module integration.
 */

/**
 * Implements hook_mentions_insert() on behalf of rules.module
 */
function rules_mentions_insert($mention) {
  mentions_rules_invoke_event('mentions_insert', $mention);
}

/**
 * Implements hook_mentions_update() on behalf of rules.module
 */
function rules_mentions_update($mention) {
  mentions_rules_invoke_event('mentions_update', $mention);
}

/**
 * Implements hook_mentions_delete() on behalf of rules.module
 */
function rules_mentions_delete($mention) {
  mentions_rules_invoke_event('mentions_delete', $mention);
}

/**
 * Helper function; Prepare mention object and invoke Rules event.
 */
function mentions_rules_invoke_event($event, $mention) {
  // Load source entity object.
  $entities = entity_load($mention->entity_type, array($mention->entity_id));
  $mention->entity = isset($entities[$mention->entity_id]) ? $entities[$mention->entity_id] : NULL;
  unset($mention->entity_id);

  rules_invoke_event($event, $mention);
}
