/* libapp-context-manager-common.so : task_mgr_pause_partial_app@45ea213c */

void task_mgr_pause_partial_app
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  event_filter_handle(DAT_45ea215c + 0x45ea214c,*(undefined4 *)(param_1 + 0x2c),param_1,param_4,
                      param_4);
  event_filter_handle(DAT_45ea2160 + 0x45ea2158,*(undefined4 *)(param_1 + 0x2c),param_1);
  return;
}

