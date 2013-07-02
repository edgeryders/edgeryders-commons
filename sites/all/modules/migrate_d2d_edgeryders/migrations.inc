<?php

/**
 * Migration for Drupal 6 user profile pictures.
 *
 * Note that this migration will only migrate the actual files. It will not enter the files as new user profile pictures into 
 * users.picture in the database. This is done in class EdgerydersDrupalUserMigration.
 * 
 * Implemented according to code samples from https://drupal.org/node/1333676 (relating to migrate 7.x-2.2 however) and 
 * adapted for API changes in migrate 7.x-2.5 as per the documentation at https://drupal.org/node/1540106.
 */
class EdgerydersDrupalUserPictureMigration extends Migration {

   public function __construct(array $arguments) {
      $group = MigrateGroup::getInstance($arguments['group']);
      parent::__construct($group); // Different from the migrate_d2d migration constructors, which accept $arguments!!

      $this->map = new MigrateSQLMap(
        $this->machineName,
        array('picture' => array(
          'type' => 'varchar', 
          'length' => 100,
          'not null' => TRUE,
          'description' => 'Image URL.'
        )),
        MigrateDestinationFile::getKeySchema()
      );

      $query = Database::getConnection('default', $arguments['source_connection'])
        ->select('users', 'u')
        ->fields('u', array('picture'))
        ->isNotNull('picture')
        ->condition('picture', '', '!=');
      $query->distinct();

      $this->source = new MigrateSourceSQL($query, array(), null, array('map_joinable' => false));
      $this->destination = new MigrateDestinationFile('file', 'MigrateFileUri');

      $this->addFieldMapping('value', 'picture')
           ->callbacks(array($this, 'clean_path'));
      $this->addFieldMapping('source_dir')
           ->defaultValue($arguments['source_dir']);
      $this->addFieldMapping('destination_dir')
           ->defaultValue('public://pictures');
           // ->defaultValue('public://' . variable_get('user_picture_path', 'pictures')); // TODO Test and use this instead.
      $this->addFieldMapping('file_replace')
           ->defaultValue(MigrateFile::FILE_EXISTS_REUSE);

      // Do not delete files physically on migrate-rollback. Only works in Migrate 7.x-2.6 or newer.
      $this->addFieldMapping('preserve_files')
           ->defaultValue(TRUE);
      
      $this->addUnmigratedDestinations(array('fid', 'uid', 'status', 'filemime', 'timestamp'));
   }

   public function clean_path($uri) {
      
      // Unify the paths by removing the occasionally occuring explicit site names.
      $uri = str_replace('sites/edgeriders.ppa.coe.int/files/', 'sites/default/files/', $uri);
      $uri = str_replace('sites/edgeryders.ppa.coe.int/files/', 'sites/default/files/', $uri);

      drush_print("Debug: Cleaned picture path is: $uri");

      return $uri;
   }
}

/**
 * Migration for Drupal 6 Users with added Edgeryders fields.
 *
 * In our Drupal 6 site, content_profile was used. So every user had one or more (in our case only one) node that stored name 
 * (as title) and bio (as teaser and body). We're going to migrate it over to Drupal 7.
 * 
 * Solution adapted from code samples provided on http://www.grasmash.com/article/migrate-classes-content-profile-profile2 .
 */
class EdgerydersDrupalUserMigration extends DrupalUser6Migration {
  public function __construct(array $arguments) {

    // Here we have to add the additional fields that are pulled in via prepareRow() below and are not normally available.
    $this->sourceFields['content_profile_title'] = 'Title of a user\'s original content_profile node, containing the complete user name.';
    $this->sourceFields['content_profile_name_first'] = 'Firstname of the user, as extracted from content_profile_title.';
    $this->sourceFields['content_profile_name_last'] = 'Lastname of the user, as extracted from content_profile_title.';
    $this->sourceFields['content_profile_teaser'] = 'Teaser of a user\'s content_profile node, here identical to the start of content_profile_body.';
    $this->sourceFields['content_profile_body'] = 'Body of a user\'s content_profile node, containing her self-description.';
    $this->sourceFields['content_profile_format'] = 'Value for the format of the content_profile node body field (Plain Text / HTML, in Drupal 6 number notation).';
    $this->sourceFields['roles'] = 'Used in base class Drupal6UserMigration somewhere.';

    // $this->destinationFields['pathauto'] = 'Used in base class Drupal6UserMigration somewhere.';
    
    parent::__construct($arguments);

    $this->addFieldMapping('picture', 'picture')
         ->sourceMigration('EdgerydersDrupalUserPicture');

    $this->addFieldMapping('field_legacy_uid', 'uid')
         ->description('The user ID in the migrated Drupal 6 site, if any.');

    $this->addFieldMapping('field_name_first', 'content_profile_name_first')
         ->description('The user\'s firstname.');

    $this->addFieldMapping('field_name_last', 'content_profile_name_last')
         ->description('The user\'s lastname.');

    $this->addFieldMapping('field_bio', 'content_profile_body') // Teaser seems to be unused.
         ->description('The user\'s self-description, in HTML source.');

    $this->addFieldMapping('field_bio:format') // By omitting the source field, the default value gets hardcoded for all rows; see https://drupal.org/node/1133448.
         ->defaultValue('full_html')
         ->description('The format of the user\'s self-description, which was always HTML in our Drupal 6 site.');

    // NOTE Facebook and Twitter are stored with field type Link both in D6 and D7. This means they have actually three database columns, 
    // for example field_twitter_url, field_twitter_title, field_twitter_attributes (see table content_type_user_profile in D6). The Drupal 6 
    // field name is field_twitter however, and it does not work to use the database column names like field_twitter_url. However the Drupal 7 
    // fieldname is field_twitter_url, as shown in the field manager, and it does not work to use field_twitter there.

    $this->addFieldMapping('field_twitter_url', 'field_twitter')
         ->description('The user\'s Twitter profile URL.');

    $this->addFieldMapping('field_facebook_url', 'field_facebook')
         ->description('The user\'s Facebook profile URL.');

    $this->addFieldMapping('field_agegroup', 'field_agegroup')
         ->description('The user\'s age group.');

    // NOTE field_projects is stored with field type "Long text", which means it has two database columns field_projects_value and field_projects_format. 
    // The basic field name is only field_projects, enough for here. It is however also possible to migrate the individual parts.
    $this->addFieldMapping('field_projects', 'field_projects')
        ->description('Projects of this user.');

    $this->addFieldMapping('field_projects:format') // By omitting the source field, the default value gets hardcoded for all rows; see https://drupal.org/node/1133448.
         ->defaultValue('full_html')
         ->description('The format of the user\'s projects field, which was always HTML in our Drupal 6 site.');

    // TODO This is a mupltiple term reference field and needs a vocabulary migration to work properly.
    // Left out for now because it's not important data.
    // $this->addFieldMapping('field_cultural_groups', 'field_cultural_groups')
    //      ->description('The user\'s cultural groups.');

    // TODO This is a mupltiple term reference field and needs a vocabulary migration to work properly.
    // Left out for now because it's not important data.
    // $this->addFieldMapping('field_organizations', 'field_organizations')
    //     ->description('Organizations that the user is a member of.');
  }


  /**
   * Implementation of Migration::prepareRow().
   *
   * Provides the opportunity to pull in additional data from a non-core, non-CCK table. In this case the content_profile node.
   * @param $row
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Documentation of SelectQuery API: https://api.drupal.org/api/drupal/includes!database!select.inc/class/SelectQuery/7
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('node', 'n');
    $query->fields('n', array('nid', 'vid', 'type', 'language', 'title', 'uid', 'status', 'created', 'changed', 'comment', 'promote', 'moderate', 'sticky', 'tnid', 'translate'));
    $query->condition('n.type', 'user_profile', '=');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid'); // Do not assign to $query, as it only returns the table alias.
    $query->addField('nr', 'body');
    $query->addField('nr', 'teaser');
    $query->addField('nr', 'format');
    $query->condition('n.uid', $row->uid);

    $extended_row = $query->execute()->fetchObject();

    if ($extended_row) {
      // The node title is the full name of the user, so we attempt to split it at the first space.
      $row->content_profile_title = $extended_row->title;
      
      $separator_pos = strpos($extended_row->title, ' ');
      if ($separator_pos !== FALSE) {
        $row->content_profile_name_first = substr($extended_row->title, 0, $separator_pos);
        $row->content_profile_name_last =  substr($extended_row->title, $separator_pos + 1);;
      }
      else {
        $row->content_profile_name_first = $extended_row->title;
        $row->content_profile_name_last = '';
      }

      $row->content_profile_teaser = $extended_row->teaser;
      $row->content_profile_body = $extended_row->body;
      $row->content_profile_format = $extended_row->format;
    }
    else {
      $this->saveMessage(t('No content_profile found for user with uid !uid', array('!uid' => $row->uid)));
    }
  }

}


/**
 * Migration for Drupal 6 files.
 *
 * This can migrate all files stored in the Drupal 6 table "files", including content images. This migration will only migrate the 
 * actual files. It will not enter the files into fields referencing them, such as the field_image field of nodes.
 * This is done by the node migration classes depending on this one.
 * 
 * Implemented according to code samples from https://drupal.org/node/1333676 (relating to migrate 7.x-2.2 however) and 
 * adapted for API changes in migrate 7.x-2.5 as per the documentation at https://drupal.org/node/1540106.
 */
class EdgerydersDrupalFileMigration extends Migration {

   public function __construct(array $arguments) {

      $group = MigrateGroup::getInstance($arguments['group']);
      parent::__construct($group); // Different from the migrate_d2d migration constructors, which accept $arguments!!

      // Define the migration map content.
      //
      // A "map" is a translation between original and imported etities for tracking them. It is saved in a database table, here 
      // migrate_map_edgerydersdrupalfile. It is important to set up the columns correctly, or for example sourceMigration() method will 
      // fail to translate an original to a migrated value (instead always returning NULL) when calling it in other migrations, It means 
      // here, calling it in EdgerydersDrupalMissionCaseMigration, where a translation between file IDs is done. So we need fids in both 
      // columns here. (If the file class "MigrateFileUri" would be used in dependent migrations, we would have to make the first column 
      // of the map instead contain the filepath field, and be a varchar 255 column.)
      //   Documentation of MigrateMap classes: https://drupal.org/node/1007004
      $this->map = new MigrateSQLMap(
        $this->machineName,
        array('fid' => array(
          'type' => 'int', 
          'unsigned' => TRUE,
          'not null' => FALSE,
          'description' => 'File ID of source file.',
        )),
        MigrateDestinationFile::getKeySchema()
      );

      $query = Database::getConnection('default', $arguments['source_connection'])
        ->select('files', 'f')
        ->fields('f', array('fid', 'filepath'))
        ->isNotNull('filepath');

      $this->source = new MigrateSourceSQL($query, array(), null, array('map_joinable' => false));
      $this->destination = new MigrateDestinationFile('file', 'MigrateFileUri');

      $this->addFieldMapping('value', 'filepath')
           ->callbacks(array($this, 'clean_path'));
      $this->addFieldMapping('source_dir')
           ->defaultValue($arguments['source_dir']);
      $this->addFieldMapping('destination_dir')
           ->defaultValue('public://'); // Mapping could be omitted as this would be assumed anyway.
      $this->addFieldMapping('destination_file', 'filepath') // Without, all files would end up in one directory, potentially overwriting each other.
           ->callbacks(array($this, 'clean_path'));
      $this->addFieldMapping('file_replace')
           ->defaultValue(MigrateFile::FILE_EXISTS_REUSE);

      // Do not delete files physically on migrate-rollback. Only works in Migrate 7.x-2.6 or newer.
      $this->addFieldMapping('preserve_files')
           ->defaultValue(TRUE);
   }

   public function clean_path($uri) {
      
      // Unify the paths by removing the occasionally occuring explicit site names.
      $uri = str_replace('sites/edgeriders.ppa.coe.int/files/', 'sites/default/files/', $uri);
      $uri = str_replace('sites/edgeryders.ppa.coe.int/files/', 'sites/default/files/', $uri);

      drush_print("Debug: Cleaned picture path is: $uri");

      return $uri;
   }
}


/**
 * Common mappings for the Drupal 6 node migrations.
 */
abstract class EdgerydersDrupalNodeMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_legacy_nid', 'nid')
         ->description('The node ID in the migrated Drupal 6 site, if any.');
  }
}

/**
 * Migration for the "Campaign" content type.
 */
class EdgerydersDrupalCampaignMigration extends EdgerydersDrupalNodeMigration {
  public function __construct(array $arguments) {
    
    parent::__construct($arguments);

    // Nothing to do. It's a node with added field "field_getting_started", which is always empty, so we ignore it.

    // Delete values in the original path field to get default URL paths in Drupal 7, in order to get proper default paths for Mission Cases, which are based on this.
    // $this->addFieldMapping('path', NULL)->defaultValue(''); // TODO Remains to be tested.
  }
}


/**
 * Migration for the "Mission Brief" content type.
 */
class EdgerydersDrupalMissionBriefMigration extends EdgerydersDrupalNodeMigration {
  public function __construct(array $arguments) {
    
    parent::__construct($arguments);

    // Field "field_difficulty" was related to the gamification so can be ignored.

    // Delete values in the original path field to get default URL paths in Drupal 7, in order to get proper default paths for Mission Cases, which are based on this.
    // $this->addFieldMapping('path', NULL)->defaultValue(''); // TODO Remains to be tested.
  }
}


/**
 * Migration for the "Mission Case" content type.
 */
class EdgerydersDrupalMissionCaseMigration extends EdgerydersDrupalNodeMigration {
  public function __construct(array $arguments) {

    // Here we have to add the additional fields that are pulled in via prepareRow() below and are not normally available.
    $this->sourceFields['group_nid'] = 'Reference to the group to which a Mission Case belongs.';
    $this->sourceFields['field_images_fids'] = 'Array of fid\'s from the original field_images.';

    parent::__construct($arguments);

    $this->addFieldMapping('title_field', 'title')
         ->description('For some reason, title migration does not work without.');

    $this->addFieldMapping('field_content_videos', 'field_content_videos')
         ->description('Importing URLs for videos that were shown embedded after the content. Subfields can be ignored.');

    // Note that the group_nid field is not available normally, we pulled it in via prepareRow() below.
    $this->addFieldMapping('og_group_ref', 'group_nid')
         ->description('Mapping of the reference to the group to which a Mission Case belongs.')
         ->sourceMigration('EdgerydersDrupalMissionBrief')
         ->defaultValue('438'); // ID of the "Agora" group, used for misc content.

    // Importing images by file ID, as per the instructions on https://drupal.org/node/1540106#comment-6133880 and 
    // https://www.acquia.com/blog/file-import-improvements-migrate-24 (at "File fields").
    $this->addFieldMapping('field_image', 'field_images_fids')
         ->description('Importing of images associated with a Mission Case.')
         ->sourceMigration('EdgerydersDrupalFile');
    $this->addFieldMapping('field_image:file_class')
         ->defaultValue('MigrateFileFid');
  }

  /**
   * Implementation of Migration::prepareRow().
   *
   * Provides the opportunity to pull in additional data from a non-core, non-CCK table. In this case the group IDs.
   * @param $row
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Documentation of SelectQuery API: https://api.drupal.org/api/drupal/includes!database!select.inc/class/SelectQuery/7

    // Add a group reference field to $row.

    $query = Database::getConnection('default', $this->sourceConnection)
        ->select('og_ancestry', 'oga');
    $query->innerJoin('node', 'n', 'n.nid = oga.nid'); // Do not assign to $query, as it only returns the table alias.
    $query->fields('oga');
    $query->condition('n.nid', $row->nid); // TODO Can be simplified: eliminate the innerJoin, use oga.nid here.

    $extended_row = $query->execute()->fetchObject();

    if ($extended_row) {
      $row->group_nid = $extended_row->group_nid;
    }
    else {
      $this->saveMessage(t('No group ID found for node with nid !nid', array('!nid' => $row->nid)));
    }


    // Now add a field with an array of file IDs of images to $row.
    // An alternative way of file importing that omits unused files and does not depend on a dedicated file migration 
    // is shown at https://drupal.org/node/1736766#comment-6369584 .
    
    $query = Database::getConnection('default', $this->sourceConnection)
          ->select('content_field_content_images', 'cfci');
    $query->fields('cfci', array('field_content_images_fid'))
          ->isNotNull('field_content_images_fid');
    $query->condition('cfci.nid', $row->nid);
    $query->distinct();

    // Create field field_images_fids as array, which is the right way of creating a multi-value field as it will later be mapped to 
    // another multi-value field. See: https://drupal.org/node/1509750
    $fids = $query->execute()->fetchCol(); // fetchCol() API docs: http://bit.ly/14LCdo8
    if (!empty($fids)) {
      $row->field_images_fids = $fids;
      drush_print("Debug: Assigned \$row->field_images_fids = ");
      drush_print_r($fids);
    }

    // Avoid creating records with the empty string.
    if (empty($row->field_content_videos)) {
       unset($row->field_content_videos);
    }
  }

}
