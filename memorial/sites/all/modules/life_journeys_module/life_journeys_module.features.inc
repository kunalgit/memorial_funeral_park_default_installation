<?php

/**
 * Implementation of hook_node_info().
 */
function life_journeys_module_node_info() {
  $items = array(
    'life_journeys' => array(
      'name' => t('Life Journeys'),
      'module' => 'features',
      'description' => t('Life Journey'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
