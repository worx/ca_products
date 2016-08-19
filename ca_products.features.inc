<?php
/**
 * @file
 * ca_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ca_products_node_info() {
  $items = array(
    'ca_product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ca_product_category' => array(
      'name' => t('Product Category'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ca_products_weight_features_default_settings() {
  $settings = array();

  $settings['ca_product'] = array(
    'enabled' => 1,
    'range' => 100,
    'menu_weight' => 0,
    'default' => -100,
    'sync_translations' => 0,
  );

  $settings['ca_product_category'] = array(
    'enabled' => 1,
    'range' => 100,
    'menu_weight' => 0,
    'default' => -100,
    'sync_translations' => 0,
  );

  return $settings;
}
