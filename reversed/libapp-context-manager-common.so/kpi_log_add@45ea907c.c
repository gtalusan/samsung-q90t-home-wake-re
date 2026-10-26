/* libapp-context-manager-common.so : kpi_log_add@45ea907c */

void kpi_log_add(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_12c [256];
  int local_2c;
  
  iVar2 = DAT_45ea9194 + 0x45ea908e;
  piVar3 = *(int **)(iVar2 + DAT_45ea9198);
  local_2c = *piVar3;
  memset(auStack_12c,0,0xff);
  if (param_2 < 5) {
    if (param_3 == 0) {
      __dlog_print(0,6,DAT_45ea91d4 + 0x45ea9188,DAT_45ea91d0 + 0x45ea9186,DAT_45ea91cc + 0x45ea91b3
                   ,DAT_45ea91c8 + 0x45ea93e0,0x29);
      uVar4 = 0xffffffff;
    }
    else {
      g_snprintf(auStack_12c,0xff,DAT_45ea919c + 0x45ea90c0,param_3);
      iVar1 = DAT_45ea91a0 + 0x45ea90ce + param_2 * 4;
      uVar4 = *(undefined4 *)(iVar1 + 0x2c);
      uVar5 = *(undefined4 *)(iVar1 + 0x40);
      __dlog_print(0,3,DAT_45ea91ac + 0x45ea90f0,DAT_45ea91b0 + 0x45ea90f6,DAT_45ea91a4 + 0x45ea9115
                   ,DAT_45ea91a8 + 0x45ea934e,0x2f,auStack_12c,uVar4,uVar5);
      AddEventLogAsync(param_1,uVar4,uVar5,auStack_12c,*(undefined4 *)(iVar2 + DAT_45ea91b4),0);
      uVar4 = 0;
    }
  }
  else {
    __dlog_print(0,6,DAT_45ea91c4 + 0x45ea915c,DAT_45ea91c0 + 0x45ea915a,DAT_45ea91bc + 0x45ea9187,
                 DAT_45ea91b8 + 0x45ea93b4,0x24);
    uVar4 = 0xffffffff;
  }
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

