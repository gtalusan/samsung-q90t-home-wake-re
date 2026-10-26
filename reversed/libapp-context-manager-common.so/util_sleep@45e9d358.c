/* libapp-context-manager-common.so : util_sleep@45e9d358 */

void util_sleep(int param_1)

{
  int *piVar1;
  timespec tStack_2c;
  timespec local_24;
  int local_1c;
  
  piVar1 = *(int **)(DAT_45e9d3f4 + 0x45e9d360 + DAT_45e9d3f8);
  local_24.tv_sec = 0;
  local_1c = *piVar1;
  local_24.tv_nsec = 0;
  if (param_1 < 0) {
    __dlog_print(0,6,DAT_45e9d418 + 0x45e9d3ea,DAT_45e9d414 + 0x45e9d3e8,DAT_45e9d410 + 0x45e9d415,
                 DAT_45e9d40c + 0x45e9dac2,0x388);
  }
  else {
    local_24.tv_nsec = param_1 * 1000000;
    __dlog_print(0,4,DAT_45e9d404 + 0x45e9d3a8,DAT_45e9d408 + 0x45e9d3a6,DAT_45e9d400 + 0x45e9d3cb,
                 DAT_45e9d3fc + 0x45e9da74,0x38d,param_1);
    nanosleep(&local_24,&tStack_2c);
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

