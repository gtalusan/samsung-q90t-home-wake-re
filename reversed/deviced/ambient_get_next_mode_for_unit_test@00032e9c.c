/* deviced : ambient_get_next_mode_for_unit_test@00032e9c */

void ambient_get_next_mode_for_unit_test(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  
  piVar3 = *(int **)(DAT_00032f54 + 0x32eb0 + DAT_00032f58);
  local_18 = 0;
  iVar2 = *piVar3;
  iVar1 = vconf_get_int(DAT_00032f5c + 0x32ecc);
  if (iVar1 == 0) {
    __dlog_print(2,4,DAT_00032f6c + 0x32f2c,DAT_00032f68 + 0x32f24,DAT_00032f64 + 0x32f36,
                 DAT_00032f60 + 0x33040,0x84,0);
  }
  else {
    local_18 = 0xffffffff;
  }
  if (iVar2 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_18);
  }
  return;
}

