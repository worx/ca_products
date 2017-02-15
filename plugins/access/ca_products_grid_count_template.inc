<?php

/**
 * @file
 * Plugin to provide access control based upon ca_products admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Product: grid count'),
  'description' => t('Control access by products grid count.'),
  'callback' => 'ca_products_grid_count_template_access_check',
  'settings form' => 'ca_products_grid_count_template_access_settings',
  'settings form submit' => 'ca_products_grid_count_template_access_settings_submit',
  'summary' => 'ca_products_grid_count_template_access_summary',
);

/**
 * Settings form for the 'by products grid count' access plugin.
 */
function ca_products_grid_count_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_products_grid_count_template'] = array(
    '#type' => 'select',
    '#title' => t('Product\'s column count'),
    '#options' => array(
      'products-column-2' => t('Two Column'),
      'products-column-3' => t('Three Column'),
      'products-column-4' => t('Four Column'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_products_grid_count_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_products_grid_count_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_products_grid_count_template_access_check($conf, $context) {
  return $conf['ca_products_grid_count_template'] == variable_get('ca_products_grid_count_template', 'products-column-3');
}

/**
 * Provide a summary description based upon the checked products grid count.
 */
function ca_products_grid_count_template_access_summary($conf, $context) {
  switch ($conf['ca_products_grid_count_template']) {
    case 'products-column-2':
      $template = t('Two Column');
      break;
    case 'products-column-3':
      $template = t('Three Column');
      break;
    case 'products-column-4':
      $template = t('Four Column');
      break;
  }

  return t('Display template is set to: ' . $template);
}
