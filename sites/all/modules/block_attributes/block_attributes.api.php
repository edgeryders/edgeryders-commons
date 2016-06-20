<?php

/**
 * @file
 * Documentation for Block Attributes API.
 */

/**
 * Inform the block_attributes module about custom attributes.
 *
 * @return array
 *   An array of attributes to be controlled by Block Attributes, keyed by
 *   attribute name. Each attribute record should be an array with the following
 *   key/value pairs:
 *   - label: The human-readable name of the attribute.
 *   - description: The attribute description.
 *   - form: A Form API array. Some default values for this array are provided
 *     in block_attributes_get_block_attribute_info().
 *   - scope: An array of scope options, BLOCK_ATTRIBUTES_BLOCK,
 *     BLOCK_ATTRIBUTES_TITLE, BLOCK_ATTRIBUTES_CONTENT or all three. If no
 *     scope is provided, all three will be assumed.
 *
 * @see block_attributes_block_attribute_info()
 * @see block_attributes_get_block_attribute_info()
 */
function hook_block_attribute_info() {
  // Add a Tabindex attribute.
  $info['tabindex'] = array(
    'label' => t('Tabindex'),
    'description' => t('Specifies the tab order for the block.'),
    'form' => array(
      '#maxlength' => 3,
      '#size' => 2,
    ),
    'scope' => array(BLOCK_ATTRIBUTES_BLOCK),
  );

  return $info;
}

/**
 * Alter the list of block attributes defined.
 *
 * @param array $attributes
 *   An array of attributes to be controlled by Block Attributes, keyed by
 *   attribute name.
 *
 * @see hook_block_attribute_info()
 * @see block_attributes_get_block_attribute_info()
 */
function hook_block_attribute_info_alter(array &$attributes) {
  // Remove the Access Key attribute.
  unset($attributes['accesskey']);
}
