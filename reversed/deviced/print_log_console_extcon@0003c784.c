/* deviced : print_log_console_extcon@0003c784 */

void print_log_console_extcon(undefined4 param_1)

{
  int *piVar1;
  timespec local_42c;
  undefined1 auStack_424 [1024];
  int local_24;
  
  piVar1 = *(int **)(DAT_0003c834 + 0x3c794 + DAT_0003c838);
  local_24 = *piVar1;
  clock_gettime(1,&local_42c);
  __snprintf_chk(auStack_424,0x400,1,0x400,DAT_0003c83c + 0x3c7f0,local_42c.tv_sec,
                 local_42c.tv_nsec / 1000,param_1);
  console_event_queue_push(auStack_424);
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

