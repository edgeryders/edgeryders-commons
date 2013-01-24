DESCRIPTION
==============
Advanced Queue is an extended queuing module fully backward compatible 
with and a drop-in replacement of DrupalQueue.

Supports:

* A Drush-based execution engine for queued job, supporting executing 
  multiple queues at the same time and timeouts
* Human readable, translatable names for queued items
* Tags for queued items
* Status of queued items (new, being processed, succeeded, failed), and 
  result payload
* Views integration

In order to use Drush based execution engine your module must provide
hook_advanced_queue_info() in which a processing callback (worker) must be
declared. This callback will receive the item being processed and process 
it.
Enable the "Advacned-queue example" module to see it in action.

DRUSH WORKERS
=============
It is possible to execute the Drush comamnd that will loop and "listen" to
the queue, and process items once they are added. It is considered a best
practice to execute the Drush command with a timeout of 15 minutes, and
use supervisord to restart it once it dies. This will help making sure 
there are no serious memory leaks. For example:

  drush advancedqueue --all --timeout=900

SPONSOROS & MAINTAINERS
=======================
* Sponsored by Publicis Modem 
* Developed and sponsored by Commerce Guys http://commerceguys.com/
* Developed by Gizra http://www.gizra.com/

