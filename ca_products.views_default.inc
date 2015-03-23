<?php
/**
 * @file
 * ca_products.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_products_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ca_products_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Products Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Language */
  $handler->display->display_options['arguments']['language']['id'] = 'language';
  $handler->display->display_options['arguments']['language']['table'] = 'node';
  $handler->display->display_options['arguments']['language']['field'] = 'language';
  $handler->display->display_options['arguments']['language']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['language']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product' => 'ca_product',
  );

  /* Display: CA Products: Category Admin */
  $handler = $view->new_display('panel_pane', 'CA Products: Category Admin', 'ca_products_category_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product_category' => 'ca_product_category',
  );
  /* Filter criterion: Content: Parent Category (field_ca_category_parent) */
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['id'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['table'] = 'field_data_field_ca_category_parent';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['field'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['operator'] = 'empty';
  $handler->display->display_options['pane_title'] = 'CA Products: Category Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'language' => array(
      'type' => 'context',
      'context' => 'language.language',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Language',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Products: Sub Category Admin */
  $handler = $view->new_display('panel_pane', 'CA Products: Sub Category Admin', 'ca_products_sub_cat_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'views_bulk_operations' => 'views_bulk_operations',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_category_parent) */
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['id'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['table'] = 'field_data_field_ca_category_parent';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['field'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product_category' => 'ca_product_category',
  );
  $handler->display->display_options['pane_title'] = 'CA Products: Sub Category Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_ca_category_parent_target_id' => array(
      'type' => 'none',
      'context' => 'language.language',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Parent Category (field_ca_category_parent)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Products: Product Admin */
  $handler = $view->new_display('panel_pane', 'CA Products: Product Admin', 'ca_products_product_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'views_bulk_operations' => 'views_bulk_operations',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_product_parent_category) */
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['id'] = 'field_ca_product_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['table'] = 'field_data_field_ca_product_parent_category';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['field'] = 'field_ca_product_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Products: Product Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_ca_product_parent_category_target_id' => array(
      'type' => 'none',
      'context' => 'language.language',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Parent Category (field_ca_product_parent_category)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['ca_products_admin'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('CA Products: Category Admin'),
    t('- Choose an operation -'),
    t('Title'),
    t('Published'),
    t('Edit link'),
    t('Edit'),
    t('CA Admin'),
    t('CA Products: Sub Category Admin'),
    t('CA Products: Product Admin'),
  );
  $export['ca_products_admin'] = $view;

  $view = new view();
  $view->name = 'ca_products_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Products List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Coming soon.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Language */
  $handler->display->display_options['arguments']['language']['id'] = 'language';
  $handler->display->display_options['arguments']['language']['table'] = 'node';
  $handler->display->display_options['arguments']['language']['field'] = 'language';
  $handler->display->display_options['arguments']['language']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['language']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product' => 'ca_product',
  );

  /* Display: CA Products: Category List Template One */
  $handler = $view->new_display('panel_pane', 'CA Products: Category List Template One', 'ca_products_category_list_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category Image */
  $handler->display->display_options['fields']['field_ca_product_category_image']['id'] = 'field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['table'] = 'field_data_field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['field'] = 'field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_product_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_product_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_product_category_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product_category' => 'ca_product_category',
  );
  /* Filter criterion: Content: Parent Category (field_ca_category_parent) */
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['id'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['table'] = 'field_data_field_ca_category_parent';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['field'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['operator'] = 'empty';
  $handler->display->display_options['pane_title'] = 'CA Products: Category List Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'language' => array(
      'type' => 'context',
      'context' => 'language.language',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Language',
    ),
  );

  /* Display: CA Products: Sub Category List Template One */
  $handler = $view->new_display('panel_pane', 'CA Products: Sub Category List Template One', 'ca_products_sub_cat_list_one');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category Image */
  $handler->display->display_options['fields']['field_ca_product_category_image']['id'] = 'field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['table'] = 'field_data_field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['field'] = 'field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_product_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_product_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_product_category_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_category_parent) */
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['id'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['table'] = 'field_data_field_ca_category_parent';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['field'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product_category' => 'ca_product_category',
  );
  $handler->display->display_options['pane_title'] = 'CA Products: Sub Category List Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_ca_category_parent_target_id' => array(
      'type' => 'none',
      'context' => 'entity:node.author',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Parent Category (field_ca_category_parent)',
    ),
    'language' => array(
      'type' => 'context',
      'context' => 'language.language',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Language',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Products: Product List View Template One */
  $handler = $view->new_display('panel_pane', 'CA Products: Product List View Template One', 'ca_products_product_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_product_image']['id'] = 'field_ca_product_image';
  $handler->display->display_options['fields']['field_ca_product_image']['table'] = 'field_data_field_ca_product_image';
  $handler->display->display_options['fields']['field_ca_product_image']['field'] = 'field_ca_product_image';
  $handler->display->display_options['fields']['field_ca_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_product_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_product_image']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_product_parent_category) */
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['id'] = 'field_ca_product_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['table'] = 'field_data_field_ca_product_parent_category';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['field'] = 'field_ca_product_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Products: Product List Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_ca_product_parent_category_target_id' => array(
      'type' => 'none',
      'context' => 'entity:node.author',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Parent Category (field_ca_product_parent_category)',
    ),
    'language' => array(
      'type' => 'context',
      'context' => 'language.language',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Language',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Products: Category Flex Template One */
  $handler = $view->new_display('panel_pane', 'CA Products: Category Flex Template One', 'ca_products_category_flex_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category Image */
  $handler->display->display_options['fields']['field_ca_product_category_image']['id'] = 'field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['table'] = 'field_data_field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['field'] = 'field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_product_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_product_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_product_category_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product_category' => 'ca_product_category',
  );
  /* Filter criterion: Content: Parent Category (field_ca_category_parent) */
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['id'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['table'] = 'field_data_field_ca_category_parent';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['field'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['operator'] = 'empty';
  $handler->display->display_options['pane_title'] = 'CA Products: Category Flex Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: CA Products: Sub Category Flex Template One */
  $handler = $view->new_display('panel_pane', 'CA Products: Sub Category Flex Template One', 'ca_products_sub_cat_flex_one');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category Image */
  $handler->display->display_options['fields']['field_ca_product_category_image']['id'] = 'field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['table'] = 'field_data_field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['field'] = 'field_ca_product_category_image';
  $handler->display->display_options['fields']['field_ca_product_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_product_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_product_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_product_category_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_category_parent) */
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['id'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['table'] = 'field_data_field_ca_category_parent';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['field'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product_category' => 'ca_product_category',
  );
  $handler->display->display_options['pane_title'] = 'CA Products: Sub Category Flex Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['ca_products_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Coming soon.'),
    t('All'),
    t('CA Products: Category List Template One'),
    t('CA List'),
    t('CA Products: Sub Category List Template One'),
    t('CA Products: Product List View Template One'),
    t('Read More'),
    t('CA Products: Product List Template One'),
    t('CA Products: Category Flex Template One'),
    t('CA Products: Sub Category Flex Template One'),
  );
  $export['ca_products_list'] = $view;

  $view = new view();
  $view->name = 'ca_products_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Products Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product' => 'ca_product',
  );

  /* Display: CA Products: Node View Template One A */
  $handler = $view->new_display('panel_pane', 'CA Products: Node View Template One A', 'ca_products_node_1a');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_product_image']['id'] = 'field_ca_product_image';
  $handler->display->display_options['fields']['field_ca_product_image']['table'] = 'field_data_field_ca_product_image';
  $handler->display->display_options['fields']['field_ca_product_image']['field'] = 'field_ca_product_image';
  $handler->display->display_options['fields']['field_ca_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_product_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_product_image']['settings'] = array(
    'colorbox_node_style' => 'default',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
  );
  $handler->display->display_options['fields']['field_ca_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_product_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Products: Node View Template One A';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: CA Products: Node View Template One B */
  $handler = $view->new_display('panel_pane', 'CA Products: Node View Template One B', 'ca_products_node_1b');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_product_image']['id'] = 'field_ca_product_image';
  $handler->display->display_options['fields']['field_ca_product_image']['table'] = 'field_data_field_ca_product_image';
  $handler->display->display_options['fields']['field_ca_product_image']['field'] = 'field_ca_product_image';
  $handler->display->display_options['fields']['field_ca_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_product_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_product_image']['settings'] = array(
    'colorbox_node_style' => 'default_thumbnail',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ca_product_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ca_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_product_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Products: Node View Template One B';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Products: Node View Videos Template One */
  $handler = $view->new_display('panel_pane', 'CA Products: Node View Videos Template One', 'ca_products_node_video_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_ca_product_video']['id'] = 'field_ca_product_video';
  $handler->display->display_options['fields']['field_ca_product_video']['table'] = 'field_data_field_ca_product_video';
  $handler->display->display_options['fields']['field_ca_product_video']['field'] = 'field_ca_product_video';
  $handler->display->display_options['fields']['field_ca_product_video']['label'] = '';
  $handler->display->display_options['fields']['field_ca_product_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_product_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_product_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_ca_product_video']['settings'] = array(
    'file_view_mode' => 'worxco_video_displays_small',
  );
  $handler->display->display_options['fields']['field_ca_product_video']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ca_product_video']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Products: Node View Videos Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['ca_products_node'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('CA Products: Node View Template One A'),
    t('All'),
    t('CA Node'),
    t('CA Products: Node View Template One B'),
    t('CA Products: Node View Videos Template One'),
  );
  $export['ca_products_node'] = $view;

  $view = new view();
  $view->name = 'ca_products_sorting';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Products Sorting';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Weight: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Language */
  $handler->display->display_options['arguments']['language']['id'] = 'language';
  $handler->display->display_options['arguments']['language']['table'] = 'node';
  $handler->display->display_options['arguments']['language']['field'] = 'language';
  $handler->display->display_options['arguments']['language']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['language']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product' => 'ca_product',
  );

  /* Display: CA Products: Parent Category Sort */
  $handler = $view->new_display('panel_pane', 'CA Products: Parent Category Sort', 'ca_products_parent_category_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product_category' => 'ca_product_category',
  );
  /* Filter criterion: Content: Parent Category (field_ca_category_parent) */
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['id'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['table'] = 'field_data_field_ca_category_parent';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['field'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_category_parent_target_id']['operator'] = 'empty';
  $handler->display->display_options['pane_title'] = 'CA Products: Parent Category Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'language' => array(
      'type' => 'context',
      'context' => 'language.language',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Language',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Products: Sub-Category Sort */
  $handler = $view->new_display('panel_pane', 'CA Products: Sub-Category Sort', 'ca_products_sub_category_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_category_parent) */
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['id'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['table'] = 'field_data_field_ca_category_parent';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['field'] = 'field_ca_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_category_parent_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product_category' => 'ca_product_category',
  );
  $handler->display->display_options['pane_title'] = 'CA Products: Sub-Category Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_ca_category_parent_target_id' => array(
      'type' => 'none',
      'context' => 'language.language',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Parent Category (field_ca_category_parent)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Products: Product Sort */
  $handler = $view->new_display('panel_pane', 'CA Products: Product Sort', 'ca_products_product_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_product_parent_category) */
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['id'] = 'field_ca_product_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['table'] = 'field_data_field_ca_product_parent_category';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['field'] = 'field_ca_product_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_product_parent_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_product' => 'ca_product',
  );
  $handler->display->display_options['pane_title'] = 'CA Products: Product Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_ca_product_parent_category_target_id' => array(
      'type' => 'none',
      'context' => 'language.language',
      'context_optional' => 0,
      'panel' => 0,
      'fixed' => '',
      'label' => 'Content: Parent Category (field_ca_product_parent_category)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['ca_products_sorting'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Weight'),
    t('All'),
    t('CA Products: Parent Category Sort'),
    t('CA Sort'),
    t('CA Products: Sub-Category Sort'),
    t('CA Products: Product Sort'),
  );
  $export['ca_products_sorting'] = $view;

  return $export;
}
