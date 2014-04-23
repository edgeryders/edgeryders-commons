
This module uses the ability to add custom stylesets to the CKEditor styles
dropdown.

The configuration is available via admin/config/content/ckeditor_styles.
There you can add new CKEditor style rules, that consist of:

- name: The human readable name of the style rule, it is used as label in your
  CKEDITOR to show the style
- machine_name: The internal machine readable name, it is unique and used to
  identify the style rule.
- description: an administrative description, it is not displayed anywhere by
  default
- element: the html tag/element to make the style available for
- attributes:
  - class: class name(s) to add to the selected element
  - style: css style definitions to add to the selected element


For more information on the background:

@see http://docs.cksource.com/CKEditor_3.x/Developers_Guide/Styles

Dependencies
------------
* WYSIWYG Module - http://drupal.org/project/wysiwyg
* CTools - http://drupal.org/project/ctools
* A wysiwyg profile using the CKEDITOR - http://ckeditor.com
