/* deviced : kpi_save_next_power_on_type@0002e240 */

void kpi_save_next_power_on_type(void)

{
  int *piVar1;
  int local_18;
  int local_14;
  
  piVar1 = *(int **)(DAT_0002e2b8 + 0x2e250 + DAT_0002e2bc);
  local_14 = *piVar1;
  pi_get_wakeup_reason(&local_18);
  if (local_18 == 0x34) {
    set_PowerOn_type(DAT_0002e2c4 + 0x2e2b0);
  }
  else if (local_18 != 0x32) {
    set_PowerOn_type(DAT_0002e2c0 + 0x2e28c);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

