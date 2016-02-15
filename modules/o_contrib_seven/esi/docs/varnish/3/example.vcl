# This is a minimal VCL configuration file to demonstrate using the Drupal ESI
# module with Varnish.
# This simply demonstrates the key features required for ESI; a typical Drupal
# VCL will contain much more configuration.

backend default {
    .host = "127.0.0.1";
    .port = "80";
}

sub vcl_fetch {
    # Instruct Varnish to process <esi> tags.
    set beresp.do_esi = true;
}

sub vcl_hash {
    # Apply special handling to ESI requests, so that the "ESI context" is
    # recognised during processing.
    if (req.url ~ "^/esi/") {
        # Use the trailing "/CACHE=xxxxx" rule to discover how the content
        # varies. This should correspond to the name of a cookie.
        if (req.url ~ ".+/CACHE%3D(.+)$") {
            set req.http.X-ESI-VARY = regsub( req.url, ".+/CACHE%3D(.+)$", "\1" ); 

            # The name of the cookie is the ESI prefix, followed by the name of
            # the ESI context (e.g. "USER", "ROLE"), followed by the session
            # name used within Drupal (which varies according to cookie domain
            # or host-name).
            # For example:
            # The cookie name for HTTP will be 'ESI_USER_SESSxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx".
            # The cookie name for HTTPS will be 'ESI_USER_SSESSxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx".
            if (req.http.X-ESI-VARY == "USER") {
                if (req.proto == "https") {
                    set req.http.X-ESI-VARY-VAL = regsub( req.http.Cookie, "^.*?ESI_USER_SSESS885a8dabee4775cb4fa05746fe98a37b=([^;]+);.*$", "\1");
                }
                else {
                    set req.http.X-ESI-VARY-VAL = regsub( req.http.Cookie, "^.*?ESI_USER_SESS885a8dabee4775cb4fa05746fe98a37b=([^;]+);.*$", "\1");
                }
            }

            if (req.http.X-ESI-VARY == "ROLE") {
                if (req.proto == "https") {
                    set req.http.X-ESI-VARY-VAL = regsub( req.http.Cookie, "^.*?ESI_ROLE_SSESS885a8dabee4775cb4fa05746fe98a37b=([^;]+);.*$", "\1");
                }
                else {
                    set req.http.X-ESI-VARY-VAL = regsub( req.http.Cookie, "^.*?ESI_ROLE_SESS885a8dabee4775cb4fa05746fe98a37b=([^;]+);.*$", "\1");
                }
            }

            # Add the vary-key to the hash data.
            hash_data (req.http.X-ESI-VARY-VAL);
        }
    }
}

