
VIEWS ACCELERATOR
=================
Analyses and accelerates the post-execution phase of non-cached Views. Targets
fields that require little formatting/rendering, e.g. fields that do not need to
be displayed with markup, prefixes or suffixes.
Examples are fields used in View-driven maps (Google, OpenLayers, Leaflet).
Not only will latitude and longitude fields benefit, but also any fields used
to populate tables or marker balloons that require only simple rendering.

INSTALLATION & CONFIGURATION
============================
0) Download and install like any other module.

1) To accelerate a View open the "Advanced" fieldset (upper right) on the Views
UI console. Under the header OTHER, you'll find an option "Caching". Click that.
A modal window appears with a new option "None. Post-execution optimized with
Views Accelerator". Select that pseudo-cache option and press Save. Your view is
now accelerated.

2) You can compare the performance of the view with and without the accelerator
by switching on the summary statistics for selected users on the module's
configuration page, /admin/config/system/views-accelerator, or by role on the
admin/people/permissions page.
Then open two browser windows and execute the same View once with, and once
without this module's accelerated pseudo-cache. Compare and contrast.
If you do not wish to see any performance stats as an admin, untick the box
"View performance statistics".

CAVEATS
=======
Remember: Views Accelerator works by not richly rendering Views results, i.e.
it leaves most results pretty much in their raw form. If full rendering is
important to you, you'll find little benefit from this module.
You get the best benefits when:
o your view produces a lot of items (rows * columns)
o you don't have a pager or you have a pager with MANY items per page
o near-raw data is more important than rendered data

View-driven maps that cannot be cached, for instance because they're centered
based on user input or user location, are usually great beneficiaries.

May not fully work on all fields in your View. Fields currently supported are:
o Plain fields
o Taxonomy terms (plain or linked)
o Images and their image styles (e.g., thumbnail, medium, large), plus links
  to file or content
o Files with the following field Formatters:
   - Generic file
   - URL to file
   With File Entity module enabled:
   - Download link, with token support
   - Rendered file, in View Modes: Default, Teaser, Preview.
     Note that image sizes may differ from normal operation. Default outputs
     the original size, Teaser the medium and Preview produces the thumbnail.
     Experiment with your image presets to adjust sizes.
o Geofields, drupal.org/project/geofield
o Address Fields, drupal.org/project/addressfield

Of the "Multiple field settings" the following are somewhat supported:
- "Display all values in the same row" toggle
- display type (unordered, ordered or separated list)
- display # values
- starting from

Again: some rendering options will be ignored. That's where the speed comes
from!

BACKGROUND
==========
Profiling revealed that for some Views the largest part of the total execution
time was surprisingly spent in the view::_post_execute() function, rather than
the query execute() or view::render() functions. view::_post_execute() passes
control to views_handler_field_field::set_items() and this is where a lot of CPU
cycles are wasted, if all you're after are the raw database results.
The "Exclude from display" check box does not stop set_items() from being
executed.
This module replaces the set_items() function by a highly performant alternative
that simply returns the raw or near-raw data value without building render
arrays etc.

AUTHOR
======
Rik de Boer, Melbourne, Australia.
