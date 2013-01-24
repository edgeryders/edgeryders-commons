Rich Snippets
=============

The Rich Snippets module overrides the core Search styles and templates to
closely match the UI of major search engines. This project is an extension of
the core Search module that integrates with the Schema.org project to display
structured data as the familiar rich snippets that end users expect. Rich
Snippets also integrates seamlessly with the Apache Solr Search Integration
module.


How does this module work?
--------------------------

The Rich Snippets module alters the display of the search results based on their
Schema.org mappings. For example, if a bundle is marked with the "Event" schema
and has a date field mapped to the "startDate" property, this module will alter
the display accordingly and show the event's start date in a predefined
location. For details on how to apply Schema.org mappings to bundles and fields,
please refer to the following screencast:

http://openspring.net/blog/2011/09/30/schemaorg-rich-snippets-drupal-7-rdfa

The Rich Snippets module supports a number of schema and properties out-of-the-
box that are specified in the "Supported schema" section. If the module doesn't
support the schema out-of-the-box, developers can implement hooks in order to
add support or override the default displays provided by this module. Details
on the hooks and their usage can be found in the rich_snippets.api.php file.


Quickstart guide
----------------

The following example is a quickstart guide to demonstrate how the Rich Snippets
module works.

* Install the Search, Schema.org, Rich Snippets, and Date modules.
* Create a content type called "Event", and map it to the "Event" schema.
* Create a date field attached to the "Event" content type. Name the field
  "Event Date" and map the field to the "startDate" Schema.org property.
* Create content of the "Event" content type making sure to fill in the "Event
  Date" field.
* Run cron to index the newly created content.
* Execute a search query matching the event and notice the alternate display.


Why not Views?
--------------

The Views module is a powerful tool that allows site builders to generate lists
of content and render them using various displays. Search results are a bit
different in that each document returned in the result set most likely has a
different context. For example, the document could be an event, a blog, an
organization, etc., that would each yield different displays in order to provide
as much relevant information on the SERP (search engine results page) as
possible. Views is simply not optimized to perform the logic necessary to
display contextually relevant data on a per-document basis.


Why Schema.org?
---------------

One of the biggest benefits of using Drupal is the ability to create and manage
your data model via the UI. However, the data is effectively unstructured in
that there is no way to denote that an entity is a blog or a field is a person
other than by how it is named. The Schema.org markup provides a semi-standard
structure on top of Drupal's data model that is recognized by major search
engines including Bing, Google, Yahoo! and Yandex. It is therefore optimized for
search and is widely adopted across the Internet.


Supported schema
----------------

The following list outlines the Schema.org schema and properties supported out
of the box. The top level of the hierarchy contains the schema that should be
applied to the bundle. This schema determine the context in which the document
is displayed in the SERP. The second level of the hierarchy specifies the
properties of the schema that are supported along with a description of how they
are displayed in the search result.

* Event (http://schema.org/Event)
    - image         Thumbnail displayed in image section
    - startDate     Displayed in search info section
    - location      Displayed in search info section
