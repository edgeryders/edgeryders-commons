<?php

/**
 * Defintion of AdvancedQueue.
 */

/**
 * Extended queue.
 */
class AdvancedQueue implements DrupalReliableQueueInterface {
  /**
   * The name of the queue this instance is working with.
   *
   * @var string
   */
  protected $name;

  public function __construct($name) {
    $this->name = $name;
  }

  public function createItem($data) {
    $query = db_insert('advancedqueue')
      ->fields(array(
        'name' => $this->name,
        'uid' => is_array($data) && isset($data['uid']) ? $data['uid'] : $GLOBALS['user']->uid,
        'title' => is_array($data) && isset($data['title']) ? $data['title'] : t('Unnamed item'),
        'data' => serialize($data),
        // We cannot rely on REQUEST_TIME because many items might be created
        // by a single request which takes longer than 1 second.
        'created' => time(),
        'status' => ADVANCEDQUEUE_STATUS_QUEUED,
      ));
    return (bool) $query->execute();
  }

  public function numberOfItems() {
    return db_query('SELECT COUNT(item_id) FROM {advancedqueue} WHERE name = :name AND status <= 0', array(':name' => $this->name))->fetchField();
  }

  public function claimItem($lease_time = 30) {
    // Claim an item by updating its expire fields. If claim is not successful
    // another thread may have claimed the item in the meantime. Therefore loop
    // until an item is successfully claimed or we are reasonably sure there
    // are no unclaimed items left.
    while (TRUE) {
      $item = db_query_range('SELECT data, item_id FROM {advancedqueue} q WHERE status = -1 AND expire = 0 AND name = :name ORDER BY created ASC', 0, 1, array(':name' => $this->name))->fetchObject();
      if ($item) {
        // Try to update the item. Only one thread can succeed in UPDATEing the
        // same row. We cannot rely on REQUEST_TIME because items might be
        // claimed by a single consumer which runs longer than 1 second. If we
        // continue to use REQUEST_TIME instead of the current time(), we steal
        // time from the lease, and will tend to reset items before the lease
        // should really expire.
        $update = db_update('advancedqueue')
          ->fields(array(
            'status' => ADVANCEDQUEUE_STATUS_PROCESSING,
            'expire' => time() + $lease_time,
          ))
          ->condition('item_id', $item->item_id)
          ->condition('expire', 0);
        // If there are affected rows, this update succeeded.
        if ($update->execute()) {
          $item->data = unserialize($item->data);
          return $item;
        }
      }
      else {
        // No items currently available to claim.
        return FALSE;
      }
    }
  }

  public function releaseItem($item) {
    $update = db_update('advancedqueue')
      ->fields(array(
        'expire' => 0,
        'status' => ADVANCEDQUEUE_STATUS_QUEUED,
      ))
      ->condition('item_id', $item->item_id);
    return $update->execute();
  }

  public function deleteItem($item) {
    db_update('advancedqueue')
      ->fields(array(
        'expire' => 0,
        'status' => isset($item->status) ? $item->status : ADVANCEDQUEUE_STATUS_SUCCESS,
        'result' => serialize(isset($item->result) ? $item->result : array()),
        'processed' => time(),
      ))
      ->condition('item_id', $item->item_id)
      ->execute();
  }

  public function createQueue() {
    // All tasks are stored in a single database table (which is created when
    // Drupal is first installed) so there is nothing we need to do to create
    // a new queue.
  }

  public function deleteQueue() {
    db_delete('advancedqueue')
      ->condition('name', $this->name)
      ->execute();
  }
}
