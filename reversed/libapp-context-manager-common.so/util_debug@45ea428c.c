/* libapp-context-manager-common.so : util_debug@45ea428c */

undefined4 util_debug(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = g_strcmp0(param_1,DAT_45ea42d0 + 0x45ea429c,param_3,param_4,param_4);
    if (iVar1 == 0) {
      task_mgr_print_task_list(param_2);
      return 0;
    }
    iVar1 = g_strcmp0(param_1,DAT_45ea42d4 + 0x45ea42aa);
    if (iVar1 == 0) {
      key_sequence_print_comb_key();
      return 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

