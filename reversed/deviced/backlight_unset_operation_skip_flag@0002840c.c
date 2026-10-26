/* deviced : backlight_unset_operation_skip_flag@0002840c */

void backlight_unset_operation_skip_flag(void)

{
  backlight_need_skip_op[DAT_00028430 + 1] = (code)0x0;
  return;
}

