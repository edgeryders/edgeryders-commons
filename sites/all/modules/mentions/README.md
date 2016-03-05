Mentions
========

The Mentions module offers the ability to record, render and react to specified
patterns within content.

Put simply, the Mentions module can be used to provide Twitter like @username
mention functionality, linking the mentions to a users profile as well as notify
the user to the mention.



Features
--------

* **Mention types**  
  Define multiple Mention types, each with a unique input pattern (e.g., @user,
  [#node], +page, etc).


* **Filter**  
  Leverage Drupal's core Filter module to convert mentions from the defined
  input pattern to a more human readable output. 


* **Entity API**  
  Recorded Mentions are Drupal entities provided by the Entity API module, and
  as such gain various benefits, including but not limited to:

    - Fieldable Mention types.
    - Rules integration.
    - Views integration.



Required Modules
----------------

* [Chaos tools](https://www.drupal.org/project/ctools)
* [Entity API](https://www.drupal.org/project/entity)
* [Entity Reference](https://www.drupal.org/project/entityreference)



Recommended Modules
-------------------

* Filter
* [Rules](https://www.drupal.org/project/rules)
* [Token](https://www.drupal.org/project/token) 
* [Views](https://drupal.org/project/views)
