/* libapp-context-manager-common.so : FUN_45ead3d0@45ead3d0 */

undefined4 FUN_45ead3d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 0 || param_3 == 0) {
    __dlog_print(0,6,DAT_45ead57c + 0x45ead4e2,DAT_45ead578 + 0x45ead4e0,DAT_45ead574 + 0x45ead50f,
                 DAT_45ead570 + 0x45ead5a0,0xbb6);
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)g_strsplit(param_1,DAT_45ead538 + 0x45ead3f4,2);
    if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
      __dlog_print(0,6,DAT_45ead58c + 0x45ead512,DAT_45ead588 + 0x45ead510,DAT_45ead584 + 0x45ead53d
                   ,DAT_45ead580 + 0x45ead5cc,0xbcf,param_1);
      uVar3 = 0xffffffff;
    }
    else {
      if (param_2 == 1) {
        iVar6 = DAT_45ead54c + 0x45ead44c;
        iVar5 = DAT_45ead544 + 0x45ead518;
        iVar4 = DAT_45ead548 + 0x45ead487;
        __dlog_print(0,4,iVar6,DAT_45ead550 + 0x45ead452,iVar4,iVar5,0xbbd);
        iVar2 = bundle_create();
        if (iVar2 == 0) {
          __dlog_print(0,6,iVar6,DAT_45ead590 + 0x45ead52c,iVar4,iVar5,0xbc0);
          return 0xffffffff;
        }
        bundle_add(iVar2,DAT_45ead554 + 0x45ead470,*piVar1);
        bundle_add(iVar2,DAT_45ead55c + 0x45ead47e,DAT_45ead558 + 0x45ead47c);
        FUN_45eacc34(DAT_45ead560 + 0x45ead48a,iVar2,param_3);
        bundle_free(iVar2);
      }
      else {
        iVar4 = DAT_45ead53c + 0x45ead416;
        iVar2 = was_launch_app_with_param(*piVar1,0,iVar4,DAT_45ead540 + 0x45ead41c,param_3);
        if (iVar2 != 0) {
          __dlog_print(0,6,iVar4,DAT_45ead56c + 0x45ead4ba,DAT_45ead564 + 0x45ead4df,
                       DAT_45ead568 + 0x45ead57e,0xbcb,*piVar1);
        }
      }
      g_strfreev(piVar1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

