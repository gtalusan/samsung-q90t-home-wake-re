/* deviced : print_console_log@0003c208 */

void print_console_log(int param_1)

{
  int __fd;
  size_t __n;
  ssize_t sVar1;
  int *piVar2;
  timespec local_42c;
  char acStack_424 [1024];
  int local_24;
  
  piVar2 = *(int **)(DAT_0003c3dc + 0x3c218 + DAT_0003c3e0);
  local_24 = *piVar2;
  if (param_1 != 0) {
    clock_gettime(1,&local_42c);
    __fd = open((char *)(DAT_0003c3e4 + 0x3c264),0x88101);
    if (__fd < 0) {
      __dlog_print(2,6,DAT_0003c414 + 0x3c3d0,DAT_0003c418 + 0x3c3d4,DAT_0003c40c + 0x3c3e1,
                   DAT_0003c410 + 0x3c3b4,0x21);
    }
    else {
      clock_gettime(1,&local_42c);
      __snprintf_chk(acStack_424,0x400,1,0x400,DAT_0003c3e8 + 0x3c294,param_1);
      __n = strlen(acStack_424);
      sVar1 = write(__fd,acStack_424,__n);
      if (sVar1 < 0) {
        __dlog_print(2,6,DAT_0003c404 + 0x3c38c,DAT_0003c408 + 0x3c390,DAT_0003c3fc + 0x3c39d,
                     DAT_0003c400 + 0x3c370,0x2b);
      }
      clock_gettime(1,&local_42c);
      __dlog_print(0,3,DAT_0003c3f4 + 0x3c328,DAT_0003c3f8 + 0x3c330,DAT_0003c3ec + 0x3c331,
                   DAT_0003c3f0 + 0x3c318,0x2f,local_42c.tv_sec,local_42c.tv_nsec / 1000);
      close(__fd);
    }
  }
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

