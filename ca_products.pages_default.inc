<?php
/**
 * @file
 * ca_products.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_products_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_products_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Products: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-product-node ca-product-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_product' => 'ca_product',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1930faac-1db2-401f-a0b0-fce352ccbc15';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a3cabede-6555-4e89-979e-0be183028576';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_node-ca_products_node_1a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3cabede-6555-4e89-979e-0be183028576';
    $display->content['new-a3cabede-6555-4e89-979e-0be183028576'] = $pane;
    $display->panels['middle'][0] = 'new-a3cabede-6555-4e89-979e-0be183028576';
    $pane = new stdClass();
    $pane->pid = 'new-386e9463-74ac-45f3-acf3-d80c46d30351';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_node-ca_products_node_1b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '386e9463-74ac-45f3-acf3-d80c46d30351';
    $display->content['new-386e9463-74ac-45f3-acf3-d80c46d30351'] = $pane;
    $display->panels['middle'][1] = 'new-386e9463-74ac-45f3-acf3-d80c46d30351';
    $pane = new stdClass();
    $pane->pid = 'new-378e4873-3f72-4f82-ae48-8922b040cafd';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '378e4873-3f72-4f82-ae48-8922b040cafd';
    $display->content['new-378e4873-3f72-4f82-ae48-8922b040cafd'] = $pane;
    $display->panels['middle'][2] = 'new-378e4873-3f72-4f82-ae48-8922b040cafd';
    $pane = new stdClass();
    $pane->pid = 'new-84613567-dfd9-4807-b07b-4b100f821b3c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_node-ca_products_node_video_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '84613567-dfd9-4807-b07b-4b100f821b3c';
    $display->content['new-84613567-dfd9-4807-b07b-4b100f821b3c'] = $pane;
    $display->panels['middle'][3] = 'new-84613567-dfd9-4807-b07b-4b100f821b3c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_products_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_products_node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'CA Products: Category Grid Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-product-category-node ca-product-category-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_product_category' => 'ca_product_category',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_products_list_template',
          'settings' => array(
            'ca_products_list_template' => 'ca_products_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '71eed9e2-f07d-4f23-afab-a6ad5f67f25a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-95557168-ce26-4f32-bee4-5fff2edc9d84';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ca_product_category_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95557168-ce26-4f32-bee4-5fff2edc9d84';
    $display->content['new-95557168-ce26-4f32-bee4-5fff2edc9d84'] = $pane;
    $display->panels['middle'][0] = 'new-95557168-ce26-4f32-bee4-5fff2edc9d84';
    $pane = new stdClass();
    $pane->pid = 'new-e8e6cda9-4d77-4426-9480-8872f76ab43d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_sub_cat_list_one';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        1 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e8e6cda9-4d77-4426-9480-8872f76ab43d';
    $display->content['new-e8e6cda9-4d77-4426-9480-8872f76ab43d'] = $pane;
    $display->panels['middle'][1] = 'new-e8e6cda9-4d77-4426-9480-8872f76ab43d';
    $pane = new stdClass();
    $pane->pid = 'new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_product_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        1 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
    $display->content['new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed'] = $pane;
    $display->panels['middle'][2] = 'new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_products_node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_products_node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'CA Products: Category Flex Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-product-category-node-flex ca-product-category-node-flex-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_product_category' => 'ca_product_category',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_products_list_template',
          'settings' => array(
            'ca_products_list_template' => 'ca_products_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '71eed9e2-f07d-4f23-afab-a6ad5f67f25a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-95557168-ce26-4f32-bee4-5fff2edc9d84';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ca_product_category_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95557168-ce26-4f32-bee4-5fff2edc9d84';
    $display->content['new-95557168-ce26-4f32-bee4-5fff2edc9d84'] = $pane;
    $display->panels['middle'][0] = 'new-95557168-ce26-4f32-bee4-5fff2edc9d84';
    $pane = new stdClass();
    $pane->pid = 'new-8477f158-253d-4cd4-81c1-08b5d46681b7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_sub_cat_flex_one';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8477f158-253d-4cd4-81c1-08b5d46681b7';
    $display->content['new-8477f158-253d-4cd4-81c1-08b5d46681b7'] = $pane;
    $display->panels['middle'][1] = 'new-8477f158-253d-4cd4-81c1-08b5d46681b7';
    $pane = new stdClass();
    $pane->pid = 'new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_product_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
    $display->content['new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed'] = $pane;
    $display->panels['middle'][2] = 'new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_products_node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_5cfc02bd-1431-43c0-ae43-dda574e5617d';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Aurora Products: Category Grid Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-product-category-node ca-product-category-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_product_category' => 'ca_product_category',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_products_list_template',
          'settings' => array(
            'ca_products_list_template' => 'ca_products_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '71eed9e2-f07d-4f23-afab-a6ad5f67f25a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-95557168-ce26-4f32-bee4-5fff2edc9d84';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ca_product_category_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95557168-ce26-4f32-bee4-5fff2edc9d84';
    $display->content['new-95557168-ce26-4f32-bee4-5fff2edc9d84'] = $pane;
    $display->panels['middle'][0] = 'new-95557168-ce26-4f32-bee4-5fff2edc9d84';
    $pane = new stdClass();
    $pane->pid = 'new-e8e6cda9-4d77-4426-9480-8872f76ab43d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_sub_cat_list_one';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        1 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e8e6cda9-4d77-4426-9480-8872f76ab43d';
    $display->content['new-e8e6cda9-4d77-4426-9480-8872f76ab43d'] = $pane;
    $display->panels['middle'][1] = 'new-e8e6cda9-4d77-4426-9480-8872f76ab43d';
    $pane = new stdClass();
    $pane->pid = 'new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_product_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        1 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
    $display->content['new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed'] = $pane;
    $display->panels['middle'][2] = 'new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_5cfc02bd-1431-43c0-ae43-dda574e5617d'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a4bbd56e-a6d1-49c8-bade-1a671be011de';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Aurora Products: Node Template',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-product-node ca-product-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_product' => 'ca_product',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1930faac-1db2-401f-a0b0-fce352ccbc15';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a3cabede-6555-4e89-979e-0be183028576';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_node-ca_products_node_1a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3cabede-6555-4e89-979e-0be183028576';
    $display->content['new-a3cabede-6555-4e89-979e-0be183028576'] = $pane;
    $display->panels['first-first'][0] = 'new-a3cabede-6555-4e89-979e-0be183028576';
    $pane = new stdClass();
    $pane->pid = 'new-84613567-dfd9-4807-b07b-4b100f821b3c';
    $pane->panel = 'fourth-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_node-ca_products_node_video_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '84613567-dfd9-4807-b07b-4b100f821b3c';
    $display->content['new-84613567-dfd9-4807-b07b-4b100f821b3c'] = $pane;
    $display->panels['fourth-first'][0] = 'new-84613567-dfd9-4807-b07b-4b100f821b3c';
    $pane = new stdClass();
    $pane->pid = 'new-386e9463-74ac-45f3-acf3-d80c46d30351';
    $pane->panel = 'second-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_node-ca_products_node_1b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '386e9463-74ac-45f3-acf3-d80c46d30351';
    $display->content['new-386e9463-74ac-45f3-acf3-d80c46d30351'] = $pane;
    $display->panels['second-first'][0] = 'new-386e9463-74ac-45f3-acf3-d80c46d30351';
    $pane = new stdClass();
    $pane->pid = 'new-378e4873-3f72-4f82-ae48-8922b040cafd';
    $pane->panel = 'third-first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '378e4873-3f72-4f82-ae48-8922b040cafd';
    $display->content['new-378e4873-3f72-4f82-ae48-8922b040cafd'] = $pane;
    $display->panels['third-first'][0] = 'new-378e4873-3f72-4f82-ae48-8922b040cafd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a4bbd56e-a6d1-49c8-bade-1a671be011de'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_d8e49cd1-b211-4690-80e2-b86b134925be';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Aurora Products: Category Flex Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-product-category-node-flex ca-product-category-node-flex-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_product_category' => 'ca_product_category',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_products_list_template',
          'settings' => array(
            'ca_products_list_template' => 'ca_products_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '71eed9e2-f07d-4f23-afab-a6ad5f67f25a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-95557168-ce26-4f32-bee4-5fff2edc9d84';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ca_product_category_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95557168-ce26-4f32-bee4-5fff2edc9d84';
    $display->content['new-95557168-ce26-4f32-bee4-5fff2edc9d84'] = $pane;
    $display->panels['middle'][0] = 'new-95557168-ce26-4f32-bee4-5fff2edc9d84';
    $pane = new stdClass();
    $pane->pid = 'new-8477f158-253d-4cd4-81c1-08b5d46681b7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_sub_cat_flex_one';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8477f158-253d-4cd4-81c1-08b5d46681b7';
    $display->content['new-8477f158-253d-4cd4-81c1-08b5d46681b7'] = $pane;
    $display->panels['middle'][1] = 'new-8477f158-253d-4cd4-81c1-08b5d46681b7';
    $pane = new stdClass();
    $pane->pid = 'new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_product_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
    $display->content['new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed'] = $pane;
    $display->panels['middle'][2] = 'new-3f0db9ed-6c0e-49c3-8813-12fa4c670eed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_d8e49cd1-b211-4690-80e2-b86b134925be'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_products_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_products_add_new_category';
  $page->task = 'page';
  $page->admin_title = 'CA Products: Add New Category';
  $page->admin_description = '';
  $page->path = 'products/add_category';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 212478245,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add New Category',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_add_new_category__aurora_add_new_category';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_add_new_category';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Add New Category',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora_add_new_category',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c99aa758-fc27-4929-8c25-b0b4ef8b5802';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c648f7cc-a36c-47c9-adb5-7acec5536800';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'ca_product_category',
      'context_admin_use_node_edit' => 0,
      'context' => 'empty',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c648f7cc-a36c-47c9-adb5-7acec5536800';
    $display->content['new-c648f7cc-a36c-47c9-adb5-7acec5536800'] = $pane;
    $display->panels['first-first'][0] = 'new-c648f7cc-a36c-47c9-adb5-7acec5536800';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_add_new_category_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_add_new_category';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_product_category',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_products_add_new_category'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_products_add_product';
  $page->task = 'page';
  $page->admin_title = 'CA Products: Add Product';
  $page->admin_description = '';
  $page->path = 'node/%node/add_product';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 212478245,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_product_category' => 'ca_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Product',
    'name' => 'navigation',
    'weight' => '9',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_add_product_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_add_product';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'entityref_create_node:ca_product:field_ca_product_parent_category',
    'context_admin_options_items' => 'ca_product',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
    'context_admin_field' => 'field_ca_product_parent_category',
    'context_admin_custom_redirect' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_add_product__aurora_add_product';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_add_product';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Add Product',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora_add_product',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97c05506-da4a-4746-84a1-04c1ed850114';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f74d2894-ca64-4e4e-9b46-2dd8b62e7523';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'ca_product',
      'context_admin_use_node_edit' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f74d2894-ca64-4e4e-9b46-2dd8b62e7523';
    $display->content['new-f74d2894-ca64-4e4e-9b46-2dd8b62e7523'] = $pane;
    $display->panels['first-first'][0] = 'new-f74d2894-ca64-4e4e-9b46-2dd8b62e7523';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f74d2894-ca64-4e4e-9b46-2dd8b62e7523';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_products_add_product'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_products_add_sub_category';
  $page->task = 'page';
  $page->admin_title = 'CA Products: Add Sub Category';
  $page->admin_description = '';
  $page->path = 'node/%node/add_sub_category';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_product_category' => 'ca_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 212478245,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add New Subcategory',
    'name' => 'navigation',
    'weight' => '19',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_add_sub_category_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_add_sub_category';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'entityref_create_node:ca_product_category:field_ca_category_parent',
    'context_admin_options_items' => 'ca_product_category',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
    'context_admin_field' => 'field_ca_category_parent',
    'context_admin_custom_redirect' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_add_sub_category__aurora_add_sub_category';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_add_sub_category';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Add Sub Category',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora_add_sub_category',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '65764f64-3ea8-4abd-9975-63cdd9511978';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bda1eb59-9958-4317-ba5d-cd61d592d964';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'ca_product_category',
      'context_admin_use_node_edit' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bda1eb59-9958-4317-ba5d-cd61d592d964';
    $display->content['new-bda1eb59-9958-4317-ba5d-cd61d592d964'] = $pane;
    $display->panels['first-first'][0] = 'new-bda1eb59-9958-4317-ba5d-cd61d592d964';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bda1eb59-9958-4317-ba5d-cd61d592d964';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_products_add_sub_category'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_products_category_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Products: Category Admin';
  $page->admin_description = '';
  $page->path = 'products/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 212478245,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '20',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_category_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_category_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Products: Category Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-products-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Language',
        'keyword' => 'language',
        'name' => 'language',
        'language' => 'current',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Product Categories';
  $display->uuid = '7eaf57ec-a7af-4a58-b802-133f26484ba3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6361c2f3-7670-4415-9cb5-692562037a17';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_admin-ca_products_category_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6361c2f3-7670-4415-9cb5-692562037a17';
    $display->content['new-6361c2f3-7670-4415-9cb5-692562037a17'] = $pane;
    $display->panels['middle'][0] = 'new-6361c2f3-7670-4415-9cb5-692562037a17';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_category_admin__panel_context_2eb36c71-687b-4173-bd04-742c2ca47469';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_category_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Category Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-products-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Language',
        'keyword' => 'language',
        'name' => 'language',
        'language' => 'current',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Product Categories';
  $display->uuid = '7eaf57ec-a7af-4a58-b802-133f26484ba3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6361c2f3-7670-4415-9cb5-692562037a17';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_admin-ca_products_category_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6361c2f3-7670-4415-9cb5-692562037a17';
    $display->content['new-6361c2f3-7670-4415-9cb5-692562037a17'] = $pane;
    $display->panels['first-first'][0] = 'new-6361c2f3-7670-4415-9cb5-692562037a17';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_products_category_admin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_products_parent_category_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Products: Parent Category Sort';
  $page->admin_description = '';
  $page->path = 'products/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 212478245,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort Categories',
    'name' => 'navigation',
    'weight' => '20',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_parent_category_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_parent_category_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Products: Parent Product Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-products-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Language',
        'keyword' => 'language',
        'name' => 'language',
        'language' => 'current',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Parent Categories';
  $display->uuid = '2ef98bd7-78a3-415a-85b0-209e1ea32d4d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9eebcea2-e878-4c17-9ea1-224bd50b8b97';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_sorting-ca_products_parent_category_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9eebcea2-e878-4c17-9ea1-224bd50b8b97';
    $display->content['new-9eebcea2-e878-4c17-9ea1-224bd50b8b97'] = $pane;
    $display->panels['middle'][0] = 'new-9eebcea2-e878-4c17-9ea1-224bd50b8b97';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_parent_category_sort__panel_context_75fc6d1b-7438-4e21-83ea-d16079c7dfc0';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_parent_category_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Parent Product Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-products-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Language',
        'keyword' => 'language',
        'name' => 'language',
        'language' => 'current',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Parent Categories';
  $display->uuid = '2ef98bd7-78a3-415a-85b0-209e1ea32d4d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9eebcea2-e878-4c17-9ea1-224bd50b8b97';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_sorting-ca_products_parent_category_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9eebcea2-e878-4c17-9ea1-224bd50b8b97';
    $display->content['new-9eebcea2-e878-4c17-9ea1-224bd50b8b97'] = $pane;
    $display->panels['middle'][0] = 'new-9eebcea2-e878-4c17-9ea1-224bd50b8b97';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_products_parent_category_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_products_product_catalog';
  $page->task = 'page';
  $page->admin_title = 'CA Products: Product Catalog';
  $page->admin_description = '';
  $page->path = 'products/view';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Products',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_product_catalog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_product_catalog';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'CA Products: Product Category Grid',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-product-list ca-product-cetegory-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Language',
        'keyword' => 'language',
        'name' => 'language',
        'language' => 'current',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_products_list_template',
          'settings' => array(
            'ca_products_list_template' => 'ca_products_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a4b5bc44-ee90-4905-9863-de507514626b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d54d760-0fcd-44c3-9175-f7978632a4cf';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_category_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8d54d760-0fcd-44c3-9175-f7978632a4cf';
    $display->content['new-8d54d760-0fcd-44c3-9175-f7978632a4cf'] = $pane;
    $display->panels['middle'][0] = 'new-8d54d760-0fcd-44c3-9175-f7978632a4cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_product_catalog_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_product_catalog';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Products: Product Category Flex Grid',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-product-list ca-product-cetegory-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_products_list_template',
          'settings' => array(
            'ca_products_list_template' => 'ca_products_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a4b5bc44-ee90-4905-9863-de507514626b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9bfe2696-cafc-454d-89bb-27f477b006a4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_category_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9bfe2696-cafc-454d-89bb-27f477b006a4';
    $display->content['new-9bfe2696-cafc-454d-89bb-27f477b006a4'] = $pane;
    $display->panels['middle'][0] = 'new-9bfe2696-cafc-454d-89bb-27f477b006a4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_product_catalog__panel_context_3e15de98-3397-4ef8-a1f7-b6607e3cbecc';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_product_catalog';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Product Category Grid',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-product-list ca-product-cetegory-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Language',
        'keyword' => 'language',
        'name' => 'language',
        'language' => 'current',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_products_list_template',
          'settings' => array(
            'ca_products_list_template' => 'ca_products_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a4b5bc44-ee90-4905-9863-de507514626b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d54d760-0fcd-44c3-9175-f7978632a4cf';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_category_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8d54d760-0fcd-44c3-9175-f7978632a4cf';
    $display->content['new-8d54d760-0fcd-44c3-9175-f7978632a4cf'] = $pane;
    $display->panels['first-first'][0] = 'new-8d54d760-0fcd-44c3-9175-f7978632a4cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_product_catalog__panel_context_4bd0638c-1aee-4a58-89ad-2e473bdd226d';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_product_catalog';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Product Category Flex Grid',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-product-list ca-product-cetegory-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_products_list_template',
          'settings' => array(
            'ca_products_list_template' => 'ca_products_list_template_one_flex',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a4b5bc44-ee90-4905-9863-de507514626b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9bfe2696-cafc-454d-89bb-27f477b006a4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_list-ca_products_category_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9bfe2696-cafc-454d-89bb-27f477b006a4';
    $display->content['new-9bfe2696-cafc-454d-89bb-27f477b006a4'] = $pane;
    $display->panels['middle'][0] = 'new-9bfe2696-cafc-454d-89bb-27f477b006a4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_products_product_catalog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_products_product_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Products: Product Sort';
  $page->admin_description = '';
  $page->path = 'node/%node/ca_product_admin/product_sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 212478245,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_product_category' => 'ca_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort Products',
    'name' => 'navigation',
    'weight' => '40',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_product_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_product_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Products: Product Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-products-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Products';
  $display->uuid = 'c688efa2-d4df-4ab8-a0bc-641339f39f1e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ee0225ea-78db-4a63-a8f5-3d0e1582ca5e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_sorting-ca_products_product_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ee0225ea-78db-4a63-a8f5-3d0e1582ca5e';
    $display->content['new-ee0225ea-78db-4a63-a8f5-3d0e1582ca5e'] = $pane;
    $display->panels['middle'][0] = 'new-ee0225ea-78db-4a63-a8f5-3d0e1582ca5e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_product_sort__panel_context_ab41f176-9d4e-4807-a0f2-1510345b3540';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_product_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Product Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-products-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Products';
  $display->uuid = 'c688efa2-d4df-4ab8-a0bc-641339f39f1e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ee0225ea-78db-4a63-a8f5-3d0e1582ca5e';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_sorting-ca_products_product_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ee0225ea-78db-4a63-a8f5-3d0e1582ca5e';
    $display->content['new-ee0225ea-78db-4a63-a8f5-3d0e1582ca5e'] = $pane;
    $display->panels['first-first'][0] = 'new-ee0225ea-78db-4a63-a8f5-3d0e1582ca5e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_products_product_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_products_products_administration';
  $page->task = 'page';
  $page->admin_title = 'CA Products: Products Administration';
  $page->admin_description = '';
  $page->path = 'node/%node/ca_product_admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 212478245,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_product_category' => 'ca_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '20',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_products_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_products_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Products: Product Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-products-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Products';
  $display->uuid = 'c744eeac-84a2-4cbf-89a3-93fa2f76da66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fbc1ab84-7bbc-4da5-a792-599f656844c9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_admin-ca_products_sub_cat_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbc1ab84-7bbc-4da5-a792-599f656844c9';
    $display->content['new-fbc1ab84-7bbc-4da5-a792-599f656844c9'] = $pane;
    $display->panels['middle'][0] = 'new-fbc1ab84-7bbc-4da5-a792-599f656844c9';
    $pane = new stdClass();
    $pane->pid = 'new-4e52e4bd-5584-4523-a256-d641cd2cb418';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_admin-ca_products_product_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4e52e4bd-5584-4523-a256-d641cd2cb418';
    $display->content['new-4e52e4bd-5584-4523-a256-d641cd2cb418'] = $pane;
    $display->panels['middle'][1] = 'new-4e52e4bd-5584-4523-a256-d641cd2cb418';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_products_administration__panel_context_8aae9e94-beac-44db-ad78-3df14edf9781';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_products_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Product Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-products-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Products';
  $display->uuid = 'c744eeac-84a2-4cbf-89a3-93fa2f76da66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fbc1ab84-7bbc-4da5-a792-599f656844c9';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_admin-ca_products_sub_cat_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbc1ab84-7bbc-4da5-a792-599f656844c9';
    $display->content['new-fbc1ab84-7bbc-4da5-a792-599f656844c9'] = $pane;
    $display->panels['first-first'][0] = 'new-fbc1ab84-7bbc-4da5-a792-599f656844c9';
    $pane = new stdClass();
    $pane->pid = 'new-4e52e4bd-5584-4523-a256-d641cd2cb418';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_admin-ca_products_product_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_language_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4e52e4bd-5584-4523-a256-d641cd2cb418';
    $display->content['new-4e52e4bd-5584-4523-a256-d641cd2cb418'] = $pane;
    $display->panels['first-first'][1] = 'new-4e52e4bd-5584-4523-a256-d641cd2cb418';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_products_products_administration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_products_sub_category_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Products: Sub Category Sort';
  $page->admin_description = '';
  $page->path = 'node/%node/ca_product_admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 212478245,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_product_category' => 'ca_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Category Sort',
    'name' => 'navigation',
    'weight' => '29',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_sub_category_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_sub_category_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Products: Sub Category Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-products-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Product Sub Categories';
  $display->uuid = 'c782c1a1-c43f-4c8a-b598-0a56286b3fd3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-094fcd7d-c78a-4fee-90d2-b68a2fb08211';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_sorting-ca_products_sub_category_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '094fcd7d-c78a-4fee-90d2-b68a2fb08211';
    $display->content['new-094fcd7d-c78a-4fee-90d2-b68a2fb08211'] = $pane;
    $display->panels['middle'][0] = 'new-094fcd7d-c78a-4fee-90d2-b68a2fb08211';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_products_sub_category_sort__panel_context_5e844c4d-9ca8-4b40-964c-5fe17760fd0f';
  $handler->task = 'page';
  $handler->subtask = 'ca_products_sub_category_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Sub Category Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-products-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Product Sub Categories';
  $display->uuid = 'c782c1a1-c43f-4c8a-b598-0a56286b3fd3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-094fcd7d-c78a-4fee-90d2-b68a2fb08211';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_products_sorting-ca_products_sub_category_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '094fcd7d-c78a-4fee-90d2-b68a2fb08211';
    $display->content['new-094fcd7d-c78a-4fee-90d2-b68a2fb08211'] = $pane;
    $display->panels['middle'][0] = 'new-094fcd7d-c78a-4fee-90d2-b68a2fb08211';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_products_sub_category_sort'] = $page;

  return $pages;

}
