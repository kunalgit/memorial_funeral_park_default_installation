<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function life_journeys_module_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_lj_image
  $groups['life_journeys-group_lj_image'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'life_journeys',
    'group_name' => 'group_lj_image',
    'parent' => '',
    'label' => 'imagegrp',
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
        '2' => array(
          'format' => 'fieldset',
        ),
        '3' => array(
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
    'weight' => '42',
    'fields' => array(
      '0' => 'field_lj_image_caption',
      '1' => 'field_lj_image',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('imagegrp');

  return $groups;
}
