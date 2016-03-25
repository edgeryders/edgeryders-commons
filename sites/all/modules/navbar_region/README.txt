The Navbar region module adds a region to the Mobile Friendly Navigation Toolbar
(navbar) module, allowing the placement of any blocks into the Navbar, much like
the functionality of the Admin module.

Navbar was written by Stuart Clark (deciphered) and is maintained by Stuart
Clark and Brian Gilbert (realityloop) of Realityloop Pty Ltd.
- http://realityloop.com
- http://twitter.com/Realityloop



Features
--------------------------------------------------------------------------------

- Add any block to the Navbar via the Blocks or Context module.
- Remove or re-arrange existing Navbar items.
- Adjust name and icons of Navbar items.



Configuration
--------------------------------------------------------------------------------

Tab title and icons can be set on either the Block settings form for the
specific block, or via the Navbar region settings form:

  admin/config/user-interface/navbar_region



Required modules
--------------------------------------------------------------------------------

* Mobile Friendly Navigation Toolbar - https://www.drupal.org/project/navbar



Notes
--------------------------------------------------------------------------------

If you are using Context and have the Drupal core Block module disable, as soon
as assign a block to the Navbar region all default items will be removed. This
is to allow for full control over the Navbar items while keeping a sane default
when no items are assigned. All default items can be re-assigned as needed.



Roadmap
--------------------------------------------------------------------------------

* Add sane CSS defaults for non-menu blocks.
* Add support for custom icons.
