Block Attributes
----------------

CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Features
 * Implementation
 * Integration (with other modules)
 * Installation and configuration
 * Useful Resources
 * Troubleshooting (known Theme issues)
 * Developers: Extending the module
 * Future developments
 * Contributions are welcome!!
 * Credits / Contact

Introduction
------------------------------------------------------------------------------
The Block Attributes module allows users to specify additional HTML attributes
for blocks, through the block's configuration interface, such as class, id,
style, title and more.

Following up with a couple of related requests in the Block Class module:
- Add ability to set a block's CSS ID [39]
- Block attributes? [40]

It appeared the ability for users to configure Blocks' HTML ID, classes or
custom styles has been a recurring request (for quite some time).
Therefore, this module attempts to provide a solution for these cases and
support more HTML attributes for blocks.

Since this module is entirely based on the template variables defined in
block.tpl.php (Drupal 7, or your theme block template's variables), make sure
you take a closer look at the Implementation and Troubleshooting paragraphs
below to learn more about known theme compatibility issues.

For developers and themers, it is entirely possible to extend currently
supported attributes or template variables, see paragraph below "Developers:
Extending the module".

Features
------------------------------------------------------------------------------
First, a few concrete use cases for which this module will certainly come in
handy:
- Give a block a specific HTML ID so it can be easily selected using jQuery or
  CSS (Watch out: an HTML ID is supposed to be unique on a page).
- Add additional classes or specific styles to a block or its title.
- Give a block or its title a particular text alignment.
- Add a specific keyboard shortcut for a block on a page.

Block Attributes can be configured globally through an admin settings form [1],
allowing users to define which attributes should be enabled or disabled on each
block's configuration form and their default values for new core blocks [2]
creation (see screenshot of the Block Attributes admin configuration
form [1]).

The module currently supports and allows users to set for each block the
following attributes (per block settings):
- Accesskey
- Align
- Id
- Class
- Style
- Title
Not yet suported: dir, lang, tabindex (see API document[3]).

Through Block Attributes' API [3], developers have the flexibility to add any
number of custom attributes, parameters or properties that could be implemented
at the theme level (displaying custom template variables configurable through
blocks' configuration forms, so possibilities are endless, see section
"Developers: Extending the module").

Implementation
------------------------------------------------------------------------------
Basically, this module is a code mix between the Menu attributes [4] and Block
Class [5] modules, based on the possibilities offered by Drupal block's theme
structure [6] and supported HTML attributes (see "Future developments" for
Drupal 8 and new template or HTML standards).

As more theme variables appeared in Drupal 7's Block template [7] (such as HTML
ID, see Core issues #569362, #306358, other themes issues #1422958 or GDO's
Addition of an attributes array [8] and probably many more discussions/issues),
it appeared more and more theming parameters could potentially be configured
through the interface for more advanced themers' needs.

Currently, the module operates on the following block theme variables (D7) [9]:
(Block scopes/sections in parenthesis)
- Block HTML ID: $block_html_id (Block level attribute).
- Block CSS classes: $classes (Block level attribute).
- Block's other HTML attributes: $attributes (Block level attributes).
- Block title attributes: $title_attributes (Block title attributes).
- Block content attributes: $content_attributes (Block content attributes).

Most of the work had to be done around the database storage, greatly inspired
from Block Class' 7.x-2.x branch [10], creating a new database field where all
the parameters could be saved in a serialized array (since there are multiple
attributes to be saved), very much the same way it is done by Menu Attributes in
the database's 'menu_links.options' field.

Other than changing the orientation of concept towards blocks, overall, module's
API, permissions, admin form (with JS vertical tabs), HTML attributes,
SimpleTests, Scopes/Groups, Panels integration, etc... had all to be slightly
adapted to match closer with Block's theme variables, but in general, most of
Menu attributes [4] and Block Class [5] features could cross-over very nicely
with a great amount of similarities (Some parts could even be re-used almost
exactly "as is", such as for the admin form or the vertical tabs'
block_attributes.js).

Integration (with other modules)
------------------------------------------------------------------------------
For any issues related with the Theme, please check the "Troubleshooting"
paragraph below.
Otherwise, module should integrate properly with other modules for more advanced
setups, such as Display Suite [11]'s block fields, Panels [12] blocks, Context
[13] or Features [14] with Features Extra [15]'s FE Block.

An example of a more advanced setup and integration usage could be displaying a
custom block with custom HTML attributes, through a custom context all of that
imported from code through a custom feature. Since block attributes are defined
as a new field, FE Block makes it possible to export all of blocks' HTML
attributes to code files, making the deployment process easier.

For debugging compatibility issues, it is highly recommended to test a problem
first on a supported theme such as Bartik [16], to ensure it is not a theme
related issue (see "Troubleshooting" below).
To report a compatibility issue, please create a new ticket in the bug tracker
with the component "Compatibility".

Installation and configuration
------------------------------------------------------------------------------
0 - Prerequisites:
Requires the Core Block module to be enabled (see Core modules [17]).

1 - Download the module and copy it into your contributed modules folder:
[for example, your_drupal_path/sites/all/modules] and enable it
from the modules administration/management page (requires the block module to be
enabled).
More information at: Installing contributed modules (Drupal 7) [18].

2 - Configuration:
After successful installation, browse to the Block configuration page, for the
specific block to be customized and directly start configuring block's HTML
attributes (See screenshot [19]).
For example, for the 'Powered by Drupal' block configuration page:
The path would be: admin/structure/block/manage/system/powered-by/configure
and breadcrumb: Home » Administration » Structure » Blocks

3 - Global Configuration (optional):
To define default values for newly created blocks' attributes or enable/disable
certain ones, browse to the Block Attributes settings form page, either by using
the "Configure" link (next to module's name on the modules listing page), or
page's menu link displayed as a tab on the block admin listing page (See
screenshot [1]).
Path: /admin/structure/block/attributes
Home » Administration » Structure » Blocks

Useful Resources
------------------------------------------------------------------------------
Whether developer, site builder or themer, you may be able to find more
information on blocks' theme structure or attributes in the following links:
- W3C's index of the HTML 4 Attributes [20] and HTML 5 Global Attributes [21].
- Drupal Core Block's documentation: Working with blocks (content in regions)
  [2].
- Block Attributes API [3] and README.TXT [22] files.
- [Theming]Working with preprocess and process functions: Setting up variables
  for use in a template [23] and HTML attributes and classes generated through
  theme variables [24].
- Drupal's Block template file: block.tpl.php (D7) [25] and block.html.twig (D8)
  [26]
- Drupal 7 API's block.module [27] and block.tpl.php [9]
- Drupal 8 API's block.module [28] and block.html.twig [29]

Any suggestions of additional resources that would be useful to the community
would be warmly welcome and greatly appreciated.
Feel free to add your suggestions by creating a new ticket in the bug tracker
with the component "Documentation" or re-opening the issue #2461335 with your
comment.

Troubleshooting (known Theme issues)
------------------------------------------------------------------------------
Probably one of the most common issues is related with blocks' configuration
results not being reflected for a given theme, in other words:
The configuration for a block has been saved properly but the configured
attributes are not displaying in the active theme.

To try narrowing down theme issues, a few simple things could be attempted
first, such as flushing browser's and website's caches, checking in the HTML
code for the presence of configured block's HTML attributes or ensuring block's
theme file is not overridden.

Since the module currently operates on the Core block theme variables [9]
$block_html_id, $classes, $attributes, $title_attributes, $content_attributes
(see "Implementation" above), if any of these variables were missing from your
theme's block.tpl.php file, it is very likely some configurations of scopes or
attributes might be dysfunctional.
Therefore, it is highly recommended to use a theme whose block template at least
supports these theme variables.
For example, Zen [30] theme's block.tpl.php [31] doesn't output the
$content_attributes variable, which is why none of the configurations under
Block Content Attributes could be displayed without modifying template's code
(similar issue for the Bootstrap [32] theme and probably many more).

In any case, to report any theme related issue, please create a new ticket in
the bug tracker with the component "Theme".

If any problems arise from using advanced setups, such as blocks displayed
through Panels, DS, Context, FE Block exports, etc... please refer to the
section above named "Integration". For troubleshooting/debugging module
compatibility issues, please test the problem first on a supported theme such as
Bartik [16] (that's been tested and for which we are certain the module works,
eliminating the possibility of being a theme issue).

Developers: Extending the module
------------------------------------------------------------------------------
As mentioned above, it is possible to add any custom attribute, restricted or
not to a section of a block (block, title, content) by leveraging module's API
[3].

For example, by implementing a hook_block_attribute_info, a new drop-down select
could be added in the Block Attributes fieldset for every block's configuration
form, allowing users to select some custom values through the interface. The
values could then be retrieved at any point (with a block_load) [33], by
accessing the options property: $block->options['attribute_example']. The value
could then be output through a custom theme variable, added with a
[THEME]_preprocess_block function in the active theme folder's template.php file
(for more information see template_preprocess_block [34],
block_attributes_preprocess_block [35] and "[Theming]Working with preprocess and
process functions" in the "Useful Resources"). Lastly, the theme variable would
have to be printed in the HTML markup of the active template's block.tpl.php.

Comments, discussions, examples, cases, issues or patches related with
implementations of module's API hooks would be highly welcome and greatly
appreciated.

Future developments
------------------------------------------------------------------------------
Module is subject to changes and restrictions from the W3C and HTML Standards
(see W3C's links to HTML 4 and 5 attributes in the "Useful Resources").

Among some of the features that could probably be supported but haven't been
tested/developed yet, adding more properties, such as the dir, lang, title
attributes or suffix/prefix (as needed) and further extending attributes in
general. Additionally, allowing users to enable/disable certain scopes/groups,
could also be an interesting feature since it appears numerous contributed
themes made the choice to ignore certain theme variables (see
"Troubleshooting"'s Zen example).

Drupal 8's version would most likely require a major rework to support HTML5's
attributes, markup and the new theme structure [26]. The updating process from
D7 to D8 (if there is ever any, other than manual, especially due to theme and
HTML standards changes), might require some work as well, not to mention
extensive testing.

Down the road, perhaps, this module could be merged into a global module
(drupal_attributes or entity_attributes) that could hold all attributes related
modules for node, menu, block, user, etc... especially with D8's new
object/entity oriented approach .

Lastly, efforts could be made and hopefully sustained on the overall
maintenance, with improved documentation, tutorials/presentations of how
module's features could be leveraged or extended, module's translations [36],
more simpletests (Automated Test Cases) and of course the usual bug fixes.

Contributions are welcome!!
------------------------------------------------------------------------------
Feel free to follow up in the issue queue [37] for any contributions, bug
reports, feature requests.
Tests, feedback or comments in general are highly appreciated.

Credits / Contact
------------------------------------------------------------------------------
We are particularly grateful to the Drupal community behind the Menu attributes
[4] and Block Class [5] modules, their authors and all their contributors for
their great work from which this module was greatly inspired and without which
it would perhaps be far from having the number of supported features it has
today.
Hopefully, new features, patches or tests added to this module might as well be
ported/adapted to be contributed and shared back in return.

Currently maintained by David Suissa (DYdave) [38]; all initial development was
by David Suissa.

This module was sponsored by:
DAVYIN [http://www.davyin.com/] | 上海戴文 [http://www.davyin.cn/].

References
------------------------------------------------------------------------------
1: https://www.drupal.org/files/project-images/block_attributes-global-admin-con
fig-form2-text.jpg
2: https://www.drupal.org/documentation/modules/block
3: http://drupalcode.org/block_attributes/tree/block_attributes.api.php
4: https://www.drupal.org/project/menu_attributes
5: https://www.drupal.org/project/block_class
6: http://drupalcode.org/drupal/tree/modules/block/block.tpl.php?h=7.x
7: https://www.drupal.org/update/themes/6/7
8: https://groups.drupal.org/node/19929
9: https://api.drupal.org/api/drupal/modules!block!block.tpl.php/7
10: https://www.drupal.org/node/1936358
11: https://www.drupal.org/project/ds
12: https://www.drupal.org/project/panels
13: https://www.drupal.org/project/context
14: https://www.drupal.org/project/features
15: https://www.drupal.org/project/features_extra
16: https://www.drupal.org/documentation/themes/bartik
17: https://www.drupal.org/node/1283408
18: http://drupal.org/documentation/install/modules-themes/modules-7
19: https://www.drupal.org/files/project-images/block_attributes-poweredby-block
-config-form4-text.jpg
20: http://www.w3.org/TR/html4/index/attributes.html
21: http://www.w3.org/TR/html-markup/global-attributes.html
22: http://drupalcode.org/block_attributes/tree/README.txt
23: https://www.drupal.org/node/223430
24: https://www.drupal.org/node/254940#html-class-variable
25: http://drupalcode.org/drupal/tree/modules/block/block.tpl.php?h=7.x
26:
http://drupalcode.org/drupal/tree/core/modules/block/templates/block.html.twig
27: https://api.drupal.org/api/drupal/modules%21block%21block.module/7
28: https://api.drupal.org/api/drupal/core%21modules%21block%21block.module/8
29: https://api.drupal.org/api/drupal/core%21modules%21block%21templates%21block
.html.twig/8
30: https://www.drupal.org/project/zen
31: http://drupalcode.org/zen/tree/templates/block.tpl.php
32: http://drupalcode.org/bootstrap/tree/templates/block/block.tpl.php
33: https://api.drupal.org/api/drupal/modules%21block%21block.module/function/bl
ock_load/7
34: https://api.drupal.org/api/drupal/modules%21block%21block.module/function/te
mplate_preprocess_block/7
35: http://drupalcode.org/block_attributes/tree/block_attributes.module#n65
36: https://localize.drupal.org/translate/projects/block_attributes
37: https://www.drupal.org/project/issues/block_attributes
38: https://www.drupal.org/u/dydave
39: https://www.drupal.org/node/863554
40: https://www.drupal.org/node/2211703
