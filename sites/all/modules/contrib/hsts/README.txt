This module is for users who either can't change the webserver configuration
to include the necessary headers to enable HSTS or only want those headers for
certain sites in a multi-site configuration. If you have the option to use
your web server to add and manage the HSTS header data I recommend you do so.
It'll save you a little extra PHP processing.

If not, then I hope this module helps you out.

For more information regarding HTTP Strict Transport Security see
http://en.wikipedia.org/wiki/HTTP_Strict_Transport_Security