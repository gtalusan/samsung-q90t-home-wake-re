/* tvctx-manager : util_rotate_portrait@0001e7b4 */

void util_rotate_portrait(undefined4 param_1)

{
  vconf_set_str("memory/sero/rotation_reason",param_1);
  display_rotator_set_orientation(0);
  return;
}

