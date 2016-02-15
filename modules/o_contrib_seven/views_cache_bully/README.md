## Views Cache Bully

This module enforces Views time-based caching for all uncached views. This can
drastically improve Views (and site) performance.

Administrators with sufficient permissions may make exemptions for specific
views, notably those with exposed filters (which don't always play well with
caching).

### Why

Views hides its cache settings. It's easy to forget to set caching. Someone will
remember to do it later, right? Often, later often never comes. Or maybe your
content admins have access to views_ui, but they can't be trusted to make good
caching decisions. Whatever the reason, this enforces time-based caching.

## Installation

Just enable views_cache_bully!

## Configuration

You may configure exemptions by navigating to
/admin/config/system/views-cache-bully. By default, all views that use exposed
filters won't be bullied.