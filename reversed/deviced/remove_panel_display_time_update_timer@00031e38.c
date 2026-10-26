/* deviced : remove_panel_display_time_update_timer@00031e38 */

void remove_panel_display_time_update_timer(void)

{
  g_idle_add_full(0,DAT_00031e60 + 0x31e4c,0);
  return;
}

