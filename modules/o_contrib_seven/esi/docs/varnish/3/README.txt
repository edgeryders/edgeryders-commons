There are two key changes to make to the VCL:
1. In vcl_fetch, instruct Varnish to process ESI tags.
2. In vcl_hash, inform Varnish how ESI-delivered content should be cached, for
   example, keep a separate per-user copy if content varies according to the
   user, keep a separate per-role copy if content varies according to the role,
   etc.

By default, Varnish provides two contexts (ROLE and USER). Other contexts can
be defined using hook_esi_context - for example, you may wish to define
content that varies by location, by a users' starsign, or any other arbitrary
data.  For Varnish to segment arbitrary contexts properly, an entry must be
added to vcl_hash to describe the segmentation.  See the example VCL, which
demonstates segmentation for USER and ROLE.

In the following example, the string "885a8dabee4775cb4fa05746fe98a37b"
represents the session name, which you will have to determine based on the
configuration of your site. The string represents the session name, in this
case from a VM using the domain name 'vm-esi.local' on port 6081:
substr(hash("sha256", "vm-esi.local:6081"), 0, 32);

Look at the cookie names, or examime drupal_settings_initialize() to understand
how this hash is initialized.


Here's an example for the arbitrary context 'FOO'.

if (req.http.X-ESI-VARY == "FOO") {
    if (req.proto == "https") {
        set req.http.X-ESI-VARY-VAL = regsub( req.http.Cookie, "^.*?ESI_FOO_SSESS885a8dabee4775cb4fa05746fe98a37b=([^;]+);.*$", "\1");
    }
    else {
        set req.http.X-ESI-VARY-VAL = regsub( req.http.Cookie, "^.*?ESI_FOO_SESS885a8dabee4775cb4fa05746fe98a37b=([^;]+);.*$", "\1");
    }
}
