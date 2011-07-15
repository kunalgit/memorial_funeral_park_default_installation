<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function obituaries_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_service
  $groups['obit_user_links-group_service'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'obit_user_links',
    'group_name' => 'group_service',
    'parent' => '',
    'label' => 'servicegrp',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'teaser' => array(
          'format' => 'fieldset',
        ),
        'full' => array(
          'format' => 'fieldset',
        ),
        '4' => array(
          'format' => 'fieldset',
        ),
        'token' => array(
          'format' => 'fieldset',
        ),
        'description' => NULL,
      ),
      'multigroup' => array(
        'multiple' => 1,
      ),
    ),
    'weight' => '76',
    'fields' => array(
      '0' => 'field_event_date',
      '1' => 'field_event_start_time',
      '2' => 'field_event_end_time',
      '3' => 'field_event_address',
      '4' => 'field_event_city',
      '5' => 'field_event_zip',
      '6' => 'field_event_map_link',
      '7' => 'field_event_created_at',
      '8' => 'field_event_location_name',
      '9' => 'field_event_service_type_name',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('servicegrp');

  return $groups;
}
