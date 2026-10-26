/* deviced : print_log_console@0003c600 */

void print_log_console(undefined4 param_1)

{
  int *piVar1;
  timespec local_124;
  undefined1 auStack_11c [256];
  int local_1c;
  
  piVar1 = *(int **)(DAT_0003c6a4 + 0x3c610 + DAT_0003c6a8);
  local_1c = *piVar1;
  clock_gettime(1,&local_124);
  __snprintf_chk(auStack_11c,0x100,1,0x100,DAT_0003c6ac + 0x3c660,local_124.tv_sec,
                 local_124.tv_nsec / 1000,param_1);
  console_event_queue_push(auStack_11c);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

