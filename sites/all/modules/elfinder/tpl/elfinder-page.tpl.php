<?php

/**
 * @file
 * elFinder file browser page template
 * Copyright (c) 2010, Alexey Sukhotin
 */
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print isset($language->language) ? $language->language : 'en'; ?>" xml:lang="<?php print isset($language->language) ? $language->language : 'en'; ?>">
<head>
  <title><?php print t('File Browser'); ?></title>
  <?php
    print drupal_get_html_head();
    print elfinder_browser_css();
    print elfinder_browser_js();
  ?>
</head>
<body class="elfinder">
<div id="elfinder-messages"><?php print theme('status_messages');  ?></div>
<div id="finder"></div>
<?php print drupal_get_js('footer'); ?>
</body>
</html>
