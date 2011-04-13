<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function background_user_default_permissions() {
  $permissions = array();

  // Exported permission: override background promote to front page option
  $permissions['override background promote to front page option'] = array(
    'name' => 'override background promote to front page option',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: override background published option
  $permissions['override background published option'] = array(
    'name' => 'override background published option',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  return $permissions;
}
