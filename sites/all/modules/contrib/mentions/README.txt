The Mentions module offers Twitter like functionality, recording all references
to a user's username - using the [@username] or [@#uid] filter format - from
various locations, providing a centralized page to track all mentions.

Mentions was written and is maintained by Stuart Clark (deciphered).
- http://stuar.tc/lark



Features
--------------------------------------------------------------------------------

* Tracks Mentions on any Entity.
* An Input filter to convert [@username] or [@#uid] to the user's profile.
* Customizable input ([@username], [@#uid]) and output (@username) patterns,
  including support for the Token module.
* Autocompletion of mentions; Using the jQuery textcomplete library usernames
  will be suggested while mentioning.
* Integrations with:
  * Machine name - Use a Machine name field as the mention source.
  * Rules - React to created, updated and deleted mentions.
  * Views - Display a list of all mentions, mentions by user, and more.



Recommended Modules
--------------------------------------------------------------------------------

* Libraries API - https://drupal.org/project/libraries
* Token         - https://drupal.org/project/token
* Views         - https://drupal.org/project/views



jQuery textcomplete - Autocompletion of mentions
--------------------------------------------------------------------------------

The jQuery textcomplete library adds autocompletion of mentions, to install it
follow these steps:

1. (optional) Download and install the Libraries API module.
    http://drupal.org/project/libraries

2. Download the jQuery textcomplete library and extract and move it into your
   libraries folder as 'textcomplete' (eg. sites/all/libraries/textcomplete).
    https://github.com/Decipher/jquery-textcomplete/archive/master.zip



Alternatively, you can use the Drush command 'mentions-library' or the Drush
make entry provided below:

  libraries[textcomplete][download][type] = get
  libraries[textcomplete][download][url] = https://github.com/Decipher/jquery-textcomplete/archive/master.zip



Usage / Configuration
--------------------------------------------------------------------------------

Once installed, the Mentions filter needs to be enabled on your desired Text
formats, this can be done via the Text formats page.
* http://[www.yoursite.com/path/to/drupal]/admin/config/content/formats

Customisation settings for input and output patterns are available via the
Mentions configuration form:
* http://[www.yoursite.com/path/to/drupal]/admin/config/content/mentions
