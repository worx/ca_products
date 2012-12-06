<?php

/**
 * Define the function ca_products_admin_settings_form().
 *
 * This function will create the admin settings page.
 */
function ca_products_admin_settings_form() {
  $form = array();

  $form['category_list'] = array(
    '#type' => 'select',
    '#title' => t('Category\'s List Template'),
    '#description' => t('This effects the look and feel for the Page Manager page at the path "products"'),
    '#options' => array(
      'ca_products_category_list_template_one' => t('Template One'),
      'ca_products_category_list_template_two' => t('Template Two'),
      'ca_products_category_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_products_category_list_template', 'ca_products_category_list_template_one'),
    '#required' => TRUE,
  );
  $form['category_node'] = array(
    '#type' => 'select',
    '#title' => t('Category\'s Node Template'),
    '#description' => t('This effects the look and feel for the "ca_product_category" Node Type.'),
    '#options' => array(
      'ca_products_category_node_template_one' => t('Template One'),
      'ca_products_category_node_template_two' => t('Template Two'),
      'ca_products_category_node_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_products_category_node_template', 'ca_products_category_node_template_one'),
    '#required' => TRUE,
  );
  $form['product_node'] = array(
    '#type' => 'select',
    '#title' => t('Product\'s Node Template'),
    '#description' => t('This effect the look and feel for the "ca_products" Node Type.'),
    '#options' => array(
      'ca_products_product_node_template_one' => t('Template One'),
      'ca_products_product_node_template_two' => t('Template Two'),
      'ca_products_product_node_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_products_product_node_template', 'ca_products_product_node_template_one'),
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('ca_products_admin_settings_form_submit'),
  );

  return $form;
}

/*
 * Define the function ca_products_admin_settings_form_submit().
 *
 * This function will save the admin settings page.
 */
function ca_products_admin_settings_form_submit($form, &$form_state) {
  variable_set('ca_products_category_list_template', $form_state['values']['category_list']);
  variable_set('ca_products_category_node_template', $form_state['values']['category_node']);
  variable_set('ca_products_product_node_template', $form_state['values']['product_node']);
  drupal_set_message('Configuration has been saved.');
}
