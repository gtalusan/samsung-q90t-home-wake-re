/* deviced : change_state.constprop.12@0002c8e8 */

void change_state_constprop_12(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 auStack_22c [256];
  undefined1 auStack_12c [256];
  int local_2c;
  
  iVar6 = DAT_0002cb70 + 0x2c918;
  piVar2 = *(int **)(DAT_0002cb68 + 0x2c904 + DAT_0002cb6c);
  iVar8 = DAT_0002cb74 + 0x2c924;
  iVar7 = param_2 * 0x1c + iVar6;
  local_2c = *piVar2;
  piVar9 = (int *)(DAT_0002cb78 + 0x2c950);
  get_cmdline_name(param_1,auStack_12c,0x100);
  iVar3 = DAT_0002cb7c + 0x2ca6c;
  iVar5 = DAT_0002cb80 + 0x2c9c2;
  puVar10 = auStack_12c;
  __dlog_print(2,4,iVar8,DAT_0002cb84 + 0x2c9a4,iVar5,iVar3,0xae,*(undefined4 *)(iVar7 + 4),param_1,
               auStack_12c,iVar3);
  __snprintf_chk(auStack_22c,0x100,1,0x100,DAT_0002cb88 + 0x2c9d0,*(undefined4 *)(iVar7 + 4),param_1
                 ,auStack_12c);
  print_log_console(auStack_22c);
  iVar1 = *piVar9;
  pcVar4 = *(code **)(iVar1 * 0x1c + iVar6 + 0x10);
  if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(iVar1,param_2), iVar1 == 0)) {
    iVar3 = DAT_0002cb8c + 0x2ca1c;
    iVar1 = vconf_set_int(iVar3,param_2);
    if (iVar1 != 0) {
      __dlog_print(2,6,DAT_0002cb9c + 0x2ca74,DAT_0002cb98 + 0x2ca6c,DAT_0002cb94 + 0x2ca7e,
                   DAT_0002cb90 + 0x2cb50,0xa2,iVar3,param_2);
    }
    iVar3 = param_2 * 0x1c + DAT_0002cba0 + 0x2ca84;
    pcVar4 = *(code **)(iVar3 + 8);
    if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(0xfffffffa), -1 < iVar1)) {
      iVar1 = 0;
    }
    else {
      __dlog_print(2,6,DAT_0002cbb0 + 0x2cb58,DAT_0002cbb4 + 0x2cb60,DAT_0002cbac + 0x2cb6a,
                   DAT_0002cba8 + 0x2cc2c,0xc6,*(undefined4 *)(iVar3 + 4),iVar1);
    }
  }
  else {
    __dlog_print(2,6,iVar8,DAT_0002cba4 + 0x2caf8,iVar5,iVar3,0xb9,
                 *(undefined4 *)(*piVar9 * 0x1c + iVar6 + 4),*(undefined4 *)(iVar7 + 4),puVar10);
  }
  if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

