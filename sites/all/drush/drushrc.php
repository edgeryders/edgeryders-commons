<?php 


$options['sites'] = array (
);
$options['profiles'] = array (
  0 => 'commons',
);
$options['packages'] = array (
  'base' => 
  array (
    'modules' => 
    array (
      'forum' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/forum/forum.module',
        'basename' => 'forum.module',
        'name' => 'forum',
        'info' => 
        array (
          'name' => 'Forum',
          'description' => 'Provides discussion forums.',
          'dependencies' => 
          array (
            0 => 'taxonomy',
            1 => 'comment',
          ),
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'forum.test',
          ),
          'configure' => 'admin/structure/forum',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'forum.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => '7012',
        'version' => '7.41',
      ),
      'php' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/php/php.module',
        'basename' => 'php.module',
        'name' => 'php',
        'info' => 
        array (
          'name' => 'PHP filter',
          'description' => 'Allows embedded PHP code/snippets to be evaluated.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'php.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'contextual' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/contextual/contextual.module',
        'basename' => 'contextual.module',
        'name' => 'contextual',
        'info' => 
        array (
          'name' => 'Contextual links',
          'description' => 'Provides contextual links to perform actions related to elements on a page.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'contextual.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'book' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/book/book.module',
        'basename' => 'book.module',
        'name' => 'book',
        'info' => 
        array (
          'name' => 'Book',
          'description' => 'Allows users to create and organize related content in an outline.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'book.test',
          ),
          'configure' => 'admin/content/book/settings',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'book.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'toolbar' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/toolbar/toolbar.module',
        'basename' => 'toolbar.module',
        'name' => 'toolbar',
        'info' => 
        array (
          'name' => 'Toolbar',
          'description' => 'Provides a toolbar that shows the top-level administration menu items and links from other modules.',
          'core' => '7.x',
          'package' => 'Core',
          'version' => '7.41',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'system' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/system/system.module',
        'basename' => 'system.module',
        'name' => 'system',
        'info' => 
        array (
          'name' => 'System',
          'description' => 'Handles general site configuration for administrators.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'system.archiver.inc',
            1 => 'system.mail.inc',
            2 => 'system.queue.inc',
            3 => 'system.tar.inc',
            4 => 'system.updater.inc',
            5 => 'system.test',
          ),
          'required' => true,
          'configure' => 'admin/config/system',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7080',
        'version' => '7.41',
      ),
      'blog' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/blog/blog.module',
        'basename' => 'blog.module',
        'name' => 'blog',
        'info' => 
        array (
          'name' => 'Blog',
          'description' => 'Enables multi-user blogs.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'blog.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'comment' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/comment/comment.module',
        'basename' => 'comment.module',
        'name' => 'comment',
        'info' => 
        array (
          'name' => 'Comment',
          'description' => 'Allows users to comment on and discuss published content.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'text',
          ),
          'files' => 
          array (
            0 => 'comment.module',
            1 => 'comment.test',
          ),
          'configure' => 'admin/content/comment',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'comment.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => '7009',
        'version' => '7.41',
      ),
      'openid' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/openid/openid.module',
        'basename' => 'openid.module',
        'name' => 'openid',
        'info' => 
        array (
          'name' => 'OpenID',
          'description' => 'Allows users to log into your site using OpenID.',
          'version' => '7.41',
          'package' => 'Core',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'openid.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.41',
      ),
      'block' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/block/block.module',
        'basename' => 'block.module',
        'name' => 'block',
        'info' => 
        array (
          'name' => 'Block',
          'description' => 'Controls the visual building blocks a page is constructed with. Blocks are boxes of content rendered into an area, or region, of a web page.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'block.test',
          ),
          'configure' => 'admin/structure/block',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7009',
        'version' => '7.41',
      ),
      'aggregator' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/aggregator/aggregator.module',
        'basename' => 'aggregator.module',
        'name' => 'aggregator',
        'info' => 
        array (
          'name' => 'Aggregator',
          'description' => 'Aggregates syndicated content (RSS, RDF, and Atom feeds).',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'aggregator.test',
          ),
          'configure' => 'admin/config/services/aggregator/settings',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'aggregator.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7004',
        'version' => '7.41',
      ),
      'poll' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/poll/poll.module',
        'basename' => 'poll.module',
        'name' => 'poll',
        'info' => 
        array (
          'name' => 'Poll',
          'description' => 'Allows your site to capture votes on different topics in the form of multiple choice questions.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'poll.test',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'poll.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7004',
        'version' => '7.41',
      ),
      'dblog' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/dblog/dblog.module',
        'basename' => 'dblog.module',
        'name' => 'dblog',
        'info' => 
        array (
          'name' => 'Database logging',
          'description' => 'Logs and records system events to the database.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'dblog.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'version' => '7.41',
      ),
      'simpletest' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/simpletest/simpletest.module',
        'basename' => 'simpletest.module',
        'name' => 'simpletest',
        'info' => 
        array (
          'name' => 'Testing',
          'description' => 'Provides a framework for unit and functional testing.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'simpletest.test',
            1 => 'drupal_web_test_case.php',
            2 => 'tests/actions.test',
            3 => 'tests/ajax.test',
            4 => 'tests/batch.test',
            5 => 'tests/boot.test',
            6 => 'tests/bootstrap.test',
            7 => 'tests/cache.test',
            8 => 'tests/common.test',
            9 => 'tests/database_test.test',
            10 => 'tests/entity_crud.test',
            11 => 'tests/entity_crud_hook_test.test',
            12 => 'tests/entity_query.test',
            13 => 'tests/error.test',
            14 => 'tests/file.test',
            15 => 'tests/filetransfer.test',
            16 => 'tests/form.test',
            17 => 'tests/graph.test',
            18 => 'tests/image.test',
            19 => 'tests/lock.test',
            20 => 'tests/mail.test',
            21 => 'tests/menu.test',
            22 => 'tests/module.test',
            23 => 'tests/pager.test',
            24 => 'tests/password.test',
            25 => 'tests/path.test',
            26 => 'tests/registry.test',
            27 => 'tests/schema.test',
            28 => 'tests/session.test',
            29 => 'tests/tablesort.test',
            30 => 'tests/theme.test',
            31 => 'tests/unicode.test',
            32 => 'tests/update.test',
            33 => 'tests/xmlrpc.test',
            34 => 'tests/upgrade/upgrade.test',
            35 => 'tests/upgrade/upgrade.comment.test',
            36 => 'tests/upgrade/upgrade.filter.test',
            37 => 'tests/upgrade/upgrade.forum.test',
            38 => 'tests/upgrade/upgrade.locale.test',
            39 => 'tests/upgrade/upgrade.menu.test',
            40 => 'tests/upgrade/upgrade.node.test',
            41 => 'tests/upgrade/upgrade.taxonomy.test',
            42 => 'tests/upgrade/upgrade.trigger.test',
            43 => 'tests/upgrade/upgrade.translatable.test',
            44 => 'tests/upgrade/upgrade.upload.test',
            45 => 'tests/upgrade/upgrade.user.test',
            46 => 'tests/upgrade/update.aggregator.test',
            47 => 'tests/upgrade/update.trigger.test',
            48 => 'tests/upgrade/update.field.test',
            49 => 'tests/upgrade/update.user.test',
          ),
          'configure' => 'admin/config/development/testing/settings',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'statistics' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/statistics/statistics.module',
        'basename' => 'statistics.module',
        'name' => 'statistics',
        'info' => 
        array (
          'name' => 'Statistics',
          'description' => 'Logs access statistics for your site.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'statistics.test',
          ),
          'configure' => 'admin/config/system/statistics',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.41',
      ),
      'filter' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/filter/filter.module',
        'basename' => 'filter.module',
        'name' => 'filter',
        'info' => 
        array (
          'name' => 'Filter',
          'description' => 'Filters content in preparation for display.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'filter.test',
          ),
          'required' => true,
          'configure' => 'admin/config/content/formats',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7010',
        'version' => '7.41',
      ),
      'syslog' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/syslog/syslog.module',
        'basename' => 'syslog.module',
        'name' => 'syslog',
        'info' => 
        array (
          'name' => 'Syslog',
          'description' => 'Logs and records system events to syslog.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'syslog.test',
          ),
          'configure' => 'admin/config/development/logging',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'rdf' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/rdf/rdf.module',
        'basename' => 'rdf.module',
        'name' => 'rdf',
        'info' => 
        array (
          'name' => 'RDF',
          'description' => 'Enriches your content with metadata to let other applications (e.g. search engines, aggregators) better understand its relationships and attributes.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rdf.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'field_ui' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/field_ui/field_ui.module',
        'basename' => 'field_ui.module',
        'name' => 'field_ui',
        'info' => 
        array (
          'name' => 'Field UI',
          'description' => 'User interface for the Field API.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'field_ui.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'user' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/user/user.module',
        'basename' => 'user.module',
        'name' => 'user',
        'info' => 
        array (
          'name' => 'User',
          'description' => 'Manages the user registration and login system.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'user.module',
            1 => 'user.test',
          ),
          'required' => true,
          'configure' => 'admin/config/people',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'user.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7018',
        'version' => '7.41',
      ),
      'help' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/help/help.module',
        'basename' => 'help.module',
        'name' => 'help',
        'info' => 
        array (
          'name' => 'Help',
          'description' => 'Manages the display of online help.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'help.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'translation' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/translation/translation.module',
        'basename' => 'translation.module',
        'name' => 'translation',
        'info' => 
        array (
          'name' => 'Content translation',
          'description' => 'Allows content to be translated into different languages.',
          'dependencies' => 
          array (
            0 => 'locale',
          ),
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'translation.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'text' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/field/modules/text/text.module',
        'basename' => 'text.module',
        'name' => 'text',
        'info' => 
        array (
          'name' => 'Text',
          'description' => 'Defines simple text field types.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'text.test',
          ),
          'required' => true,
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.41',
      ),
      'number' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/field/modules/number/number.module',
        'basename' => 'number.module',
        'name' => 'number',
        'info' => 
        array (
          'name' => 'Number',
          'description' => 'Defines numeric field types.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'number.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'field_sql_storage' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/field/modules/field_sql_storage/field_sql_storage.module',
        'basename' => 'field_sql_storage.module',
        'name' => 'field_sql_storage',
        'info' => 
        array (
          'name' => 'Field SQL storage',
          'description' => 'Stores field data in an SQL database.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'field_sql_storage.test',
          ),
          'required' => true,
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'version' => '7.41',
      ),
      'list' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/field/modules/list/list.module',
        'basename' => 'list.module',
        'name' => 'list',
        'info' => 
        array (
          'name' => 'List',
          'description' => 'Defines list field types. Use with Options to create selection lists.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
            1 => 'options',
          ),
          'files' => 
          array (
            0 => 'tests/list.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'version' => '7.41',
      ),
      'options' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/field/modules/options/options.module',
        'basename' => 'options.module',
        'name' => 'options',
        'info' => 
        array (
          'name' => 'Options',
          'description' => 'Defines selection, check box and radio button widgets for text and numeric fields.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'options.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'field' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/field/field.module',
        'basename' => 'field.module',
        'name' => 'field',
        'info' => 
        array (
          'name' => 'Field',
          'description' => 'Field API to add fields to entities like nodes and users.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'field.module',
            1 => 'field.attach.inc',
            2 => 'field.info.class.inc',
            3 => 'tests/field.test',
          ),
          'dependencies' => 
          array (
            0 => 'field_sql_storage',
          ),
          'required' => true,
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'theme/field.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'version' => '7.41',
      ),
      'taxonomy' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/taxonomy/taxonomy.module',
        'basename' => 'taxonomy.module',
        'name' => 'taxonomy',
        'info' => 
        array (
          'name' => 'Taxonomy',
          'description' => 'Enables the categorization of content.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'options',
          ),
          'files' => 
          array (
            0 => 'taxonomy.module',
            1 => 'taxonomy.test',
          ),
          'configure' => 'admin/structure/taxonomy',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => '7011',
        'version' => '7.41',
      ),
      'tracker' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/tracker/tracker.module',
        'basename' => 'tracker.module',
        'name' => 'tracker',
        'info' => 
        array (
          'name' => 'Tracker',
          'description' => 'Enables tracking of recent content for users.',
          'dependencies' => 
          array (
            0 => 'comment',
          ),
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'tracker.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.41',
      ),
      'contact' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/contact/contact.module',
        'basename' => 'contact.module',
        'name' => 'contact',
        'info' => 
        array (
          'name' => 'Contact',
          'description' => 'Enables the use of both personal and site-wide contact forms.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'contact.test',
          ),
          'configure' => 'admin/structure/contact',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'version' => '7.41',
      ),
      'locale' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/locale/locale.module',
        'basename' => 'locale.module',
        'name' => 'locale',
        'info' => 
        array (
          'name' => 'Locale',
          'description' => 'Adds language handling functionality and enables the translation of the user interface to languages other than English.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'locale.test',
          ),
          'configure' => 'admin/config/regional/language',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7005',
        'version' => '7.41',
      ),
      'menu' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/menu/menu.module',
        'basename' => 'menu.module',
        'name' => 'menu',
        'info' => 
        array (
          'name' => 'Menu',
          'description' => 'Allows administrators to customize the site navigation menu.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'menu.test',
          ),
          'configure' => 'admin/structure/menu',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'version' => '7.41',
      ),
      'color' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/color/color.module',
        'basename' => 'color.module',
        'name' => 'color',
        'info' => 
        array (
          'name' => 'Color',
          'description' => 'Allows administrators to change the color scheme of compatible themes.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'color.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'version' => '7.41',
      ),
      'shortcut' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/shortcut/shortcut.module',
        'basename' => 'shortcut.module',
        'name' => 'shortcut',
        'info' => 
        array (
          'name' => 'Shortcut',
          'description' => 'Allows users to manage customizable lists of shortcut links.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'shortcut.test',
          ),
          'configure' => 'admin/config/user-interface/shortcut',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'node' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/node/node.module',
        'basename' => 'node.module',
        'name' => 'node',
        'info' => 
        array (
          'name' => 'Node',
          'description' => 'Allows content to be submitted to the site and displayed on pages.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'node.module',
            1 => 'node.test',
          ),
          'required' => true,
          'configure' => 'admin/structure/types',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'node.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7015',
        'version' => '7.41',
      ),
      'trigger' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/trigger/trigger.module',
        'basename' => 'trigger.module',
        'name' => 'trigger',
        'info' => 
        array (
          'name' => 'Trigger',
          'description' => 'Enables actions to be fired on certain system events, such as when new content is created.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'trigger.test',
          ),
          'configure' => 'admin/structure/trigger',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'version' => '7.41',
      ),
      'file' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/file/file.module',
        'basename' => 'file.module',
        'name' => 'file',
        'info' => 
        array (
          'name' => 'File',
          'description' => 'Defines a file field type.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'tests/file.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'path' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/path/path.module',
        'basename' => 'path.module',
        'name' => 'path',
        'info' => 
        array (
          'name' => 'Path',
          'description' => 'Allows users to rename URLs.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'path.test',
          ),
          'configure' => 'admin/config/search/path',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'search' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/search/search.module',
        'basename' => 'search.module',
        'name' => 'search',
        'info' => 
        array (
          'name' => 'Search',
          'description' => 'Enables site-wide keyword searching.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'search.extender.inc',
            1 => 'search.test',
          ),
          'configure' => 'admin/config/search/settings',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'search.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.41',
      ),
      'image' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/image/image.module',
        'basename' => 'image.module',
        'name' => 'image',
        'info' => 
        array (
          'name' => 'Image',
          'description' => 'Provides image manipulation tools.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'file',
          ),
          'files' => 
          array (
            0 => 'image.test',
          ),
          'configure' => 'admin/config/media/image-styles',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => '7005',
        'version' => '7.41',
      ),
      'update' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/update/update.module',
        'basename' => 'update.module',
        'name' => 'update',
        'info' => 
        array (
          'name' => 'Update manager',
          'description' => 'Checks for available updates, and can securely install or update modules and themes via a web interface.',
          'version' => '7.41',
          'package' => 'Core',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'update.test',
          ),
          'configure' => 'admin/reports/updates/settings',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'version' => '7.41',
      ),
      'dashboard' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/dashboard/dashboard.module',
        'basename' => 'dashboard.module',
        'name' => 'dashboard',
        'info' => 
        array (
          'name' => 'Dashboard',
          'description' => 'Provides a dashboard page in the administrative interface for organizing administrative tasks and tracking information within your site.',
          'core' => '7.x',
          'package' => 'Core',
          'version' => '7.41',
          'files' => 
          array (
            0 => 'dashboard.test',
          ),
          'dependencies' => 
          array (
            0 => 'block',
          ),
          'configure' => 'admin/dashboard/customize',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'overlay' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/modules/overlay/overlay.module',
        'basename' => 'overlay.module',
        'name' => 'overlay',
        'info' => 
        array (
          'name' => 'Overlay',
          'description' => 'Displays the Drupal administration interface in an overlay.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'project' => 'drupal',
          'datestamp' => '1445457729',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.41',
      ),
      'annotator' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/annotator/annotator.module',
        'basename' => 'annotator.module',
        'name' => 'annotator',
        'info' => 
        array (
          'name' => 'Annotator',
          'description' => 'Annotator',
          'package' => 'Annotation',
          'core' => '7.x',
          'configure' => 'admin/config/content/annotator',
          'files' => 
          array (
            0 => 'includes/AnnotatorPlugin.class.inc',
            1 => 'plugins/annotator/AuthAnnotatorPlugin.class.inc',
            2 => 'plugins/annotator/FilterAnnotatorPlugin.class.inc',
            3 => 'plugins/annotator/I18nAnnotatorPlugin.class.inc',
            4 => 'plugins/annotator/MarkdownAnnotatorPlugin.class.inc',
            5 => 'plugins/annotator/PermissionsAnnotatorPlugin.class.inc',
            6 => 'plugins/annotator/TagsAnnotatorPlugin.class.inc',
            7 => 'plugins/annotator/UnsupportedAnnotatorPlugin.class.inc',
            8 => 'plugins/annotator/DrupalNodeAnnotatorPlugin.class.inc',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/openethnographer.css',
            ),
          ),
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'jquery_update',
            2 => 'libraries',
            3 => 'taxonomy_display',
            4 => 'annotation',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => NULL,
      ),
      'annotation' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/annotation/annotation.module',
        'basename' => 'annotation.module',
        'name' => 'annotation',
        'info' => 
        array (
          'name' => 'Annotation',
          'description' => 'Annotation entity',
          'package' => 'Annotation',
          'core' => '7.x',
          'configure' => 'admin/structure/annotation',
          'files' => 
          array (
            0 => 'annotation.class.inc',
            1 => 'annotation.controller.inc',
            2 => 'annotation.recursive_dom_iterator.inc',
            3 => 'plugins/annotator/StoreAnnotatorPlugin.class.inc',
          ),
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'entity',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => NULL,
      ),
      'features_override' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/features_override/features_override.module',
        'basename' => 'features_override.module',
        'name' => 'features_override',
        'info' => 
        array (
          'name' => 'Features Override',
          'description' => 'Allows exported Features to be overridden',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'features',
          ),
          'package' => 'Features',
          'version' => '7.x-2.0-rc2',
          'project' => 'features_override',
          'datestamp' => '1406903928',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.0-rc2',
      ),
      'addressfield_tokens' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/addressfield_tokens/addressfield_tokens.module',
        'basename' => 'addressfield_tokens.module',
        'name' => 'addressfield_tokens',
        'info' => 
        array (
          'name' => 'Address Field Tokens',
          'description' => 'Creates tokens for address fields, adds new addressfield renders, and adds webform integration.',
          'core' => '7.x',
          'package' => 'Fields',
          'version' => '7.x-1.4',
          'dependencies' => 
          array (
            0 => 'addressfield',
            1 => 'entity_token',
            2 => 'token',
          ),
          'project' => 'addressfield_tokens',
          'datestamp' => '1400081330',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'hsts' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/hsts/hsts.module',
        'basename' => 'hsts.module',
        'name' => 'hsts',
        'info' => 
        array (
          'name' => 'HTTP Strict Transport Security',
          'description' => 'Enable Strict Transport Security on your Drupal site.',
          'core' => '7.x',
          'package' => 'Security',
          'files' => 
          array (
            0 => 'hsts.module',
          ),
          'configure' => 'admin/config/security/hsts',
          'version' => '7.x-1.0',
          'project' => 'hsts',
          'datestamp' => '1375119377',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0',
      ),
      'entity_view_mode' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/entity_view_mode/entity_view_mode.module',
        'basename' => 'entity_view_mode.module',
        'name' => 'entity_view_mode',
        'info' => 
        array (
          'name' => 'Entity view modes',
          'description' => 'Allows administrators to define custom view modes for entities via the administration user interface.',
          'core' => '7.x',
          'recommends' => 
          array (
            0 => 'field_ui',
          ),
          'configure' => 'admin/config/system/entity-view-modes',
          'files' => 
          array (
            0 => 'entity_view_mode.test',
          ),
          'version' => '7.x-1.0-rc1',
          'project' => 'entity_view_mode',
          'datestamp' => '1368242411',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc1',
      ),
      'htmLawed' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/htmlawed/htmLawed.module',
        'basename' => 'htmLawed.module',
        'name' => 'htmLawed',
        'info' => 
        array (
          'name' => 'htmLawed (X)HTML filter/purifier',
          'description' => 'Restrict HTML markup and make content secure, and standard- and admin. policy-compliant',
          'core' => '7.x',
          'version' => '7.x-3.3',
          'project' => 'htmlawed',
          'datestamp' => '1394648328',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.3',
      ),
      'edgeryders_conferences' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/edgeryders_conferences/edgeryders_conferences.module',
        'basename' => 'edgeryders_conferences.module',
        'name' => 'edgeryders_conferences',
        'info' => 
        array (
          'name' => 'Edgeryders conferences',
          'description' => 'TODO: Description of module',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'tests/edgeryders_conferences.test',
          ),
          'dependencies' => 
          array (
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => NULL,
      ),
      'masquerade' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/masquerade/masquerade.module',
        'basename' => 'masquerade.module',
        'name' => 'masquerade',
        'info' => 
        array (
          'name' => 'Masquerade',
          'description' => 'This module allows permitted users to masquerade as other users.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'masquerade.test',
          ),
          'configure' => 'admin/config/people/masquerade',
          'version' => '7.x-1.0-rc7',
          'project' => 'masquerade',
          'datestamp' => '1394333639',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'version' => '7.x-1.0-rc7',
      ),
      'anonymous_publishing' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/anonymous_publishing/anonymous_publishing.module',
        'basename' => 'anonymous_publishing.module',
        'name' => 'anonymous_publishing',
        'info' => 
        array (
          'name' => 'Anonymous publishing',
          'description' => 'Anonymous publishing increases your control over anonymous publishing on a site.',
          'core' => '7.x',
          'configure' => 'admin/config/content/anonymous_publishing',
          'version' => '7.x-1.0-alpha6+2-dev',
          'project' => 'anonymous_publishing',
          'datestamp' => '1395137057',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'version' => '7.x-1.0-alpha6+2-dev',
      ),
      'anonymous_publishing_claim' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/anonymous_publishing/anonymous_publishing_claim.module',
        'basename' => 'anonymous_publishing_claim.module',
        'name' => 'anonymous_publishing_claim',
        'info' => 
        array (
          'name' => 'Anonymous publishing claim',
          'description' => 'Implements lazy registration for the Anonymous Publishing module.',
          'dependencies' => 
          array (
            0 => 'anonymous_publishing',
          ),
          'core' => '7.x',
          'version' => '7.x-1.0-alpha6+2-dev',
          'project' => 'anonymous_publishing',
          'datestamp' => '1395137057',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-alpha6+2-dev',
      ),
      'css_injector' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/css_injector/css_injector.module',
        'basename' => 'css_injector.module',
        'name' => 'css_injector',
        'info' => 
        array (
          'name' => 'CSS Injector',
          'description' => 'Adds CSS to the page output based on configurable rules.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'css_injector.admin.inc',
            1 => 'css_injector.install',
            2 => 'css_injector.module',
            3 => 'css_injector.test',
          ),
          'configure' => 'admin/config/development/css-injector',
          'version' => '7.x-1.10',
          'project' => 'css_injector',
          'datestamp' => '1387292932',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'version' => '7.x-1.10',
      ),
      'label_help' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/label_help/label_help.module',
        'basename' => 'label_help.module',
        'name' => 'label_help',
        'info' => 
        array (
          'name' => 'Label Help',
          'description' => 'Creates the help text directly below the label in form fields',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'label_help.module',
          ),
          'version' => '7.x-1.1',
          'project' => 'label_help',
          'datestamp' => '1396200245',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'devel_generate' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/devel/devel_generate/devel_generate.module',
        'basename' => 'devel_generate.module',
        'name' => 'devel_generate',
        'info' => 
        array (
          'name' => 'Devel generate',
          'description' => 'Generate dummy users, nodes, and taxonomy terms.',
          'package' => 'Development',
          'core' => '7.x',
          'tags' => 
          array (
            0 => 'developer',
          ),
          'configure' => 'admin/config/development/generate',
          'files' => 
          array (
            0 => 'devel_generate.test',
          ),
          'version' => '7.x-1.5',
          'project' => 'devel',
          'datestamp' => '1398963366',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.5',
      ),
      'devel_node_access' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/devel/devel_node_access.module',
        'basename' => 'devel_node_access.module',
        'name' => 'devel_node_access',
        'info' => 
        array (
          'name' => 'Devel node access',
          'description' => 'Developer blocks and page illustrating relevant node_access records.',
          'package' => 'Development',
          'dependencies' => 
          array (
            0 => 'menu',
          ),
          'core' => '7.x',
          'configure' => 'admin/config/development/devel',
          'tags' => 
          array (
            0 => 'developer',
          ),
          'version' => '7.x-1.5',
          'project' => 'devel',
          'datestamp' => '1398963366',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.5',
      ),
      'devel' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/devel/devel.module',
        'basename' => 'devel.module',
        'name' => 'devel',
        'info' => 
        array (
          'name' => 'Devel',
          'description' => 'Various blocks, pages, and functions for developers.',
          'package' => 'Development',
          'core' => '7.x',
          'configure' => 'admin/config/development/devel',
          'tags' => 
          array (
            0 => 'developer',
          ),
          'files' => 
          array (
            0 => 'devel.test',
            1 => 'devel.mail.inc',
          ),
          'version' => '7.x-1.5',
          'project' => 'devel',
          'datestamp' => '1398963366',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7006',
        'version' => '7.x-1.5',
      ),
      'delete_all' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/delete_all/delete_all.module',
        'basename' => 'delete_all.module',
        'name' => 'delete_all',
        'info' => 
        array (
          'name' => 'Delete content and users',
          'description' => 'Allows deletion of all nodes, comments and users on a site. Useful for development or prior to launching a site.',
          'package' => 'Development',
          'configure' => 'admin/content/delete_content',
          'core' => '7.x',
          'version' => '7.x-1.1+4-dev',
          'project' => 'delete_all',
          'datestamp' => '1380569145',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1+4-dev',
      ),
      'persona' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/persona/persona.module',
        'basename' => 'persona.module',
        'name' => 'persona',
        'info' => 
        array (
          'name' => 'Persona',
          'description' => 'Enables users to authenticate using Mozilla Persona.',
          'package' => 'Authentication',
          'configure' => 'admin/config/people/persona',
          'core' => '7.x',
          'php' => '5.3',
          'scripts' => 
          array (
            0 => 'persona.js',
          ),
          'version' => '7.x-1.16',
          'project' => 'persona',
          'datestamp' => '1397061552',
          'dependencies' => 
          array (
          ),
        ),
        'schema_version' => '7101',
        'version' => '7.x-1.16',
      ),
      'relation_feeds' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_feeds/relation_feeds.module',
        'basename' => 'relation_feeds.module',
        'name' => 'relation_feeds',
        'info' => 
        array (
          'name' => 'Relation feeds',
          'description' => 'Feeds integration module for Relation.',
          'core' => '7.x',
          'package' => 'Relation',
          'files' => 
          array (
            0 => 'tests/relation.feeds_processor.test',
          ),
          'dependencies' => 
          array (
            0 => 'relation',
            1 => 'feeds',
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation_dummy_field' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_dummy_field/relation_dummy_field.module',
        'basename' => 'relation_dummy_field.module',
        'name' => 'relation_dummy_field',
        'info' => 
        array (
          'name' => 'Relation Dummy Field',
          'description' => 'Dummy field to display relation data inline on entities.',
          'core' => '7.x',
          'package' => 'Relation',
          'dependencies' => 
          array (
            0 => 'relation',
          ),
          'files' => 
          array (
            0 => 'tests/relation_dummy_field.test',
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation_migrate' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_migrate/relation_migrate.module',
        'basename' => 'relation_migrate.module',
        'name' => 'relation_migrate',
        'info' => 
        array (
          'name' => 'Relation migrate',
          'description' => 'Migrate integration module for Relation.',
          'core' => '7.x',
          'package' => 'Relation',
          'files' => 
          array (
            0 => 'relation_migrate.destination.inc',
            1 => 'relation_migrate.source.inc',
            2 => 'relation_migrate.migration.inc',
            3 => 'tests/relation.migrate.test',
          ),
          'dependencies' => 
          array (
            0 => 'relation',
            1 => 'relation_ui',
            2 => 'migrate',
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation_entity_collector' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_entity_collector/relation_entity_collector.module',
        'basename' => 'relation_entity_collector.module',
        'name' => 'relation_entity_collector',
        'info' => 
        array (
          'name' => 'Relation Entity Collector block',
          'description' => 'A block to collect entities loaded on any page(s), and create relations from them.',
          'core' => '7.x',
          'package' => 'Relation',
          'dependencies' => 
          array (
            0 => 'relation',
            1 => 'block',
          ),
          'files' => 
          array (
            0 => 'tests/relation_entity_collector.test',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'relation_entity_collector.css',
            ),
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation_endpoint' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_endpoint.module',
        'basename' => 'relation_endpoint.module',
        'name' => 'relation_endpoint',
        'info' => 
        array (
          'name' => 'Relation Endpoints Field',
          'description' => 'Helper module for Relation. Defines endpoints field (not usable except by relation).',
          'core' => '7.x',
          'package' => 'Relation',
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation_ui' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_ui.module',
        'basename' => 'relation_ui.module',
        'name' => 'relation_ui',
        'info' => 
        array (
          'name' => 'Relation UI',
          'description' => 'Administrative interface to relation. Without this module, you cannot create or edit your relation types.',
          'package' => 'Relation',
          'core' => '7.x',
          'configure' => 'admin/structure/relation',
          'dependencies' => 
          array (
            0 => 'relation',
          ),
          'files' => 
          array (
            0 => 'relation_ui.module',
            1 => 'tests/relation_ui.test',
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation.module',
        'basename' => 'relation.module',
        'name' => 'relation',
        'info' => 
        array (
          'name' => 'Relation',
          'description' => 'Describes relationships between entities.',
          'core' => '7.x',
          'package' => 'Relation',
          'files' => 
          array (
            0 => 'relation.database.inc',
            1 => 'tests/relation.test',
            2 => 'tests/relation.rules.test',
            3 => 'tests/relation.views.test',
            4 => 'tests/relation.ctools.test',
            5 => 'views/relation_handler_relationship.inc',
            6 => 'views/views_handler_field_relation_link.inc',
            7 => 'views/views_handler_field_relation_link_delete.inc',
            8 => 'views/views_handler_field_relation_link_edit.inc',
          ),
          'dependencies' => 
          array (
            0 => 'relation_endpoint',
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'version' => '7.x-1.0-rc5',
      ),
      'translation_overview' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/translation_overview/translation_overview.module',
        'basename' => 'translation_overview.module',
        'name' => 'translation_overview',
        'info' => 
        array (
          'name' => 'Translation overview',
          'description' => 'Provides an overview of the translation status of the site\'s content.',
          'dependencies' => 
          array (
            0 => 'translation',
          ),
          'core' => '7.x',
          'php' => '5.1',
          'package' => 'Multilingual',
          'files' => 
          array (
            0 => 'translation_overview.install',
            1 => 'translation_overview.module',
            2 => 'translation_overview.pages.inc',
            3 => 'translation_overview.test',
          ),
          'version' => '7.x-2.x-dev',
          'project' => 'translation_overview',
          'datestamp' => '1382147841',
        ),
        'schema_version' => '6002',
        'version' => '7.x-2.x-dev',
      ),
      'views_slideshow_cycle' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_slideshow/contrib/views_slideshow_cycle/views_slideshow_cycle.module',
        'basename' => 'views_slideshow_cycle.module',
        'name' => 'views_slideshow_cycle',
        'info' => 
        array (
          'name' => 'Views Slideshow: Cycle',
          'description' => 'Adds a Rotating slideshow mode to Views Slideshow.',
          'dependencies' => 
          array (
            0 => 'views_slideshow',
            1 => 'libraries',
          ),
          'package' => 'Views',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'views_slideshow_cycle.module',
            1 => 'views_slideshow_cycle.views_slideshow.inc',
            2 => 'theme/views_slideshow_cycle.theme.inc',
          ),
          'version' => '7.x-3.1',
          'project' => 'views_slideshow',
          'datestamp' => '1382584826',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.1',
      ),
      'views_slideshow' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_slideshow/views_slideshow.module',
        'basename' => 'views_slideshow.module',
        'name' => 'views_slideshow',
        'info' => 
        array (
          'name' => 'Views Slideshow',
          'description' => 'Provides a View style that displays rows as a jQuery slideshow.  This is an API and requires Views Slideshow Cycle or another module that supports the API.',
          'dependencies' => 
          array (
            0 => 'views (>=3.0)',
          ),
          'package' => 'Views',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'views_slideshow.module',
            1 => 'theme/views_slideshow.theme.inc',
            2 => 'views_slideshow.views.inc',
            3 => 'views_slideshow_plugin_style_slideshow.inc',
          ),
          'version' => '7.x-3.1',
          'project' => 'views_slideshow',
          'datestamp' => '1382584826',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.1',
      ),
      'og_delete' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/og-delete/og_delete.module',
        'basename' => 'og_delete.module',
        'name' => 'og_delete',
        'info' => 
        array (
          'name' => 'OG Delete',
          'description' => 'Delete or Move content associated with OG.',
          'package' => 'OG Delete',
          'dependencies' => 
          array (
            0 => 'og',
          ),
          'core' => '7.x',
          'version' => '7.x-1.0+1-dev',
          'project' => 'og-delete',
          'datestamp' => '1384240107',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0+1-dev',
      ),
      'rest_server' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services/servers/rest_server/rest_server.module',
        'basename' => 'rest_server.module',
        'name' => 'rest_server',
        'info' => 
        array (
          'name' => 'REST Server',
          'description' => 'Provides an REST server.',
          'package' => 'Services - servers',
          'files' => 
          array (
            0 => 'rest_server.module',
            1 => 'includes/RESTServer.inc',
            2 => 'includes/ServicesContentTypeNegotiator.inc',
            3 => 'includes/ServicesRESTServerFactory.inc',
            4 => 'includes/ServicesContext.inc',
            5 => 'includes/ServicesParser.inc',
            6 => 'includes/ServicesFormatter.inc',
            7 => 'tests/ServicesRESTServerTests.test',
            8 => 'tests/rest_server_mock_classes.inc',
            9 => 'lib/bencode.php',
            10 => 'lib/mimeparse.php',
          ),
          'dependencies' => 
          array (
            0 => 'services',
            1 => 'libraries (>=2.x)',
          ),
          'core' => '7.x',
          'version' => '7.x-3.7',
          'project' => 'services',
          'datestamp' => '1391207946',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.7',
      ),
      'xmlrpc_server' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services/servers/xmlrpc_server/xmlrpc_server.module',
        'basename' => 'xmlrpc_server.module',
        'name' => 'xmlrpc_server',
        'info' => 
        array (
          'name' => 'XMLRPC Server',
          'description' => 'Provides a XMLRPC server.',
          'package' => 'Services - servers',
          'files' => 
          array (
            0 => 'xmlrpc_server.module',
          ),
          'dependencies' => 
          array (
            0 => 'services',
          ),
          'core' => '7.x',
          'version' => '7.x-3.7',
          'project' => 'services',
          'datestamp' => '1391207946',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.7',
      ),
      'services_oauth' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services/auth/services_oauth/services_oauth.module',
        'basename' => 'services_oauth.module',
        'name' => 'services_oauth',
        'info' => 
        array (
          'name' => 'OAuth Authentication',
          'description' => 'Provides OAuth authentication for the services module',
          'package' => 'Services - authentication',
          'dependencies' => 
          array (
            0 => 'services',
            1 => 'oauth_common',
          ),
          'core' => '7.x',
          'php' => '5.2',
          'version' => '7.x-3.7',
          'project' => 'services',
          'datestamp' => '1391207946',
        ),
        'schema_version' => '6200',
        'version' => '7.x-3.7',
      ),
      'services' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services/services.module',
        'basename' => 'services.module',
        'name' => 'services',
        'info' => 
        array (
          'name' => 'Services',
          'description' => 'Provide an API for creating web services.',
          'package' => 'Services',
          'core' => '7.x',
          'php' => '5.x',
          'configure' => 'admin/structure/services',
          'files' => 
          array (
            0 => 'includes/services.runtime.inc',
            1 => 'tests/functional/NoAuthEndpointTestRunner.test',
            2 => 'tests/functional/ServicesResourceNodeTests.test',
            3 => 'tests/functional/ServicesResourceUserTests.test',
            4 => 'tests/functional/ServicesResourceSystemTests.test',
            5 => 'tests/functional/ServicesResourceCommentTests.test',
            6 => 'tests/functional/ServicesResourceTaxonomyTests.test',
            7 => 'tests/functional/ServicesResourceFileTests.test',
            8 => 'tests/functional/ServicesResourceDisabledTests.test',
            9 => 'tests/functional/ServicesEndpointTests.test',
            10 => 'tests/functional/ServicesParserTests.test',
            11 => 'tests/functional/ServicesAliasTests.test',
            12 => 'tests/functional/ServicesXMLRPCTests.test',
            13 => 'tests/functional/ServicesVersionTests.test',
            14 => 'tests/functional/ServicesArgumentsTests.test',
            15 => 'tests/functional/ServicesSecurityTests.test',
            16 => 'tests/unit/ServicesSpycLibraryTests.test',
            17 => 'tests/ui/ServicesUITests.test',
            18 => 'tests/services.test',
          ),
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'version' => '7.x-3.7',
          'project' => 'services',
          'datestamp' => '1391207946',
        ),
        'schema_version' => '7400',
        'version' => '7.x-3.7',
      ),
      'usermerge_self' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/usermerge/usermerge_self/usermerge_self.module',
        'basename' => 'usermerge_self.module',
        'name' => 'usermerge_self',
        'info' => 
        array (
          'name' => 'Self-Serve User Merge',
          'description' => 'Allows users to merge two accounts.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'usermerge',
          ),
          'version' => '7.x-2.5',
          'project' => 'usermerge',
          'datestamp' => '1400483929',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.5',
      ),
      'usermerge' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/usermerge/usermerge.module',
        'basename' => 'usermerge.module',
        'name' => 'usermerge',
        'info' => 
        array (
          'name' => 'User Merge',
          'description' => 'Provides an advanced mechanism to merge user accounts together.',
          'core' => '7.x',
          'configure' => 'admin/config/people/usermerge',
          'version' => '7.x-2.5',
          'project' => 'usermerge',
          'datestamp' => '1400483929',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.5',
      ),
      'ckeditor_styles' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/ckeditor_styles/ckeditor_styles.module',
        'basename' => 'ckeditor_styles.module',
        'name' => 'ckeditor_styles',
        'info' => 
        array (
          'name' => 'CKeditor Styles',
          'description' => 'Allows for adding custom CKeditor style rules to the styles dropdown.',
          'core' => '7.x',
          'configure' => 'admin/config/content/ckeditor_styles',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'version' => '7.x-1.0-alpha1+7-dev',
          'project' => 'ckeditor_styles',
          'datestamp' => '1380558869',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-alpha1+7-dev',
      ),
      'token_filter' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/token_filter/token_filter.module',
        'basename' => 'token_filter.module',
        'name' => 'token_filter',
        'info' => 
        array (
          'name' => 'Token Filter',
          'description' => 'Allows token values to be used as filters',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-1.1+1-dev',
          'project' => 'token_filter',
          'datestamp' => '1382147423',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1+1-dev',
      ),
      'redhen_activity' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_activity/redhen_activity.module',
        'basename' => 'redhen_activity.module',
        'name' => 'redhen_activity',
        'info' => 
        array (
          'name' => 'RedHen Activity',
          'description' => 'Activity tracking for RedHen leveraging the Message module.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen',
            1 => 'redhen_contact',
            2 => 'redhen_org',
            3 => 'message',
            4 => 'entityreference',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'redhen_note' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_note/redhen_note.module',
        'basename' => 'redhen_note.module',
        'name' => 'redhen_note',
        'info' => 
        array (
          'name' => 'RedHen Notes',
          'description' => 'Defines the base note entity and features.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen',
            1 => 'taxonomy',
            2 => 'text',
          ),
          'files' => 
          array (
            0 => 'lib/redhen_note.entity.inc',
            1 => 'lib/redhen_note.metadata.inc',
            2 => 'lib/redhen_note.views.inc',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => '7101',
        'version' => '7.x-1.7',
      ),
      'redhen_fields' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_fields/redhen_fields.module',
        'basename' => 'redhen_fields.module',
        'name' => 'redhen_fields',
        'info' => 
        array (
          'name' => 'RedHen Fields',
          'description' => 'Fields specific to RedHen CRM.',
          'package' => 'RedHen',
          'core' => '7.x',
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'version' => '7.x-1.7',
      ),
      'redhen_dedupe' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_dedupe/redhen_dedupe.module',
        'basename' => 'redhen_dedupe.module',
        'name' => 'redhen_dedupe',
        'info' => 
        array (
          'name' => 'RedHen Dedupe',
          'description' => 'Provides RedHen contact deduping functionality.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen_contact',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'redhen_relation' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_relation/redhen_relation.module',
        'basename' => 'redhen_relation.module',
        'name' => 'redhen_relation',
        'info' => 
        array (
          'name' => 'RedHen Relation',
          'description' => 'Manage RedHen relationships.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen_contact',
            1 => 'redhen_org',
            2 => 'relation',
            3 => 'relation_ui',
            4 => 'list',
          ),
          'files' => 
          array (
            0 => 'includes/redhen_relation.forms.inc',
            1 => 'includes/views/redhen_relation_handler_field_primary_contact.inc',
            2 => 'includes/views/redhen_relation_handler_sort_primary_contact.inc',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'redhen_org' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_org/redhen_org.module',
        'basename' => 'redhen_org.module',
        'name' => 'redhen_org',
        'info' => 
        array (
          'name' => 'RedHen Organizations',
          'description' => 'Defines the base organization entity and features.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen',
          ),
          'files' => 
          array (
            0 => 'lib/redhen_org.controller.inc',
            1 => 'lib/redhen_org.entity.inc',
            2 => 'lib/redhen_org.metadata.inc',
            3 => 'lib/redhen_org_type.controller.inc',
            4 => 'lib/redhen_org_type.entity.inc',
            5 => 'lib/redhen_org_type.ui_controller.inc',
            6 => 'lib/redhen_org.inline_entity_form.inc',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => '7007',
        'version' => '7.x-1.7',
      ),
      'redhen_registration' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_registration/redhen_registration.module',
        'basename' => 'redhen_registration.module',
        'name' => 'redhen_registration',
        'info' => 
        array (
          'name' => 'RedHen Registration',
          'description' => 'Integrates the Entity Registrations module.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen_contact',
            1 => 'registration',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'redhen_contact' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_contact/redhen_contact.module',
        'basename' => 'redhen_contact.module',
        'name' => 'redhen_contact',
        'info' => 
        array (
          'name' => 'RedHen Contacts',
          'description' => 'Defines the base contact entity and features.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen',
            1 => 'redhen_fields',
          ),
          'files' => 
          array (
            0 => 'lib/redhen_contact.controller.inc',
            1 => 'lib/redhen_contact.entity.inc',
            2 => 'lib/redhen_contact.metadata.inc',
            3 => 'lib/redhen_contact.views.inc',
            4 => 'lib/redhen_contact.inline_entity_form.inc',
            5 => 'lib/redhen_contact_type.controller.inc',
            6 => 'lib/redhen_contact_type.entity.inc',
            7 => 'lib/redhen_contact_type.ui_controller.inc',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'version' => '7.x-1.7',
      ),
      'redhen_org_group' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_org_group/redhen_org_group.module',
        'basename' => 'redhen_org_group.module',
        'name' => 'redhen_org_group',
        'info' => 
        array (
          'name' => 'RedHen Organization Groups',
          'description' => 'Enables group collaboration features for organizations',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen_org',
            1 => 'redhen_relation',
            2 => 'entityreference',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'redhen_engagement' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_engagement/redhen_engagement.module',
        'basename' => 'redhen_engagement.module',
        'name' => 'redhen_engagement',
        'info' => 
        array (
          'name' => 'RedHen Engagement',
          'description' => 'Provides RedHen contact engagement scoring.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen_contact',
          ),
          'files' => 
          array (
            0 => 'lib/redhen_engagement.entity.inc',
            1 => 'lib/redhen_engagement.metadata.inc',
            2 => 'lib/redhen_engagement.views.inc',
            3 => 'lib/redhen_engagement_score.entity.inc',
            4 => 'lib/redhen_engagement_score.ui_controller.inc',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => '7102',
        'version' => '7.x-1.7',
      ),
      'redhen' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/redhen.module',
        'basename' => 'redhen.module',
        'name' => 'redhen',
        'info' => 
        array (
          'name' => 'RedHen',
          'description' => 'Defines basic functionality common to all parts of the RedHen CRM.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'entity (>=1)',
          ),
          'files' => 
          array (
            0 => 'includes/redhen.admin.inc',
            1 => 'includes/redhen.forms.inc',
          ),
          'configure' => 'admin/config/redhen',
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'edgeryders_mentions_notifications' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/edgeryders_mentions_notifications/edgeryders_mentions_notifications.module',
        'basename' => 'edgeryders_mentions_notifications.module',
        'name' => 'edgeryders_mentions_notifications',
        'info' => 
        array (
          'name' => 'Edgeryders mentions notifications',
          'description' => 'Edgeryders mentions notifications',
          'core' => '7.x',
          'package' => 'Edgeryders',
          'version' => '7.x-1.0-dev',
          'project' => 'edgeryders_mentions_notifications',
          'dependencies' => 
          array (
            0 => 'text',
            1 => 'commons_notify',
            2 => 'variable',
            3 => 'variable_admin',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_instance' => 
            array (
              0 => 'message-edgeryders_mentions_comment-field_message_rendered_body',
              1 => 'message-edgeryders_mentions_comment-field_message_rendered_subject',
              2 => 'message-edgeryders_mentions_comment-field_target_comments',
              3 => 'message-edgeryders_mentions_comment-field_target_nodes',
              4 => 'message-edgeryders_mentions_comment-field_target_users',
              5 => 'message-edgeryders_mentions_node-field_message_rendered_body',
              6 => 'message-edgeryders_mentions_node-field_message_rendered_subject',
              7 => 'message-edgeryders_mentions_node-field_target_nodes',
              8 => 'message-edgeryders_mentions_node-field_target_users',
            ),
            'message_type' => 
            array (
              0 => 'edgeryders_mentions_comment',
              1 => 'edgeryders_mentions_node',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'commons_follow' => 'commons_follow',
              'commons_notify' => 'commons_notify',
              'ctools' => 'ctools',
              'entity' => 'entity',
              'entityreference' => 'entityreference',
              'features' => 'features',
              'message' => 'message',
              'strongarm' => 'strongarm',
            ),
            'variable' => 
            array (
              'field_bundle_settings_message__edgeryders_mentions_comment' => 'field_bundle_settings_message__edgeryders_mentions_comment',
              'field_bundle_settings_message__edgeryders_mentions_node' => 'field_bundle_settings_message__edgeryders_mentions_node',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-dev',
      ),
      'node_convert' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/node_convert/node_convert.module',
        'basename' => 'node_convert.module',
        'name' => 'node_convert',
        'info' => 
        array (
          'name' => 'Node Convert',
          'description' => 'Converts one or more nodes between different node types.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'node_convert.install',
            1 => 'node_convert.module',
            2 => 'node_convert.rules.inc',
            3 => 'node_convert.test',
            4 => 'includes/book.node_convert.inc',
            5 => 'includes/forum.node_convert.inc',
            6 => 'includes/panels_node.node_convert.inc',
            7 => 'includes/uc_product.node_convert.inc',
          ),
          'version' => '7.x-1.1',
          'project' => 'node_convert',
          'datestamp' => '1354643829',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'ckeditor_mentions' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/ckeditor_mentions/ckeditor_mentions.module',
        'basename' => 'ckeditor_mentions.module',
        'name' => 'ckeditor_mentions',
        'info' => 
        array (
          'name' => 'CKEditor Mentions',
          'description' => 'CKEditor plugin for user mentioning and inserting.',
          'package' => 'User interface',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'realname',
            1 => 'views',
          ),
          'version' => '7.x-1.2',
          'project' => 'ckeditor_mentions',
          'datestamp' => '1376829400',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.2',
      ),
      'context_og' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/context_og/context_og.module',
        'basename' => 'context_og.module',
        'name' => 'context_og',
        'info' => 
        array (
          'name' => 'Context OG',
          'description' => 'Provides Organic Groups conditions and reactions for the Context module.',
          'package' => 'Context',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'og',
            1 => 'og_context',
            2 => 'ctools',
            3 => 'context',
          ),
          'version' => '7.x-2.1',
          'project' => 'context_og',
          'datestamp' => '1355739999',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.1',
      ),
      'admin_views' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/admin_views/admin_views.module',
        'basename' => 'admin_views.module',
        'name' => 'admin_views',
        'info' => 
        array (
          'name' => 'Administration views',
          'description' => 'Replaces all system object management pages in Drupal core with real views.',
          'package' => 'Administration',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'views_bulk_operations (>=7.x-3.2)',
          ),
          'files' => 
          array (
            0 => 'plugins/views_plugin_display_system.inc',
            1 => 'plugins/views_plugin_access_menu.inc',
            2 => 'tests/admin_views.test',
          ),
          'version' => '7.x-1.3',
          'project' => 'admin_views',
          'datestamp' => '1401347628',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.3',
      ),
      'menu_block_export' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/menu_block/menu_block_export.module',
        'basename' => 'menu_block_export.module',
        'name' => 'menu_block_export',
        'info' => 
        array (
          'name' => 'Menu Block Export',
          'description' => 'Provides export interface for Menu block module.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'menu_block',
          ),
          'files' => 
          array (
            0 => 'menu_block_export.module',
            1 => 'menu_block_export.admin.inc',
          ),
          'configure' => 'admin/config/user-interface/menu-block/export',
          'version' => '7.x-2.4',
          'project' => 'menu_block',
          'datestamp' => '1399238030',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.4',
      ),
      'menu_block' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/menu_block/menu_block.module',
        'basename' => 'menu_block.module',
        'name' => 'menu_block',
        'info' => 
        array (
          'name' => 'Menu Block',
          'description' => 'Provides configurable blocks of menu items.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'menu (>7.11)',
          ),
          'configure' => 'admin/config/user-interface/menu-block',
          'version' => '7.x-2.4',
          'project' => 'menu_block',
          'datestamp' => '1399238030',
          'php' => '5.2.4',
        ),
        'schema_version' => '7202',
        'version' => '7.x-2.4',
      ),
      'backup_migrate' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/backup_migrate/backup_migrate.module',
        'basename' => 'backup_migrate.module',
        'name' => 'backup_migrate',
        'info' => 
        array (
          'name' => 'Backup and Migrate',
          'description' => 'Backup or migrate the Drupal Database quickly and without unnecessary data.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'backup_migrate.module',
            1 => 'backup_migrate.install',
            2 => 'includes/destinations.inc',
            3 => 'includes/profiles.inc',
            4 => 'includes/schedules.inc',
          ),
          'configure' => 'admin/config/system/backup_migrate',
          'version' => '7.x-2.8',
          'project' => 'backup_migrate',
          'datestamp' => '1383686305',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7205',
        'version' => '7.x-2.8',
      ),
      'chart_views' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/chart/chart_views/chart_views.module',
        'basename' => 'chart_views.module',
        'name' => 'chart_views',
        'info' => 
        array (
          'name' => 'Chart API Views Integration',
          'description' => 'Provides a Google Chart API Views style.',
          'package' => 'Charting',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'views/chart_views_plugin_style_chart.inc',
          ),
          'dependencies' => 
          array (
            0 => 'chart',
            1 => 'views',
          ),
          'version' => '7.x-1.1',
          'project' => 'chart',
          'datestamp' => '1314765120',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'system_charts' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/chart/system_charts/system_charts.module',
        'basename' => 'system_charts.module',
        'name' => 'system_charts',
        'info' => 
        array (
          'name' => 'Drupal System Charting',
          'description' => 'Charting for various core modules.',
          'package' => 'Charting',
          'core' => '7.x',
          'php' => '5',
          'dependencies' => 
          array (
            0 => 'chart',
          ),
          'version' => '7.x-1.1',
          'project' => 'chart',
          'datestamp' => '1314765120',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'chart' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/chart/chart.module',
        'basename' => 'chart.module',
        'name' => 'chart',
        'info' => 
        array (
          'name' => 'Chart API',
          'description' => 'Google Chart API integration.',
          'package' => 'Charting',
          'core' => '7.x',
          'php' => '5',
          'version' => '7.x-1.1',
          'project' => 'chart',
          'datestamp' => '1314765120',
          'dependencies' => 
          array (
          ),
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'entity_translation_isoptional' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/entity_translation_isoptional/entity_translation_isoptional.module',
        'basename' => 'entity_translation_isoptional.module',
        'name' => 'entity_translation_isoptional',
        'info' => 
        array (
          'name' => 'Entity Translation Is Optional',
          'description' => 'Makes entity_translation usable for simple translation management by instructing users to specify a language only when wanting their content to be translated.',
          'dependencies' => 
          array (
            0 => 'entity_translation',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => '',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => NULL,
      ),
      'time_tracker_timer' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/time_tracker/timer/time_tracker_timer.module',
        'basename' => 'time_tracker_timer.module',
        'name' => 'time_tracker_timer',
        'info' => 
        array (
          'name' => 'Time Tracker Timer',
          'description' => 'Provides a timer function for the time tracker module.',
          'package' => 'Time Tracker',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'time_tracker',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'time_tracker',
          'datestamp' => '1370449610',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'time_sheet' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/time_tracker/time_sheet/time_sheet.module',
        'basename' => 'time_sheet.module',
        'name' => 'time_sheet',
        'info' => 
        array (
          'name' => 'Time Sheet',
          'description' => 'Provides time sheet functionality for extra accountability.',
          'package' => 'Time Tracker',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'time_tracker',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'time_tracker',
          'datestamp' => '1370449610',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'time_estimate' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/time_tracker/time_estimate/time_estimate.module',
        'basename' => 'time_estimate.module',
        'name' => 'time_estimate',
        'info' => 
        array (
          'name' => 'Time Estimate',
          'description' => 'Provides time estimate functionality.',
          'package' => 'Time Tracker',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'time_tracker',
          ),
          'files' => 
          array (
            0 => 'time_estimate.admin.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'time_tracker',
          'datestamp' => '1370449610',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'time_tracker' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/time_tracker/time_tracker.module',
        'basename' => 'time_tracker.module',
        'name' => 'time_tracker',
        'info' => 
        array (
          'name' => 'Time Tracker',
          'description' => 'Provides time tracking functionality nodes and comments.',
          'package' => 'Time Tracker',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'views_calc',
            2 => 'entity',
            3 => 'date_popup',
            4 => 'field',
          ),
          'files' => 
          array (
            0 => 'time_tracker.admin.inc',
            1 => 'time_tracker.theme.inc',
            2 => 'time_tracker.inc',
            3 => 'time_tracker.rules.inc',
            4 => 'views/time_tracker_views_handler_field_numeric.inc',
            5 => 'views/time_tracker_views_handler_field_total_duration.inc',
            6 => 'views/time_tracker_views_handler_filter_date.inc',
            7 => 'views/time_tracker_views_handler_relationship.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'time_tracker',
          'datestamp' => '1370449610',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-1.x-dev',
      ),
      'piwik' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/piwik/piwik.module',
        'basename' => 'piwik.module',
        'name' => 'piwik',
        'info' => 
        array (
          'name' => 'Piwik Web Analytics',
          'description' => 'Adds Piwik javascript tracking code to all your site\'s pages.',
          'core' => '7.x',
          'package' => 'Statistics',
          'configure' => 'admin/config/system/piwik',
          'files' => 
          array (
            0 => 'piwik.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-2.5',
          'project' => 'piwik',
          'datestamp' => '1402151028',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7204',
        'version' => '7.x-2.5',
      ),
      'context_ui' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/context/context_ui/context_ui.module',
        'basename' => 'context_ui.module',
        'name' => 'context_ui',
        'info' => 
        array (
          'name' => 'Context UI',
          'description' => 'Provides a simple UI for settings up a site structure using Context.',
          'dependencies' => 
          array (
            0 => 'context',
          ),
          'package' => 'Context',
          'core' => '7.x',
          'configure' => 'admin/structure/context',
          'files' => 
          array (
            0 => 'context.module',
            1 => 'tests/context_ui.test',
          ),
          'version' => '7.x-3.2',
          'project' => 'context',
          'datestamp' => '1390931314',
          'php' => '5.2.4',
        ),
        'schema_version' => '6004',
        'version' => '7.x-3.2',
      ),
      'context_layouts' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/context/context_layouts/context_layouts.module',
        'basename' => 'context_layouts.module',
        'name' => 'context_layouts',
        'info' => 
        array (
          'name' => 'Context layouts',
          'description' => 'Allow theme layer to provide multiple region layouts and integrate with context.',
          'dependencies' => 
          array (
            0 => 'context',
          ),
          'package' => 'Context',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'plugins/context_layouts_reaction_block.inc',
          ),
          'version' => '7.x-3.2',
          'project' => 'context',
          'datestamp' => '1390931314',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.2',
      ),
      'context' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/context/context.module',
        'basename' => 'context.module',
        'name' => 'context',
        'info' => 
        array (
          'name' => 'Context',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'description' => 'Provide modules with a cache that lasts for a single page request.',
          'package' => 'Context',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'tests/context.test',
            1 => 'tests/context.conditions.test',
            2 => 'tests/context.reactions.test',
          ),
          'version' => '7.x-3.2',
          'project' => 'context',
          'datestamp' => '1390931314',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-3.2',
      ),
      'image_captcha' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/captcha/image_captcha/image_captcha.module',
        'basename' => 'image_captcha.module',
        'name' => 'image_captcha',
        'info' => 
        array (
          'name' => 'Image CAPTCHA',
          'description' => 'Provides an image based CAPTCHA.',
          'package' => 'Spam control',
          'dependencies' => 
          array (
            0 => 'captcha',
          ),
          'core' => '7.x',
          'configure' => 'admin/config/people/captcha/image_captcha',
          'files' => 
          array (
            0 => 'image_captcha.install',
            1 => 'image_captcha.module',
            2 => 'image_captcha.admin.inc',
            3 => 'image_captcha.user.inc',
          ),
          'version' => '7.x-1.0',
          'project' => 'captcha',
          'datestamp' => '1372203950',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0',
      ),
      'captcha' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/captcha/captcha.module',
        'basename' => 'captcha.module',
        'name' => 'captcha',
        'info' => 
        array (
          'name' => 'CAPTCHA',
          'description' => 'Base CAPTCHA module for adding challenges to arbitrary forms.',
          'package' => 'Spam control',
          'core' => '7.x',
          'configure' => 'admin/config/people/captcha',
          'files' => 
          array (
            0 => 'captcha.module',
            1 => 'captcha.inc',
            2 => 'captcha.admin.inc',
            3 => 'captcha.install',
            4 => 'captcha.test',
          ),
          'version' => '7.x-1.0',
          'project' => 'captcha',
          'datestamp' => '1372203950',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-1.0',
      ),
      'admin_menu_toolbar' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/admin_menu/admin_menu_toolbar/admin_menu_toolbar.module',
        'basename' => 'admin_menu_toolbar.module',
        'name' => 'admin_menu_toolbar',
        'info' => 
        array (
          'name' => 'Administration menu Toolbar style',
          'description' => 'A better Toolbar.',
          'package' => 'Administration',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'admin_menu',
          ),
          'version' => '7.x-3.0-rc4',
          'project' => 'admin_menu',
          'datestamp' => '1359651687',
          'php' => '5.2.4',
        ),
        'schema_version' => '6300',
        'version' => '7.x-3.0-rc4',
      ),
      'admin_devel' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/admin_menu/admin_devel/admin_devel.module',
        'basename' => 'admin_devel.module',
        'name' => 'admin_devel',
        'info' => 
        array (
          'name' => 'Administration Development tools',
          'description' => 'Administration and debugging functionality for developers and site builders.',
          'package' => 'Administration',
          'core' => '7.x',
          'scripts' => 
          array (
            0 => 'admin_devel.js',
          ),
          'version' => '7.x-3.0-rc4',
          'project' => 'admin_menu',
          'datestamp' => '1359651687',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.0-rc4',
      ),
      'admin_menu' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/admin_menu/admin_menu.module',
        'basename' => 'admin_menu.module',
        'name' => 'admin_menu',
        'info' => 
        array (
          'name' => 'Administration menu',
          'description' => 'Provides a dropdown menu to most administrative tasks and other common destinations (to users with the proper permissions).',
          'package' => 'Administration',
          'core' => '7.x',
          'configure' => 'admin/config/administration/admin_menu',
          'dependencies' => 
          array (
            0 => 'system (>7.10)',
          ),
          'files' => 
          array (
            0 => 'tests/admin_menu.test',
          ),
          'version' => '7.x-3.0-rc4',
          'project' => 'admin_menu',
          'datestamp' => '1359651687',
          'php' => '5.2.4',
        ),
        'schema_version' => '7304',
        'version' => '7.x-3.0-rc4',
      ),
      'imce' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/imce/imce.module',
        'basename' => 'imce.module',
        'name' => 'imce',
        'info' => 
        array (
          'name' => 'IMCE',
          'description' => 'An image/file uploader and browser supporting personal directories and user quota.',
          'core' => '7.x',
          'package' => 'Media',
          'configure' => 'admin/config/media/imce',
          'version' => '7.x-1.8',
          'project' => 'imce',
          'datestamp' => '1387302359',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'version' => '7.x-1.8',
      ),
      'views_rdf' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_datasource/views_rdf.module',
        'basename' => 'views_rdf.module',
        'name' => 'views_rdf',
        'info' => 
        array (
          'name' => 'Views RDF',
          'description' => 'Views style plugin to render node content as RDF.',
          'package' => 'Views',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views/plugins/views_plugin_style_rdf.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'views_datasource',
          'datestamp' => '1393752505',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'views_xml' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_datasource/views_xml.module',
        'basename' => 'views_xml.module',
        'name' => 'views_xml',
        'info' => 
        array (
          'name' => 'Views XML',
          'description' => 'Views style plugin to render node content as XML.',
          'package' => 'Views',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views/plugins/views_plugin_style_xml.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'views_datasource',
          'datestamp' => '1393752505',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'views_xhtml' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_datasource/views_xhtml.module',
        'basename' => 'views_xhtml.module',
        'name' => 'views_xhtml',
        'info' => 
        array (
          'name' => 'Views XHTML',
          'description' => 'Views style plugin to render node content as XHTML microformats.',
          'package' => 'Views',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views/plugins/views_plugin_style_xhtml.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'views_datasource',
          'datestamp' => '1393752505',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'views_json' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_datasource/views_json.module',
        'basename' => 'views_json.module',
        'name' => 'views_json',
        'info' => 
        array (
          'name' => 'Views JSON',
          'description' => 'Views style plugin to render node content as JSON.',
          'package' => 'Views',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views/plugins/views_plugin_style_json.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'views_datasource',
          'datestamp' => '1393752505',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'auth_ssl_redirect' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/auth_ssl_redirect/auth_ssl_redirect.module',
        'basename' => 'auth_ssl_redirect.module',
        'name' => 'auth_ssl_redirect',
        'info' => 
        array (
          'name' => 'Auth SSL Redirect',
          'description' => 'Redirect authenticated users to HTTPS when they visit HTTP',
          'core' => '7.x',
          'version' => '7.x-1.2',
          'project' => 'auth_ssl_redirect',
          'datestamp' => '1339691476',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.2',
      ),
      'field_group_test' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/field_group/tests/field_group_test.module',
        'basename' => 'field_group_test.module',
        'name' => 'field_group_test',
        'info' => 
        array (
          'name' => 'Fieldgroup Test',
          'description' => 'Test module for fieldgroup',
          'core' => '7.x',
          'package' => 'Fieldgroup',
          'version' => '7.x-1.3',
          'project' => 'field_group',
          'datestamp' => '1380124361',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.3',
      ),
      'field_group' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/field_group/field_group.module',
        'basename' => 'field_group.module',
        'name' => 'field_group',
        'info' => 
        array (
          'name' => 'Fieldgroup',
          'description' => 'Fieldgroup',
          'package' => 'Fields',
          'dependencies' => 
          array (
            0 => 'field',
            1 => 'ctools',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'field_group.install',
            1 => 'field_group.module',
            2 => 'field_group.field_ui.inc',
            3 => 'field_group.form.inc',
            4 => 'field_group.features.inc',
            5 => 'tests/field_group.ui.test',
            6 => 'tests/field_group.display.test',
          ),
          'version' => '7.x-1.3',
          'project' => 'field_group',
          'datestamp' => '1380124361',
          'php' => '5.2.4',
        ),
        'schema_version' => '7006',
        'version' => '7.x-1.3',
      ),
      'og_menu_single' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/og_menu_single/og_menu_single.module',
        'basename' => 'og_menu_single.module',
        'name' => 'og_menu_single',
        'info' => 
        array (
          'name' => 'OG Menu Single',
          'description' => 'Provides a single custom menu per organic group',
          'files' => 
          array (
            0 => 'og_menu.module',
            1 => 'tests/og_menu_singleBase.test',
          ),
          'dependencies' => 
          array (
            0 => 'menu',
            1 => 'og (2.x)',
            2 => 'og_context',
          ),
          'package' => 'Organic groups',
          'core' => '7.x',
          'version' => '7.x-1.0-beta1',
          'project' => 'og_menu_single',
          'datestamp' => '1377799596',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta1',
      ),
      'privatemsg_filter' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg_filter/privatemsg_filter.module',
        'basename' => 'privatemsg_filter.module',
        'name' => 'privatemsg_filter',
        'info' => 
        array (
          'name' => 'Privatemsg filter',
          'description' => 'Allow users to filter messages using tags or other criteria.',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
          ),
          'files' => 
          array (
            0 => 'privatemsg_filter.module',
            1 => 'privatemsg_filter.test',
          ),
          'configure' => 'admin/config/messaging/privatemsg/filter',
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'version' => '7.x-1.4',
      ),
      'pm_email_notify' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/pm_email_notify/pm_email_notify.module',
        'basename' => 'pm_email_notify.module',
        'name' => 'pm_email_notify',
        'info' => 
        array (
          'name' => 'Privatemsg Email Notification',
          'description' => 'Notifies users about new Private Messages via Email.',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
          ),
          'files' => 
          array (
            0 => 'pm_email_notify.module',
          ),
          'configure' => 'admin/config/messaging/privatemsg/notify',
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-1.4',
      ),
      'pm_block_user' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/pm_block_user/pm_block_user.module',
        'basename' => 'pm_block_user.module',
        'name' => 'pm_block_user',
        'info' => 
        array (
          'name' => 'Block user messages',
          'description' => 'Allows users to block other users from sending them messages.',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
          ),
          'files' => 
          array (
            0 => 'pm_block_user.module',
            1 => 'pm_block_user.pages.inc',
            2 => 'pm_block_user.test',
          ),
          'configure' => 'admin/config/messaging/privatemsg/block',
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'privatemsg_rules' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg_rules/privatemsg_rules.module',
        'basename' => 'privatemsg_rules.module',
        'name' => 'privatemsg_rules',
        'info' => 
        array (
          'name' => 'Privatemsg Rules Integrations',
          'description' => 'Integrates Rules with Privatemsg, allows to act on message events and send private messages',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
            1 => 'privatemsg_filter',
            2 => 'rules',
          ),
          'files' => 
          array (
            0 => 'privatemsg_rules.rules.inc',
          ),
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'privatemsg_realname' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg_realname/privatemsg_realname.module',
        'basename' => 'privatemsg_realname.module',
        'name' => 'privatemsg_realname',
        'info' => 
        array (
          'name' => 'Privatemsg Realname Integration',
          'description' => 'Provides reverse lookup for realnames',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
            1 => 'realname',
          ),
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'privatemsg_roles' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg_roles/privatemsg_roles.module',
        'basename' => 'privatemsg_roles.module',
        'name' => 'privatemsg_roles',
        'info' => 
        array (
          'name' => 'Privatemsg roles',
          'description' => 'Allows to send message to all members of a role.',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
          ),
          'files' => 
          array (
            0 => 'privatemsg_roles.module',
            1 => 'privatemsg_roles.test',
          ),
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'privatemsg_limits' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg_limits/privatemsg_limits.module',
        'basename' => 'privatemsg_limits.module',
        'name' => 'privatemsg_limits',
        'info' => 
        array (
          'name' => 'Privatemsg Limits',
          'description' => 'Allows to define limits for private messages including amount of sent messages per timeframe and number of recipients',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
          ),
          'files' => 
          array (
            0 => 'privatemsg_limits.test',
          ),
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'privatemsg' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg.module',
        'basename' => 'privatemsg.module',
        'name' => 'privatemsg',
        'info' => 
        array (
          'name' => 'Private messages',
          'description' => 'Allow private messages between users.',
          'package' => 'Mail',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'privatemsg.module',
            1 => 'privatemsg.test',
            2 => 'views/views_handler_field_privatemsg_link.inc',
            3 => 'views/privatemsg.views.inc',
            4 => 'privatemsg.theme.inc',
            5 => 'privatemsg.pages.inc',
            6 => 'privatemsg.admin.inc',
          ),
          'configure' => 'admin/config/messaging/privatemsg',
          'test_dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7006',
        'version' => '7.x-1.4',
      ),
      'rules_link' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules_link/rules_link.module',
        'basename' => 'rules_link.module',
        'name' => 'rules_link',
        'info' => 
        array (
          'name' => 'Rules Link',
          'description' => 'Attach link to entities for triggering Rules components.',
          'package' => 'Rules',
          'core' => '7.x',
          'configure' => 'admin/config/workflow/rules_links',
          'dependencies' => 
          array (
            0 => 'rules',
          ),
          'files' => 
          array (
            0 => 'rules_link.views.inc',
            1 => 'rules_link.admin.inc',
            2 => 'rules_link.test',
          ),
          'version' => '7.x-1.1',
          'project' => 'rules_link',
          'datestamp' => '1409148229',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'rules_link_i18n' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules_link/rules_link_i18n.module',
        'basename' => 'rules_link_i18n.module',
        'name' => 'rules_link_i18n',
        'info' => 
        array (
          'name' => 'Rules link translation',
          'description' => 'Allows translating Rules links.',
          'dependencies' => 
          array (
            0 => 'rules_link',
            1 => 'i18n_string',
          ),
          'package' => 'Multilingual - Internationalization',
          'core' => '7.x',
          'version' => '7.x-1.1',
          'project' => 'rules_link',
          'datestamp' => '1409148229',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'front_page' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/front/front_page.module',
        'basename' => 'front_page.module',
        'name' => 'front_page',
        'info' => 
        array (
          'name' => 'Front Page',
          'description' => 'Allows site admins setup custom front pages for the site.',
          'package' => 'Administration',
          'core' => '7.x',
          'configure' => 'admin/config/front/settings',
          'version' => '7.x-2.4',
          'project' => 'front',
          'datestamp' => '1370619956',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'version' => '7.x-2.4',
      ),
      'securelogin' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/securelogin/securelogin.module',
        'basename' => 'securelogin.module',
        'name' => 'securelogin',
        'info' => 
        array (
          'name' => 'Secure Login',
          'description' => 'Enables secure login.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'securelogin.admin.inc',
            1 => 'securelogin.install',
            2 => 'securelogin.module',
          ),
          'configure' => 'admin/config/people/securelogin',
          'version' => '7.x-1.4',
          'project' => 'securelogin',
          'datestamp' => '1360634214',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-1.4',
      ),
      'migrate_d2d_edgeryders' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/migrate_d2d_edgeryders/migrate_d2d_edgeryders.module',
        'basename' => 'migrate_d2d_edgeryders.module',
        'name' => 'migrate_d2d_edgeryders',
        'info' => 
        array (
          'name' => 'Edgeryders D6 to D7 migration',
          'description' => 'Migrate edgeryders.eu content from D6 site to D7.',
          'package' => 'Development',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'migrate',
            1 => 'migrate_d2d',
          ),
          'files' => 
          array (
            0 => 'migrations.inc',
          ),
          'version' => '7.x-1.0',
          'project' => 'migrate_d2d_edgeryders',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0',
      ),
      'services_basic_auth' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services_basic_auth/services_basic_auth.module',
        'basename' => 'services_basic_auth.module',
        'name' => 'services_basic_auth',
        'info' => 
        array (
          'name' => 'Services basic authentication',
          'description' => 'Provides HTTP basic authentication for the services module',
          'core' => '7.x',
          'package' => 'Services - authentication',
          'dependencies' => 
          array (
            0 => 'services',
          ),
          'version' => '7.x-1.1',
          'project' => 'services_basic_auth',
          'datestamp' => '1355402932',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'elfinder_bueditor' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/elfinder/modules/elfinder_bueditor/elfinder_bueditor.module',
        'basename' => 'elfinder_bueditor.module',
        'name' => 'elfinder_bueditor',
        'info' => 
        array (
          'name' => 'elFinder BUEditor integration',
          'description' => 'Adding elFinder to BUEditor Insert Image dialog',
          'package' => 'User interface',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'bueditor',
            1 => 'elfinder',
          ),
          'version' => '7.x-2.x-dev',
          'project' => 'elfinder',
          'datestamp' => '1387749813',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.x-dev',
      ),
      'elfinder_ffsel' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/elfinder/modules/elfinder_ffsel/elfinder_ffsel.module',
        'basename' => 'elfinder_ffsel.module',
        'name' => 'elfinder_ffsel',
        'info' => 
        array (
          'name' => 'elFinder File Field Source',
          'description' => 'File Field Sources elFinder connector',
          'package' => 'User interface',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'filefield_sources',
            1 => 'elfinder',
          ),
          'version' => '7.x-2.x-dev',
          'project' => 'elfinder',
          'datestamp' => '1387749813',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.x-dev',
      ),
      'elfinder' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/elfinder/elfinder.module',
        'basename' => 'elfinder.module',
        'name' => 'elfinder',
        'info' => 
        array (
          'name' => 'elFinder',
          'description' => 'AJAX file manager with Wysiwyg API capable editors support.',
          'package' => 'User interface',
          'configure' => 'admin/config/media/elfinder',
          'core' => '7.x',
          'version' => '7.x-2.x-dev',
          'project' => 'elfinder',
          'datestamp' => '1387749813',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7102',
        'version' => '7.x-2.x-dev',
      ),
      'reroute_email' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/reroute_email/reroute_email.module',
        'basename' => 'reroute_email.module',
        'name' => 'reroute_email',
        'info' => 
        array (
          'name' => 'Reroute emails',
          'description' => 'Reroutes emails send from the site to a predefined email. Useful for test sites.',
          'package' => 'Development',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'reroute_email.test',
          ),
          'configure' => 'admin/config/development/reroute_email',
          'version' => '7.x-1.1+28-dev',
          'project' => 'reroute_email',
          'datestamp' => '1382643190',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'version' => '7.x-1.1+28-dev',
      ),
      'riddler' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/riddler/riddler.module',
        'basename' => 'riddler.module',
        'name' => 'riddler',
        'info' => 
        array (
          'name' => 'Captcha Riddler',
          'description' => 'Allows site administrators to add a simple question to form validation',
          'core' => '7.x',
          'package' => 'Spam control',
          'dependencies' => 
          array (
            0 => 'captcha',
          ),
          'configure' => 'admin/user/captcha/riddler',
          'version' => '7.x-1.2',
          'project' => 'riddler',
          'datestamp' => '1305750116',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.2',
      ),
      'views_calc' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_calc/views_calc.module',
        'basename' => 'views_calc.module',
        'name' => 'views_calc',
        'info' => 
        array (
          'name' => 'Views Calc',
          'description' => 'This module will allow you to add calculated fields to views tables and compute columns of numeric data in a views table.',
          'core' => '7.x',
          'package' => 'Views',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views_calc_table.inc',
            1 => 'theme.inc',
            2 => 'views-calc-table.tpl.php',
            3 => 'views_calc.install',
            4 => 'views_calc.module',
            5 => 'views_calc.views.inc',
            6 => 'views_calc_field_handler.inc',
            7 => 'views_calc_handler_sort.inc',
          ),
          'version' => '7.x-1.1',
          'project' => 'views_calc',
          'datestamp' => '1395748160',
          'php' => '5.2.4',
        ),
        'schema_version' => '6000',
        'version' => '7.x-1.1',
      ),
      'auto_index' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/auto_indexer/auto_index.module',
        'basename' => 'auto_index.module',
        'name' => 'auto_index',
        'info' => 
        array (
          'name' => 'Auto-Index',
          'description' => 'Automatically updates the search index after a node has been added/updated.',
          'dependencies' => 
          array (
            0 => 'search',
          ),
          'package' => 'Search',
          'core' => '7.x',
          'version' => '7.x-1.2',
          'project' => 'auto_indexer',
          'datestamp' => '1433858882',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.2',
      ),
      'metatag_devel' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_devel/metatag_devel.module',
        'basename' => 'metatag_devel.module',
        'name' => 'metatag_devel',
        'info' => 
        array (
          'name' => 'Metatag:Devel',
          'description' => 'Provides development / debugging functionality for the Metatag module. Integrates with Devel Generate.',
          'package' => 'Development',
          'core' => '7.x',
          'tags' => 
          array (
            0 => 'developer',
          ),
          'dependencies' => 
          array (
            0 => 'metatag',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_twitter_cards' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_twitter_cards/metatag_twitter_cards.module',
        'basename' => 'metatag_twitter_cards.module',
        'name' => 'metatag_twitter_cards',
        'info' => 
        array (
          'name' => 'Metatag: Twitter Cards',
          'description' => 'Provides support for Twitter\'s Card meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_views' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_views/metatag_views.module',
        'basename' => 'metatag_views.module',
        'name' => 'metatag_views',
        'info' => 
        array (
          'name' => 'Metatag: Views',
          'description' => 'Provides Metatag integration within the Views interface.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag',
            1 => 'views',
          ),
          'files' => 
          array (
            0 => 'metatag_views_plugin_display_extender_metatags.inc',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_panels' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_panels/metatag_panels.module',
        'basename' => 'metatag_panels.module',
        'name' => 'metatag_panels',
        'info' => 
        array (
          'name' => 'Metatag: Panels',
          'description' => 'Provides Metatag integration within the Panels interface.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'metatag',
            2 => 'panels',
            3 => 'token',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_opengraph' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_opengraph/metatag_opengraph.module',
        'basename' => 'metatag_opengraph.module',
        'name' => 'metatag_opengraph',
        'info' => 
        array (
          'name' => 'Metatag: Open Graph',
          'description' => 'Provides support for open graph meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_dc' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_dc/metatag_dc.module',
        'basename' => 'metatag_dc.module',
        'name' => 'metatag_dc',
        'info' => 
        array (
          'name' => 'Metatag: Dublin Core',
          'description' => 'Provides the fifteen <a href="http://dublincore.org/documents/dces/">Dublin Core Metadata Element Set 1.1</a> meta tags from the <a href="http://dublincore.org/">Dublin Core Metadata Institute</a>.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_context' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_context/metatag_context.module',
        'basename' => 'metatag_context.module',
        'name' => 'metatag_context',
        'info' => 
        array (
          'name' => 'Metatag: Context',
          'description' => 'Assigned Metatag using Context definitions, allowing them to be assigned by path and other criteria.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'context',
            1 => 'metatag',
          ),
          'files' => 
          array (
            0 => 'metatag_context.test',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag.module',
        'basename' => 'metatag.module',
        'name' => 'metatag',
        'info' => 
        array (
          'name' => 'Metatag',
          'description' => 'Adds support and an API to implement meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'system (>=7.15)',
            1 => 'ctools',
            2 => 'token',
          ),
          'configure' => 'admin/config/search/metatags',
          'files' => 
          array (
            0 => 'metatag.inc',
            1 => 'metatag.migrate.inc',
            2 => 'metatag.test',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => '7022',
        'version' => '7.x-1.0-beta9',
      ),
      'googleanalytics' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/google_analytics/googleanalytics.module',
        'basename' => 'googleanalytics.module',
        'name' => 'googleanalytics',
        'info' => 
        array (
          'name' => 'Google Analytics',
          'description' => 'Allows your site to be tracked by Google Analytics by adding a Javascript tracking code to every page.',
          'core' => '7.x',
          'package' => 'Statistics',
          'configure' => 'admin/config/system/googleanalytics',
          'files' => 
          array (
            0 => 'googleanalytics.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-1.4',
          'project' => 'google_analytics',
          'datestamp' => '1382021586',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7007',
        'version' => '7.x-1.4',
      ),
      'og_token' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/og_token/og_token.module',
        'basename' => 'og_token.module',
        'name' => 'og_token',
        'info' => 
        array (
          'name' => 'OG Token',
          'description' => 'Provides a token to retrieve Organic Groups\' groups audience labels',
          'core' => '7.x',
          'package' => 'Organic groups',
          'dependencies' => 
          array (
            0 => 'og',
            1 => 'token',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => NULL,
      ),
      'comment_alter' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/comment_alter/comment_alter.module',
        'basename' => 'comment_alter.module',
        'name' => 'comment_alter',
        'info' => 
        array (
          'name' => 'Comment alter',
          'description' => 'Provides UI to alter nodes\' parameters from comment forms.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'comment',
            1 => 'diff (3.x)',
          ),
          'files' => 
          array (
            0 => 'comment_alter.test',
          ),
          'version' => '7.x-1.0-rc4+23-dev',
          'project' => 'comment_alter',
          'datestamp' => '1395681268',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc4+23-dev',
      ),
      'save_edit' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/save_edit/save_edit.module',
        'basename' => 'save_edit.module',
        'name' => 'save_edit',
        'info' => 
        array (
          'name' => 'Save & Edit',
          'description' => 'Gives a "<a href="http://drupal.org/project/save_edit">Save & Edit</a>" button on node pages. No Kittens were harmed during the creation of this module.',
          'package' => 'Administration',
          'core' => '7.x',
          'configure' => 'admin/config/content/save-edit',
          'version' => '7.x-1.0-beta1',
          'project' => 'save_edit',
          'datestamp' => '1340830936',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta1',
      ),
      'mentions' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/mentions/mentions.module',
        'basename' => 'mentions.module',
        'name' => 'mentions',
        'info' => 
        array (
          'name' => 'Mentions',
          'description' => 'Adds Twitter like @username linking and tracking features.',
          'core' => '7.x',
          'package' => 'Filters',
          'configure' => 'admin/config/content/mentions',
          'dependencies' => 
          array (
            0 => 'filter',
          ),
          'files' => 
          array (
            0 => 'includes/views/handlers/mentions_views_handler_field_content.inc',
            1 => 'includes/views/handlers/mentions_views_handler_field_link.inc',
            2 => 'includes/views/handlers/mentions_views_handler_field_title.inc',
            3 => 'tests/mentions.test',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'mentions',
          'datestamp' => '1395199456',
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'version' => '7.x-1.x-dev',
      ),
      'edgesense' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/contrib/edgesense/edgesense.module',
        'basename' => 'edgesense.module',
        'name' => 'edgesense',
        'info' => 
        array (
          'name' => 'Edgesense',
          'description' => 'Social network analytics for Drupal communities.',
          'version' => '0.99.5',
          'core' => '7.x',
          'configure' => 'admin/edgesense',
          'dependencies' => 
          array (
            0 => 'views_json',
          ),
          'files' => 
          array (
            0 => 'edgesense.views.inc',
            1 => 'edgesense_views_access_plugin.inc',
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '0.99.5',
      ),
      'google_analytics_views' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/google_analytics_reports/google_analytics_views/google_analytics_views.module',
        'basename' => 'google_analytics_views.module',
        'name' => 'google_analytics_views',
        'info' => 
        array (
          'name' => 'Google Analytics Views',
          'package' => 'Statistics',
          'description' => 'API to access statistics from the Google Analytics Data Export API.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'google_analytics_api',
          ),
          'files' => 
          array (
            0 => 'google_analytics_views.module',
            1 => 'google_analytics_views.views.inc',
            2 => 'plugins/google_analytics_plugin_query_google_analytics.inc',
            3 => 'handlers/google_analytics_handler_filter_startend.inc',
            4 => 'handlers/google_analytics_handler_filter_string.inc',
            5 => 'handlers/google_analytics_handler_filter_numeric.inc',
            6 => 'handlers/google_analytics_handler_field_string.inc',
            7 => 'handlers/google_analytics_handler_argument_string.inc',
          ),
          'version' => '7.x-3.x-dev',
          'project' => 'google_analytics_reports',
          'datestamp' => '1380581200',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.x-dev',
      ),
      'google_analytics_reports' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/google_analytics_reports/google_analytics_reports/google_analytics_reports.module',
        'basename' => 'google_analytics_reports.module',
        'name' => 'google_analytics_reports',
        'info' => 
        array (
          'name' => 'Google Analytics Reports',
          'package' => 'Statistics',
          'description' => 'Provides interface to access Google Analytics API statistics.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'google_analytics_api',
            1 => 'chart',
          ),
          'files' => 
          array (
            0 => 'google_analytics_reports.blocks.inc',
            1 => 'google_analytics_reports.css',
            2 => 'google_analytics_reports.install',
            3 => 'google_analytics_reports.module',
            4 => 'google_analytics_reports.pages.inc',
            5 => 'google_analytics_reports.theme.inc',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'google_analytics_reports.css',
            ),
          ),
          'scripts' => 
          array (
            0 => 'google_analytics_reports.js',
          ),
          'version' => '7.x-3.x-dev',
          'project' => 'google_analytics_reports',
          'datestamp' => '1380581200',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.x-dev',
      ),
      'google_analytics_api' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/google_analytics_reports/google_analytics_api.module',
        'basename' => 'google_analytics_api.module',
        'name' => 'google_analytics_api',
        'info' => 
        array (
          'name' => 'Google Analytics API',
          'package' => 'Statistics',
          'description' => 'API to access statistics from the Google Analytics Data Export API.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'oauth_common',
          ),
          'files' => 
          array (
            0 => 'GAFeed.lib.inc',
            1 => 'google_analytics_api.install',
            2 => 'google_analytics_api.module',
            3 => 'google_analytics_api.pages.inc',
          ),
          'configure' => 'admin/config/system/google-analytics-reports',
          'version' => '7.x-3.x-dev',
          'project' => 'google_analytics_reports',
          'datestamp' => '1380581200',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.x-dev',
      ),
      'l10n_update' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/l10n_update/l10n_update.module',
        'basename' => 'l10n_update.module',
        'name' => 'l10n_update',
        'info' => 
        array (
          'name' => 'Localization update',
          'description' => 'Provides automatic downloads and updates for translations.',
          'dependencies' => 
          array (
            0 => 'locale',
          ),
          'core' => '7.x',
          'package' => 'Multilingual',
          'files' => 
          array (
            0 => 'includes/gettext/PoHeader.php',
            1 => 'includes/gettext/PoItem.php',
            2 => 'includes/gettext/PoMemoryWriter.php',
            3 => 'includes/gettext/PoMetadataInterface.php',
            4 => 'includes/gettext/PoReaderInterface.php',
            5 => 'includes/gettext/PoStreamInterface.php',
            6 => 'includes/gettext/PoStreamReader.php',
            7 => 'includes/gettext/PoStreamWriter.php',
            8 => 'includes/gettext/PoWriterInterface.php',
            9 => 'includes/locale/Gettext.php',
            10 => 'includes/locale/PoDatabaseReader.php',
            11 => 'includes/locale/PoDatabaseWriter.php',
            12 => 'includes/locale/SourceString.php',
            13 => 'includes/locale/StringBase.php',
            14 => 'includes/locale/StringDatabaseStorage.php',
            15 => 'includes/locale/StringInterface.php',
            16 => 'includes/locale/StringStorageException.php',
            17 => 'includes/locale/StringStorageInterface.php',
            18 => 'includes/locale/TranslationString.php',
            19 => 'includes/locale/TranslationsStreamWrapper.php',
            20 => 'tests/L10nUpdateCronTest.test',
            21 => 'tests/L10nUpdateInterfaceTest.test',
            22 => 'tests/L10nUpdateTest.test',
            23 => 'tests/L10nUpdateTestBase.test',
          ),
          'version' => '7.x-2.0-rc1',
          'project' => 'l10n_update',
          'datestamp' => '1407338629',
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'version' => '7.x-2.0-rc1',
      ),
      'content_experiments' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/content_experiments/content_experiments.module',
        'basename' => 'content_experiments.module',
        'name' => 'content_experiments',
        'info' => 
        array (
          'name' => 'Google Content Experiments',
          'description' => 'Allows inserting Google Content Experiments code in the header of any node page view.',
          'core' => '7.x',
          'configure' => 'admin/config/system/content-experiments',
          'files' => 
          array (
            0 => 'content_experiments.module',
            1 => 'content_experiments.admin.inc',
            2 => 'content_experiments.install',
          ),
          'version' => '7.x-1.4',
          'project' => 'content_experiments',
          'datestamp' => '1374871571',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'special_menu_items' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/special_menu_items/special_menu_items.module',
        'basename' => 'special_menu_items.module',
        'name' => 'special_menu_items',
        'info' => 
        array (
          'name' => 'Special menu items',
          'description' => 'Allow users to add placeholder and/or separator menu items.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'menu',
          ),
          'configure' => 'admin/config/system/special_menu_items',
          'version' => '7.x-2.0',
          'project' => 'special_menu_items',
          'datestamp' => '1346788411',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-2.0',
      ),
      'comment_goodness' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/comment_goodness/comment_goodness.module',
        'basename' => 'comment_goodness.module',
        'name' => 'comment_goodness',
        'info' => 
        array (
          'name' => 'Comment goodness',
          'description' => 'Provides comment sorting, comment form placement and comment form configuration settings',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'comment',
          ),
          'files' => 
          array (
            0 => 'tests/comment_goodness.test',
          ),
          'version' => '7.x-1.4',
          'project' => 'comment_goodness',
          'datestamp' => '1351554675',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'filefield_sources' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/filefield_sources/filefield_sources.module',
        'basename' => 'filefield_sources.module',
        'name' => 'filefield_sources',
        'info' => 
        array (
          'name' => 'File Field Sources',
          'description' => 'Extends File fields to allow referencing of existing files, remote files, and server files.',
          'dependencies' => 
          array (
            0 => 'file',
          ),
          'package' => 'Fields',
          'core' => '7.x',
          'version' => '7.x-1.9',
          'project' => 'filefield_sources',
          'datestamp' => '1383155428',
          'php' => '5.2.4',
        ),
        'schema_version' => '6001',
        'version' => '7.x-1.9',
      ),
      'edgeryders_users_overrides' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/edgeryders_users_overrides/edgeryders_users_overrides.module',
        'basename' => 'edgeryders_users_overrides.module',
        'name' => 'edgeryders_users_overrides',
        'info' => 
        array (
          'name' => 'Edgeryders users overrides',
          'description' => 'Edgeryders user settings overriden by Drupal Commons',
          'core' => '7.x',
          'package' => 'Edgeryders',
          'version' => '7.x-1.0-dev',
          'project' => 'edgeryders_users_overrides',
          'dependencies' => 
          array (
            0 => 'features_override',
            1 => 'realname',
          ),
          'features' => 
          array (
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'features_override_items' => 
            array (
              0 => 'variable.realname_pattern',
            ),
            'features_overrides' => 
            array (
              0 => 'variable.realname_pattern.value',
            ),
            'user_permission' => 
            array (
              0 => 'administer realname',
              1 => 'execute realname_action_realname_update',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'actions_permissions' => 'actions_permissions',
              'commons_profile_base' => 'commons_profile_base',
              'features' => 'features',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-dev',
      ),
      'bef_test_content' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/better_exposed_filters/tests/bef_test_content/bef_test_content.module',
        'basename' => 'bef_test_content.module',
        'name' => 'bef_test_content',
        'info' => 
        array (
          'name' => 'BEF Test Content',
          'description' => 'Content and Views for testing Better Exposed Filters.',
          'core' => '7.x',
          'package' => 'BEF Tests',
          'php' => '5.2.4',
          'dependencies' => 
          array (
            0 => 'better_exposed_filters',
            1 => 'date',
            2 => 'features',
            3 => 'list',
            4 => 'number',
            5 => 'taxonomy',
            6 => 'text',
            7 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:1',
            ),
            'field_base' => 
            array (
              0 => 'body',
              1 => 'field_date',
              2 => 'field_integer',
              3 => 'field_letters',
              4 => 'field_location',
              5 => 'field_numbers',
              6 => 'field_price',
            ),
            'field_instance' => 
            array (
              0 => 'node-bef_test-body',
              1 => 'node-bef_test-field_date',
              2 => 'node-bef_test-field_integer',
              3 => 'node-bef_test-field_letters',
              4 => 'node-bef_test-field_location',
              5 => 'node-bef_test-field_numbers',
              6 => 'node-bef_test-field_price',
            ),
            'node' => 
            array (
              0 => 'bef_test',
            ),
            'taxonomy' => 
            array (
              0 => 'location',
            ),
            'views_view' => 
            array (
              0 => 'bef_test_view',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'options' => 'options',
            ),
            'field' => 
            array (
              'node-bef_test-body' => 'node-bef_test-body',
              'node-bef_test-field_letters' => 'node-bef_test-field_letters',
              'node-bef_test-field_numbers' => 'node-bef_test-field_numbers',
              'node-bef_test-field_location' => 'node-bef_test-field_location',
              'node-bef_test-field_integer' => 'node-bef_test-field_integer',
              'node-bef_test-field_price' => 'node-bef_test-field_price',
              'node-bef_test-field_date' => 'node-bef_test-field_date',
            ),
          ),
          'version' => '7.x-3.0-beta4',
          'project' => 'better_exposed_filters',
          'datestamp' => '1392255206',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.0-beta4',
      ),
      'better_exposed_filters' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/better_exposed_filters/better_exposed_filters.module',
        'basename' => 'better_exposed_filters.module',
        'name' => 'better_exposed_filters',
        'info' => 
        array (
          'name' => 'Better Exposed Filters',
          'description' => 'Allow the use of checkboxes or radio buttons for exposed Views filters',
          'core' => '7.x',
          'package' => 'Views',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'better_exposed_filters_exposed_form_plugin.inc',
            1 => 'tests/better_exposed_filters.test',
          ),
          'version' => '7.x-3.0-beta4',
          'project' => 'better_exposed_filters',
          'datestamp' => '1392255206',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.0-beta4',
      ),
      'commons_tasks' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/commons_tasks/commons_tasks.module',
        'basename' => 'commons_tasks.module',
        'name' => 'commons_tasks',
        'info' => 
        array (
          'name' => 'Commons Posts',
          'description' => 'Commons Task content type',
          'core' => '7.x',
          'package' => 'Commons - Content types',
          'php' => '5.2.4',
          'project' => 'commons_tasks',
          'dependencies' => 
          array (
            0 => 'commons_groups',
            1 => 'features_override',
            2 => 'field_group',
            3 => 'variable_admin',
            4 => 'strongarm',
            5 => 'views',
            6 => 'views_litepager',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:1',
            ),
            'field_instance' => 
            array (
              0 => 'node-task-body',
              1 => 'node-task-field_topics',
            ),
            'node' => 
            array (
              0 => 'task',
            ),
            'og_features_permission' => 
            array (
              0 => 'node:group:create task content',
              1 => 'node:group:delete any task content',
              2 => 'node:group:delete own task content',
              3 => 'node:group:update any task content',
              4 => 'node:group:update own task content',
            ),
            'user_permission' => 
            array (
              0 => 'create task content',
              1 => 'delete any task content',
              2 => 'delete own task content',
              3 => 'edit any task content',
              4 => 'edit own task content',
            ),
            'variable' => 
            array (
              0 => 'comment_anonymous_task',
              1 => 'comment_default_mode_task',
              2 => 'comment_default_per_page_task',
              3 => 'comment_form_location_task',
              4 => 'comment_task',
              5 => 'comment_preview_task',
              6 => 'comment_subject_field_task',
              7 => 'field_bundle_settings_node__task',
              8 => 'menu_options_task',
              9 => 'menu_parent_task',
              10 => 'node_options_task',
              11 => 'node_preview_task',
              12 => 'node_submitted_task',
            ),
            'views_view' => 
            array (
              0 => 'commons_bw_tasks',
            ),
          ),
          'version' => '7.x-3.2',
          'datestamp' => '1365037214',
        ),
        'schema_version' => '7001',
        'version' => '7.x-3.2',
      ),
      'help_example' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/advanced_help/help_example/help_example.module',
        'basename' => 'help_example.module',
        'name' => 'help_example',
        'info' => 
        array (
          'name' => 'Advanced help example',
          'description' => 'A example help module to demonstrate the advanced help module.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'advanced_help',
          ),
          'version' => '7.x-1.1',
          'project' => 'advanced_help',
          'datestamp' => '1386871727',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'advanced_help' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/advanced_help/advanced_help.module',
        'basename' => 'advanced_help.module',
        'name' => 'advanced_help',
        'info' => 
        array (
          'name' => 'Advanced help',
          'description' => 'Allow advanced help and documentation.',
          'core' => '7.x',
          'version' => '7.x-1.1',
          'project' => 'advanced_help',
          'datestamp' => '1386871727',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'linkchecker' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/linkchecker/linkchecker.module',
        'basename' => 'linkchecker.module',
        'name' => 'linkchecker',
        'info' => 
        array (
          'name' => 'Link checker',
          'description' => 'Periodically checks for broken links in node types, blocks and fields and reports the results.',
          'configure' => 'admin/config/content/linkchecker',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'linkchecker.drush.inc',
            1 => 'linkchecker.test',
          ),
          'version' => '7.x-1.1',
          'project' => 'linkchecker',
          'datestamp' => '1360849273',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7011',
        'version' => '7.x-1.1',
      ),
      'gravatar' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/gravatar/gravatar.module',
        'basename' => 'gravatar.module',
        'name' => 'gravatar',
        'info' => 
        array (
          'name' => 'Gravatar',
          'description' => 'Integrate Gravatar pictures registered at Gravatar.com in Drupal sites',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'gravatar.module',
            1 => 'gravatar.install',
            2 => 'gravatar.admin.inc',
          ),
          'configure' => 'admin/config/people/gravatar',
          'version' => '7.x-1.1',
          'project' => 'gravatar',
          'datestamp' => '1297971182',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '6000',
        'version' => '7.x-1.1',
      ),
      'jquery_update' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/jquery_update/jquery_update.module',
        'basename' => 'jquery_update.module',
        'name' => 'jquery_update',
        'info' => 
        array (
          'name' => 'jQuery Update',
          'description' => 'Update jQuery and jQuery UI to a more recent version.',
          'package' => 'User interface',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'jquery_update.module',
            1 => 'jquery_update.install',
          ),
          'configure' => 'admin/config/development/jquery_update',
          'version' => '7.x-2.4',
          'project' => 'jquery_update',
          'datestamp' => '1396482246',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-2.4',
      ),
      'services_views' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services_views/services_views.module',
        'basename' => 'services_views.module',
        'name' => 'services_views',
        'info' => 
        array (
          'name' => 'Services Views',
          'description' => 'Build service endpoints with Views.',
          'package' => 'Services',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'services',
            1 => 'views',
          ),
          'files' => 
          array (
            0 => 'includes/views/views_plugin_display_services.inc',
          ),
          'version' => '7.x-1.0',
          'project' => 'services_views',
          'datestamp' => '1388679507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0',
      ),
      'rules_scheduler' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules/rules_scheduler/rules_scheduler.module',
        'basename' => 'rules_scheduler.module',
        'name' => 'rules_scheduler',
        'info' => 
        array (
          'name' => 'Rules Scheduler',
          'description' => 'Schedule the execution of Rules components using actions.',
          'dependencies' => 
          array (
            0 => 'rules',
          ),
          'package' => 'Rules',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules_scheduler.admin.inc',
            1 => 'rules_scheduler.module',
            2 => 'rules_scheduler.install',
            3 => 'rules_scheduler.rules.inc',
            4 => 'rules_scheduler.test',
            5 => 'includes/rules_scheduler.handler.inc',
            6 => 'includes/rules_scheduler.views_default.inc',
            7 => 'includes/rules_scheduler.views.inc',
            8 => 'includes/rules_scheduler_views_filter.inc',
          ),
          'version' => '7.x-2.7',
          'project' => 'rules',
          'datestamp' => '1399041230',
          'php' => '5.2.4',
        ),
        'schema_version' => '7204',
        'version' => '7.x-2.7',
      ),
      'rules_admin' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules/rules_admin/rules_admin.module',
        'basename' => 'rules_admin.module',
        'name' => 'rules_admin',
        'info' => 
        array (
          'name' => 'Rules UI',
          'description' => 'Administrative interface for managing rules.',
          'package' => 'Rules',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules_admin.module',
            1 => 'rules_admin.inc',
          ),
          'dependencies' => 
          array (
            0 => 'rules',
          ),
          'version' => '7.x-2.7',
          'project' => 'rules',
          'datestamp' => '1399041230',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.7',
      ),
      'rules_i18n' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules/rules_i18n/rules_i18n.module',
        'basename' => 'rules_i18n.module',
        'name' => 'rules_i18n',
        'info' => 
        array (
          'name' => 'Rules translation',
          'description' => 'Allows translating rules.',
          'dependencies' => 
          array (
            0 => 'rules',
            1 => 'i18n_string',
          ),
          'package' => 'Multilingual - Internationalization',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules_i18n.i18n.inc',
            1 => 'rules_i18n.rules.inc',
            2 => 'rules_i18n.test',
          ),
          'version' => '7.x-2.7',
          'project' => 'rules',
          'datestamp' => '1399041230',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.7',
      ),
      'rules' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules/rules.module',
        'basename' => 'rules.module',
        'name' => 'rules',
        'info' => 
        array (
          'name' => 'Rules',
          'description' => 'React on events and conditionally evaluate actions.',
          'package' => 'Rules',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules.features.inc',
            1 => 'tests/rules.test',
            2 => 'includes/faces.inc',
            3 => 'includes/rules.core.inc',
            4 => 'includes/rules.event.inc',
            5 => 'includes/rules.processor.inc',
            6 => 'includes/rules.plugins.inc',
            7 => 'includes/rules.state.inc',
            8 => 'includes/rules.dispatcher.inc',
            9 => 'modules/node.eval.inc',
            10 => 'modules/php.eval.inc',
            11 => 'modules/rules_core.eval.inc',
            12 => 'modules/system.eval.inc',
            13 => 'ui/ui.controller.inc',
            14 => 'ui/ui.core.inc',
            15 => 'ui/ui.data.inc',
            16 => 'ui/ui.plugins.inc',
          ),
          'dependencies' => 
          array (
            0 => 'entity_token',
            1 => 'entity',
          ),
          'version' => '7.x-2.7',
          'project' => 'rules',
          'datestamp' => '1399041230',
          'php' => '5.2.4',
        ),
        'schema_version' => '7213',
        'version' => '7.x-2.7',
      ),
      'advuser' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/advuser/advuser.module',
        'basename' => 'advuser.module',
        'name' => 'advuser',
        'info' => 
        array (
          'name' => 'Advanced User Management',
          'description' => 'Advanced user management providing advanced filtering of users and providing mass actions of selected filtered users across multiple pages of the users list.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-3.0-beta1',
          'project' => 'advuser',
          'datestamp' => '1380162319',
          'php' => '5.2.4',
        ),
        'schema_version' => '7300',
        'version' => '7.x-3.0-beta1',
      ),
      'webform' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/webform/webform.module',
        'basename' => 'webform.module',
        'name' => 'webform',
        'info' => 
        array (
          'name' => 'Webform',
          'description' => 'Enables the creation of forms and questionnaires.',
          'core' => '7.x',
          'package' => 'Webform',
          'configure' => 'admin/config/content/webform',
          'files' => 
          array (
            0 => 'includes/webform.export.inc',
            1 => 'views/webform_handler_field_form_body.inc',
            2 => 'views/webform_handler_field_is_draft.inc',
            3 => 'views/webform_handler_field_node_link_edit.inc',
            4 => 'views/webform_handler_field_node_link_results.inc',
            5 => 'views/webform_handler_field_submission_count.inc',
            6 => 'views/webform_handler_field_submission_link.inc',
            7 => 'views/webform_handler_field_webform_status.inc',
            8 => 'views/webform_handler_filter_is_draft.inc',
            9 => 'views/webform_handler_filter_webform_status.inc',
            10 => 'views/webform.views.inc',
            11 => 'tests/components.test',
            12 => 'tests/permissions.test',
            13 => 'tests/submission.test',
            14 => 'tests/webform.test',
          ),
          'version' => '7.x-3.20',
          'project' => 'webform',
          'datestamp' => '1392182305',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7321',
        'version' => '7.x-3.20',
      ),
      'lang_dropdown_hideout' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/lang_dropdown/lang_dropdown_hideout/lang_dropdown_hideout.module',
        'basename' => 'lang_dropdown_hideout.module',
        'name' => 'lang_dropdown_hideout',
        'info' => 
        array (
          'name' => 'Language Switcher Dropdown Hideout',
          'package' => 'Multilingual',
          'description' => 'Allow to hide specific languages from the switcher for certain roles.',
          'dependencies' => 
          array (
            0 => 'locale',
          ),
          'configure' => 'admin/structure/block',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'lang_dropdown_hideout.module',
            1 => 'lang_dropdown_hideout.install',
          ),
          'version' => '7.x-2.5',
          'project' => 'lang_dropdown',
          'datestamp' => '1387127905',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.5',
      ),
      'lang_dropdown' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/lang_dropdown/lang_dropdown.module',
        'basename' => 'lang_dropdown.module',
        'name' => 'lang_dropdown',
        'info' => 
        array (
          'name' => 'Language Switcher Dropdown',
          'package' => 'Multilingual',
          'description' => 'Provides a dropdown select to switch between available languages.',
          'dependencies' => 
          array (
            0 => 'locale',
          ),
          'configure' => 'admin/structure/block',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'lang_dropdown.module',
            1 => 'lang_dropdown.install',
          ),
          'version' => '7.x-2.5',
          'project' => 'lang_dropdown',
          'datestamp' => '1387127905',
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'version' => '7.x-2.5',
      ),
      'languageicons' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/languageicons/languageicons.module',
        'basename' => 'languageicons.module',
        'name' => 'languageicons',
        'info' => 
        array (
          'name' => 'Language Icons',
          'description' => 'Adds icons to language links.',
          'dependencies' => 
          array (
            0 => 'locale',
          ),
          'package' => 'Multilingual',
          'core' => '7.x',
          'configure' => 'admin/config/regional/language/icons',
          'version' => '7.x-1.1',
          'project' => 'languageicons',
          'datestamp' => '1399825730',
          'php' => '5.2.4',
        ),
        'schema_version' => '6200',
        'version' => '7.x-1.1',
      ),
      'taxonomy_display' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/taxonomy_display/taxonomy_display.module',
        'basename' => 'taxonomy_display.module',
        'name' => 'taxonomy_display',
        'info' => 
        array (
          'name' => 'Taxonomy display',
          'description' => 'Modify the display of taxonomy term pages per vocabulary.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'taxonomy',
            1 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'taxonomy_display.module',
            1 => 'classes/associated_display.inc',
            2 => 'classes/breadcrumb_display.inc',
            3 => 'classes/handler_form.inc',
            4 => 'classes/term_display.inc',
            5 => 'handlers/term/core.inc',
            6 => 'handlers/term/hidden.inc',
            7 => 'handlers/associated/core.inc',
            8 => 'handlers/associated/hidden.inc',
            9 => 'handlers/associated/views.inc',
            10 => 'handlers/breadcrumb/core.inc',
            11 => 'handlers/breadcrumb/hidden.inc',
            12 => 'handlers/breadcrumb/ignore.inc',
          ),
          'version' => '7.x-1.1',
          'project' => 'taxonomy_display',
          'datestamp' => '1351568833',
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'version' => '7.x-1.1',
      ),
    ),
    'themes' => 
    array (
      'seven' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/themes/seven/seven.info',
        'basename' => 'seven.info',
        'name' => 'Seven',
        'info' => 
        array (
          'name' => 'Seven',
          'description' => 'A simple one-column, tableless, fluid width administration theme.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'screen' => 
            array (
              0 => 'reset.css',
              1 => 'style.css',
            ),
          ),
          'settings' => 
          array (
            'shortcut_module_link' => '1',
          ),
          'regions' => 
          array (
            'content' => 'Content',
            'help' => 'Help',
            'page_top' => 'Page top',
            'page_bottom' => 'Page bottom',
            'sidebar_first' => 'First sidebar',
          ),
          'regions_hidden' => 
          array (
            0 => 'sidebar_first',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
        ),
        'version' => '7.41',
      ),
      'bartik' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/themes/bartik/bartik.info',
        'basename' => 'bartik.info',
        'name' => 'Bartik',
        'info' => 
        array (
          'name' => 'Bartik',
          'description' => 'A flexible, recolorable theme with many regions.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/layout.css',
              1 => 'css/style.css',
              2 => 'css/colors.css',
            ),
            'print' => 
            array (
              0 => 'css/print.css',
            ),
          ),
          'regions' => 
          array (
            'header' => 'Header',
            'help' => 'Help',
            'page_top' => 'Page top',
            'page_bottom' => 'Page bottom',
            'highlighted' => 'Highlighted',
            'featured' => 'Featured',
            'content' => 'Content',
            'sidebar_first' => 'Sidebar first',
            'sidebar_second' => 'Sidebar second',
            'triptych_first' => 'Triptych first',
            'triptych_middle' => 'Triptych middle',
            'triptych_last' => 'Triptych last',
            'footer_firstcolumn' => 'Footer first column',
            'footer_secondcolumn' => 'Footer second column',
            'footer_thirdcolumn' => 'Footer third column',
            'footer_fourthcolumn' => 'Footer fourth column',
            'footer' => 'Footer',
          ),
          'settings' => 
          array (
            'shortcut_module_link' => '0',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
        ),
        'version' => '7.41',
      ),
      'stark' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/themes/stark/stark.info',
        'basename' => 'stark.info',
        'name' => 'Stark',
        'info' => 
        array (
          'name' => 'Stark',
          'description' => 'This theme demonstrates Drupal\'s default HTML markup and CSS styles. To learn how to build your own theme and override Drupal\'s default code, see the <a href="http://drupal.org/theme-guide">Theming Guide</a>.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'layout.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
        ),
        'version' => '7.41',
      ),
      'garland' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/themes/garland/garland.info',
        'basename' => 'garland.info',
        'name' => 'Garland',
        'info' => 
        array (
          'name' => 'Garland',
          'description' => 'A multi-column theme which can be configured to modify colors and switch between fixed and fluid width layouts.',
          'package' => 'Core',
          'version' => '7.41',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'style.css',
            ),
            'print' => 
            array (
              0 => 'print.css',
            ),
          ),
          'settings' => 
          array (
            'garland_width' => 'fluid',
          ),
          'project' => 'drupal',
          'datestamp' => '1445457729',
        ),
        'version' => '7.41',
      ),
    ),
    'platforms' => 
    array (
      'drupal' => 
      array (
        'short_name' => 'drupal',
        'version' => '7.41',
        'description' => 'This platform is running Drupal 7.41',
      ),
    ),
    'profiles' => 
    array (
      'commons' => 
      array (
        'name' => 'commons',
        'filename' => './profiles/commons/commons.profile',
        'info' => 
        array (
          'name' => 'Commons',
          'description' => 'Ready-to-use solution for building communities.',
          'core' => '7.x',
          'distribution_name' => 'Drupal Commons',
          'exclusive' => true,
          'dependencies' => 
          array (
            0 => 'block',
            1 => 'comment',
            2 => 'dblog',
            3 => 'field',
            4 => 'field_ui',
            5 => 'file',
            6 => 'image',
            7 => 'list',
            8 => 'menu',
            9 => 'number',
            10 => 'options',
            11 => 'path',
            12 => 'rdf',
            13 => 'search',
            14 => 'shortcut',
            15 => 'taxonomy',
            16 => 'addressfield',
            17 => 'addressfield_tokens',
            18 => 'breakpoints',
            19 => 'editor_ckeditor',
            20 => 'ctools',
            21 => 'custom_search',
            22 => 'dialog',
            23 => 'diff',
            24 => 'elements',
            25 => 'email_registration',
            26 => 'entity',
            27 => 'entity_embed',
            28 => 'entityreference',
            29 => 'edit_profile',
            30 => 'features',
            31 => 'file_entity',
            32 => 'flag',
            33 => 'http_client',
            34 => 'jquery_update',
            35 => 'libraries',
            36 => 'media',
            37 => 'media_internet',
            38 => 'menu_attributes',
            39 => 'message',
            40 => 'message_notify',
            41 => 'message_subscribe',
            42 => 'metatag',
            43 => 'module_filter',
            44 => 'navbar',
            45 => 'media_oembed',
            46 => 'og',
            47 => 'panelizer',
            48 => 'panels',
            49 => 'panels_ipe',
            50 => 'paranoia',
            51 => 'pathauto',
            52 => 'privatemsg',
            53 => 'privatemsg_realname',
            54 => 'quicktabs',
            55 => 'r4032login',
            56 => 'radioactivity',
            57 => 'realname',
            58 => 'redirect',
            59 => 'rules',
            60 => 'schemaorg',
            61 => 'sharethis',
            62 => 'strongarm',
            63 => 'token',
            64 => 'views',
            65 => 'views_bulk_operations',
            66 => 'views_field_view',
            67 => 'views_ui',
            68 => 'votingapi',
            69 => 'commons_activity_page',
            70 => 'commons_activity_streams',
            71 => 'commons_bw',
            72 => 'commons_content_moderation',
            73 => 'commons_events',
            74 => 'commons_events_pages',
            75 => 'commons_featured',
            76 => 'commons_follow',
            77 => 'commons_follow_group',
            78 => 'commons_follow_node',
            79 => 'commons_follow_term',
            80 => 'commons_follow_ui',
            81 => 'commons_follow_user',
            82 => 'commons_groups',
            83 => 'commons_groups_directory',
            84 => 'commons_groups_pages',
            85 => 'commons_like',
            86 => 'commons_location',
            87 => 'commons_media',
            88 => 'commons_misc',
            89 => 'commons_notify',
            90 => 'commons_pages',
            91 => 'commons_polls',
            92 => 'commons_posts',
            93 => 'commons_profile_base',
            94 => 'commons_profile_social',
            95 => 'commons_q_a',
            96 => 'commons_q_a_pages',
            97 => 'commons_radioactivity',
            98 => 'commons_radioactivity_groups',
            99 => 'commons_search',
            100 => 'commons_search_core',
            101 => 'commons_site_homepage',
            102 => 'commons_social_sharing',
            103 => 'commons_trusted_contacts',
            104 => 'commons_user_profile_pages',
            105 => 'commons_utility_links',
            106 => 'commons_wikis',
            107 => 'commons_wikis_pages',
            108 => 'commons_wysiwyg',
          ),
          'php_memory_limit' => '128M',
          'version' => '7.x-3.32',
          'project' => 'commons',
          'datestamp' => '1446047047',
          'php' => '5.2.4',
          'languages' => 
          array (
            0 => 'en',
          ),
          'old_short_name' => 'drupal_commons',
        ),
        'version' => '7.41',
      ),
    ),
  ),
  'sites-all' => 
  array (
    'modules' => 
    array (
      'annotator' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/annotator/annotator.module',
        'basename' => 'annotator.module',
        'name' => 'annotator',
        'info' => 
        array (
          'name' => 'Annotator',
          'description' => 'Annotator',
          'package' => 'Annotation',
          'core' => '7.x',
          'configure' => 'admin/config/content/annotator',
          'files' => 
          array (
            0 => 'includes/AnnotatorPlugin.class.inc',
            1 => 'plugins/annotator/AuthAnnotatorPlugin.class.inc',
            2 => 'plugins/annotator/FilterAnnotatorPlugin.class.inc',
            3 => 'plugins/annotator/I18nAnnotatorPlugin.class.inc',
            4 => 'plugins/annotator/MarkdownAnnotatorPlugin.class.inc',
            5 => 'plugins/annotator/PermissionsAnnotatorPlugin.class.inc',
            6 => 'plugins/annotator/TagsAnnotatorPlugin.class.inc',
            7 => 'plugins/annotator/UnsupportedAnnotatorPlugin.class.inc',
            8 => 'plugins/annotator/DrupalNodeAnnotatorPlugin.class.inc',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/openethnographer.css',
            ),
          ),
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'jquery_update',
            2 => 'libraries',
            3 => 'taxonomy_display',
            4 => 'annotation',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => NULL,
      ),
      'annotation' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/annotation/annotation.module',
        'basename' => 'annotation.module',
        'name' => 'annotation',
        'info' => 
        array (
          'name' => 'Annotation',
          'description' => 'Annotation entity',
          'package' => 'Annotation',
          'core' => '7.x',
          'configure' => 'admin/structure/annotation',
          'files' => 
          array (
            0 => 'annotation.class.inc',
            1 => 'annotation.controller.inc',
            2 => 'annotation.recursive_dom_iterator.inc',
            3 => 'plugins/annotator/StoreAnnotatorPlugin.class.inc',
          ),
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'entity',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => NULL,
      ),
      'features_override' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/features_override/features_override.module',
        'basename' => 'features_override.module',
        'name' => 'features_override',
        'info' => 
        array (
          'name' => 'Features Override',
          'description' => 'Allows exported Features to be overridden',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'features',
          ),
          'package' => 'Features',
          'version' => '7.x-2.0-rc2',
          'project' => 'features_override',
          'datestamp' => '1406903928',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.0-rc2',
      ),
      'addressfield_tokens' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/addressfield_tokens/addressfield_tokens.module',
        'basename' => 'addressfield_tokens.module',
        'name' => 'addressfield_tokens',
        'info' => 
        array (
          'name' => 'Address Field Tokens',
          'description' => 'Creates tokens for address fields, adds new addressfield renders, and adds webform integration.',
          'core' => '7.x',
          'package' => 'Fields',
          'version' => '7.x-1.4',
          'dependencies' => 
          array (
            0 => 'addressfield',
            1 => 'entity_token',
            2 => 'token',
          ),
          'project' => 'addressfield_tokens',
          'datestamp' => '1400081330',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'hsts' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/hsts/hsts.module',
        'basename' => 'hsts.module',
        'name' => 'hsts',
        'info' => 
        array (
          'name' => 'HTTP Strict Transport Security',
          'description' => 'Enable Strict Transport Security on your Drupal site.',
          'core' => '7.x',
          'package' => 'Security',
          'files' => 
          array (
            0 => 'hsts.module',
          ),
          'configure' => 'admin/config/security/hsts',
          'version' => '7.x-1.0',
          'project' => 'hsts',
          'datestamp' => '1375119377',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0',
      ),
      'entity_view_mode' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/entity_view_mode/entity_view_mode.module',
        'basename' => 'entity_view_mode.module',
        'name' => 'entity_view_mode',
        'info' => 
        array (
          'name' => 'Entity view modes',
          'description' => 'Allows administrators to define custom view modes for entities via the administration user interface.',
          'core' => '7.x',
          'recommends' => 
          array (
            0 => 'field_ui',
          ),
          'configure' => 'admin/config/system/entity-view-modes',
          'files' => 
          array (
            0 => 'entity_view_mode.test',
          ),
          'version' => '7.x-1.0-rc1',
          'project' => 'entity_view_mode',
          'datestamp' => '1368242411',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc1',
      ),
      'htmLawed' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/htmlawed/htmLawed.module',
        'basename' => 'htmLawed.module',
        'name' => 'htmLawed',
        'info' => 
        array (
          'name' => 'htmLawed (X)HTML filter/purifier',
          'description' => 'Restrict HTML markup and make content secure, and standard- and admin. policy-compliant',
          'core' => '7.x',
          'version' => '7.x-3.3',
          'project' => 'htmlawed',
          'datestamp' => '1394648328',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.3',
      ),
      'edgeryders_conferences' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/edgeryders_conferences/edgeryders_conferences.module',
        'basename' => 'edgeryders_conferences.module',
        'name' => 'edgeryders_conferences',
        'info' => 
        array (
          'name' => 'Edgeryders conferences',
          'description' => 'TODO: Description of module',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'tests/edgeryders_conferences.test',
          ),
          'dependencies' => 
          array (
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => NULL,
      ),
      'masquerade' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/masquerade/masquerade.module',
        'basename' => 'masquerade.module',
        'name' => 'masquerade',
        'info' => 
        array (
          'name' => 'Masquerade',
          'description' => 'This module allows permitted users to masquerade as other users.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'masquerade.test',
          ),
          'configure' => 'admin/config/people/masquerade',
          'version' => '7.x-1.0-rc7',
          'project' => 'masquerade',
          'datestamp' => '1394333639',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'version' => '7.x-1.0-rc7',
      ),
      'anonymous_publishing' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/anonymous_publishing/anonymous_publishing.module',
        'basename' => 'anonymous_publishing.module',
        'name' => 'anonymous_publishing',
        'info' => 
        array (
          'name' => 'Anonymous publishing',
          'description' => 'Anonymous publishing increases your control over anonymous publishing on a site.',
          'core' => '7.x',
          'configure' => 'admin/config/content/anonymous_publishing',
          'version' => '7.x-1.0-alpha6+2-dev',
          'project' => 'anonymous_publishing',
          'datestamp' => '1395137057',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'version' => '7.x-1.0-alpha6+2-dev',
      ),
      'anonymous_publishing_claim' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/anonymous_publishing/anonymous_publishing_claim.module',
        'basename' => 'anonymous_publishing_claim.module',
        'name' => 'anonymous_publishing_claim',
        'info' => 
        array (
          'name' => 'Anonymous publishing claim',
          'description' => 'Implements lazy registration for the Anonymous Publishing module.',
          'dependencies' => 
          array (
            0 => 'anonymous_publishing',
          ),
          'core' => '7.x',
          'version' => '7.x-1.0-alpha6+2-dev',
          'project' => 'anonymous_publishing',
          'datestamp' => '1395137057',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-alpha6+2-dev',
      ),
      'css_injector' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/css_injector/css_injector.module',
        'basename' => 'css_injector.module',
        'name' => 'css_injector',
        'info' => 
        array (
          'name' => 'CSS Injector',
          'description' => 'Adds CSS to the page output based on configurable rules.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'css_injector.admin.inc',
            1 => 'css_injector.install',
            2 => 'css_injector.module',
            3 => 'css_injector.test',
          ),
          'configure' => 'admin/config/development/css-injector',
          'version' => '7.x-1.10',
          'project' => 'css_injector',
          'datestamp' => '1387292932',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'version' => '7.x-1.10',
      ),
      'label_help' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/label_help/label_help.module',
        'basename' => 'label_help.module',
        'name' => 'label_help',
        'info' => 
        array (
          'name' => 'Label Help',
          'description' => 'Creates the help text directly below the label in form fields',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'label_help.module',
          ),
          'version' => '7.x-1.1',
          'project' => 'label_help',
          'datestamp' => '1396200245',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'devel_generate' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/devel/devel_generate/devel_generate.module',
        'basename' => 'devel_generate.module',
        'name' => 'devel_generate',
        'info' => 
        array (
          'name' => 'Devel generate',
          'description' => 'Generate dummy users, nodes, and taxonomy terms.',
          'package' => 'Development',
          'core' => '7.x',
          'tags' => 
          array (
            0 => 'developer',
          ),
          'configure' => 'admin/config/development/generate',
          'files' => 
          array (
            0 => 'devel_generate.test',
          ),
          'version' => '7.x-1.5',
          'project' => 'devel',
          'datestamp' => '1398963366',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.5',
      ),
      'devel_node_access' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/devel/devel_node_access.module',
        'basename' => 'devel_node_access.module',
        'name' => 'devel_node_access',
        'info' => 
        array (
          'name' => 'Devel node access',
          'description' => 'Developer blocks and page illustrating relevant node_access records.',
          'package' => 'Development',
          'dependencies' => 
          array (
            0 => 'menu',
          ),
          'core' => '7.x',
          'configure' => 'admin/config/development/devel',
          'tags' => 
          array (
            0 => 'developer',
          ),
          'version' => '7.x-1.5',
          'project' => 'devel',
          'datestamp' => '1398963366',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.5',
      ),
      'devel' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/devel/devel.module',
        'basename' => 'devel.module',
        'name' => 'devel',
        'info' => 
        array (
          'name' => 'Devel',
          'description' => 'Various blocks, pages, and functions for developers.',
          'package' => 'Development',
          'core' => '7.x',
          'configure' => 'admin/config/development/devel',
          'tags' => 
          array (
            0 => 'developer',
          ),
          'files' => 
          array (
            0 => 'devel.test',
            1 => 'devel.mail.inc',
          ),
          'version' => '7.x-1.5',
          'project' => 'devel',
          'datestamp' => '1398963366',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7006',
        'version' => '7.x-1.5',
      ),
      'delete_all' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/delete_all/delete_all.module',
        'basename' => 'delete_all.module',
        'name' => 'delete_all',
        'info' => 
        array (
          'name' => 'Delete content and users',
          'description' => 'Allows deletion of all nodes, comments and users on a site. Useful for development or prior to launching a site.',
          'package' => 'Development',
          'configure' => 'admin/content/delete_content',
          'core' => '7.x',
          'version' => '7.x-1.1+4-dev',
          'project' => 'delete_all',
          'datestamp' => '1380569145',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1+4-dev',
      ),
      'persona' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/persona/persona.module',
        'basename' => 'persona.module',
        'name' => 'persona',
        'info' => 
        array (
          'name' => 'Persona',
          'description' => 'Enables users to authenticate using Mozilla Persona.',
          'package' => 'Authentication',
          'configure' => 'admin/config/people/persona',
          'core' => '7.x',
          'php' => '5.3',
          'scripts' => 
          array (
            0 => 'persona.js',
          ),
          'version' => '7.x-1.16',
          'project' => 'persona',
          'datestamp' => '1397061552',
          'dependencies' => 
          array (
          ),
        ),
        'schema_version' => '7101',
        'version' => '7.x-1.16',
      ),
      'relation_feeds' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_feeds/relation_feeds.module',
        'basename' => 'relation_feeds.module',
        'name' => 'relation_feeds',
        'info' => 
        array (
          'name' => 'Relation feeds',
          'description' => 'Feeds integration module for Relation.',
          'core' => '7.x',
          'package' => 'Relation',
          'files' => 
          array (
            0 => 'tests/relation.feeds_processor.test',
          ),
          'dependencies' => 
          array (
            0 => 'relation',
            1 => 'feeds',
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation_dummy_field' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_dummy_field/relation_dummy_field.module',
        'basename' => 'relation_dummy_field.module',
        'name' => 'relation_dummy_field',
        'info' => 
        array (
          'name' => 'Relation Dummy Field',
          'description' => 'Dummy field to display relation data inline on entities.',
          'core' => '7.x',
          'package' => 'Relation',
          'dependencies' => 
          array (
            0 => 'relation',
          ),
          'files' => 
          array (
            0 => 'tests/relation_dummy_field.test',
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation_migrate' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_migrate/relation_migrate.module',
        'basename' => 'relation_migrate.module',
        'name' => 'relation_migrate',
        'info' => 
        array (
          'name' => 'Relation migrate',
          'description' => 'Migrate integration module for Relation.',
          'core' => '7.x',
          'package' => 'Relation',
          'files' => 
          array (
            0 => 'relation_migrate.destination.inc',
            1 => 'relation_migrate.source.inc',
            2 => 'relation_migrate.migration.inc',
            3 => 'tests/relation.migrate.test',
          ),
          'dependencies' => 
          array (
            0 => 'relation',
            1 => 'relation_ui',
            2 => 'migrate',
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation_entity_collector' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_entity_collector/relation_entity_collector.module',
        'basename' => 'relation_entity_collector.module',
        'name' => 'relation_entity_collector',
        'info' => 
        array (
          'name' => 'Relation Entity Collector block',
          'description' => 'A block to collect entities loaded on any page(s), and create relations from them.',
          'core' => '7.x',
          'package' => 'Relation',
          'dependencies' => 
          array (
            0 => 'relation',
            1 => 'block',
          ),
          'files' => 
          array (
            0 => 'tests/relation_entity_collector.test',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'relation_entity_collector.css',
            ),
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation_endpoint' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_endpoint.module',
        'basename' => 'relation_endpoint.module',
        'name' => 'relation_endpoint',
        'info' => 
        array (
          'name' => 'Relation Endpoints Field',
          'description' => 'Helper module for Relation. Defines endpoints field (not usable except by relation).',
          'core' => '7.x',
          'package' => 'Relation',
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation_ui' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation_ui.module',
        'basename' => 'relation_ui.module',
        'name' => 'relation_ui',
        'info' => 
        array (
          'name' => 'Relation UI',
          'description' => 'Administrative interface to relation. Without this module, you cannot create or edit your relation types.',
          'package' => 'Relation',
          'core' => '7.x',
          'configure' => 'admin/structure/relation',
          'dependencies' => 
          array (
            0 => 'relation',
          ),
          'files' => 
          array (
            0 => 'relation_ui.module',
            1 => 'tests/relation_ui.test',
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc5',
      ),
      'relation' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/relation/relation.module',
        'basename' => 'relation.module',
        'name' => 'relation',
        'info' => 
        array (
          'name' => 'Relation',
          'description' => 'Describes relationships between entities.',
          'core' => '7.x',
          'package' => 'Relation',
          'files' => 
          array (
            0 => 'relation.database.inc',
            1 => 'tests/relation.test',
            2 => 'tests/relation.rules.test',
            3 => 'tests/relation.views.test',
            4 => 'tests/relation.ctools.test',
            5 => 'views/relation_handler_relationship.inc',
            6 => 'views/views_handler_field_relation_link.inc',
            7 => 'views/views_handler_field_relation_link_delete.inc',
            8 => 'views/views_handler_field_relation_link_edit.inc',
          ),
          'dependencies' => 
          array (
            0 => 'relation_endpoint',
          ),
          'version' => '7.x-1.0-rc5',
          'project' => 'relation',
          'datestamp' => '1396866555',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'version' => '7.x-1.0-rc5',
      ),
      'translation_overview' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/translation_overview/translation_overview.module',
        'basename' => 'translation_overview.module',
        'name' => 'translation_overview',
        'info' => 
        array (
          'name' => 'Translation overview',
          'description' => 'Provides an overview of the translation status of the site\'s content.',
          'dependencies' => 
          array (
            0 => 'translation',
          ),
          'core' => '7.x',
          'php' => '5.1',
          'package' => 'Multilingual',
          'files' => 
          array (
            0 => 'translation_overview.install',
            1 => 'translation_overview.module',
            2 => 'translation_overview.pages.inc',
            3 => 'translation_overview.test',
          ),
          'version' => '7.x-2.x-dev',
          'project' => 'translation_overview',
          'datestamp' => '1382147841',
        ),
        'schema_version' => '6002',
        'version' => '7.x-2.x-dev',
      ),
      'views_slideshow_cycle' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_slideshow/contrib/views_slideshow_cycle/views_slideshow_cycle.module',
        'basename' => 'views_slideshow_cycle.module',
        'name' => 'views_slideshow_cycle',
        'info' => 
        array (
          'name' => 'Views Slideshow: Cycle',
          'description' => 'Adds a Rotating slideshow mode to Views Slideshow.',
          'dependencies' => 
          array (
            0 => 'views_slideshow',
            1 => 'libraries',
          ),
          'package' => 'Views',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'views_slideshow_cycle.module',
            1 => 'views_slideshow_cycle.views_slideshow.inc',
            2 => 'theme/views_slideshow_cycle.theme.inc',
          ),
          'version' => '7.x-3.1',
          'project' => 'views_slideshow',
          'datestamp' => '1382584826',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.1',
      ),
      'views_slideshow' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_slideshow/views_slideshow.module',
        'basename' => 'views_slideshow.module',
        'name' => 'views_slideshow',
        'info' => 
        array (
          'name' => 'Views Slideshow',
          'description' => 'Provides a View style that displays rows as a jQuery slideshow.  This is an API and requires Views Slideshow Cycle or another module that supports the API.',
          'dependencies' => 
          array (
            0 => 'views (>=3.0)',
          ),
          'package' => 'Views',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'views_slideshow.module',
            1 => 'theme/views_slideshow.theme.inc',
            2 => 'views_slideshow.views.inc',
            3 => 'views_slideshow_plugin_style_slideshow.inc',
          ),
          'version' => '7.x-3.1',
          'project' => 'views_slideshow',
          'datestamp' => '1382584826',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.1',
      ),
      'og_delete' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/og-delete/og_delete.module',
        'basename' => 'og_delete.module',
        'name' => 'og_delete',
        'info' => 
        array (
          'name' => 'OG Delete',
          'description' => 'Delete or Move content associated with OG.',
          'package' => 'OG Delete',
          'dependencies' => 
          array (
            0 => 'og',
          ),
          'core' => '7.x',
          'version' => '7.x-1.0+1-dev',
          'project' => 'og-delete',
          'datestamp' => '1384240107',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0+1-dev',
      ),
      'rest_server' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services/servers/rest_server/rest_server.module',
        'basename' => 'rest_server.module',
        'name' => 'rest_server',
        'info' => 
        array (
          'name' => 'REST Server',
          'description' => 'Provides an REST server.',
          'package' => 'Services - servers',
          'files' => 
          array (
            0 => 'rest_server.module',
            1 => 'includes/RESTServer.inc',
            2 => 'includes/ServicesContentTypeNegotiator.inc',
            3 => 'includes/ServicesRESTServerFactory.inc',
            4 => 'includes/ServicesContext.inc',
            5 => 'includes/ServicesParser.inc',
            6 => 'includes/ServicesFormatter.inc',
            7 => 'tests/ServicesRESTServerTests.test',
            8 => 'tests/rest_server_mock_classes.inc',
            9 => 'lib/bencode.php',
            10 => 'lib/mimeparse.php',
          ),
          'dependencies' => 
          array (
            0 => 'services',
            1 => 'libraries (>=2.x)',
          ),
          'core' => '7.x',
          'version' => '7.x-3.7',
          'project' => 'services',
          'datestamp' => '1391207946',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.7',
      ),
      'xmlrpc_server' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services/servers/xmlrpc_server/xmlrpc_server.module',
        'basename' => 'xmlrpc_server.module',
        'name' => 'xmlrpc_server',
        'info' => 
        array (
          'name' => 'XMLRPC Server',
          'description' => 'Provides a XMLRPC server.',
          'package' => 'Services - servers',
          'files' => 
          array (
            0 => 'xmlrpc_server.module',
          ),
          'dependencies' => 
          array (
            0 => 'services',
          ),
          'core' => '7.x',
          'version' => '7.x-3.7',
          'project' => 'services',
          'datestamp' => '1391207946',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.7',
      ),
      'services_oauth' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services/auth/services_oauth/services_oauth.module',
        'basename' => 'services_oauth.module',
        'name' => 'services_oauth',
        'info' => 
        array (
          'name' => 'OAuth Authentication',
          'description' => 'Provides OAuth authentication for the services module',
          'package' => 'Services - authentication',
          'dependencies' => 
          array (
            0 => 'services',
            1 => 'oauth_common',
          ),
          'core' => '7.x',
          'php' => '5.2',
          'version' => '7.x-3.7',
          'project' => 'services',
          'datestamp' => '1391207946',
        ),
        'schema_version' => '6200',
        'version' => '7.x-3.7',
      ),
      'services' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services/services.module',
        'basename' => 'services.module',
        'name' => 'services',
        'info' => 
        array (
          'name' => 'Services',
          'description' => 'Provide an API for creating web services.',
          'package' => 'Services',
          'core' => '7.x',
          'php' => '5.x',
          'configure' => 'admin/structure/services',
          'files' => 
          array (
            0 => 'includes/services.runtime.inc',
            1 => 'tests/functional/NoAuthEndpointTestRunner.test',
            2 => 'tests/functional/ServicesResourceNodeTests.test',
            3 => 'tests/functional/ServicesResourceUserTests.test',
            4 => 'tests/functional/ServicesResourceSystemTests.test',
            5 => 'tests/functional/ServicesResourceCommentTests.test',
            6 => 'tests/functional/ServicesResourceTaxonomyTests.test',
            7 => 'tests/functional/ServicesResourceFileTests.test',
            8 => 'tests/functional/ServicesResourceDisabledTests.test',
            9 => 'tests/functional/ServicesEndpointTests.test',
            10 => 'tests/functional/ServicesParserTests.test',
            11 => 'tests/functional/ServicesAliasTests.test',
            12 => 'tests/functional/ServicesXMLRPCTests.test',
            13 => 'tests/functional/ServicesVersionTests.test',
            14 => 'tests/functional/ServicesArgumentsTests.test',
            15 => 'tests/functional/ServicesSecurityTests.test',
            16 => 'tests/unit/ServicesSpycLibraryTests.test',
            17 => 'tests/ui/ServicesUITests.test',
            18 => 'tests/services.test',
          ),
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'version' => '7.x-3.7',
          'project' => 'services',
          'datestamp' => '1391207946',
        ),
        'schema_version' => '7400',
        'version' => '7.x-3.7',
      ),
      'usermerge_self' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/usermerge/usermerge_self/usermerge_self.module',
        'basename' => 'usermerge_self.module',
        'name' => 'usermerge_self',
        'info' => 
        array (
          'name' => 'Self-Serve User Merge',
          'description' => 'Allows users to merge two accounts.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'usermerge',
          ),
          'version' => '7.x-2.5',
          'project' => 'usermerge',
          'datestamp' => '1400483929',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.5',
      ),
      'usermerge' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/usermerge/usermerge.module',
        'basename' => 'usermerge.module',
        'name' => 'usermerge',
        'info' => 
        array (
          'name' => 'User Merge',
          'description' => 'Provides an advanced mechanism to merge user accounts together.',
          'core' => '7.x',
          'configure' => 'admin/config/people/usermerge',
          'version' => '7.x-2.5',
          'project' => 'usermerge',
          'datestamp' => '1400483929',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.5',
      ),
      'ckeditor_styles' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/ckeditor_styles/ckeditor_styles.module',
        'basename' => 'ckeditor_styles.module',
        'name' => 'ckeditor_styles',
        'info' => 
        array (
          'name' => 'CKeditor Styles',
          'description' => 'Allows for adding custom CKeditor style rules to the styles dropdown.',
          'core' => '7.x',
          'configure' => 'admin/config/content/ckeditor_styles',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'version' => '7.x-1.0-alpha1+7-dev',
          'project' => 'ckeditor_styles',
          'datestamp' => '1380558869',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-alpha1+7-dev',
      ),
      'token_filter' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/token_filter/token_filter.module',
        'basename' => 'token_filter.module',
        'name' => 'token_filter',
        'info' => 
        array (
          'name' => 'Token Filter',
          'description' => 'Allows token values to be used as filters',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-1.1+1-dev',
          'project' => 'token_filter',
          'datestamp' => '1382147423',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1+1-dev',
      ),
      'redhen_activity' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_activity/redhen_activity.module',
        'basename' => 'redhen_activity.module',
        'name' => 'redhen_activity',
        'info' => 
        array (
          'name' => 'RedHen Activity',
          'description' => 'Activity tracking for RedHen leveraging the Message module.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen',
            1 => 'redhen_contact',
            2 => 'redhen_org',
            3 => 'message',
            4 => 'entityreference',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'redhen_note' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_note/redhen_note.module',
        'basename' => 'redhen_note.module',
        'name' => 'redhen_note',
        'info' => 
        array (
          'name' => 'RedHen Notes',
          'description' => 'Defines the base note entity and features.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen',
            1 => 'taxonomy',
            2 => 'text',
          ),
          'files' => 
          array (
            0 => 'lib/redhen_note.entity.inc',
            1 => 'lib/redhen_note.metadata.inc',
            2 => 'lib/redhen_note.views.inc',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => '7101',
        'version' => '7.x-1.7',
      ),
      'redhen_fields' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_fields/redhen_fields.module',
        'basename' => 'redhen_fields.module',
        'name' => 'redhen_fields',
        'info' => 
        array (
          'name' => 'RedHen Fields',
          'description' => 'Fields specific to RedHen CRM.',
          'package' => 'RedHen',
          'core' => '7.x',
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'version' => '7.x-1.7',
      ),
      'redhen_dedupe' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_dedupe/redhen_dedupe.module',
        'basename' => 'redhen_dedupe.module',
        'name' => 'redhen_dedupe',
        'info' => 
        array (
          'name' => 'RedHen Dedupe',
          'description' => 'Provides RedHen contact deduping functionality.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen_contact',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'redhen_relation' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_relation/redhen_relation.module',
        'basename' => 'redhen_relation.module',
        'name' => 'redhen_relation',
        'info' => 
        array (
          'name' => 'RedHen Relation',
          'description' => 'Manage RedHen relationships.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen_contact',
            1 => 'redhen_org',
            2 => 'relation',
            3 => 'relation_ui',
            4 => 'list',
          ),
          'files' => 
          array (
            0 => 'includes/redhen_relation.forms.inc',
            1 => 'includes/views/redhen_relation_handler_field_primary_contact.inc',
            2 => 'includes/views/redhen_relation_handler_sort_primary_contact.inc',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'redhen_org' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_org/redhen_org.module',
        'basename' => 'redhen_org.module',
        'name' => 'redhen_org',
        'info' => 
        array (
          'name' => 'RedHen Organizations',
          'description' => 'Defines the base organization entity and features.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen',
          ),
          'files' => 
          array (
            0 => 'lib/redhen_org.controller.inc',
            1 => 'lib/redhen_org.entity.inc',
            2 => 'lib/redhen_org.metadata.inc',
            3 => 'lib/redhen_org_type.controller.inc',
            4 => 'lib/redhen_org_type.entity.inc',
            5 => 'lib/redhen_org_type.ui_controller.inc',
            6 => 'lib/redhen_org.inline_entity_form.inc',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => '7007',
        'version' => '7.x-1.7',
      ),
      'redhen_registration' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_registration/redhen_registration.module',
        'basename' => 'redhen_registration.module',
        'name' => 'redhen_registration',
        'info' => 
        array (
          'name' => 'RedHen Registration',
          'description' => 'Integrates the Entity Registrations module.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen_contact',
            1 => 'registration',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'redhen_contact' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_contact/redhen_contact.module',
        'basename' => 'redhen_contact.module',
        'name' => 'redhen_contact',
        'info' => 
        array (
          'name' => 'RedHen Contacts',
          'description' => 'Defines the base contact entity and features.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen',
            1 => 'redhen_fields',
          ),
          'files' => 
          array (
            0 => 'lib/redhen_contact.controller.inc',
            1 => 'lib/redhen_contact.entity.inc',
            2 => 'lib/redhen_contact.metadata.inc',
            3 => 'lib/redhen_contact.views.inc',
            4 => 'lib/redhen_contact.inline_entity_form.inc',
            5 => 'lib/redhen_contact_type.controller.inc',
            6 => 'lib/redhen_contact_type.entity.inc',
            7 => 'lib/redhen_contact_type.ui_controller.inc',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'version' => '7.x-1.7',
      ),
      'redhen_org_group' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_org_group/redhen_org_group.module',
        'basename' => 'redhen_org_group.module',
        'name' => 'redhen_org_group',
        'info' => 
        array (
          'name' => 'RedHen Organization Groups',
          'description' => 'Enables group collaboration features for organizations',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen_org',
            1 => 'redhen_relation',
            2 => 'entityreference',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'redhen_engagement' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/modules/redhen_engagement/redhen_engagement.module',
        'basename' => 'redhen_engagement.module',
        'name' => 'redhen_engagement',
        'info' => 
        array (
          'name' => 'RedHen Engagement',
          'description' => 'Provides RedHen contact engagement scoring.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'redhen_contact',
          ),
          'files' => 
          array (
            0 => 'lib/redhen_engagement.entity.inc',
            1 => 'lib/redhen_engagement.metadata.inc',
            2 => 'lib/redhen_engagement.views.inc',
            3 => 'lib/redhen_engagement_score.entity.inc',
            4 => 'lib/redhen_engagement_score.ui_controller.inc',
          ),
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => '7102',
        'version' => '7.x-1.7',
      ),
      'redhen' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/redhen/redhen.module',
        'basename' => 'redhen.module',
        'name' => 'redhen',
        'info' => 
        array (
          'name' => 'RedHen',
          'description' => 'Defines basic functionality common to all parts of the RedHen CRM.',
          'package' => 'RedHen',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'entity (>=1)',
          ),
          'files' => 
          array (
            0 => 'includes/redhen.admin.inc',
            1 => 'includes/redhen.forms.inc',
          ),
          'configure' => 'admin/config/redhen',
          'version' => '7.x-1.7',
          'project' => 'redhen',
          'datestamp' => '1392768507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.7',
      ),
      'edgeryders_mentions_notifications' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/edgeryders_mentions_notifications/edgeryders_mentions_notifications.module',
        'basename' => 'edgeryders_mentions_notifications.module',
        'name' => 'edgeryders_mentions_notifications',
        'info' => 
        array (
          'name' => 'Edgeryders mentions notifications',
          'description' => 'Edgeryders mentions notifications',
          'core' => '7.x',
          'package' => 'Edgeryders',
          'version' => '7.x-1.0-dev',
          'project' => 'edgeryders_mentions_notifications',
          'dependencies' => 
          array (
            0 => 'text',
            1 => 'commons_notify',
            2 => 'variable',
            3 => 'variable_admin',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_instance' => 
            array (
              0 => 'message-edgeryders_mentions_comment-field_message_rendered_body',
              1 => 'message-edgeryders_mentions_comment-field_message_rendered_subject',
              2 => 'message-edgeryders_mentions_comment-field_target_comments',
              3 => 'message-edgeryders_mentions_comment-field_target_nodes',
              4 => 'message-edgeryders_mentions_comment-field_target_users',
              5 => 'message-edgeryders_mentions_node-field_message_rendered_body',
              6 => 'message-edgeryders_mentions_node-field_message_rendered_subject',
              7 => 'message-edgeryders_mentions_node-field_target_nodes',
              8 => 'message-edgeryders_mentions_node-field_target_users',
            ),
            'message_type' => 
            array (
              0 => 'edgeryders_mentions_comment',
              1 => 'edgeryders_mentions_node',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'commons_follow' => 'commons_follow',
              'commons_notify' => 'commons_notify',
              'ctools' => 'ctools',
              'entity' => 'entity',
              'entityreference' => 'entityreference',
              'features' => 'features',
              'message' => 'message',
              'strongarm' => 'strongarm',
            ),
            'variable' => 
            array (
              'field_bundle_settings_message__edgeryders_mentions_comment' => 'field_bundle_settings_message__edgeryders_mentions_comment',
              'field_bundle_settings_message__edgeryders_mentions_node' => 'field_bundle_settings_message__edgeryders_mentions_node',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-dev',
      ),
      'node_convert' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/node_convert/node_convert.module',
        'basename' => 'node_convert.module',
        'name' => 'node_convert',
        'info' => 
        array (
          'name' => 'Node Convert',
          'description' => 'Converts one or more nodes between different node types.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'node_convert.install',
            1 => 'node_convert.module',
            2 => 'node_convert.rules.inc',
            3 => 'node_convert.test',
            4 => 'includes/book.node_convert.inc',
            5 => 'includes/forum.node_convert.inc',
            6 => 'includes/panels_node.node_convert.inc',
            7 => 'includes/uc_product.node_convert.inc',
          ),
          'version' => '7.x-1.1',
          'project' => 'node_convert',
          'datestamp' => '1354643829',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'ckeditor_mentions' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/ckeditor_mentions/ckeditor_mentions.module',
        'basename' => 'ckeditor_mentions.module',
        'name' => 'ckeditor_mentions',
        'info' => 
        array (
          'name' => 'CKEditor Mentions',
          'description' => 'CKEditor plugin for user mentioning and inserting.',
          'package' => 'User interface',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'realname',
            1 => 'views',
          ),
          'version' => '7.x-1.2',
          'project' => 'ckeditor_mentions',
          'datestamp' => '1376829400',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.2',
      ),
      'context_og' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/context_og/context_og.module',
        'basename' => 'context_og.module',
        'name' => 'context_og',
        'info' => 
        array (
          'name' => 'Context OG',
          'description' => 'Provides Organic Groups conditions and reactions for the Context module.',
          'package' => 'Context',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'og',
            1 => 'og_context',
            2 => 'ctools',
            3 => 'context',
          ),
          'version' => '7.x-2.1',
          'project' => 'context_og',
          'datestamp' => '1355739999',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.1',
      ),
      'admin_views' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/admin_views/admin_views.module',
        'basename' => 'admin_views.module',
        'name' => 'admin_views',
        'info' => 
        array (
          'name' => 'Administration views',
          'description' => 'Replaces all system object management pages in Drupal core with real views.',
          'package' => 'Administration',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'views_bulk_operations (>=7.x-3.2)',
          ),
          'files' => 
          array (
            0 => 'plugins/views_plugin_display_system.inc',
            1 => 'plugins/views_plugin_access_menu.inc',
            2 => 'tests/admin_views.test',
          ),
          'version' => '7.x-1.3',
          'project' => 'admin_views',
          'datestamp' => '1401347628',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.3',
      ),
      'menu_block_export' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/menu_block/menu_block_export.module',
        'basename' => 'menu_block_export.module',
        'name' => 'menu_block_export',
        'info' => 
        array (
          'name' => 'Menu Block Export',
          'description' => 'Provides export interface for Menu block module.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'menu_block',
          ),
          'files' => 
          array (
            0 => 'menu_block_export.module',
            1 => 'menu_block_export.admin.inc',
          ),
          'configure' => 'admin/config/user-interface/menu-block/export',
          'version' => '7.x-2.4',
          'project' => 'menu_block',
          'datestamp' => '1399238030',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.4',
      ),
      'menu_block' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/menu_block/menu_block.module',
        'basename' => 'menu_block.module',
        'name' => 'menu_block',
        'info' => 
        array (
          'name' => 'Menu Block',
          'description' => 'Provides configurable blocks of menu items.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'menu (>7.11)',
          ),
          'configure' => 'admin/config/user-interface/menu-block',
          'version' => '7.x-2.4',
          'project' => 'menu_block',
          'datestamp' => '1399238030',
          'php' => '5.2.4',
        ),
        'schema_version' => '7202',
        'version' => '7.x-2.4',
      ),
      'backup_migrate' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/backup_migrate/backup_migrate.module',
        'basename' => 'backup_migrate.module',
        'name' => 'backup_migrate',
        'info' => 
        array (
          'name' => 'Backup and Migrate',
          'description' => 'Backup or migrate the Drupal Database quickly and without unnecessary data.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'backup_migrate.module',
            1 => 'backup_migrate.install',
            2 => 'includes/destinations.inc',
            3 => 'includes/profiles.inc',
            4 => 'includes/schedules.inc',
          ),
          'configure' => 'admin/config/system/backup_migrate',
          'version' => '7.x-2.8',
          'project' => 'backup_migrate',
          'datestamp' => '1383686305',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7205',
        'version' => '7.x-2.8',
      ),
      'chart_views' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/chart/chart_views/chart_views.module',
        'basename' => 'chart_views.module',
        'name' => 'chart_views',
        'info' => 
        array (
          'name' => 'Chart API Views Integration',
          'description' => 'Provides a Google Chart API Views style.',
          'package' => 'Charting',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'views/chart_views_plugin_style_chart.inc',
          ),
          'dependencies' => 
          array (
            0 => 'chart',
            1 => 'views',
          ),
          'version' => '7.x-1.1',
          'project' => 'chart',
          'datestamp' => '1314765120',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'system_charts' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/chart/system_charts/system_charts.module',
        'basename' => 'system_charts.module',
        'name' => 'system_charts',
        'info' => 
        array (
          'name' => 'Drupal System Charting',
          'description' => 'Charting for various core modules.',
          'package' => 'Charting',
          'core' => '7.x',
          'php' => '5',
          'dependencies' => 
          array (
            0 => 'chart',
          ),
          'version' => '7.x-1.1',
          'project' => 'chart',
          'datestamp' => '1314765120',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'chart' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/chart/chart.module',
        'basename' => 'chart.module',
        'name' => 'chart',
        'info' => 
        array (
          'name' => 'Chart API',
          'description' => 'Google Chart API integration.',
          'package' => 'Charting',
          'core' => '7.x',
          'php' => '5',
          'version' => '7.x-1.1',
          'project' => 'chart',
          'datestamp' => '1314765120',
          'dependencies' => 
          array (
          ),
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'entity_translation_isoptional' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/entity_translation_isoptional/entity_translation_isoptional.module',
        'basename' => 'entity_translation_isoptional.module',
        'name' => 'entity_translation_isoptional',
        'info' => 
        array (
          'name' => 'Entity Translation Is Optional',
          'description' => 'Makes entity_translation usable for simple translation management by instructing users to specify a language only when wanting their content to be translated.',
          'dependencies' => 
          array (
            0 => 'entity_translation',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => '',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => NULL,
      ),
      'time_tracker_timer' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/time_tracker/timer/time_tracker_timer.module',
        'basename' => 'time_tracker_timer.module',
        'name' => 'time_tracker_timer',
        'info' => 
        array (
          'name' => 'Time Tracker Timer',
          'description' => 'Provides a timer function for the time tracker module.',
          'package' => 'Time Tracker',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'time_tracker',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'time_tracker',
          'datestamp' => '1370449610',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'time_sheet' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/time_tracker/time_sheet/time_sheet.module',
        'basename' => 'time_sheet.module',
        'name' => 'time_sheet',
        'info' => 
        array (
          'name' => 'Time Sheet',
          'description' => 'Provides time sheet functionality for extra accountability.',
          'package' => 'Time Tracker',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'time_tracker',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'time_tracker',
          'datestamp' => '1370449610',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'time_estimate' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/time_tracker/time_estimate/time_estimate.module',
        'basename' => 'time_estimate.module',
        'name' => 'time_estimate',
        'info' => 
        array (
          'name' => 'Time Estimate',
          'description' => 'Provides time estimate functionality.',
          'package' => 'Time Tracker',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'time_tracker',
          ),
          'files' => 
          array (
            0 => 'time_estimate.admin.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'time_tracker',
          'datestamp' => '1370449610',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'time_tracker' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/time_tracker/time_tracker.module',
        'basename' => 'time_tracker.module',
        'name' => 'time_tracker',
        'info' => 
        array (
          'name' => 'Time Tracker',
          'description' => 'Provides time tracking functionality nodes and comments.',
          'package' => 'Time Tracker',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'views_calc',
            2 => 'entity',
            3 => 'date_popup',
            4 => 'field',
          ),
          'files' => 
          array (
            0 => 'time_tracker.admin.inc',
            1 => 'time_tracker.theme.inc',
            2 => 'time_tracker.inc',
            3 => 'time_tracker.rules.inc',
            4 => 'views/time_tracker_views_handler_field_numeric.inc',
            5 => 'views/time_tracker_views_handler_field_total_duration.inc',
            6 => 'views/time_tracker_views_handler_filter_date.inc',
            7 => 'views/time_tracker_views_handler_relationship.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'time_tracker',
          'datestamp' => '1370449610',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-1.x-dev',
      ),
      'piwik' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/piwik/piwik.module',
        'basename' => 'piwik.module',
        'name' => 'piwik',
        'info' => 
        array (
          'name' => 'Piwik Web Analytics',
          'description' => 'Adds Piwik javascript tracking code to all your site\'s pages.',
          'core' => '7.x',
          'package' => 'Statistics',
          'configure' => 'admin/config/system/piwik',
          'files' => 
          array (
            0 => 'piwik.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-2.5',
          'project' => 'piwik',
          'datestamp' => '1402151028',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7204',
        'version' => '7.x-2.5',
      ),
      'context_ui' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/context/context_ui/context_ui.module',
        'basename' => 'context_ui.module',
        'name' => 'context_ui',
        'info' => 
        array (
          'name' => 'Context UI',
          'description' => 'Provides a simple UI for settings up a site structure using Context.',
          'dependencies' => 
          array (
            0 => 'context',
          ),
          'package' => 'Context',
          'core' => '7.x',
          'configure' => 'admin/structure/context',
          'files' => 
          array (
            0 => 'context.module',
            1 => 'tests/context_ui.test',
          ),
          'version' => '7.x-3.2',
          'project' => 'context',
          'datestamp' => '1390931314',
          'php' => '5.2.4',
        ),
        'schema_version' => '6004',
        'version' => '7.x-3.2',
      ),
      'context_layouts' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/context/context_layouts/context_layouts.module',
        'basename' => 'context_layouts.module',
        'name' => 'context_layouts',
        'info' => 
        array (
          'name' => 'Context layouts',
          'description' => 'Allow theme layer to provide multiple region layouts and integrate with context.',
          'dependencies' => 
          array (
            0 => 'context',
          ),
          'package' => 'Context',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'plugins/context_layouts_reaction_block.inc',
          ),
          'version' => '7.x-3.2',
          'project' => 'context',
          'datestamp' => '1390931314',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.2',
      ),
      'context' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/context/context.module',
        'basename' => 'context.module',
        'name' => 'context',
        'info' => 
        array (
          'name' => 'Context',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'description' => 'Provide modules with a cache that lasts for a single page request.',
          'package' => 'Context',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'tests/context.test',
            1 => 'tests/context.conditions.test',
            2 => 'tests/context.reactions.test',
          ),
          'version' => '7.x-3.2',
          'project' => 'context',
          'datestamp' => '1390931314',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-3.2',
      ),
      'image_captcha' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/captcha/image_captcha/image_captcha.module',
        'basename' => 'image_captcha.module',
        'name' => 'image_captcha',
        'info' => 
        array (
          'name' => 'Image CAPTCHA',
          'description' => 'Provides an image based CAPTCHA.',
          'package' => 'Spam control',
          'dependencies' => 
          array (
            0 => 'captcha',
          ),
          'core' => '7.x',
          'configure' => 'admin/config/people/captcha/image_captcha',
          'files' => 
          array (
            0 => 'image_captcha.install',
            1 => 'image_captcha.module',
            2 => 'image_captcha.admin.inc',
            3 => 'image_captcha.user.inc',
          ),
          'version' => '7.x-1.0',
          'project' => 'captcha',
          'datestamp' => '1372203950',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0',
      ),
      'captcha' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/captcha/captcha.module',
        'basename' => 'captcha.module',
        'name' => 'captcha',
        'info' => 
        array (
          'name' => 'CAPTCHA',
          'description' => 'Base CAPTCHA module for adding challenges to arbitrary forms.',
          'package' => 'Spam control',
          'core' => '7.x',
          'configure' => 'admin/config/people/captcha',
          'files' => 
          array (
            0 => 'captcha.module',
            1 => 'captcha.inc',
            2 => 'captcha.admin.inc',
            3 => 'captcha.install',
            4 => 'captcha.test',
          ),
          'version' => '7.x-1.0',
          'project' => 'captcha',
          'datestamp' => '1372203950',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-1.0',
      ),
      'admin_menu_toolbar' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/admin_menu/admin_menu_toolbar/admin_menu_toolbar.module',
        'basename' => 'admin_menu_toolbar.module',
        'name' => 'admin_menu_toolbar',
        'info' => 
        array (
          'name' => 'Administration menu Toolbar style',
          'description' => 'A better Toolbar.',
          'package' => 'Administration',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'admin_menu',
          ),
          'version' => '7.x-3.0-rc4',
          'project' => 'admin_menu',
          'datestamp' => '1359651687',
          'php' => '5.2.4',
        ),
        'schema_version' => '6300',
        'version' => '7.x-3.0-rc4',
      ),
      'admin_devel' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/admin_menu/admin_devel/admin_devel.module',
        'basename' => 'admin_devel.module',
        'name' => 'admin_devel',
        'info' => 
        array (
          'name' => 'Administration Development tools',
          'description' => 'Administration and debugging functionality for developers and site builders.',
          'package' => 'Administration',
          'core' => '7.x',
          'scripts' => 
          array (
            0 => 'admin_devel.js',
          ),
          'version' => '7.x-3.0-rc4',
          'project' => 'admin_menu',
          'datestamp' => '1359651687',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.0-rc4',
      ),
      'admin_menu' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/admin_menu/admin_menu.module',
        'basename' => 'admin_menu.module',
        'name' => 'admin_menu',
        'info' => 
        array (
          'name' => 'Administration menu',
          'description' => 'Provides a dropdown menu to most administrative tasks and other common destinations (to users with the proper permissions).',
          'package' => 'Administration',
          'core' => '7.x',
          'configure' => 'admin/config/administration/admin_menu',
          'dependencies' => 
          array (
            0 => 'system (>7.10)',
          ),
          'files' => 
          array (
            0 => 'tests/admin_menu.test',
          ),
          'version' => '7.x-3.0-rc4',
          'project' => 'admin_menu',
          'datestamp' => '1359651687',
          'php' => '5.2.4',
        ),
        'schema_version' => '7304',
        'version' => '7.x-3.0-rc4',
      ),
      'imce' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/imce/imce.module',
        'basename' => 'imce.module',
        'name' => 'imce',
        'info' => 
        array (
          'name' => 'IMCE',
          'description' => 'An image/file uploader and browser supporting personal directories and user quota.',
          'core' => '7.x',
          'package' => 'Media',
          'configure' => 'admin/config/media/imce',
          'version' => '7.x-1.8',
          'project' => 'imce',
          'datestamp' => '1387302359',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'version' => '7.x-1.8',
      ),
      'views_rdf' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_datasource/views_rdf.module',
        'basename' => 'views_rdf.module',
        'name' => 'views_rdf',
        'info' => 
        array (
          'name' => 'Views RDF',
          'description' => 'Views style plugin to render node content as RDF.',
          'package' => 'Views',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views/plugins/views_plugin_style_rdf.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'views_datasource',
          'datestamp' => '1393752505',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'views_xml' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_datasource/views_xml.module',
        'basename' => 'views_xml.module',
        'name' => 'views_xml',
        'info' => 
        array (
          'name' => 'Views XML',
          'description' => 'Views style plugin to render node content as XML.',
          'package' => 'Views',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views/plugins/views_plugin_style_xml.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'views_datasource',
          'datestamp' => '1393752505',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'views_xhtml' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_datasource/views_xhtml.module',
        'basename' => 'views_xhtml.module',
        'name' => 'views_xhtml',
        'info' => 
        array (
          'name' => 'Views XHTML',
          'description' => 'Views style plugin to render node content as XHTML microformats.',
          'package' => 'Views',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views/plugins/views_plugin_style_xhtml.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'views_datasource',
          'datestamp' => '1393752505',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'views_json' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_datasource/views_json.module',
        'basename' => 'views_json.module',
        'name' => 'views_json',
        'info' => 
        array (
          'name' => 'Views JSON',
          'description' => 'Views style plugin to render node content as JSON.',
          'package' => 'Views',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views/plugins/views_plugin_style_json.inc',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'views_datasource',
          'datestamp' => '1393752505',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.x-dev',
      ),
      'auth_ssl_redirect' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/auth_ssl_redirect/auth_ssl_redirect.module',
        'basename' => 'auth_ssl_redirect.module',
        'name' => 'auth_ssl_redirect',
        'info' => 
        array (
          'name' => 'Auth SSL Redirect',
          'description' => 'Redirect authenticated users to HTTPS when they visit HTTP',
          'core' => '7.x',
          'version' => '7.x-1.2',
          'project' => 'auth_ssl_redirect',
          'datestamp' => '1339691476',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.2',
      ),
      'field_group_test' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/field_group/tests/field_group_test.module',
        'basename' => 'field_group_test.module',
        'name' => 'field_group_test',
        'info' => 
        array (
          'name' => 'Fieldgroup Test',
          'description' => 'Test module for fieldgroup',
          'core' => '7.x',
          'package' => 'Fieldgroup',
          'version' => '7.x-1.3',
          'project' => 'field_group',
          'datestamp' => '1380124361',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.3',
      ),
      'field_group' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/field_group/field_group.module',
        'basename' => 'field_group.module',
        'name' => 'field_group',
        'info' => 
        array (
          'name' => 'Fieldgroup',
          'description' => 'Fieldgroup',
          'package' => 'Fields',
          'dependencies' => 
          array (
            0 => 'field',
            1 => 'ctools',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'field_group.install',
            1 => 'field_group.module',
            2 => 'field_group.field_ui.inc',
            3 => 'field_group.form.inc',
            4 => 'field_group.features.inc',
            5 => 'tests/field_group.ui.test',
            6 => 'tests/field_group.display.test',
          ),
          'version' => '7.x-1.3',
          'project' => 'field_group',
          'datestamp' => '1380124361',
          'php' => '5.2.4',
        ),
        'schema_version' => '7006',
        'version' => '7.x-1.3',
      ),
      'og_menu_single' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/og_menu_single/og_menu_single.module',
        'basename' => 'og_menu_single.module',
        'name' => 'og_menu_single',
        'info' => 
        array (
          'name' => 'OG Menu Single',
          'description' => 'Provides a single custom menu per organic group',
          'files' => 
          array (
            0 => 'og_menu.module',
            1 => 'tests/og_menu_singleBase.test',
          ),
          'dependencies' => 
          array (
            0 => 'menu',
            1 => 'og (2.x)',
            2 => 'og_context',
          ),
          'package' => 'Organic groups',
          'core' => '7.x',
          'version' => '7.x-1.0-beta1',
          'project' => 'og_menu_single',
          'datestamp' => '1377799596',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta1',
      ),
      'privatemsg_filter' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg_filter/privatemsg_filter.module',
        'basename' => 'privatemsg_filter.module',
        'name' => 'privatemsg_filter',
        'info' => 
        array (
          'name' => 'Privatemsg filter',
          'description' => 'Allow users to filter messages using tags or other criteria.',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
          ),
          'files' => 
          array (
            0 => 'privatemsg_filter.module',
            1 => 'privatemsg_filter.test',
          ),
          'configure' => 'admin/config/messaging/privatemsg/filter',
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'version' => '7.x-1.4',
      ),
      'pm_email_notify' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/pm_email_notify/pm_email_notify.module',
        'basename' => 'pm_email_notify.module',
        'name' => 'pm_email_notify',
        'info' => 
        array (
          'name' => 'Privatemsg Email Notification',
          'description' => 'Notifies users about new Private Messages via Email.',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
          ),
          'files' => 
          array (
            0 => 'pm_email_notify.module',
          ),
          'configure' => 'admin/config/messaging/privatemsg/notify',
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-1.4',
      ),
      'pm_block_user' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/pm_block_user/pm_block_user.module',
        'basename' => 'pm_block_user.module',
        'name' => 'pm_block_user',
        'info' => 
        array (
          'name' => 'Block user messages',
          'description' => 'Allows users to block other users from sending them messages.',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
          ),
          'files' => 
          array (
            0 => 'pm_block_user.module',
            1 => 'pm_block_user.pages.inc',
            2 => 'pm_block_user.test',
          ),
          'configure' => 'admin/config/messaging/privatemsg/block',
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'privatemsg_rules' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg_rules/privatemsg_rules.module',
        'basename' => 'privatemsg_rules.module',
        'name' => 'privatemsg_rules',
        'info' => 
        array (
          'name' => 'Privatemsg Rules Integrations',
          'description' => 'Integrates Rules with Privatemsg, allows to act on message events and send private messages',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
            1 => 'privatemsg_filter',
            2 => 'rules',
          ),
          'files' => 
          array (
            0 => 'privatemsg_rules.rules.inc',
          ),
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'privatemsg_realname' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg_realname/privatemsg_realname.module',
        'basename' => 'privatemsg_realname.module',
        'name' => 'privatemsg_realname',
        'info' => 
        array (
          'name' => 'Privatemsg Realname Integration',
          'description' => 'Provides reverse lookup for realnames',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
            1 => 'realname',
          ),
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'privatemsg_roles' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg_roles/privatemsg_roles.module',
        'basename' => 'privatemsg_roles.module',
        'name' => 'privatemsg_roles',
        'info' => 
        array (
          'name' => 'Privatemsg roles',
          'description' => 'Allows to send message to all members of a role.',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
          ),
          'files' => 
          array (
            0 => 'privatemsg_roles.module',
            1 => 'privatemsg_roles.test',
          ),
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'privatemsg_limits' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg_limits/privatemsg_limits.module',
        'basename' => 'privatemsg_limits.module',
        'name' => 'privatemsg_limits',
        'info' => 
        array (
          'name' => 'Privatemsg Limits',
          'description' => 'Allows to define limits for private messages including amount of sent messages per timeframe and number of recipients',
          'package' => 'Mail',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'privatemsg',
          ),
          'files' => 
          array (
            0 => 'privatemsg_limits.test',
          ),
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'privatemsg' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/privatemsg/privatemsg.module',
        'basename' => 'privatemsg.module',
        'name' => 'privatemsg',
        'info' => 
        array (
          'name' => 'Private messages',
          'description' => 'Allow private messages between users.',
          'package' => 'Mail',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'privatemsg.module',
            1 => 'privatemsg.test',
            2 => 'views/views_handler_field_privatemsg_link.inc',
            3 => 'views/privatemsg.views.inc',
            4 => 'privatemsg.theme.inc',
            5 => 'privatemsg.pages.inc',
            6 => 'privatemsg.admin.inc',
          ),
          'configure' => 'admin/config/messaging/privatemsg',
          'test_dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-1.4',
          'project' => 'privatemsg',
          'datestamp' => '1374126669',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7006',
        'version' => '7.x-1.4',
      ),
      'rules_link' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules_link/rules_link.module',
        'basename' => 'rules_link.module',
        'name' => 'rules_link',
        'info' => 
        array (
          'name' => 'Rules Link',
          'description' => 'Attach link to entities for triggering Rules components.',
          'package' => 'Rules',
          'core' => '7.x',
          'configure' => 'admin/config/workflow/rules_links',
          'dependencies' => 
          array (
            0 => 'rules',
          ),
          'files' => 
          array (
            0 => 'rules_link.views.inc',
            1 => 'rules_link.admin.inc',
            2 => 'rules_link.test',
          ),
          'version' => '7.x-1.1',
          'project' => 'rules_link',
          'datestamp' => '1409148229',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'rules_link_i18n' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules_link/rules_link_i18n.module',
        'basename' => 'rules_link_i18n.module',
        'name' => 'rules_link_i18n',
        'info' => 
        array (
          'name' => 'Rules link translation',
          'description' => 'Allows translating Rules links.',
          'dependencies' => 
          array (
            0 => 'rules_link',
            1 => 'i18n_string',
          ),
          'package' => 'Multilingual - Internationalization',
          'core' => '7.x',
          'version' => '7.x-1.1',
          'project' => 'rules_link',
          'datestamp' => '1409148229',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'front_page' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/front/front_page.module',
        'basename' => 'front_page.module',
        'name' => 'front_page',
        'info' => 
        array (
          'name' => 'Front Page',
          'description' => 'Allows site admins setup custom front pages for the site.',
          'package' => 'Administration',
          'core' => '7.x',
          'configure' => 'admin/config/front/settings',
          'version' => '7.x-2.4',
          'project' => 'front',
          'datestamp' => '1370619956',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'version' => '7.x-2.4',
      ),
      'securelogin' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/securelogin/securelogin.module',
        'basename' => 'securelogin.module',
        'name' => 'securelogin',
        'info' => 
        array (
          'name' => 'Secure Login',
          'description' => 'Enables secure login.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'securelogin.admin.inc',
            1 => 'securelogin.install',
            2 => 'securelogin.module',
          ),
          'configure' => 'admin/config/people/securelogin',
          'version' => '7.x-1.4',
          'project' => 'securelogin',
          'datestamp' => '1360634214',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-1.4',
      ),
      'migrate_d2d_edgeryders' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/migrate_d2d_edgeryders/migrate_d2d_edgeryders.module',
        'basename' => 'migrate_d2d_edgeryders.module',
        'name' => 'migrate_d2d_edgeryders',
        'info' => 
        array (
          'name' => 'Edgeryders D6 to D7 migration',
          'description' => 'Migrate edgeryders.eu content from D6 site to D7.',
          'package' => 'Development',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'migrate',
            1 => 'migrate_d2d',
          ),
          'files' => 
          array (
            0 => 'migrations.inc',
          ),
          'version' => '7.x-1.0',
          'project' => 'migrate_d2d_edgeryders',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0',
      ),
      'services_basic_auth' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services_basic_auth/services_basic_auth.module',
        'basename' => 'services_basic_auth.module',
        'name' => 'services_basic_auth',
        'info' => 
        array (
          'name' => 'Services basic authentication',
          'description' => 'Provides HTTP basic authentication for the services module',
          'core' => '7.x',
          'package' => 'Services - authentication',
          'dependencies' => 
          array (
            0 => 'services',
          ),
          'version' => '7.x-1.1',
          'project' => 'services_basic_auth',
          'datestamp' => '1355402932',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'elfinder_bueditor' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/elfinder/modules/elfinder_bueditor/elfinder_bueditor.module',
        'basename' => 'elfinder_bueditor.module',
        'name' => 'elfinder_bueditor',
        'info' => 
        array (
          'name' => 'elFinder BUEditor integration',
          'description' => 'Adding elFinder to BUEditor Insert Image dialog',
          'package' => 'User interface',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'bueditor',
            1 => 'elfinder',
          ),
          'version' => '7.x-2.x-dev',
          'project' => 'elfinder',
          'datestamp' => '1387749813',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.x-dev',
      ),
      'elfinder_ffsel' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/elfinder/modules/elfinder_ffsel/elfinder_ffsel.module',
        'basename' => 'elfinder_ffsel.module',
        'name' => 'elfinder_ffsel',
        'info' => 
        array (
          'name' => 'elFinder File Field Source',
          'description' => 'File Field Sources elFinder connector',
          'package' => 'User interface',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'filefield_sources',
            1 => 'elfinder',
          ),
          'version' => '7.x-2.x-dev',
          'project' => 'elfinder',
          'datestamp' => '1387749813',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.x-dev',
      ),
      'elfinder' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/elfinder/elfinder.module',
        'basename' => 'elfinder.module',
        'name' => 'elfinder',
        'info' => 
        array (
          'name' => 'elFinder',
          'description' => 'AJAX file manager with Wysiwyg API capable editors support.',
          'package' => 'User interface',
          'configure' => 'admin/config/media/elfinder',
          'core' => '7.x',
          'version' => '7.x-2.x-dev',
          'project' => 'elfinder',
          'datestamp' => '1387749813',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7102',
        'version' => '7.x-2.x-dev',
      ),
      'reroute_email' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/reroute_email/reroute_email.module',
        'basename' => 'reroute_email.module',
        'name' => 'reroute_email',
        'info' => 
        array (
          'name' => 'Reroute emails',
          'description' => 'Reroutes emails send from the site to a predefined email. Useful for test sites.',
          'package' => 'Development',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'reroute_email.test',
          ),
          'configure' => 'admin/config/development/reroute_email',
          'version' => '7.x-1.1+28-dev',
          'project' => 'reroute_email',
          'datestamp' => '1382643190',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'version' => '7.x-1.1+28-dev',
      ),
      'riddler' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/riddler/riddler.module',
        'basename' => 'riddler.module',
        'name' => 'riddler',
        'info' => 
        array (
          'name' => 'Captcha Riddler',
          'description' => 'Allows site administrators to add a simple question to form validation',
          'core' => '7.x',
          'package' => 'Spam control',
          'dependencies' => 
          array (
            0 => 'captcha',
          ),
          'configure' => 'admin/user/captcha/riddler',
          'version' => '7.x-1.2',
          'project' => 'riddler',
          'datestamp' => '1305750116',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.2',
      ),
      'views_calc' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/views_calc/views_calc.module',
        'basename' => 'views_calc.module',
        'name' => 'views_calc',
        'info' => 
        array (
          'name' => 'Views Calc',
          'description' => 'This module will allow you to add calculated fields to views tables and compute columns of numeric data in a views table.',
          'core' => '7.x',
          'package' => 'Views',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views_calc_table.inc',
            1 => 'theme.inc',
            2 => 'views-calc-table.tpl.php',
            3 => 'views_calc.install',
            4 => 'views_calc.module',
            5 => 'views_calc.views.inc',
            6 => 'views_calc_field_handler.inc',
            7 => 'views_calc_handler_sort.inc',
          ),
          'version' => '7.x-1.1',
          'project' => 'views_calc',
          'datestamp' => '1395748160',
          'php' => '5.2.4',
        ),
        'schema_version' => '6000',
        'version' => '7.x-1.1',
      ),
      'auto_index' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/auto_indexer/auto_index.module',
        'basename' => 'auto_index.module',
        'name' => 'auto_index',
        'info' => 
        array (
          'name' => 'Auto-Index',
          'description' => 'Automatically updates the search index after a node has been added/updated.',
          'dependencies' => 
          array (
            0 => 'search',
          ),
          'package' => 'Search',
          'core' => '7.x',
          'version' => '7.x-1.2',
          'project' => 'auto_indexer',
          'datestamp' => '1433858882',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.2',
      ),
      'metatag_devel' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_devel/metatag_devel.module',
        'basename' => 'metatag_devel.module',
        'name' => 'metatag_devel',
        'info' => 
        array (
          'name' => 'Metatag:Devel',
          'description' => 'Provides development / debugging functionality for the Metatag module. Integrates with Devel Generate.',
          'package' => 'Development',
          'core' => '7.x',
          'tags' => 
          array (
            0 => 'developer',
          ),
          'dependencies' => 
          array (
            0 => 'metatag',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_twitter_cards' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_twitter_cards/metatag_twitter_cards.module',
        'basename' => 'metatag_twitter_cards.module',
        'name' => 'metatag_twitter_cards',
        'info' => 
        array (
          'name' => 'Metatag: Twitter Cards',
          'description' => 'Provides support for Twitter\'s Card meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_views' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_views/metatag_views.module',
        'basename' => 'metatag_views.module',
        'name' => 'metatag_views',
        'info' => 
        array (
          'name' => 'Metatag: Views',
          'description' => 'Provides Metatag integration within the Views interface.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag',
            1 => 'views',
          ),
          'files' => 
          array (
            0 => 'metatag_views_plugin_display_extender_metatags.inc',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_panels' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_panels/metatag_panels.module',
        'basename' => 'metatag_panels.module',
        'name' => 'metatag_panels',
        'info' => 
        array (
          'name' => 'Metatag: Panels',
          'description' => 'Provides Metatag integration within the Panels interface.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'metatag',
            2 => 'panels',
            3 => 'token',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_opengraph' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_opengraph/metatag_opengraph.module',
        'basename' => 'metatag_opengraph.module',
        'name' => 'metatag_opengraph',
        'info' => 
        array (
          'name' => 'Metatag: Open Graph',
          'description' => 'Provides support for open graph meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_dc' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_dc/metatag_dc.module',
        'basename' => 'metatag_dc.module',
        'name' => 'metatag_dc',
        'info' => 
        array (
          'name' => 'Metatag: Dublin Core',
          'description' => 'Provides the fifteen <a href="http://dublincore.org/documents/dces/">Dublin Core Metadata Element Set 1.1</a> meta tags from the <a href="http://dublincore.org/">Dublin Core Metadata Institute</a>.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag_context' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag_context/metatag_context.module',
        'basename' => 'metatag_context.module',
        'name' => 'metatag_context',
        'info' => 
        array (
          'name' => 'Metatag: Context',
          'description' => 'Assigned Metatag using Context definitions, allowing them to be assigned by path and other criteria.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'context',
            1 => 'metatag',
          ),
          'files' => 
          array (
            0 => 'metatag_context.test',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta9',
      ),
      'metatag' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/metatag/metatag.module',
        'basename' => 'metatag.module',
        'name' => 'metatag',
        'info' => 
        array (
          'name' => 'Metatag',
          'description' => 'Adds support and an API to implement meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'system (>=7.15)',
            1 => 'ctools',
            2 => 'token',
          ),
          'configure' => 'admin/config/search/metatags',
          'files' => 
          array (
            0 => 'metatag.inc',
            1 => 'metatag.migrate.inc',
            2 => 'metatag.test',
          ),
          'version' => '7.x-1.0-beta9',
          'project' => 'metatag',
          'datestamp' => '1390103307',
          'php' => '5.2.4',
        ),
        'schema_version' => '7022',
        'version' => '7.x-1.0-beta9',
      ),
      'googleanalytics' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/google_analytics/googleanalytics.module',
        'basename' => 'googleanalytics.module',
        'name' => 'googleanalytics',
        'info' => 
        array (
          'name' => 'Google Analytics',
          'description' => 'Allows your site to be tracked by Google Analytics by adding a Javascript tracking code to every page.',
          'core' => '7.x',
          'package' => 'Statistics',
          'configure' => 'admin/config/system/googleanalytics',
          'files' => 
          array (
            0 => 'googleanalytics.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-1.4',
          'project' => 'google_analytics',
          'datestamp' => '1382021586',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7007',
        'version' => '7.x-1.4',
      ),
      'og_token' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/og_token/og_token.module',
        'basename' => 'og_token.module',
        'name' => 'og_token',
        'info' => 
        array (
          'name' => 'OG Token',
          'description' => 'Provides a token to retrieve Organic Groups\' groups audience labels',
          'core' => '7.x',
          'package' => 'Organic groups',
          'dependencies' => 
          array (
            0 => 'og',
            1 => 'token',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => NULL,
      ),
      'comment_alter' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/comment_alter/comment_alter.module',
        'basename' => 'comment_alter.module',
        'name' => 'comment_alter',
        'info' => 
        array (
          'name' => 'Comment alter',
          'description' => 'Provides UI to alter nodes\' parameters from comment forms.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'comment',
            1 => 'diff (3.x)',
          ),
          'files' => 
          array (
            0 => 'comment_alter.test',
          ),
          'version' => '7.x-1.0-rc4+23-dev',
          'project' => 'comment_alter',
          'datestamp' => '1395681268',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-rc4+23-dev',
      ),
      'save_edit' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/save_edit/save_edit.module',
        'basename' => 'save_edit.module',
        'name' => 'save_edit',
        'info' => 
        array (
          'name' => 'Save & Edit',
          'description' => 'Gives a "<a href="http://drupal.org/project/save_edit">Save & Edit</a>" button on node pages. No Kittens were harmed during the creation of this module.',
          'package' => 'Administration',
          'core' => '7.x',
          'configure' => 'admin/config/content/save-edit',
          'version' => '7.x-1.0-beta1',
          'project' => 'save_edit',
          'datestamp' => '1340830936',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-beta1',
      ),
      'mentions' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/mentions/mentions.module',
        'basename' => 'mentions.module',
        'name' => 'mentions',
        'info' => 
        array (
          'name' => 'Mentions',
          'description' => 'Adds Twitter like @username linking and tracking features.',
          'core' => '7.x',
          'package' => 'Filters',
          'configure' => 'admin/config/content/mentions',
          'dependencies' => 
          array (
            0 => 'filter',
          ),
          'files' => 
          array (
            0 => 'includes/views/handlers/mentions_views_handler_field_content.inc',
            1 => 'includes/views/handlers/mentions_views_handler_field_link.inc',
            2 => 'includes/views/handlers/mentions_views_handler_field_title.inc',
            3 => 'tests/mentions.test',
          ),
          'version' => '7.x-1.x-dev',
          'project' => 'mentions',
          'datestamp' => '1395199456',
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'version' => '7.x-1.x-dev',
      ),
      'edgesense' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/contrib/edgesense/edgesense.module',
        'basename' => 'edgesense.module',
        'name' => 'edgesense',
        'info' => 
        array (
          'name' => 'Edgesense',
          'description' => 'Social network analytics for Drupal communities.',
          'version' => '0.99.5',
          'core' => '7.x',
          'configure' => 'admin/edgesense',
          'dependencies' => 
          array (
            0 => 'views_json',
          ),
          'files' => 
          array (
            0 => 'edgesense.views.inc',
            1 => 'edgesense_views_access_plugin.inc',
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '0.99.5',
      ),
      'google_analytics_views' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/google_analytics_reports/google_analytics_views/google_analytics_views.module',
        'basename' => 'google_analytics_views.module',
        'name' => 'google_analytics_views',
        'info' => 
        array (
          'name' => 'Google Analytics Views',
          'package' => 'Statistics',
          'description' => 'API to access statistics from the Google Analytics Data Export API.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'google_analytics_api',
          ),
          'files' => 
          array (
            0 => 'google_analytics_views.module',
            1 => 'google_analytics_views.views.inc',
            2 => 'plugins/google_analytics_plugin_query_google_analytics.inc',
            3 => 'handlers/google_analytics_handler_filter_startend.inc',
            4 => 'handlers/google_analytics_handler_filter_string.inc',
            5 => 'handlers/google_analytics_handler_filter_numeric.inc',
            6 => 'handlers/google_analytics_handler_field_string.inc',
            7 => 'handlers/google_analytics_handler_argument_string.inc',
          ),
          'version' => '7.x-3.x-dev',
          'project' => 'google_analytics_reports',
          'datestamp' => '1380581200',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.x-dev',
      ),
      'google_analytics_reports' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/google_analytics_reports/google_analytics_reports/google_analytics_reports.module',
        'basename' => 'google_analytics_reports.module',
        'name' => 'google_analytics_reports',
        'info' => 
        array (
          'name' => 'Google Analytics Reports',
          'package' => 'Statistics',
          'description' => 'Provides interface to access Google Analytics API statistics.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'google_analytics_api',
            1 => 'chart',
          ),
          'files' => 
          array (
            0 => 'google_analytics_reports.blocks.inc',
            1 => 'google_analytics_reports.css',
            2 => 'google_analytics_reports.install',
            3 => 'google_analytics_reports.module',
            4 => 'google_analytics_reports.pages.inc',
            5 => 'google_analytics_reports.theme.inc',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'google_analytics_reports.css',
            ),
          ),
          'scripts' => 
          array (
            0 => 'google_analytics_reports.js',
          ),
          'version' => '7.x-3.x-dev',
          'project' => 'google_analytics_reports',
          'datestamp' => '1380581200',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.x-dev',
      ),
      'google_analytics_api' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/google_analytics_reports/google_analytics_api.module',
        'basename' => 'google_analytics_api.module',
        'name' => 'google_analytics_api',
        'info' => 
        array (
          'name' => 'Google Analytics API',
          'package' => 'Statistics',
          'description' => 'API to access statistics from the Google Analytics Data Export API.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'oauth_common',
          ),
          'files' => 
          array (
            0 => 'GAFeed.lib.inc',
            1 => 'google_analytics_api.install',
            2 => 'google_analytics_api.module',
            3 => 'google_analytics_api.pages.inc',
          ),
          'configure' => 'admin/config/system/google-analytics-reports',
          'version' => '7.x-3.x-dev',
          'project' => 'google_analytics_reports',
          'datestamp' => '1380581200',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.x-dev',
      ),
      'l10n_update' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/l10n_update/l10n_update.module',
        'basename' => 'l10n_update.module',
        'name' => 'l10n_update',
        'info' => 
        array (
          'name' => 'Localization update',
          'description' => 'Provides automatic downloads and updates for translations.',
          'dependencies' => 
          array (
            0 => 'locale',
          ),
          'core' => '7.x',
          'package' => 'Multilingual',
          'files' => 
          array (
            0 => 'includes/gettext/PoHeader.php',
            1 => 'includes/gettext/PoItem.php',
            2 => 'includes/gettext/PoMemoryWriter.php',
            3 => 'includes/gettext/PoMetadataInterface.php',
            4 => 'includes/gettext/PoReaderInterface.php',
            5 => 'includes/gettext/PoStreamInterface.php',
            6 => 'includes/gettext/PoStreamReader.php',
            7 => 'includes/gettext/PoStreamWriter.php',
            8 => 'includes/gettext/PoWriterInterface.php',
            9 => 'includes/locale/Gettext.php',
            10 => 'includes/locale/PoDatabaseReader.php',
            11 => 'includes/locale/PoDatabaseWriter.php',
            12 => 'includes/locale/SourceString.php',
            13 => 'includes/locale/StringBase.php',
            14 => 'includes/locale/StringDatabaseStorage.php',
            15 => 'includes/locale/StringInterface.php',
            16 => 'includes/locale/StringStorageException.php',
            17 => 'includes/locale/StringStorageInterface.php',
            18 => 'includes/locale/TranslationString.php',
            19 => 'includes/locale/TranslationsStreamWrapper.php',
            20 => 'tests/L10nUpdateCronTest.test',
            21 => 'tests/L10nUpdateInterfaceTest.test',
            22 => 'tests/L10nUpdateTest.test',
            23 => 'tests/L10nUpdateTestBase.test',
          ),
          'version' => '7.x-2.0-rc1',
          'project' => 'l10n_update',
          'datestamp' => '1407338629',
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'version' => '7.x-2.0-rc1',
      ),
      'content_experiments' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/content_experiments/content_experiments.module',
        'basename' => 'content_experiments.module',
        'name' => 'content_experiments',
        'info' => 
        array (
          'name' => 'Google Content Experiments',
          'description' => 'Allows inserting Google Content Experiments code in the header of any node page view.',
          'core' => '7.x',
          'configure' => 'admin/config/system/content-experiments',
          'files' => 
          array (
            0 => 'content_experiments.module',
            1 => 'content_experiments.admin.inc',
            2 => 'content_experiments.install',
          ),
          'version' => '7.x-1.4',
          'project' => 'content_experiments',
          'datestamp' => '1374871571',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'special_menu_items' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/special_menu_items/special_menu_items.module',
        'basename' => 'special_menu_items.module',
        'name' => 'special_menu_items',
        'info' => 
        array (
          'name' => 'Special menu items',
          'description' => 'Allow users to add placeholder and/or separator menu items.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'menu',
          ),
          'configure' => 'admin/config/system/special_menu_items',
          'version' => '7.x-2.0',
          'project' => 'special_menu_items',
          'datestamp' => '1346788411',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-2.0',
      ),
      'comment_goodness' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/comment_goodness/comment_goodness.module',
        'basename' => 'comment_goodness.module',
        'name' => 'comment_goodness',
        'info' => 
        array (
          'name' => 'Comment goodness',
          'description' => 'Provides comment sorting, comment form placement and comment form configuration settings',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'comment',
          ),
          'files' => 
          array (
            0 => 'tests/comment_goodness.test',
          ),
          'version' => '7.x-1.4',
          'project' => 'comment_goodness',
          'datestamp' => '1351554675',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.4',
      ),
      'filefield_sources' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/filefield_sources/filefield_sources.module',
        'basename' => 'filefield_sources.module',
        'name' => 'filefield_sources',
        'info' => 
        array (
          'name' => 'File Field Sources',
          'description' => 'Extends File fields to allow referencing of existing files, remote files, and server files.',
          'dependencies' => 
          array (
            0 => 'file',
          ),
          'package' => 'Fields',
          'core' => '7.x',
          'version' => '7.x-1.9',
          'project' => 'filefield_sources',
          'datestamp' => '1383155428',
          'php' => '5.2.4',
        ),
        'schema_version' => '6001',
        'version' => '7.x-1.9',
      ),
      'edgeryders_users_overrides' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/edgeryders_users_overrides/edgeryders_users_overrides.module',
        'basename' => 'edgeryders_users_overrides.module',
        'name' => 'edgeryders_users_overrides',
        'info' => 
        array (
          'name' => 'Edgeryders users overrides',
          'description' => 'Edgeryders user settings overriden by Drupal Commons',
          'core' => '7.x',
          'package' => 'Edgeryders',
          'version' => '7.x-1.0-dev',
          'project' => 'edgeryders_users_overrides',
          'dependencies' => 
          array (
            0 => 'features_override',
            1 => 'realname',
          ),
          'features' => 
          array (
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'features_override_items' => 
            array (
              0 => 'variable.realname_pattern',
            ),
            'features_overrides' => 
            array (
              0 => 'variable.realname_pattern.value',
            ),
            'user_permission' => 
            array (
              0 => 'administer realname',
              1 => 'execute realname_action_realname_update',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'actions_permissions' => 'actions_permissions',
              'commons_profile_base' => 'commons_profile_base',
              'features' => 'features',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0-dev',
      ),
      'bef_test_content' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/better_exposed_filters/tests/bef_test_content/bef_test_content.module',
        'basename' => 'bef_test_content.module',
        'name' => 'bef_test_content',
        'info' => 
        array (
          'name' => 'BEF Test Content',
          'description' => 'Content and Views for testing Better Exposed Filters.',
          'core' => '7.x',
          'package' => 'BEF Tests',
          'php' => '5.2.4',
          'dependencies' => 
          array (
            0 => 'better_exposed_filters',
            1 => 'date',
            2 => 'features',
            3 => 'list',
            4 => 'number',
            5 => 'taxonomy',
            6 => 'text',
            7 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:1',
            ),
            'field_base' => 
            array (
              0 => 'body',
              1 => 'field_date',
              2 => 'field_integer',
              3 => 'field_letters',
              4 => 'field_location',
              5 => 'field_numbers',
              6 => 'field_price',
            ),
            'field_instance' => 
            array (
              0 => 'node-bef_test-body',
              1 => 'node-bef_test-field_date',
              2 => 'node-bef_test-field_integer',
              3 => 'node-bef_test-field_letters',
              4 => 'node-bef_test-field_location',
              5 => 'node-bef_test-field_numbers',
              6 => 'node-bef_test-field_price',
            ),
            'node' => 
            array (
              0 => 'bef_test',
            ),
            'taxonomy' => 
            array (
              0 => 'location',
            ),
            'views_view' => 
            array (
              0 => 'bef_test_view',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'options' => 'options',
            ),
            'field' => 
            array (
              'node-bef_test-body' => 'node-bef_test-body',
              'node-bef_test-field_letters' => 'node-bef_test-field_letters',
              'node-bef_test-field_numbers' => 'node-bef_test-field_numbers',
              'node-bef_test-field_location' => 'node-bef_test-field_location',
              'node-bef_test-field_integer' => 'node-bef_test-field_integer',
              'node-bef_test-field_price' => 'node-bef_test-field_price',
              'node-bef_test-field_date' => 'node-bef_test-field_date',
            ),
          ),
          'version' => '7.x-3.0-beta4',
          'project' => 'better_exposed_filters',
          'datestamp' => '1392255206',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.0-beta4',
      ),
      'better_exposed_filters' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/better_exposed_filters/better_exposed_filters.module',
        'basename' => 'better_exposed_filters.module',
        'name' => 'better_exposed_filters',
        'info' => 
        array (
          'name' => 'Better Exposed Filters',
          'description' => 'Allow the use of checkboxes or radio buttons for exposed Views filters',
          'core' => '7.x',
          'package' => 'Views',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'better_exposed_filters_exposed_form_plugin.inc',
            1 => 'tests/better_exposed_filters.test',
          ),
          'version' => '7.x-3.0-beta4',
          'project' => 'better_exposed_filters',
          'datestamp' => '1392255206',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-3.0-beta4',
      ),
      'commons_tasks' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/commons_tasks/commons_tasks.module',
        'basename' => 'commons_tasks.module',
        'name' => 'commons_tasks',
        'info' => 
        array (
          'name' => 'Commons Posts',
          'description' => 'Commons Task content type',
          'core' => '7.x',
          'package' => 'Commons - Content types',
          'php' => '5.2.4',
          'project' => 'commons_tasks',
          'dependencies' => 
          array (
            0 => 'commons_groups',
            1 => 'features_override',
            2 => 'field_group',
            3 => 'variable_admin',
            4 => 'strongarm',
            5 => 'views',
            6 => 'views_litepager',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:1',
            ),
            'field_instance' => 
            array (
              0 => 'node-task-body',
              1 => 'node-task-field_topics',
            ),
            'node' => 
            array (
              0 => 'task',
            ),
            'og_features_permission' => 
            array (
              0 => 'node:group:create task content',
              1 => 'node:group:delete any task content',
              2 => 'node:group:delete own task content',
              3 => 'node:group:update any task content',
              4 => 'node:group:update own task content',
            ),
            'user_permission' => 
            array (
              0 => 'create task content',
              1 => 'delete any task content',
              2 => 'delete own task content',
              3 => 'edit any task content',
              4 => 'edit own task content',
            ),
            'variable' => 
            array (
              0 => 'comment_anonymous_task',
              1 => 'comment_default_mode_task',
              2 => 'comment_default_per_page_task',
              3 => 'comment_form_location_task',
              4 => 'comment_task',
              5 => 'comment_preview_task',
              6 => 'comment_subject_field_task',
              7 => 'field_bundle_settings_node__task',
              8 => 'menu_options_task',
              9 => 'menu_parent_task',
              10 => 'node_options_task',
              11 => 'node_preview_task',
              12 => 'node_submitted_task',
            ),
            'views_view' => 
            array (
              0 => 'commons_bw_tasks',
            ),
          ),
          'version' => '7.x-3.2',
          'datestamp' => '1365037214',
        ),
        'schema_version' => '7001',
        'version' => '7.x-3.2',
      ),
      'help_example' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/advanced_help/help_example/help_example.module',
        'basename' => 'help_example.module',
        'name' => 'help_example',
        'info' => 
        array (
          'name' => 'Advanced help example',
          'description' => 'A example help module to demonstrate the advanced help module.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'advanced_help',
          ),
          'version' => '7.x-1.1',
          'project' => 'advanced_help',
          'datestamp' => '1386871727',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'advanced_help' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/advanced_help/advanced_help.module',
        'basename' => 'advanced_help.module',
        'name' => 'advanced_help',
        'info' => 
        array (
          'name' => 'Advanced help',
          'description' => 'Allow advanced help and documentation.',
          'core' => '7.x',
          'version' => '7.x-1.1',
          'project' => 'advanced_help',
          'datestamp' => '1386871727',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.1',
      ),
      'linkchecker' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/linkchecker/linkchecker.module',
        'basename' => 'linkchecker.module',
        'name' => 'linkchecker',
        'info' => 
        array (
          'name' => 'Link checker',
          'description' => 'Periodically checks for broken links in node types, blocks and fields and reports the results.',
          'configure' => 'admin/config/content/linkchecker',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'linkchecker.drush.inc',
            1 => 'linkchecker.test',
          ),
          'version' => '7.x-1.1',
          'project' => 'linkchecker',
          'datestamp' => '1360849273',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7011',
        'version' => '7.x-1.1',
      ),
      'gravatar' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/gravatar/gravatar.module',
        'basename' => 'gravatar.module',
        'name' => 'gravatar',
        'info' => 
        array (
          'name' => 'Gravatar',
          'description' => 'Integrate Gravatar pictures registered at Gravatar.com in Drupal sites',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'gravatar.module',
            1 => 'gravatar.install',
            2 => 'gravatar.admin.inc',
          ),
          'configure' => 'admin/config/people/gravatar',
          'version' => '7.x-1.1',
          'project' => 'gravatar',
          'datestamp' => '1297971182',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '6000',
        'version' => '7.x-1.1',
      ),
      'jquery_update' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/jquery_update/jquery_update.module',
        'basename' => 'jquery_update.module',
        'name' => 'jquery_update',
        'info' => 
        array (
          'name' => 'jQuery Update',
          'description' => 'Update jQuery and jQuery UI to a more recent version.',
          'package' => 'User interface',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'jquery_update.module',
            1 => 'jquery_update.install',
          ),
          'configure' => 'admin/config/development/jquery_update',
          'version' => '7.x-2.4',
          'project' => 'jquery_update',
          'datestamp' => '1396482246',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'version' => '7.x-2.4',
      ),
      'services_views' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/services_views/services_views.module',
        'basename' => 'services_views.module',
        'name' => 'services_views',
        'info' => 
        array (
          'name' => 'Services Views',
          'description' => 'Build service endpoints with Views.',
          'package' => 'Services',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'services',
            1 => 'views',
          ),
          'files' => 
          array (
            0 => 'includes/views/views_plugin_display_services.inc',
          ),
          'version' => '7.x-1.0',
          'project' => 'services_views',
          'datestamp' => '1388679507',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-1.0',
      ),
      'rules_scheduler' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules/rules_scheduler/rules_scheduler.module',
        'basename' => 'rules_scheduler.module',
        'name' => 'rules_scheduler',
        'info' => 
        array (
          'name' => 'Rules Scheduler',
          'description' => 'Schedule the execution of Rules components using actions.',
          'dependencies' => 
          array (
            0 => 'rules',
          ),
          'package' => 'Rules',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules_scheduler.admin.inc',
            1 => 'rules_scheduler.module',
            2 => 'rules_scheduler.install',
            3 => 'rules_scheduler.rules.inc',
            4 => 'rules_scheduler.test',
            5 => 'includes/rules_scheduler.handler.inc',
            6 => 'includes/rules_scheduler.views_default.inc',
            7 => 'includes/rules_scheduler.views.inc',
            8 => 'includes/rules_scheduler_views_filter.inc',
          ),
          'version' => '7.x-2.7',
          'project' => 'rules',
          'datestamp' => '1399041230',
          'php' => '5.2.4',
        ),
        'schema_version' => '7204',
        'version' => '7.x-2.7',
      ),
      'rules_admin' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules/rules_admin/rules_admin.module',
        'basename' => 'rules_admin.module',
        'name' => 'rules_admin',
        'info' => 
        array (
          'name' => 'Rules UI',
          'description' => 'Administrative interface for managing rules.',
          'package' => 'Rules',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules_admin.module',
            1 => 'rules_admin.inc',
          ),
          'dependencies' => 
          array (
            0 => 'rules',
          ),
          'version' => '7.x-2.7',
          'project' => 'rules',
          'datestamp' => '1399041230',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.7',
      ),
      'rules_i18n' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules/rules_i18n/rules_i18n.module',
        'basename' => 'rules_i18n.module',
        'name' => 'rules_i18n',
        'info' => 
        array (
          'name' => 'Rules translation',
          'description' => 'Allows translating rules.',
          'dependencies' => 
          array (
            0 => 'rules',
            1 => 'i18n_string',
          ),
          'package' => 'Multilingual - Internationalization',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules_i18n.i18n.inc',
            1 => 'rules_i18n.rules.inc',
            2 => 'rules_i18n.test',
          ),
          'version' => '7.x-2.7',
          'project' => 'rules',
          'datestamp' => '1399041230',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.7',
      ),
      'rules' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/rules/rules.module',
        'basename' => 'rules.module',
        'name' => 'rules',
        'info' => 
        array (
          'name' => 'Rules',
          'description' => 'React on events and conditionally evaluate actions.',
          'package' => 'Rules',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules.features.inc',
            1 => 'tests/rules.test',
            2 => 'includes/faces.inc',
            3 => 'includes/rules.core.inc',
            4 => 'includes/rules.event.inc',
            5 => 'includes/rules.processor.inc',
            6 => 'includes/rules.plugins.inc',
            7 => 'includes/rules.state.inc',
            8 => 'includes/rules.dispatcher.inc',
            9 => 'modules/node.eval.inc',
            10 => 'modules/php.eval.inc',
            11 => 'modules/rules_core.eval.inc',
            12 => 'modules/system.eval.inc',
            13 => 'ui/ui.controller.inc',
            14 => 'ui/ui.core.inc',
            15 => 'ui/ui.data.inc',
            16 => 'ui/ui.plugins.inc',
          ),
          'dependencies' => 
          array (
            0 => 'entity_token',
            1 => 'entity',
          ),
          'version' => '7.x-2.7',
          'project' => 'rules',
          'datestamp' => '1399041230',
          'php' => '5.2.4',
        ),
        'schema_version' => '7213',
        'version' => '7.x-2.7',
      ),
      'advuser' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/advuser/advuser.module',
        'basename' => 'advuser.module',
        'name' => 'advuser',
        'info' => 
        array (
          'name' => 'Advanced User Management',
          'description' => 'Advanced user management providing advanced filtering of users and providing mass actions of selected filtered users across multiple pages of the users list.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-3.0-beta1',
          'project' => 'advuser',
          'datestamp' => '1380162319',
          'php' => '5.2.4',
        ),
        'schema_version' => '7300',
        'version' => '7.x-3.0-beta1',
      ),
      'webform' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/webform/webform.module',
        'basename' => 'webform.module',
        'name' => 'webform',
        'info' => 
        array (
          'name' => 'Webform',
          'description' => 'Enables the creation of forms and questionnaires.',
          'core' => '7.x',
          'package' => 'Webform',
          'configure' => 'admin/config/content/webform',
          'files' => 
          array (
            0 => 'includes/webform.export.inc',
            1 => 'views/webform_handler_field_form_body.inc',
            2 => 'views/webform_handler_field_is_draft.inc',
            3 => 'views/webform_handler_field_node_link_edit.inc',
            4 => 'views/webform_handler_field_node_link_results.inc',
            5 => 'views/webform_handler_field_submission_count.inc',
            6 => 'views/webform_handler_field_submission_link.inc',
            7 => 'views/webform_handler_field_webform_status.inc',
            8 => 'views/webform_handler_filter_is_draft.inc',
            9 => 'views/webform_handler_filter_webform_status.inc',
            10 => 'views/webform.views.inc',
            11 => 'tests/components.test',
            12 => 'tests/permissions.test',
            13 => 'tests/submission.test',
            14 => 'tests/webform.test',
          ),
          'version' => '7.x-3.20',
          'project' => 'webform',
          'datestamp' => '1392182305',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7321',
        'version' => '7.x-3.20',
      ),
      'lang_dropdown_hideout' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/lang_dropdown/lang_dropdown_hideout/lang_dropdown_hideout.module',
        'basename' => 'lang_dropdown_hideout.module',
        'name' => 'lang_dropdown_hideout',
        'info' => 
        array (
          'name' => 'Language Switcher Dropdown Hideout',
          'package' => 'Multilingual',
          'description' => 'Allow to hide specific languages from the switcher for certain roles.',
          'dependencies' => 
          array (
            0 => 'locale',
          ),
          'configure' => 'admin/structure/block',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'lang_dropdown_hideout.module',
            1 => 'lang_dropdown_hideout.install',
          ),
          'version' => '7.x-2.5',
          'project' => 'lang_dropdown',
          'datestamp' => '1387127905',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'version' => '7.x-2.5',
      ),
      'lang_dropdown' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/lang_dropdown/lang_dropdown.module',
        'basename' => 'lang_dropdown.module',
        'name' => 'lang_dropdown',
        'info' => 
        array (
          'name' => 'Language Switcher Dropdown',
          'package' => 'Multilingual',
          'description' => 'Provides a dropdown select to switch between available languages.',
          'dependencies' => 
          array (
            0 => 'locale',
          ),
          'configure' => 'admin/structure/block',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'lang_dropdown.module',
            1 => 'lang_dropdown.install',
          ),
          'version' => '7.x-2.5',
          'project' => 'lang_dropdown',
          'datestamp' => '1387127905',
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'version' => '7.x-2.5',
      ),
      'languageicons' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/languageicons/languageicons.module',
        'basename' => 'languageicons.module',
        'name' => 'languageicons',
        'info' => 
        array (
          'name' => 'Language Icons',
          'description' => 'Adds icons to language links.',
          'dependencies' => 
          array (
            0 => 'locale',
          ),
          'package' => 'Multilingual',
          'core' => '7.x',
          'configure' => 'admin/config/regional/language/icons',
          'version' => '7.x-1.1',
          'project' => 'languageicons',
          'datestamp' => '1399825730',
          'php' => '5.2.4',
        ),
        'schema_version' => '6200',
        'version' => '7.x-1.1',
      ),
      'taxonomy_display' => 
      array (
        'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/sites/all/modules/taxonomy_display/taxonomy_display.module',
        'basename' => 'taxonomy_display.module',
        'name' => 'taxonomy_display',
        'info' => 
        array (
          'name' => 'Taxonomy display',
          'description' => 'Modify the display of taxonomy term pages per vocabulary.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'taxonomy',
            1 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'taxonomy_display.module',
            1 => 'classes/associated_display.inc',
            2 => 'classes/breadcrumb_display.inc',
            3 => 'classes/handler_form.inc',
            4 => 'classes/term_display.inc',
            5 => 'handlers/term/core.inc',
            6 => 'handlers/term/hidden.inc',
            7 => 'handlers/associated/core.inc',
            8 => 'handlers/associated/hidden.inc',
            9 => 'handlers/associated/views.inc',
            10 => 'handlers/breadcrumb/core.inc',
            11 => 'handlers/breadcrumb/hidden.inc',
            12 => 'handlers/breadcrumb/ignore.inc',
          ),
          'version' => '7.x-1.1',
          'project' => 'taxonomy_display',
          'datestamp' => '1351568833',
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'version' => '7.x-1.1',
      ),
    ),
    'themes' => 
    array (
    ),
  ),
  'profiles' => 
  array (
    'commons' => 
    array (
      'modules' => 
      array (
        'commons_groups_pages' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_groups/modules/commons_groups_pages/commons_groups_pages.module',
          'basename' => 'commons_groups_pages.module',
          'name' => 'commons_groups_pages',
          'info' => 
          array (
            'name' => 'Commons Group Pages',
            'description' => 'Enhances the appearance of group landing pages and allows them to be customized.',
            'package' => 'Commons - Landing pages',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_activity_streams',
              1 => 'commons_bw',
              2 => 'commons_follow_group',
              3 => 'ctools',
              4 => 'panelizer',
              5 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'panelizer:panelizer:1',
                1 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3102',
          'version' => '7.x-3.32',
        ),
        'commons_groups_directory' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_groups/modules/commons_groups_directory/commons_groups_directory.module',
          'basename' => 'commons_groups_directory.module',
          'name' => 'commons_groups_directory',
          'info' => 
          array (
            'name' => 'Commons Groups Directory',
            'description' => 'Provides a listing of all of the current groups.',
            'package' => 'Commons - Landing pages',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_activity_streams_groups',
              1 => 'ctools',
              2 => 'page_manager',
              3 => 'views_content',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'page_manager:pages_default:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'page_manager_pages' => 
              array (
                0 => 'groups_directory',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_groups' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_groups/commons_groups.module',
          'basename' => 'commons_groups.module',
          'name' => 'commons_groups',
          'info' => 
          array (
            'name' => 'Commons Groups',
            'description' => 'Allows content to be organized into groups.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_body',
              1 => 'commons_topics',
              2 => 'ctools',
              3 => 'date',
              4 => 'entity',
              5 => 'entityreference',
              6 => 'entityreference_prepopulate',
              7 => 'features',
              8 => 'image',
              9 => 'link',
              10 => 'list',
              11 => 'message',
              12 => 'node',
              13 => 'og',
              14 => 'og_ui',
              15 => 'options',
              16 => 'radioactivity',
              17 => 'strongarm',
              18 => 'taxonomy',
              19 => 'text',
              20 => 'views',
              21 => 'views_content',
              22 => 'views_litepager',
              23 => 'views_load_more',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_group_logo',
                1 => 'field_og_access_default_value',
                2 => 'field_og_subscribe_settings',
                3 => 'group_access',
                4 => 'group_content_access',
                5 => 'group_group',
                6 => 'og_group_ref',
                7 => 'og_membership_request',
                8 => 'og_roles_permissions',
              ),
              'field_instance' => 
              array (
                0 => 'og_membership-og_membership_type_default-og_membership_request',
              ),
              'image' => 
              array (
                0 => '35x35',
                1 => '50x50',
              ),
              'node' => 
              array (
                0 => 'group',
              ),
              'og_features_permission' => 
              array (
                0 => 'user:user:subscribe',
                1 => 'user:user:subscribe without approval',
              ),
              'user_permission' => 
              array (
                0 => 'create group content',
                1 => 'edit own group content',
              ),
              'variable' => 
              array (
                0 => 'menu_options_group',
                1 => 'menu_parent_group',
                2 => 'pathauto_node_group_pattern',
                3 => 'pathauto_node_pattern',
              ),
              'views_view' => 
              array (
                0 => 'commons_bw_all',
                1 => 'commons_contributors_group',
                2 => 'commons_group_moderation',
                3 => 'commons_groups_contributors',
                4 => 'commons_groups_directory',
                5 => 'commons_groups_recent_content',
                6 => 'commons_groups_user_groups',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3170',
          'version' => '7.x-3.32',
        ),
        'commons_follow_group' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_follow/commons_follow_group/commons_follow_group.module',
          'basename' => 'commons_follow_group.module',
          'name' => 'commons_follow_group',
          'info' => 
          array (
            'name' => 'Commons Follow (Groups)',
            'description' => 'Provides Organic Groups integration for Commons Follow, allowing users to follow individual groups.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'flag',
              2 => 'og',
              3 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'flag' => 
              array (
                0 => 'commons_follow_group',
                1 => 'email_group',
              ),
              'variable' => 
              array (
                0 => 'message_subscribe_og',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3101',
          'version' => '7.x-3.32',
        ),
        'commons_follow_node' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_follow/commons_follow_node/commons_follow_node.module',
          'basename' => 'commons_follow_node.module',
          'name' => 'commons_follow_node',
          'info' => 
          array (
            'name' => 'Commons Follow (Nodes)',
            'description' => 'Provides Node integration for Commons Follow, allowing users to follow individual nodes.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'flag',
              2 => 'views_litepager',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'flag' => 
              array (
                0 => 'commons_follow_node',
              ),
              'views_view' => 
              array (
                0 => 'commons_follow_node',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'views' => 'views',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3502',
          'version' => '7.x-3.32',
        ),
        'commons_follow_term' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_follow/commons_follow_term/commons_follow_term.module',
          'basename' => 'commons_follow_term.module',
          'name' => 'commons_follow_term',
          'info' => 
          array (
            'name' => 'Commons Follow (Terms)',
            'description' => 'Provides Taxonomy integration for Commons Follow, allowing users to follow individual taxonomy terms.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'flag',
              1 => 'views',
              2 => 'views_litepager',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'flag' => 
              array (
                0 => 'commons_follow_term',
              ),
              'views_view' => 
              array (
                0 => 'commons_follow_taxonomy_term',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'ctools' => 'ctools',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3502',
          'version' => '7.x-3.32',
        ),
        'commons_follow_user' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_follow/commons_follow_user/commons_follow_user.module',
          'basename' => 'commons_follow_user.module',
          'name' => 'commons_follow_user',
          'info' => 
          array (
            'name' => 'Commons Follow (Users)',
            'description' => 'Provides User integration for Commons Follow, allowing users to follow other users.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_follow',
              1 => 'ctools',
              2 => 'entity',
              3 => 'entityreference',
              4 => 'features',
              5 => 'flag',
              6 => 'message',
              7 => 'strongarm',
              8 => 'views',
              9 => 'views_content',
              10 => 'views_litepager',
              11 => 'views_load_more',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_instance' => 
              array (
                0 => 'message-commons_follow_user_user_followed-field_target_users',
              ),
              'flag' => 
              array (
                0 => 'commons_follow_user',
              ),
              'message_type' => 
              array (
                0 => 'commons_follow_user_user_followed',
              ),
              'variable' => 
              array (
                0 => 'field_bundle_settings_message__commons_follow_user_user_followed',
              ),
              'views_view' => 
              array (
                0 => 'commons_follow_user',
                1 => 'commons_follow_user_followers',
                2 => 'commons_follow_user_following',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3503',
          'version' => '7.x-3.32',
        ),
        'commons_follow_ui' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_follow/commons_follow_ui/commons_follow_ui.module',
          'basename' => 'commons_follow_ui.module',
          'name' => 'commons_follow_ui',
          'info' => 
          array (
            'name' => 'Commons Follow User Interface',
            'description' => 'Integrates with Message Subscribe UI to provide users with a user interface for managing the entities they follow and associated notification settings.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_follow',
              1 => 'message_subscribe_ui',
              2 => 'quicktabs',
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_follow' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_follow/commons_follow.module',
          'basename' => 'commons_follow.module',
          'name' => 'commons_follow',
          'info' => 
          array (
            'name' => 'Commons Follow',
            'description' => 'Provides a framework for allowing users to follow entities.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'entityreference',
              2 => 'features',
              3 => 'field_sql_storage',
              4 => 'message_subscribe',
              5 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_target_comments',
                1 => 'field_target_nodes',
                2 => 'field_target_users',
              ),
              'image' => 
              array (
                0 => '50x50_avatar',
              ),
              'variable' => 
              array (
                0 => 'message_subscribe_flag_prefix',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'image' => 'image',
              ),
            ),
            'files' => 
            array (
              0 => 'includes/views/commons_follow.views.inc',
              1 => 'includes/views/handlers/commons_follow_handler_filter_follow.inc',
              2 => 'includes/views/handlers/commons_follow_plugin_argument_default_node.inc',
              3 => 'includes/views/handlers/commons_follow_plugin_argument_default_message.inc',
              4 => 'includes/views/handlers/commons_follow_user_follow_filter.inc',
              5 => 'includes/views/handlers/commons_follow_user_follow_filter_message.inc',
              6 => 'includes/views/handlers/commons_follow_handler_field_ops.inc',
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_user_profile_pages' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_user_profile_pages/commons_user_profile_pages.module',
          'basename' => 'commons_user_profile_pages.module',
          'name' => 'commons_user_profile_pages',
          'info' => 
          array (
            'name' => 'Commons User Profile Pages',
            'description' => 'Provides a landing page which lists user information.',
            'package' => 'Commons - Landing pages',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_activity_streams',
              1 => 'commons_follow',
              2 => 'commons_profile_base',
              3 => 'commons_profile_social',
              4 => 'ctools',
              5 => 'page_manager',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'page_manager:pages_default:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'page_manager_handlers' => 
              array (
                0 => 'user_view_panel_context',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7301',
          'version' => '7.x-3.32',
        ),
        'commons_site_homepage' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_site_homepage/commons_site_homepage.module',
          'basename' => 'commons_site_homepage.module',
          'name' => 'commons_site_homepage',
          'info' => 
          array (
            'name' => 'Commons Site Homepage',
            'description' => 'Provides a customizable homepage for the site which has unique displays for anonymous and authenticated users.',
            'package' => 'Commons - Landing pages',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_activity_streams',
              1 => 'commons_featured',
              2 => 'commons_follow',
              3 => 'entity',
              4 => 'page_manager',
              5 => 'strongarm',
              6 => 'views',
              7 => 'views_litepager',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'page_manager:pages_default:1',
                1 => 'strongarm:strongarm:1',
                2 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'page_manager_pages' => 
              array (
                0 => 'commons_home',
              ),
              'variable' => 
              array (
                0 => 'site_frontpage',
              ),
              'views_view' => 
              array (
                0 => 'commons_homepage_content',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'views_content' => 'views_content',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7302',
          'version' => '7.x-3.32',
        ),
        'commons_bw' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_bw/commons_bw.module',
          'basename' => 'commons_bw.module',
          'name' => 'commons_bw',
          'info' => 
          array (
            'name' => 'Commons Browsing Widget',
            'description' => 'Provides a single content area with multiple panels for adding and browsing content by content type.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_groups',
              1 => 'features',
              2 => 'og',
              3 => 'quicktabs',
              4 => 'quicktabs_tabstyles',
              5 => 'title',
            ),
            'features' => 
            array (
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'title_field',
              ),
            ),
            'files' => 
            array (
              0 => 'includes/views/handlers/commons_bw_handler_node_partial_form.inc',
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7303',
          'version' => '7.x-3.32',
        ),
        'commons_posts' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_posts/commons_posts.module',
          'basename' => 'commons_posts.module',
          'name' => 'commons_posts',
          'info' => 
          array (
            'name' => 'Commons Posts',
            'description' => 'Provides a Post content type for creating blog, article or general status updates.',
            'package' => 'Commons - Content types',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_body',
              1 => 'commons_topics',
              2 => 'ctools',
              3 => 'entity',
              4 => 'entityreference',
              5 => 'features',
              6 => 'message',
              7 => 'node',
              8 => 'og',
              9 => 'og_ui',
              10 => 'radioactivity',
              11 => 'strongarm',
              12 => 'taxonomy',
              13 => 'text',
              14 => 'views',
              15 => 'views_litepager',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_instance' => 
              array (
                0 => 'message-commons_posts_post_created-field_target_nodes',
                1 => 'node-post-body',
              ),
              'message_type' => 
              array (
                0 => 'commons_posts_post_created',
              ),
              'node' => 
              array (
                0 => 'post',
              ),
              'og_features_permission' => 
              array (
                0 => 'node:group:create post content',
                1 => 'node:group:delete any post content',
                2 => 'node:group:delete own post content',
                3 => 'node:group:update any post content',
                4 => 'node:group:update own post content',
              ),
              'user_permission' => 
              array (
                0 => 'create post content',
                1 => 'delete any post content',
                2 => 'delete own post content',
                3 => 'edit any post content',
                4 => 'edit own post content',
              ),
              'variable' => 
              array (
                0 => 'comment_anonymous_post',
                1 => 'comment_default_mode_post',
                2 => 'comment_default_per_page_post',
                3 => 'comment_form_location_post',
                4 => 'comment_post',
                5 => 'comment_preview_post',
                6 => 'comment_subject_field_post',
                7 => 'field_bundle_settings_message__commons_posts_post_created',
                8 => 'field_bundle_settings_node__post',
                9 => 'menu_options_post',
                10 => 'menu_parent_post',
                11 => 'node_options_post',
                12 => 'node_preview_post',
                13 => 'node_submitted_post',
              ),
              'views_view' => 
              array (
                0 => 'commons_bw_posts',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'commons_trusted_contacts' => 'commons_trusted_contacts',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7009',
          'version' => '7.x-3.32',
        ),
        'commons_body' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_body/commons_body.module',
          'basename' => 'commons_body.module',
          'name' => 'commons_body',
          'info' => 
          array (
            'name' => 'Commons Body Field',
            'description' => 'Provides a simple body field for re-use by various Commons content types.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'features',
              1 => 'field_sql_storage',
              2 => 'text',
            ),
            'features' => 
            array (
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'body',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_polls' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_polls/commons_polls.module',
          'basename' => 'commons_polls.module',
          'name' => 'commons_polls',
          'info' => 
          array (
            'name' => 'Commons Polls',
            'description' => 'Provides a Poll content type for conducting polls.',
            'package' => 'Commons - Content types',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_body',
              1 => 'commons_topics',
              2 => 'ctools',
              3 => 'entityreference',
              4 => 'features',
              5 => 'og',
              6 => 'og_ui',
              7 => 'poll',
              8 => 'radioactivity',
              9 => 'strongarm',
              10 => 'views',
              11 => 'views_litepager',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_instance' => 
              array (
                0 => 'node-poll-body',
              ),
              'og_features_permission' => 
              array (
                0 => 'node:group:create poll content',
                1 => 'node:group:delete any poll content',
                2 => 'node:group:delete own poll content',
                3 => 'node:group:update any poll content',
                4 => 'node:group:update own poll content',
              ),
              'user_permission' => 
              array (
                0 => 'cancel own vote',
                1 => 'create poll content',
                2 => 'delete any poll content',
                3 => 'delete own poll content',
                4 => 'edit any poll content',
                5 => 'edit own poll content',
                6 => 'vote on polls',
              ),
              'variable' => 
              array (
                0 => 'comment_anonymous_poll',
                1 => 'comment_default_mode_poll',
                2 => 'comment_default_per_page_poll',
                3 => 'comment_form_location_poll',
                4 => 'comment_poll',
                5 => 'comment_preview_poll',
                6 => 'comment_subject_field_poll',
                7 => 'field_bundle_settings_node__poll',
                8 => 'menu_options_poll',
                9 => 'menu_parent_poll',
                10 => 'node_options_poll',
                11 => 'node_preview_poll',
                12 => 'node_submitted_poll',
              ),
              'views_view' => 
              array (
                0 => 'commons_bw_polls',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7007',
          'version' => '7.x-3.32',
        ),
        'commons_pages' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_pages/commons_pages.module',
          'basename' => 'commons_pages.module',
          'name' => 'commons_pages',
          'info' => 
          array (
            'name' => 'Commons Pages',
            'description' => 'Provides a Page content type for creating static content.',
            'package' => 'Commons - Content types',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_body',
              1 => 'ctools',
              2 => 'features',
              3 => 'node',
              4 => 'strongarm',
              5 => 'text',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_instance' => 
              array (
                0 => 'node-page-body',
              ),
              'node' => 
              array (
                0 => 'page',
              ),
              'variable' => 
              array (
                0 => 'comment_anonymous_page',
                1 => 'comment_default_mode_page',
                2 => 'comment_default_per_page_page',
                3 => 'comment_form_location_page',
                4 => 'comment_page',
                5 => 'comment_preview_page',
                6 => 'comment_subject_field_page',
                7 => 'menu_options_page',
                8 => 'menu_parent_page',
                9 => 'node_options_page',
                10 => 'node_preview_page',
                11 => 'node_submitted_page',
                12 => 'pathauto_node_page_pattern',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-3.32',
        ),
        'commons_trusted_contacts' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_trusted_contacts/commons_trusted_contacts.module',
          'basename' => 'commons_trusted_contacts.module',
          'name' => 'commons_trusted_contacts',
          'info' => 
          array (
            'name' => 'Commons Trusted Contacts',
            'description' => 'Allows users to build and manage a list of contacts which they can message and interact with.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_groups',
              1 => 'ctools',
              2 => 'date',
              3 => 'entity',
              4 => 'entityreference',
              5 => 'features',
              6 => 'list',
              7 => 'message',
              8 => 'og',
              9 => 'og_ui',
              10 => 'options',
              11 => 'privatemsg',
              12 => 'strongarm',
              13 => 'text',
              14 => 'views',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_approving_user',
                1 => 'field_confirmation',
                2 => 'field_membership_token',
                3 => 'field_my_request',
                4 => 'field_original_og_membership',
                5 => 'field_requesting_user',
                6 => 'field_response_date',
                7 => 'og_user_group_ref',
                8 => 'user_trusted_contacts',
              ),
              'field_instance' => 
              array (
                0 => 'message-trusted_contact_request_approved-field_approving_user',
                1 => 'message-trusted_contact_request_pending-field_requesting_user',
                2 => 'og_membership-trusted_contacts-field_confirmation',
                3 => 'og_membership-trusted_contacts-field_membership_token',
                4 => 'og_membership-trusted_contacts-field_my_request',
                5 => 'og_membership-trusted_contacts-field_original_og_membership',
                6 => 'og_membership-trusted_contacts-field_response_date',
                7 => 'user-user-user_trusted_contacts',
                8 => 'user-user-group_access',
              ),
              'message_type' => 
              array (
                0 => 'trusted_contact_request_approved',
                1 => 'trusted_contact_request_pending',
              ),
              'og_membership_type' => 
              array (
                0 => 'trusted_contacts',
              ),
              'user_permission' => 
              array (
                0 => 'delete privatemsg',
                1 => 'read privatemsg',
                2 => 'write privatemsg',
              ),
              'variable' => 
              array (
                0 => 'field_bundle_settings_message__trusted_contact_request_approved',
                1 => 'field_bundle_settings_message__trusted_contact_request_pending',
                2 => 'privatemsg_display_profile_links',
              ),
              'views_view' => 
              array (
                0 => 'trusted_contacts',
                1 => 'trusted_contacts_invitations',
              ),
            ),
            'features_exclude' => 
            array (
              'field' => 
              array (
                'message-trusted_contact_request_approved-field_approving_user' => 'message-trusted_contact_request_approved-field_approving_user',
                'message-trusted_contact_request_pending-field_requesting_user' => 'message-trusted_contact_request_pending-field_requesting_user',
              ),
            ),
            'files' => 
            array (
              0 => 'views/handlers/commons_groups_handler_send_message.inc',
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3102',
          'version' => '7.x-3.32',
        ),
        'commons_topics' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_topics/commons_topics.module',
          'basename' => 'commons_topics.module',
          'name' => 'commons_topics',
          'info' => 
          array (
            'name' => 'Commons Topics',
            'description' => 'Provides a simple taxonomy field for re-use by various Commons content types.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'features',
              1 => 'taxonomy',
            ),
            'features' => 
            array (
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_topics',
              ),
              'taxonomy' => 
              array (
                0 => 'topics',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_documents' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_documents/commons_documents.module',
          'basename' => 'commons_documents.module',
          'name' => 'commons_documents',
          'info' => 
          array (
            'name' => 'Commons Documents',
            'description' => 'Provides a Document content type for sharing files.',
            'package' => 'Commons - Content types',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_body',
              1 => 'commons_topics',
              2 => 'ctools',
              3 => 'entity',
              4 => 'entityreference',
              5 => 'features',
              6 => 'file',
              7 => 'node',
              8 => 'og',
              9 => 'og_ui',
              10 => 'strongarm',
              11 => 'taxonomy',
              12 => 'text',
              13 => 'views',
              14 => 'views_litepager',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_document_file',
              ),
              'field_instance' => 
              array (
                0 => 'node-document-body',
                1 => 'node-document-field_document_file',
              ),
              'node' => 
              array (
                0 => 'document',
              ),
              'og_features_permission' => 
              array (
                0 => 'node:group:create document content',
                1 => 'node:group:delete any document content',
                2 => 'node:group:delete own document content',
                3 => 'node:group:update any document content',
                4 => 'node:group:update own document content',
              ),
              'user_permission' => 
              array (
                0 => 'create document content',
                1 => 'delete any document content',
                2 => 'delete own document content',
                3 => 'edit any document content',
                4 => 'edit own document content',
              ),
              'variable' => 
              array (
                0 => 'comment_anonymous_document',
                1 => 'comment_default_mode_document',
                2 => 'comment_default_per_page_document',
                3 => 'comment_document',
                4 => 'comment_form_location_document',
                5 => 'comment_preview_document',
                6 => 'comment_subject_field_document',
                7 => 'field_bundle_settings_node__document',
                8 => 'menu_options_document',
                9 => 'menu_parent_document',
                10 => 'node_options_document',
                11 => 'node_preview_document',
                12 => 'node_submitted_document',
              ),
              'views_view' => 
              array (
                0 => 'commons_bw_documents',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'commons_trusted_contacts' => 'commons_trusted_contacts',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7010',
          'version' => '7.x-3.32',
        ),
        'commons_notify' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_notify/commons_notify.module',
          'basename' => 'commons_notify.module',
          'name' => 'commons_notify',
          'info' => 
          array (
            'name' => 'Commons Notify',
            'description' => 'Provides a framework for allowing users to be notified when an event is triggered.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_follow',
              1 => 'ctools',
              2 => 'entity',
              3 => 'entityreference',
              4 => 'features',
              5 => 'list',
              6 => 'message',
              7 => 'message_subscribe',
              8 => 'message_subscribe_email',
              9 => 'number',
              10 => 'options',
              11 => 'strongarm',
              12 => 'text',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_message_rendered_body',
                1 => 'field_message_rendered_subject',
                2 => 'message_subscribe_email',
              ),
              'field_instance' => 
              array (
                0 => 'message-commons_notify_comment_created-field_message_rendered_body',
                1 => 'message-commons_notify_comment_created-field_message_rendered_subject',
                2 => 'message-commons_notify_comment_created-field_target_comments',
                3 => 'message-commons_notify_comment_created-field_target_nodes',
                4 => 'message-commons_notify_comment_created_no_groups-field_message_rendered_body',
                5 => 'message-commons_notify_comment_created_no_groups-field_message_rendered_subject',
                6 => 'message-commons_notify_comment_created_no_groups-field_target_comments',
                7 => 'message-commons_notify_comment_created_no_groups-field_target_nodes',
                8 => 'message-commons_notify_node_created-field_message_rendered_body',
                9 => 'message-commons_notify_node_created-field_message_rendered_subject',
                10 => 'message-commons_notify_node_created-field_target_nodes',
                11 => 'message-commons_notify_node_created_no_groups-field_message_rendered_body',
                12 => 'message-commons_notify_node_created_no_groups-field_message_rendered_subject',
                13 => 'message-commons_notify_node_created_no_groups-field_target_nodes',
                14 => 'message_type-commons_notify-message_text',
                15 => 'user-user-message_subscribe_email',
              ),
              'message_type' => 
              array (
                0 => 'commons_notify_comment_created',
                1 => 'commons_notify_comment_created_no_groups',
                2 => 'commons_notify_node_created',
                3 => 'commons_notify_node_created_no_groups',
              ),
              'message_type_category' => 
              array (
                0 => 'commons_notify',
              ),
              'variable' => 
              array (
                0 => 'field_bundle_settings_message__commons_notify_comment_created',
                1 => 'field_bundle_settings_message__commons_notify_comment_created_no_groups',
                2 => 'field_bundle_settings_message__commons_notify_node_created',
                3 => 'field_bundle_settings_message__commons_notify_node_created_no_groups',
                4 => 'message_subscribe_default_notifiers',
              ),
            ),
            'features_exclude' => 
            array (
              'field_base' => 
              array (
                'message_text' => 'message_text',
                'field_target_nodes' => 'field_target_nodes',
                'field_target_comments' => 'field_target_comments',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7304',
          'version' => '7.x-3.32',
        ),
        'commons_content_moderation' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_content_moderation/commons_content_moderation.module',
          'basename' => 'commons_content_moderation.module',
          'name' => 'commons_content_moderation',
          'info' => 
          array (
            'name' => 'Commons Content Moderation',
            'description' => 'Provides a content moderator role which allows privileged users to moderate content and users.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'flag',
              2 => 'flag_abuse',
              3 => 'strongarm',
              4 => 'views',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'flag' => 
              array (
                0 => 'inappropriate_comment',
                1 => 'inappropriate_node',
              ),
              'user_role' => 
              array (
                0 => 'content moderator',
              ),
              'variable' => 
              array (
                0 => 'flag_abuse_flags',
              ),
              'views_view' => 
              array (
                0 => 'commons_content_moderation_reported_comments',
                1 => 'commons_content_moderation_reported_nodes',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'features' => 'features',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7004',
          'version' => '7.x-3.32',
        ),
        'commons_social_sharing' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_social_sharing/commons_social_sharing.module',
          'basename' => 'commons_social_sharing.module',
          'name' => 'commons_social_sharing',
          'info' => 
          array (
            'name' => 'Commons Social Sharing',
            'description' => 'Provide links to share content to external social services such as Facebook and Google+.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'sharethis',
              2 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'variable' => 
              array (
                0 => 'sharethis_button_option',
                1 => 'sharethis_comments',
                2 => 'sharethis_late_load',
                3 => 'sharethis_location',
                4 => 'sharethis_node_option',
                5 => 'sharethis_option_extras',
                6 => 'sharethis_teaser_option',
                7 => 'sharethis_weight',
                8 => 'sharethis_widget_option',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_wikis_pages' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_wikis/modules/commons_wikis_pages/commons_wikis_pages.module',
          'basename' => 'commons_wikis_pages.module',
          'name' => 'commons_wikis_pages',
          'info' => 
          array (
            'name' => 'Commons Wikis Pages',
            'description' => 'Enhances the appearance of wiki nodes by listing the contributors to the wiki and allows them to be customized.',
            'core' => '7.x',
            'package' => 'Commons - Landing pages',
            'dependencies' => 
            array (
              0 => 'commons_wikis',
              1 => 'ctools',
              2 => 'panelizer',
              3 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'panelizer:panelizer:1',
                1 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'panelizer_defaults' => 
              array (
                0 => 'node:wiki:default',
              ),
              'variable' => 
              array (
                0 => 'panelizer_defaults_node_wiki',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7100',
          'version' => '7.x-3.32',
        ),
        'commons_wikis' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_wikis/commons_wikis.module',
          'basename' => 'commons_wikis.module',
          'name' => 'commons_wikis',
          'info' => 
          array (
            'name' => 'Commons Wiki',
            'description' => 'Provides a Wiki content type for collaboratively revising content.',
            'package' => 'Commons - Content types',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_body',
              1 => 'commons_topics',
              2 => 'ctools',
              3 => 'entity',
              4 => 'entityreference',
              5 => 'features',
              6 => 'message',
              7 => 'node',
              8 => 'og',
              9 => 'og_ui',
              10 => 'page_manager',
              11 => 'radioactivity',
              12 => 'strongarm',
              13 => 'taxonomy',
              14 => 'text',
              15 => 'views',
              16 => 'views_content',
              17 => 'views_litepager',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'page_manager:pages_default:1',
                1 => 'strongarm:strongarm:1',
                2 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_instance' => 
              array (
                0 => 'message-commons_wikis_wiki_updated-field_target_nodes',
                1 => 'node-wiki-body',
                2 => 'node-wiki-title_field',
              ),
              'message_type' => 
              array (
                0 => 'commons_wikis_wiki_updated',
              ),
              'node' => 
              array (
                0 => 'wiki',
              ),
              'og_features_permission' => 
              array (
                0 => 'node:group:create wiki content',
                1 => 'node:group:delete any wiki content',
                2 => 'node:group:delete own wiki content',
                3 => 'node:group:update any wiki content',
                4 => 'node:group:update own wiki content',
              ),
              'user_permission' => 
              array (
                0 => 'create wiki content',
                1 => 'delete own wiki content',
                2 => 'edit any wiki content',
                3 => 'edit own wiki content',
              ),
              'variable' => 
              array (
                0 => 'additional_settings__active_tab_wiki',
                1 => 'comment_anonymous_wiki',
                2 => 'comment_default_mode_wiki',
                3 => 'comment_default_per_page_wiki',
                4 => 'comment_form_location_wiki',
                5 => 'comment_preview_wiki',
                6 => 'comment_subject_field_wiki',
                7 => 'comment_wiki',
                8 => 'enable_revisions_page_wiki',
                9 => 'field_bundle_settings_message__commons_wikis_wiki_updated',
                10 => 'field_bundle_settings_node__wiki',
                11 => 'menu_options_wiki',
                12 => 'menu_parent_wiki',
                13 => 'node_options_wiki',
                14 => 'node_preview_wiki',
                15 => 'node_submitted_wiki',
                16 => 'save_continue_wiki',
                17 => 'show_diff_inline_wiki',
                18 => 'show_preview_changes_wiki',
              ),
              'views_view' => 
              array (
                0 => 'commons_bw_wikis',
                1 => 'commons_wikis_contributor_list',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'commons_bw' => 'commons_bw',
                'commons_trusted_contacts' => 'commons_trusted_contacts',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7010',
          'version' => '7.x-3.32',
        ),
        'commons_profile_social' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_profile_social/commons_profile_social.module',
          'basename' => 'commons_profile_social.module',
          'name' => 'commons_profile_social',
          'info' => 
          array (
            'name' => 'Commons Profile Social',
            'description' => 'Provides a base set of social profile fields for user profiles.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'features',
              1 => 'field_sql_storage',
              2 => 'link',
            ),
            'features' => 
            array (
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_facebook_url',
                1 => 'field_linkedin_url',
                2 => 'field_twitter_url',
              ),
              'field_instance' => 
              array (
                0 => 'user-user-field_facebook_url',
                1 => 'user-user-field_linkedin_url',
                2 => 'user-user-field_twitter_url',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-3.32',
        ),
        'commons_location' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_location/commons_location.module',
          'basename' => 'commons_location.module',
          'name' => 'commons_location',
          'info' => 
          array (
            'name' => 'Commons Location',
            'description' => 'Provides a simple address field for re-use by various Commons content types.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'addressfield',
              1 => 'features',
              2 => 'field_sql_storage',
            ),
            'features' => 
            array (
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_address',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_notices' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_notices/commons_notices.module',
          'basename' => 'commons_notices.module',
          'name' => 'commons_notices',
          'info' => 
          array (
            'name' => 'Commons Notices',
            'description' => 'Provides a Notice content type for displaying administrative alerts to users, such as planned system maintenance.',
            'package' => 'Commons - Content types',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_body',
              1 => 'ctools',
              2 => 'features',
              3 => 'node',
              4 => 'strongarm',
              5 => 'text',
              6 => 'views',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_instance' => 
              array (
                0 => 'node-notice-body',
              ),
              'node' => 
              array (
                0 => 'notice',
              ),
              'variable' => 
              array (
                0 => 'comment_anonymous_notice',
                1 => 'comment_default_mode_notice',
                2 => 'comment_default_per_page_notice',
                3 => 'comment_form_location_notice',
                4 => 'comment_notice',
                5 => 'comment_preview_notice',
                6 => 'comment_subject_field_notice',
                7 => 'menu_options_notice',
                8 => 'menu_parent_notice',
                9 => 'node_options_notice',
                10 => 'node_preview_notice',
                11 => 'node_submitted_notice',
              ),
              'views_view' => 
              array (
                0 => 'commons_notices_latest_notices',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-3.32',
        ),
        'commons_images' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_images/commons_images.module',
          'basename' => 'commons_images.module',
          'name' => 'commons_images',
          'info' => 
          array (
            'name' => 'Commons Images',
            'description' => 'Enhances the display of images by making them responsive and intelligently cropping them where necessary.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'breakpoints',
              1 => 'ctools',
              2 => 'file_entity',
              3 => 'image',
              4 => 'picture',
              5 => 'smartcrop',
            ),
            'features' => 
            array (
              'breakpoint_group' => 
              array (
                0 => 'commons_default',
                1 => 'commons_full',
                2 => 'commons_origins',
                3 => 'commons_teaser',
              ),
              'breakpoints' => 
              array (
                0 => 'breakpoints.theme.commons_origins.commons large',
                1 => 'breakpoints.theme.commons_origins.commons medium landscape',
                2 => 'breakpoints.theme.commons_origins.commons medium portrait',
                3 => 'breakpoints.theme.commons_origins.commons small landscape',
                4 => 'breakpoints.theme.commons_origins.commons small portrait',
              ),
              'ctools' => 
              array (
                0 => 'breakpoints:default_breakpoint_group:1',
                1 => 'breakpoints:default_breakpoints:1',
                2 => 'picture:default_picture_mapping:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'image' => 
              array (
                0 => 'commons-default-large',
                1 => 'commons-default-large-1_5x',
                2 => 'commons-default-medium',
                3 => 'commons-default-medium-1_5x',
                4 => 'commons-default-small',
                5 => 'commons-default-small-1_5x',
                6 => 'commons-full-large',
                7 => 'commons-full-large-1_5x',
                8 => 'commons-full-medium',
                9 => 'commons-full-medium-1_5',
                10 => 'commons-full-small',
                11 => 'commons-full-small-1_5x',
                12 => 'commons-teaser-large',
                13 => 'commons-teaser-large-1_5x',
                14 => 'commons-teaser-medium',
                15 => 'commons-teaser-medium-1_5x',
                16 => 'commons-teaser-small',
                17 => 'commons-teaser-small-1_5x',
              ),
              'picture_mapping' => 
              array (
                0 => 'commons_default',
                1 => 'commons_full',
                2 => 'commons_teaser',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_events_solr' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_events/modules/commons_events_solr/commons_events_solr.module',
          'basename' => 'commons_events_solr.module',
          'name' => 'commons_events_solr',
          'info' => 
          array (
            'name' => 'Commons Search SOLR Event',
            'description' => 'Adds support for searching events to the Commons Search SOLR module.',
            'package' => 'Commons - Search',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'apachesolr_search',
              1 => 'commons_events',
              2 => 'ctools',
              3 => 'facetapi',
              4 => 'page_manager',
              5 => 'pm_existing_pages',
              6 => 'strongarm',
            ),
            'features' => 
            array (
              'apachesolr_search_page' => 
              array (
                0 => 'solr_events',
              ),
              'ctools' => 
              array (
                0 => 'apachesolr_search:apachesolr_search_defaults:3',
                1 => 'facetapi:facetapi_defaults:1',
                2 => 'page_manager:pages_default:1',
                3 => 'pm_existing_pages:pm_existing_pages:1',
                4 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'page_manager_existing_pages' => 
              array (
                0 => 'solr_events_search',
              ),
              'page_manager_handlers' => 
              array (
                0 => 'pm_existing_pages_solr_events_search_panel_context',
              ),
              'variable' => 
              array (
                0 => 'pm_existing_pages_disabled_solr_events_search',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_events_pages' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_events/modules/commons_events_pages/commons_events_pages.module',
          'basename' => 'commons_events_pages.module',
          'name' => 'commons_events_pages',
          'info' => 
          array (
            'name' => 'Commons Events Pages',
            'description' => 'Enhances the appearance of event nodes by listing the event organizers/attendees and allows them to be customized.',
            'core' => '7.x',
            'package' => 'Commons - Landing pages',
            'dependencies' => 
            array (
              0 => 'commons_events',
              1 => 'panelizer',
              2 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'panelizer:panelizer:1',
                1 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'panelizer_defaults' => 
              array (
                0 => 'node:event:default',
              ),
              'variable' => 
              array (
                0 => 'panelizer_defaults_node_event',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7301',
          'version' => '7.x-3.32',
        ),
        'commons_events' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_events/commons_events.module',
          'basename' => 'commons_events.module',
          'name' => 'commons_events',
          'info' => 
          array (
            'name' => 'Commons Events',
            'description' => 'Provides an Event content type for hosting events.',
            'package' => 'Commons - Content types',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'addressfield',
              1 => 'addressfield_tokens',
              2 => 'block',
              3 => 'commons_body',
              4 => 'commons_location',
              5 => 'commons_notify',
              6 => 'commons_topics',
              7 => 'ctools',
              8 => 'date',
              9 => 'date_api',
              10 => 'date_popup',
              11 => 'date_views',
              12 => 'entity',
              13 => 'entityreference',
              14 => 'features',
              15 => 'field_sql_storage',
              16 => 'image',
              17 => 'list',
              18 => 'message',
              19 => 'node',
              20 => 'number',
              21 => 'og',
              22 => 'options',
              23 => 'page_manager',
              24 => 'radioactivity',
              25 => 'registration',
              26 => 'registration_views',
              27 => 'strongarm',
              28 => 'taxonomy',
              29 => 'text',
              30 => 'views',
              31 => 'views_content',
              32 => 'views_load_more',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'page_manager:pages_default:1',
                1 => 'strongarm:strongarm:1',
                2 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_date',
                1 => 'field_location',
                2 => 'field_logo',
                3 => 'field_number_of_attendees',
                4 => 'field_offsite_url',
                5 => 'field_organizers',
                6 => 'field_registration',
                7 => 'field_registration_type',
              ),
              'field_instance' => 
              array (
                0 => 'node-event-body',
                1 => 'node-event-field_address',
                2 => 'node-event-field_date',
                3 => 'node-event-field_location',
                4 => 'node-event-field_logo',
                5 => 'node-event-field_number_of_attendees',
                6 => 'node-event-field_offsite_url',
                7 => 'node-event-field_organizers',
                8 => 'node-event-field_registration',
                9 => 'node-event-field_registration_type',
                10 => 'message-commons_events_event_node_created-field_message_rendered_body',
                11 => 'message-commons_events_event_node_created-field_message_rendered_subject',
                12 => 'message-commons_events_event_node_created-field_target_comments',
                13 => 'message-commons_events_event_node_created-field_target_nodes',
              ),
              'message_type' => 
              array (
                0 => 'commons_events_event_node_created',
              ),
              'node' => 
              array (
                0 => 'event',
              ),
              'og_features_permission' => 
              array (
                0 => 'node:group:create event content',
                1 => 'node:group:delete any event content',
                2 => 'node:group:delete own event content',
                3 => 'node:group:update any event content',
                4 => 'node:group:update own event content',
              ),
              'page_manager_pages' => 
              array (
                0 => 'views_events_landing_page',
              ),
              'registration_type' => 
              array (
                0 => 'event',
              ),
              'user_permission' => 
              array (
                0 => 'create event content',
                1 => 'create event registration',
                2 => 'delete own event content',
                3 => 'delete own event registration',
                4 => 'edit own event content',
                5 => 'update own event registration',
                6 => 'view event registration',
                7 => 'view own event registration',
              ),
              'variable' => 
              array (
                0 => 'comment_anonymous_event',
                1 => 'comment_default_mode_event',
                2 => 'comment_default_per_page_event',
                3 => 'comment_event',
                4 => 'comment_form_location_event',
                5 => 'comment_preview_event',
                6 => 'comment_subject_field_event',
                7 => 'field_bundle_settings_message__commons_events_event_node_created',
                8 => 'field_bundle_settings_node__event',
                9 => 'menu_options_event',
                10 => 'menu_parent_event',
                11 => 'node_options_event',
                12 => 'node_preview_event',
                13 => 'node_submitted_event',
              ),
              'views_view' => 
              array (
                0 => 'commons_events_event_attendee_list',
                1 => 'commons_events_organizers',
                2 => 'commons_events_upcoming',
                3 => 'commons_events_user_upcoming_events',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'commons_follow' => 'commons_follow',
                'commons_trusted_contacts' => 'commons_trusted_contacts',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7018',
          'version' => '7.x-3.32',
        ),
        'commons_search_solr_user' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_search/modules/commons_search_solr_user/commons_search_solr_user.module',
          'basename' => 'commons_search_solr_user.module',
          'name' => 'commons_search_solr_user',
          'info' => 
          array (
            'name' => 'Commons Search SOLR User',
            'description' => 'Adds support for searching users to the Commons Search SOLR module.',
            'package' => 'Commons - Search',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'apachesolr_search',
              1 => 'apachesolr_user',
              2 => 'commons_search_solr',
              3 => 'ctools',
              4 => 'features',
              5 => 'menu',
            ),
            'features' => 
            array (
              'apachesolr_search_page' => 
              array (
                0 => 'user_search',
              ),
              'ctools' => 
              array (
                0 => 'apachesolr_search:apachesolr_search_defaults:3',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'menu_links' => 
              array (
                0 => 'main-menu:people',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_search_core' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_search/modules/commons_search_core/commons_search_core.module',
          'basename' => 'commons_search_core.module',
          'name' => 'commons_search_core',
          'info' => 
          array (
            'name' => 'Commons Search Core',
            'description' => 'Provides integration between the core Search module and Commons Search.',
            'package' => 'Commons - Search',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_search',
              1 => 'date_facets',
              2 => 'facetapi',
              3 => 'page_manager',
              4 => 'search_facetapi',
              5 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'facetapi:facetapi_defaults:1',
                1 => 'page_manager:pages_default:1',
                2 => 'strongarm:strongarm:1',
              ),
              'facetapi' => 
              array (
                0 => 'search::author',
                1 => 'search::bundle',
                2 => 'search::changed',
                3 => 'search::created',
                4 => 'search::field_topics',
                5 => 'search:block:author',
                6 => 'search:block:bundle',
                7 => 'search:block:changed',
                8 => 'search:block:created',
                9 => 'search:block:field_topics',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'page_manager_handlers' => 
              array (
                0 => 'search_search_facetapi_panel_context',
                1 => 'search_search_facetapi_panel_context_2',
              ),
              'variable' => 
              array (
                0 => 'page_manager_search_disabled_search_facetapi',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'ctools' => 'ctools',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-3.32',
        ),
        'commons_search_solr' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_search/modules/commons_search_solr/commons_search_solr.module',
          'basename' => 'commons_search_solr.module',
          'name' => 'commons_search_solr',
          'info' => 
          array (
            'name' => 'Commons Search SOLR',
            'description' => 'Provides integration between the Apache Solr module and Commons Search.',
            'package' => 'Commons - Search',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'apachesolr',
              1 => 'apachesolr_proximity',
              2 => 'apachesolr_search',
              3 => 'commons_search',
              4 => 'ctools',
              5 => 'date_facets',
              6 => 'facetapi',
              7 => 'page_manager',
              8 => 'pm_existing_pages',
              9 => 'strongarm',
            ),
            'features' => 
            array (
              'apachesolr_search_page' => 
              array (
                0 => 'core_search',
              ),
              'ctools' => 
              array (
                0 => 'apachesolr_search:apachesolr_search_defaults:3',
                1 => 'facetapi:facetapi_defaults:1',
                2 => 'page_manager:pages_default:1',
                3 => 'pm_existing_pages:pm_existing_pages:1',
                4 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'page_manager_existing_pages' => 
              array (
                0 => 'solr_search',
              ),
              'page_manager_handlers' => 
              array (
                0 => 'pm_existing_pages_solr_search_panel_context',
              ),
              'variable' => 
              array (
                0 => 'apachesolr_search_default_search_page',
                1 => 'page_manager_search_disabled_apachesolr_search',
                2 => 'pm_existing_pages_disabled_solr_search',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-3.32',
        ),
        'commons_search' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_search/commons_search.module',
          'basename' => 'commons_search.module',
          'name' => 'commons_search',
          'info' => 
          array (
            'name' => 'Commons Search',
            'description' => 'Provides a framework for searching site content.',
            'package' => 'Commons - Search',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'custom_search',
              2 => 'features',
              3 => 'search',
              4 => 'strongarm',
              5 => 'views',
              6 => 'views_load_more',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'panelizer:panelizer:1',
                1 => 'strongarm:strongarm:1',
                2 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'user_permission' => 
              array (
                0 => 'search content',
                1 => 'use advanced search',
                2 => 'use custom search',
              ),
              'variable' => 
              array (
                0 => 'custom_search_any_force',
                1 => 'custom_search_any_restricts',
                2 => 'custom_search_content_types_region',
                3 => 'custom_search_content_types_weight',
                4 => 'custom_search_criteria_negative_display',
                5 => 'custom_search_criteria_negative_label',
                6 => 'custom_search_criteria_negative_region',
                7 => 'custom_search_criteria_negative_weight',
                8 => 'custom_search_criteria_or_display',
                9 => 'custom_search_criteria_or_label',
                10 => 'custom_search_criteria_or_region',
                11 => 'custom_search_criteria_or_weight',
                12 => 'custom_search_criteria_phrase_display',
                13 => 'custom_search_criteria_phrase_label',
                14 => 'custom_search_criteria_phrase_region',
                15 => 'custom_search_criteria_phrase_weight',
                16 => 'custom_search_custom_paths_region',
                17 => 'custom_search_custom_paths_weight',
                18 => 'custom_search_delta',
                19 => 'custom_search_image',
                20 => 'custom_search_image_path',
                21 => 'custom_search_label',
                22 => 'custom_search_label_visibility',
                23 => 'custom_search_max_length',
                24 => 'custom_search_node_types',
                25 => 'custom_search_node_types_excluded',
                26 => 'custom_search_order',
                27 => 'custom_search_paths',
                28 => 'custom_search_paths_selector',
                29 => 'custom_search_paths_selector_label',
                30 => 'custom_search_paths_selector_label_visibility',
                31 => 'custom_search_search_box_region',
                32 => 'custom_search_search_box_weight',
                33 => 'custom_search_size',
                34 => 'custom_search_submit_button_region',
                35 => 'custom_search_submit_button_weight',
                36 => 'custom_search_submit_text',
                37 => 'custom_search_text',
                38 => 'custom_search_type_selector',
                39 => 'custom_search_type_selector_all',
                40 => 'custom_search_type_selector_label',
                41 => 'custom_search_type_selector_label_visibility',
              ),
              'views_view' => 
              array (
                0 => 'group_search',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7002',
          'version' => '7.x-3.32',
        ),
        'commons_featured' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_featured/commons_featured.module',
          'basename' => 'commons_featured.module',
          'name' => 'commons_featured',
          'info' => 
          array (
            'name' => 'Commons Featured Content',
            'description' => 'Allows community managers to display certain pieces of content more prominently on the site.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'views',
              1 => 'views_content',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'views_view' => 
              array (
                0 => 'commons_featured',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7300',
          'version' => '7.x-3.32',
        ),
        'commons_misc' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_misc/commons_misc.module',
          'basename' => 'commons_misc.module',
          'name' => 'commons_misc',
          'info' => 
          array (
            'name' => 'Commons Miscellaneous Configuration',
            'description' => 'Includes various suggested bits of configuration for Commons sites.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'comment',
              1 => 'ctools',
              2 => 'features',
              3 => 'node',
              4 => 'strongarm',
              5 => 'user',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'page_manager:pages_default:1',
                1 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'page_manager_handlers' => 
              array (
                0 => 'node_view_panel_context',
              ),
              'user_permission' => 
              array (
                0 => 'access comments',
                1 => 'access content',
                2 => 'access user profiles',
                3 => 'post comments',
                4 => 'skip comment approval',
                5 => 'view own unpublished content',
              ),
              'user_role' => 
              array (
                0 => 'administrator',
              ),
              'variable' => 
              array (
                0 => 'navbar_libraries_variants',
                1 => 'theme_commons_origins_settings',
                2 => 'user_register',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'page_manager' => 'page_manager',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7003',
          'version' => '7.x-3.32',
        ),
        'commons_profile_base' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_profile_base/commons_profile_base.module',
          'basename' => 'commons_profile_base.module',
          'name' => 'commons_profile_base',
          'info' => 
          array (
            'name' => 'Commons Profile Base',
            'description' => 'Provides a base set of general profile fields for user profiles.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'features',
              2 => 'strongarm',
              3 => 'text',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_bio',
                1 => 'field_name_first',
                2 => 'field_name_last',
              ),
              'field_instance' => 
              array (
                0 => 'user-user-field_bio',
                1 => 'user-user-field_name_first',
                2 => 'user-user-field_name_last',
              ),
              'variable' => 
              array (
                0 => 'realname_pattern',
                1 => 'user_mail_register_admin_created_body',
                2 => 'user_mail_register_no_approval_required_body',
                3 => 'user_mail_status_activated_body',
                4 => 'user_picture_dimensions',
                5 => 'user_picture_file_size',
                6 => 'user_picture_style',
                7 => 'user_pictures',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-3.32',
        ),
        'commons_media' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_media/commons_media.module',
          'basename' => 'commons_media.module',
          'name' => 'commons_media',
          'info' => 
          array (
            'name' => 'Commons Media',
            'description' => 'Provides media handling capabilities.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'features',
              2 => 'file',
              3 => 'file_entity',
              4 => 'media',
              5 => 'media_internet',
              6 => 'media_oembed',
              7 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_media',
              ),
              'user_permission' => 
              array (
                0 => 'access media browser',
                1 => 'add media from remote sources',
                2 => 'create files',
                3 => 'delete own image files',
                4 => 'delete own video files',
              ),
              'variable' => 
              array (
                0 => 'file_entity_file_upload_wizard_skip_fields',
                1 => 'file_entity_file_upload_wizard_skip_file_type',
                2 => 'file_entity_file_upload_wizard_skip_scheme',
                3 => 'media_dialog_theme',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7302',
          'version' => '7.x-3.32',
        ),
        'commons_q_a_pages' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_q_a/modules/commons_q_a_pages/commons_q_a_pages.module',
          'basename' => 'commons_q_a_pages.module',
          'name' => 'commons_q_a_pages',
          'info' => 
          array (
            'name' => 'Commons Questions & Answers Pages',
            'description' => 'Enhances the appearance of question nodes by proving the ability for users to post answers inline and allows them to be customized.',
            'core' => '7.x',
            'package' => 'Commons - Landing pages',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'panelizer',
              2 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'panelizer:panelizer:1',
                1 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'panelizer_defaults' => 
              array (
                0 => 'node:question:default',
              ),
              'variable' => 
              array (
                0 => 'panelizer_defaults_node_answer',
                1 => 'panelizer_defaults_node_question',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_q_a' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_q_a/commons_q_a.module',
          'basename' => 'commons_q_a.module',
          'name' => 'commons_q_a',
          'info' => 
          array (
            'name' => 'Commons Questions & Answers',
            'description' => 'Provides a Q&A content type for asking questions and allowing the community to vote for the best answers.',
            'package' => 'Commons - Content types',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_topics',
              1 => 'ctools',
              2 => 'entity',
              3 => 'entityreference',
              4 => 'features',
              5 => 'field_sql_storage',
              6 => 'og',
              7 => 'og_ui',
              8 => 'options',
              9 => 'strongarm',
              10 => 'text',
              11 => 'views',
              12 => 'views_content',
              13 => 'views_litepager',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'panelizer:panelizer:1',
                1 => 'strongarm:strongarm:1',
                2 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_related_question',
              ),
              'field_instance' => 
              array (
                0 => 'message-commons_q_a_question_answered-field_target_nodes',
                1 => 'message-commons_q_a_question_asked-field_target_nodes',
                2 => 'node-answer-body',
                3 => 'node-answer-field_related_question',
                4 => 'node-question-body',
              ),
              'message_type' => 
              array (
                0 => 'commons_q_a_question_answered',
                1 => 'commons_q_a_question_asked',
              ),
              'node' => 
              array (
                0 => 'answer',
                1 => 'question',
              ),
              'og_features_permission' => 
              array (
                0 => 'node:group:create answer content',
                1 => 'node:group:create question content',
                2 => 'node:group:delete any answer content',
                3 => 'node:group:delete any question content',
                4 => 'node:group:delete own answer content',
                5 => 'node:group:delete own question content',
                6 => 'node:group:update any answer content',
                7 => 'node:group:update any question content',
                8 => 'node:group:update own answer content',
                9 => 'node:group:update own question content',
              ),
              'user_permission' => 
              array (
                0 => 'create answer content',
                1 => 'create question content',
                2 => 'delete any answer content',
                3 => 'delete any question content',
                4 => 'delete own answer content',
                5 => 'delete own question content',
                6 => 'edit any answer content',
                7 => 'edit any question content',
                8 => 'edit own answer content',
                9 => 'edit own question content',
              ),
              'variable' => 
              array (
                0 => 'comment_anonymous_answer',
                1 => 'comment_anonymous_question',
                2 => 'comment_answer',
                3 => 'comment_default_mode_answer',
                4 => 'comment_default_mode_question',
                5 => 'comment_default_per_page_answer',
                6 => 'comment_default_per_page_question',
                7 => 'comment_form_location_answer',
                8 => 'comment_form_location_question',
                9 => 'comment_preview_answer',
                10 => 'comment_preview_question',
                11 => 'comment_question',
                12 => 'comment_subject_field_answer',
                13 => 'comment_subject_field_question',
                14 => 'field_bundle_settings_message__commons_q_a_question_answered',
                15 => 'field_bundle_settings_message__commons_q_a_question_asked',
                16 => 'field_bundle_settings_node__answer',
                17 => 'field_bundle_settings_node__question',
                18 => 'menu_options_answer',
                19 => 'menu_options_question',
                20 => 'menu_parent_answer',
                21 => 'menu_parent_question',
                22 => 'node_options_answer',
                23 => 'node_options_question',
                24 => 'node_preview_answer',
                25 => 'node_preview_question',
                26 => 'node_submitted_answer',
                27 => 'node_submitted_question',
                28 => 'pathauto_node_answer_pattern',
              ),
              'views_view' => 
              array (
                0 => 'commons_bw_q_a',
                1 => 'commons_question_answers',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'commons_trusted_contacts' => 'commons_trusted_contacts',
                'message' => 'message',
              ),
              'field' => 
              array (
                'message-commons_q_a_question_answered-field_target_nodes' => 'message-commons_q_a_question_answered-field_target_nodes',
              ),
              'field_base' => 
              array (
                'og_group_ref_other_groups' => 'og_group_ref_other_groups',
                'og_group_ref' => 'og_group_ref',
                'field_body' => 'field_body',
                'field_radioactivity' => 'field_radioactivity',
                'body' => 'body',
                'field_target_nodes' => 'field_target_nodes',
              ),
              'field_instance' => 
              array (
                'node-answer-og_group_ref_other_groups' => 'node-answer-og_group_ref_other_groups',
                'node-question-og_group_ref_other_groups' => 'node-question-og_group_ref_other_groups',
                'og_group_ref' => 'og_group_ref',
                'node-answer-og_group_ref' => 'node-answer-og_group_ref',
                'node-question-og_group_ref' => 'node-question-og_group_ref',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3116',
          'version' => '7.x-3.32',
        ),
        'commons_like' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_like/commons_like.module',
          'basename' => 'commons_like.module',
          'name' => 'commons_like',
          'info' => 
          array (
            'name' => 'Commons Like',
            'description' => 'Allows users to indicate that they like certain content and comments.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'entityreference',
              1 => 'features',
              2 => 'message',
              3 => 'rate',
              4 => 'strongarm',
              5 => 'votingapi',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_instance' => 
              array (
                0 => 'message-commons_like_user_likes_node-field_target_nodes',
              ),
              'message_type' => 
              array (
                0 => 'commons_like_user_likes_node',
              ),
              'variable' => 
              array (
                0 => 'field_bundle_settings_message__commons_like_user_likes_node',
                1 => 'rate_widgets',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3000',
          'version' => '7.x-3.32',
        ),
        'commons_wysiwyg' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_wysiwyg/commons_wysiwyg.module',
          'basename' => 'commons_wysiwyg.module',
          'name' => 'commons_wysiwyg',
          'info' => 
          array (
            'name' => 'Commons WYSIWYG',
            'description' => 'Provides a rich text editor for content creation.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'editor',
              1 => 'editor_ckeditor',
              2 => 'features',
              3 => 'filter',
              4 => 'strongarm',
            ),
            'features' => 
            array (
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'filter' => 
              array (
                0 => 'filtered_html',
                1 => 'full_html',
              ),
              'user_permission' => 
              array (
                0 => 'use text format filtered_html',
              ),
            ),
            'features_exclude' => 
            array (
              'dependencies' => 
              array (
                'media_wysiwyg' => 'entity_embed',
                'entity_embed' => 'media_wysiwyg',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3104',
          'version' => '7.x-3.32',
        ),
        'commons_activity_page' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_activity_streams/commons_activity_page/commons_activity_page.module',
          'basename' => 'commons_activity_page.module',
          'name' => 'commons_activity_page',
          'info' => 
          array (
            'name' => 'Commons Activity Page',
            'description' => 'Provides a landing page which lists site activity.',
            'package' => 'Commons - Landing pages',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_activity_streams',
              1 => 'commons_featured',
              2 => 'ctools',
              3 => 'page_manager',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'page_manager:pages_default:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'page_manager_pages' => 
              array (
                0 => 'commons_activity_streams_activity',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_activity_streams_groups' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_activity_streams/commons_activity_streams_groups/commons_activity_streams_groups.module',
          'basename' => 'commons_activity_streams_groups.module',
          'name' => 'commons_activity_streams_groups',
          'info' => 
          array (
            'name' => 'Commons Activity Streams Groups',
            'description' => 'Integrates site activity with Organic Groups.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_activity_streams',
              1 => 'entity',
              2 => 'views',
              3 => 'views_content',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'views_view' => 
              array (
                0 => 'activity_group',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3101',
          'version' => '7.x-3.32',
        ),
        'commons_activity_streams' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_activity_streams/commons_activity_streams.module',
          'basename' => 'commons_activity_streams.module',
          'name' => 'commons_activity_streams',
          'info' => 
          array (
            'name' => 'Commons Activity Streams',
            'description' => 'Displays a listing of site-wide and user-specific site activity.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_follow',
              1 => 'ctools',
              2 => 'entity',
              3 => 'entityreference',
              4 => 'features',
              5 => 'message',
              6 => 'strongarm',
              7 => 'timeago',
              8 => 'token',
              9 => 'views',
              10 => 'views_content',
              11 => 'views_load_more',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_instance' => 
              array (
                0 => 'message-commons_activity_streams_comment_created-field_target_comments',
                1 => 'message-commons_activity_streams_comment_created-field_target_nodes',
                2 => 'message-commons_activity_streams_node_created-field_target_nodes',
                3 => 'message-commons_activity_streams_user_profile_updated-field_target_users',
              ),
              'message_type' => 
              array (
                0 => 'commons_activity_streams_comment_created',
                1 => 'commons_activity_streams_node_created',
                2 => 'commons_activity_streams_user_profile_updated',
              ),
              'variable' => 
              array (
                0 => 'field_bundle_settings_message__commons_activity_streams_comment_created',
                1 => 'field_bundle_settings_message__commons_activity_streams_node_created',
                2 => 'field_bundle_settings_message__commons_activity_streams_user_profile_updated',
                3 => 'timeago_comment',
                4 => 'timeago_node',
              ),
              'views_view' => 
              array (
                0 => 'commons_activity_streams_activity',
                1 => 'commons_activity_streams_user_activity',
              ),
            ),
            'features_exclude' => 
            array (
              'field' => 
              array (
                'message-commons_activity_streams_comment_created-field_target_comments' => 'message-commons_activity_streams_comment_created-field_target_comments',
                'message-commons_activity_streams_comment_created-field_target_nodes' => 'message-commons_activity_streams_comment_created-field_target_nodes',
                'message-commons_activity_streams_node_created-field_target_nodes' => 'message-commons_activity_streams_node_created-field_target_nodes',
                'message-commons_activity_streams_user_profile_updated-field_target_users' => 'message-commons_activity_streams_user_profile_updated-field_target_users',
              ),
              'field_base' => 
              array (
                'field_target_nodes' => 'field_target_nodes',
                'field_target_comments' => 'field_target_comments',
              ),
              'views_view' => 
              array (
                'commons_bw_all' => 'commons_bw_all',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '3107',
          'version' => '7.x-3.32',
        ),
        'commons_radioactivity_groups' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_radioactivity/commons_radioactivity_groups/commons_radioactivity_groups.module',
          'basename' => 'commons_radioactivity_groups.module',
          'name' => 'commons_radioactivity_groups',
          'info' => 
          array (
            'name' => 'Commons Radioactivity Groups',
            'description' => 'Provides Groups integration to the Commons Radioactivity module.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'commons_radioactivity',
              1 => 'og',
              2 => 'views_content',
              3 => 'views_field_view',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'views_view' => 
              array (
                0 => 'commons_radioactivity_groups_active_in_group',
                1 => 'commons_radioactivity_groups_most_active',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7301',
          'version' => '7.x-3.32',
        ),
        'commons_radioactivity' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_radioactivity/commons_radioactivity.module',
          'basename' => 'commons_radioactivity.module',
          'name' => 'commons_radioactivity',
          'info' => 
          array (
            'name' => 'Commons Radioactivity',
            'description' => 'Integrates with the Radioactivity module to identify active content.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'features',
              2 => 'field_sql_storage',
              3 => 'radioactivity',
              4 => 'strongarm',
              5 => 'views',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'radioactivity:radioactivity_decay_profile:1',
                1 => 'strongarm:strongarm:1',
                2 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'field_radioactivity',
              ),
              'radioactivity_decay_profile' => 
              array (
                0 => 'commons_ra_node',
              ),
              'variable' => 
              array (
                0 => 'commons_radioactivity_entity_types',
              ),
              'views_view' => 
              array (
                0 => 'commons_radioactivity_admin',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7300',
          'version' => '7.x-3.32',
        ),
        'commons_kissmetrics' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_kissmetrics/commons_kissmetrics.module',
          'basename' => 'commons_kissmetrics.module',
          'name' => 'commons_kissmetrics',
          'info' => 
          array (
            'name' => 'Commons KISSmetrics',
            'description' => 'Integrates with KISSmetrics to tracks Commons-specific user metrics and actions.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'comment',
              1 => 'entity',
              2 => 'flag',
              3 => 'kissmetrics',
              4 => 'og',
              5 => 'privatemsg_rules',
              6 => 'rules',
              7 => 'voting_rules',
            ),
            'features' => 
            array (
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'rules_config' => 
              array (
                0 => 'rules_commons_kissmetrics_collect_referenced_groups',
                1 => 'rules_commons_kissmetrics_user_adds_a_trusted_contact',
                2 => 'rules_commons_kissmetrics_user_approves_a_trusted_contact',
                3 => 'rules_commons_kissmetrics_user_creates_content',
                4 => 'rules_commons_kissmetrics_user_edits_profile',
                5 => 'rules_commons_kissmetrics_user_edits_wiki',
                6 => 'rules_commons_kissmetrics_user_flags_content_as_inappropriate',
                7 => 'rules_commons_kissmetrics_user_follows_content',
                8 => 'rules_commons_kissmetrics_user_follows_group',
                9 => 'rules_commons_kissmetrics_user_follows_topic',
                10 => 'rules_commons_kissmetrics_user_follows_user',
                11 => 'rules_commons_kissmetrics_user_likes_content',
                12 => 'rules_commons_kissmetrics_user_logs_in',
                13 => 'rules_commons_kissmetrics_user_logs_out',
                14 => 'rules_commons_kissmetrics_user_posts_comment',
                15 => 'rules_commons_kissmetrics_user_registers',
                16 => 'rules_commons_kissmetrics_user_replies_to_private_message_thread',
                17 => 'rules_commons_kissmetrics_user_starts_new_private_message_thread',
              ),
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.32',
        ),
        'commons_utility_links' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/commons/commons_utility_links/commons_utility_links.module',
          'basename' => 'commons_utility_links.module',
          'name' => 'commons_utility_links',
          'info' => 
          array (
            'name' => 'Commons Utility Links',
            'description' => 'Provides a block which displays a list of useful links.',
            'package' => 'Commons - Building blocks',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'block',
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
            'php' => '5.2.4',
          ),
          'schema_version' => '7301',
          'version' => '7.x-3.32',
        ),
        'i18n_taxonomy' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_taxonomy/i18n_taxonomy.module',
          'basename' => 'i18n_taxonomy.module',
          'name' => 'i18n_taxonomy',
          'info' => 
          array (
            'name' => 'Taxonomy translation',
            'description' => 'Enables multilingual taxonomy.',
            'dependencies' => 
            array (
              0 => 'taxonomy',
              1 => 'i18n_string',
              2 => 'i18n_translation',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18n_taxonomy.inc',
              1 => 'i18n_taxonomy.pages.inc',
              2 => 'i18n_taxonomy.admin.inc',
              3 => 'i18n_taxonomy.test',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => '7004',
          'version' => '7.x-1.13',
        ),
        'i18n_node' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_node/i18n_node.module',
          'basename' => 'i18n_node.module',
          'name' => 'i18n_node',
          'info' => 
          array (
            'name' => 'Multilingual content',
            'description' => 'Extended node options for multilingual content',
            'dependencies' => 
            array (
              0 => 'translation',
              1 => 'i18n',
              2 => 'i18n_string',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'configure' => 'admin/config/regional/i18n/node',
            'files' => 
            array (
              0 => 'i18n_node.test',
              1 => 'i18n_node.variable.inc',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.13',
        ),
        'i18n_string' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_string/i18n_string.module',
          'basename' => 'i18n_string.module',
          'name' => 'i18n_string',
          'info' => 
          array (
            'name' => 'String translation',
            'description' => 'Provides support for translation of user defined strings.',
            'dependencies' => 
            array (
              0 => 'locale',
              1 => 'i18n',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18n_string.admin.inc',
              1 => 'i18n_string.inc',
              2 => 'i18n_string.test',
            ),
            'configure' => 'admin/config/regional/i18n/strings',
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => '7002',
          'version' => '7.x-1.13',
        ),
        'i18n_variable' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_variable/i18n_variable.module',
          'basename' => 'i18n_variable.module',
          'name' => 'i18n_variable',
          'info' => 
          array (
            'name' => 'Variable translation',
            'description' => 'Multilingual variables that switch language depending on page language.',
            'dependencies' => 
            array (
              0 => 'i18n',
              1 => 'variable_store (7.x-2.x)',
              2 => 'variable_realm (7.x-2.x)',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'configure' => 'admin/config/regional/i18n/variable',
            'files' => 
            array (
              0 => 'i18n_variable.class.inc',
              1 => 'i18n_variable.test',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => '7004',
          'version' => '7.x-1.13',
        ),
        'i18n_menu' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_menu/i18n_menu.module',
          'basename' => 'i18n_menu.module',
          'name' => 'i18n_menu',
          'info' => 
          array (
            'name' => 'Menu translation',
            'description' => 'Supports translatable custom menu items.',
            'dependencies' => 
            array (
              0 => 'i18n',
              1 => 'menu',
              2 => 'i18n_string',
              3 => 'i18n_translation',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18n_menu.inc',
              1 => 'i18n_menu.test',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.13',
        ),
        'i18n_user' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_user/i18n_user.module',
          'basename' => 'i18n_user.module',
          'name' => 'i18n_user',
          'info' => 
          array (
            'name' => 'User mail translation',
            'description' => 'Translate emails sent from the User module.',
            'core' => '7.x',
            'package' => 'Multilingual - Internationalization',
            'dependencies' => 
            array (
              0 => 'i18n_variable',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.13',
        ),
        'i18n_translation' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_translation/i18n_translation.module',
          'basename' => 'i18n_translation.module',
          'name' => 'i18n_translation',
          'info' => 
          array (
            'name' => 'Translation sets',
            'description' => 'Simple translation sets API for generic objects',
            'dependencies' => 
            array (
              0 => 'i18n',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18n_translation.inc',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.13',
        ),
        'i18n_redirect' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_redirect/i18n_redirect.module',
          'basename' => 'i18n_redirect.module',
          'name' => 'i18n_redirect',
          'info' => 
          array (
            'name' => 'Translation redirect',
            'description' => 'Redirect to translated page when available. SEO for multilingual sites.',
            'dependencies' => 
            array (
              0 => 'i18n',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.13',
        ),
        'i18n_contact' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_contact/i18n_contact.module',
          'basename' => 'i18n_contact.module',
          'name' => 'i18n_contact',
          'info' => 
          array (
            'name' => 'Contact translation',
            'description' => 'Makes contact categories and replies available for translation.',
            'dependencies' => 
            array (
              0 => 'contact',
              1 => 'i18n_string',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.13',
        ),
        'i18n_field' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_field/i18n_field.module',
          'basename' => 'i18n_field.module',
          'name' => 'i18n_field',
          'info' => 
          array (
            'name' => 'Field translation',
            'description' => 'Translate field properties',
            'dependencies' => 
            array (
              0 => 'field',
              1 => 'i18n_string',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18n_field.inc',
              1 => 'i18n_field.test',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-1.13',
        ),
        'i18n_forum' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_forum/i18n_forum.module',
          'basename' => 'i18n_forum.module',
          'name' => 'i18n_forum',
          'info' => 
          array (
            'name' => 'Multilingual forum',
            'description' => 'Enables multilingual forum, translates names and containers.',
            'dependencies' => 
            array (
              0 => 'forum',
              1 => 'i18n_taxonomy',
              2 => 'i18n_node',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18n_forum.test',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.13',
        ),
        'i18n_sync' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_sync/i18n_sync.module',
          'basename' => 'i18n_sync.module',
          'name' => 'i18n_sync',
          'info' => 
          array (
            'name' => 'Synchronize translations',
            'description' => 'Synchronizes taxonomy and fields accross translations of the same content.',
            'dependencies' => 
            array (
              0 => 'i18n',
              1 => 'translation',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18n_sync.module',
              1 => 'i18n_sync.install',
              2 => 'i18n_sync.module.inc',
              3 => 'i18n_sync.node.inc',
              4 => 'i18n_sync.test',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-1.13',
        ),
        'i18n_block' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_block/i18n_block.module',
          'basename' => 'i18n_block.module',
          'name' => 'i18n_block',
          'info' => 
          array (
            'name' => 'Block languages',
            'description' => 'Enables language selector for blocks and optional block translation.',
            'dependencies' => 
            array (
              0 => 'block',
              1 => 'i18n_string',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18n_block.inc',
              1 => 'i18n_block.test',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.13',
        ),
        'i18n_select' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_select/i18n_select.module',
          'basename' => 'i18n_select.module',
          'name' => 'i18n_select',
          'info' => 
          array (
            'name' => 'Multilingual select',
            'description' => 'API module for multilingual content selection',
            'dependencies' => 
            array (
              0 => 'i18n',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'configure' => 'admin/config/regional/i18n/select',
            'files' => 
            array (
              0 => 'i18n_select.test',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.13',
        ),
        'i18n_path' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n_path/i18n_path.module',
          'basename' => 'i18n_path.module',
          'name' => 'i18n_path',
          'info' => 
          array (
            'name' => 'Path translation',
            'description' => 'Define translations for generic paths',
            'dependencies' => 
            array (
              0 => 'i18n_translation',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18n_path.inc',
              1 => 'i18n_path.test',
            ),
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-1.13',
        ),
        'i18n' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18n/i18n.module',
          'basename' => 'i18n.module',
          'name' => 'i18n',
          'info' => 
          array (
            'name' => 'Internationalization',
            'description' => 'Extends Drupal support for multilingual features.',
            'dependencies' => 
            array (
              0 => 'locale',
              1 => 'variable',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18n_object.inc',
              1 => 'i18n.test',
            ),
            'configure' => 'admin/config/regional/i18n',
            'version' => '7.x-1.13',
            'project' => 'i18n',
            'datestamp' => '1430999922',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.13',
        ),
        'variable_store' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/variable/variable_store/variable_store.module',
          'basename' => 'variable_store.module',
          'name' => 'variable_store',
          'info' => 
          array (
            'name' => 'Variable store',
            'description' => 'Database storage for variable realms. This is an API module.',
            'dependencies' => 
            array (
              0 => 'variable',
            ),
            'package' => 'Variable',
            'core' => '7.x',
            'version' => '7.x-2.5',
            'files' => 
            array (
              0 => 'variable_store.class.inc',
              1 => 'variable_store.test',
            ),
            'project' => 'variable',
            'datestamp' => '1398250128',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-2.5',
        ),
        'variable_realm' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/variable/variable_realm/variable_realm.module',
          'basename' => 'variable_realm.module',
          'name' => 'variable_realm',
          'info' => 
          array (
            'name' => 'Variable realm',
            'description' => 'API to use variable realms from different modules',
            'dependencies' => 
            array (
              0 => 'variable',
            ),
            'package' => 'Variable',
            'core' => '7.x',
            'version' => '7.x-2.5',
            'files' => 
            array (
              0 => 'variable_realm.class.inc',
              1 => 'variable_realm_union.class.inc',
            ),
            'project' => 'variable',
            'datestamp' => '1398250128',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-2.5',
        ),
        'variable_views' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/variable/variable_views/variable_views.module',
          'basename' => 'variable_views.module',
          'name' => 'variable_views',
          'info' => 
          array (
            'name' => 'Variable views',
            'description' => 'Provides views integration for variable, included a default variable argument.',
            'dependencies' => 
            array (
              0 => 'variable',
              1 => 'views',
            ),
            'package' => 'Variable',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'includes/views_plugin_argument_default_variable.inc',
              1 => 'includes/views_handler_field_variable_title.inc',
              2 => 'includes/views_handler_field_variable_value.inc',
            ),
            'version' => '7.x-2.5',
            'project' => 'variable',
            'datestamp' => '1398250128',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.5',
        ),
        'variable_admin' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/variable/variable_admin/variable_admin.module',
          'basename' => 'variable_admin.module',
          'name' => 'variable_admin',
          'info' => 
          array (
            'name' => 'Variable admin',
            'description' => 'Variable Administration UI',
            'dependencies' => 
            array (
              0 => 'variable',
            ),
            'package' => 'Variable',
            'core' => '7.x',
            'version' => '7.x-2.5',
            'project' => 'variable',
            'datestamp' => '1398250128',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.5',
        ),
        'variable_example' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/variable/variable_example/variable_example.module',
          'basename' => 'variable_example.module',
          'name' => 'variable_example',
          'info' => 
          array (
            'name' => 'Variable example',
            'description' => 'An example module showing how to use the Variable API and providing some variables.',
            'dependencies' => 
            array (
              0 => 'variable',
              1 => 'variable_store',
            ),
            'package' => 'Example modules',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'variable_example.variable.inc',
            ),
            'version' => '7.x-2.5',
            'project' => 'variable',
            'datestamp' => '1398250128',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.5',
        ),
        'variable' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/variable/variable.module',
          'basename' => 'variable.module',
          'name' => 'variable',
          'info' => 
          array (
            'name' => 'Variable',
            'description' => 'Variable Information and basic variable API',
            'package' => 'Variable',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'includes/forum.variable.inc',
              1 => 'includes/locale.variable.inc',
              2 => 'includes/menu.variable.inc',
              3 => 'includes/node.variable.inc',
              4 => 'includes/system.variable.inc',
              5 => 'includes/taxonomy.variable.inc',
              6 => 'includes/translation.variable.inc',
              7 => 'includes/user.variable.inc',
              8 => 'variable.test',
            ),
            'version' => '7.x-2.5',
            'project' => 'variable',
            'datestamp' => '1398250128',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.5',
        ),
        'message_subscribe_email' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/message_subscribe/message_subscribe_email/message_subscribe_email.module',
          'basename' => 'message_subscribe_email.module',
          'name' => 'message_subscribe_email',
          'info' => 
          array (
            'name' => 'Message subscribe email',
            'core' => '7.x',
            'php' => '5.2.4',
            'version' => '7.x-1.0-rc2',
            'project' => 'message_subscribe',
            'dependencies' => 
            array (
              0 => 'flag',
              1 => 'list',
              2 => 'views',
            ),
            'files' => 
            array (
              0 => 'message_subscribe_email.test',
            ),
            'datestamp' => '1396169645',
            'description' => '',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc2',
        ),
        'message_subscribe_ui' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/message_subscribe/message_subscribe_ui/message_subscribe_ui.module',
          'basename' => 'message_subscribe_ui.module',
          'name' => 'message_subscribe_ui',
          'info' => 
          array (
            'name' => 'Message subscribe UI',
            'description' => 'Message subscribe UI',
            'core' => '7.x',
            'package' => 'Message',
            'php' => '5.2.4',
            'version' => '7.x-1.0-rc2',
            'project' => 'message_subscribe',
            'dependencies' => 
            array (
              0 => 'message_subscribe',
              1 => 'views',
              2 => 'views_content',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:1',
              ),
              'views_view' => 
              array (
                0 => 'subscribe_node',
                1 => 'subscribe_taxonomy_term',
                2 => 'subscribe_user',
              ),
            ),
            'datestamp' => '1396169645',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc2',
        ),
        'message_subscribe' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/message_subscribe/message_subscribe.module',
          'basename' => 'message_subscribe.module',
          'name' => 'message_subscribe',
          'info' => 
          array (
            'name' => 'Message subscribe',
            'description' => 'Subscribe API for the Message and Message notify modules.',
            'core' => '7.x',
            'package' => 'Message',
            'php' => '5.2.4',
            'project' => 'message_subscribe',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'flag',
              2 => 'message',
              3 => 'message_notify',
            ),
            'files' => 
            array (
              0 => 'message_subscribe.test',
            ),
            'version' => '7.x-1.0-rc2',
            'datestamp' => '1396169645',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc2',
        ),
        'realname' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/realname/realname.module',
          'basename' => 'realname.module',
          'name' => 'realname',
          'info' => 
          array (
            'name' => 'Real name',
            'description' => 'Provides token-based name displays for users.',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'token',
            ),
            'files' => 
            array (
              0 => 'realname.module',
              1 => 'realname.admin.inc',
              2 => 'realname.pages.inc',
              3 => 'realname.tokens.inc',
              4 => 'realname.test',
              5 => 'realname.install',
            ),
            'configure' => 'admin/config/people/realname',
            'version' => '7.x-1.2',
            'project' => 'realname',
            'datestamp' => '1393160306',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-1.2',
        ),
        'addressfield_tokens' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/addressfield_tokens/addressfield_tokens.module',
          'basename' => 'addressfield_tokens.module',
          'name' => 'addressfield_tokens',
          'info' => 
          array (
            'name' => 'Address Field Tokens',
            'description' => 'Creates tokens for address fields, adds new addressfield renders, and adds webform integration.',
            'core' => '7.x',
            'package' => 'Fields',
            'dependencies' => 
            array (
              0 => 'addressfield',
              1 => 'entity_token',
              2 => 'token',
            ),
            'version' => '7.x-1.5',
            'project' => 'addressfield_tokens',
            'datestamp' => '1414599829',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.5',
        ),
        'radioactivitydefaults' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/radioactivity/features/radioactivitydefaults/radioactivitydefaults.module',
          'basename' => 'radioactivitydefaults.module',
          'name' => 'radioactivitydefaults',
          'info' => 
          array (
            'name' => 'Radioactivity defaults',
            'core' => '7.x',
            'package' => 'Radioactivity',
            'version' => '7.x-2.10',
            'project' => 'radioactivity',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'radioactivity',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'radioactivity:radioactivity_decay_profile:1',
              ),
              'features_api' => 
              array (
                0 => 'api:1',
              ),
              'radioactivity_decay_profile' => 
              array (
                0 => 'default_daily',
                1 => 'default_now',
                2 => 'default_weekly',
              ),
            ),
            'datestamp' => '1431079082',
            'description' => '',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.10',
        ),
        'radioactivity' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/radioactivity/radioactivity.module',
          'basename' => 'radioactivity.module',
          'name' => 'radioactivity',
          'info' => 
          array (
            'name' => 'Radioactivity',
            'description' => 'Radioactivity provides a field for modelling popularity of entities.',
            'package' => 'Radioactivity',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'files' => 
            array (
              0 => 'includes/RadioactivityDeferredIncidentStorage.inc',
              1 => 'includes/RadioactivityIncidentStorage.inc',
              2 => 'includes/RadioactivityLiveIncidentStorage.inc',
              3 => 'includes/RadioactivityFileIncidentStorage.inc',
              4 => 'includes/RadioactivityMemcachedIncidentStorage.inc',
              5 => 'includes/RadioactivityRedisIncidentStorage.inc',
              6 => 'includes/RadioactivityIncident.inc',
            ),
            'version' => '7.x-2.10',
            'project' => 'radioactivity',
            'datestamp' => '1431079082',
            'php' => '5.2.4',
          ),
          'schema_version' => '7205',
          'version' => '7.x-2.10',
        ),
        'search_facetapi' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/search_facetapi/search_facetapi.module',
          'basename' => 'search_facetapi.module',
          'name' => 'search_facetapi',
          'info' => 
          array (
            'name' => 'Faceted Navigation for Search',
            'description' => 'Integrates the core Search module with the Facet API project.',
            'dependencies' => 
            array (
              0 => 'facetapi',
            ),
            'package' => 'Search Toolkit',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'plugins/facetapi/adapter.inc',
              1 => 'plugins/facetapi/query_type_term.inc',
              2 => 'plugins/facetapi/query_type_date.inc',
              3 => 'search_facetapi.extender.inc',
            ),
            'version' => '7.x-1.0-beta2',
            'project' => 'search_facetapi',
            'datestamp' => '1338413501',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-beta2',
        ),
        'pathauto' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/pathauto/pathauto.module',
          'basename' => 'pathauto.module',
          'name' => 'pathauto',
          'info' => 
          array (
            'name' => 'Pathauto',
            'description' => 'Provides a mechanism for modules to automatically generate aliases for the content they manage.',
            'dependencies' => 
            array (
              0 => 'path',
              1 => 'token',
            ),
            'core' => '7.x',
            'files' => 
            array (
              0 => 'pathauto.migrate.inc',
              1 => 'pathauto.test',
            ),
            'configure' => 'admin/config/search/path/patterns',
            'recommends' => 
            array (
              0 => 'redirect',
            ),
            'version' => '7.x-1.3',
            'project' => 'pathauto',
            'datestamp' => '1444232655',
            'php' => '5.2.4',
          ),
          'schema_version' => '7006',
          'version' => '7.x-1.3',
        ),
        'elements' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/elements/elements.module',
          'basename' => 'elements.module',
          'name' => 'elements',
          'info' => 
          array (
            'name' => 'Elements',
            'description' => 'Provides a library of Form API elements.',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'elements.module',
              1 => 'elements.theme.inc',
            ),
            'version' => '7.x-1.4',
            'project' => 'elements',
            'datestamp' => '1370667652',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.4',
        ),
        'potx_test_5' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/potx/tests/potx_test_5.module',
          'basename' => 'potx_test_5.module',
          'name' => 'potx_test_5',
          'info' => 
          array (
            'dependencies' => 
            array (
            ),
            'description' => '',
            'version' => NULL,
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => NULL,
        ),
        'potx_test_7' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/potx/tests/potx_test_7.module',
          'basename' => 'potx_test_7.module',
          'name' => 'potx_test_7',
          'info' => 
          array (
            'dependencies' => 
            array (
            ),
            'description' => '',
            'version' => NULL,
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => NULL,
        ),
        'potx' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/potx/potx.module',
          'basename' => 'potx.module',
          'name' => 'potx',
          'info' => 
          array (
            'name' => 'Translation template extractor',
            'description' => 'Provides a web interface and an API to extract translatable text from the sources of installed components.',
            'dependencies' => 
            array (
              0 => 'locale',
            ),
            'core' => '7.x',
            'package' => 'Multilanguage',
            'files' => 
            array (
              0 => 'potx.module',
              1 => 'potx.inc',
              2 => 'tests/potx.test',
            ),
            'version' => '7.x-1.0',
            'project' => 'potx',
            'datestamp' => '1296046593',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0',
        ),
        'registration_views' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/registration/modules/registration_views/registration_views.module',
          'basename' => 'registration_views.module',
          'name' => 'registration_views',
          'info' => 
          array (
            'name' => 'Registration Views',
            'description' => 'Entity Registration Views integration',
            'package' => 'Registration',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'registration',
              1 => 'views',
            ),
            'files' => 
            array (
              0 => 'includes/registration_handler_field_registration_link.inc',
              1 => 'includes/registration_handler_field_registration_link_edit.inc',
              2 => 'includes/registration_handler_field_registration_link_delete.inc',
              3 => 'includes/registration_handler_relationship.inc',
              4 => 'includes/registration_handler_field_entity_capacity_used.inc',
              5 => 'includes/registration_handler_field_entity_capacity_total.inc',
              6 => 'includes/registration_handler_field_entity_datetime.inc',
              7 => 'includes/registration_handler_field_entity_settings_link.inc',
              8 => 'includes/registration_handler_field_entity_registration_status.inc',
            ),
            'version' => '7.x-1.6',
            'project' => 'registration',
            'datestamp' => '1444240141',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.6',
        ),
        'registration_entity_access' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/registration/modules/registration_entity_access/registration_entity_access.module',
          'basename' => 'registration_entity_access.module',
          'name' => 'registration_entity_access',
          'info' => 
          array (
            'name' => 'Registration Entity Access',
            'description' => 'Provides per entity access control for registration.',
            'package' => 'Registration',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'registration',
            ),
            'version' => '7.x-1.6',
            'project' => 'registration',
            'datestamp' => '1444240141',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.6',
        ),
        'registration_waitlist' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/registration/modules/registration_waitlist/registration_waitlist.module',
          'basename' => 'registration_waitlist.module',
          'name' => 'registration_waitlist',
          'info' => 
          array (
            'name' => 'Registration Wait list',
            'description' => 'Provides a special registration state that acts as a wait list.',
            'package' => 'Registration',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'registration',
            ),
            'files' => 
            array (
              0 => 'registration_waitlist.test',
            ),
            'version' => '7.x-1.6',
            'project' => 'registration',
            'datestamp' => '1444240141',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.6',
        ),
        'registration' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/registration/registration.module',
          'basename' => 'registration.module',
          'name' => 'registration',
          'info' => 
          array (
            'name' => 'Registration',
            'description' => 'Entity based registration system.',
            'package' => 'Registration',
            'core' => '7.x',
            'configure' => 'admin/structure/registration',
            'dependencies' => 
            array (
              0 => 'entity',
            ),
            'files' => 
            array (
              0 => 'tests/registration.test',
              1 => 'lib/registration.entity.inc',
              2 => 'lib/registration.metadata.inc',
              3 => 'lib/registration_state.controller.inc',
              4 => 'lib/registration_state.entity.inc',
              5 => 'lib/registration_state.ui_controller.inc',
              6 => 'lib/registration_type.controller.inc',
              7 => 'lib/registration_type.entity.inc',
              8 => 'lib/registration_type.ui_controller.inc',
            ),
            'version' => '7.x-1.6',
            'project' => 'registration',
            'datestamp' => '1444240141',
            'php' => '5.2.4',
          ),
          'schema_version' => '7107',
          'version' => '7.x-1.6',
        ),
        'lingotek' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/lingotek/lingotek.module',
          'basename' => 'lingotek.module',
          'name' => 'lingotek',
          'info' => 
          array (
            'name' => 'Lingotek Translation',
            'description' => 'Extends Drupal\'s multilingual features by integrating with the Lingotek Translation Management System.',
            'package' => 'Multilingual',
            'core' => '7.x',
            'php' => '5.3',
            'configure' => 'admin/config/lingotek/setup',
            'dependencies' => 
            array (
              0 => 'locale',
              1 => 'field_ui',
              2 => 'title',
              3 => 'block',
              4 => 'menu',
              5 => 'i18n',
              6 => 'i18n_block',
              7 => 'variable',
              8 => 'entity',
              9 => 'i18n_menu',
              10 => 'i18n_string',
              11 => 'taxonomy',
              12 => 'i18n_taxonomy',
              13 => 'i18n_translation',
              14 => 'i18n_variable',
              15 => 'views',
              16 => 'ctools',
              17 => 'potx',
            ),
            'files' => 
            array (
              0 => 'lib/Drupal/lingotek/Lingotek.php',
              1 => 'lib/Drupal/lingotek/LingotekApi.php',
              2 => 'lib/Drupal/lingotek/LingotekAccount.php',
              3 => 'lib/Drupal/lingotek/LingotekConfigSet.php',
              4 => 'lib/Drupal/lingotek/LingotekDocument.php',
              5 => 'lib/Drupal/lingotek/LingotekLog.php',
              6 => 'lib/Drupal/lingotek/LingotekEntity.php',
              7 => 'lib/Drupal/lingotek/LingotekPhase.php',
              8 => 'lib/Drupal/lingotek/LingotekSync.php',
              9 => 'lib/Drupal/lingotek/LingotekTranslatableEntity.php',
              10 => 'tests/lingotek.base.test',
              11 => 'tests/lingotek.access.test',
              12 => 'tests/lingotek.setup.test',
              13 => 'lingotek_views_handler_workbench_link.inc',
            ),
            'stylesheets' => 
            array (
              'all' => 
              array (
                0 => 'style/base.css',
              ),
            ),
            'version' => '7.x-6.02',
            'project' => 'lingotek',
            'datestamp' => '1427170701',
          ),
          'schema_version' => '7606',
          'version' => '7.x-6.02',
        ),
        'timeago' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/timeago/timeago.module',
          'basename' => 'timeago.module',
          'name' => 'timeago',
          'info' => 
          array (
            'name' => 'Timeago',
            'description' => 'Converts dynamic timetamps to a \'time ago\' format using jQuery with graceful degredation.',
            'core' => '7.x',
            'configure' => 'admin/config/user-interface/timeago',
            'files' => 
            array (
              0 => 'timeago.install',
              1 => 'timeago.module',
            ),
            'version' => '7.x-2.3',
            'project' => 'timeago',
            'datestamp' => '1415314687',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.3',
        ),
        'libraries' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/libraries/libraries.module',
          'basename' => 'libraries.module',
          'name' => 'libraries',
          'info' => 
          array (
            'name' => 'Libraries',
            'description' => 'Allows version-dependent and shared usage of external libraries.',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'system (>=7.11)',
            ),
            'files' => 
            array (
              0 => 'tests/libraries.test',
            ),
            'version' => '7.x-2.2',
            'project' => 'libraries',
            'datestamp' => '1391965716',
            'php' => '5.2.4',
          ),
          'schema_version' => '7200',
          'version' => '7.x-2.2',
        ),
        'devel_generate' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/devel/devel_generate/devel_generate.module',
          'basename' => 'devel_generate.module',
          'name' => 'devel_generate',
          'info' => 
          array (
            'name' => 'Devel generate',
            'description' => 'Generate dummy users, nodes, and taxonomy terms.',
            'package' => 'Development',
            'core' => '7.x',
            'tags' => 
            array (
              0 => 'developer',
            ),
            'configure' => 'admin/config/development/generate',
            'files' => 
            array (
              0 => 'devel_generate.test',
            ),
            'version' => '7.x-1.5+13-dev',
            'project' => 'devel',
            'datestamp' => '1445426642',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.5+13-dev',
        ),
        'devel_node_access' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/devel/devel_node_access.module',
          'basename' => 'devel_node_access.module',
          'name' => 'devel_node_access',
          'info' => 
          array (
            'name' => 'Devel node access',
            'description' => 'Developer blocks and page illustrating relevant node_access records.',
            'package' => 'Development',
            'dependencies' => 
            array (
              0 => 'menu',
            ),
            'core' => '7.x',
            'configure' => 'admin/config/development/devel',
            'tags' => 
            array (
              0 => 'developer',
            ),
            'version' => '7.x-1.5+13-dev',
            'project' => 'devel',
            'datestamp' => '1445426642',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.5+13-dev',
        ),
        'devel' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/devel/devel.module',
          'basename' => 'devel.module',
          'name' => 'devel',
          'info' => 
          array (
            'name' => 'Devel',
            'description' => 'Various blocks, pages, and functions for developers.',
            'package' => 'Development',
            'core' => '7.x',
            'configure' => 'admin/config/development/devel',
            'tags' => 
            array (
              0 => 'developer',
            ),
            'files' => 
            array (
              0 => 'devel.test',
              1 => 'devel.mail.inc',
            ),
            'version' => '7.x-1.5+13-dev',
            'project' => 'devel',
            'datestamp' => '1445426642',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7007',
          'version' => '7.x-1.5+13-dev',
        ),
        'memcache_admin' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/memcache/memcache_admin/memcache_admin.module',
          'basename' => 'memcache_admin.module',
          'name' => 'memcache_admin',
          'info' => 
          array (
            'name' => 'Memcache Admin',
            'description' => 'Adds a User Interface to monitor the Memcache for this site.',
            'core' => '7.x',
            'package' => 'Performance and scalability',
            'configure' => 'admin/config/system/memcache',
            'version' => '7.x-1.5',
            'project' => 'memcache',
            'datestamp' => '1422088394',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.5',
        ),
        'memcache' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/memcache/memcache.module',
          'basename' => 'memcache.module',
          'name' => 'memcache',
          'info' => 
          array (
            'name' => 'Memcache',
            'description' => 'High performance integration with memcache.',
            'package' => 'Performance and scalability',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'memcache.inc',
              1 => 'tests/memcache.test',
              2 => 'tests/memcache-session.test',
              3 => 'tests/memcache-lock.test',
            ),
            'version' => '7.x-1.5',
            'project' => 'memcache',
            'datestamp' => '1422088394',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-1.5',
        ),
        'module_filter' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/module_filter/module_filter.module',
          'basename' => 'module_filter.module',
          'name' => 'module_filter',
          'info' => 
          array (
            'name' => 'Module filter',
            'description' => 'Filter the modules list.',
            'core' => '7.x',
            'package' => 'Administration',
            'files' => 
            array (
              0 => 'module_filter.install',
              1 => 'module_filter.js',
              2 => 'module_filter.module',
              3 => 'module_filter.admin.inc',
              4 => 'module_filter.theme.inc',
              5 => 'css/module_filter.css',
              6 => 'css/module_filter_tab.css',
              7 => 'js/module_filter.js',
              8 => 'js/module_filter_tab.js',
            ),
            'configure' => 'admin/config/user-interface/modulefilter',
            'version' => '7.x-2.0',
            'project' => 'module_filter',
            'datestamp' => '1424631189',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7201',
          'version' => '7.x-2.0',
        ),
        'email_registration' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/email_registration/email_registration.module',
          'basename' => 'email_registration.module',
          'name' => 'email_registration',
          'info' => 
          array (
            'name' => 'Email Registration',
            'description' => 'Allows users to register with an e-mail address as their username.',
            'files' => 
            array (
              0 => 'email_registration.test',
            ),
            'core' => '7.x',
            'version' => '7.x-1.3',
            'project' => 'email_registration',
            'datestamp' => '1444050240',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.3',
        ),
        'media_oembed' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/media_oembed/media_oembed.module',
          'basename' => 'media_oembed.module',
          'name' => 'media_oembed',
          'info' => 
          array (
            'name' => 'Media: oEmbed',
            'description' => 'Adds oEmbed as a supported media provider.',
            'package' => 'Media',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'media_internet',
            ),
            'files' => 
            array (
              0 => 'includes/MediaOEmbedStreamWrapper.inc',
              1 => 'includes/MediaInternetOEmbedHandler.inc',
            ),
            'configure' => 'admin/config/media/media-oembed',
            'version' => '7.x-2.4',
            'project' => 'media_oembed',
            'datestamp' => '1441169347',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.4',
        ),
        'connector_action_default_register_form' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/connector/modules/connector_action_default_register_form/connector_action_default_register_form.module',
          'basename' => 'connector_action_default_register_form.module',
          'name' => 'connector_action_default_register_form',
          'info' => 
          array (
            'name' => 'Connector Action Default Register Form',
            'description' => 'Adepts the default action for new accounts.',
            'core' => '7.x',
            'package' => 'Connector Action',
            'dependencies' => 
            array (
              0 => 'connector',
            ),
            'version' => '7.x-1.0-beta2',
            'project' => 'connector',
            'datestamp' => '1361736072',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-beta2',
        ),
        'connector' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/connector/connector.module',
          'basename' => 'connector.module',
          'name' => 'connector',
          'info' => 
          array (
            'name' => 'Connector',
            'description' => 'Provides base functionality for one-click login with eg. Facebook Connect and Twitter Connect',
            'core' => '7.x',
            'package' => 'Connector',
            'version' => '7.x-1.0-beta2',
            'project' => 'connector',
            'datestamp' => '1361736072',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-beta2',
        ),
        'panelizer' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/panelizer/panelizer.module',
          'basename' => 'panelizer.module',
          'name' => 'panelizer',
          'info' => 
          array (
            'name' => 'Panelizer',
            'description' => 'Allow any node type to have custom panel displays, similar to the panel node type.',
            'package' => 'Panels',
            'dependencies' => 
            array (
              0 => 'panels',
              1 => 'ctools',
              2 => 'page_manager',
            ),
            'core' => '7.x',
            'configure' => 'admin/config/content/panelizer',
            'files' => 
            array (
              0 => 'plugins/views/panelizer_handler_field_link.inc',
              1 => 'plugins/views/panelizer_handler_panelizer_status.inc',
              2 => 'plugins/views/panelizer_handler_filter_panelizer_status.inc',
              3 => 'plugins/views/panelizer_plugin_row_panelizer_node_view.inc',
            ),
            'version' => '7.x-3.1',
            'project' => 'panelizer',
            'datestamp' => '1360785942',
            'php' => '5.2.4',
          ),
          'schema_version' => '7110',
          'version' => '7.x-3.1',
        ),
        'entity_translation_upgrade' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/entity_translation/entity_translation_upgrade/entity_translation_upgrade.module',
          'basename' => 'entity_translation_upgrade.module',
          'name' => 'entity_translation_upgrade',
          'info' => 
          array (
            'name' => 'Entity Translation Upgrade',
            'description' => 'Provides an upgrade path from node-based translation to field-based translation.',
            'package' => 'Multilingual - Entity Translation',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'entity_translation',
            ),
            'version' => '7.x-1.0-beta4',
            'project' => 'entity_translation',
            'datestamp' => '1421971088',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.0-beta4',
        ),
        'entity_translation_i18n_menu' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/entity_translation/entity_translation_i18n_menu/entity_translation_i18n_menu.module',
          'basename' => 'entity_translation_i18n_menu.module',
          'name' => 'entity_translation_i18n_menu',
          'info' => 
          array (
            'name' => 'Entity Translation Menu',
            'description' => 'Allows menu items to be translated on the entity form.',
            'package' => 'Multilingual - Entity Translation',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'entity_translation',
              1 => 'i18n',
              2 => 'i18n_menu',
            ),
            'files' => 
            array (
              0 => 'entity_translation_i18n_menu.test',
            ),
            'version' => '7.x-1.0-beta4',
            'project' => 'entity_translation',
            'datestamp' => '1421971088',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-beta4',
        ),
        'entity_translation' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/entity_translation/entity_translation.module',
          'basename' => 'entity_translation.module',
          'name' => 'entity_translation',
          'info' => 
          array (
            'name' => 'Entity Translation',
            'description' => 'Allows entities to be translated into different languages.',
            'package' => 'Multilingual - Entity Translation',
            'core' => '7.x',
            'configure' => 'admin/config/regional/entity_translation',
            'dependencies' => 
            array (
              0 => 'locale (>7.14)',
            ),
            'files' => 
            array (
              0 => 'includes/translation.handler_factory.inc',
              1 => 'includes/translation.handler.inc',
              2 => 'includes/translation.handler.comment.inc',
              3 => 'includes/translation.handler.node.inc',
              4 => 'includes/translation.handler.taxonomy_term.inc',
              5 => 'includes/translation.handler.user.inc',
              6 => 'tests/entity_translation.test',
              7 => 'views/entity_translation_handler_relationship.inc',
              8 => 'views/entity_translation_handler_field_translate_link.inc',
              9 => 'views/entity_translation_handler_field_label.inc',
              10 => 'views/entity_translation_handler_filter_entity_type.inc',
              11 => 'views/entity_translation_handler_filter_language.inc',
              12 => 'views/entity_translation_handler_filter_translation_exists.inc',
              13 => 'views/entity_translation_handler_field_field.inc',
            ),
            'version' => '7.x-1.0-beta4',
            'project' => 'entity_translation',
            'datestamp' => '1421971088',
            'php' => '5.2.4',
          ),
          'schema_version' => '7007',
          'version' => '7.x-1.0-beta4',
        ),
        'flexslider_picture' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/picture/flexslider_picture/flexslider_picture.module',
          'basename' => 'flexslider_picture.module',
          'name' => 'flexslider_picture',
          'info' => 
          array (
            'name' => 'FlexSlider Picture',
            'description' => 'Integrates the Picture module with the FlexSlider module for a truly responsive slider.',
            'package' => 'Picture',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'picture',
              1 => 'flexslider (2.x)',
              2 => 'flexslider_fields (2.x)',
            ),
            'version' => '7.x-2.13',
            'project' => 'picture',
            'datestamp' => '1444740240',
            'php' => '5.2.4',
          ),
          'schema_version' => '7201',
          'version' => '7.x-2.13',
        ),
        'picture' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/picture/picture.module',
          'basename' => 'picture.module',
          'name' => 'picture',
          'info' => 
          array (
            'name' => 'Picture',
            'description' => 'Picture element',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'image',
              2 => 'breakpoints',
            ),
            'files' => 
            array (
              0 => 'includes/PictureMapping.php',
            ),
            'configure' => 'admin/config/media/picture',
            'package' => 'Picture',
            'stylesheets' => 
            array (
              'all' => 
              array (
                0 => 'picture_wysiwyg.css',
              ),
            ),
            'version' => '7.x-2.13',
            'project' => 'picture',
            'datestamp' => '1444740240',
            'php' => '5.2.4',
          ),
          'schema_version' => '7203',
          'version' => '7.x-2.13',
        ),
        'apachesolr_proximity' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/apachesolr_proximity/apachesolr_proximity.module',
          'basename' => 'apachesolr_proximity.module',
          'name' => 'apachesolr_proximity',
          'info' => 
          array (
            'name' => 'Apache Solr Term Proximity',
            'description' => 'Applies proximity boosting to Solr searches so that the distance between two or more terms is factored in the relevancy.',
            'package' => 'Search Toolkit',
            'core' => '7.x',
            'version' => '7.x-1.0-rc1',
            'project' => 'apachesolr_proximity',
            'datestamp' => '1353687056',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc1',
        ),
        'ckeditor' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ckeditor/ckeditor.module',
          'basename' => 'ckeditor.module',
          'name' => 'ckeditor',
          'info' => 
          array (
            'name' => 'CKEditor',
            'description' => 'Enables CKEditor (WYSIWYG HTML editor) for use instead of plain text fields.',
            'core' => '7.x',
            'package' => 'User interface',
            'configure' => 'admin/config/content/ckeditor',
            'version' => '7.x-1.16+9-dev',
            'project' => 'ckeditor',
            'datestamp' => '1446047087',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7005',
          'version' => '7.x-1.16+9-dev',
        ),
        'views_content' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ctools/views_content/views_content.module',
          'basename' => 'views_content.module',
          'name' => 'views_content',
          'info' => 
          array (
            'name' => 'Views content panes',
            'description' => 'Allows Views content to be used in Panels, Dashboard and other modules which use the CTools Content API.',
            'package' => 'Chaos tool suite',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'views',
            ),
            'core' => '7.x',
            'version' => '7.x-1.9',
            'files' => 
            array (
              0 => 'plugins/views/views_content_plugin_display_ctools_context.inc',
              1 => 'plugins/views/views_content_plugin_display_panel_pane.inc',
              2 => 'plugins/views/views_content_plugin_style_ctools_context.inc',
            ),
            'project' => 'ctools',
            'datestamp' => '1440020680',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.9',
        ),
        'bulk_export' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ctools/bulk_export/bulk_export.module',
          'basename' => 'bulk_export.module',
          'name' => 'bulk_export',
          'info' => 
          array (
            'name' => 'Bulk Export',
            'description' => 'Performs bulk exporting of data objects known about by Chaos tools.',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'package' => 'Chaos tool suite',
            'version' => '7.x-1.9',
            'project' => 'ctools',
            'datestamp' => '1440020680',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.9',
        ),
        'page_manager' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ctools/page_manager/page_manager.module',
          'basename' => 'page_manager.module',
          'name' => 'page_manager',
          'info' => 
          array (
            'name' => 'Page manager',
            'description' => 'Provides a UI and API to manage pages within the site.',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'package' => 'Chaos tool suite',
            'version' => '7.x-1.9',
            'project' => 'ctools',
            'datestamp' => '1440020680',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.9',
        ),
        'ctools_custom_content' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ctools/ctools_custom_content/ctools_custom_content.module',
          'basename' => 'ctools_custom_content.module',
          'name' => 'ctools_custom_content',
          'info' => 
          array (
            'name' => 'Custom content panes',
            'description' => 'Create custom, exportable, reusable content panes for applications like Panels.',
            'core' => '7.x',
            'package' => 'Chaos tool suite',
            'version' => '7.x-1.9',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'project' => 'ctools',
            'datestamp' => '1440020680',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.9',
        ),
        'ctools_plugin_example' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ctools/ctools_plugin_example/ctools_plugin_example.module',
          'basename' => 'ctools_plugin_example.module',
          'name' => 'ctools_plugin_example',
          'info' => 
          array (
            'name' => 'Chaos Tools (CTools) Plugin Example',
            'description' => 'Shows how an external module can provide ctools plugins (for Panels, etc.).',
            'package' => 'Chaos tool suite',
            'version' => '7.x-1.9',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'panels',
              2 => 'page_manager',
              3 => 'advanced_help',
            ),
            'core' => '7.x',
            'project' => 'ctools',
            'datestamp' => '1440020680',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.9',
        ),
        'term_depth' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ctools/term_depth/term_depth.module',
          'basename' => 'term_depth.module',
          'name' => 'term_depth',
          'info' => 
          array (
            'name' => 'Term Depth access',
            'description' => 'Controls access to context based upon term depth',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'package' => 'Chaos tool suite',
            'version' => '7.x-1.9',
            'project' => 'ctools',
            'datestamp' => '1440020680',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.9',
        ),
        'ctools_access_ruleset' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ctools/ctools_access_ruleset/ctools_access_ruleset.module',
          'basename' => 'ctools_access_ruleset.module',
          'name' => 'ctools_access_ruleset',
          'info' => 
          array (
            'name' => 'Custom rulesets',
            'description' => 'Create custom, exportable, reusable access rulesets for applications like Panels.',
            'core' => '7.x',
            'package' => 'Chaos tool suite',
            'version' => '7.x-1.9',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'project' => 'ctools',
            'datestamp' => '1440020680',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.9',
        ),
        'ctools_ajax_sample' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ctools/ctools_ajax_sample/ctools_ajax_sample.module',
          'basename' => 'ctools_ajax_sample.module',
          'name' => 'ctools_ajax_sample',
          'info' => 
          array (
            'name' => 'Chaos Tools (CTools) AJAX Example',
            'description' => 'Shows how to use the power of Chaos AJAX.',
            'package' => 'Chaos tool suite',
            'version' => '7.x-1.9',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'core' => '7.x',
            'project' => 'ctools',
            'datestamp' => '1440020680',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.9',
        ),
        'stylizer' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ctools/stylizer/stylizer.module',
          'basename' => 'stylizer.module',
          'name' => 'stylizer',
          'info' => 
          array (
            'name' => 'Stylizer',
            'description' => 'Create custom styles for applications such as Panels.',
            'core' => '7.x',
            'package' => 'Chaos tool suite',
            'version' => '7.x-1.9',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'color',
            ),
            'project' => 'ctools',
            'datestamp' => '1440020680',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.9',
        ),
        'ctools' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/ctools/ctools.module',
          'basename' => 'ctools.module',
          'name' => 'ctools',
          'info' => 
          array (
            'name' => 'Chaos tools',
            'description' => 'A library of helpful tools by Merlin of Chaos.',
            'core' => '7.x',
            'package' => 'Chaos tool suite',
            'version' => '7.x-1.9',
            'files' => 
            array (
              0 => 'includes/context.inc',
              1 => 'includes/css-cache.inc',
              2 => 'includes/math-expr.inc',
              3 => 'includes/stylizer.inc',
              4 => 'tests/css_cache.test',
            ),
            'project' => 'ctools',
            'datestamp' => '1440020680',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.9',
        ),
        'panels_ipe' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/panels/panels_ipe/panels_ipe.module',
          'basename' => 'panels_ipe.module',
          'name' => 'panels_ipe',
          'info' => 
          array (
            'name' => 'Panels In-Place Editor',
            'description' => 'Provide a UI for managing some Panels directly on the frontend, instead of having to use the backend.',
            'package' => 'Panels',
            'version' => '7.x-3.5',
            'dependencies' => 
            array (
              0 => 'panels',
            ),
            'core' => '7.x',
            'configure' => 'admin/structure/panels',
            'files' => 
            array (
              0 => 'panels_ipe.module',
            ),
            'project' => 'panels',
            'datestamp' => '1422472985',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.5',
        ),
        'i18n_panels' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/panels/i18n_panels/i18n_panels.module',
          'basename' => 'i18n_panels.module',
          'name' => 'i18n_panels',
          'info' => 
          array (
            'name' => 'Panels translation',
            'description' => 'Supports translatable panels items.',
            'dependencies' => 
            array (
              0 => 'i18n',
              1 => 'panels',
              2 => 'i18n_string',
              3 => 'i18n_translation',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'version' => '7.x-3.5',
            'project' => 'panels',
            'datestamp' => '1422472985',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.5',
        ),
        'panels_node' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/panels/panels_node/panels_node.module',
          'basename' => 'panels_node.module',
          'name' => 'panels_node',
          'info' => 
          array (
            'name' => 'Panel nodes',
            'description' => 'Create nodes that are divided into areas with selectable content.',
            'package' => 'Panels',
            'version' => '7.x-3.5',
            'dependencies' => 
            array (
              0 => 'panels',
            ),
            'configure' => 'admin/structure/panels',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'panels_node.module',
            ),
            'project' => 'panels',
            'datestamp' => '1422472985',
            'php' => '5.2.4',
          ),
          'schema_version' => '6001',
          'version' => '7.x-3.5',
        ),
        'panels_mini' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/panels/panels_mini/panels_mini.module',
          'basename' => 'panels_mini.module',
          'name' => 'panels_mini',
          'info' => 
          array (
            'name' => 'Mini panels',
            'description' => 'Create mini panels that can be used as blocks by Drupal and panes by other panel modules.',
            'package' => 'Panels',
            'version' => '7.x-3.5',
            'dependencies' => 
            array (
              0 => 'panels',
            ),
            'core' => '7.x',
            'files' => 
            array (
              0 => 'plugins/export_ui/panels_mini_ui.class.php',
            ),
            'project' => 'panels',
            'datestamp' => '1422472985',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.5',
        ),
        'panels' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/panels/panels.module',
          'basename' => 'panels.module',
          'name' => 'panels',
          'info' => 
          array (
            'name' => 'Panels',
            'description' => 'Core Panels display functions; provides no external UI, at least one other Panels module should be enabled.',
            'core' => '7.x',
            'package' => 'Panels',
            'version' => '7.x-3.5',
            'configure' => 'admin/structure/panels',
            'dependencies' => 
            array (
              0 => 'ctools (>1.5)',
            ),
            'files' => 
            array (
              0 => 'panels.module',
              1 => 'includes/common.inc',
              2 => 'includes/legacy.inc',
              3 => 'includes/plugins.inc',
              4 => 'plugins/views/panels_views_plugin_row_fields.inc',
            ),
            'project' => 'panels',
            'datestamp' => '1422472985',
            'php' => '5.2.4',
          ),
          'schema_version' => '7303',
          'version' => '7.x-3.5',
        ),
        'schemaorg_person' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/schemaorg/example/schemaorg_person/schemaorg_person.module',
          'basename' => 'schemaorg_person.module',
          'name' => 'schemaorg_person',
          'info' => 
          array (
            'name' => 'Schema.org example: Person',
            'description' => 'Example of a person content type with fields mapped to schema.org',
            'core' => '7.x',
            'package' => 'Schema.org',
            'php' => '5.2.4',
            'dependencies' => 
            array (
              0 => 'features',
              1 => 'image',
              2 => 'rdf',
              3 => 'schemaorg',
              4 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
              ),
              'field' => 
              array (
                0 => 'node-schemaorg_person-field_schemaorg_affiliation',
                1 => 'node-schemaorg_person-field_schemaorg_bio',
                2 => 'node-schemaorg_person-field_schemaorg_jobtitle',
                3 => 'node-schemaorg_person-field_schemaorg_photo',
              ),
              'node' => 
              array (
                0 => 'schemaorg_person',
              ),
              'schemaorg' => 
              array (
                0 => 'node-schemaorg_person',
              ),
              'variable' => 
              array (
                0 => 'comment_anonymous_schemaorg_person',
                1 => 'comment_default_mode_schemaorg_person',
                2 => 'comment_default_per_page_schemaorg_person',
                3 => 'comment_form_location_schemaorg_person',
                4 => 'comment_preview_schemaorg_person',
                5 => 'comment_schemaorg_person',
                6 => 'comment_subject_field_schemaorg_person',
                7 => 'menu_options_schemaorg_person',
                8 => 'menu_parent_schemaorg_person',
                9 => 'node_options_schemaorg_person',
                10 => 'node_preview_schemaorg_person',
                11 => 'node_submitted_schemaorg_person',
              ),
            ),
            'version' => '7.x-1.0-rc1',
            'project' => 'schemaorg',
            'datestamp' => '1422498483',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc1',
        ),
        'schemaorg_recipe' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/schemaorg/example/schemaorg_recipe/schemaorg_recipe.module',
          'basename' => 'schemaorg_recipe.module',
          'name' => 'schemaorg_recipe',
          'info' => 
          array (
            'name' => 'Schema.org example: Recipe',
            'description' => 'Example of a recipe content type with fields mapped to schema.org',
            'core' => '7.x',
            'package' => 'Schema.org',
            'dependencies' => 
            array (
              0 => 'features',
              1 => 'image',
              2 => 'rdf',
              3 => 'recipe',
              4 => 'schemaorg',
            ),
            'features' => 
            array (
              'field' => 
              array (
                0 => 'node-recipe-field_schemaorg_image',
              ),
              'schemaorg' => 
              array (
                0 => 'node-recipe',
              ),
            ),
            'version' => '7.x-1.0-rc1',
            'project' => 'schemaorg',
            'datestamp' => '1422498483',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc1',
        ),
        'schemaorg_event' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/schemaorg/example/schemaorg_event/schemaorg_event.module',
          'basename' => 'schemaorg_event.module',
          'name' => 'schemaorg_event',
          'info' => 
          array (
            'name' => 'Schema.org example: Event',
            'description' => 'Example of an event content type with fields mapped to schema.org',
            'core' => '7.x',
            'package' => 'Schema.org',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'date',
              2 => 'date_api',
              3 => 'date_popup',
              4 => 'date_views',
              5 => 'features',
              6 => 'field_sql_storage',
              7 => 'node',
              8 => 'rdf',
              9 => 'schemaorg',
              10 => 'strongarm',
              11 => 'text',
              12 => 'views',
              13 => 'views_ui',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'field' => 
              array (
                0 => 'node-schemaorg_event-field_location',
                1 => 'node-schemaorg_event-field_schemaorg_date',
                2 => 'node-schemaorg_event-field_schemaorg_description',
              ),
              'node' => 
              array (
                0 => 'schemaorg_event',
              ),
              'schemaorg' => 
              array (
                0 => 'node-schemaorg_event',
              ),
              'variable' => 
              array (
                0 => 'comment_anonymous_schemaorg_event',
                1 => 'comment_default_mode_schemaorg_event',
                2 => 'comment_default_per_page_schemaorg_event',
                3 => 'comment_form_location_schemaorg_event',
                4 => 'comment_preview_schemaorg_event',
                5 => 'comment_schemaorg_event',
                6 => 'comment_subject_field_schemaorg_event',
                7 => 'menu_options_schemaorg_event',
                8 => 'menu_parent_schemaorg_event',
                9 => 'node_options_schemaorg_event',
                10 => 'node_preview_schemaorg_event',
                11 => 'node_submitted_schemaorg_event',
              ),
              'views_view' => 
              array (
                0 => 'events',
              ),
            ),
            'version' => '7.x-1.0-rc1',
            'project' => 'schemaorg',
            'datestamp' => '1422498483',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc1',
        ),
        'schemaorg_ui' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/schemaorg/modules/schemaorg_ui/schemaorg_ui.module',
          'basename' => 'schemaorg_ui.module',
          'name' => 'schemaorg_ui',
          'info' => 
          array (
            'name' => 'Schema.org UI',
            'description' => 'User interface for setting the schema.org module mappings.',
            'package' => 'Schema.org',
            'dependencies' => 
            array (
              0 => 'rdf',
              1 => 'schemaorg',
            ),
            'core' => '7.x',
            'version' => '7.x-1.0-rc1',
            'project' => 'schemaorg',
            'datestamp' => '1422498483',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc1',
        ),
        'schemaorg_contrib' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/schemaorg/modules/schemaorg_contrib/schemaorg_contrib.module',
          'basename' => 'schemaorg_contrib.module',
          'name' => 'schemaorg_contrib',
          'info' => 
          array (
            'name' => 'Schema.org support for contributed modules',
            'description' => 'Add support for fields from contributed modules such as addressfield and fivestar.',
            'package' => 'Schema.org',
            'dependencies' => 
            array (
              0 => 'schemaorg',
            ),
            'core' => '7.x',
            'version' => '7.x-1.0-rc1',
            'project' => 'schemaorg',
            'datestamp' => '1422498483',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc1',
        ),
        'schemaorg' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/schemaorg/schemaorg.module',
          'basename' => 'schemaorg.module',
          'name' => 'schemaorg',
          'info' => 
          array (
            'name' => 'Schema.org',
            'description' => 'Allows to annotate content using the schema.org vocabularies',
            'package' => 'Schema.org',
            'dependencies' => 
            array (
              0 => 'rdf',
            ),
            'core' => '7.x',
            'files' => 
            array (
              0 => 'schemaorg.test',
            ),
            'version' => '7.x-1.0-rc1',
            'project' => 'schemaorg',
            'datestamp' => '1422498483',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-1.0-rc1',
        ),
        'current_search' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/facetapi/contrib/current_search/current_search.module',
          'basename' => 'current_search.module',
          'name' => 'current_search',
          'info' => 
          array (
            'name' => 'Current Search Blocks',
            'description' => 'Provides an interface for creating blocks containing information about the current search.',
            'dependencies' => 
            array (
              0 => 'facetapi',
            ),
            'package' => 'Search Toolkit',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'plugins/current_search/item.inc',
              1 => 'plugins/current_search/item_active.inc',
              2 => 'plugins/current_search/item_group.inc',
              3 => 'plugins/current_search/item_text.inc',
              4 => 'tests/current_search.test',
            ),
            'configure' => 'admin/config/search/current_search',
            'version' => '7.x-1.5',
            'project' => 'facetapi',
            'datestamp' => '1405685332',
            'php' => '5.2.4',
          ),
          'schema_version' => '7101',
          'version' => '7.x-1.5',
        ),
        'facetapi' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/facetapi/facetapi.module',
          'basename' => 'facetapi.module',
          'name' => 'facetapi',
          'info' => 
          array (
            'name' => 'Facet API',
            'description' => 'An abstracted facet API that can be used by various search backends.',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'package' => 'Search Toolkit',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'plugins/facetapi/adapter.inc',
              1 => 'plugins/facetapi/dependency.inc',
              2 => 'plugins/facetapi/dependency_bundle.inc',
              3 => 'plugins/facetapi/dependency_role.inc',
              4 => 'plugins/facetapi/empty_behavior.inc',
              5 => 'plugins/facetapi/empty_behavior_text.inc',
              6 => 'plugins/facetapi/filter.inc',
              7 => 'plugins/facetapi/query_type.inc',
              8 => 'plugins/facetapi/url_processor.inc',
              9 => 'plugins/facetapi/url_processor_standard.inc',
              10 => 'plugins/facetapi/widget.inc',
              11 => 'plugins/facetapi/widget_links.inc',
              12 => 'tests/facetapi_test.plugins.inc',
              13 => 'tests/facetapi.test',
            ),
            'version' => '7.x-1.5',
            'project' => 'facetapi',
            'datestamp' => '1405685332',
            'php' => '5.2.4',
          ),
          'schema_version' => '7103',
          'version' => '7.x-1.5',
        ),
        'date_facets' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date_facets/date_facets.module',
          'basename' => 'date_facets.module',
          'name' => 'date_facets',
          'info' => 
          array (
            'name' => 'Date Facets',
            'description' => 'Provides date range facets that are similar to implementations in major search engines.',
            'dependencies' => 
            array (
              0 => 'facetapi',
            ),
            'package' => 'Search Toolkit',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'lib/Drupal/Apachesolr/Facetapi/QueryType/DateRangeQueryType.php',
              1 => 'lib/Drupal/Facetapi/Widget/DateRangeWidget.php',
              2 => 'lib/Drupal/Search/Facetapi/QueryType/DateRangeQueryType.php',
              3 => 'lib/Drupal/SearchApi/Facetapi/QueryType/DateRangeQueryType.php',
            ),
            'version' => '7.x-1.0-beta2',
            'project' => 'date_facets',
            'datestamp' => '1376030725',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-beta2',
        ),
        'editor_ckeditor' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/editor/modules/editor_ckeditor/editor_ckeditor.module',
          'basename' => 'editor_ckeditor.module',
          'name' => 'editor_ckeditor',
          'info' => 
          array (
            'name' => 'Editor CKEditor',
            'description' => 'Adds CKEditor as a supported editor.',
            'package' => 'User interface',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'dialog',
              1 => 'editor',
            ),
            'version' => '7.x-1.0-alpha4',
            'project' => 'editor',
            'datestamp' => '1445421841',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-alpha4',
        ),
        'editor' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/editor/editor.module',
          'basename' => 'editor.module',
          'name' => 'editor',
          'info' => 
          array (
            'name' => 'Editor',
            'description' => 'Allows rich text fields to be edited using WYSIWYG client-side editors.',
            'package' => 'User interface',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'dialog',
              1 => 'filter',
            ),
            'test_dependencies' => 
            array (
              0 => 'media',
              1 => 'quickedit',
              2 => 'uuid',
            ),
            'files' => 
            array (
              0 => 'editor.test',
            ),
            'configure' => 'admin/config/content/formats',
            'version' => '7.x-1.0-alpha4',
            'project' => 'editor',
            'datestamp' => '1445421841',
            'php' => '5.2.4',
          ),
          'schema_version' => '7100',
          'version' => '7.x-1.0-alpha4',
        ),
        'breakpoints' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/breakpoints/breakpoints.module',
          'basename' => 'breakpoints.module',
          'name' => 'breakpoints',
          'info' => 
          array (
            'name' => 'Breakpoints',
            'description' => 'Manage breakpoints',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'files' => 
            array (
              0 => 'breakpoints.module',
              1 => 'breakpoints.test',
            ),
            'configure' => 'admin/config/media/breakpoints',
            'version' => '7.x-1.3',
            'project' => 'breakpoints',
            'datestamp' => '1407507528',
            'php' => '5.2.4',
          ),
          'schema_version' => '7102',
          'version' => '7.x-1.3',
        ),
        'flag_abuse' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/flag_abuse/flag_abuse.module',
          'basename' => 'flag_abuse.module',
          'name' => 'flag_abuse',
          'info' => 
          array (
            'name' => 'Flag abuse',
            'description' => 'Utilizes Flag and Views to create social content moderation tools.',
            'package' => 'Flags',
            'dependencies' => 
            array (
              0 => 'flag',
              1 => 'views',
            ),
            'core' => '7.x',
            'version' => '7.x-2.0',
            'project' => 'flag_abuse',
            'datestamp' => '1395953345',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.0',
        ),
        'media_bulk_upload' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/media/modules/media_bulk_upload/media_bulk_upload.module',
          'basename' => 'media_bulk_upload.module',
          'name' => 'media_bulk_upload',
          'info' => 
          array (
            'name' => 'Media Bulk Upload',
            'description' => 'Adds support for uploading multiple files at a time.',
            'package' => 'Media',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'media',
              1 => 'multiform',
              2 => 'plupload',
            ),
            'test_dependencies' => 
            array (
              0 => 'multiform',
              1 => 'plupload',
            ),
            'files' => 
            array (
              0 => 'includes/MediaBrowserBulkUpload.inc',
              1 => 'tests/media_bulk_upload.test',
            ),
            'version' => '7.x-2.0-beta1+8-dev',
            'project' => 'media',
            'datestamp' => '1446047079',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.0-beta1+8-dev',
        ),
        'media_internet' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/media/modules/media_internet/media_internet.module',
          'basename' => 'media_internet.module',
          'name' => 'media_internet',
          'info' => 
          array (
            'name' => 'Media Internet Sources',
            'description' => 'Provides an API for accessing media on various internet services',
            'package' => 'Media',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'media',
            ),
            'files' => 
            array (
              0 => 'includes/MediaBrowserInternet.inc',
              1 => 'includes/MediaInternetBaseHandler.inc',
              2 => 'includes/MediaInternetFileHandler.inc',
              3 => 'includes/MediaInternetNoHandlerException.inc',
              4 => 'includes/MediaInternetValidationException.inc',
              5 => 'tests/media_internet.test',
            ),
            'version' => '7.x-2.0-beta1+8-dev',
            'project' => 'media',
            'datestamp' => '1446047079',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-2.0-beta1+8-dev',
        ),
        'mediafield' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/media/modules/mediafield/mediafield.module',
          'basename' => 'mediafield.module',
          'name' => 'mediafield',
          'info' => 
          array (
            'name' => 'Media Field',
            'description' => 'Provides a field type that stores media-specific data. <em>Deprecated by the core File field type.</em>',
            'package' => 'Media',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'media',
            ),
            'version' => '7.x-2.0-beta1+8-dev',
            'project' => 'media',
            'datestamp' => '1446047079',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.0-beta1+8-dev',
        ),
        'media_wysiwyg' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/media/modules/media_wysiwyg/media_wysiwyg.module',
          'basename' => 'media_wysiwyg.module',
          'name' => 'media_wysiwyg',
          'info' => 
          array (
            'name' => 'Media WYSIWYG',
            'description' => 'Adds support for embedding media using client-side WYSIWYG editors.',
            'package' => 'Media',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'media',
            ),
            'test_dependencies' => 
            array (
              0 => 'ckeditor',
              1 => 'token',
              2 => 'wysiwyg',
            ),
            'files' => 
            array (
              0 => 'media_wysiwyg.test',
              1 => 'tests/media_wysiwyg.file_usage.test',
              2 => 'tests/media_wysiwyg.macro.test',
            ),
            'configure' => 'admin/config/media/browser',
            'version' => '7.x-2.0-beta1+8-dev',
            'project' => 'media',
            'datestamp' => '1446047079',
            'php' => '5.2.4',
          ),
          'schema_version' => '7203',
          'version' => '7.x-2.0-beta1+8-dev',
        ),
        'media_wysiwyg_view_mode' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/media/modules/media_wysiwyg_view_mode/media_wysiwyg_view_mode.module',
          'basename' => 'media_wysiwyg_view_mode.module',
          'name' => 'media_wysiwyg_view_mode',
          'info' => 
          array (
            'name' => 'Media WYSIWYG View Mode',
            'description' => 'Enables files inside of the WYSIWYG editor to be displayed using a separate view mode.',
            'package' => 'Media',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'media_wysiwyg',
            ),
            'files' => 
            array (
              0 => 'media_wysiwyg_view_mode.test',
            ),
            'version' => '7.x-2.0-beta1+8-dev',
            'project' => 'media',
            'datestamp' => '1446047079',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.0-beta1+8-dev',
        ),
        'media' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/media/media.module',
          'basename' => 'media.module',
          'name' => 'media',
          'info' => 
          array (
            'name' => 'Media',
            'description' => 'Provides the core Media API',
            'package' => 'Media',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'file_entity',
              1 => 'image',
              2 => 'views',
            ),
            'test_dependencies' => 
            array (
              0 => 'token',
            ),
            'files' => 
            array (
              0 => 'includes/MediaReadOnlyStreamWrapper.inc',
              1 => 'includes/MediaBrowserPluginInterface.inc',
              2 => 'includes/MediaBrowserPlugin.inc',
              3 => 'includes/MediaBrowserUpload.inc',
              4 => 'includes/MediaBrowserView.inc',
              5 => 'includes/MediaEntityTranslationHandler.inc',
              6 => 'includes/media_views_plugin_display_media_browser.inc',
              7 => 'includes/media_views_plugin_style_media_browser.inc',
              8 => 'tests/media.test',
            ),
            'configure' => 'admin/config/media/browser',
            'version' => '7.x-2.0-beta1+8-dev',
            'project' => 'media',
            'datestamp' => '1446047079',
            'php' => '5.2.4',
          ),
          'schema_version' => '7227',
          'version' => '7.x-2.0-beta1+8-dev',
        ),
        'admin_icons' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/admin_icons/admin_icons.module',
          'basename' => 'admin_icons.module',
          'name' => 'admin_icons',
          'info' => 
          array (
            'name' => 'Icon fonts',
            'description' => 'Icon font library for use with other modules and themes.',
            'core' => '7.x',
            'version' => '',
            'project' => 'admin_icons',
            'datestamp' => '1446047088',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '',
        ),
        'redirect' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/redirect/redirect.module',
          'basename' => 'redirect.module',
          'name' => 'redirect',
          'info' => 
          array (
            'name' => 'Redirect',
            'description' => 'Allows users to redirect from old URLs to new URLs.',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'redirect.controller.inc',
              1 => 'redirect.test',
              2 => 'views/redirect.views.inc',
              3 => 'views/redirect_handler_filter_redirect_type.inc',
              4 => 'views/redirect_handler_field_redirect_source.inc',
              5 => 'views/redirect_handler_field_redirect_redirect.inc',
              6 => 'views/redirect_handler_field_redirect_operations.inc',
              7 => 'views/redirect_handler_field_redirect_link_edit.inc',
              8 => 'views/redirect_handler_field_redirect_link_delete.inc',
            ),
            'configure' => 'admin/config/search/redirect/settings',
            'version' => '7.x-1.0-rc3',
            'project' => 'redirect',
            'datestamp' => '1436393342',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7102',
          'version' => '7.x-1.0-rc3',
        ),
        'http_client_oauth' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/http_client/http_client_oauth.module',
          'basename' => 'http_client_oauth.module',
          'name' => 'http_client_oauth',
          'info' => 
          array (
            'name' => 'Http Client OAuth',
            'description' => 'Provides a OAuth authentication mechanism for the Http Client',
            'dependencies' => 
            array (
              0 => 'oauth_common',
              1 => 'http_client',
            ),
            'files' => 
            array (
              0 => 'includes/HttpClientOAuth.inc',
            ),
            'package' => 'Services - clients',
            'core' => '7.x',
            'version' => '7.x-2.4',
            'project' => 'http_client',
            'datestamp' => '1345646840',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.4',
        ),
        'http_client' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/http_client/http_client.module',
          'basename' => 'http_client.module',
          'name' => 'http_client',
          'info' => 
          array (
            'name' => 'Http Client',
            'description' => 'Provides a Http client for use with the services Http server',
            'files' => 
            array (
              0 => 'includes/HttpClient.inc',
              1 => 'includes/HttpClientXMLFormatter.inc',
              2 => 'includes/HttpClientCurlDelegate.inc',
            ),
            'package' => 'Services - clients',
            'core' => '7.x',
            'version' => '7.x-2.4',
            'project' => 'http_client',
            'datestamp' => '1345646840',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.4',
        ),
        'og_access' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/og/og_access/og_access.module',
          'basename' => 'og_access.module',
          'name' => 'og_access',
          'info' => 
          array (
            'name' => 'Organic groups access control',
            'description' => 'Enable access control for private and public groups and group content.',
            'package' => 'Organic groups',
            'dependencies' => 
            array (
              0 => 'og',
            ),
            'core' => '7.x',
            'version' => '7.x-2.7',
            'files' => 
            array (
              0 => 'og_access.module',
              1 => 'og_access.install',
              2 => 'og_access.test',
            ),
            'project' => 'og',
            'datestamp' => '1399486728',
            'php' => '5.2.4',
          ),
          'schema_version' => '7200',
          'version' => '7.x-2.7',
        ),
        'og_field_access' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/og/og_field_access/og_field_access.module',
          'basename' => 'og_field_access.module',
          'name' => 'og_field_access',
          'info' => 
          array (
            'name' => 'Organic groups field access',
            'description' => 'Provide field access based on group.',
            'package' => 'Organic groups',
            'dependencies' => 
            array (
              0 => 'og',
            ),
            'core' => '7.x',
            'files' => 
            array (
              0 => 'og_field_access.module',
              1 => 'og_field_access.test',
            ),
            'version' => '7.x-2.7',
            'project' => 'og',
            'datestamp' => '1399486728',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.7',
        ),
        'og_context' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/og/og_context/og_context.module',
          'basename' => 'og_context.module',
          'name' => 'og_context',
          'info' => 
          array (
            'name' => 'Organic groups context',
            'description' => 'Get a group from a viewed page.',
            'package' => 'Organic groups',
            'dependencies' => 
            array (
              0 => 'og',
            ),
            'core' => '7.x',
            'files' => 
            array (
              0 => 'og_context.module',
              1 => 'og_context.install',
              2 => 'includes/views/handlers/og_context_plugin_argument_default_group_context.inc',
              3 => 'includes/views/handlers/og_context_plugin_access_og_perm.inc',
            ),
            'version' => '7.x-2.7',
            'project' => 'og',
            'datestamp' => '1399486728',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.7',
        ),
        'og_register' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/og/og_register/og_register.module',
          'basename' => 'og_register.module',
          'name' => 'og_register',
          'info' => 
          array (
            'name' => 'Organic groups register',
            'description' => 'Allow subscribing to groups during the user registration.',
            'package' => 'Organic groups',
            'dependencies' => 
            array (
              0 => 'og',
            ),
            'core' => '7.x',
            'files' => 
            array (
              0 => 'og_register.module',
              1 => 'og_register.install',
            ),
            'version' => '7.x-2.7',
            'project' => 'og',
            'datestamp' => '1399486728',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.7',
        ),
        'og_ui' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/og/og_ui/og_ui.module',
          'basename' => 'og_ui.module',
          'name' => 'og_ui',
          'info' => 
          array (
            'name' => 'Organic groups UI',
            'description' => 'Organic groups UI.',
            'package' => 'Organic groups',
            'dependencies' => 
            array (
              0 => 'og',
              1 => 'views_bulk_operations',
            ),
            'core' => '7.x',
            'version' => '7.x-2.7',
            'files' => 
            array (
              0 => 'og_ui.test',
              1 => 'includes/views/handlers/og_ui_handler_area_og_membership_overview.inc',
              2 => 'includes/migrate/7000/add_field.inc',
              3 => 'includes/migrate/7000/populate_field.inc',
              4 => 'includes/migrate/7000/set_roles.inc',
            ),
            'configure' => 'admin/config/group',
            'project' => 'og',
            'datestamp' => '1399486728',
            'php' => '5.2.4',
          ),
          'schema_version' => '7200',
          'version' => '7.x-2.7',
        ),
        'og_example' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/og/og_example/og_example.module',
          'basename' => 'og_example.module',
          'name' => 'og_example',
          'info' => 
          array (
            'name' => 'OG example',
            'description' => 'Example module to show Organic groups configuration that can be used as building block.',
            'core' => '7.x',
            'package' => 'Features',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'entityreference_prepopulate',
              2 => 'features',
              3 => 'list',
              4 => 'message_notify',
              5 => 'og',
              6 => 'og_ui',
              7 => 'page_manager',
              8 => 'panels',
              9 => 'rules',
              10 => 'views_content',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'page_manager:pages_default:1',
              ),
              'features_api' => 
              array (
                0 => 'api:2',
              ),
              'field_base' => 
              array (
                0 => 'body',
                1 => 'field_node_reference',
                2 => 'group_group',
                3 => 'og_group_ref',
              ),
              'field_instance' => 
              array (
                0 => 'message-og_new_content-field_node_reference',
                1 => 'node-group-body',
                2 => 'node-group-group_group',
                3 => 'node-post-body',
                4 => 'node-post-og_group_ref',
              ),
              'message_type' => 
              array (
                0 => 'og_new_content',
              ),
              'node' => 
              array (
                0 => 'group',
                1 => 'post',
              ),
              'page_manager_handlers' => 
              array (
                0 => 'node_view_panel_context',
              ),
              'rules_config' => 
              array (
                0 => 'rules_og_new_content_message',
              ),
            ),
            'version' => '7.x-2.7',
            'project' => 'og',
            'datestamp' => '1399486728',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.7',
        ),
        'og' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/og/og.module',
          'basename' => 'og.module',
          'name' => 'og',
          'info' => 
          array (
            'name' => 'Organic groups',
            'description' => 'API to allow associating content with groups.',
            'package' => 'Organic groups',
            'dependencies' => 
            array (
              0 => 'options',
              1 => 'list',
              2 => 'text',
              3 => 'entity',
              4 => 'entityreference',
            ),
            'core' => '7.x',
            'files' => 
            array (
              0 => 'og.info.inc',
              1 => 'includes/og.admin.inc',
              2 => 'includes/og.exception.inc',
              3 => 'includes/og.membership.inc',
              4 => 'includes/og.membership_type.inc',
              5 => 'includes/views/og.views.inc',
              6 => 'og.test',
              7 => 'includes/views/handlers/og_plugin_argument_validate_group.inc',
              8 => 'includes/views/handlers/og_plugin_argument_default_user_groups.inc',
              9 => 'includes/views/handlers/og_handler_field_group_member_count.inc',
              10 => 'includes/views/handlers/og_handler_field_group_audience_state.inc',
              11 => 'includes/views/handlers/og_handler_field_prerender_list.inc',
              12 => 'includes/views/handlers/og_handler_field_user_roles.inc',
              13 => 'includes/views/handlers/og_handler_field_group_permissions.inc',
              14 => 'includes/views/handlers/og_handler_field_og_membership_link_edit.inc',
              15 => 'includes/views/handlers/og_handler_field_og_membership_link_delete.inc',
              16 => 'includes/views/handlers/og_handler_filter_group_audience_state.inc',
              17 => 'includes/views/handlers/og_handler_filter_user_roles.inc',
              18 => 'includes/views/handlers/og_handler_relationship.inc',
              19 => 'includes/migrate/plugins/destinations/og_membership.inc',
              20 => 'includes/migrate/7000/og_add_fields.inc',
              21 => 'includes/migrate/7000/og_content.inc',
              22 => 'includes/migrate/7000/og_group.inc',
              23 => 'includes/migrate/7000/og_user.inc',
              24 => 'includes/migrate/7000/og_ogur_roles.migrate.inc',
              25 => 'includes/migrate/7000/og_ogur.migrate.inc',
              26 => 'includes/migrate/og.migrate.inc',
              27 => 'includes/migrate/7200/og_og_membership.migrate.inc',
              28 => 'includes/migrate/7200/og_roles.migrate.inc',
              29 => 'includes/migrate/7200/og_user_roles.migrate.inc',
            ),
            'version' => '7.x-2.7',
            'project' => 'og',
            'datestamp' => '1399486728',
            'php' => '5.2.4',
          ),
          'schema_version' => '7205',
          'version' => '7.x-2.7',
        ),
        'message_example' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/message/message_example/message_example.module',
          'basename' => 'message_example.module',
          'name' => 'message_example',
          'info' => 
          array (
            'name' => 'Message example',
            'description' => 'Message example.',
            'core' => '7.x',
            'package' => 'Message',
            'php' => '5.2.4',
            'dependencies' => 
            array (
              0 => 'entity_token',
              1 => 'entityreference',
              2 => 'features',
              3 => 'list',
              4 => 'message',
              5 => 'strongarm',
              6 => 'token',
              7 => 'views',
            ),
            'stylesheets' => 
            array (
              'all' => 
              array (
                0 => 'css/message_example.css',
              ),
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
                1 => 'views:views_default:3.0',
              ),
              'features_api' => 
              array (
                0 => 'api:1',
              ),
              'field' => 
              array (
                0 => 'message-example_create_comment-field_comment_ref',
                1 => 'message-example_create_comment-field_node_ref',
                2 => 'message-example_create_comment-field_published',
                3 => 'message-example_create_node-field_node_ref',
                4 => 'message-example_create_node-field_published',
                5 => 'message-example_user_register-field_published',
              ),
              'message_type' => 
              array (
                0 => 'example_create_comment',
                1 => 'example_create_node',
                2 => 'example_user_register',
              ),
              'variable' => 
              array (
                0 => 'field_bundle_settings_message__example_create_comment',
                1 => 'field_bundle_settings_message__example_create_node',
                2 => 'field_bundle_settings_message__example_user_register',
              ),
              'views_view' => 
              array (
                0 => 'message_example',
              ),
            ),
            'version' => '7.x-1.10',
            'project' => 'message',
            'datestamp' => '1429477691',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.10',
        ),
        'message_og_example' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/message/message_og_example/message_og_example.module',
          'basename' => 'message_og_example.module',
          'name' => 'message_og_example',
          'info' => 
          array (
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'entityreference',
              1 => 'features',
              2 => 'list',
              3 => 'message',
              4 => 'message_example',
              5 => 'og',
              6 => 'views',
            ),
            'description' => 'Message integration with Organic groups example.',
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'views:views_default:3.0',
              ),
              'field' => 
              array (
                0 => 'message-example_og_post_in_group-field_node_groups_ref',
                1 => 'message-example_og_post_in_group-field_node_ref',
                2 => 'message-example_og_post_in_group-field_published',
                3 => 'message-example_og_user_membership-field_node_groups_ref',
                4 => 'message-example_og_user_membership-field_published',
              ),
              'message_type' => 
              array (
                0 => 'example_og_post_in_group',
                1 => 'example_og_user_membership',
              ),
              'views_view' => 
              array (
                0 => 'message_og_example',
              ),
            ),
            'name' => 'Message OG example',
            'package' => 'Message',
            'php' => '5.2.4',
            'version' => '7.x-1.10',
            'project' => 'message',
            'datestamp' => '1429477691',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.10',
        ),
        'message' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/message/message.module',
          'basename' => 'message.module',
          'name' => 'message',
          'info' => 
          array (
            'name' => 'Message',
            'description' => 'A general message logging utility.',
            'core' => '7.x',
            'package' => 'Message',
            'dependencies' => 
            array (
              0 => 'entity',
            ),
            'files' => 
            array (
              0 => 'message.info.inc',
              1 => 'includes/message.admin.inc',
              2 => 'includes/message.exception.inc',
              3 => 'includes/message.message_type_category.inc',
              4 => 'includes/message.message_type.inc',
              5 => 'includes/message.message.inc',
              6 => 'message.test',
              7 => 'includes/views/message.views.inc',
              8 => 'includes/views/handlers/message_handler_field_message_render.inc',
              9 => 'includes/views/handlers/message_handler_filter_message_type.inc',
              10 => 'includes/views/handlers/message_handler_filter_message_type_category.inc',
            ),
            'version' => '7.x-1.10',
            'project' => 'message',
            'datestamp' => '1429477691',
            'php' => '5.2.4',
          ),
          'schema_version' => '7012',
          'version' => '7.x-1.10',
        ),
        'edit_profile' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/edit_profile/edit_profile.module',
          'basename' => 'edit_profile.module',
          'name' => 'edit_profile',
          'info' => 
          array (
            'name' => 'Edit profile',
            'description' => 'Creates separate "Edit account" and "Edit profile" tabs for each user, with custom user fields configured under "Edit profile."',
            'core' => '7.x',
            'version' => '7.x-1.0-beta2',
            'project' => 'edit_profile',
            'datestamp' => '1318300003',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-beta2',
        ),
        'apachesolr_user' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/apachesolr_user/apachesolr_user.module',
          'basename' => 'apachesolr_user.module',
          'name' => 'apachesolr_user',
          'info' => 
          array (
            'name' => 'Apache Solr Users',
            'description' => 'Index user entity types into a solr core.',
            'dependencies' => 
            array (
              0 => 'user',
              1 => 'apachesolr_search',
            ),
            'package' => 'Search Toolkit',
            'core' => '7.x',
            'version' => '',
            'project' => 'apachesolr_user',
            'datestamp' => '1446047087',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '',
        ),
        'sharethis' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/sharethis/sharethis.module',
          'basename' => 'sharethis.module',
          'name' => 'sharethis',
          'info' => 
          array (
            'name' => 'ShareThis',
            'description' => 'Add the <a href="http://www.sharethis.com/">ShareThis</a> widget to nodes on your site.',
            'core' => '7.x',
            'package' => 'Sharing',
            'configure' => 'admin/config/services/sharethis',
            'files' => 
            array (
              0 => 'views/sharethis_handler_field_link.inc',
            ),
            'version' => '7.x-2.12',
            'project' => 'sharethis',
            'datestamp' => '1435896247',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-2.12',
        ),
        'link' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/link/link.module',
          'basename' => 'link.module',
          'name' => 'link',
          'info' => 
          array (
            'name' => 'Link',
            'description' => 'Defines simple link field types.',
            'core' => '7.x',
            'package' => 'Fields',
            'files' => 
            array (
              0 => 'link.module',
              1 => 'link.migrate.inc',
              2 => 'tests/link.test',
              3 => 'tests/link.attribute.test',
              4 => 'tests/link.crud.test',
              5 => 'tests/link.crud_browser.test',
              6 => 'tests/link.token.test',
              7 => 'tests/link.validate.test',
              8 => 'views/link_views_handler_argument_target.inc',
              9 => 'views/link_views_handler_filter_protocol.inc',
            ),
            'version' => '7.x-1.3',
            'project' => 'link',
            'datestamp' => '1413924830',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.3',
        ),
        'quicktabs_tabstyles' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/quicktabs/quicktabs_tabstyles/quicktabs_tabstyles.module',
          'basename' => 'quicktabs_tabstyles.module',
          'name' => 'quicktabs_tabstyles',
          'info' => 
          array (
            'name' => 'Quicktabs Styles',
            'description' => 'Adds predefined tab styles to choose from per Quicktabs instance.',
            'core' => '7.x',
            'configure' => 'admin/structure/quicktabs/styles',
            'dependencies' => 
            array (
              0 => 'quicktabs',
            ),
            'version' => '7.x-3.6',
            'project' => 'quicktabs',
            'datestamp' => '1380731929',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.6',
        ),
        'quicktabs' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/quicktabs/quicktabs.module',
          'basename' => 'quicktabs.module',
          'name' => 'quicktabs',
          'info' => 
          array (
            'name' => 'Quicktabs',
            'description' => 'Render content with tabs and other display styles',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'quicktabs.module',
              1 => 'quicktabs.classes.inc',
              2 => 'includes/quicktabs_style_plugin.inc',
              3 => 'tests/quicktabs.test',
            ),
            'configure' => 'admin/structure/quicktabs',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'version' => '7.x-3.6',
            'project' => 'quicktabs',
            'datestamp' => '1380731929',
            'php' => '5.2.4',
          ),
          'schema_version' => '7303',
          'version' => '7.x-3.6',
        ),
        'paranoia' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/paranoia/paranoia.module',
          'basename' => 'paranoia.module',
          'name' => 'paranoia',
          'info' => 
          array (
            'name' => 'Paranoia',
            'description' => 'Protects a site from some insecure configurations.',
            'core' => '7.x',
            'version' => '7.x-1.5',
            'project' => 'paranoia',
            'datestamp' => '1433180582',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.5',
        ),
        'oauth_common' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/oauth/oauth_common.module',
          'basename' => 'oauth_common.module',
          'name' => 'oauth_common',
          'info' => 
          array (
            'name' => 'OAuth',
            'description' => 'Provides OAuth functionality',
            'configure' => 'admin/config/services/oauth',
            'package' => 'OAuth',
            'recommends' => 
            array (
              0 => 'ctools',
            ),
            'suggests' => 
            array (
              0 => 'inputstream',
            ),
            'core' => '7.x',
            'files' => 
            array (
              0 => 'lib/OAuth.php',
              1 => 'includes/DrupalOAuthServer.inc',
              2 => 'includes/DrupalOAuthDataStore.inc',
              3 => 'includes/DrupalOAuthRequest.inc',
              4 => 'includes/DrupalOAuthToken.inc',
              5 => 'includes/DrupalOAuthConsumer.inc',
              6 => 'includes/DrupalOAuthClient.inc',
              7 => 'includes/OAuthSignatureMethod_HMAC.inc',
            ),
            'version' => '7.x-3.2',
            'project' => 'oauth',
            'datestamp' => '1390561406',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.2',
        ),
        'oauth_common_providerui' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/oauth/oauth_common_providerui.module',
          'basename' => 'oauth_common_providerui.module',
          'name' => 'oauth_common_providerui',
          'info' => 
          array (
            'name' => 'OAuth Provider UI',
            'description' => 'Provides a UI for when OAuth is acting as a provider.',
            'package' => 'OAuth',
            'dependencies' => 
            array (
              0 => 'oauth_common',
            ),
            'core' => '7.x',
            'version' => '7.x-3.2',
            'project' => 'oauth',
            'datestamp' => '1390561406',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.2',
        ),
        'rich_snippets' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/rich_snippets/rich_snippets.module',
          'basename' => 'rich_snippets.module',
          'name' => 'rich_snippets',
          'info' => 
          array (
            'name' => 'Rich Snippets',
            'description' => 'Overrides the standard search results templates and CSS to display results similar to major search engines.',
            'dependencies' => 
            array (
              0 => 'schemaorg',
            ),
            'package' => 'Search Toolkit',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'lib/Drupal/RichSnippets/SchemaPreprocessorInterface.php',
              1 => 'lib/Drupal/RichSnippets/Apachesolr/ApachesolrSchemaPreprocessor.php',
              2 => 'lib/Drupal/RichSnippets/Node/NodeSchemaPreprocessor.php',
            ),
            'version' => '7.x-1.0-beta4',
            'project' => 'rich_snippets',
            'datestamp' => '1404350028',
            'php' => '5.2.4',
          ),
          'schema_version' => '7101',
          'version' => '7.x-1.0-beta4',
        ),
        'diff' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/diff/diff.module',
          'basename' => 'diff.module',
          'name' => 'diff',
          'info' => 
          array (
            'name' => 'Diff',
            'description' => 'Show differences between content revisions.',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'DiffEngine.php',
            ),
            'version' => '7.x-3.2',
            'project' => 'diff',
            'datestamp' => '1352784357',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7305',
          'version' => '7.x-3.2',
        ),
        'views_export' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/views/views_export/views_export.module',
          'basename' => 'views_export.module',
          'name' => 'views_export',
          'info' => 
          array (
            'dependencies' => 
            array (
            ),
            'description' => '',
            'version' => NULL,
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => NULL,
        ),
        'views' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/views/views.module',
          'basename' => 'views.module',
          'name' => 'views',
          'info' => 
          array (
            'name' => 'Views',
            'description' => 'Create customized lists and queries from your database.',
            'package' => 'Views',
            'core' => '7.x',
            'php' => '5.2',
            'stylesheets' => 
            array (
              'all' => 
              array (
                0 => 'css/views.css',
              ),
            ),
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'files' => 
            array (
              0 => 'handlers/views_handler_area.inc',
              1 => 'handlers/views_handler_area_messages.inc',
              2 => 'handlers/views_handler_area_result.inc',
              3 => 'handlers/views_handler_area_text.inc',
              4 => 'handlers/views_handler_area_text_custom.inc',
              5 => 'handlers/views_handler_area_view.inc',
              6 => 'handlers/views_handler_argument.inc',
              7 => 'handlers/views_handler_argument_date.inc',
              8 => 'handlers/views_handler_argument_formula.inc',
              9 => 'handlers/views_handler_argument_many_to_one.inc',
              10 => 'handlers/views_handler_argument_null.inc',
              11 => 'handlers/views_handler_argument_numeric.inc',
              12 => 'handlers/views_handler_argument_string.inc',
              13 => 'handlers/views_handler_argument_group_by_numeric.inc',
              14 => 'handlers/views_handler_field.inc',
              15 => 'handlers/views_handler_field_counter.inc',
              16 => 'handlers/views_handler_field_boolean.inc',
              17 => 'handlers/views_handler_field_contextual_links.inc',
              18 => 'handlers/views_handler_field_custom.inc',
              19 => 'handlers/views_handler_field_date.inc',
              20 => 'handlers/views_handler_field_entity.inc',
              21 => 'handlers/views_handler_field_markup.inc',
              22 => 'handlers/views_handler_field_math.inc',
              23 => 'handlers/views_handler_field_numeric.inc',
              24 => 'handlers/views_handler_field_prerender_list.inc',
              25 => 'handlers/views_handler_field_time_interval.inc',
              26 => 'handlers/views_handler_field_serialized.inc',
              27 => 'handlers/views_handler_field_machine_name.inc',
              28 => 'handlers/views_handler_field_url.inc',
              29 => 'handlers/views_handler_filter.inc',
              30 => 'handlers/views_handler_filter_boolean_operator.inc',
              31 => 'handlers/views_handler_filter_boolean_operator_string.inc',
              32 => 'handlers/views_handler_filter_combine.inc',
              33 => 'handlers/views_handler_filter_date.inc',
              34 => 'handlers/views_handler_filter_equality.inc',
              35 => 'handlers/views_handler_filter_entity_bundle.inc',
              36 => 'handlers/views_handler_filter_group_by_numeric.inc',
              37 => 'handlers/views_handler_filter_in_operator.inc',
              38 => 'handlers/views_handler_filter_many_to_one.inc',
              39 => 'handlers/views_handler_filter_numeric.inc',
              40 => 'handlers/views_handler_filter_string.inc',
              41 => 'handlers/views_handler_filter_fields_compare.inc',
              42 => 'handlers/views_handler_relationship.inc',
              43 => 'handlers/views_handler_relationship_groupwise_max.inc',
              44 => 'handlers/views_handler_sort.inc',
              45 => 'handlers/views_handler_sort_date.inc',
              46 => 'handlers/views_handler_sort_formula.inc',
              47 => 'handlers/views_handler_sort_group_by_numeric.inc',
              48 => 'handlers/views_handler_sort_menu_hierarchy.inc',
              49 => 'handlers/views_handler_sort_random.inc',
              50 => 'includes/base.inc',
              51 => 'includes/handlers.inc',
              52 => 'includes/plugins.inc',
              53 => 'includes/view.inc',
              54 => 'modules/aggregator/views_handler_argument_aggregator_fid.inc',
              55 => 'modules/aggregator/views_handler_argument_aggregator_iid.inc',
              56 => 'modules/aggregator/views_handler_argument_aggregator_category_cid.inc',
              57 => 'modules/aggregator/views_handler_field_aggregator_title_link.inc',
              58 => 'modules/aggregator/views_handler_field_aggregator_category.inc',
              59 => 'modules/aggregator/views_handler_field_aggregator_item_description.inc',
              60 => 'modules/aggregator/views_handler_field_aggregator_xss.inc',
              61 => 'modules/aggregator/views_handler_filter_aggregator_category_cid.inc',
              62 => 'modules/aggregator/views_plugin_row_aggregator_rss.inc',
              63 => 'modules/book/views_plugin_argument_default_book_root.inc',
              64 => 'modules/comment/views_handler_argument_comment_user_uid.inc',
              65 => 'modules/comment/views_handler_field_comment.inc',
              66 => 'modules/comment/views_handler_field_comment_depth.inc',
              67 => 'modules/comment/views_handler_field_comment_link.inc',
              68 => 'modules/comment/views_handler_field_comment_link_approve.inc',
              69 => 'modules/comment/views_handler_field_comment_link_delete.inc',
              70 => 'modules/comment/views_handler_field_comment_link_edit.inc',
              71 => 'modules/comment/views_handler_field_comment_link_reply.inc',
              72 => 'modules/comment/views_handler_field_comment_node_link.inc',
              73 => 'modules/comment/views_handler_field_comment_username.inc',
              74 => 'modules/comment/views_handler_field_ncs_last_comment_name.inc',
              75 => 'modules/comment/views_handler_field_ncs_last_updated.inc',
              76 => 'modules/comment/views_handler_field_node_comment.inc',
              77 => 'modules/comment/views_handler_field_node_new_comments.inc',
              78 => 'modules/comment/views_handler_field_last_comment_timestamp.inc',
              79 => 'modules/comment/views_handler_filter_comment_user_uid.inc',
              80 => 'modules/comment/views_handler_filter_ncs_last_updated.inc',
              81 => 'modules/comment/views_handler_filter_node_comment.inc',
              82 => 'modules/comment/views_handler_sort_comment_thread.inc',
              83 => 'modules/comment/views_handler_sort_ncs_last_comment_name.inc',
              84 => 'modules/comment/views_handler_sort_ncs_last_updated.inc',
              85 => 'modules/comment/views_plugin_row_comment_rss.inc',
              86 => 'modules/comment/views_plugin_row_comment_view.inc',
              87 => 'modules/contact/views_handler_field_contact_link.inc',
              88 => 'modules/field/views_handler_field_field.inc',
              89 => 'modules/field/views_handler_relationship_entity_reverse.inc',
              90 => 'modules/field/views_handler_argument_field_list.inc',
              91 => 'modules/field/views_handler_filter_field_list_boolean.inc',
              92 => 'modules/field/views_handler_argument_field_list_string.inc',
              93 => 'modules/field/views_handler_filter_field_list.inc',
              94 => 'modules/filter/views_handler_field_filter_format_name.inc',
              95 => 'modules/locale/views_handler_field_node_language.inc',
              96 => 'modules/locale/views_handler_filter_node_language.inc',
              97 => 'modules/locale/views_handler_argument_locale_group.inc',
              98 => 'modules/locale/views_handler_argument_locale_language.inc',
              99 => 'modules/locale/views_handler_field_locale_group.inc',
              100 => 'modules/locale/views_handler_field_locale_language.inc',
              101 => 'modules/locale/views_handler_field_locale_link_edit.inc',
              102 => 'modules/locale/views_handler_filter_locale_group.inc',
              103 => 'modules/locale/views_handler_filter_locale_language.inc',
              104 => 'modules/locale/views_handler_filter_locale_version.inc',
              105 => 'modules/node/views_handler_argument_dates_various.inc',
              106 => 'modules/node/views_handler_argument_node_language.inc',
              107 => 'modules/node/views_handler_argument_node_nid.inc',
              108 => 'modules/node/views_handler_argument_node_type.inc',
              109 => 'modules/node/views_handler_argument_node_vid.inc',
              110 => 'modules/node/views_handler_argument_node_uid_revision.inc',
              111 => 'modules/node/views_handler_field_history_user_timestamp.inc',
              112 => 'modules/node/views_handler_field_node.inc',
              113 => 'modules/node/views_handler_field_node_link.inc',
              114 => 'modules/node/views_handler_field_node_link_delete.inc',
              115 => 'modules/node/views_handler_field_node_link_edit.inc',
              116 => 'modules/node/views_handler_field_node_revision.inc',
              117 => 'modules/node/views_handler_field_node_revision_link.inc',
              118 => 'modules/node/views_handler_field_node_revision_link_delete.inc',
              119 => 'modules/node/views_handler_field_node_revision_link_revert.inc',
              120 => 'modules/node/views_handler_field_node_path.inc',
              121 => 'modules/node/views_handler_field_node_type.inc',
              122 => 'modules/node/views_handler_filter_history_user_timestamp.inc',
              123 => 'modules/node/views_handler_filter_node_access.inc',
              124 => 'modules/node/views_handler_filter_node_status.inc',
              125 => 'modules/node/views_handler_filter_node_type.inc',
              126 => 'modules/node/views_handler_filter_node_uid_revision.inc',
              127 => 'modules/node/views_plugin_argument_default_node.inc',
              128 => 'modules/node/views_plugin_argument_validate_node.inc',
              129 => 'modules/node/views_plugin_row_node_rss.inc',
              130 => 'modules/node/views_plugin_row_node_view.inc',
              131 => 'modules/profile/views_handler_field_profile_date.inc',
              132 => 'modules/profile/views_handler_field_profile_list.inc',
              133 => 'modules/profile/views_handler_filter_profile_selection.inc',
              134 => 'modules/search/views_handler_argument_search.inc',
              135 => 'modules/search/views_handler_field_search_score.inc',
              136 => 'modules/search/views_handler_filter_search.inc',
              137 => 'modules/search/views_handler_sort_search_score.inc',
              138 => 'modules/search/views_plugin_row_search_view.inc',
              139 => 'modules/statistics/views_handler_field_accesslog_path.inc',
              140 => 'modules/system/views_handler_argument_file_fid.inc',
              141 => 'modules/system/views_handler_field_file.inc',
              142 => 'modules/system/views_handler_field_file_extension.inc',
              143 => 'modules/system/views_handler_field_file_filemime.inc',
              144 => 'modules/system/views_handler_field_file_uri.inc',
              145 => 'modules/system/views_handler_field_file_status.inc',
              146 => 'modules/system/views_handler_filter_file_status.inc',
              147 => 'modules/taxonomy/views_handler_argument_taxonomy.inc',
              148 => 'modules/taxonomy/views_handler_argument_term_node_tid.inc',
              149 => 'modules/taxonomy/views_handler_argument_term_node_tid_depth.inc',
              150 => 'modules/taxonomy/views_handler_argument_term_node_tid_depth_modifier.inc',
              151 => 'modules/taxonomy/views_handler_argument_vocabulary_vid.inc',
              152 => 'modules/taxonomy/views_handler_argument_vocabulary_machine_name.inc',
              153 => 'modules/taxonomy/views_handler_field_taxonomy.inc',
              154 => 'modules/taxonomy/views_handler_field_term_node_tid.inc',
              155 => 'modules/taxonomy/views_handler_field_term_link_edit.inc',
              156 => 'modules/taxonomy/views_handler_filter_term_node_tid.inc',
              157 => 'modules/taxonomy/views_handler_filter_term_node_tid_depth.inc',
              158 => 'modules/taxonomy/views_handler_filter_vocabulary_vid.inc',
              159 => 'modules/taxonomy/views_handler_filter_vocabulary_machine_name.inc',
              160 => 'modules/taxonomy/views_handler_relationship_node_term_data.inc',
              161 => 'modules/taxonomy/views_plugin_argument_validate_taxonomy_term.inc',
              162 => 'modules/taxonomy/views_plugin_argument_default_taxonomy_tid.inc',
              163 => 'modules/tracker/views_handler_argument_tracker_comment_user_uid.inc',
              164 => 'modules/tracker/views_handler_filter_tracker_comment_user_uid.inc',
              165 => 'modules/tracker/views_handler_filter_tracker_boolean_operator.inc',
              166 => 'modules/system/views_handler_filter_system_type.inc',
              167 => 'modules/translation/views_handler_argument_node_tnid.inc',
              168 => 'modules/translation/views_handler_field_node_link_translate.inc',
              169 => 'modules/translation/views_handler_field_node_translation_link.inc',
              170 => 'modules/translation/views_handler_filter_node_tnid.inc',
              171 => 'modules/translation/views_handler_filter_node_tnid_child.inc',
              172 => 'modules/translation/views_handler_relationship_translation.inc',
              173 => 'modules/user/views_handler_argument_user_uid.inc',
              174 => 'modules/user/views_handler_argument_users_roles_rid.inc',
              175 => 'modules/user/views_handler_field_user.inc',
              176 => 'modules/user/views_handler_field_user_language.inc',
              177 => 'modules/user/views_handler_field_user_link.inc',
              178 => 'modules/user/views_handler_field_user_link_cancel.inc',
              179 => 'modules/user/views_handler_field_user_link_edit.inc',
              180 => 'modules/user/views_handler_field_user_mail.inc',
              181 => 'modules/user/views_handler_field_user_name.inc',
              182 => 'modules/user/views_handler_field_user_permissions.inc',
              183 => 'modules/user/views_handler_field_user_picture.inc',
              184 => 'modules/user/views_handler_field_user_roles.inc',
              185 => 'modules/user/views_handler_filter_user_current.inc',
              186 => 'modules/user/views_handler_filter_user_name.inc',
              187 => 'modules/user/views_handler_filter_user_permissions.inc',
              188 => 'modules/user/views_handler_filter_user_roles.inc',
              189 => 'modules/user/views_plugin_argument_default_current_user.inc',
              190 => 'modules/user/views_plugin_argument_default_user.inc',
              191 => 'modules/user/views_plugin_argument_validate_user.inc',
              192 => 'modules/user/views_plugin_row_user_view.inc',
              193 => 'plugins/views_plugin_access.inc',
              194 => 'plugins/views_plugin_access_none.inc',
              195 => 'plugins/views_plugin_access_perm.inc',
              196 => 'plugins/views_plugin_access_role.inc',
              197 => 'plugins/views_plugin_argument_default.inc',
              198 => 'plugins/views_plugin_argument_default_php.inc',
              199 => 'plugins/views_plugin_argument_default_fixed.inc',
              200 => 'plugins/views_plugin_argument_default_raw.inc',
              201 => 'plugins/views_plugin_argument_validate.inc',
              202 => 'plugins/views_plugin_argument_validate_numeric.inc',
              203 => 'plugins/views_plugin_argument_validate_php.inc',
              204 => 'plugins/views_plugin_cache.inc',
              205 => 'plugins/views_plugin_cache_none.inc',
              206 => 'plugins/views_plugin_cache_time.inc',
              207 => 'plugins/views_plugin_display.inc',
              208 => 'plugins/views_plugin_display_attachment.inc',
              209 => 'plugins/views_plugin_display_block.inc',
              210 => 'plugins/views_plugin_display_default.inc',
              211 => 'plugins/views_plugin_display_embed.inc',
              212 => 'plugins/views_plugin_display_extender.inc',
              213 => 'plugins/views_plugin_display_feed.inc',
              214 => 'plugins/views_plugin_display_page.inc',
              215 => 'plugins/views_plugin_exposed_form_basic.inc',
              216 => 'plugins/views_plugin_exposed_form.inc',
              217 => 'plugins/views_plugin_exposed_form_input_required.inc',
              218 => 'plugins/views_plugin_localization_core.inc',
              219 => 'plugins/views_plugin_localization.inc',
              220 => 'plugins/views_plugin_localization_none.inc',
              221 => 'plugins/views_plugin_pager.inc',
              222 => 'plugins/views_plugin_pager_full.inc',
              223 => 'plugins/views_plugin_pager_mini.inc',
              224 => 'plugins/views_plugin_pager_none.inc',
              225 => 'plugins/views_plugin_pager_some.inc',
              226 => 'plugins/views_plugin_query.inc',
              227 => 'plugins/views_plugin_query_default.inc',
              228 => 'plugins/views_plugin_row.inc',
              229 => 'plugins/views_plugin_row_fields.inc',
              230 => 'plugins/views_plugin_row_rss_fields.inc',
              231 => 'plugins/views_plugin_style.inc',
              232 => 'plugins/views_plugin_style_default.inc',
              233 => 'plugins/views_plugin_style_grid.inc',
              234 => 'plugins/views_plugin_style_list.inc',
              235 => 'plugins/views_plugin_style_jump_menu.inc',
              236 => 'plugins/views_plugin_style_mapping.inc',
              237 => 'plugins/views_plugin_style_rss.inc',
              238 => 'plugins/views_plugin_style_summary.inc',
              239 => 'plugins/views_plugin_style_summary_jump_menu.inc',
              240 => 'plugins/views_plugin_style_summary_unformatted.inc',
              241 => 'plugins/views_plugin_style_table.inc',
              242 => 'tests/handlers/views_handlers.test',
              243 => 'tests/handlers/views_handler_area_text.test',
              244 => 'tests/handlers/views_handler_argument_null.test',
              245 => 'tests/handlers/views_handler_argument_string.test',
              246 => 'tests/handlers/views_handler_field.test',
              247 => 'tests/handlers/views_handler_field_boolean.test',
              248 => 'tests/handlers/views_handler_field_custom.test',
              249 => 'tests/handlers/views_handler_field_counter.test',
              250 => 'tests/handlers/views_handler_field_date.test',
              251 => 'tests/handlers/views_handler_field_file_extension.test',
              252 => 'tests/handlers/views_handler_field_file_size.test',
              253 => 'tests/handlers/views_handler_field_math.test',
              254 => 'tests/handlers/views_handler_field_url.test',
              255 => 'tests/handlers/views_handler_field_xss.test',
              256 => 'tests/handlers/views_handler_filter_combine.test',
              257 => 'tests/handlers/views_handler_filter_date.test',
              258 => 'tests/handlers/views_handler_filter_equality.test',
              259 => 'tests/handlers/views_handler_filter_in_operator.test',
              260 => 'tests/handlers/views_handler_filter_numeric.test',
              261 => 'tests/handlers/views_handler_filter_string.test',
              262 => 'tests/handlers/views_handler_sort_random.test',
              263 => 'tests/handlers/views_handler_sort_date.test',
              264 => 'tests/handlers/views_handler_sort.test',
              265 => 'tests/test_handlers/views_test_area_access.inc',
              266 => 'tests/test_plugins/views_test_plugin_access_test_dynamic.inc',
              267 => 'tests/test_plugins/views_test_plugin_access_test_static.inc',
              268 => 'tests/test_plugins/views_test_plugin_style_test_mapping.inc',
              269 => 'tests/plugins/views_plugin_display.test',
              270 => 'tests/styles/views_plugin_style_jump_menu.test',
              271 => 'tests/styles/views_plugin_style.test',
              272 => 'tests/styles/views_plugin_style_base.test',
              273 => 'tests/styles/views_plugin_style_mapping.test',
              274 => 'tests/styles/views_plugin_style_unformatted.test',
              275 => 'tests/views_access.test',
              276 => 'tests/views_analyze.test',
              277 => 'tests/views_basic.test',
              278 => 'tests/views_argument_default.test',
              279 => 'tests/views_argument_validator.test',
              280 => 'tests/views_exposed_form.test',
              281 => 'tests/field/views_fieldapi.test',
              282 => 'tests/views_glossary.test',
              283 => 'tests/views_groupby.test',
              284 => 'tests/views_handlers.test',
              285 => 'tests/views_module.test',
              286 => 'tests/views_pager.test',
              287 => 'tests/views_plugin_localization_test.inc',
              288 => 'tests/views_translatable.test',
              289 => 'tests/views_query.test',
              290 => 'tests/views_upgrade.test',
              291 => 'tests/views_test.views_default.inc',
              292 => 'tests/comment/views_handler_argument_comment_user_uid.test',
              293 => 'tests/comment/views_handler_filter_comment_user_uid.test',
              294 => 'tests/node/views_node_revision_relations.test',
              295 => 'tests/taxonomy/views_handler_relationship_node_term_data.test',
              296 => 'tests/user/views_handler_field_user_name.test',
              297 => 'tests/user/views_user_argument_default.test',
              298 => 'tests/user/views_user_argument_validate.test',
              299 => 'tests/user/views_user.test',
              300 => 'tests/views_cache.test',
              301 => 'tests/views_view.test',
              302 => 'tests/views_ui.test',
            ),
            'version' => '7.x-3.11',
            'project' => 'views',
            'datestamp' => '1430321048',
          ),
          'schema_version' => '7301',
          'version' => '7.x-3.11',
        ),
        'views_ui' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/views/views_ui.module',
          'basename' => 'views_ui.module',
          'name' => 'views_ui',
          'info' => 
          array (
            'name' => 'Views UI',
            'description' => 'Administrative interface to views. Without this module, you cannot create or edit your views.',
            'package' => 'Views',
            'core' => '7.x',
            'configure' => 'admin/structure/views',
            'dependencies' => 
            array (
              0 => 'views',
            ),
            'files' => 
            array (
              0 => 'views_ui.module',
              1 => 'plugins/views_wizard/views_ui_base_views_wizard.class.php',
            ),
            'version' => '7.x-3.11',
            'project' => 'views',
            'datestamp' => '1430321048',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.11',
        ),
        'voting_rules' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/voting_rules/voting_rules.module',
          'basename' => 'voting_rules.module',
          'name' => 'voting_rules',
          'info' => 
          array (
            'name' => 'Voting Rules',
            'description' => 'Rules Integration for VotingApi',
            'core' => '7.x',
            'package' => 'Rules',
            'dependencies' => 
            array (
              0 => 'votingapi',
              1 => 'rules',
            ),
            'files' => 
            array (
              0 => 'voting_rules.module',
              1 => 'voting_rules.rules.inc',
              2 => 'voting_rules.tokens.inc',
            ),
            'version' => '7.x-1.0-alpha1',
            'project' => 'voting_rules',
            'datestamp' => '1310711220',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-alpha1',
        ),
        'kissmetrics' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/kissmetrics/kissmetrics.module',
          'basename' => 'kissmetrics.module',
          'name' => 'kissmetrics',
          'info' => 
          array (
            'name' => 'KISSmetrics',
            'description' => 'Provides integration with the KISSmetrics person-based analytics service.',
            'core' => '7.x',
            'package' => 'Statistics',
            'dependencies' => 
            array (
              0 => 'libraries (2.x)',
              1 => 'rules',
            ),
            'configure' => 'admin/config/services/kissmetrics',
            'version' => '7.x-1.0-rc3',
            'project' => 'kissmetrics',
            'datestamp' => '1381181542',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc3',
        ),
        'oauth2_common' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/oauthconnector/modules/oauth2/oauth2_common.module',
          'basename' => 'oauth2_common.module',
          'name' => 'oauth2_common',
          'info' => 
          array (
            'name' => 'OAuth2',
            'description' => 'Extends OAuth functionality with Oauth2',
            'package' => 'OAuth',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'lib/DrupalOAuth2Client.inc',
            ),
            'version' => '7.x-1.0-beta2+0-dev',
            'project' => 'oauthconnector',
            'datestamp' => '1446047076',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-beta2+0-dev',
        ),
        'oauthconnector' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/oauthconnector/oauthconnector.module',
          'basename' => 'oauthconnector.module',
          'name' => 'oauthconnector',
          'info' => 
          array (
            'name' => 'OAuth Connector',
            'description' => 'OAuth support for the Connector module',
            'core' => '7.x',
            'package' => 'Connector',
            'dependencies' => 
            array (
              0 => 'connector',
              1 => 'oauth_common',
              2 => 'oauth2_common',
              3 => 'http_client',
              4 => 'http_client_oauth',
              5 => 'ctools',
            ),
            'version' => '7.x-1.0-beta2+0-dev',
            'project' => 'oauthconnector',
            'datestamp' => '1446047076',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-1.0-beta2+0-dev',
        ),
        'privatemsg_filter' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/privatemsg/privatemsg_filter/privatemsg_filter.module',
          'basename' => 'privatemsg_filter.module',
          'name' => 'privatemsg_filter',
          'info' => 
          array (
            'name' => 'Privatemsg filter',
            'description' => 'Allow users to filter messages using tags or other criteria.',
            'package' => 'Mail',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'privatemsg',
            ),
            'files' => 
            array (
              0 => 'privatemsg_filter.module',
              1 => 'privatemsg_filter.test',
            ),
            'configure' => 'admin/config/messaging/privatemsg/filter',
            'version' => '7.x-1.4',
            'project' => 'privatemsg',
            'datestamp' => '1374126669',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.4',
        ),
        'pm_email_notify' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/privatemsg/pm_email_notify/pm_email_notify.module',
          'basename' => 'pm_email_notify.module',
          'name' => 'pm_email_notify',
          'info' => 
          array (
            'name' => 'Privatemsg Email Notification',
            'description' => 'Notifies users about new Private Messages via Email.',
            'package' => 'Mail',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'privatemsg',
            ),
            'files' => 
            array (
              0 => 'pm_email_notify.module',
            ),
            'configure' => 'admin/config/messaging/privatemsg/notify',
            'version' => '7.x-1.4',
            'project' => 'privatemsg',
            'datestamp' => '1374126669',
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-1.4',
        ),
        'pm_block_user' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/privatemsg/pm_block_user/pm_block_user.module',
          'basename' => 'pm_block_user.module',
          'name' => 'pm_block_user',
          'info' => 
          array (
            'name' => 'Block user messages',
            'description' => 'Allows users to block other users from sending them messages.',
            'package' => 'Mail',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'privatemsg',
            ),
            'files' => 
            array (
              0 => 'pm_block_user.module',
              1 => 'pm_block_user.pages.inc',
              2 => 'pm_block_user.test',
            ),
            'configure' => 'admin/config/messaging/privatemsg/block',
            'version' => '7.x-1.4',
            'project' => 'privatemsg',
            'datestamp' => '1374126669',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.4',
        ),
        'privatemsg_rules' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/privatemsg/privatemsg_rules/privatemsg_rules.module',
          'basename' => 'privatemsg_rules.module',
          'name' => 'privatemsg_rules',
          'info' => 
          array (
            'name' => 'Privatemsg Rules Integrations',
            'description' => 'Integrates Rules with Privatemsg, allows to act on message events and send private messages',
            'package' => 'Mail',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'privatemsg',
              1 => 'privatemsg_filter',
              2 => 'rules',
            ),
            'files' => 
            array (
              0 => 'privatemsg_rules.rules.inc',
            ),
            'version' => '7.x-1.4',
            'project' => 'privatemsg',
            'datestamp' => '1374126669',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.4',
        ),
        'privatemsg_realname' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/privatemsg/privatemsg_realname/privatemsg_realname.module',
          'basename' => 'privatemsg_realname.module',
          'name' => 'privatemsg_realname',
          'info' => 
          array (
            'name' => 'Privatemsg Realname Integration',
            'description' => 'Provides reverse lookup for realnames',
            'package' => 'Mail',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'privatemsg',
              1 => 'realname',
            ),
            'version' => '7.x-1.4',
            'project' => 'privatemsg',
            'datestamp' => '1374126669',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.4',
        ),
        'privatemsg_roles' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/privatemsg/privatemsg_roles/privatemsg_roles.module',
          'basename' => 'privatemsg_roles.module',
          'name' => 'privatemsg_roles',
          'info' => 
          array (
            'name' => 'Privatemsg roles',
            'description' => 'Allows to send message to all members of a role.',
            'package' => 'Mail',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'privatemsg',
            ),
            'files' => 
            array (
              0 => 'privatemsg_roles.module',
              1 => 'privatemsg_roles.test',
            ),
            'version' => '7.x-1.4',
            'project' => 'privatemsg',
            'datestamp' => '1374126669',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.4',
        ),
        'privatemsg_limits' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/privatemsg/privatemsg_limits/privatemsg_limits.module',
          'basename' => 'privatemsg_limits.module',
          'name' => 'privatemsg_limits',
          'info' => 
          array (
            'name' => 'Privatemsg Limits',
            'description' => 'Allows to define limits for private messages including amount of sent messages per timeframe and number of recipients',
            'package' => 'Mail',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'privatemsg',
            ),
            'files' => 
            array (
              0 => 'privatemsg_limits.test',
            ),
            'version' => '7.x-1.4',
            'project' => 'privatemsg',
            'datestamp' => '1374126669',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.4',
        ),
        'privatemsg' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/privatemsg/privatemsg.module',
          'basename' => 'privatemsg.module',
          'name' => 'privatemsg',
          'info' => 
          array (
            'name' => 'Private messages',
            'description' => 'Allow private messages between users.',
            'package' => 'Mail',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'privatemsg.module',
              1 => 'privatemsg.test',
              2 => 'views/views_handler_field_privatemsg_link.inc',
              3 => 'views/views_handler_field_pm_thread_link.inc',
              4 => 'views/views_handler_field_pm_new.inc',
              5 => 'views/views_handler_field_pm_markup.inc',
              6 => 'views/views_handler_filter_pm_deleted.inc',
              7 => 'views/privatemsg.views.inc',
              8 => 'privatemsg.theme.inc',
              9 => 'privatemsg.pages.inc',
              10 => 'privatemsg.admin.inc',
            ),
            'configure' => 'admin/config/messaging/privatemsg',
            'test_dependencies' => 
            array (
              0 => 'token',
            ),
            'version' => '7.x-1.4',
            'project' => 'privatemsg',
            'datestamp' => '1374126669',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7007',
          'version' => '7.x-1.4',
        ),
        'addressfield' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/addressfield/addressfield.module',
          'basename' => 'addressfield.module',
          'name' => 'addressfield',
          'info' => 
          array (
            'name' => 'Address Field',
            'description' => 'Manage a flexible address field, implementing the xNAL standard.',
            'core' => '7.x',
            'package' => 'Fields',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'files' => 
            array (
              0 => 'addressfield.migrate.inc',
              1 => 'views/addressfield_views_handler_field_administrative_area.inc',
              2 => 'views/addressfield_views_handler_field_country.inc',
              3 => 'views/addressfield_views_handler_filter_country.inc',
            ),
            'version' => '7.x-1.2',
            'project' => 'addressfield',
            'datestamp' => '1444254070',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.2',
        ),
        'translation_helpers' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/translation_helpers/translation_helpers.module',
          'basename' => 'translation_helpers.module',
          'name' => 'translation_helpers',
          'info' => 
          array (
            'name' => 'Translation helpers',
            'description' => 'Provides methods for other modules to use with translated content.',
            'dependencies' => 
            array (
              0 => 'translation',
            ),
            'package' => 'Multilanguage',
            'core' => '7.x',
            'version' => '7.x-1.0',
            'project' => 'translation_helpers',
            'datestamp' => '1322669152',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0',
        ),
        'apachesolr_access' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/apachesolr/apachesolr_access/apachesolr_access.module',
          'basename' => 'apachesolr_access.module',
          'name' => 'apachesolr_access',
          'info' => 
          array (
            'name' => 'Apache Solr Access',
            'description' => 'Integrates node access and other permissions with Apache Solr search',
            'dependencies' => 
            array (
              0 => 'apachesolr',
            ),
            'package' => 'Search Toolkit',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'tests/apachesolr_access.test',
            ),
            'version' => '7.x-1.7',
            'project' => 'apachesolr',
            'datestamp' => '1409317099',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'apachesolr_search' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/apachesolr/apachesolr_search.module',
          'basename' => 'apachesolr_search.module',
          'name' => 'apachesolr_search',
          'info' => 
          array (
            'name' => 'Apache Solr search',
            'description' => 'Search with Solr',
            'dependencies' => 
            array (
              0 => 'search',
              1 => 'apachesolr',
            ),
            'package' => 'Search Toolkit',
            'core' => '7.x',
            'configure' => 'admin/config/search/apachesolr/search-pages',
            'version' => '7.x-1.7',
            'project' => 'apachesolr',
            'datestamp' => '1409317099',
            'php' => '5.2.4',
          ),
          'schema_version' => '7006',
          'version' => '7.x-1.7',
        ),
        'apachesolr' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/apachesolr/apachesolr.module',
          'basename' => 'apachesolr.module',
          'name' => 'apachesolr',
          'info' => 
          array (
            'name' => 'Apache Solr framework',
            'description' => 'Framework for searching with Solr',
            'package' => 'Search Toolkit',
            'core' => '7.x',
            'configure' => 'admin/config/search/apachesolr/settings',
            'files' => 
            array (
              0 => 'apachesolr.interface.inc',
              1 => 'Drupal_Apache_Solr_Service.php',
              2 => 'Apache_Solr_Document.php',
              3 => 'Solr_Base_Query.php',
              4 => 'plugins/facetapi/adapter.inc',
              5 => 'plugins/facetapi/query_type_date.inc',
              6 => 'plugins/facetapi/query_type_term.inc',
              7 => 'plugins/facetapi/query_type_numeric_range.inc',
              8 => 'plugins/facetapi/query_type_geo.inc',
              9 => 'tests/Dummy_Solr.php',
              10 => 'tests/apachesolr_base.test',
              11 => 'tests/solr_index_and_search.test',
              12 => 'tests/solr_base_query.test',
              13 => 'tests/solr_base_subquery.test',
              14 => 'tests/solr_document.test',
            ),
            'version' => '7.x-1.7',
            'project' => 'apachesolr',
            'datestamp' => '1409317099',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7017',
          'version' => '7.x-1.7',
        ),
        'entity' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/entity/entity.module',
          'basename' => 'entity.module',
          'name' => 'entity',
          'info' => 
          array (
            'name' => 'Entity API',
            'description' => 'Enables modules to work with any entity type and to provide entities.',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'entity.features.inc',
              1 => 'entity.i18n.inc',
              2 => 'entity.info.inc',
              3 => 'entity.rules.inc',
              4 => 'entity.test',
              5 => 'includes/entity.inc',
              6 => 'includes/entity.controller.inc',
              7 => 'includes/entity.ui.inc',
              8 => 'includes/entity.wrapper.inc',
              9 => 'views/entity.views.inc',
              10 => 'views/handlers/entity_views_field_handler_helper.inc',
              11 => 'views/handlers/entity_views_handler_area_entity.inc',
              12 => 'views/handlers/entity_views_handler_field_boolean.inc',
              13 => 'views/handlers/entity_views_handler_field_date.inc',
              14 => 'views/handlers/entity_views_handler_field_duration.inc',
              15 => 'views/handlers/entity_views_handler_field_entity.inc',
              16 => 'views/handlers/entity_views_handler_field_field.inc',
              17 => 'views/handlers/entity_views_handler_field_numeric.inc',
              18 => 'views/handlers/entity_views_handler_field_options.inc',
              19 => 'views/handlers/entity_views_handler_field_text.inc',
              20 => 'views/handlers/entity_views_handler_field_uri.inc',
              21 => 'views/handlers/entity_views_handler_relationship_by_bundle.inc',
              22 => 'views/handlers/entity_views_handler_relationship.inc',
              23 => 'views/plugins/entity_views_plugin_row_entity_view.inc',
            ),
            'version' => '7.x-1.6',
            'project' => 'entity',
            'datestamp' => '1424876582',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7003',
          'version' => '7.x-1.6',
        ),
        'entity_token' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/entity/entity_token.module',
          'basename' => 'entity_token.module',
          'name' => 'entity_token',
          'info' => 
          array (
            'name' => 'Entity tokens',
            'description' => 'Provides token replacements for all properties that have no tokens and are known to the entity API.',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'entity_token.tokens.inc',
              1 => 'entity_token.module',
            ),
            'dependencies' => 
            array (
              0 => 'entity',
            ),
            'version' => '7.x-1.6',
            'project' => 'entity',
            'datestamp' => '1424876582',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.6',
        ),
        'navbar' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/navbar/navbar.module',
          'basename' => 'navbar.module',
          'name' => 'navbar',
          'info' => 
          array (
            'name' => 'Navbar',
            'description' => 'A very simple mobile friendly navigation toolbar that lets you switch between frontend and backend.',
            'core' => '7.x',
            'package' => 'Administration',
            'dependencies' => 
            array (
              0 => 'libraries (>=2.0)',
            ),
            'version' => '7.x-1.6',
            'project' => 'navbar',
            'datestamp' => '1424653389',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.6',
        ),
        'i18nviews' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/i18nviews/i18nviews.module',
          'basename' => 'i18nviews.module',
          'name' => 'i18nviews',
          'info' => 
          array (
            'name' => 'Views translation',
            'description' => 'Translation of views strings and content selection for views. Requires Views 3.x',
            'dependencies' => 
            array (
              0 => 'views',
              1 => 'i18n_string',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'i18nviews.inc',
              1 => 'i18nviews.i18n.inc',
              2 => 'includes/i18nviews_handler_argument_taxonomy_index_tid.inc',
              3 => 'includes/i18nviews_handler_argument_taxonomy_term_name.inc',
              4 => 'includes/i18nviews_handler_argument_taxonomy_term_language.inc',
              5 => 'includes/i18nviews_handler_argument_term_node_tid_depth.inc',
              6 => 'includes/i18nviews_handler_field_taxonomy_term_description.inc',
              7 => 'includes/i18nviews_handler_field_taxonomy_term_language.inc',
              8 => 'includes/i18nviews_handler_field_taxonomy_term_name.inc',
              9 => 'includes/i18nviews_handler_field_term_node_tid.inc',
              10 => 'includes/i18nviews_handler_filter_field_list.inc',
              11 => 'includes/i18nviews_handler_filter_taxonomy_index_tid.inc',
              12 => 'includes/i18nviews_handler_filter_taxonomy_term_name.inc',
              13 => 'includes/i18nviews_handler_filter_taxonomy_term_language.inc',
              14 => 'includes/i18nviews_handler_filter_term_node_tid_depth.inc',
              15 => 'includes/i18nviews_plugin_argument_validate_i18n_taxonomy_term.inc',
              16 => 'includes/i18nviews_plugin_localization_i18nstrings.inc',
            ),
            'version' => '',
            'project' => 'i18nviews',
            'datestamp' => '1446047080',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '',
        ),
        'title' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/title/title.module',
          'basename' => 'title.module',
          'name' => 'title',
          'info' => 
          array (
            'name' => 'Title',
            'description' => 'Replaces entity legacy fields with regular fields.',
            'core' => '7.x',
            'package' => 'Fields',
            'configure' => 'admin/config/content/title',
            'dependencies' => 
            array (
              0 => 'system (>7.14)',
            ),
            'files' => 
            array (
              0 => 'title.module',
              1 => 'views/views_handler_title_field.inc',
              2 => 'tests/title.test',
            ),
            'version' => '7.x-1.0-alpha7',
            'project' => 'title',
            'datestamp' => '1363626024',
            'php' => '5.2.4',
          ),
          'schema_version' => '7002',
          'version' => '7.x-1.0-alpha7',
        ),
        'custom_search_taxonomy' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/custom_search/modules/custom_search_taxonomy/custom_search_taxonomy.module',
          'basename' => 'custom_search_taxonomy.module',
          'name' => 'custom_search_taxonomy',
          'info' => 
          array (
            'name' => 'Custom Search Taxonomy',
            'description' => 'Adds taxonomy selectors to Custom Search.',
            'core' => '7.x',
            'package' => 'Search',
            'dependencies' => 
            array (
              0 => 'custom_search',
              1 => 'taxonomy',
            ),
            'configure' => 'admin/config/search/custom_search/taxonomy',
            'version' => '7.x-1.18',
            'project' => 'custom_search',
            'datestamp' => '1424262482',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.18',
        ),
        'custom_search_blocks' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/custom_search/modules/custom_search_blocks/custom_search_blocks.module',
          'basename' => 'custom_search_blocks.module',
          'name' => 'custom_search_blocks',
          'info' => 
          array (
            'name' => 'Custom Search Blocks',
            'description' => 'Provides additional search blocks.',
            'core' => '7.x',
            'package' => 'Search',
            'dependencies' => 
            array (
              0 => 'block',
              1 => 'custom_search',
            ),
            'configure' => 'admin/config/search/custom_search/blocks',
            'version' => '7.x-1.18',
            'project' => 'custom_search',
            'datestamp' => '1424262482',
            'php' => '5.2.4',
          ),
          'schema_version' => '7101',
          'version' => '7.x-1.18',
        ),
        'custom_search_i18n' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/custom_search/modules/custom_search_i18n/custom_search_i18n.module',
          'basename' => 'custom_search_i18n.module',
          'name' => 'custom_search_i18n',
          'info' => 
          array (
            'name' => 'Custom Search Internationalization',
            'description' => 'Provides Internationalization to Custom Search.',
            'core' => '7.x',
            'package' => 'Search',
            'dependencies' => 
            array (
              0 => 'custom_search',
              1 => 'i18n_string',
            ),
            'version' => '7.x-1.18',
            'project' => 'custom_search',
            'datestamp' => '1424262482',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.18',
        ),
        'custom_search' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/custom_search/custom_search.module',
          'basename' => 'custom_search.module',
          'name' => 'custom_search',
          'info' => 
          array (
            'name' => 'Custom Search',
            'description' => 'Customize the default search, change labels, default texts, ordering, and display content types and taxonomy selectors.',
            'core' => '7.x',
            'package' => 'Search',
            'dependencies' => 
            array (
              0 => 'search',
            ),
            'configure' => 'admin/config/search/custom_search',
            'version' => '7.x-1.18',
            'project' => 'custom_search',
            'datestamp' => '1424262482',
            'php' => '5.2.4',
          ),
          'schema_version' => '7104',
          'version' => '7.x-1.18',
        ),
        'file_entity' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/file_entity/file_entity.module',
          'basename' => 'file_entity.module',
          'name' => 'file_entity',
          'info' => 
          array (
            'name' => 'File Entity',
            'description' => 'Extends Drupal file entities to be fieldable and viewable.',
            'package' => 'Media',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'field',
              1 => 'file',
              2 => 'ctools',
              3 => 'system (>=7.33)',
            ),
            'test_dependencies' => 
            array (
              0 => 'token',
            ),
            'files' => 
            array (
              0 => 'views/views_handler_argument_file_type.inc',
              1 => 'views/views_handler_field_file_rendered.inc',
              2 => 'views/views_handler_field_file_type.inc',
              3 => 'views/views_handler_filter_file_type.inc',
              4 => 'views/views_handler_filter_schema_type.inc',
              5 => 'views/views_handler_field_file_filename.inc',
              6 => 'views/views_handler_field_file_link.inc',
              7 => 'views/views_handler_field_file_link_edit.inc',
              8 => 'views/views_handler_field_file_link_delete.inc',
              9 => 'views/views_handler_field_file_link_download.inc',
              10 => 'views/views_handler_field_file_link_usage.inc',
              11 => 'views/views_plugin_row_file_rss.inc',
              12 => 'views/views_plugin_row_file_view.inc',
              13 => 'file_entity.test',
            ),
            'configure' => 'admin/config/media/file-settings',
            'version' => '7.x-2.0-beta2+11-dev',
            'project' => 'file_entity',
            'datestamp' => '1446047082',
            'php' => '5.2.4',
          ),
          'schema_version' => '7216',
          'version' => '7.x-2.0-beta2+11-dev',
        ),
        'metatag_facebook' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_facebook/metatag_facebook.module',
          'basename' => 'metatag_facebook.module',
          'name' => 'metatag_facebook',
          'info' => 
          array (
            'name' => 'Metatag: Facebook',
            'description' => 'Provides support for Facebook\'s custom meta tags.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_mobile' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_mobile/metatag_mobile.module',
          'basename' => 'metatag_mobile.module',
          'name' => 'metatag_mobile',
          'info' => 
          array (
            'name' => 'Metatag: Mobile & UI Adjustments',
            'description' => 'Provides support for meta tags used to control the mobile browser experience.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_google_plus' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_google_plus/metatag_google_plus.module',
          'basename' => 'metatag_google_plus.module',
          'name' => 'metatag_google_plus',
          'info' => 
          array (
            'name' => 'Metatag: Google+',
            'description' => 'Provides support for Google+ \'itemscope\' meta tags.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'files' => 
            array (
              0 => 'metatag_google_plus.inc',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_devel' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_devel/metatag_devel.module',
          'basename' => 'metatag_devel.module',
          'name' => 'metatag_devel',
          'info' => 
          array (
            'name' => 'Metatag:Devel',
            'description' => 'Provides development / debugging functionality for the Metatag module. Integrates with Devel Generate.',
            'package' => 'Development',
            'core' => '7.x',
            'tags' => 
            array (
              0 => 'developer',
            ),
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_twitter_cards' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_twitter_cards/metatag_twitter_cards.module',
          'basename' => 'metatag_twitter_cards.module',
          'name' => 'metatag_twitter_cards',
          'info' => 
          array (
            'name' => 'Metatag: Twitter Cards',
            'description' => 'Provides support for Twitter\'s Card meta tags.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_importer' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_importer/metatag_importer.module',
          'basename' => 'metatag_importer.module',
          'name' => 'metatag_importer',
          'info' => 
          array (
            'name' => 'Metatag Importer',
            'description' => 'Import data from other modules into Metatag.',
            'core' => '7.x',
            'package' => 'SEO',
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_app_links' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_app_links/metatag_app_links.module',
          'basename' => 'metatag_app_links.module',
          'name' => 'metatag_app_links',
          'info' => 
          array (
            'name' => 'Metatag: App Links',
            'description' => 'Provides support for applinks.org meta tags.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_views' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_views/metatag_views.module',
          'basename' => 'metatag_views.module',
          'name' => 'metatag_views',
          'info' => 
          array (
            'name' => 'Metatag: Views',
            'description' => 'Provides Metatag integration within the Views interface.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
              1 => 'views',
            ),
            'files' => 
            array (
              0 => 'metatag_views_plugin_display_extender_metatags.inc',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_verification' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_verification/metatag_verification.module',
          'basename' => 'metatag_verification.module',
          'name' => 'metatag_verification',
          'info' => 
          array (
            'name' => 'Metatag: Verification',
            'description' => 'Various meta tags for verifying ownership of a site.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_favicons' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_favicons/metatag_favicons.module',
          'basename' => 'metatag_favicons.module',
          'name' => 'metatag_favicons',
          'info' => 
          array (
            'name' => 'Metatag: favicons',
            'description' => 'Provides support for custom favicons.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_panels' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_panels/metatag_panels.module',
          'basename' => 'metatag_panels.module',
          'name' => 'metatag_panels',
          'info' => 
          array (
            'name' => 'Metatag: Panels',
            'description' => 'Provides Metatag integration within the Panels interface.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'metatag',
              2 => 'panels',
              3 => 'token',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_opengraph' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_opengraph/metatag_opengraph.module',
          'basename' => 'metatag_opengraph.module',
          'name' => 'metatag_opengraph',
          'info' => 
          array (
            'name' => 'Metatag:OpenGraph',
            'description' => 'Provides support for Open Graph Protocol meta tags.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => '7102',
          'version' => '7.x-1.7',
        ),
        'metatag_dc_advanced' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_dc_advanced/metatag_dc_advanced.module',
          'basename' => 'metatag_dc_advanced.module',
          'name' => 'metatag_dc_advanced',
          'info' => 
          array (
            'name' => 'Metatag: Dublin Core Advanced',
            'description' => 'Provides forty additional meta tags from the <a href="http://dublincore.org/">Dublin Core Metadata Institute</a>.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
              1 => 'metatag_dc',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_dc' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_dc/metatag_dc.module',
          'basename' => 'metatag_dc.module',
          'name' => 'metatag_dc',
          'info' => 
          array (
            'name' => 'Metatag: Dublin Core',
            'description' => 'Provides the fifteen <a href="http://dublincore.org/documents/dces/">Dublin Core Metadata Element Set 1.1</a> meta tags from the <a href="http://dublincore.org/">Dublin Core Metadata Institute</a>.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => '7100',
          'version' => '7.x-1.7',
        ),
        'metatag_context' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_context/metatag_context.module',
          'basename' => 'metatag_context.module',
          'name' => 'metatag_context',
          'info' => 
          array (
            'name' => 'Metatag: Context',
            'description' => 'Assigned Metatag using Context definitions, allowing them to be assigned by path and other criteria.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'context',
              1 => 'metatag',
            ),
            'files' => 
            array (
              0 => 'metatag_context.test',
            ),
            'configure' => 'admin/config/search/metatags/context',
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag_opengraph_products' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag_opengraph_products/metatag_opengraph_products.module',
          'basename' => 'metatag_opengraph_products.module',
          'name' => 'metatag_opengraph_products',
          'info' => 
          array (
            'name' => 'Metatag:OpenGraph Products',
            'description' => 'Provides additional Open Graph Protocol meta tags for describing products.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'metatag',
              1 => 'metatag_opengraph',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'metatag' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/metatag/metatag.module',
          'basename' => 'metatag.module',
          'name' => 'metatag',
          'info' => 
          array (
            'name' => 'Metatag',
            'description' => 'Adds support and an API to implement meta tags.',
            'package' => 'SEO',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'system (>= 7.28)',
              1 => 'ctools',
              2 => 'token (>= 1.6)',
            ),
            'configure' => 'admin/config/search/metatags',
            'files' => 
            array (
              0 => 'metatag.inc',
              1 => 'metatag.migrate.inc',
              2 => 'metatag.test',
            ),
            'version' => '7.x-1.7',
            'project' => 'metatag',
            'datestamp' => '1437763741',
            'php' => '5.2.4',
          ),
          'schema_version' => '7038',
          'version' => '7.x-1.7',
        ),
        'strongarm' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/strongarm/strongarm.module',
          'basename' => 'strongarm.module',
          'name' => 'strongarm',
          'info' => 
          array (
            'name' => 'Strongarm',
            'description' => 'Enforces variable values defined by modules that need settings set to operate properly.',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'files' => 
            array (
              0 => 'strongarm.admin.inc',
              1 => 'strongarm.install',
              2 => 'strongarm.module',
            ),
            'version' => '7.x-2.0+2-dev',
            'project' => 'strongarm',
            'datestamp' => '1446047070',
            'php' => '5.2.4',
          ),
          'schema_version' => '7201',
          'version' => '7.x-2.0+2-dev',
        ),
        'apachesolr_og' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/apachesolr_og/apachesolr_og.module',
          'basename' => 'apachesolr_og.module',
          'name' => 'apachesolr_og',
          'info' => 
          array (
            'name' => 'Apache Solr Organic Groups',
            'description' => 'Integrates Organic Groups and Apache Solr Search',
            'package' => 'Apache Solr',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'apachesolr',
              1 => 'og',
            ),
            'version' => '7.x-1.0+2-dev',
            'project' => 'apachesolr_og',
            'datestamp' => '1446047087',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0+2-dev',
        ),
        'features' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/features/features.module',
          'basename' => 'features.module',
          'name' => 'features',
          'info' => 
          array (
            'name' => 'Features',
            'description' => 'Provides feature management for Drupal.',
            'core' => '7.x',
            'package' => 'Features',
            'files' => 
            array (
              0 => 'tests/features.test',
            ),
            'configure' => 'admin/structure/features/settings',
            'version' => '7.x-2.7',
            'project' => 'features',
            'datestamp' => '1444829630',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7200',
          'version' => '7.x-2.7',
        ),
        'date_popup' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date/date_popup/date_popup.module',
          'basename' => 'date_popup.module',
          'name' => 'date_popup',
          'info' => 
          array (
            'name' => 'Date Popup',
            'description' => 'Enables jquery popup calendars and time entry widgets for selecting dates and times.',
            'dependencies' => 
            array (
              0 => 'date_api',
            ),
            'package' => 'Date/Time',
            'core' => '7.x',
            'configure' => 'admin/config/date/date_popup',
            'stylesheets' => 
            array (
              'all' => 
              array (
                0 => 'themes/datepicker.1.7.css',
              ),
            ),
            'version' => '7.x-2.9',
            'project' => 'date',
            'datestamp' => '1441727353',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.9',
        ),
        'date_repeat_field' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date/date_repeat_field/date_repeat_field.module',
          'basename' => 'date_repeat_field.module',
          'name' => 'date_repeat_field',
          'info' => 
          array (
            'name' => 'Date Repeat Field',
            'description' => 'Creates the option of Repeating date fields and manages Date fields that use the Date Repeat API.',
            'dependencies' => 
            array (
              0 => 'date_api',
              1 => 'date',
              2 => 'date_repeat',
            ),
            'stylesheets' => 
            array (
              'all' => 
              array (
                0 => 'date_repeat_field.css',
              ),
            ),
            'package' => 'Date/Time',
            'core' => '7.x',
            'version' => '7.x-2.9',
            'project' => 'date',
            'datestamp' => '1441727353',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.9',
        ),
        'date_all_day' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date/date_all_day/date_all_day.module',
          'basename' => 'date_all_day.module',
          'name' => 'date_all_day',
          'info' => 
          array (
            'name' => 'Date All Day',
            'description' => 'Adds \'All Day\' functionality to date fields, including an \'All Day\' theme and \'All Day\' checkboxes for the Date select and Date popup widgets.',
            'dependencies' => 
            array (
              0 => 'date_api',
              1 => 'date',
            ),
            'package' => 'Date/Time',
            'core' => '7.x',
            'version' => '7.x-2.9',
            'project' => 'date',
            'datestamp' => '1441727353',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.9',
        ),
        'date_migrate_example' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date/date_migrate/date_migrate_example/date_migrate_example.module',
          'basename' => 'date_migrate_example.module',
          'name' => 'date_migrate_example',
          'info' => 
          array (
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'date',
              1 => 'date_repeat',
              2 => 'date_repeat_field',
              3 => 'features',
              4 => 'migrate',
            ),
            'description' => 'Examples of migrating with the Date module',
            'features' => 
            array (
              'field' => 
              array (
                0 => 'node-date_migrate_example-body',
                1 => 'node-date_migrate_example-field_date',
                2 => 'node-date_migrate_example-field_date_range',
                3 => 'node-date_migrate_example-field_date_repeat',
                4 => 'node-date_migrate_example-field_datestamp',
                5 => 'node-date_migrate_example-field_datestamp_range',
                6 => 'node-date_migrate_example-field_datetime',
                7 => 'node-date_migrate_example-field_datetime_range',
              ),
              'node' => 
              array (
                0 => 'date_migrate_example',
              ),
            ),
            'files' => 
            array (
              0 => 'date_migrate_example.migrate.inc',
            ),
            'name' => 'Date Migration Example',
            'package' => 'Features',
            'project' => 'date',
            'version' => '7.x-2.9',
            'datestamp' => '1441727353',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.9',
        ),
        'date_tools' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date/date_tools/date_tools.module',
          'basename' => 'date_tools.module',
          'name' => 'date_tools',
          'info' => 
          array (
            'name' => 'Date Tools',
            'description' => 'Tools to import and auto-create dates and calendars.',
            'dependencies' => 
            array (
              0 => 'date',
            ),
            'package' => 'Date/Time',
            'core' => '7.x',
            'configure' => 'admin/config/date/tools',
            'files' => 
            array (
              0 => 'tests/date_tools.test',
            ),
            'version' => '7.x-2.9',
            'project' => 'date',
            'datestamp' => '1441727353',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.9',
        ),
        'date_api' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date/date_api/date_api.module',
          'basename' => 'date_api.module',
          'name' => 'date_api',
          'info' => 
          array (
            'name' => 'Date API',
            'description' => 'A Date API that can be used by other modules.',
            'package' => 'Date/Time',
            'core' => '7.x',
            'php' => '5.2',
            'stylesheets' => 
            array (
              'all' => 
              array (
                0 => 'date.css',
              ),
            ),
            'files' => 
            array (
              0 => 'date_api.module',
              1 => 'date_api_sql.inc',
            ),
            'version' => '7.x-2.9',
            'project' => 'date',
            'datestamp' => '1441727353',
            'dependencies' => 
            array (
            ),
          ),
          'schema_version' => '7001',
          'version' => '7.x-2.9',
        ),
        'date_views' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date/date_views/date_views.module',
          'basename' => 'date_views.module',
          'name' => 'date_views',
          'info' => 
          array (
            'name' => 'Date Views',
            'description' => 'Views integration for date fields and date functionality.',
            'package' => 'Date/Time',
            'dependencies' => 
            array (
              0 => 'date_api',
              1 => 'views',
            ),
            'core' => '7.x',
            'php' => '5.2',
            'files' => 
            array (
              0 => 'includes/date_views_argument_handler.inc',
              1 => 'includes/date_views_argument_handler_simple.inc',
              2 => 'includes/date_views_filter_handler.inc',
              3 => 'includes/date_views_filter_handler_simple.inc',
              4 => 'includes/date_views.views.inc',
              5 => 'includes/date_views_plugin_pager.inc',
            ),
            'version' => '7.x-2.9',
            'project' => 'date',
            'datestamp' => '1441727353',
          ),
          'schema_version' => '7200',
          'version' => '7.x-2.9',
        ),
        'date_repeat' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date/date_repeat/date_repeat.module',
          'basename' => 'date_repeat.module',
          'name' => 'date_repeat',
          'info' => 
          array (
            'name' => 'Date Repeat API',
            'description' => 'A Date Repeat API to calculate repeating dates and times from iCal rules.',
            'dependencies' => 
            array (
              0 => 'date_api',
            ),
            'package' => 'Date/Time',
            'core' => '7.x',
            'php' => '5.2',
            'files' => 
            array (
              0 => 'tests/date_repeat.test',
              1 => 'tests/date_repeat_form.test',
            ),
            'version' => '7.x-2.9',
            'project' => 'date',
            'datestamp' => '1441727353',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.9',
        ),
        'date_context' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date/date_context/date_context.module',
          'basename' => 'date_context.module',
          'name' => 'date_context',
          'info' => 
          array (
            'name' => 'Date Context',
            'description' => 'Adds an option to the Context module to set a context condition based on the value of a date field.',
            'package' => 'Date/Time',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'date',
              1 => 'context',
            ),
            'files' => 
            array (
              0 => 'date_context.module',
              1 => 'plugins/date_context_date_condition.inc',
            ),
            'version' => '7.x-2.9',
            'project' => 'date',
            'datestamp' => '1441727353',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.9',
        ),
        'date' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/date/date.module',
          'basename' => 'date.module',
          'name' => 'date',
          'info' => 
          array (
            'name' => 'Date',
            'description' => 'Makes date/time fields available.',
            'dependencies' => 
            array (
              0 => 'date_api',
            ),
            'package' => 'Date/Time',
            'core' => '7.x',
            'php' => '5.2',
            'files' => 
            array (
              0 => 'date.migrate.inc',
              1 => 'tests/date_api.test',
              2 => 'tests/date.test',
              3 => 'tests/date_field.test',
              4 => 'tests/date_migrate.test',
              5 => 'tests/date_validation.test',
              6 => 'tests/date_timezone.test',
              7 => 'tests/date_views_pager.test',
              8 => 'tests/date_views_popup.test',
            ),
            'version' => '7.x-2.9',
            'project' => 'date',
            'datestamp' => '1441727353',
          ),
          'schema_version' => '7004',
          'version' => '7.x-2.9',
        ),
        'pm_existing_pages' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/pm_existing_pages/pm_existing_pages.module',
          'basename' => 'pm_existing_pages.module',
          'name' => 'pm_existing_pages',
          'info' => 
          array (
            'name' => 'Page manager existing pages',
            'description' => 'Provides the ability to override existing pages through Page manager.',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'page_manager',
            ),
            'package' => 'Chaos tool suite',
            'version' => '7.x-1.4',
            'project' => 'pm_existing_pages',
            'datestamp' => '1337606183',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.4',
        ),
        'flag_actions' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/flag/flag_actions.module',
          'basename' => 'flag_actions.module',
          'name' => 'flag_actions',
          'info' => 
          array (
            'name' => 'Flag actions',
            'description' => 'Execute actions on Flag events.',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'flag',
            ),
            'package' => 'Flags',
            'configure' => 'admin/structure/webform/flags',
            'files' => 
            array (
              0 => 'flag.install',
              1 => 'flag_actions.module',
            ),
            'version' => '7.x-2.2',
            'project' => 'flag',
            'datestamp' => '1393145610',
            'php' => '5.2.4',
          ),
          'schema_version' => '6200',
          'version' => '7.x-2.2',
        ),
        'flag' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/flag/flag.module',
          'basename' => 'flag.module',
          'name' => 'flag',
          'info' => 
          array (
            'name' => 'Flag',
            'description' => 'Create customized flags that users can set on content.',
            'core' => '7.x',
            'package' => 'Flags',
            'configure' => 'admin/structure/flags',
            'files' => 
            array (
              0 => 'flag.inc',
              1 => 'flag.rules.inc',
              2 => 'includes/flag_handler_argument_content_id.inc',
              3 => 'includes/flag_handler_field_ops.inc',
              4 => 'includes/flag_handler_filter_flagged.inc',
              5 => 'includes/flag_handler_sort_flagged.inc',
              6 => 'includes/flag_handler_relationships.inc',
              7 => 'includes/flag_plugin_argument_validate_flaggability.inc',
              8 => 'tests/flag.test',
            ),
            'version' => '7.x-2.2',
            'project' => 'flag',
            'datestamp' => '1393145610',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7204',
          'version' => '7.x-2.2',
        ),
        'message_notify_example' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/message_notify/message_notify_example/message_notify_example.module',
          'basename' => 'message_notify_example.module',
          'name' => 'message_notify_example',
          'info' => 
          array (
            'name' => 'Message notify example',
            'description' => 'Message notify example',
            'core' => '7.x',
            'package' => 'Message',
            'php' => '5.2.4',
            'dependencies' => 
            array (
              0 => 'entity_token',
              1 => 'entityreference',
              2 => 'features',
              3 => 'message',
              4 => 'message_notify',
              5 => 'views',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'views:views_default:3.0',
              ),
              'field' => 
              array (
                0 => 'message-comment_insert-field_comment_ref',
                1 => 'message-comment_insert-field_message_rendered_body',
                2 => 'message-comment_insert-field_message_rendered_subject',
              ),
              'message_type' => 
              array (
                0 => 'comment_insert',
              ),
              'views_view' => 
              array (
                0 => 'message_notify_example',
              ),
            ),
            'version' => '7.x-2.5',
            'project' => 'message_notify',
            'datestamp' => '1366630876',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.5',
        ),
        'message_notify' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/message_notify/message_notify.module',
          'basename' => 'message_notify.module',
          'name' => 'message_notify',
          'info' => 
          array (
            'name' => 'Message notify',
            'description' => 'Message notify.',
            'core' => '7.x',
            'package' => 'Message',
            'dependencies' => 
            array (
              0 => 'message',
              1 => 'ctools',
            ),
            'files' => 
            array (
              0 => 'includes/message_notify.exception.inc',
              1 => 'plugins/notifier/abstract.inc',
              2 => 'message_notify.test',
            ),
            'version' => '7.x-2.5',
            'project' => 'message_notify',
            'datestamp' => '1366630876',
            'php' => '5.2.4',
          ),
          'schema_version' => '7003',
          'version' => '7.x-2.5',
        ),
        'l10n_update' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/l10n_update/l10n_update.module',
          'basename' => 'l10n_update.module',
          'name' => 'l10n_update',
          'info' => 
          array (
            'name' => 'Localization update',
            'description' => 'Provides automatic downloads and updates for translations.',
            'dependencies' => 
            array (
              0 => 'locale',
            ),
            'core' => '7.x',
            'package' => 'Multilingual',
            'files' => 
            array (
              0 => 'l10n_update.parser.inc',
            ),
            'version' => '7.x-1.1',
            'project' => 'l10n_update',
            'datestamp' => '1415605322',
            'php' => '5.2.4',
          ),
          'schema_version' => '7006',
          'version' => '7.x-1.1',
        ),
        'dialog_comment' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/dialog/modules/dialog_comment/dialog_comment.module',
          'basename' => 'dialog_comment.module',
          'name' => 'dialog_comment',
          'info' => 
          array (
            'name' => 'Dialog Comment',
            'description' => 'Moves various comment actions into interactive overlays.',
            'package' => 'Dialog',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'comment',
              1 => 'dialog',
            ),
            'version' => '7.x-2.0-alpha6',
            'project' => 'dialog',
            'datestamp' => '1444384150',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.0-alpha6',
        ),
        'dialog_user' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/dialog/modules/dialog_user/dialog_user.module',
          'basename' => 'dialog_user.module',
          'name' => 'dialog_user',
          'info' => 
          array (
            'name' => 'Dialog User',
            'description' => 'Moves various user actions into interactive overlays.',
            'package' => 'Dialog',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'dialog',
              1 => 'user',
            ),
            'version' => '7.x-2.0-alpha6',
            'project' => 'dialog',
            'datestamp' => '1444384150',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.0-alpha6',
        ),
        'dialog_node' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/dialog/modules/dialog_node/dialog_node.module',
          'basename' => 'dialog_node.module',
          'name' => 'dialog_node',
          'info' => 
          array (
            'name' => 'Dialog Node',
            'description' => 'Moves various node actions into interactive overlays.',
            'package' => 'Dialog',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'dialog',
              1 => 'node',
            ),
            'version' => '7.x-2.0-alpha6',
            'project' => 'dialog',
            'datestamp' => '1444384150',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.0-alpha6',
        ),
        'dialog' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/dialog/dialog.module',
          'basename' => 'dialog.module',
          'name' => 'dialog',
          'info' => 
          array (
            'name' => 'Dialog',
            'description' => 'Provides an API for opening content in an interactive overlay.',
            'package' => 'Dialog',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'jquery_update',
            ),
            'files' => 
            array (
              0 => 'dialog.test',
            ),
            'version' => '7.x-2.0-alpha6',
            'project' => 'dialog',
            'datestamp' => '1444384150',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.0-alpha6',
        ),
        'views_load_more' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/views_load_more/views_load_more.module',
          'basename' => 'views_load_more.module',
          'name' => 'views_load_more',
          'info' => 
          array (
            'name' => 'Views Load More',
            'description' => 'A pager plugin for views. Gives users the option to add a \'more\' button to a view and have the results appended to existing results being displayed.',
            'core' => '7.x',
            'package' => 'Views',
            'dependencies' => 
            array (
              0 => 'views',
            ),
            'files' => 
            array (
              0 => 'views_load_more.views.inc',
              1 => 'views_plugin_pager_load_more.inc',
            ),
            'version' => '7.x-1.5',
            'project' => 'views_load_more',
            'datestamp' => '1412631229',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.5',
        ),
        'smartcrop' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/smartcrop/smartcrop.module',
          'basename' => 'smartcrop.module',
          'name' => 'smartcrop',
          'info' => 
          array (
            'name' => 'SmartCrop',
            'description' => 'Crops low-entropy parts of the image.',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'image',
            ),
            'package' => 'Image',
            'files' => 
            array (
              0 => 'imageapi_gd.inc',
              1 => 'smartcrop.install',
              2 => 'smartcrop.module',
              3 => 'smartcrop.effects.inc',
              4 => 'tests/smartcrop.test',
            ),
            'version' => '7.x-1.0-beta2',
            'project' => 'smartcrop',
            'datestamp' => '1291750843',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-beta2',
        ),
        'oembedembedly' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/oembed/oembedembedly/oembedembedly.module',
          'basename' => 'oembedembedly.module',
          'name' => 'oembedembedly',
          'info' => 
          array (
            'package' => 'oEmbed',
            'name' => 'oEmbed Embed.ly',
            'description' => 'Provides definitions for all of Embed.ly:s providers',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'oembed',
            ),
            'version' => '7.x-1.0-rc2+15-dev',
            'project' => 'oembed',
            'datestamp' => '1446047075',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc2+15-dev',
        ),
        'oembedprovider' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/oembed/oembedprovider/oembedprovider.module',
          'basename' => 'oembedprovider.module',
          'name' => 'oembedprovider',
          'info' => 
          array (
            'package' => 'oEmbed',
            'name' => 'oEmbed Provider',
            'description' => 'Turns your site into a oEmbed provider',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'oembed',
            ),
            'files' => 
            array (
              0 => 'oembedprovider.inc',
              1 => 'oembedprovider.module',
              2 => 'oembedprovider.test',
            ),
            'version' => '7.x-1.0-rc2+15-dev',
            'project' => 'oembed',
            'datestamp' => '1446047075',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.0-rc2+15-dev',
        ),
        'oembed' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/oembed/oembed.module',
          'basename' => 'oembed.module',
          'name' => 'oembed',
          'info' => 
          array (
            'package' => 'oEmbed',
            'name' => 'oEmbed',
            'description' => 'Common functionality for oEmbed client and provider',
            'core' => '7.x',
            'configure' => 'admin/config/media/oembed',
            'dependencies' => 
            array (
              0 => 'ctools',
            ),
            'files' => 
            array (
              0 => 'oembed.module',
              1 => 'theme/oembed.theme.inc',
              2 => 'oembed.test',
              3 => 'OEmbedStreamWrapper.inc',
              4 => 'MediaInternetOEmbedHandler.inc',
            ),
            'version' => '7.x-1.0-rc2+15-dev',
            'project' => 'oembed',
            'datestamp' => '1446047075',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.0-rc2+15-dev',
        ),
        'views_litepager' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/views_litepager/views_litepager.module',
          'basename' => 'views_litepager.module',
          'name' => 'views_litepager',
          'info' => 
          array (
            'name' => 'Views Litepager',
            'description' => 'Provide a pager plugin for Views that doesn\'t require an expensive count query',
            'dependencies' => 
            array (
              0 => 'views',
            ),
            'core' => '7.x',
            'package' => 'Views',
            'files' => 
            array (
              0 => 'views_litepager_plugin_pager_lite.inc',
            ),
            'version' => '7.x-3.0',
            'project' => 'views_litepager',
            'datestamp' => '1335573365',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.0',
        ),
        'mollom' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/mollom/mollom.module',
          'basename' => 'mollom.module',
          'name' => 'mollom',
          'info' => 
          array (
            'name' => 'Mollom',
            'description' => 'Automatically moderates user-submitted content and protects your site from spam and profanity.',
            'core' => '7.x',
            'configure' => 'admin/config/content/mollom',
            'test_dependencies' => 
            array (
              0 => 'ctools',
            ),
            'stylesheets' => 
            array (
              'all' => 
              array (
                0 => 'mollom.css',
              ),
            ),
            'files' => 
            array (
              0 => 'includes/mollom.class.inc',
              1 => 'mollom.drupal.inc',
              2 => 'tests/mollom.test',
              3 => 'tests/mollom.class.test',
            ),
            'version' => '7.x-2.15',
            'project' => 'mollom',
            'datestamp' => '1445608450',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7215',
          'version' => '7.x-2.15',
        ),
        'rate_slider' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/rate/slider/rate_slider.module',
          'basename' => 'rate_slider.module',
          'name' => 'rate_slider',
          'info' => 
          array (
            'name' => 'Rate Slider',
            'description' => 'Add a slider widget type',
            'core' => '7.x',
            'package' => 'Voting',
            'dependencies' => 
            array (
              0 => 'rate',
            ),
            'version' => '7.x-1.7',
            'project' => 'rate',
            'datestamp' => '1392071605',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'rate_expiration' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/rate/expiration/rate_expiration.module',
          'basename' => 'rate_expiration.module',
          'name' => 'rate_expiration',
          'info' => 
          array (
            'name' => 'Rate Expiration',
            'description' => 'Add an expiration time to rate widgets',
            'core' => '7.x',
            'package' => 'Voting',
            'dependencies' => 
            array (
              0 => 'rate',
              1 => 'date',
            ),
            'files' => 
            array (
              0 => 'rate_expiration.install',
              1 => 'rate_expiration.module',
            ),
            'version' => '7.x-1.7',
            'project' => 'rate',
            'datestamp' => '1392071605',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.7',
        ),
        'rate' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/rate/rate.module',
          'basename' => 'rate.module',
          'name' => 'rate',
          'info' => 
          array (
            'name' => 'Rate',
            'description' => 'Flexible voting options for nodes and comments',
            'core' => '7.x',
            'package' => 'Voting',
            'dependencies' => 
            array (
              0 => 'votingapi',
            ),
            'files' => 
            array (
              0 => 'rate.install',
              1 => 'rate.module',
              2 => 'rate.results.inc',
              3 => 'rate.hooks.inc',
              4 => 'rate.admin.inc',
            ),
            'version' => '7.x-1.7',
            'project' => 'rate',
            'datestamp' => '1392071605',
            'php' => '5.2.4',
          ),
          'schema_version' => '7102',
          'version' => '7.x-1.7',
        ),
        'entityreference_behavior_example' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/entityreference/examples/entityreference_behavior_example/entityreference_behavior_example.module',
          'basename' => 'entityreference_behavior_example.module',
          'name' => 'entityreference_behavior_example',
          'info' => 
          array (
            'name' => 'Entity Reference Behavior Example',
            'description' => 'Provides some example code for implementing Entity Reference behaviors.',
            'core' => '7.x',
            'package' => 'Fields',
            'dependencies' => 
            array (
              0 => 'entityreference',
            ),
            'version' => '7.x-1.1',
            'project' => 'entityreference',
            'datestamp' => '1384973110',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.1',
        ),
        'entityreference' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/entityreference/entityreference.module',
          'basename' => 'entityreference.module',
          'name' => 'entityreference',
          'info' => 
          array (
            'name' => 'Entity Reference',
            'description' => 'Provides a field that can reference other entities.',
            'core' => '7.x',
            'package' => 'Fields',
            'dependencies' => 
            array (
              0 => 'entity',
              1 => 'ctools',
            ),
            'files' => 
            array (
              0 => 'entityreference.migrate.inc',
              1 => 'plugins/selection/abstract.inc',
              2 => 'plugins/selection/views.inc',
              3 => 'plugins/behavior/abstract.inc',
              4 => 'views/entityreference_plugin_display.inc',
              5 => 'views/entityreference_plugin_style.inc',
              6 => 'views/entityreference_plugin_row_fields.inc',
              7 => 'tests/entityreference.handlers.test',
              8 => 'tests/entityreference.taxonomy.test',
              9 => 'tests/entityreference.admin.test',
              10 => 'tests/entityreference.feeds.test',
            ),
            'version' => '7.x-1.1',
            'project' => 'entityreference',
            'datestamp' => '1384973110',
            'php' => '5.2.4',
          ),
          'schema_version' => '7002',
          'version' => '7.x-1.1',
        ),
        'menu_attributes' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/menu_attributes/menu_attributes.module',
          'basename' => 'menu_attributes.module',
          'name' => 'menu_attributes',
          'info' => 
          array (
            'name' => 'Menu attributes',
            'description' => 'Allows administrators to specify custom attributes for menu items.',
            'dependencies' => 
            array (
              0 => 'menu',
            ),
            'core' => '7.x',
            'configure' => 'admin/structure/menu/settings',
            'files' => 
            array (
              0 => 'menu_attributes.test',
            ),
            'version' => '7.x-1.0-rc3',
            'project' => 'menu_attributes',
            'datestamp' => '1413756231',
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.0-rc3',
        ),
        'gravatar' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/gravatar/gravatar.module',
          'basename' => 'gravatar.module',
          'name' => 'gravatar',
          'info' => 
          array (
            'name' => 'Gravatar',
            'description' => 'Integrate Gravatar pictures registered at Gravatar.com in Drupal sites',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'gravatar.module',
              1 => 'gravatar.install',
              2 => 'gravatar.admin.inc',
            ),
            'configure' => 'admin/config/people/gravatar',
            'version' => '7.x-1.1+5-dev',
            'project' => 'gravatar',
            'datestamp' => '1446047081',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '6000',
          'version' => '7.x-1.1+5-dev',
        ),
        'jquery_update' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/jquery_update/jquery_update.module',
          'basename' => 'jquery_update.module',
          'name' => 'jquery_update',
          'info' => 
          array (
            'name' => 'jQuery Update',
            'description' => 'Update jQuery and jQuery UI to a more recent version.',
            'package' => 'User interface',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'jquery_update.module',
              1 => 'jquery_update.install',
            ),
            'configure' => 'admin/config/development/jquery_update',
            'version' => '7.x-2.7',
            'project' => 'jquery_update',
            'datestamp' => '1445379855',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-2.7',
        ),
        'rules_scheduler' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/rules/rules_scheduler/rules_scheduler.module',
          'basename' => 'rules_scheduler.module',
          'name' => 'rules_scheduler',
          'info' => 
          array (
            'name' => 'Rules Scheduler',
            'description' => 'Schedule the execution of Rules components using actions.',
            'dependencies' => 
            array (
              0 => 'rules',
            ),
            'package' => 'Rules',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'rules_scheduler.admin.inc',
              1 => 'rules_scheduler.module',
              2 => 'rules_scheduler.install',
              3 => 'rules_scheduler.rules.inc',
              4 => 'rules_scheduler.test',
              5 => 'includes/rules_scheduler.handler.inc',
              6 => 'includes/rules_scheduler.views_default.inc',
              7 => 'includes/rules_scheduler.views.inc',
              8 => 'includes/rules_scheduler_views_filter.inc',
            ),
            'version' => '7.x-2.9',
            'project' => 'rules',
            'datestamp' => '1426527210',
            'php' => '5.2.4',
          ),
          'schema_version' => '7204',
          'version' => '7.x-2.9',
        ),
        'rules_admin' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/rules/rules_admin/rules_admin.module',
          'basename' => 'rules_admin.module',
          'name' => 'rules_admin',
          'info' => 
          array (
            'name' => 'Rules UI',
            'description' => 'Administrative interface for managing rules.',
            'package' => 'Rules',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'rules_admin.module',
              1 => 'rules_admin.inc',
            ),
            'dependencies' => 
            array (
              0 => 'rules',
            ),
            'version' => '7.x-2.9',
            'project' => 'rules',
            'datestamp' => '1426527210',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.9',
        ),
        'rules_i18n' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/rules/rules_i18n/rules_i18n.module',
          'basename' => 'rules_i18n.module',
          'name' => 'rules_i18n',
          'info' => 
          array (
            'name' => 'Rules translation',
            'description' => 'Allows translating rules.',
            'dependencies' => 
            array (
              0 => 'rules',
              1 => 'i18n_string',
            ),
            'package' => 'Multilingual - Internationalization',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'rules_i18n.i18n.inc',
              1 => 'rules_i18n.rules.inc',
              2 => 'rules_i18n.test',
            ),
            'version' => '7.x-2.9',
            'project' => 'rules',
            'datestamp' => '1426527210',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-2.9',
        ),
        'rules' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/rules/rules.module',
          'basename' => 'rules.module',
          'name' => 'rules',
          'info' => 
          array (
            'name' => 'Rules',
            'description' => 'React on events and conditionally evaluate actions.',
            'package' => 'Rules',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'rules.features.inc',
              1 => 'tests/rules.test',
              2 => 'includes/faces.inc',
              3 => 'includes/rules.core.inc',
              4 => 'includes/rules.event.inc',
              5 => 'includes/rules.processor.inc',
              6 => 'includes/rules.plugins.inc',
              7 => 'includes/rules.state.inc',
              8 => 'includes/rules.dispatcher.inc',
              9 => 'modules/node.eval.inc',
              10 => 'modules/php.eval.inc',
              11 => 'modules/rules_core.eval.inc',
              12 => 'modules/system.eval.inc',
              13 => 'ui/ui.controller.inc',
              14 => 'ui/ui.core.inc',
              15 => 'ui/ui.data.inc',
              16 => 'ui/ui.plugins.inc',
            ),
            'dependencies' => 
            array (
              0 => 'entity_token',
              1 => 'entity',
            ),
            'version' => '7.x-2.9',
            'project' => 'rules',
            'datestamp' => '1426527210',
            'php' => '5.2.4',
          ),
          'schema_version' => '7214',
          'version' => '7.x-2.9',
        ),
        'r4032login' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/r4032login/r4032login.module',
          'basename' => 'r4032login.module',
          'name' => 'r4032login',
          'info' => 
          array (
            'name' => 'Redirect 403 to User Login',
            'description' => 'Redirect anonymous users from 403 Access Denied pages to the /user/login page.',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'r4032login.install',
              1 => 'r4032login.module',
            ),
            'configure' => 'admin/config/system/site-information',
            'version' => '7.x-1.8',
            'project' => 'r4032login',
            'datestamp' => '1407782030',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7000',
          'version' => '7.x-1.8',
        ),
        'token' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/token/token.module',
          'basename' => 'token.module',
          'name' => 'token',
          'info' => 
          array (
            'name' => 'Token',
            'description' => 'Provides a user interface for the Token API and some missing core tokens.',
            'core' => '7.x',
            'files' => 
            array (
              0 => 'token.test',
            ),
            'version' => '7.x-1.6',
            'project' => 'token',
            'datestamp' => '1425149060',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7001',
          'version' => '7.x-1.6',
        ),
        'views_field_view' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/views_field_view/views_field_view.module',
          'basename' => 'views_field_view.module',
          'name' => 'views_field_view',
          'info' => 
          array (
            'name' => 'Views Field View',
            'description' => 'Embeds a view inside a view as field',
            'core' => '7.x',
            'package' => 'Views',
            'dependencies' => 
            array (
              0 => 'views',
            ),
            'files' => 
            array (
              0 => 'views_field_view_handler_field_view.inc',
              1 => 'tests/views_field_view.test',
            ),
            'version' => '7.x-1.2',
            'project' => 'views_field_view',
            'datestamp' => '1442561052',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.2',
        ),
        'entity_embed' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/entity_embed/entity_embed.module',
          'basename' => 'entity_embed.module',
          'name' => 'entity_embed',
          'info' => 
          array (
            'name' => 'Entity Embed',
            'description' => 'Integrates with CKEditor to allow any entity to be embedded within a text area.',
            'package' => 'Media',
            'core' => '7.x',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'editor_ckeditor',
              2 => 'dialog',
              3 => 'entity',
              4 => 'entityreference',
              5 => 'filter',
              6 => 'jquery_update',
            ),
            'test_dependencies' => 
            array (
              0 => 'media',
              1 => 'uuid',
            ),
            'files' => 
            array (
              0 => 'includes/EntityEmbedEntityNotFoundException.inc',
              1 => 'includes/EntityEmbedRecursiveRenderingException.inc',
              2 => 'entity_embed.test',
            ),
            'configure' => 'admin/config/content/embed-button',
            'version' => '',
            'project' => 'entity_embed',
            'datestamp' => '1446047083',
            'php' => '5.2.4',
          ),
          'schema_version' => '7301',
          'version' => '',
        ),
        'entityreference_prepopulate' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/entityreference_prepopulate/entityreference_prepopulate.module',
          'basename' => 'entityreference_prepopulate.module',
          'name' => 'entityreference_prepopulate',
          'info' => 
          array (
            'name' => 'Entity reference prepopulate',
            'description' => 'Prepopulate entity reference values from URL.',
            'core' => '7.x',
            'package' => 'Fields',
            'dependencies' => 
            array (
              0 => 'entityreference',
            ),
            'files' => 
            array (
              0 => 'entityreference_prepopulate.test',
            ),
            'version' => '7.x-1.5',
            'project' => 'entityreference_prepopulate',
            'datestamp' => '1392845305',
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-1.5',
        ),
        'actions_permissions' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/views_bulk_operations/actions_permissions.module',
          'basename' => 'actions_permissions.module',
          'name' => 'actions_permissions',
          'info' => 
          array (
            'name' => 'Actions permissions (VBO)',
            'description' => 'Provides permission-based access control for actions. Used by Views Bulk Operations.',
            'package' => 'Administration',
            'core' => '7.x',
            'version' => '7.x-3.3',
            'project' => 'views_bulk_operations',
            'datestamp' => '1435764542',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.3',
        ),
        'views_bulk_operations' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/views_bulk_operations/views_bulk_operations.module',
          'basename' => 'views_bulk_operations.module',
          'name' => 'views_bulk_operations',
          'info' => 
          array (
            'name' => 'Views Bulk Operations',
            'description' => 'Provides a way of selecting multiple rows and applying operations to them.',
            'dependencies' => 
            array (
              0 => 'entity',
              1 => 'views',
            ),
            'package' => 'Views',
            'core' => '7.x',
            'php' => '5.2.9',
            'files' => 
            array (
              0 => 'plugins/operation_types/base.class.php',
              1 => 'views/views_bulk_operations_handler_field_operations.inc',
            ),
            'version' => '7.x-3.3',
            'project' => 'views_bulk_operations',
            'datestamp' => '1435764542',
          ),
          'schema_version' => 0,
          'version' => '7.x-3.3',
        ),
        'votingapi' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/modules/contrib/votingapi/votingapi.module',
          'basename' => 'votingapi.module',
          'name' => 'votingapi',
          'info' => 
          array (
            'name' => 'Voting API',
            'description' => 'Provides a shared voting API for other modules.',
            'package' => 'Voting',
            'core' => '7.x',
            'configure' => 'admin/config/search/votingapi',
            'files' => 
            array (
              0 => 'tests/votingapi.test',
              1 => 'views/votingapi_views_handler_field_value.inc',
              2 => 'views/votingapi_views_handler_sort_nullable.inc',
              3 => 'views/votingapi_views_handler_relationship.inc',
            ),
            'version' => '7.x-2.12',
            'project' => 'votingapi',
            'datestamp' => '1407995929',
            'dependencies' => 
            array (
            ),
            'php' => '5.2.4',
          ),
          'schema_version' => '7203',
          'version' => '7.x-2.12',
        ),
      ),
      'themes' => 
      array (
        'commons_origins' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/themes/commons/commons_origins/commons_origins.info',
          'basename' => 'commons_origins.info',
          'name' => 'Commons Origins',
          'info' => 
          array (
            'name' => 'Commons Origins',
            'description' => 'The default theme for <a href="http://drupal.org/project/commons">Drupal Commons 3.x</a>.',
            'core' => '7.x',
            'base theme' => 'adaptivetheme',
            'release' => '7.x-3.x',
            'engine' => 'phptemplate',
            'screenshot' => 'screenshot.png',
            'stylesheets' => 
            array (
              'screen' => 
              array (
                0 => 'css/global.base.css',
                1 => 'css/global.styles.css',
              ),
              'print' => 
              array (
                0 => 'css/print.css',
              ),
            ),
            'ie_stylesheets' => 
            array (
              'screen' => 
              array (
                '(lt IE 9)&(!IEMobile 7)' => 
                array (
                  0 => 'css/lt-ie9.css',
                ),
              ),
            ),
            'breakpoints' => 
            array (
              'Commons small portrait' => 'only screen and (max-width:320px)',
              'Commons small landscape' => 'only screen and (min-width:321px) and (max-width:480px)',
              'Commons medium portrait' => 'only screen and (min-width:481px) and (max-width:768px)',
              'Commons medium landscape' => 'only screen and (min-width:769px) and (max-width:934px',
              'Commons large' => 'only screen and (min-width:935px)',
            ),
            'scripts' => 
            array (
              0 => 'scripts/modernizr.js',
              1 => 'scripts/syze.min.js',
              2 => 'scripts/commons_origins.js',
            ),
            'regions' => 
            array (
              'sidebar_first' => 'Sidebar first',
              'sidebar_second' => 'Sidebar second',
              'content' => 'Main Content',
              'highlighted' => 'Highlighted',
              'content_aside' => 'Aside',
              'secondary_content' => 'Secondary',
              'tertiary_content' => 'Tertiary',
              'footer' => 'Footer',
              'header' => 'Header',
              'menu_bar' => 'Menu Bar',
              'help' => 'Help',
              'page_top' => 'Page top',
              'page_bottom' => 'Page bottom',
            ),
            'features' => 
            array (
              0 => 'logo',
              1 => 'name',
              2 => 'slogan',
              3 => 'node_user_picture',
              4 => 'comment_user_picture',
              5 => 'comment_user_verification',
              6 => 'favicon',
              7 => 'main_menu',
              8 => 'secondary_menu',
            ),
            'settings' => 
            array (
              'bigscreen_layout' => 'three_col_grail',
              'bigscreen_page_unit' => 'px',
              'bigscreen_sidebar_unit' => 'px',
              'bigscreen_max_width_unit' => 'px',
              'bigscreen_page_width' => '935',
              'bigscreen_sidebar_first' => '285',
              'bigscreen_sidebar_second' => '285',
              'bigscreen_set_max_width' => '1',
              'bigscreen_max_width' => '935',
              'bigscreen_media_query' => 'only screen and (min-width:935px)',
              'tablet_landscape_layout' => 'three_col_grail',
              'tablet_landscape_page_unit' => '%',
              'tablet_landscape_sidebar_unit' => '%',
              'tablet_landscape_page_width' => '100',
              'tablet_landscape_sidebar_first' => '20',
              'tablet_landscape_sidebar_second' => '20',
              'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:934px)',
              'tablet_portrait_layout' => 'one_col_vert',
              'tablet_portrait_page_unit' => '%',
              'tablet_portrait_sidebar_unit' => '%',
              'tablet_portrait_page_width' => '100',
              'tablet_portrait_sidebar_first' => '50',
              'tablet_portrait_sidebar_second' => '50',
              'tablet_portrait_media_query' => 'only screen and (min-width:481px) and (max-width:768px)',
              'smartphone_landscape_layout' => 'one_col_vert',
              'smartphone_landscape_page_unit' => '%',
              'smartphone_landscape_sidebar_unit' => '%',
              'smartphone_landscape_page_width' => '100',
              'smartphone_landscape_sidebar_first' => '50',
              'smartphone_landscape_sidebar_second' => '50',
              'smartphone_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:480px)',
              'smartphone_portrait_layout' => 'one_col_stack',
              'smartphone_portrait_page_unit' => '%',
              'smartphone_portrait_sidebar_unit' => '%',
              'smartphone_portrait_page_width' => '100',
              'smartphone_portrait_sidebar_first' => '100',
              'smartphone_portrait_sidebar_second' => '100',
              'smartphone_portrait_media_query' => 'only screen and (max-width:320px)',
              'bigscreen_two_50' => 'two-50',
              'bigscreen_two_33_66' => 'two-33-66',
              'bigscreen_two_66_33' => 'two-66-33',
              'bigscreen_two_brick' => 'two-brick',
              'bigscreen_three_3x33' => 'three-3x33',
              'bigscreen_three_25_50_25' => 'three-25-50-25',
              'bigscreen_three_25_25_50' => 'three-25-25-50',
              'bigscreen_three_50_25_25' => 'three-50-25-25',
              'bigscreen_four_4x25' => 'four-4x25',
              'bigscreen_five_5x20' => 'five-5x20-2x3-grid',
              'bigscreen_six_6x16' => 'six-6x16-3x2-grid',
              'bigscreen_three_inset_left' => 'three-inset-left',
              'bigscreen_three_inset_right' => 'three-inset-right',
              'tablet_landscape_two_50' => 'two-50',
              'tablet_landscape_two_33_66' => 'two-33-66',
              'tablet_landscape_two_66_33' => 'two-66-33',
              'tablet_landscape_two_brick' => 'two-brick',
              'tablet_landscape_three_3x33' => 'three-3x33',
              'tablet_landscape_three_25_50_25' => 'three-25-50-25',
              'tablet_landscape_three_25_25_50' => 'three-25-25-50',
              'tablet_landscape_three_50_25_25' => 'three-50-25-25',
              'tablet_landscape_four_4x25' => 'four-4x25',
              'tablet_landscape_five_5x20' => 'five-5x20-2x3-grid',
              'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
              'tablet_landscape_three_inset_left' => 'three-inset-left',
              'tablet_landscape_three_inset_right' => 'three-inset-right',
              'tablet_portrait_two_50' => 'two-50',
              'tablet_portrait_two_33_66' => 'two-33-66',
              'tablet_portrait_two_66_33' => 'two-66-33',
              'tablet_portrait_two_brick' => 'two-brick',
              'tablet_portrait_three_3x33' => 'three-3x33-stack-top',
              'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
              'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
              'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-top',
              'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
              'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
              'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
              'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
              'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
              'smartphone_landscape_two_50' => 'two-50-stack',
              'smartphone_landscape_two_33_66' => 'two-33-66-stack',
              'smartphone_landscape_two_66_33' => 'two-66-33-stack',
              'smartphone_landscape_two_brick' => 'two-brick-stack',
              'smartphone_landscape_three_3x33' => 'three-3x33-stack',
              'smartphone_landscape_three_25_50_25' => 'three-25-50-25-stack',
              'smartphone_landscape_three_25_25_50' => 'three-25-25-50-stack',
              'smartphone_landscape_three_50_25_25' => 'three-50-25-25-stack',
              'smartphone_landscape_four_4x25' => 'four-4x25-stack',
              'smartphone_landscape_five_5x20' => 'five-5x20-stack',
              'smartphone_landscape_six_6x16' => 'six-6x16-stack',
              'smartphone_landscape_three_inset_left' => 'three-inset-left-stack',
              'smartphone_landscape_three_inset_right' => 'three-inset-right-stack',
              'disable_responsive_styles' => '0',
              'enable_custom_media_queries' => '1',
              'global_default_layout' => 'smartphone-portrait',
              'global_default_layout_toggle' => '0',
              'global_files_path' => 'public_files',
              'load_html5js' => '1',
              'load_respondjs' => '0',
              'load_ltie8css' => '0',
              'load_scalefixjs' => '0',
              'expose_regions' => '0',
              'load_all_panels' => '0',
              'load_all_panels_no_sidebars' => '0',
              'show_window_size' => '0',
              'rebuild_theme_data' => '0',
              'enable_extensions' => '0',
              'enable_font_settings' => '0',
              'enable_heading_settings' => '0',
              'enable_image_settings' => '0',
              'enable_apple_touch_icons' => '0',
              'enable_exclude_css' => '0',
              'enable_custom_css' => '0',
              'enable_context_regions' => '0',
              'enable_float_region_blocks' => '0',
              'enable_markup_overides' => '0',
              'base_font_type' => '<none>',
              'site_name_font_type' => '<none>',
              'site_slogan_font_type' => '<none>',
              'page_title_font_type' => '<none>',
              'node_title_font_type' => '<none>',
              'comment_title_font_type' => '<none>',
              'block_title_font_type' => '<none>',
              'main_menu_font_type' => '<none>',
              'secondary_menu_font_type' => '<none>',
              'block_menu_font_type' => '<none>',
              'selectors_font_type' => '<none>',
              'content_headings_h1h4_font_type' => '<none>',
              'content_headings_h5h6_font_type' => '<none>',
              'base_font_size' => '<none>',
              'site_name_font_size' => '<none>',
              'site_slogan_font_size' => '<none>',
              'page_title_font_size' => '<none>',
              'node_title_font_size' => '<none>',
              'comment_title_font_size' => '<none>',
              'block_title_font_size' => '<none>',
              'main_menu_font_size' => '<none>',
              'secondary_menu_font_size' => '<none>',
              'block_menu_font_size' => '<none>',
              'h1_font_size' => '2em',
              'h2_font_size' => '1.6em',
              'h3_font_size' => '1.4em',
              'h4_font_size' => '1.2em',
              'h5_font_size' => '1em',
              'h6_font_size' => '1em',
              'page_title_case' => 'ptc-n',
              'page_title_weight' => 'ptw-b',
              'page_title_alignment' => 'pta-l',
              'page_title_shadow' => 'pts-n',
              'node_title_case' => 'ntc-n',
              'node_title_weight' => 'ntw-b',
              'node_title_alignment' => 'nta-l',
              'node_title_shadow' => 'nts-n',
              'comment_title_case' => 'ctc-n',
              'comment_title_weight' => 'ctw-b',
              'comment_title_alignment' => 'cta-l',
              'comment_title_shadow' => 'cts-n',
              'block_title_case' => 'btc-n',
              'block_title_weight' => 'btw-b',
              'block_title_alignment' => 'bta-l',
              'block_title_shadow' => 'bts-n',
              'image_alignment' => 'ia-n',
              'image_alignment_teaser' => 'iat-n',
              'image_caption_full' => '0',
              'image_caption_teaser' => '0',
              'image_teaser' => '0',
              'breadcrumb_display' => '1',
              'breadcrumb_home' => '0',
              'breadcrumb_label' => '0',
              'breadcrumb_title' => '0',
              'breadcrumb_separator' => ' &#187; ',
              'horizontal_login_block_enable' => 'on',
              'horizontal_login_block' => '0',
              'login_block_remove_links' => '0',
              'login_block_remove_openid' => '0',
              'global_gutter_width' => '',
              'page_full_width_wrappers' => '0',
              'page_content_type_suggestions' => '0',
              'menu_item_span_elements' => '0',
              'extra_page_classes' => '1',
              'extra_article_classes' => '1',
              'extra_comment_classes' => '1',
              'extra_block_classes' => '1',
              'extra_menu_classes' => '1',
              'extra_item_list_classes' => '1',
              'comments_hide_title' => '0',
              'feed_icons' => '0',
              'unset_block_system_main_front' => '0',
              'unset_menu_titles' => '0',
              'skip_link_target' => '#main-content',
              'adv_search_extra_fieldsets' => '0',
              'rel_author' => '0',
              'mobile_friendly_metatags' => '1',
              'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1',
              'adaptivetheme_meta_mobileoptimized' => 'width',
              'adaptivetheme_meta_handheldfriendly' => 'true',
              'adaptivetheme_meta_apple_mobile_web_app_capable' => 'yes',
              'chrome_edge' => '1',
              'clear_type' => '1',
              'apple_touch_icon_enable' => '0',
              'apple_touch_icon_path_l' => 'images/touch-icon-l.png',
              'apple_touch_icon_path_m' => 'images/touch-icon-m.png',
              'apple_touch_icon_path_h' => 'images/touch-icon-h.png',
              'custom_css' => '',
            ),
            'version' => '7.x-3.32',
            'project' => 'commons',
            'datestamp' => '1446047047',
          ),
          'version' => '7.x-3.32',
        ),
        'sky' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/themes/contrib/sky/sky.info',
          'basename' => 'sky.info',
          'name' => 'Sky',
          'info' => 
          array (
            'name' => 'Sky',
            'description' => 'A minimal, re-colorable theme for Drupal 7 that uses HTML5 and <a title="Rocking the hardest since 2006" href="http://drupal.org/project/adaptivetheme">Adaptivetheme 7.x-3.x</a> base theme.',
            'core' => '7.x',
            'release' => '7.x-3.x',
            'engine' => 'phptemplate',
            'base theme' => 'adaptivetheme',
            'screenshot' => 'screenshot.png',
            'stylesheets' => 
            array (
              'all' => 
              array (
                0 => 'css/html-elements.css',
                1 => 'css/forms.css',
                2 => 'css/tables.css',
                3 => 'css/page.css',
                4 => 'css/articles.css',
                5 => 'css/comments.css',
                6 => 'css/fields.css',
                7 => 'css/blocks.css',
                8 => 'css/navigation.css',
                9 => 'color/colors.css',
                10 => 'css/sky.settings.style.css',
              ),
              'print' => 
              array (
                0 => 'css/print.css',
              ),
            ),
            'scripts' => 
            array (
              0 => 'js/scripts.js',
            ),
            'regions' => 
            array (
              'sidebar_first' => 'Sidebar first',
              'sidebar_second' => 'Sidebar second',
              'top_menu' => 'Top menu bar',
              'header' => 'Header',
              'menu_bar' => 'Menu Bar',
              'help' => 'Help',
              'highlighted' => 'Highlighted',
              'content' => 'Main content',
              'content_aside' => 'Content bottom',
              'secondary_content' => 'Secondary content',
              'tertiary_content' => 'Tertiary content',
              'footer' => 'Footer',
              'collapsible' => 'Collapsible',
              'page_top' => 'Page top',
              'page_bottom' => 'Page bottom',
              'three_33_top' => 'AT Three column 3x33 - top',
              'three_33_first' => 'AT Three column 3x33 - left',
              'three_33_second' => 'AT Three column 3x33 - center',
              'three_33_third' => 'AT Three column 3x33 - right',
              'three_33_bottom' => 'AT Three column 3x33 - bottom',
              'four_first' => 'AT Four column 4x25 - 1',
              'four_second' => 'AT Four column 4x25 - 2',
              'four_third' => 'AT Four column 4x25 - 3',
              'four_fourth' => 'AT Four column 4x25 - 4',
            ),
            'features' => 
            array (
              0 => 'logo',
              1 => 'name',
              2 => 'slogan',
              3 => 'node_user_picture',
              4 => 'comment_user_picture',
              5 => 'comment_user_verification',
              6 => 'favicon',
            ),
            'settings' => 
            array (
              'toggle_logo' => '1',
              'toggle_name' => '1',
              'toggle_slogan' => '1',
              'toggle_node_user_picture' => '1',
              'toggle_comment_user_picture' => '1',
              'toggle_comment_user_verification' => '1',
              'toggle_favicon' => '1',
              'bigscreen_layout' => 'three_col_grail',
              'bigscreen_page_unit' => '%',
              'bigscreen_sidebar_unit' => '%',
              'bigscreen_max_width_unit' => 'px',
              'bigscreen_page_width' => '100',
              'bigscreen_sidebar_first' => '25',
              'bigscreen_sidebar_second' => '25',
              'bigscreen_set_max_width' => '1',
              'bigscreen_max_width' => '1140',
              'bigscreen_media_query' => 'only screen and (min-width:1025px)',
              'tablet_landscape_layout' => 'three_col_grail',
              'tablet_landscape_page_unit' => '%',
              'tablet_landscape_sidebar_unit' => '%',
              'tablet_landscape_page_width' => '100',
              'tablet_landscape_sidebar_first' => '20',
              'tablet_landscape_sidebar_second' => '20',
              'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
              'tablet_portrait_layout' => 'one_col_vert',
              'tablet_portrait_page_unit' => '%',
              'tablet_portrait_sidebar_unit' => '%',
              'tablet_portrait_page_width' => '100',
              'tablet_portrait_sidebar_first' => '50',
              'tablet_portrait_sidebar_second' => '50',
              'tablet_portrait_media_query' => 'only screen and (min-width:481px) and (max-width:768px)',
              'smartphone_landscape_layout' => 'one_col_vert',
              'smartphone_landscape_page_unit' => '%',
              'smartphone_landscape_sidebar_unit' => '%',
              'smartphone_landscape_page_width' => '100',
              'smartphone_landscape_sidebar_first' => '50',
              'smartphone_landscape_sidebar_second' => '50',
              'smartphone_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:480px)',
              'smartphone_portrait_layout' => 'one_col_stack',
              'smartphone_portrait_page_unit' => '%',
              'smartphone_portrait_sidebar_unit' => '%',
              'smartphone_portrait_page_width' => '100',
              'smartphone_portrait_sidebar_first' => '100',
              'smartphone_portrait_sidebar_second' => '100',
              'smartphone_portrait_media_query' => 'only screen and (max-width:320px)',
              'bigscreen_two_50' => 'two-50',
              'bigscreen_two_33_66' => 'two-33-66',
              'bigscreen_two_66_33' => 'two-66-33',
              'bigscreen_two_brick' => 'two-brick',
              'bigscreen_three_3x33' => 'three-3x33',
              'bigscreen_three_25_50_25' => 'three-25-50-25',
              'bigscreen_three_25_25_50' => 'three-25-25-50',
              'bigscreen_three_50_25_25' => 'three-50-25-25',
              'bigscreen_four_4x25' => 'four-4x25',
              'bigscreen_five_5x20' => 'five-5x20-2x3-grid',
              'bigscreen_six_6x16' => 'six-6x16-3x2-grid',
              'bigscreen_three_inset_left' => 'three-inset-left',
              'bigscreen_three_inset_right' => 'three-inset-right',
              'tablet_landscape_two_50' => 'two-50',
              'tablet_landscape_two_33_66' => 'two-33-66',
              'tablet_landscape_two_66_33' => 'two-66-33',
              'tablet_landscape_two_brick' => 'two-brick',
              'tablet_landscape_three_3x33' => 'three-3x33',
              'tablet_landscape_three_25_50_25' => 'three-25-50-25',
              'tablet_landscape_three_25_25_50' => 'three-25-25-50',
              'tablet_landscape_three_50_25_25' => 'three-50-25-25',
              'tablet_landscape_four_4x25' => 'four-4x25',
              'tablet_landscape_five_5x20' => 'five-5x20-2x3-grid',
              'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
              'tablet_landscape_three_inset_left' => 'three-inset-left',
              'tablet_landscape_three_inset_right' => 'three-inset-right',
              'tablet_portrait_two_50' => 'two-50',
              'tablet_portrait_two_33_66' => 'two-33-66',
              'tablet_portrait_two_66_33' => 'two-66-33',
              'tablet_portrait_two_brick' => 'two-brick',
              'tablet_portrait_three_3x33' => 'three-3x33-stack-top',
              'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
              'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
              'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-top',
              'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
              'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
              'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
              'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
              'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
              'smartphone_landscape_two_50' => 'two-50-stack',
              'smartphone_landscape_two_33_66' => 'two-33-66-stack',
              'smartphone_landscape_two_66_33' => 'two-66-33-stack',
              'smartphone_landscape_two_brick' => 'two-brick-stack',
              'smartphone_landscape_three_3x33' => 'three-3x33-stack',
              'smartphone_landscape_three_25_50_25' => 'three-25-50-25-stack',
              'smartphone_landscape_three_25_25_50' => 'three-25-25-50-stack',
              'smartphone_landscape_three_50_25_25' => 'three-50-25-25-stack',
              'smartphone_landscape_four_4x25' => 'four-4x25-stack',
              'smartphone_landscape_five_5x20' => 'five-5x20-stack',
              'smartphone_landscape_six_6x16' => 'six-6x16-stack',
              'smartphone_landscape_three_inset_left' => 'three-inset-left-stack',
              'smartphone_landscape_three_inset_right' => 'three-inset-right-stack',
              'disable_responsive_styles' => '0',
              'enable_custom_media_queries' => '1',
              'global_default_layout' => 'smartphone-portrait',
              'global_default_layout_toggle' => '0',
              'global_files_path' => 'public_files',
              'load_html5js' => '1',
              'load_respondjs' => '0',
              'load_ltie8css' => '0',
              'load_scalefixjs' => '0',
              'expose_regions' => '0',
              'load_all_panels' => '0',
              'load_all_panels_no_sidebars' => '0',
              'show_window_size' => '0',
              'rebuild_theme_data' => '0',
              'enable_extensions' => '1',
              'enable_font_settings' => '1',
              'enable_heading_settings' => '1',
              'enable_image_settings' => '1',
              'enable_apple_touch_icons' => '0',
              'enable_exclude_css' => '0',
              'enable_custom_css' => '0',
              'enable_context_regions' => '0',
              'enable_float_region_blocks' => '0',
              'enable_markup_overides' => '1',
              'base_font_type' => '',
              'site_name_font_type' => '',
              'site_slogan_font_type' => '',
              'page_title_font_type' => '',
              'node_title_font_type' => '',
              'comment_title_font_type' => '',
              'block_title_font_type' => '',
              'base_font' => 'bf-sss',
              'site_name_font' => 'snf-sl',
              'site_slogan_font' => 'ssf-sl',
              'main_menu_font' => 'mmf-sl',
              'page_title_font' => 'ptf-sl',
              'node_title_font' => 'ntf-sl',
              'comment_title_font' => 'ctf-sl',
              'block_title_font' => 'btf-sl',
              'base_font_size' => '1em',
              'site_name_font_size' => '2em',
              'site_slogan_font_size' => '1.2em',
              'page_title_font_size' => '2em',
              'node_title_font_size' => '1.6em',
              'comment_title_font_size' => '1.4em',
              'block_title_font_size' => '1.4em',
              'h1_font_size' => '2em',
              'h2_font_size' => '1.6em',
              'h3_font_size' => '1.4em',
              'h4_font_size' => '1.2em',
              'h5_font_size' => '1em',
              'h6_font_size' => '1em',
              'page_title_case' => 'ptc-n',
              'page_title_weight' => 'ptw-b',
              'page_title_alignment' => 'pta-l',
              'page_title_shadow' => 'pts-n',
              'node_title_case' => 'ntc-n',
              'node_title_weight' => 'ntw-b',
              'node_title_alignment' => 'nta-l',
              'node_title_shadow' => 'nts-n',
              'comment_title_case' => 'ctc-n',
              'comment_title_weight' => 'ctw-b',
              'comment_title_alignment' => 'cta-l',
              'comment_title_shadow' => 'cts-n',
              'block_title_case' => 'btc-n',
              'block_title_weight' => 'btw-b',
              'block_title_alignment' => 'bta-l',
              'block_title_shadow' => 'bts-n',
              'image_alignment' => 'ia-n',
              'image_alignment_teaser' => 'iat-n',
              'image_caption_full' => '0',
              'image_caption_teaser' => '0',
              'image_teaser' => '0',
              'breadcrumb_display' => '1',
              'breadcrumb_home' => '0',
              'breadcrumb_label' => '0',
              'breadcrumb_title' => '0',
              'breadcrumb_separator' => ' &#187; ',
              'horizontal_login_block_enable' => 'on',
              'horizontal_login_block' => '0',
              'login_block_remove_links' => '0',
              'login_block_remove_openid' => '0',
              'global_gutter_width' => '',
              'page_full_width_wrappers' => '0',
              'page_content_type_suggestions' => '0',
              'menu_item_span_elements' => '0',
              'extra_page_classes' => '1',
              'extra_article_classes' => '1',
              'extra_comment_classes' => '1',
              'extra_block_classes' => '1',
              'extra_menu_classes' => '1',
              'extra_item_list_classes' => '1',
              'comments_hide_title' => '0',
              'feed_icons' => '0',
              'unset_block_system_main_front' => '0',
              'unset_menu_titles' => '0',
              'skip_link_target' => '#main-content',
              'adv_search_extra_fieldsets' => '0',
              'mobile_friendly_metatags' => '1',
              'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1',
              'adaptivetheme_meta_mobileoptimized' => 'width',
              'adaptivetheme_meta_handheldfriendly' => 'true',
              'adaptivetheme_meta_apple_mobile_web_app_capable' => 'yes',
              'chrome_edge' => '0',
              'clear_type' => '0',
              'apple_touch_icon_enable' => '0',
              'apple_touch_icon_path_l' => 'images/touch-icon-l.png',
              'apple_touch_icon_path_m' => 'images/touch-icon-m.png',
              'apple_touch_icon_path_h' => 'images/touch-icon-h.png',
              'custom_css' => '',
              'content_corner_radius' => 'rc-6',
              'tabs_corner_radius' => 'rct-6',
              'box_shadows' => 'bs-n',
              'body_background' => 'bb-n',
              'menu_bullets' => 'mb-dd',
              'menu_bar_position' => 'mbp-l',
            ),
            'version' => '7.x-3.0',
            'project' => 'sky',
            'datestamp' => '1395577162',
          ),
          'version' => '7.x-3.0',
        ),
        'adaptivetheme_subtheme' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/themes/contrib/adaptivetheme/at_subtheme/adaptivetheme_subtheme.info',
          'basename' => 'adaptivetheme_subtheme.info',
          'name' => 'AT Subtheme',
          'info' => 
          array (
            'name' => 'AT Subtheme',
            'description' => 'Copy this subtheme to get started - see the <b><a href="http://adaptivethemes.com/documentation/adaptivethemes-documentation" target="_blank" title="Adaptivethemes.com - Rocking the hardest since 2006">documentation</a></b> for guidence or the included README. Drush users can generate a new theme using the command: drush adaptivetheme. If you need help please use the <b><a href="http://drupal.org/project/issues/adaptivetheme" target="_blank">issue queue</a></b> or ask in the IRC channel: <b><a href="irc://irc.freenode.net/drupal-adaptivetheme">#drupal-adaptivetheme</a></b>.',
            'core' => '7.x',
            'base theme' => 'adaptivetheme',
            'release' => '7.x-3.x',
            'engine' => 'phptemplate',
            'screenshot' => 'screenshot.png',
            'stylesheets' => 
            array (
              'screen' => 
              array (
                0 => 'css/global.base.css',
                1 => 'css/global.styles.css',
              ),
            ),
            'regions' => 
            array (
              'sidebar_first' => 'Sidebar first',
              'sidebar_second' => 'Sidebar second',
              'content' => 'Main Content',
              'highlighted' => 'Highlighted',
              'content_aside' => 'Aside',
              'secondary_content' => 'Secondary',
              'tertiary_content' => 'Tertiary',
              'footer' => 'Footer',
              'leaderboard' => 'Leaderboard',
              'header' => 'Header',
              'menu_bar' => 'Menu Bar',
              'help' => 'Help',
              'page_top' => 'Page top',
              'page_bottom' => 'Page bottom',
            ),
            'features' => 
            array (
              0 => 'logo',
              1 => 'name',
              2 => 'slogan',
              3 => 'node_user_picture',
              4 => 'comment_user_picture',
              5 => 'comment_user_verification',
              6 => 'favicon',
              7 => 'main_menu',
              8 => 'secondary_menu',
            ),
            'settings' => 
            array (
              'toggle_logo' => '1',
              'toggle_name' => '1',
              'toggle_slogan' => '1',
              'toggle_node_user_picture' => '1',
              'toggle_comment_user_picture' => '1',
              'toggle_comment_user_verification' => '1',
              'toggle_favicon' => '1',
              'toggle_main_menu' => '1',
              'toggle_secondary_menu' => '1',
              'bigscreen_layout' => 'three_col_grail',
              'bigscreen_page_unit' => '%',
              'bigscreen_sidebar_unit' => '%',
              'bigscreen_max_width_unit' => 'px',
              'bigscreen_page_width' => '100',
              'bigscreen_sidebar_first' => '25',
              'bigscreen_sidebar_second' => '25',
              'bigscreen_set_max_width' => '1',
              'bigscreen_max_width' => '1140',
              'bigscreen_media_query' => 'only screen and (min-width:1025px)',
              'tablet_landscape_layout' => 'three_col_grail',
              'tablet_landscape_page_unit' => '%',
              'tablet_landscape_sidebar_unit' => '%',
              'tablet_landscape_page_width' => '100',
              'tablet_landscape_sidebar_first' => '20',
              'tablet_landscape_sidebar_second' => '20',
              'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
              'tablet_portrait_layout' => 'one_col_vert',
              'tablet_portrait_page_unit' => '%',
              'tablet_portrait_sidebar_unit' => '%',
              'tablet_portrait_page_width' => '100',
              'tablet_portrait_sidebar_first' => '50',
              'tablet_portrait_sidebar_second' => '50',
              'tablet_portrait_media_query' => 'only screen and (min-width:581px) and (max-width:768px)',
              'smalltouch_landscape_layout' => 'one_col_vert',
              'smalltouch_landscape_page_unit' => '%',
              'smalltouch_landscape_sidebar_unit' => '%',
              'smalltouch_landscape_page_width' => '100',
              'smalltouch_landscape_sidebar_first' => '50',
              'smalltouch_landscape_sidebar_second' => '50',
              'smalltouch_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:580px)',
              'smalltouch_portrait_layout' => 'one_col_stack',
              'smalltouch_portrait_page_unit' => '%',
              'smalltouch_portrait_sidebar_unit' => '%',
              'smalltouch_portrait_page_width' => '100',
              'smalltouch_portrait_sidebar_first' => '100',
              'smalltouch_portrait_sidebar_second' => '100',
              'smalltouch_portrait_media_query' => 'only screen and (max-width:320px)',
              'bigscreen_two_50' => 'two-50',
              'bigscreen_two_33_66' => 'two-33-66',
              'bigscreen_two_66_33' => 'two-66-33',
              'bigscreen_two_brick' => 'two-brick',
              'bigscreen_three_3x33' => 'three-3x33',
              'bigscreen_three_25_50_25' => 'three-25-50-25',
              'bigscreen_three_25_25_50' => 'three-25-25-50',
              'bigscreen_three_50_25_25' => 'three-50-25-25',
              'bigscreen_four_4x25' => 'four-4x25',
              'bigscreen_five_5x20' => 'five-5x20-2x3-grid',
              'bigscreen_six_6x16' => 'six-6x16-3x2-grid',
              'bigscreen_three_inset_left' => 'three-inset-left',
              'bigscreen_three_inset_right' => 'three-inset-right',
              'tablet_landscape_two_50' => 'two-50',
              'tablet_landscape_two_33_66' => 'two-33-66',
              'tablet_landscape_two_66_33' => 'two-66-33',
              'tablet_landscape_two_brick' => 'two-brick',
              'tablet_landscape_three_3x33' => 'three-3x33',
              'tablet_landscape_three_25_50_25' => 'three-25-50-25',
              'tablet_landscape_three_25_25_50' => 'three-25-25-50',
              'tablet_landscape_three_50_25_25' => 'three-50-25-25',
              'tablet_landscape_four_4x25' => 'four-4x25',
              'tablet_landscape_five_5x20' => 'five-5x20',
              'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
              'tablet_landscape_three_inset_left' => 'three-inset-left',
              'tablet_landscape_three_inset_right' => 'three-inset-right',
              'tablet_portrait_two_50' => 'two-50',
              'tablet_portrait_two_33_66' => 'two-33-66',
              'tablet_portrait_two_66_33' => 'two-66-33',
              'tablet_portrait_two_brick' => 'two-brick',
              'tablet_portrait_three_3x33' => 'three-3x33-stack-top',
              'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
              'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
              'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-top',
              'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
              'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
              'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
              'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
              'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
              'smalltouch_landscape_two_50' => 'two-50-stack',
              'smalltouch_landscape_two_33_66' => 'two-33-66-stack',
              'smalltouch_landscape_two_66_33' => 'two-66-33-stack',
              'smalltouch_landscape_two_brick' => 'two-brick-stack',
              'smalltouch_landscape_three_3x33' => 'three-3x33-stack',
              'smalltouch_landscape_three_25_50_25' => 'three-25-50-25-stack',
              'smalltouch_landscape_three_25_25_50' => 'three-25-25-50-stack',
              'smalltouch_landscape_three_50_25_25' => 'three-50-25-25-stack',
              'smalltouch_landscape_four_4x25' => 'four-4x25-stack',
              'smalltouch_landscape_five_5x20' => 'five-5x20-stack',
              'smalltouch_landscape_six_6x16' => 'six-6x16-stack',
              'smalltouch_landscape_three_inset_left' => 'three-inset-left-stack',
              'smalltouch_landscape_three_inset_right' => 'three-inset-right-stack',
              'disable_responsive_styles' => '0',
              'enable_custom_media_queries' => '1',
              'global_default_layout' => 'smalltouch-portrait',
              'global_default_layout_toggle' => '0',
              'global_files_path' => 'public_files',
              'load_html5js' => '1',
              'load_respondjs' => '0',
              'load_ltie8css' => '0',
              'load_scalefixjs' => '0',
              'expose_regions' => '0',
              'load_all_panels' => '0',
              'load_all_panels_no_sidebars' => '0',
              'show_window_size' => '0',
              'rebuild_theme_data' => '0',
              'enable_extensions' => '0',
              'enable_font_settings' => '0',
              'enable_heading_settings' => '0',
              'enable_image_settings' => '0',
              'enable_apple_touch_icons' => '0',
              'enable_exclude_css' => '0',
              'enable_custom_css' => '0',
              'enable_context_regions' => '0',
              'enable_float_region_blocks' => '0',
              'enable_markup_overides' => '0',
              'base_font_type' => '<none>',
              'site_name_font_type' => '<none>',
              'site_slogan_font_type' => '<none>',
              'page_title_font_type' => '<none>',
              'node_title_font_type' => '<none>',
              'comment_title_font_type' => '<none>',
              'block_title_font_type' => '<none>',
              'main_menu_font_type' => '<none>',
              'secondary_menu_font_type' => '<none>',
              'block_menu_font_type' => '<none>',
              'selectors_font_type' => '<none>',
              'content_headings_h1h4_font_type' => '<none>',
              'content_headings_h5h6_font_type' => '<none>',
              'base_font_size' => '<none>',
              'site_name_font_size' => '<none>',
              'site_slogan_font_size' => '<none>',
              'page_title_font_size' => '<none>',
              'node_title_font_size' => '<none>',
              'comment_title_font_size' => '<none>',
              'block_title_font_size' => '<none>',
              'main_menu_font_size' => '<none>',
              'secondary_menu_font_size' => '<none>',
              'block_menu_font_size' => '<none>',
              'h1_font_size' => '2em',
              'h2_font_size' => '1.6em',
              'h3_font_size' => '1.4em',
              'h4_font_size' => '1.2em',
              'h5_font_size' => '1em',
              'h6_font_size' => '1em',
              'site_name_case' => 'snc-n',
              'site_name_weight' => 'snw-b',
              'site_name_alignment' => 'sna-l',
              'site_name_shadow' => 'sns-n',
              'site_slogan_case' => 'ssc-n',
              'site_slogan_weight' => 'ssw-b',
              'site_slogan_alignment' => 'ssa-l',
              'site_slogan_shadow' => 'sss-n',
              'page_title_case' => 'ptc-n',
              'page_title_weight' => 'ptw-b',
              'page_title_alignment' => 'pta-l',
              'page_title_shadow' => 'pts-n',
              'node_title_case' => 'ntc-n',
              'node_title_weight' => 'ntw-b',
              'node_title_alignment' => 'nta-l',
              'node_title_shadow' => 'nts-n',
              'comment_title_case' => 'ctc-n',
              'comment_title_weight' => 'ctw-b',
              'comment_title_alignment' => 'cta-l',
              'comment_title_shadow' => 'cts-n',
              'block_title_case' => 'btc-n',
              'block_title_weight' => 'btw-b',
              'block_title_alignment' => 'bta-l',
              'block_title_shadow' => 'bts-n',
              'image_alignment' => 'ia-n',
              'image_alignment_teaser' => 'iat-n',
              'image_caption_full' => '0',
              'image_caption_teaser' => '0',
              'image_teaser' => '0',
              'breadcrumb_display' => '1',
              'breadcrumb_home' => '0',
              'breadcrumb_label' => '0',
              'breadcrumb_title' => '0',
              'breadcrumb_separator' => ' &#187; ',
              'horizontal_login_block_enable' => 'on',
              'horizontal_login_block' => '0',
              'login_block_remove_links' => '0',
              'login_block_remove_openid' => '0',
              'user_block_user_name' => '1',
              'global_gutter_width' => '',
              'page_full_width_wrappers' => '0',
              'page_content_type_suggestions' => '0',
              'menu_item_span_elements' => '0',
              'extra_page_classes' => '1',
              'extra_article_classes' => '1',
              'extra_comment_classes' => '1',
              'extra_block_classes' => '1',
              'extra_menu_classes' => '1',
              'extra_item_list_classes' => '1',
              'comments_hide_title' => '0',
              'feed_icons' => '0',
              'unset_block_system_main_front' => '0',
              'unset_menu_titles' => '0',
              'skip_link_target' => '#main-content',
              'adv_search_extra_fieldsets' => '0',
              'rel_author' => '0',
              'menu_toggle_tablet_portrait' => '1',
              'menu_toggle_tablet_landscape' => '0',
              'menu_toggle_main_menu' => '1',
              'menu_toggle_secondary_menu' => '1',
              'menu_toggle_leaderboard' => '0',
              'menu_toggle_header' => '0',
              'menu_toggle_menu_bar' => '1',
              'menu_toggle_main_menu_title' => 'Main menu',
              'menu_toggle_secondary_menu_title' => 'User menu',
              'mobile_friendly_metatags' => '1',
              'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1.0, user-scalable=yes',
              'adaptivetheme_meta_mobileoptimized' => 'width',
              'adaptivetheme_meta_handheldfriendly' => 'true',
              'adaptivetheme_meta_apple_mobile_web_app_capable' => 'yes',
              'adaptivetheme_meta_ie_document_mode' => '',
              'adaptivetheme_meta_clear_type' => '0',
              'apple_touch_icon_enable' => '0',
              'icon_path_default' => 'images/default-60x60.png',
              'apple_touch_icon_path_ipad' => 'images/ipad-standard-76x76.png',
              'apple_touch_icon_path_iphone_retina' => 'images/iphone-retina-120x120.png',
              'apple_touch_icon_path_ipad_retina' => 'images/ipad-retina-152x152.png',
              'icon_rel' => '0',
              'custom_css' => '',
            ),
            'version' => '7.x-3.2+1-dev',
            'project' => 'adaptivetheme',
            'datestamp' => '1446047068',
          ),
          'version' => '7.x-3.2+1-dev',
        ),
        'adaptivetheme' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/themes/contrib/adaptivetheme/at_core/adaptivetheme.info',
          'basename' => 'adaptivetheme.info',
          'name' => 'AT Core',
          'info' => 
          array (
            'name' => 'AT Core',
            'description' => 'AT Core is the framework that drives the responsive layout system and provides an extensive set of tools for theme development. You do not need to enable this theme. Use the provided AT Subtheme to get started.',
            'core' => '7.x',
            'release' => '7.x-3.x',
            'engine' => 'phptemplate',
            'screenshot' => 'screenshot.png',
            'stylesheets' => 
            array (
              'screen' => 
              array (
                0 => 'css/at.layout.css',
              ),
            ),
            'unset_core' => 
            array (
              'modules/aggregator/aggregator.css' => 'aggregator.css',
              'modules/block/block.css' => 'block.css',
              'modules/book/book.css' => 'book.css',
              'modules/color/color.css' => 'color.css',
              'modules/comment/comment.css' => 'comment.css',
              'modules/contextual/contextual.css' => 'contextual.css',
              'modules/dashboard/dashboard.css' => 'dashboard.css',
              'modules/dblog/dblog.css' => 'dblog.css',
              'modules/field/theme/field.css' => 'field.css',
              'modules/field_ui/field_ui.css' => 'field_ui.css',
              'modules/file/file.css' => 'file.css',
              'modules/filter/filter.css' => 'filter.css',
              'modules/forum/forum.css' => 'forum.css',
              'modules/help/help.css' => 'help.css',
              'modules/image/image.admin.css' => 'image.admin.css',
              'modules/image/image.css' => 'image.css',
              'modules/locale/locale.css' => 'locale.css',
              'modules/menu/menu.css' => 'menu.css',
              'modules/node/node.css' => 'node.css',
              'modules/openid/openid.css' => 'openid.css',
              'modules/poll/poll.css' => 'poll.css',
              'modules/profile/profile.css' => 'profile.css',
              'modules/search/search.css' => 'search.css',
              'modules/shortcut/shortcut.admin.css' => 'shortcut.admin.css',
              'modules/shortcut/shortcut.css' => 'shortcut.css',
              'modules/simpletest/simpletest.css' => 'simpletest.css',
              'modules/system/system.admin.css' => 'system.admin.css',
              'modules/system/system.base.css' => 'system.base.css',
              'modules/system/system.maintenance.css' => 'system.maintenance.css',
              'modules/system/system.menus.css' => 'system.menus.css',
              'modules/system/system.messages.css' => 'system.messages.css',
              'modules/system/system.theme.css' => 'system.theme.css',
              'modules/taxonomy/taxonomy.css' => 'taxonomy.css',
              'modules/toolbar/toolbar.css' => 'toolbar.css',
              'modules/tracker/tracker.css' => 'tracker.css',
              'modules/update/update.css' => 'update.css',
              'modules/user/user.css' => 'user.css',
            ),
            'regions' => 
            array (
              'sidebar_first' => 'Sidebar first',
              'sidebar_second' => 'Sidebar second',
              'content' => 'Main Content',
              'highlighted' => 'Highlighted',
              'content_aside' => 'Aside',
              'secondary_content' => 'Secondary',
              'tertiary_content' => 'Tertiary',
              'footer' => 'Footer',
              'leaderboard' => 'Leaderboard',
              'header' => 'Header',
              'menu_bar' => 'Menu Bar',
              'help' => 'Help',
              'page_top' => 'Page top',
              'page_bottom' => 'Page bottom',
            ),
            'plugins' => 
            array (
              'page_layout' => 
              array (
                'layouts' => 'layouts/core',
              ),
              'panels' => 
              array (
                'layouts' => 'layouts/panels',
              ),
            ),
            'settings' => 
            array (
              'bigscreen_layout' => 'three_col_grail',
              'bigscreen_page_unit' => '%',
              'bigscreen_sidebar_unit' => '%',
              'bigscreen_max_width_unit' => 'px',
              'bigscreen_page_width' => '100',
              'bigscreen_sidebar_first' => '25',
              'bigscreen_sidebar_second' => '25',
              'bigscreen_set_max_width' => '1',
              'bigscreen_max_width' => '1140',
              'bigscreen_media_query' => 'only screen and (min-width:1025px)',
              'tablet_landscape_layout' => 'three_col_grail',
              'tablet_landscape_page_unit' => '%',
              'tablet_landscape_sidebar_unit' => '%',
              'tablet_landscape_page_width' => '100',
              'tablet_landscape_sidebar_first' => '20',
              'tablet_landscape_sidebar_second' => '20',
              'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
              'tablet_portrait_layout' => 'one_col_vert',
              'tablet_portrait_page_unit' => '%',
              'tablet_portrait_sidebar_unit' => '%',
              'tablet_portrait_page_width' => '100',
              'tablet_portrait_sidebar_first' => '50',
              'tablet_portrait_sidebar_second' => '50',
              'tablet_portrait_media_query' => 'only screen and (min-width:581px) and (max-width:768px)',
              'smalltouch_landscape_layout' => 'one_col_vert',
              'smalltouch_landscape_page_unit' => '%',
              'smalltouch_landscape_sidebar_unit' => '%',
              'smalltouch_landscape_page_width' => '100',
              'smalltouch_landscape_sidebar_first' => '50',
              'smalltouch_landscape_sidebar_second' => '50',
              'smalltouch_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:580px)',
              'smalltouch_portrait_layout' => 'one_col_stack',
              'smalltouch_portrait_page_unit' => '%',
              'smalltouch_portrait_sidebar_unit' => '%',
              'smalltouch_portrait_page_width' => '100',
              'smalltouch_portrait_sidebar_first' => '100',
              'smalltouch_portrait_sidebar_second' => '100',
              'smalltouch_portrait_media_query' => 'only screen and (max-width:320px)',
              'bigscreen_two_50' => 'two-50',
              'bigscreen_two_33_66' => 'two-33-66',
              'bigscreen_two_66_33' => 'two-66-33',
              'bigscreen_two_brick' => 'two-brick',
              'bigscreen_three_3x33' => 'three-3x33',
              'bigscreen_three_25_50_25' => 'three-25-50-25',
              'bigscreen_three_25_25_50' => 'three-25-25-50',
              'bigscreen_three_50_25_25' => 'three-50-25-25',
              'bigscreen_four_4x25' => 'four-4x25',
              'bigscreen_five_5x20' => 'five-5x20',
              'bigscreen_six_6x16' => 'six-6x16',
              'bigscreen_three_inset_left' => 'three-inset-left',
              'bigscreen_three_inset_right' => 'three-inset-right',
              'tablet_landscape_two_50' => 'two-50',
              'tablet_landscape_two_33_66' => 'two-33-66',
              'tablet_landscape_two_66_33' => 'two-66-33',
              'tablet_landscape_two_brick' => 'two-brick',
              'tablet_landscape_three_3x33' => 'three-3x33',
              'tablet_landscape_three_25_50_25' => 'three-25-50-25',
              'tablet_landscape_three_25_25_50' => 'three-25-25-50',
              'tablet_landscape_three_50_25_25' => 'three-50-25-25',
              'tablet_landscape_four_4x25' => 'four-4x25',
              'tablet_landscape_five_5x20' => 'five-5x20',
              'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
              'tablet_landscape_three_inset_left' => 'three-inset-left',
              'tablet_landscape_three_inset_right' => 'three-inset-right',
              'tablet_portrait_two_50' => 'two-50',
              'tablet_portrait_two_33_66' => 'two-33-66',
              'tablet_portrait_two_66_33' => 'two-66-33',
              'tablet_portrait_two_brick' => 'two-brick',
              'tablet_portrait_three_3x33' => 'three-3x33-stack-top',
              'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
              'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
              'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-top',
              'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
              'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
              'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
              'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
              'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
              'smalltouch_landscape_two_50' => 'two-50-stack',
              'smalltouch_landscape_two_33_66' => 'two-33-66-stack',
              'smalltouch_landscape_two_66_33' => 'two-66-33-stack',
              'smalltouch_landscape_two_brick' => 'two-brick-stack',
              'smalltouch_landscape_three_3x33' => 'three-3x33-stack',
              'smalltouch_landscape_three_25_50_25' => 'three-25-50-25-stack',
              'smalltouch_landscape_three_25_25_50' => 'three-25-25-50-stack',
              'smalltouch_landscape_three_50_25_25' => 'three-50-25-25-stack',
              'smalltouch_landscape_four_4x25' => 'four-4x25-stack',
              'smalltouch_landscape_five_5x20' => 'five-5x20-stack',
              'smalltouch_landscape_six_6x16' => 'six-6x16-stack',
              'smalltouch_landscape_three_inset_left' => 'three-inset-left-stack',
              'smalltouch_landscape_three_inset_right' => 'three-inset-right-stack',
              'disable_responsive_styles' => '0',
              'enable_custom_media_queries' => '1',
              'global_default_layout' => 'smalltouch-portrait',
              'global_default_layout_toggle' => '0',
              'global_files_path' => 'public_files',
              'load_html5js' => '1',
              'load_onmediaqueryjs' => '0',
              'load_respondjs' => '0',
              'load_ltie8css' => '0',
              'load_scalefixjs' => '0',
              'expose_regions' => '0',
              'load_all_panels' => '0',
              'load_all_panels_no_sidebars' => '0',
              'show_window_size' => '0',
              'rebuild_theme_data' => '0',
              'enable_extensions' => '0',
              'enable_font_settings' => '0',
              'enable_heading_settings' => '0',
              'enable_image_settings' => '0',
              'enable_apple_touch_icons' => '0',
              'enable_exclude_css' => '0',
              'enable_custom_css' => '0',
              'enable_context_regions' => '0',
              'enable_float_region_blocks' => '0',
              'enable_markup_overides' => '0',
              'base_font_type' => '<none>',
              'site_name_font_type' => '<none>',
              'site_slogan_font_type' => '<none>',
              'page_title_font_type' => '<none>',
              'node_title_font_type' => '<none>',
              'comment_title_font_type' => '<none>',
              'block_title_font_type' => '<none>',
              'main_menu_font_type' => '<none>',
              'secondary_menu_font_type' => '<none>',
              'block_menu_font_type' => '<none>',
              'selectors_font_type' => '<none>',
              'base_font_size' => '<none>',
              'site_name_font_size' => '<none>',
              'site_slogan_font_size' => '<none>',
              'page_title_font_size' => '<none>',
              'node_title_font_size' => '<none>',
              'comment_title_font_size' => '<none>',
              'block_title_font_size' => '<none>',
              'main_menu_font_size' => '<none>',
              'secondary_menu_font_size' => '<none>',
              'block_menu_font_size' => '<none>',
              'content_headings_h1h4_font_type' => '<none>',
              'content_headings_h5h6_font_type' => '<none>',
              'h1_font_size' => '2em',
              'h2_font_size' => '1.6em',
              'h3_font_size' => '1.4em',
              'h4_font_size' => '1.2em',
              'h5_font_size' => '1em',
              'h6_font_size' => '1em',
              'site_name_case' => 'snc-n',
              'site_name_weight' => 'snw-b',
              'site_name_alignment' => 'sna-l',
              'site_name_shadow' => 'sns-n',
              'site_slogan_case' => 'ssc-n',
              'site_slogan_weight' => 'ssw-b',
              'site_slogan_alignment' => 'ssa-l',
              'site_slogan_shadow' => 'sss-n',
              'page_title_case' => 'ptc-n',
              'page_title_weight' => 'ptw-b',
              'page_title_alignment' => 'pta-l',
              'page_title_shadow' => 'pts-n',
              'node_title_case' => 'ntc-n',
              'node_title_weight' => 'ntw-b',
              'node_title_alignment' => 'nta-l',
              'node_title_shadow' => 'nts-n',
              'comment_title_case' => 'ctc-n',
              'comment_title_weight' => 'ctw-b',
              'comment_title_alignment' => 'cta-l',
              'comment_title_shadow' => 'cts-n',
              'block_title_case' => 'btc-n',
              'block_title_weight' => 'btw-b',
              'block_title_alignment' => 'bta-l',
              'block_title_shadow' => 'bts-n',
              'image_alignment' => 'ia-l',
              'image_alignment_teaser' => 'iat-l',
              'image_caption_full' => '0',
              'image_caption_teaser' => '0',
              'image_teaser' => '0',
              'breadcrumb_display' => '1',
              'breadcrumb_home' => '0',
              'breadcrumb_label' => '0',
              'breadcrumb_title' => '0',
              'breadcrumb_separator' => ' &#187; ',
              'horizontal_login_block_enable' => 'on',
              'horizontal_login_block' => '0',
              'login_block_remove_links' => '0',
              'login_block_remove_openid' => '0',
              'global_gutter_width' => '',
              'page_full_width_wrappers' => '0',
              'page_content_type_suggestions' => '0',
              'menu_item_span_elements' => '0',
              'extra_page_classes' => '1',
              'extra_article_classes' => '1',
              'extra_comment_classes' => '1',
              'extra_block_classes' => '1',
              'extra_menu_classes' => '1',
              'extra_item_list_classes' => '1',
              'comments_hide_title' => '0',
              'feed_icons' => '0',
              'unset_block_system_main_front' => '0',
              'skip_link_target' => '#main-content',
              'adv_search_extra_fieldsets' => '0',
              'rel_author' => '0',
              'mobile_friendly_metatags' => '1',
              'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1.0, user-scalable=yes',
              'adaptivetheme_meta_mobileoptimized' => 'width',
              'adaptivetheme_meta_handheldfriendly' => 'true',
              'adaptivetheme_meta_ie_document_mode' => '',
              'adaptivetheme_meta_clear_type' => '0',
              'apple_touch_icon_enable' => '0',
              'apple_touch_icon_path_l' => '',
              'apple_touch_icon_path_m' => '',
              'apple_touch_icon_path_h' => '',
              'custom_css' => '',
            ),
            'version' => '7.x-3.2+1-dev',
            'project' => 'adaptivetheme',
            'datestamp' => '1446047068',
          ),
          'version' => '7.x-3.2+1-dev',
        ),
        'adaptivetheme_admin' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/themes/contrib/adaptivetheme/at_admin/adaptivetheme_admin.info',
          'basename' => 'adaptivetheme_admin.info',
          'name' => 'AT Admin',
          'info' => 
          array (
            'name' => 'AT Admin',
            'description' => 'A better admin theme for Drupal 7. Clean, calm, invisible. Includes left and right sidebars, Overlay support and all AT\'s theme setting goodies.',
            'core' => '7.x',
            'base theme' => 'adaptivetheme',
            'release' => '7.x-3.x',
            'engine' => 'phptemplate',
            'screenshot' => 'screenshot.png',
            'stylesheets' => 
            array (
              'screen' => 
              array (
                0 => 'css/at_admin.css',
              ),
            ),
            'regions' => 
            array (
              'content' => 'Main content',
              'sidebar_first' => 'Sidebar first',
              'sidebar_second' => 'Sidebar second',
              'highlighted' => 'Highlighted',
              'help' => 'Help',
              'footer' => 'Footer',
              'page_top' => 'Page top',
              'page_bottom' => 'Page bottom',
            ),
            'settings' => 
            array (
              'shortcut_module_link' => '1',
              'bigscreen_layout' => 'three_col_grail',
              'bigscreen_page_unit' => '%',
              'bigscreen_sidebar_unit' => 'px',
              'bigscreen_max_width_unit' => 'px',
              'bigscreen_page_width' => '100',
              'bigscreen_sidebar_first' => '180',
              'bigscreen_sidebar_second' => '180',
              'bigscreen_set_max_width' => '1',
              'bigscreen_max_width' => '1330',
              'bigscreen_media_query' => 'only screen and (min-width:1025px)',
              'tablet_landscape_layout' => 'three_col_grail',
              'tablet_landscape_page_unit' => '%',
              'tablet_landscape_sidebar_unit' => '%',
              'tablet_landscape_page_width' => '100',
              'tablet_landscape_sidebar_first' => '20',
              'tablet_landscape_sidebar_second' => '20',
              'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
              'tablet_portrait_layout' => 'one_col_vert',
              'tablet_portrait_page_unit' => '%',
              'tablet_portrait_sidebar_unit' => '%',
              'tablet_portrait_page_width' => '100',
              'tablet_portrait_sidebar_first' => '50',
              'tablet_portrait_sidebar_second' => '50',
              'tablet_portrait_media_query' => 'only screen and (min-width:581px) and (max-width:768px)',
              'smalltouch_landscape_layout' => 'one_col_vert',
              'smalltouch_landscape_page_unit' => '%',
              'smalltouch_landscape_sidebar_unit' => '%',
              'smalltouch_landscape_page_width' => '100',
              'smalltouch_landscape_sidebar_first' => '50',
              'smalltouch_landscape_sidebar_second' => '50',
              'smalltouch_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:580px)',
              'smalltouch_portrait_layout' => 'one_col_stack',
              'smalltouch_portrait_page_unit' => '%',
              'smalltouch_portrait_sidebar_unit' => '%',
              'smalltouch_portrait_page_width' => '100',
              'smalltouch_portrait_sidebar_first' => '100',
              'smalltouch_portrait_sidebar_second' => '100',
              'smalltouch_portrait_media_query' => 'only screen and (max-width:320px)',
              'bigscreen_two_50' => 'two-50',
              'bigscreen_two_33_66' => 'two-33-66',
              'bigscreen_two_66_33' => 'two-66-33',
              'bigscreen_two_brick' => 'two-brick',
              'bigscreen_three_3x33' => 'three-3x33',
              'bigscreen_three_25_50_25' => 'three-25-50-25',
              'bigscreen_three_25_25_50' => 'three-25-25-50',
              'bigscreen_three_50_25_25' => 'three-50-25-25',
              'bigscreen_four_4x25' => 'four-4x25',
              'bigscreen_five_5x20' => 'five-5x20',
              'bigscreen_six_6x16' => 'six-6x16',
              'bigscreen_three_inset_left' => 'three-inset-left',
              'bigscreen_three_inset_right' => 'three-inset-right',
              'tablet_landscape_two_50' => 'two-50',
              'tablet_landscape_two_33_66' => 'two-33-66',
              'tablet_landscape_two_66_33' => 'two-66-33',
              'tablet_landscape_two_brick' => 'two-brick',
              'tablet_landscape_three_3x33' => 'three-3x33',
              'tablet_landscape_three_25_50_25' => 'three-25-50-25',
              'tablet_landscape_three_25_25_50' => 'three-25-25-50',
              'tablet_landscape_three_50_25_25' => 'three-50-25-25',
              'tablet_landscape_four_4x25' => 'four-4x25',
              'tablet_landscape_five_5x20' => 'five-5x20-2x3-grid',
              'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
              'tablet_landscape_three_inset_left' => 'three-inset-left',
              'tablet_landscape_three_inset_right' => 'three-inset-right',
              'tablet_portrait_two_50' => 'two-50',
              'tablet_portrait_two_33_66' => 'two-33-66',
              'tablet_portrait_two_66_33' => 'two-66-33',
              'tablet_portrait_two_brick' => 'two-brick',
              'tablet_portrait_three_3x33' => 'three-3x33-stack-top',
              'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
              'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
              'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-top',
              'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
              'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
              'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
              'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
              'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
              'smalltouch_landscape_two_50' => 'two-50-stack',
              'smalltouch_landscape_two_33_66' => 'two-33-66-stack',
              'smalltouch_landscape_two_66_33' => 'two-66-33-stack',
              'smalltouch_landscape_two_brick' => 'two-brick-stack',
              'smalltouch_landscape_three_3x33' => 'three-3x33-stack',
              'smalltouch_landscape_three_25_50_25' => 'three-25-50-25-stack',
              'smalltouch_landscape_three_25_25_50' => 'three-25-25-50-stack',
              'smalltouch_landscape_three_50_25_25' => 'three-50-25-25-stack',
              'smalltouch_landscape_four_4x25' => 'four-4x25-stack',
              'smalltouch_landscape_five_5x20' => 'five-5x20-stack',
              'smalltouch_landscape_six_6x16' => 'six-6x16-stack',
              'smalltouch_landscape_three_inset_left' => 'three-inset-left-stack',
              'smalltouch_landscape_three_inset_right' => 'three-inset-right-stack',
              'disable_responsive_styles' => '0',
              'enable_custom_media_queries' => '0',
              'global_default_layout' => 'smalltouch-portrait',
              'global_default_layout_toggle' => '0',
              'global_files_path' => 'public_files',
              'load_html5js' => '1',
              'load_onmediaqueryjs' => '0',
              'load_respondjs' => '0',
              'load_ltie8css' => '0',
              'load_scalefixjs' => '0',
              'expose_regions' => '0',
              'load_all_panels' => '0',
              'load_all_panels_no_sidebars' => '0',
              'show_window_size' => '0',
              'rebuild_theme_data' => '0',
              'enable_extensions' => '1',
              'enable_font_settings' => '0',
              'enable_heading_settings' => '0',
              'enable_image_settings' => '0',
              'enable_apple_touch_icons' => '0',
              'enable_exclude_css' => '0',
              'enable_custom_css' => '0',
              'enable_context_regions' => '0',
              'enable_float_region_blocks' => '0',
              'enable_markup_overides' => '1',
              'base_font_type' => '',
              'site_name_font_type' => '',
              'site_slogan_font_type' => '',
              'page_title_font_type' => '',
              'node_title_font_type' => '',
              'comment_title_font_type' => '',
              'block_title_font_type' => '',
              'base_font' => 'bf-sss',
              'site_name_font' => 'snf-sl',
              'site_slogan_font' => 'ssf-sl',
              'main_menu_font' => 'mmf-sl',
              'page_title_font' => 'ptf-sl',
              'node_title_font' => 'ntf-sl',
              'comment_title_font' => 'ctf-sl',
              'block_title_font' => 'btf-sl',
              'base_font_size' => '1em',
              'site_name_font_size' => '2em',
              'site_slogan_font_size' => '1.2em',
              'page_title_font_size' => '2em',
              'node_title_font_size' => '1.6em',
              'comment_title_font_size' => '1.4em',
              'block_title_font_size' => '1.4em',
              'h1_font_size' => '2em',
              'h2_font_size' => '1.6em',
              'h3_font_size' => '1.4em',
              'h4_font_size' => '1.2em',
              'h5_font_size' => '1em',
              'h6_font_size' => '1em',
              'site_name_case' => 'snc-n',
              'site_name_weight' => 'snw-b',
              'site_name_alignment' => 'sna-l',
              'site_name_shadow' => 'sns-n',
              'site_slogan_case' => 'ssc-n',
              'site_slogan_weight' => 'ssw-b',
              'site_slogan_alignment' => 'ssa-l',
              'site_slogan_shadow' => 'sss-n',
              'page_title_case' => 'ptc-n',
              'page_title_weight' => 'ptw-b',
              'page_title_alignment' => 'pta-l',
              'page_title_shadow' => 'pts-n',
              'node_title_case' => 'ntc-n',
              'node_title_weight' => 'ntw-b',
              'node_title_alignment' => 'nta-l',
              'node_title_shadow' => 'nts-n',
              'comment_title_case' => 'ctc-n',
              'comment_title_weight' => 'ctw-b',
              'comment_title_alignment' => 'cta-l',
              'comment_title_shadow' => 'cts-n',
              'block_title_case' => 'btc-uc',
              'block_title_weight' => 'btw-b',
              'block_title_alignment' => 'bta-l',
              'block_title_shadow' => 'bts-n',
              'image_alignment' => 'ia-l',
              'image_alignment_teaser' => 'iat-l',
              'image_caption_full' => '0',
              'image_caption_teaser' => '0',
              'image_teaser' => '1',
              'breadcrumb_display' => '1',
              'breadcrumb_home' => '1',
              'breadcrumb_label' => '0',
              'breadcrumb_title' => '0',
              'breadcrumb_separator' => ' &#187; ',
              'horizontal_login_block_enable' => 'on',
              'horizontal_login_block' => '0',
              'login_block_remove_links' => '0',
              'login_block_remove_openid' => '0',
              'global_gutter_width' => '',
              'page_full_width_wrappers' => '0',
              'page_content_type_suggestions' => '0',
              'menu_item_span_elements' => '0',
              'extra_page_classes' => '1',
              'extra_article_classes' => '1',
              'extra_comment_classes' => '1',
              'extra_block_classes' => '1',
              'extra_menu_classes' => '1',
              'extra_item_list_classes' => '1',
              'comments_hide_title' => '0',
              'feed_icons' => '0',
              'unset_block_system_main_front' => '0',
              'skip_link_target' => '#main-content',
              'adv_search_extra_fieldsets' => '0',
              'rel_author' => '0',
              'mobile_friendly_metatags' => '1',
              'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1.0, user-scalable=yes',
              'adaptivetheme_meta_mobileoptimized' => 'width',
              'adaptivetheme_meta_handheldfriendly' => 'true',
              'adaptivetheme_meta_apple_mobile_web_app_capable' => 'yes',
              'adaptivetheme_meta_ie_document_mode' => '',
              'adaptivetheme_meta_clear_type' => '0',
              'apple_touch_icon_enable' => '0',
              'apple_touch_icon_path_l' => 'images/touch-icon-l.png',
              'apple_touch_icon_path_m' => 'images/touch-icon-m.png',
              'apple_touch_icon_path_h' => 'images/touch-icon-h.png',
              'custom_css' => '',
            ),
            'features' => 
            array (
              0 => 'logo',
              1 => 'name',
              2 => 'favicon',
              3 => 'main_menu',
              4 => 'secondary_menu',
            ),
            'version' => '7.x-3.2+1-dev',
            'project' => 'adaptivetheme',
            'datestamp' => '1446047068',
          ),
          'version' => '7.x-3.2+1-dev',
        ),
        'ember' => 
        array (
          'filename' => '/data/disk/o1/distro/001/commons-3.32-7.41.1/profiles/commons/themes/contrib/ember/ember.info',
          'basename' => 'ember.info',
          'name' => 'Ember',
          'info' => 
          array (
            'name' => 'Ember',
            'description' => 'A responsive administration theme.',
            'package' => 'Core',
            'version' => '7.x-2.0-alpha4',
            'core' => '7.x',
            'stylesheets' => 
            array (
              'screen' => 
              array (
                0 => 'styles/style.css',
                1 => 'styles/system.base.css',
                2 => 'styles/system.menus.css',
                3 => 'styles/system.theme.css',
                4 => 'styles/system.messages.css',
              ),
            ),
            'settings' => 
            array (
              'shortcut_module_link' => '1',
              'views_ui_override' => '1',
            ),
            'regions' => 
            array (
              'content' => 'Content',
              'help' => 'Help',
              'messages' => 'Messages',
              'page_top' => 'Page top',
              'page_bottom' => 'Page bottom',
              'sidebar_first' => 'First sidebar',
            ),
            'regions_hidden' => 
            array (
              0 => 'sidebar_first',
            ),
            'project' => 'ember',
            'datestamp' => '1443810540',
          ),
          'version' => '7.x-2.0-alpha4',
        ),
      ),
    ),
  ),
);