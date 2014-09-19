
INTRODUCTION
------------
This module adds the token [node:og-group-audience] to Organic Groups. This can
be used to retrieve the names of the groups to which a node belongs.

For example if you have a group type called 'Department' and a group content
type 'Meetings' you can put the token wherever you need to get a list of the
departments to which a meeting belongs.

This is an array token so you can use things like:
[node:og-group-audience:first] - the first group
[node:og-group-audience:last] - the last group
[node:og-group-audience:count] - the number of groups this node belongs to

A good use case of this is with Pathauto, you can generate URLs like
'department/[node:og-group-audience:first]/meeting/[node:nid]'
