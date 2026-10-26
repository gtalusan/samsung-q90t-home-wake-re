/* deviced : ambient_low_power_trans@0003290c */

void ambient_low_power_trans(int param_1)

{
  int iVar1;
  __pid_t _Var2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_2c [16];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00032b10 + 0x3291c + DAT_00032b14);
  local_1c = *piVar5;
  if ((*(int *)(DAT_00032b18 + 0x3292c) != 4) &&
     ((*(int *)(DAT_00032b18 + 0x3292c) != 1 || (iVar1 = get_current_power_state(), iVar1 != 5)))) {
    iVar1 = get_poweroff_info();
    if ((*(int *)(iVar1 + 0x10) == 0) || (*(int *)(iVar1 + 0xc) != 4)) {
      _Var2 = getpid();
      build_power_off_req(auStack_2c,1,4,0x4000001d,_Var2);
      device_notify(7,auStack_2c);
      __dlog_print(2,4,DAT_00032b28 + 0x329dc,DAT_00032b24 + 0x329d8,DAT_00032b20 + 0x329ea,
                   DAT_00032b1c + 0x32a70,0x275);
      goto LAB_000329dc;
    }
    __dlog_print(2,4,DAT_00032b38 + 0x32a38,DAT_00032b34 + 0x32a34,DAT_00032b30 + 0x32a4a,
                 DAT_00032b2c + 0x32ab8,0x261);
  }
  piVar3 = (int *)(DAT_00032b3c + 0x32a48);
  *(int *)(DAT_00032b3c + 0x32a4c) = param_1;
  if ((param_1 == 3) && (param_1 = 1, *piVar3 != 1)) {
    param_1 = 2;
  }
  iVar6 = DAT_00032b40 + 0x32a5c;
  iVar1 = vconf_set_int(iVar6,param_1);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_00032b58 + 0x32ae8,DAT_00032b54 + 0x32ae0,DAT_00032b50 + 0x32af2,
                 DAT_00032b4c + 0x32b90,0xb6,iVar6,param_1);
  }
  pcVar4 = *(code **)(*(int *)(DAT_00032b44 + 0x32a80) * 0x14 + DAT_00032b48 + 0x32a8c);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(0);
  }
LAB_000329dc:
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

