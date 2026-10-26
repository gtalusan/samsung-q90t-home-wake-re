/* deviced : pm_change_wakeup_reason@00030ee0 */

void pm_change_wakeup_reason(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_11c [256];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00030ff8 + 0x30ef4 + DAT_00030ffc);
  local_1c = *piVar2;
  __snprintf_chk(auStack_11c,0x100,1,0x100,DAT_00031000 + 0x30f14,param_1);
  print_log_console(auStack_11c);
  iVar1 = pi_set_wakeup_reason(param_1);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_00031020 + 0x30ff0,DAT_0003101c + 0x30fec,DAT_00031018 + 0x30ffe,
                 DAT_00031014 + 0x31110,0x16e,param_1);
  }
  else {
    __dlog_print(2,6,DAT_00031010 + 0x30f90,DAT_0003100c + 0x30f8c,DAT_00031008 + 0x30f9e,
                 DAT_00031004 + 0x310b0,0x172,param_1);
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

