<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _transition_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Transition Network Event'),
      'module' => 'features',
      'description' => t('Representing an <em>Event</em> from the Transition Network including its type, location, time and related themes.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'has_body' => '1',
      'body_label' => t('Details'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'imported_event' => array(
      'name' => t('Imported Event'),
      'module' => 'features',
      'description' => t('Representing an <em>Event</em> created by the Transition Network\'s partners or other Transition Initiatives not hosted here. Includes the event\'s type, location, time and related Transition Themes.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'has_body' => '1',
      'body_label' => t('Details'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'initiative_event' => array(
      'name' => t('Movement Event'),
      'module' => 'features',
      'description' => t('Representing an <em>Event</em> by a hosted Transition Initiative including its location, time and related themes.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'has_body' => '1',
      'body_label' => t('Details'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
