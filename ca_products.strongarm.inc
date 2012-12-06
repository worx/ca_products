<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_products_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_product_category';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'menu' => '-1',
    'path' => '3',
    'page_title' => '-4',
  );

  $export['content_extra_weights_ca_product_category'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_products';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '1',
    'revision_information' => '3',
    'author' => '2',
    'options' => '4',
    'menu' => '0',
    'path' => '5',
    'page_title' => '-4',
  );

  $export['content_extra_weights_ca_products'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_product_category';
  $strongarm->value = 'form-6e675dd5790305a779d061698a864946';

  $export['form_build_id_ca_product_category'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_products';
  $strongarm->value = 'form-9c3b33ff80f2461ce12d5a58d2ee45cf';

  $export['form_build_id_ca_products'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_product_category';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_product_category'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_products';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_products'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_product_category_pattern';
  $strongarm->value = '[ca-products-category-parent-reference-path]/[title-raw]';

  $export['pathauto_node_ca_product_category_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_products_pattern';
  $strongarm->value = '[ca-products-category-parent-reference-path]/[title-raw]';

  $export['pathauto_node_ca_products_pattern'] = $strongarm;
  return $export;
}
