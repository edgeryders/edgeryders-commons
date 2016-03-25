<?php
/**
 * @file
 * Context module ingration.
 */

/**
 * Implements hook_navbar_region_navbar_region_blocks_alter() on behalf of context.module.
 *
 * Add context blocks if provided.
 */
function context_navbar_region_navbar_region_blocks_alter(&$blocks, &$block_info) {
  $contexts = context_active_contexts();
  foreach ($contexts as $context) {
    $options = isset($context->reactions['block']) ? $context->reactions['block'] : array();
    if (is_object($context) && $options) {
      if (!empty($options['blocks'])) {
        foreach ($options['blocks'] as &$block) {
          if (isset($block_info["{$block['module']}-{$block['delta']}"]) && $block['region'] == 'navbar_region') {
            $context_block               = $block_info["{$block['module']}-{$block['delta']}"];
            $context_block->weight       = $block['weight'];
            $context_block->region       = $block['region'];
            $context_block->context      = !empty($context->name) ? $context->name : 'navbar_region';
            $blocks[$context_block->bid] = $context_block;
          }
        }
      }

      // Ensure all blocks have weights for sorting.
      foreach ($blocks as &$block) {
        $block->weight = isset($block->weight) ? $block->weight : 0;
      }

      uasort($blocks, array('context_reaction_block', 'block_sort'));
    }
  }
}
