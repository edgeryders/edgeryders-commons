Documentation for the Project Management suite of modules for Drupal:
- Project homepage: http://drupal.org/project/pm
- Issue tracking: http://drupal.org/project/issues/pm

--

Project Management consists of a set of modules as follows:
- Project Management (base module)
- Organizations
- Projects
- Tasks
- Tickets
- Timetrackings
- People
- Notes
- Invoices
- Expenses

Each of these provides permissions to control the sharing of data with other users and organizations.
NB: This may conflict with other node access modules.

All components are nodes, so can be extended as follows:

    * Fields can be used to add more fields to the Project Management content types
    * Views can build customised views
    * Taxonomy can be used to tag the contents of the Project Management nodes
    * Upload can be used to attach files to Project Management nodes
    * Comments can be used to permit comments on each of the Project Management nodes

Project Management content nodes also all link together - for example, an invoice can be associated with an organization and project.

SEE BELOW FOR DETAILS OF EACH OF THE MODULES INCLUDED WITHIN THE PROJECT MANAGEMENT PACKAGE.


- Project Management (base module)
-- This module is required for all Project Management installations provides a Project Management dashboard which gives quick links for the other Project Management modules as well as to the Project Management administration section.
-- Attributes are the values that are used within Project Management, such as task status, countries, currencies etc. This module only relies on the Project Management base module, but is needed by all of the following modules.

- Organization
-- This module allows you to create nodes relating to the organizations that are the stakeholders of your projects. If you wish to create invoices using Project Management, your own organization should be created as an organization here.

- People
-- People allows the creation of individual contacts within Organizations, and linking of these to Drupal user accounts.

- Team
-- This module allows the building of team working on a specific project / task / ticket.

- Project
-- Project allows creation of projects attached to organizations.

- Task
-- Tasks are the parts that compose a project and can be hierarchically nested to build a work breakdown structure.

- Ticket
-- Tickets can be used to track bugs, feature requests, or any other category as specified via attributes. They can be associated with an organization, project or task.

- Timetracking
-- This module allows the recording of time spent relating to particular organizations, projects, tasks or tickets.

- Note
-- This module allows notes to be attached to organizations, projects or tasks.

- Invoice
-- Within Invoice, you can create invoices between yourself and clients. A printer friendly version comes included, and with the addition of the tcpdf library (see the INSTALL.txt), you can also download pdf versions of your invoices directly from Project Management.

- Expense
-- Expense allows the recording of expenses attached to a specific task or project, including information such as whether it is billable.
---- Provider: This field will autocomplete with the name of any active organization who is listed as a provider using Organization.
