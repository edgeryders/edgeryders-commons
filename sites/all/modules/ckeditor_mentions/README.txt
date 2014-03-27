<h2>Overview</h2>

This plugin voor CKEDitor will provide 'Facebook-like' mentioning of people in any CKEditor field. Including a suggestion box while you type. This is triggered by typing an '@' character and at least 2 other characters. Names are queried using a view and matched on the realname of the user. When a name is clicked, it will be inserted as a link to the user's profile page (user/#uid).

<h2>Features</h2>

You can override the included view to your needs. For now there is a hard dependency on the realname filter, but we could make this pluggable. This way, suggestions on username would also be possible.

<h2>Requirements</h2>

<ul>
  <li><a href="drupal.org/project/ckeditor">CKEditor</a> module </li>
  <li><a href="http://drupal.org/project/realname">realname</a> module</li>
  <li>This module was tested with CKEditor 4.1.</li>
</ul>

<strong>This plugin works with below browsers</strong>

<ul>
  <li>iPad 1+</li>
  <li>Webkit browsers (Safari, Chrome)</li>
  <li>Firefox</li>
  <li>Internet Exporer 9+</li>
</ul>

<h2>Install</h2>

Enable the module and check the plugin in your ckeditor profile at admin/config/content/ckeditor. Make sure you have users who have 'realnames' using the realname module.

<h2>Support</h2>

Please use the issue queue for any requests or bug reports.

<h2>Related projects</h2>

The <a href="https://drupal.org/project/mentions">mentions</a> module provides an text format input filter that translates @username or @uid strings to URL's. But it does not offer suggestions based on typed characters.

<h2>Credits</h2>

This module is written and maintained by Albert Skibinski (<a href="http://www.merge.nl">Merge</a>) and sponsored by <a href="http://www.siob.nl">SIOB</a> for the <a href="https://www.biebtobieb.nl">biebtobieb.nl</a> project.
