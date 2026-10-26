/* deviced : resume_poweroff@0002f3a0 */

void resume_poweroff(undefined4 *param_1)

{
  int *piVar1;
  undefined4 local_20;
  int local_1c;
  
  piVar1 = *(int **)(DAT_0002f478 + 0x2f3b0 + DAT_0002f47c);
  local_1c = *piVar1;
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)(DAT_0002f498 + 0x2f474),(char *)(DAT_0002f494 + 0x2f46c),0xeb,
                  (char *)((int)&DAT_0002f47c + DAT_0002f490));
  }
  local_20 = *param_1;
  __dlog_print(2,4,DAT_0002f488 + 0x2f418,DAT_0002f48c + 0x2f420,DAT_0002f484 + 0x2f42a,
               DAT_0002f480 + 0x2f410,0xef,local_20);
  device_notify(1,&local_20);
  free(param_1);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

