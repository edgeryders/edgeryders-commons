<?php
/**
 * @file
 * Rules related stuff.
 */

/**
 * Implements hook_rules_event_info().
 */
function comment_alter_rules_event_info() {
  $comment_alter_node_postsave_variables = array(
    'node' => array('type' => 'node', 'label' => t('comment altered content')),
    'comment' => array('type' => 'comment', 'label' => t('comment')),
    'node_unchanged' => array(
      'type' => 'node',
      'label' => t('unchanged content'),
      'handler' => 'rules_events_entity_unchanged',
    ),
  );

  $items = array(
    'comment_alter_node_postsave' => array(
      'category' => 'node',
      'label' => t('After updating existing content by comment alter'),
      'variables' => $comment_alter_node_postsave_variables,
      'access callback' => 'rules_node_integration_access',
    ),
    'comment_alter_node_update' => array(
      'label' => t('After updating existing content but not from comment'),
      'category' => 'node',
      'variables' => rules_events_node_variables(t('updated content'), TRUE),
      'access callback' => 'rules_node_integration_access',
      'class' => 'RulesCommentAlterNodeEventHandler',
    ),
    'comment_alter_node_presave' => array(
      'label' => t('Before saving content but not from comment'),
      'category' => 'node',
      'variables' => rules_events_node_variables(t('saved content'), TRUE),
      'access callback' => 'rules_node_integration_access',
      'class' => 'RulesCommentAlterNodeEventHandler',
    ),
  );
  $items['comment_alter_node_presave']['variables']['node']['skip save'] = TRUE;

  return $items;
}

/**
 * Event handler support comment alter node bundle event settings.
 */
class RulesCommentAlterNodeEventHandler extends RulesEventHandlerEntityBundle {

  /**
   * Implements RulesEventHandlerInterface::__construct()
   */
  public function __construct($event_name, $info) {
    $this->eventName = $event_name;
    $this->eventInfo = $info;
    $this->settings = $this->getDefaults();
    // Cut off the suffix, e.g. remove 'view' from node_view.
    $this->entityType = 'node';
    $this->entityInfo = entity_get_info($this->entityType);
    if (!$this->entityInfo) {
      throw new InvalidArgumentException('Unsupported event name passed.');
    }
  }


  /**
   * Returns the label to use for the bundle property.
   *
   * @return string
   */
  protected function getBundlePropertyLabel() {
    return t('type');
  }
}
