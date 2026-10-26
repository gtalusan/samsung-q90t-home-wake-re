/* deviced : backlight_set_operation_skip_flag@000283e4 */

void backlight_set_operation_skip_flag(void)

{
  backlight_unset_operation_skip_flag[DAT_00028408 + 1] = (code)0x1;
  return;
}

