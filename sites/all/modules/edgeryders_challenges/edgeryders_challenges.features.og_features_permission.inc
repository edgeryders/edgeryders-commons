<?php
/**
 * @file
 * edgeryders_challenges.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function edgeryders_challenges_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:challenge:add user'
  $permissions['node:challenge:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:challenge:administer group'
  $permissions['node:challenge:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:challenge:approve and deny subscription'
  $permissions['node:challenge:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:challenge:create activity content'
  $permissions['node:challenge:create activity content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create answer content'
  $permissions['node:challenge:create answer content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create challenge_response content'
  $permissions['node:challenge:create challenge_response content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:challenge:create document content'
  $permissions['node:challenge:create document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create event content'
  $permissions['node:challenge:create event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create group content'
  $permissions['node:challenge:create group content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create infopage content'
  $permissions['node:challenge:create infopage content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create journal content'
  $permissions['node:challenge:create journal content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create minisite_page content'
  $permissions['node:challenge:create minisite_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create notice content'
  $permissions['node:challenge:create notice content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create page content'
  $permissions['node:challenge:create page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create poll content'
  $permissions['node:challenge:create poll content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create post content'
  $permissions['node:challenge:create post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create question content'
  $permissions['node:challenge:create question content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create task content'
  $permissions['node:challenge:create task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create webform content'
  $permissions['node:challenge:create webform content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:create wiki content'
  $permissions['node:challenge:create wiki content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any activity content'
  $permissions['node:challenge:delete any activity content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any answer content'
  $permissions['node:challenge:delete any answer content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any challenge_response content'
  $permissions['node:challenge:delete any challenge_response content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:challenge:delete any document content'
  $permissions['node:challenge:delete any document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any event content'
  $permissions['node:challenge:delete any event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any group content'
  $permissions['node:challenge:delete any group content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any infopage content'
  $permissions['node:challenge:delete any infopage content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any journal content'
  $permissions['node:challenge:delete any journal content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any minisite_page content'
  $permissions['node:challenge:delete any minisite_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any notice content'
  $permissions['node:challenge:delete any notice content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any page content'
  $permissions['node:challenge:delete any page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any poll content'
  $permissions['node:challenge:delete any poll content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any post content'
  $permissions['node:challenge:delete any post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any question content'
  $permissions['node:challenge:delete any question content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any task content'
  $permissions['node:challenge:delete any task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any webform content'
  $permissions['node:challenge:delete any webform content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete any wiki content'
  $permissions['node:challenge:delete any wiki content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own activity content'
  $permissions['node:challenge:delete own activity content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own answer content'
  $permissions['node:challenge:delete own answer content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own challenge_response content'
  $permissions['node:challenge:delete own challenge_response content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:challenge:delete own document content'
  $permissions['node:challenge:delete own document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own event content'
  $permissions['node:challenge:delete own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own group content'
  $permissions['node:challenge:delete own group content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own infopage content'
  $permissions['node:challenge:delete own infopage content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own journal content'
  $permissions['node:challenge:delete own journal content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own minisite_page content'
  $permissions['node:challenge:delete own minisite_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own notice content'
  $permissions['node:challenge:delete own notice content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own page content'
  $permissions['node:challenge:delete own page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own poll content'
  $permissions['node:challenge:delete own poll content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own post content'
  $permissions['node:challenge:delete own post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own question content'
  $permissions['node:challenge:delete own question content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own task content'
  $permissions['node:challenge:delete own task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own webform content'
  $permissions['node:challenge:delete own webform content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:delete own wiki content'
  $permissions['node:challenge:delete own wiki content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:manage members'
  $permissions['node:challenge:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:challenge:manage menu'
  $permissions['node:challenge:manage menu'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:challenge:manage permissions'
  $permissions['node:challenge:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:challenge:manage roles'
  $permissions['node:challenge:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:challenge:subscribe'
  $permissions['node:challenge:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:challenge:subscribe without approval'
  $permissions['node:challenge:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:challenge:unsubscribe'
  $permissions['node:challenge:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any activity content'
  $permissions['node:challenge:update any activity content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any answer content'
  $permissions['node:challenge:update any answer content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any challenge_response content'
  $permissions['node:challenge:update any challenge_response content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:challenge:update any document content'
  $permissions['node:challenge:update any document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any event content'
  $permissions['node:challenge:update any event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any group content'
  $permissions['node:challenge:update any group content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any infopage content'
  $permissions['node:challenge:update any infopage content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any journal content'
  $permissions['node:challenge:update any journal content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any minisite_page content'
  $permissions['node:challenge:update any minisite_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any notice content'
  $permissions['node:challenge:update any notice content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any page content'
  $permissions['node:challenge:update any page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any poll content'
  $permissions['node:challenge:update any poll content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any post content'
  $permissions['node:challenge:update any post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any question content'
  $permissions['node:challenge:update any question content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any task content'
  $permissions['node:challenge:update any task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any webform content'
  $permissions['node:challenge:update any webform content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update any wiki content'
  $permissions['node:challenge:update any wiki content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update group'
  $permissions['node:challenge:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:challenge:update own activity content'
  $permissions['node:challenge:update own activity content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own answer content'
  $permissions['node:challenge:update own answer content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own challenge_response content'
  $permissions['node:challenge:update own challenge_response content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:challenge:update own document content'
  $permissions['node:challenge:update own document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own event content'
  $permissions['node:challenge:update own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own group content'
  $permissions['node:challenge:update own group content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own infopage content'
  $permissions['node:challenge:update own infopage content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own journal content'
  $permissions['node:challenge:update own journal content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own minisite_page content'
  $permissions['node:challenge:update own minisite_page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own notice content'
  $permissions['node:challenge:update own notice content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own page content'
  $permissions['node:challenge:update own page content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own poll content'
  $permissions['node:challenge:update own poll content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own post content'
  $permissions['node:challenge:update own post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own question content'
  $permissions['node:challenge:update own question content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own task content'
  $permissions['node:challenge:update own task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own webform content'
  $permissions['node:challenge:update own webform content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:challenge:update own wiki content'
  $permissions['node:challenge:update own wiki content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
