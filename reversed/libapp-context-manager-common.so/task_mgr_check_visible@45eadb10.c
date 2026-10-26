/* libapp-context-manager-common.so : task_mgr_check_visible@45eadb10 */

void task_mgr_check_visible(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  piVar3 = *(int **)(DAT_45eadbb4 + 0x45eadb20 + DAT_45eadbb8);
  local_28 = 0;
  local_2c = 0;
  local_24 = *piVar3;
  iVar1 = g_strcmp0(param_1,DAT_45eadbbc + 0x45eadb30);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_4 + 0x3c) & 1;
  }
  else {
    iVar1 = FUN_45ead9dc(param_1,param_2,param_3,*(undefined4 *)(param_4 + 0x20),&local_28,&local_2c
                        );
    if (iVar1 == 0) {
      uVar2 = 0;
      if ((local_28 != 0) && (*(int *)(local_28 + 0x30) == 3)) {
        __dlog_print(0,4,DAT_45eadbc8 + 0x45eadba2,DAT_45eadbcc + 0x45eadba4,
                     DAT_45eadbc4 + 0x45eadbcf,DAT_45eadbc0 + 0x45eadc9a,0xaa3,param_1);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

