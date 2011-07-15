<?php

/**
 * Implementation of hook_node_info().
 */
function obituaries_node_info() {
  $items = array(
    'obit_user_links' => array(
      'name' => t('Obituary'),
      'module' => 'features',
      'description' => t('Content Type For Obituaries'),
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
