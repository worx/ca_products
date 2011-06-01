<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_products_user_default_roles() {
  $roles = array();

  // Exported role: products admin
  $roles['products admin'] = array(
    'name' => 'products admin',
  );

  return $roles;
}
