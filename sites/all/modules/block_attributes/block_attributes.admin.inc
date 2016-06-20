<?php

/**
 * @file
 * Block Attributes admin configuration functions.
 */

/**
 * Block Attributes settings form.
 */
function block_attributes_settings() {
  $form['attributes_title'] = array(
    '#type' => 'item',
    '#title' => t('Block attribute options'),
    '#description' => t('For each attribute below, configure whether it should be <em>enabled</em> or <em>disabled</em> on block configuration forms.<br/>Default values are only useful when <a href="@addblock">adding new blocks</a> and will be used to provide default values for corresponding attribute fields. <strong>Changing the Default values will not affect existing blocks.</strong>', array(
        '@addblock' => url('admin/structure/block/add'),
    )),
  );
  $form['attributes_vertical_tabs'] = array(
    '#type' => 'vertical_tabs',
    '#attached' => array(
      'js' => array(drupal_get_path('module', 'block_attributes') . '/block_attributes.js'),
    ),
  );

  $attributes = block_attributes_get_block_attribute_info();
  // Iterate through all defined attributes.
  foreach ($attributes as $attribute => $info) {
    $form['attributes'][$attribute] = array(
      '#type' => 'fieldset',
      '#title' => $info['label'],
      '#group' => 'attributes_vertical_tabs',
      '#description' => $info['form']['#description'],
    );
    // Enable attribute checkbox.
    $form['attributes'][$attribute]["block_attributes_{$attribute}_enable"] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable the @attribute attribute.', array('@attribute' => drupal_strtolower($info['label']))),
      '#default_value' => $info['enabled'],
    );
    // Field for the default value.
    $form['attributes'][$attribute]["block_attributes_{$attribute}_default"] = array(
      '#title' => t('Default'),
      '#description' => '',
      '#states' => array(
        'invisible' => array(
          'input[name="block_attributes_' . $attribute . '_enable"]' => array('checked' => FALSE),
        ),
      ),
      // Aggregate attribute's form properties.
    ) + $info['form'];
  }
  return system_settings_form($form);
}
