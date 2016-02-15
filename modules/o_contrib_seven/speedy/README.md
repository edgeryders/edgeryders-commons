The Speedy module is designed to help speed up front end performance in a site.

In this first release of the Speedy module it provides minified versions of core JavaScript files that are not already minified. For example, a minified version of drupal.js is provided while jquery.js (already minified) is not.

## Why Do Minified Files Matter?
A majority of the time it takes for a page to load occurs in the front end. According to recent measurements on average, for the most trafficked 50k sites, [87% of the time it took to load the page happened in the front end](http://www.stevesouders.com/blog/2012/02/10/the-performance-golden-rule/). Serving smaller files will improve this performance.

Minifying the files removes comments, whitespace, and can even transform parts of functions in ways to make them smaller. For example, a minified drupal.js is 24% the size of the original. The minifier used to generate these files is [UglifyJS](https://github.com/mishoo/UglifyJS). This is the same one jQuery uses.

## Drush Integration
While the generation of the minified JavaScript files happens though UglifyJS, drush is used to do the integrations using the command:

    drush smj uglifyjs

The uglifyjs on the end is the path to the uglifyjs command from the cli. It will tell you which files succeeded and if there were errors with any of them. Note, files with errors are generated and the error output is in that files.

## Notes

* If you modified any core JS files don't use this module. The changes you made will not show up in the sites.
* If you are using Drupal 7.5 this module won't work. Drupal 7.6 thought it's internal version was 7.5 and this can cause a problem. Since 7.5 was a security release and there are later releases you don't be using it anyway.

## Why Not Use On The Fly Minification?
This is a complicated questions. Here are a few details that guided me to an approach that ships minified files.

1. jsmin-php, the PHP version of JSMIN, is no longer maintained. I found some bugs in it, too.
2. Inline processing with jsmin-php takes some resources to generate minified files. I did some benchmarks and found the time to be too long for my tastes.
3. Some JavaScript files provide multiple license comments in a file and there isn't a consistent way to note these. We don't want to remove those accidentally.

## More Features?
I would love to incorporate more front end performance features into this module. If you have a suggestion please request it in issue queue or write a feature branch.

## Where did the name come from?
On the children's television show [Mr. Rogers' Neighborhood](https://en.wikipedia.org/wiki/Mister_Rogers%27_Neighborhood) there was the Speedy Delivery Service (for old school mail). That's where the module name comes from.

This module was developed by [HP Cloud Services](http://hpcloud.com).

This module is licensed under the [GPL v2 or later](http://www.gnu.org/licenses/old-licenses/gpl-2.0.html). This is the same license as Drupal. For more information see the [Drupal License FAQ](http://drupal.org/licensing/faq).

Copyright 2012 Hewlett-Packard Development Company, L.P.
 