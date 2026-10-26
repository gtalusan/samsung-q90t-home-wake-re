/* libapp-context-manager-common.so : task_mgr_manual_launch@45e9b688 */

int task_mgr_manual_launch(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = context_check_mask(0x20000480,param_4);
    iVar2 = DAT_45e9b764;
    iVar1 = DAT_45e9b760;
    if (iVar3 == 0 || param_3 != 0) {
      iVar4 = FUN_45eacc34(param_1,param_2,param_4);
      iVar5 = DAT_45e9b768 + 0x45e9b71b;
      __dlog_print(0,4,iVar1 + 0x45e9b6d6,DAT_45e9b76c + 0x45e9b6f6,iVar5,iVar2 + 0x45e9bb16,0x902,
                   param_1,iVar4);
      iVar3 = iVar4;
      if (iVar4 < 1) {
        iVar3 = -1;
        __dlog_print(0,6,iVar1 + 0x45e9b6d6,DAT_45e9b780 + 0x45e9b756,iVar5,iVar2 + 0x45e9bb16,0x905
                     ,param_1,iVar4);
      }
    }
    else {
      iVar3 = -3;
      __dlog_print(0,5,DAT_45e9b77c + 0x45e9b736,DAT_45e9b778 + 0x45e9b734,DAT_45e9b774 + 0x45e9b75d
                   ,DAT_45e9b770 + 0x45e9bb56,0x8fd);
    }
  }
  return iVar3;
}

