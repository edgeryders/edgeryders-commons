README FILE
htmLawed module
Version 3, for Drupal 7
(c) Santosh Patnaik
Initiated May 2011


*About the htmLawed module*

The htmLawed (X)HTML filter/purifier module restricts HTML markup in content and makes it more secure, and standard- and admin. policy-compliant using the htmLawed PHP software (http://www.bioinformatics.org/phplabware/internal_utilities/htmLawed/). A copy of the htmLawed documentation should be available within the "htmLawed" sub-folder of the module. The Drupal website may have a handbook detailing htmLawed module usage (http://drupal.org/node/255886).


*About version 3 of the htmLawed module*

Unlike version 2 (not available for Drupal 7), version 3 does not allow for content-type (node-type)-specific, or teaser- or body-specific htmLawed settings. It also does not have the functionality to filter content before it is stored in the database. Content-type-specific htmLawed settings can be achieved in Drupal 7 using another module like the 'Better Formats' module, or by using Drupal's core functionality to use different input formats for different content-types, and setting different htmLawed configurations for the different input formats.


*Installing the htmLawed module*

The module can be installed using the Drupal 7 interface (by browsing to yoursite.com/admin/modules), or manually (by copying the module folder to the desired modules folder of the Drupal installation). See http://drupal.org/documentation/install/modules-themes/modules-7 for more.


*Updating from version 2 of the htmLawed module*

Direct import of settings used with version 2 of the module is not possible. Note that version 2 of the module is not available for Drupal 7.


*Using version 3 of the htmLawed module*

To enable htmLawed for a text format, visit the text formats section of the Drupal administration site to configure the text format to use htmLawed. Because htmLawed does the task of Drupal's HTML filter, that filter can be disabled. Any other default Drupal actions/filters that are used to correct broken HTML, or to balance or properly nest HTML tags can also be disabled since htmLawed performs them as well. Unlike Drupal's HTML filter, htmLawed can also be used to restrict HTML attributes, limit URL protocols, etc. Note that htmLawed does not convert URLs into links nor does it convert line breaks into HTML.

The customization of htmLawed is dictated by two parameters, Config. and Spec. Setting specific htmLawed filter settings involves providing values for the two parameters in the htmLawed settings form. The Config. form-field is filled with comma-separated, quoted, key-value pairs like "'safe'=>1, 'element'=>'a, em, strong'" (these are interpreted as PHP array elements and passed to the htmLawed function as Config. parameters). The Spec. field is an optional string of unquoted text... see htmLawed documentation for more on Config. and Spec. Content of the Help field will be used to inform users about the filter, such as what tags are allowed. The form-fields are pre-filled the first time htmLawed is being configured for a text format. The values allow the a, em, strong, cite, code, ol, ul, li, dl, dt and dd HTML elements or tags, and deny the id and style HTML element attributes, and any unsafe markup (such as the the scriptable onclick attribute). If for some reason the htmLawed module cannot identify htmLawed settings for a text format for which htmLawed is enabled, the module will execute the htmLawed filter to enforce these default rules.

Depending on the types of filters the text format uses, you may need to re-arrange the processing order of filters. htmLawed would usually be the last filter to be run. If a filter generates HTML markup and is run before htmLawed, then htmLawed should be configured appropriately to permit such markup. If the Drupal PHP evaluator filter is in use, and it is being run after htmLawed, then ", 'save_php' => 1" should be added to the Config. value of the htmLawed settings. To allow for use of Drupal's teaser-break indicator, '<!--break-->', add ", 'comment' => 2" to the Config. value of the htmLawed settings. Note that this will now allow all HTML comments to get through the htmLawed filter, but no security or presentation issues are anticipated because of this as '<' and '>' characters within the comments will be converted to HTML entities.

The htmLawed filter allows use of custom functions during htmLawed filtering. If you want use of such functions, besides setting appropriate values for Config., you will need to have the functions accessible by htmLawed. One option is to have a custom PHP file with the functions included by Drupal by adding a "require_once" call in the Drupal "settings.php" file within the Drupal "sites" folder.

It is important to understand the security implications of the htmLawed settings in use and the limitations of htmLawed. To keep the htmLawed script included with the module updated, replace the "htmLawed.php" and "htmLawed_README.htm" files inside the "htmLawed" sub-folder of the module folder with newer versions downloaded from the htmLawed website at http://www.bioinformatics.org/phplabware/internal_utilities/htmLawed/.


*Module development and maintainance*

Santosh Patnaik

*Special thanks*

Federico Jaramillo (for a temporary dev. version 3 of the module)
Andy Fowlston (for encouraging full implementation of Drupal's module philosophy)

