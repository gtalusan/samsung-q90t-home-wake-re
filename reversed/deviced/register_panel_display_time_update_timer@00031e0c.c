/* deviced : register_panel_display_time_update_timer@00031e0c */

void register_panel_display_time_update_timer(void)

{
  g_idle_add_full(0,DAT_00031e34 + 0x31e20,0);
  return;
}

