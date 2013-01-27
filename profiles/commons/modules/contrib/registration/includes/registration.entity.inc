<?php

/**
 * @file
 * Entity hooks and callbacks for registrations.
 */

/**
 * Implements hook_entity_info().
 */
function registration_entity_info() {
  $entities = array(
    'registration' => array(
      'label' => t('Registration'),
      'plural label' => t('Registrations'),
      'controller class' => 'EntityAPIController',
      'entity class' => 'Registration',
      'metadata controller class' => 'RegistrationMetadataController',
      'base table' => 'registration',
      'fieldable' => TRUE,
      'entity keys' => array(
        'id' => 'registration_id',
        'bundle' => 'type',
      ),
      'access callback' => 'registration_access',
      'bundle keys' => array(
        'bundle' => 'name',
      ),
      'bundles' => array(),
      'view modes' => array(
        'full' => array(
          'label' => t('Full Registration'),
          'custom settings' => FALSE,
        ),
      ),
      'uri callback' => 'entity_class_uri',
      'token type' => 'registration',
      'module' => 'registration',
      'label callback' => 'entity_class_label'
    ),
    'registration_type' => array(
      'label' => t('Registration type'),
      'entity class' => 'RegistrationType',
      'controller class' => 'EntityAPIControllerExportable',
      'base table' => 'registration_type',
      'fieldable' => FALSE,
      'bundle of' => 'registration',
      'exportable' => TRUE,
      'entity keys' => array(
        'id' => 'id',
        'name' => 'name',
        'label' => 'label',
      ),
      'access callback' => 'registration_type_access',
      'module' => 'registration',
      // Enable the entity API's admin UI.
      'admin ui' => array(
        'path' => 'admin/structure/registration/registration_types',
        'file' => 'registration_type.admin.inc',
        'file path' => drupal_get_path('module', 'registration') . '/includes',
        'controller class' => 'RegistrationTypeUIController',
      ),
    ),
    'registration_state' => array(
      'label' => t('Registration State'),
      'plural label' => t('Registration states'),
      'controller class' => 'RegistrationStateController',
      'entity class' => 'RegistrationState',
      'base table' => 'registration_state',
      'fieldable' => FALSE,
      'entity keys' => array(
        'id' => 'registration_state_id',
        'label' => 'label',
        'name' => 'name',
      ),
      'bundles' => array(
        'registration_state' => array(
          'label' => 'Registration States',
        ),
      ),
      'admin ui' => array(
        'path' => 'admin/structure/registration/registration_states',
        'file' => 'registration.forms.inc',
        'file path' => drupal_get_path('module', 'registration') . '/includes',
        'controller class' => 'RegistrationStatesUIController',
      ),
      'token type' => 'registration_state',
      'module' => 'registration',
      'access callback' => 'registration_state_access',
      'exportable' => TRUE
    ),
  );

  // Support entity cache module.
  if (module_exists('entitycache')) {
    $entities['registration']['field cache'] = FALSE;
    $entities['registration']['entity cache'] = TRUE;
  }

  return $entities;
}

/**
 * Implements hook_entity_info_alter().
 */
function registration_entity_info_alter(&$entity_info) {
  // @todo: we're testing to ensure the schema exists; needed because running gui
  // install profile was hitting this BEFORE the schema was installed.
  if (drupal_get_schema('registration')) {
    // We are adding the info about the registration types via a hook to avoid a
    // recursion issue as loading the model types requires the entity info as well.
    foreach (registration_get_types() as $type => $info) {
      $entity_info['registration']['bundles'][$type] = array(
        'label' => $info->label,
        'admin' => array(
          'path' => 'admin/structure/registration/registration_types/manage/%registration_type',
          'real path' => 'admin/structure/registration/registration_types/manage/' . $type,
          'bundle argument' => 5,
          'access arguments' => array('administer registration types'),
        ),
      );
    }
  }
}

/**
 * Main class for Registration entities.
 */
class Registration extends Entity {

  public
    $registration_id,
    $entity_id,
    $entity_type,
    $anon_mail = NULL,
    $user_uid = NULL,
    $count,
    $author_uid,
    $created,
    $updated;

  /**
   * Specifies the default label, which is picked up by label() by default.
   */
  protected function defaultLabel() {
    $wrapper = entity_metadata_wrapper('registration', $this);
    $host = $wrapper->entity->value();
    if ($host) {
      return t('Registration for @title', array(
          '@title' => entity_label($this->entity_type, $host)
        )
      );
    }
    return '';
  }

  /**
   * Build content for Registration.
   *
   * @return render array
   */
  public function buildContent($view_mode = 'full', $langcode = NULL) {
    $build = parent::buildContent($view_mode, $langcode);
    $wrapper = entity_metadata_wrapper('registration', $this);

    $host_entity_type_info = entity_get_info($this->entity_type);
    $host_entity = $wrapper->entity->value();
    $state = $wrapper->state->value();
    $author = $wrapper->author->value();
    $user = $wrapper->user->value();
    list(, , $host_entity_bundle) = entity_extract_ids($this->entity_type, $host_entity);

    $host_label = entity_label($this->entity_type, $host_entity);

    $host_uri = $host_entity ? entity_uri($this->entity_type, $host_entity) : NULL;
    $author_uri = $author ? entity_uri('user', $author) : NULL;
    $account_uri = $user ? entity_uri('user', $user) : NULL;

    // Mail
    $build['mail'] = array(
      '#prefix' => '<div class="field registration-mail"><div class="field-label">' . t('Email Address') . '</div>',
      '#markup' => $wrapper->mail->value(),
      '#suffix' => '</div>',
    );

    // Link to host entity
    $host_entity_link_label = (isset($host_entity_type_info['bundles'][$host_entity_bundle]['label'])) ? '<div class="field-label">' . $host_entity_type_info['bundles'][$host_entity_bundle]['label'] . '</div>' : '';
    $build['host_entity_link'] = array(
      '#prefix' => '<div class="field registration-entity-link">' . $host_entity_link_label,
      '#markup' => l($host_label, $host_uri['path']),
      '#suffix' => '</div>',
    );

    // Date created
    $build['created'] = array(
      '#prefix' => '<div class="field registration-created"><div class="field-label">' . t('Created') . '</div>',
      '#markup' => format_date($this->created),
      '#suffix' => '</div>',
    );

    // Date updated
    $build['updated'] = array(
      '#prefix' => '<div class="field registration-updated"><div class="field-label">' . t('Updated') . '</div>',
      '#markup' => format_date($this->updated),
      '#suffix' => '</div>',
    );

    // Slots used
    $build['slots'] = array(
      '#prefix' => '<div class="field registration-slots"><div class="field-label">' . t('Slots Used') . '</div>',
      '#markup' => $this->count,
      '#suffix' => '</div>',
    );

    $build['author'] = array(
      '#prefix' => '<div class="field registration-author"><div class="field-label">' . t('Author') . '</div>',
      '#markup' => (isset($author_uri['path']) ? l($author->name, $author_uri['path']) : t('Anonymous')),
      '#suffix' => '</div>',
    );

    $build['user'] = array(
      '#prefix' => '<div class="field registration-user"><div class="field-label">' . t('User') . '</div>',
      '#markup' => (isset($account_uri['path']) ? l($user->name, $account_uri['path']) : t('Anonymous')),
      '#suffix' => '</div>',
    );

    $build['state'] = array(
      '#prefix' => '<div class="field registration-state"><div class="field-label">' . t('State') . '</div>',
      '#markup' => ($state) ? filter_xss_admin(entity_label('registration_state', $state)) : '',
      '#suffix' => '</div>',
    );

    return $build;
  }

  /**
   * Save registration.
   *
   * @return mixed
   */
  public function save() {
    // set a default state if not provided
    $wrapper = entity_metadata_wrapper('registration', $this);
    $state = $wrapper->state->value();
    if (!$state) {
      $default_state = registration_get_default_state();
      if ($default_state) {
        $this->state = $default_state->identifier();
      }
    }
    $this->updated = REQUEST_TIME;
    if (!$this->registration_id) {
      $this->created = REQUEST_TIME;
    }
    return parent::save();
  }

  /**
   * Specify URI
   */
  protected function defaultUri() {
    return array('path' => 'registration/' . $this->internalIdentifier());
  }

  /**
   * Determine registrant type relative to a given account
   *
   * @param $account
   *   A Drupal user
   *
   * @return string
   *   Can be me, user, or anon.
   */
  public function registrant_type($account) {
    if (!empty($account)) {
      if ($account->uid && $account->uid === $this->user_uid) {
        return REGISTRATION_REGISTRANT_TYPE_ME;
      }
      elseif ($this->user_uid) {
        return REGISTRATION_REGISTRANT_TYPE_USER;
      }
      elseif (!empty($this->anon_mail)) {
        return REGISTRATION_REGISTRANT_TYPE_ANON;
      }
    }
  }
}

/**
 * @see hook_entity_property_info()
 */
class RegistrationMetadataController extends EntityDefaultMetadataController {
  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];

    $properties['registration_id'] = array(
      'label' => t("Registration ID"),
      'type' => 'integer',
      'description' => t("The unique ID of the registration."),
      'schema field' => 'registration_id',
      'setter callback' => 'entity_property_verbatim_set',
    );

    $properties['type'] = array(
      'label' => t("Registration type"),
      'type' => 'token',
      'description' => t("The type of the registration."),
      'options list' => 'registration_type_get_names',
      'required' => TRUE,
      'schema field' => 'type',
      'setter callback' => 'entity_property_verbatim_set',
    );

    $properties['entity_type'] = array(
      'label' => t("Host entity type"),
      'type' => 'token',
      'description' => t("The entity type of the host entity."),
      'required' => TRUE,
      'schema field' => 'entity_type',
      'setter callback' => 'entity_property_verbatim_set',
    );

    $properties['entity_id'] = array(
      'label' => t("Host entity ID"),
      'type' => 'integer',
      'description' => t("The entity ID of the host entity."),
      'required' => TRUE,
      'schema field' => 'entity_id',
      'setter callback' => 'entity_property_verbatim_set',
    );

    $properties['count'] = array(
      'label' => t("Slots consumed"),
      'type' => 'integer',
      'description' => t("How many slots the registration consumes from the host entity."),
      'schema field' => 'count',
      'setter callback' => 'entity_property_verbatim_set',
    );

    $properties['created'] = array(
      'label' => t("Date created"),
      'type' => 'date',
      'schema field' => 'created',
      'description' => t("The date the registration was created."),
      'setter callback' => 'entity_property_verbatim_set',
    );

    $properties['updated'] = array(
      'label' => t("Date updated"),
      'type' => 'date',
      'schema field' => 'updated',
      'description' => t("The date the registration was most recently updated."),
      'setter callback' => 'entity_property_verbatim_set',
    );

    $properties['anon_mail'] = array(
      'label' => t('Anonymous e-mail'),
      'type' => 'text',
      'schema field' => 'anon_mail',
      'description' => t('An e-mail address associated with the registration of an anonymous user.'),
      'getter callback' => 'registration_get_properties',
      'setter callback' => 'registration_property_email_set',
    );

    // Provides a single calculated property that contains either the associated user's email address or the
    // anonymous email used if no user is associated with the registration
    $properties['mail'] = array(
      'label' => t('Registrant e-mail'),
      'type' => 'text',
      'description' => t('Either the user email address, if registration is for a user, or the anonymous user email property.'),
      'getter callback' => 'registration_get_properties',
      'computed' => TRUE,
    );

    // Entities
    $properties['entity'] = array(
      'label' => t("Host entity"),
      'type' => 'entity',
      'schema field' => 'entity',
      'description' => t("The host entity."),
      'getter callback' => 'registration_property_host_get',
      'setter callback' => 'entity_property_verbatim_set',
    );

    $properties['author'] = array(
      'label' => t("Author entity"),
      'type' => 'user',
      'schema field' => 'author_uid',
      'description' => t("The user who created the registration."),
      'getter callback' => 'registration_property_author_get',
      'setter callback' => 'entity_property_verbatim_set',
    );

    $properties['user'] = array(
      'label' => t("User entity"),
      'type' => 'user',
      'schema field' => 'user_uid',
      'description' => t("The entity for which the registration belongs to. Usually a user."),
      'getter callback' => 'registration_property_user_get',
      'setter callback' => 'registration_property_user_set',
    );

    $properties['state'] = array(
      'label' => t("State entity"),
      'type' => 'registration_state',
      'schema field' => 'state',
      'options list' => 'registration_get_states_options',
      'description' => t("The state of the registration."),
      'setter callback' => 'entity_property_verbatim_set',
    );
    return $info;
  }
}

/**
 * Callback to get $registration->host.
 *
 * @see registration_entity_property_info().
 */
function registration_property_host_get(Registration $registration, array $options, $property_name, $entity_type) {
  $entity = entity_load_single($registration->entity_type, $registration->entity_id);
  return entity_metadata_wrapper($registration->entity_type, $entity);
}

/**
 * Callback to get $registration->author.
 *
 * @see registration_entity_property_info().
 */
function registration_property_author_get(Registration $registration, array $options, $property_name, $entity_type) {
  if (is_numeric($registration->author_uid)) {
    $entity = entity_load_single('user', $registration->author_uid);
    return entity_metadata_wrapper('user', $entity);
  }
}

/**
 * Callback to get $registration->user.
 *
 * @see registration_entity_property_info().
 */
function registration_property_user_get(Registration $registration, array $options, $property_name, $entity_type) {
  if (is_numeric($registration->user_uid)) {
    $entity = entity_load_single('user', $registration->user_uid);
    return entity_metadata_wrapper('user', $entity);
  }
}

/**
 * Callback to set $registration->user that supports null value.
 */
function registration_property_user_set(Registration $registration, $name, $value, $lang, $type, $info) {
  if (is_object($value) && $account = $value->value()) {
    $registration->{$info['schema field']} = $account->uid;
  }
  else {
    $registration->{$info['schema field']} = NULL;
  }
}

/**
 * Callback to set $registration->anon_mail that supports null value.
 */
function registration_property_email_set(Registration $registration, $name, $value, $lang, $type, $info) {
  if (!empty($value)) {
    $registration->{$info['schema field']} = $value;
  }
  else {
    $registration->{$info['schema field']} = NULL;
  }
}

/**
 * Required by RegistrationMetadataController for Views integration.
 *
 * @param $entity
 * @param array $options
 * @param $name
 * @param $type
 *
 * @return EntityMetadataWrapper
 */
function registration_get_properties($entity, array $options, $name, $type) {
  switch ($name) {
    case 'anon_mail':
      return $entity->anon_mail;
      break;
    case 'entity':
      return entity_metadata_wrapper($entity->entity_type, $entity->entity);
      break;
    case 'mail':
      // If a user is set, use their email
      $user =  entity_metadata_wrapper('registration', $entity)->user;
      return ($user->value()) ? $user->mail->value() : $entity->anon_mail;
      break;
  }
}

/**
 * Loads a registration by ID.
 */
function registration_load($registration_id) {
  if (empty($registration_id)) {
    return FALSE;
  }

  $registrations = registration_load_multiple(array($registration_id), array());
  return $registrations ? reset($registrations) : FALSE;
}

/**
 * Loads multiple registrations by ID or based on a set of matching conditions.
 *
 * @see entity_load()
 *
 * @param $registration_ids
 * @param $conditions
 *   An array of conditions on the {registration} table in the form
 *     'field' => $value.
 * @param $reset
 *   Whether to reset the internal registration loading cache.
 *
 * @return
 *   An array of registration objects indexed by registration_id.
 */
function registration_load_multiple($registration_ids = array(), $conditions = array(), $reset = FALSE) {
  if (empty($registration_ids) && empty($conditions)) {
    return array();
  }

  return entity_load('registration', $registration_ids, $conditions, $reset);
}

/**
 * Deletes multiple registrations by ID.
 *
 * @param $registration_ids
 *   An array of registration IDs to delete.
 *
 * @return
 *   TRUE on success, FALSE otherwise.
 */
function registration_delete_multiple($registration_ids) {
  return entity_get_controller('registration')->delete($registration_ids);
}

/**
 * Saves a registration.
 *
 * @param $registration
 *   The full registration object to save.
 *
 * @return
 *   If the record insert or update failed, returns FALSE. If it succeeded,
 *   returns SAVED_NEW or SAVED_UPDATED, depending on the operation performed.
 */
function registration_save(Registration $registration) {
  return $registration->save();
}

/**
 * Access callback: Entity API for Registration entities.
 *
 * Checks if a user has permission to execute an operation on a registration
 * entity.
 *
 * Implements hook_registration_access(). Modules may return a boolean value,
 * or NULL if they do not care one way or the other.
 *
 * @param string $op
 *   Operation user wishes to perform.
 * @param object $registration
 *   (optional) A Fully loaded registration object.
 * @param object $account
 *   (optional) An user object, or omit for logged in user.
 * @param string $entity_type
 *   (optional) Entity type of $registration. Usually 'registration'.
 *
 * @return bool
 *
 * @see registration_entity_info()
 */
function registration_access($op, $registration = NULL, $account = NULL, $entity_type) {
  $account = isset($account) ? $account : $GLOBALS['user'];

  // Check environment for Registration.
  switch ($op) {
    case 'update':
      $people = registration_access_people($registration);
      $registrant_type = $registration->registrant_type($account);
      if (!isset($registrant_type) && !isset($people[$registrant_type])) {
        return FALSE;
      }
    case 'create':
      if (!count(registration_access_people($registration))) {
        return FALSE;
      }
      break;
  }

  // bypass further access checks if user can administer registration
  if (user_access('administer registration', $account)) {
    return TRUE;
  }

  // First grant access to the entity for the specified operation if no other
  // module denies it and at least one other module says to grant access.
  $access_results = module_invoke_all('registration_access', $op, $entity_type, $registration, $account);
  if (in_array(FALSE, $access_results, TRUE)) {
    return FALSE;
  }
  elseif (in_array(TRUE, $access_results, TRUE)) {
    return TRUE;
  }

  $wrapper = entity_metadata_wrapper('registration', $registration);
  $author = $wrapper->author->value();
  $account_own = ($author && ($author->uid == $account->uid));

  // Fall back to assigned permissions
  $type = $registration->type;
  switch ($op) {
    case 'view':
      return ($account_own && user_access("view own $type registration", $account)) || user_access("view $type registration", $account);
    case 'update':
      return ($account_own && user_access("update own $type registration", $account)) || user_access("update any $type registration", $account);
    case 'create':
      return (user_access("create $type registration", $account));
    case 'delete':
      return ($account_own && user_access("delete own $type registration", $account)) || user_access("delete any $type registration", $account);
  }
}

/**
 * The class used for model type entities
 */
class RegistrationType extends Entity {

  public $name;
  public $label;
  public $locked;

  public function __construct($values = array()) {
    parent::__construct($values, 'registration_type');
  }
}

/**
 * Registration Type UI controller.
 */
class RegistrationTypeUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = t('Manage registration entity types, including adding and removing fields and the display of fields.');
    return $items;
  }
}

/**
 * Gets an array of all registration types, keyed by the name.
 *
 * @param $name
 *   If set, the type with the given name is returned.
 */
function registration_get_types($name = NULL) {
  $types = entity_load_multiple_by_name('registration_type', isset($name) ? array($name) : FALSE);
  return isset($name) ? reset($types) : $types;
}

/**
 * Gets an array of all registration types, keyed by the name.
 *
 * @return array
 *   A list of all registration types.
 */
function registration_type_get_names($name = NULL) {
  $types = registration_get_types();
  $data = array();
  foreach (array_keys($types) as $name) {
    $data[$name] = $name;
  }
  return $data;
}

/**
 * Menu argument loader; Load a registration type by string.
 *
 * @param $type
 *   The machine-readable name of a registration type to load.
 *
 * @return
 *   A registration type array or FALSE if $type does not exist.
 */
function registration_type_load($type) {
  return registration_get_types($type);
}

/**
 * Access callback for the entity API.
 */
function registration_type_access($op, $entity = NULL, $account = NULL, $entity_type = NULL) {
  return user_access('administer registration types', $account);
}

/**
 * Saves a model type to the db.
 */
function registration_type_save(RegistrationType $type) {
  $type->save();
}

/**
 * Deletes a model type from the db.
 */
function registration_type_delete(RegistrationType $type) {
  $type->delete();
}

/**
 * The class used for registration state entities
 */
class RegistrationState extends Entity {

  public $name, $label, $description, $default_state,
    $active, $show_on_form, $weight;

  public function __construct($values = array()) {
    parent::__construct($values, 'registration_state');
  }

}

/**
 * The controller class used for registration state entities
 */
class RegistrationStateController extends EntityAPIControllerExportable {

  public function save($entity, DatabaseTransaction $transaction = NULL) {
    parent::save($entity, $transaction);

    if ($entity->default_state == 1) {
      $query = db_update('registration_state')
        ->fields(array('default_state' => 0))
        ->condition('registration_state_id', $entity->registration_state_id, '<>');
      $query->execute();
    }
  }

}


/**
 * UI Controller for Registration states.
 */
class RegistrationStatesUIController extends EntityDefaultUIController {

  public function overviewForm($form, &$form_state) {
    return drupal_get_form('registration_states_overview_form');
  }

}

/**
 * Access callback for the entity API.
 */
function registration_state_access($op, $entity = NULL, $account = NULL, $entity_type = NULL) {
  return user_access('administer registration states', $account);
}
