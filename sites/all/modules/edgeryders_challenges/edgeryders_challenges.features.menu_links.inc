<?php
/**
 * @file
 * edgeryders_challenges.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function edgeryders_challenges_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_challenge-chain:node/add/challenge-chain.
  $menu_links['navigation_challenge-chain:node/add/challenge-chain'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/challenge-chain',
    'router_path' => 'node/add/challenge-chain',
    'link_title' => 'Challenge Chain',
    'options' => array(
      'attributes' => array(
        'title' => 'Combine several challenges into a chain with a progress bar and one active challenge. Use one challenge chain per project to show its progress and let users navigate to the challenges of this project.',
      ),
      'identifier' => 'navigation_challenge-chain:node/add/challenge-chain',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_challenge-response:node/add/challenge-response.
  $menu_links['navigation_challenge-response:node/add/challenge-response'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/challenge-response',
    'router_path' => 'node/add/challenge-response',
    'link_title' => 'Challenge Response',
    'options' => array(
      'attributes' => array(
        'title' => 'Post a free-text article and metadata as response to a "Challenge" (content type "Challenge", acting as the OG group containing this content.)',
      ),
      'identifier' => 'navigation_challenge-response:node/add/challenge-response',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_challenge:node/add/challenge.
  $menu_links['navigation_challenge:node/add/challenge'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/challenge',
    'router_path' => 'node/add/challenge',
    'link_title' => 'Challenge',
    'options' => array(
      'attributes' => array(
        'title' => 'Set up a challenge (question / theme) as engagement magnet for your site\'s users, then drive them to repond to it (using the "Challenge Response" content  type).',
      ),
      'identifier' => 'navigation_challenge:node/add/challenge',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Challenge');
  t('Challenge Chain');
  t('Challenge Response');

  return $menu_links;
}
