<?php

// $Id$

/**
 * @file
 * Abstracts sections of code to keep the .module file clean and easily readable
 */

/**
 * Implementation of hook_ucnc_action_name
 */
function ucnc_actions_ucnc_actions_action_publish($event, &$node, &$order) {
  $node->status = 1;
}

/**
 * Implementation of hook_ucnc_action_name
 */
function ucnc_actions_ucnc_actions_action_unpublish($event, &$node, &$order) {
  $node->status = 0;
}

/**
 * Implementation of hook_ucnc_action_name
 */
function ucnc_actions_ucnc_actions_action_delete($event, &$node, &$order) {
  node_delete($node->nid);
}

/**
 * Implementation of hook_ucnc_action_name
 */
function ucnc_actions_ucnc_actions_action_promote($event, &$node, &$order) {
  $node->promote = 1;
}

/**
 * Implementation of hook_ucnc_action_name
 */
function ucnc_actions_ucnc_actions_action_demote($event, &$node, &$order) {
  $node->promote = 0;
}

