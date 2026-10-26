/* libapp-context-manager-common.so : FUN_45ea3ce0@45ea3ce0 */

undefined4 FUN_45ea3ce0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    __dlog_print(0,6,DAT_45ea3de4 + 0x45ea3d92,DAT_45ea3de0 + 0x45ea3d90,DAT_45ea3ddc + 0x45ea3dbd,
                 DAT_45ea3dd8 + 0x45ea4a26,0x6e5);
    return 0;
  }
  iVar1 = FUN_45e993fc(param_2);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)task_mgr_task_find_pid(param_1,param_3);
    if (puVar2 == (undefined4 *)0x0) {
      __dlog_print(0,6,DAT_45ea3df0 + 0x45ea3dc0,DAT_45ea3df4 + 0x45ea3dc4,DAT_45ea3dec + 0x45ea3ded
                   ,DAT_45ea3de8 + 0x45ea4a56,0x6ee,param_1,param_2);
    }
    else {
      iVar1 = g_strcmp0(puVar2[3],param_2);
      if (iVar1 != 0) {
        __dlog_print(0,4,DAT_45ea3dd0 + 0x45ea3d4a,DAT_45ea3dd4 + 0x45ea3d4e,
                     DAT_45ea3dcc + 0x45ea3d7d,DAT_45ea3dc8 + 0x45ea49de,0x6f5,*puVar2,puVar2[3],
                     param_2);
        if (puVar2[0xc] == 3) {
          listen_pause(puVar2,param_3);
          listen_run(puVar2,param_3);
        }
      }
    }
  }
  return 0;
}

