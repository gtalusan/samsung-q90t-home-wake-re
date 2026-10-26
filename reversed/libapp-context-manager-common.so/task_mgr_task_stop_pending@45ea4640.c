/* libapp-context-manager-common.so : task_mgr_task_stop_pending@45ea4640 */

int task_mgr_task_stop_pending(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0 || param_3 == 0) {
    return -1;
  }
  iVar3 = FUN_45ea45b8(param_1,param_3);
  iVar2 = DAT_45ea46a8;
  iVar1 = DAT_45ea46a4;
  if (param_2 != 0 || iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    __dlog_print(0,4,DAT_45ea46ac + 0x45ea468e,DAT_45ea46b0 + 0x45ea4694,iVar2 + 0x45ea46b7,
                 iVar1 + 0x45ea53c4,0x9ef,*(undefined4 *)(param_1 + 4));
    iVar3 = 0;
  }
  return iVar3;
}

