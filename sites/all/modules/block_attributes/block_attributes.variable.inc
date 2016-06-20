<?php
/**
 * @file
 * Variable module integration for the block_attributes module.
 */

/**
 * Implements hook_variable_info().
 */
function block_attributes_variable_info() {
  $variable = array();

  $attributes = block_attributes_get_block_attribute_info();
  // Iterate through all defined attributes.
  foreach ($attributes as $attribute => $info) {
    // Enable attribute checkbox.
    $variable["block_attributes_{$attribute}_enable"] = array(
      'title' => t('Enable the @attribute attribute.', array('@attribute' => drupal_strtolower($info['label']))),
      'description' => t('Check this box if you want to enable the <em>@attribute</em> attribute. Uncheck to disable @attribute.', array('@attribute' => drupal_strtolower($info['label']))),
      'type' => 'boolean',
      'default' => $info['enabled'],
      'group' => 'block_attributes',
    );
    // Field for the default value.
    $variable["block_attributes_{$attribute}_default"] = array(
      // Override the label for the default attribute.
      'title' => t('Default value for the @attribute attribute.', array('@attribute' => drupal_strtolower($info['label']))),
      'group' => 'block_attributes',
      'element' => array(
        '#states' => array(
          'invisible' => array(
            'input[name="block_attributes_' . $attribute . '_enable"]' => array('checked' => FALSE),
          ),
        ),
        // Aggregate attribute's form properties.
      ) + $info['form'],
    );
  }

  return $variable;
}

/**
 * Implements hook_variable_group_info().
 *
 * Declare a group for the Block Attributes module configuration variables.
 */
function block_attributes_variable_group_info() {
  $groups['block_attributes'] = array(
    'title' => t('Block Attributes'),
    'description' => t('Block Attributes configuration settings'),
    'access' => 'administer block attributes',
    'path' => array('admin/structure/block/attributes'),
  );
  return $groups;
}
