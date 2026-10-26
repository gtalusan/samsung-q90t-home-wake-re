/* deviced : change_mode@0003243c */

void change_mode(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 auStack_22c [256];
  undefined1 auStack_12c [256];
  int local_2c;
  
  iVar1 = DAT_00032668;
  piVar9 = *(int **)(DAT_00032658 + 0x32450 + DAT_0003265c);
  iVar4 = DAT_00032660 + 0x32478;
  iVar7 = DAT_00032664 + 0x32480;
  local_2c = *piVar9;
  get_cmdline_name(param_1,auStack_12c,0x100);
  iVar5 = DAT_0003266c + 0x324ea;
  uVar8 = *(undefined4 *)(param_2 * 0x14 + iVar7 + 4);
  iVar3 = DAT_00032670 + 0x3251c;
  puVar10 = auStack_12c;
  __dlog_print(2,4,iVar4,DAT_00032674 + 0x324f0,iVar5,iVar3,0x2dd,uVar8,param_1,auStack_12c,iVar5,
               iVar3);
  __snprintf_chk(auStack_22c,0x100,1,0x100,DAT_00032678 + 0x32524,
                 *(undefined4 *)(*(int *)(iVar1 + 0x324bc) * 0x14 + iVar7 + 4),uVar8,param_1,
                 auStack_12c);
  print_log_console(auStack_22c);
  pcVar6 = *(code **)(*(int *)(iVar1 + 0x324bc) * 0x14 + iVar7 + 0x10);
  if ((pcVar6 == (code *)0x0) || (iVar2 = (*pcVar6)(*(int *)(iVar1 + 0x324bc),param_2), iVar2 == 0))
  {
    pcVar6 = *(code **)(param_2 * 0x14 + DAT_0003267c + 0x32584);
    if ((pcVar6 == (code *)0x0) || (iVar2 = (*pcVar6)(param_2), -1 < iVar2)) {
      iVar2 = 0;
    }
    else {
      __dlog_print(2,6,DAT_00032690 + 0x32650,DAT_0003268c + 0x32648,DAT_00032688 + 0x3265a,
                   (int)&DAT_00032674 + DAT_00032684,0x2f3,uVar8,iVar2);
    }
  }
  else {
    __dlog_print(2,6,iVar4,DAT_00032680 + 0x325fc,iVar5,iVar3,0x2e8,
                 *(undefined4 *)(*(int *)(iVar1 + 0x324bc) * 0x14 + iVar7 + 4),uVar8,puVar10);
  }
  if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}

