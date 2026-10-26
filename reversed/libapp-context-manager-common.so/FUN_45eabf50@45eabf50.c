/* libapp-context-manager-common.so : FUN_45eabf50@45eabf50 */

void FUN_45eabf50(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 == (undefined4 *)0x0 || param_3 == 0) {
    return;
  }
  iVar1 = context_active_task(param_3);
  if (iVar1 == 0) {
    iVar1 = (int)&DAT_45eac104 + DAT_45eac144;
  }
  iVar4 = DAT_45eac104 + 0x45eabf4c;
  iVar9 = DAT_45eac10c + 0x45eabf90;
  iVar5 = DAT_45eac108 + 0x45eabfcd;
  iVar8 = DAT_45eac110 + 0x45eabf96;
  do {
    piVar7 = (int *)*param_2;
    if (*piVar7 == 0) {
      __dlog_print(0,3,DAT_45eac140 + 0x45eac08a,DAT_45eac13c + 0x45eac088,DAT_45eac138 + 0x45eac0b7
                   ,DAT_45eac134 + 0x45eac040,0x156);
LAB_45eabffe:
      if ((((param_1 != 0) && (0 < *(int *)(param_1 + 4))) && (piVar7[4] != 1)) &&
         (iVar2 = window_util_should_process_even_if_registered(*(undefined4 *)(param_1 + 0xc)),
         iVar2 == 0)) {
        __dlog_print(0,4,iVar8,iVar9,iVar5,iVar4,0x15a,*(undefined4 *)(param_1 + 4));
        goto LAB_45eabfbe;
      }
      if (piVar7[10] != 0) {
        task_mgr_handle_filter(piVar7[1],piVar7[10],0,piVar7[5],piVar7[8],piVar7[7],param_3);
      }
      iVar2 = piVar7[2];
      if (iVar2 == 2) {
        iVar2 = *(int *)(iVar1 + 0x40);
        if (iVar2 == 0) goto LAB_45eac046;
        iVar6 = piVar7[5];
        iVar3 = piVar7[1];
LAB_45eac098:
        task_mgr_handle_filter_request(iVar3,iVar2,0,iVar6,piVar7[7],piVar7[8],param_3);
        iVar2 = piVar7[1];
      }
      else {
        if (iVar2 == 3) {
          iVar2 = *(int *)(param_3 + 0x2c);
          if (iVar2 == 0) goto LAB_45eac046;
          iVar6 = piVar7[5];
          iVar3 = piVar7[1];
          goto LAB_45eac098;
        }
        if (iVar2 == 1) {
          iVar6 = piVar7[5];
          iVar3 = piVar7[1];
          iVar2 = iVar1;
          goto LAB_45eac098;
        }
LAB_45eac046:
        iVar2 = piVar7[1];
      }
      if (iVar2 == 10) {
        context_set_timeout(0x400,piVar7[3],param_3);
      }
      if (piVar7[6] == 0) goto LAB_45eabfbe;
      event_filter_handle(piVar7[6],iVar1,param_3);
      param_2 = (undefined4 *)param_2[1];
    }
    else {
      iVar2 = selector_test_task(*piVar7,iVar1,param_3);
      if (iVar2 != 0) {
        __dlog_print(0,4,DAT_45eac130 + 0x45eabffc,DAT_45eac12c + 0x45eabffa,
                     DAT_45eac128 + 0x45eac029,DAT_45eac124 + 0x45eabfb2,0x153);
        goto LAB_45eabffe;
      }
      __dlog_print(0,4,DAT_45eac120 + 0x45eabfbc,DAT_45eac11c + 0x45eabfba,DAT_45eac118 + 0x45eabfeb
                   ,DAT_45eac114 + 0x45eabf74,0x14f);
LAB_45eabfbe:
      param_2 = (undefined4 *)param_2[1];
    }
    if (param_2 == (undefined4 *)0x0) {
      return;
    }
  } while( true );
}

