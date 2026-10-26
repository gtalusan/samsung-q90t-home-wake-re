/* libapp-context-manager-common.so : util_get_time_in_millis@45e9da70 */

void util_get_time_in_millis(void)

{
  int iVar1;
  int *piVar2;
  timespec local_1c;
  int local_14;
  
  piVar2 = *(int **)(DAT_45e9dae8 + 0x45e9da7a + DAT_45e9daec);
  local_14 = *piVar2;
  iVar1 = clock_gettime(1,&local_1c);
  if (iVar1 == 0) {
    iVar1 = local_1c.tv_sec * 1000 + local_1c.tv_nsec / 1000000;
  }
  else {
    __dlog_print(0,6,DAT_45e9dafc + 0x45e9dade,DAT_45e9daf8 + 0x45e9dadc,DAT_45e9daf4 + 0x45e9db09,
                 DAT_45e9daf0 + 0x45e9e226,0x29e);
    iVar1 = 0;
  }
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

