<?php

/**
 * @file
 * Entity controller classes for the Mentions module.
 */

/**
 * Class Mention
 */
class Mention extends Entity {
}

/**
 * Class MentionController
 */
class MentionController extends EntityAPIControllerExportable {
  /**
   * @inheritdoc
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    // Allow Mention type plugin to modify Mention before being saved.
    $mention_type = mentions_type_load($entity->bundle());
    $plugin       = mentions_get_plugin($mention_type->plugin);
    if (isset($plugin['callbacks']['mention presave']) && function_exists($plugin['callbacks']['mention presave'])) {
      $plugin['callbacks']['mention presave']($entity);
    }

    // Determine if this is a new or if we are updating an existing mention.
    if ($entity->is_new) {
      $query   = new EntityFieldQuery();
      $results = $query->entityCondition('entity_type', 'mention')
        ->propertyCondition('source', $entity->source)
        ->propertyCondition('target', $entity->target)
        ->execute();
      if (isset($results['mention']) && is_array($results['mention'])) {
        $entity->is_new   = FALSE;
        $entity->mid      = key($results['mention']);
        $entity->original = entity_load_single('mention', $entity->mid);
        $entity->created  = $entity->original->created;
      }
    }

    return parent::save($entity, $transaction);
  }

}

/**
 * Class MentionsType
 */
class MentionsType extends Entity {
}

/**
 * Class MentionsTypeController
 */
class MentionsTypeController extends EntityAPIControllerExportable {
}

/**
 * Class MentionsTypeUIController
 */
class MentionsTypeUIController extends EntityDefaultUIController {
}
