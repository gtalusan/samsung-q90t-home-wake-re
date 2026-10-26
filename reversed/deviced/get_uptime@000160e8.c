/* deviced : get_uptime@000160e8 */

void get_uptime(void)

{
  int *piVar1;
  timespec local_1c;
  int local_14;
  
  piVar1 = *(int **)(DAT_0001613c + 0x160fc + DAT_00016140);
  local_14 = *piVar1;
  clock_gettime(1,&local_1c);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

