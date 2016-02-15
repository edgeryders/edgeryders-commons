Description
-----------

Selecting all children of a given taxonomy term can be a pain.
This module makes it easier to do this, by maintaining a complete list of edges
for each term using the adjecency matrix graph theory:
  http://en.wikipedia.org/wiki/Adjacency_matrix

Visit the project page:
  http://drupal.org/project/taxonomy_edge


Requirements
------------
Taxonomy module (and the Views module for the Views Taxonomy Edge module)


Installation
------------
Place in modules folder and enable it from /admin/build/modules

Apply the core patch if you like (or use the Core Override module at your own risk :-)):
%> cd /path/to/drupal
%> patch -p1 < sites/all/modules/taxonomy_edge/taxonomy-<drupal-version>.patch



Maintenance
-----------
Rebuild edges from /admin/content/taxonomy/edge

Edges can also be rebuild through cron if a hook_cronapi() compatible cron module is installed (Elysia Cron, Ultimate Cron, etc.)

Rebuilding of edges can be necessary if the table gets out of sync.


SQL
------

The following select statements can be used as help or inspiration to use the taxonomy_term_edge table:

Get the top level term IDs for the term 14:

SELECT DISTINCT e2.parent
FROM taxonomy_term_edge e
JOIN taxonomy_term_edge e2 ON e2.tid = e.tid AND e2.distance = e.distance - 1 AND e2.parent <> e.parent
WHERE e.tid = 14
AND e.parent = 0
AND e.vid = e2.vid


Generate a list of materialized paths for each term in vocabulary vid:1, in the correct order:

SELECT d2.*, e2.parent, e2.distance,
(
SELECT CONCAT('"', GROUP_CONCAT(d.name ORDER BY e.distance DESC SEPARATOR '/'), '"') AS path FROM taxonomy_term_edge e JOIN taxonomy_term_data d ON e.parent = d.tid WHERE e.tid = e2.tid ORDER BY e.distance DESC
) AS path,
(
SELECT GROUP_CONCAT(d.weight + 1500, '    ', d.name ORDER BY e.distance DESC SEPARATOR '    ') AS path FROM taxonomy_term_edge e JOIN taxonomy_term_data d ON e.parent = d.tid WHERE e.tid = e2.tid ORDER BY e.distance DESC
) AS sort_path
FROM taxonomy_term_edge e2
JOIN taxonomy_term_data d ON d.tid = e2.tid
WHERE e2.vid = 1
AND e2.parent = 0
ORDER BY sort_path;


Get all parents of a term tid:12

SELECT * FROM taxonomy_term_edge WHERE tid = 12 AND distance > 0;


Get all children of a term tid:12

SELECT * FROM taxonomy_term_edge WHERE parent = 12;



Misc.
-----
Other popular alternatives to the adjecency matrix model are the nested set and materialized path.

Nested set (http://en.wikipedia.org/wiki/Nested_set_model):
 - Advantages
   - Fast retrieval of sorted tree.
 - Disadvantages:
   - Complex.
   - Can be heavy on insert/update (can be mitigated with gaps, but increases complexity).

Materialized path (http://www.dba-oracle.com/t_sql_patterns_trees.htm):
 - Advantages
   - Simple to understand.
 - Disadvantages:
   - Can be heavy on select/insert/update due to string compare.
   - Requires multiple queries for proper use of indexes on subtree selection.
   - Depth limit (due to index size limitation).

