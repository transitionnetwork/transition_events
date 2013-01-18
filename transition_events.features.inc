<?php

/**
 * Implementation of hook_content_default_fields().
 */
function transition_events_content_default_fields() {
  module_load_include('inc', 'transition_events', 'transition_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_transition_events_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function transition_events_context_default_contexts() {
  module_load_include('inc', 'transition_events', 'transition_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_transition_events_context_default_contexts', $args);
}

/**
 * Implementation of hook_node_info().
 */
function transition_events_node_info() {
  module_load_include('inc', 'transition_events', 'transition_events.features.node');
  $args = func_get_args();
  return call_user_func_array('_transition_events_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function transition_events_user_default_permissions() {
  module_load_include('inc', 'transition_events', 'transition_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_transition_events_user_default_permissions', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function transition_events_views_default_views() {
  module_load_include('inc', 'transition_events', 'transition_events.features.views');
  $args = func_get_args();
  return call_user_func_array('_transition_events_views_default_views', $args);
}
