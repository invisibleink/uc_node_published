; $id$

Module: uc_node_published
Author: Nick Santamaria

***************************************************************
DESCRIPTION:
This module provides extra functionality to ubercart and uc_node_checkout.
Basically, it controls the status (published / unpublished) of 
uc_node_checkout node types when the order's status changes. 
ORDER COMPLETED => NODE PUBLISHED
ORDER NOT COMPLETED => NODE UNPUBLISHED

It alsoupdates the order status when the node's status is manually 
changed.
NODE UNPUBLISHED => ORDER MODERATED
NODE PUBLISHED => ORDER COMPLETED
NODE DELETED => ORDER CANCELLED

***************************************************************
CONFIGURATION:
To configure this module, install ubercart and uc_node_checkout. After you
configure uc_node_checkout to relate a node type to a certain product (lets 
say the node type is called 'ad'), go to 
http://mysite.com/?q=admin/content/node-type/ad and change the workflow 
settings so that the node type is unpublished by default.

Now if you proceed to purchase an ad, it will be created, but will be 
unpublished until the order status reaches completed. Hopefully you've got it working!

See uc_node_checkout readme for instructions on how it works and how to 
configure it.
