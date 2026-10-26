/* libapp-context-manager-common.so : task_mgr_init@45e9fe84 */

undefined4 task_mgr_init(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_45ea0060 + 0x45e9fe8e;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar1 = aul_listen_app_launch_signal_v2(*(undefined4 *)(iVar3 + DAT_45ea0064),param_1);
  if (iVar1 == 0) {
    iVar1 = aul_listen_app_dead_signal(*(undefined4 *)(iVar3 + DAT_45ea0068),param_1);
  }
  else {
    __dlog_print(0,6,DAT_45ea00a8 + 0x45e9ff6c,DAT_45ea00a4 + 0x45e9ff6a,DAT_45ea00a0 + 0x45e9ff97,
                 DAT_45ea009c + 0x45ea08c4,0x799);
    iVar1 = aul_listen_app_dead_signal(*(undefined4 *)(iVar3 + DAT_45ea0068),param_1);
  }
  if (iVar1 == 0) {
    iVar1 = aul_listen_app_status_signal(*(undefined4 *)(iVar3 + DAT_45ea006c),param_1);
  }
  else {
    __dlog_print(0,6,DAT_45ea00b8 + 0x45e9ffa2,DAT_45ea00b4 + 0x45e9ffa0,DAT_45ea00b0 + 0x45e9ffcd,
                 DAT_45ea00ac + 0x45ea08fa,0x79c);
    iVar1 = aul_listen_app_status_signal(*(undefined4 *)(iVar3 + DAT_45ea006c),param_1);
  }
  if (iVar1 != 0) {
    __dlog_print(0,6,DAT_45ea00c8 + 0x45e9ffd8,DAT_45ea00c4 + 0x45e9ffd6,DAT_45ea00c0 + 0x45ea0003,
                 DAT_45ea00bc + 0x45ea0930,0x79f);
  }
  aul_launch_init(0);
  iVar1 = aul_extension_set_operation_changed_callback(DAT_45ea0070 + 0x45e9fed0,param_1);
  if (iVar1 != 0) {
    __dlog_print(0,6,DAT_45ea00d8 + 0x45ea0002,DAT_45ea00d4 + 0x45ea0000,DAT_45ea00d0 + 0x45ea002d,
                 DAT_45ea00cc + 0x45ea095a,0x7a3);
  }
  uVar2 = g_hash_table_new(*(undefined4 *)(iVar3 + DAT_45ea0078),
                           *(undefined4 *)(iVar3 + DAT_45ea0074));
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  init_handler(param_1);
  init_task_list(param_1);
  iVar3 = vconf_get_str(DAT_45ea007c + 0x45e9fef8);
  *(int *)(DAT_45ea0080 + 0x45e9ff00) = iVar3;
  if (iVar3 == 0) {
    __dlog_print(0,6,DAT_45ea00f8 + 0x45ea0054,DAT_45ea00f4 + 0x45ea0052,DAT_45ea00f0 + 0x45ea0081,
                 DAT_45ea00ec + 0x45ea09ae,0x7ad);
  }
  util_vconf_add_handler(DAT_45ea0088 + 0x45e9ff12,DAT_45ea0084 + 0x45e9ff10,param_1);
  vconf_notify_key_changed(DAT_45ea0090 + 0x45e9ff20,DAT_45ea008c + 0x45e9ff1e,param_1);
  vconf_notify_key_changed(DAT_45ea0098 + 0x45e9ff2e,DAT_45ea0094 + 0x45e9ff2c,param_1);
  iVar3 = context_ready(param_1);
  if (iVar3 < 0) {
    __dlog_print(0,6,DAT_45ea00e8 + 0x45ea002c,DAT_45ea00e4 + 0x45ea002a,DAT_45ea00e0 + 0x45ea0057,
                 DAT_45ea00dc + 0x45ea0984,0x7b8);
  }
  task_mgr_set_current_fullscreen_appid(param_1);
  return 0;
}

