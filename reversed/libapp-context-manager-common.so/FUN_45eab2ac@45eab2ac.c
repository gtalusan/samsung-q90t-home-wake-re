/* libapp-context-manager-common.so : FUN_45eab2ac@45eab2ac */

void FUN_45eab2ac(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 0 || param_3 == 0) {
    __dlog_print(0,6,DAT_45eab380 + 0x45eab32e,DAT_45eab37c + 0x45eab32c,DAT_45eab378 + 0x45eab359,
                 DAT_45eab374 + 0x45eab782,0xd);
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    task_mgr_handle_filter
              (*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x1c),0,
               *(undefined4 *)(param_1 + 0x18),0,0,param_3);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 2) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0x40);
      goto joined_r0x45eab370;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = *(int *)(param_3 + 0x2c);
joined_r0x45eab370:
    if (iVar1 != 0) {
      task_mgr_handle_filter_request
                (*(undefined4 *)(param_1 + 8),iVar1,0,*(undefined4 *)(param_1 + 0x18),0,0,param_3);
      iVar1 = *(int *)(param_1 + 8);
      goto joined_r0x45eab350;
    }
  }
  else if (iVar1 == 1) {
    task_mgr_handle_filter_request
              (*(undefined4 *)(param_1 + 8),param_2,0,*(undefined4 *)(param_1 + 0x18),0,0,param_3);
  }
  iVar1 = *(int *)(param_1 + 8);
joined_r0x45eab350:
  if (iVar1 == 10) {
    context_set_timeout(0x400,*(undefined4 *)(param_1 + 0x10),param_3);
    return;
  }
  return;
}

