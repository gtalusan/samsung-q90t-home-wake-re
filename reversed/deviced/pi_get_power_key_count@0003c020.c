/* deviced : pi_get_power_key_count@0003c020 */

void pi_get_power_key_count(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_0003c0d0 + 0x3c030 + DAT_0003c0d4);
  local_14 = *piVar3;
  iVar1 = PowerControl_getInstance();
  local_18 = 0;
  iVar1 = (**(code **)(iVar1 + 0x14))(&local_18);
  if (iVar1 == 0) {
    uVar2 = local_18;
  }
  else {
    __dlog_print(2,6,DAT_0003c0e0 + 0x3c0c0,DAT_0003c0e4 + 0x3c0c4,DAT_0003c0d8 + 0x3c0d1,
                 DAT_0003c0dc + 0x3c0a4,0x32);
    uVar2 = 0;
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

