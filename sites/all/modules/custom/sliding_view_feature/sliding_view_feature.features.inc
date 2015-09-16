<?php
/**
 * @file
 * sliding_view_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function sliding_view_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sliding_view_feature_node_info() {
  $items = array(
    'picture' => array(
      'name' => t('Picture'),
      'base' => 'node_content',
      'description' => t('display a individual image'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
