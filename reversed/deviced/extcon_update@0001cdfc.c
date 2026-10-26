/* deviced : extcon_update@0001cdfc */

void extcon_update(int param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar4 = *(int **)(DAT_0001cfcc + 0x1ce0c + DAT_0001cfd0);
  local_24 = *piVar4;
  if ((param_1 == 0) || (iVar1 = find_extcon(), iVar1 == 0)) {
    uVar3 = 0xffffffea;
    goto LAB_0001cf08;
  }
  if (param_2 == (char *)0x0) {
    if (*(int *)(iVar1 + 4) != -1) {
      lVar2 = -1;
      __dlog_print(2,4,DAT_0001cff0 + 0x1cf68,DAT_0001cff4 + 0x1cf70,DAT_0001cfe8 + 0x1cf79,
                   DAT_0001cfec + 0x1cf78,0xb2,param_1,*(int *)(iVar1 + 4),0xffffffff);
      __snprintf_chk(auStack_124,0x100,1,0x100,DAT_0001cff8 + 0x1cfa4,param_1,
                     *(undefined4 *)(iVar1 + 4),0xffffffff);
      print_log_console_extcon(auStack_124);
      goto LAB_0001cef0;
    }
  }
  else {
    lVar2 = strtol(param_2,(char **)0x0,10);
    if (lVar2 != *(int *)(iVar1 + 4)) {
      __dlog_print(2,4,DAT_0001cfe0 + 0x1ceac,DAT_0001cfdc + 0x1cea8,DAT_0001cfd8 + 0x1ceb5,
                   DAT_0001cfd4 + 0x1ce98,0xb2,param_1,*(int *)(iVar1 + 4),lVar2);
      __snprintf_chk(auStack_124,0x100,1,0x100,DAT_0001cfe4 + 0x1ced8,param_1,
                     *(undefined4 *)(iVar1 + 4),lVar2);
      print_log_console_extcon(auStack_124);
      *(long *)(iVar1 + 4) = lVar2;
LAB_0001cef0:
      if (*(code **)(iVar1 + 0x10) != (code *)0x0) {
        (**(code **)(iVar1 + 0x10))(lVar2);
      }
    }
  }
  uVar3 = 0;
LAB_0001cf08:
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

