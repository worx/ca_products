<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("CA Products: Product node templates"),
  'description' => t('Control access by CA Products: Product node template settings.'),
  'callback' => 'ca_products_product_node_template_access_check',
  'settings form' => 'ca_products_product_node_template_access_settings',
  'settings form submit' => 'ca_products_product_node_template_access_settings_submit',
  'summary' => 'ca_products_product_node_template_access_summary',
);

/**
 * Settings form for the 'CA Products: Product node templates' access plugin ca_products_product_node_template_access_settings.
 */
function ca_products_product_node_template_access_settings(&$form, &$form_state, $conf) {
  $form['settings']['ca_products_product_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Product\'s Node Template'),
    '#options' => array(
      'ca_products_product_node_template_one' => t('Template One'),
      'ca_products_product_node_template_two' => t('Template Two'),
      'ca_products_product_node_template_three' => t('Template Three'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_products_product_node_template'],
  );
  return $form;
}

/**
 * Compress the node_types allowed to the minimum.
 */
function ca_products_product_node_template_access_settings_submit(&$form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_products_product_node_template_access_check($conf, $context) {
  return $conf['ca_products_product_node_template'] == variable_get('ca_products_product_node_template', 'ca_products_product_node_template_one');
}

/**
 * Provide a summary description based upon the checked node_types.
 */
function ca_products_product_node_template_access_summary($conf, $context) {
  if ($conf['ca_products_product_node_template'] == 'ca_products_product_node_template_one') {
    $template = t('Template One');
  }
  elseif ($conf['ca_products_product_node_template'] == 'ca_products_product_node_template_two') {
    $template = t('Template Two');
  }
  else {
    $template = t('Template Three');
  }
  return t('Display template is set to: ' . $template);
}
