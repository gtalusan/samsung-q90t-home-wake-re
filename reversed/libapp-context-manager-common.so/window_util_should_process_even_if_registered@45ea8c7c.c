/* libapp-context-manager-common.so : window_util_should_process_even_if_registered@45ea8c7c */

void window_util_should_process_even_if_registered(uint param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar5 = DAT_45ea8d98;
  uVar1 = param_1 - 10;
  piVar2 = *(int **)(DAT_45ea8d90 + 0x45ea8c88 + DAT_45ea8d94);
  bVar8 = 0x48 < param_1;
  bVar6 = param_1 == 0x49;
  if (!bVar6) {
    bVar8 = 8 < uVar1;
  }
  bVar7 = uVar1 == 9;
  local_38 = -1;
  local_34 = 1;
  if (bVar8 && (!bVar6 && !bVar7)) {
    uVar1 = 1;
  }
  local_2c = *piVar2;
  if (!bVar8 || (bVar6 || bVar7)) {
    uVar1 = 0;
  }
  local_30 = 0;
  if (!bVar8 || (bVar6 || bVar7)) {
    system_settings_get_value_int(0x39,&local_38);
    iVar5 = iVar5 + 0x45ea8cea;
    iVar4 = DAT_45ea8d9c + 0x45ea8ede;
    iVar3 = DAT_45ea8da0 + 0x45ea8d31;
    iVar9 = local_38;
    __dlog_print(uVar1,4,iVar5,DAT_45ea8da4 + 0x45ea8cfa,iVar3,iVar4,0x96,local_38);
    if (local_38 == 9) {
      vconf_get_int(DAT_45ea8da8 + 0x45ea8d1c,&local_30);
      if (local_30 == 1) {
        __dlog_print(uVar1,4,iVar5,DAT_45ea8db8 + 0x45ea8d7e,iVar3,iVar4,0x9d,iVar9);
      }
      else {
        vconf_get_int(DAT_45ea8dac + 0x45ea8d2c,&local_34);
        if (local_34 == 0) {
          __dlog_print(uVar1,4,iVar5,DAT_45ea8db4 + 0x45ea8d62,iVar3,iVar4,0xa3,iVar9);
        }
        else {
          __dlog_print(uVar1,4,iVar5,DAT_45ea8db0 + 0x45ea8d4c,iVar3,iVar4,0xa7,param_1);
          uVar1 = 1;
        }
      }
      goto LAB_45ea8cbc;
    }
  }
  uVar1 = 0;
LAB_45ea8cbc:
  if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

