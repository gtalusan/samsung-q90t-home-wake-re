/* tvctx-manager : util_rotate_landscape@0001f4f4 */

void util_rotate_landscape(undefined4 param_1)

{
  vconf_set_str("memory/sero/rotation_reason",param_1);
  display_rotator_set_orientation(1);
  return;
}

