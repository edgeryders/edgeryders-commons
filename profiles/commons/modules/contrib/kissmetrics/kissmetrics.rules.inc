<?php

/**
 * @file
 * Defines Rules actions for the KISSmetrics module.
 */

/**
 * Implements hook_rules_action_info().
 */
function kissmetrics_rules_action_info() {
  return array(
    'kissmetrics_record_event' => array(
      'label' => t('Record a KISSmetrics event'),
      'group' => t('KISSmetrics'),
      'parameter' => array(
        'name' => array(
          'type' => 'text',
          'label' => t('Name'),
          'description' => t('The name of the event to record. If you do not enter a name, this action will set any specified properties on the identified person without recording an event.'),
          'optional' => TRUE,
        ),
        'properties' => array(
          'type' => 'text',
          'label' => t('Properties'),
          'description' => t('An optional list of event properties. Enter one property per line in key|value format.'),
          'optional' => TRUE,
        ),
      ),
    ),
  );
}
