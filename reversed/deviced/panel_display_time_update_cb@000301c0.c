/* deviced : panel_display_time_update_cb@000301c0 */

undefined4 panel_display_time_update_cb(void)

{
  update_panel_display_time_async();
  return 1;
}

