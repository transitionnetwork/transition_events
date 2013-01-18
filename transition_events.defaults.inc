<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _transition_events_content_default_fields() {
  $fields = array();

  // Exported field: field_event_type
  $fields[] = array(
    'field_name' => 'field_event_type',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '0|Transition Network event
1|Partner event
2|Training event',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Event Type',
      'weight' => '-3',
      'description' => 'The type of event being entered.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_occurs
  $fields[] = array(
    'field_name' => 'field_occurs',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'user',
    'todate' => 'optional',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'long',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'j F Y - g:ia e',
      'input_format_custom' => '',
      'increment' => '5',
      'text_parts' => array(),
      'year_range' => '-3:+10',
      'label_position' => 'above',
      'label' => 'Event Date & Time',
      'weight' => '-4',
      'description' => 'The start date and time of this <em>Event</em>, end times and dates are optional.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_primarycontact
  $fields[] = array(
    'field_name' => 'field_primarycontact',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '11' => 0,
      '10' => 0,
      '8' => 0,
      '9' => 0,
      '3' => 0,
      '5' => 0,
      '4' => 0,
      '7' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => NULL,
      'default_value_php' => 'global $user;
return array(0=> array(\'uid\' => $user->uid));',
      'label' => 'Point of contact',
      'weight' => '-1',
      'description' => 'Start typing the username of the point of contact for this event (suggestions will be provided). Defaults to the current user.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_themes
  $fields[] = array(
    'field_name' => 'field_themes',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'topic' => 'topic',
      'blog' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_event' => 0,
      'imported_news' => 0,
      'initiative_group' => 0,
      'initiative_profile' => 0,
      'initiative_event' => 0,
      'movement_news' => 0,
      'simplenews' => 0,
      'page' => 0,
      'panel' => 0,
      'project_profile' => 0,
      'reference' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Themes',
      'weight' => '1',
      'description' => 'The <em>Themes</em> related to this <em>Event</em>.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_importsource
  $fields[] = array(
    'field_name' => 'field_importsource',
    'type_name' => 'imported_event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'movement|Transition Movement
partner|Transition Partner
voices|Transition Voices',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Source',
      'weight' => '11',
      'description' => '<p>Please choose the most suitable source for this Event:<p>
<ul><li><strong>Transition Movement</strong>: Anything from the Transition movement.</li>
<li><strong>Transition Partner</strong>: From the wider web of partners.</li>
<li><strong>Transition Voices</strong>: Respected bloggers and other voices around the web.</li></ul>',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_occurs
  $fields[] = array(
    'field_name' => 'field_occurs',
    'type_name' => 'imported_event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'user',
    'todate' => 'optional',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'long',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'j F Y - g:ia e',
      'input_format_custom' => '',
      'increment' => '5',
      'text_parts' => array(),
      'year_range' => '-3:+10',
      'label_position' => 'above',
      'label' => 'Event Date & Time',
      'weight' => '10',
      'description' => 'The start date and time of this <em>Event</em>, end times and dates are optional.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_primarycontact
  $fields[] = array(
    'field_name' => 'field_primarycontact',
    'type_name' => 'imported_event',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '11' => 0,
      '10' => 0,
      '8' => 0,
      '9' => 0,
      '3' => 0,
      '5' => 0,
      '4' => 0,
      '7' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => NULL,
      'default_value_php' => 'global $user;
return array(0=> array(\'uid\' => $user->uid));',
      'label' => 'Point of contact',
      'weight' => '13',
      'description' => 'Start typing the username of the point of contact for this event (suggestions will be provided). Defaults to the current user.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_themes
  $fields[] = array(
    'field_name' => 'field_themes',
    'type_name' => 'imported_event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'topic' => 'topic',
      'blog' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_event' => 0,
      'imported_news' => 0,
      'initiative_group' => 0,
      'initiative_profile' => 0,
      'initiative_event' => 0,
      'movement_news' => 0,
      'simplenews' => 0,
      'page' => 0,
      'panel' => 0,
      'project_profile' => 0,
      'reference' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Themes',
      'weight' => '15',
      'description' => 'The <em>Themes</em> related to this <em>Partner Event</em>.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_occurs
  $fields[] = array(
    'field_name' => 'field_occurs',
    'type_name' => 'initiative_event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'user',
    'todate' => 'optional',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'long',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'j F Y - g:ia e',
      'input_format_custom' => '',
      'increment' => '5',
      'text_parts' => array(),
      'year_range' => '-3:+10',
      'label_position' => 'above',
      'label' => 'Event Date & Time',
      'weight' => '-4',
      'description' => 'The start date and time of this <em>Event</em>, end times and dates are optional.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_primarycontact
  $fields[] = array(
    'field_name' => 'field_primarycontact',
    'type_name' => 'initiative_event',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '11' => 0,
      '10' => 0,
      '8' => 0,
      '9' => 0,
      '3' => 0,
      '5' => 0,
      '4' => 0,
      '7' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => NULL,
      'default_value_php' => 'global $user;
return array(0=> array(\'uid\' => $user->uid));',
      'label' => 'Point of contact',
      'weight' => '-2',
      'description' => 'Start typing the username of the point of contact for this event (suggestions will be provided). Defaults to the current user.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_themes
  $fields[] = array(
    'field_name' => 'field_themes',
    'type_name' => 'initiative_event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'topic' => 'topic',
      'blog' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_event' => 0,
      'imported_news' => 0,
      'initiative_group' => 0,
      'initiative_profile' => 0,
      'initiative_event' => 0,
      'movement_news' => 0,
      'simplenews' => 0,
      'page' => 0,
      'panel' => 0,
      'project_profile' => 0,
      'reference' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Themes',
      'weight' => 0,
      'description' => 'The <em>Themes</em> related to this <em>Event</em>.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  array(
    t('Event Date & Time'),
    t('Event Type'),
    t('Point of contact'),
    t('Source'),
    t('Themes'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _transition_events_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'transition_network',
    'attribute' => 'page',
    'value' => 'event',
    'description' => 'A news page',
    'node' => array(
      '0' => 'event',
      '1' => 'imported_event',
      '2' => 'initiative_event',
    ),
    'theme_section' => array(
      'class' => 'event-page',
    ),
    'block' => array(),
  );
  $items[] = array(
    'namespace' => 'transition_network',
    'attribute' => 'section',
    'value' => 'events',
    'description' => 'The Events section of the site',
    'node' => array(
      '0' => 'event',
      '1' => 'imported_event',
      '2' => 'initiative_event',
    ),
    'path' => array(
      'events' => 'events',
      'events/*' => 'events/*',
    ),
    'views' => array(
      '0' => 'events',
      '1' => 'events_maps',
    ),
    'menu' => 'news',
    'theme_section' => array(
      'title' => 'Events',
      'class' => 'events-section',
    ),
    'block' => array(),
  );
  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _transition_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: create event content
  $permissions[] = array(
    'name' => 'create event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: create imported_event content
  $permissions[] = array(
    'name' => 'create imported_event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'events partner',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: create initiative_event content
  $permissions[] = array(
    'name' => 'create initiative_event content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'site administrator',
      '3' => 'site editor',
    ),
  );

  // Exported permission: delete any event content
  $permissions[] = array(
    'name' => 'delete any event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete any imported_event content
  $permissions[] = array(
    'name' => 'delete any imported_event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete any initiative_event content
  $permissions[] = array(
    'name' => 'delete any initiative_event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete own event content
  $permissions[] = array(
    'name' => 'delete own event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete own imported_event content
  $permissions[] = array(
    'name' => 'delete own imported_event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'events partner',
      '2' => 'site administrator',
      '3' => 'site editor',
    ),
  );

  // Exported permission: delete own initiative_event content
  $permissions[] = array(
    'name' => 'delete own initiative_event content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'site administrator',
      '3' => 'site editor',
    ),
  );

  // Exported permission: edit any event content
  $permissions[] = array(
    'name' => 'edit any event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit any imported_event content
  $permissions[] = array(
    'name' => 'edit any imported_event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit any initiative_event content
  $permissions[] = array(
    'name' => 'edit any initiative_event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit field_event_type
  $permissions[] = array(
    'name' => 'edit field_event_type',
    'roles' => array(
      '0' => 'developer',
      '1' => 'events partner',
      '2' => 'site administrator',
      '3' => 'site editor',
    ),
  );

  // Exported permission: edit field_events
  $permissions[] = array(
    'name' => 'edit field_events',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit field_importsource
  $permissions[] = array(
    'name' => 'edit field_importsource',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit field_primarycontact
  $permissions[] = array(
    'name' => 'edit field_primarycontact',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit own event content
  $permissions[] = array(
    'name' => 'edit own event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit own imported_event content
  $permissions[] = array(
    'name' => 'edit own imported_event content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'events partner',
      '2' => 'site administrator',
      '3' => 'site editor',
    ),
  );

  // Exported permission: edit own initiative_event content
  $permissions[] = array(
    'name' => 'edit own initiative_event content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'site administrator',
      '3' => 'site editor',
    ),
  );

  // Exported permission: view field_event_type
  $permissions[] = array(
    'name' => 'view field_event_type',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'events partner',
      '4' => 'pre-authorised',
      '5' => 'site administrator',
      '6' => 'site editor',
    ),
  );

  // Exported permission: view field_events
  $permissions[] = array(
    'name' => 'view field_events',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'group admin',
      '4' => 'pre-authorised',
      '5' => 'site administrator',
      '6' => 'site editor',
    ),
  );

  // Exported permission: view field_importsource
  $permissions[] = array(
    'name' => 'view field_importsource',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'pre-authorised',
      '4' => 'site administrator',
      '5' => 'site editor',
    ),
  );

  // Exported permission: view field_primarycontact
  $permissions[] = array(
    'name' => 'view field_primarycontact',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'group admin',
      '4' => 'pre-authorised',
      '5' => 'site administrator',
      '6' => 'site editor',
    ),
  );

  return $permissions;
}
