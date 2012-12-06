<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_products_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ca_products_imagecache_default_presets() {
  $items = array(
    'ca_products_p_scale_200w' => array(
      'presetname' => 'ca_products_p_scale_200w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'ca_products_p_thumb_45w_45h' => array(
      'presetname' => 'ca_products_p_thumb_45w_45h',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_resize',
          'data' => array(
            'width' => '45',
            'height' => '45',
          ),
        ),
      ),
    ),
    'ca_products_pc_scale_200w' => array(
      'presetname' => 'ca_products_pc_scale_200w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function ca_products_node_info() {
  $items = array(
    'ca_product_category' => array(
      'name' => t('CA Product Category'),
      'module' => 'features',
      'description' => t('This content type is used to add categorization to the products.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'ca_products' => array(
      'name' => t('CA Products'),
      'module' => 'features',
      'description' => t('This content type is used to add new products to the website.'),
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

/**
 * Implementation of hook_views_api().
 */
function ca_products_views_api() {
  return array(
    'api' => '2',
  );
}
