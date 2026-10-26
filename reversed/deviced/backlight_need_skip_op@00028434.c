/* deviced : backlight_need_skip_op@00028434 */

code backlight_need_skip_op(void)

{
  return backlight_get_cur_panel_state[DAT_00028454 + 1];
}

