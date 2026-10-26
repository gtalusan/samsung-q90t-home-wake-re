/* deviced : check_partition.constprop.4@000370f0 */

void check_partition_constprop_4(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int __fd;
  int *piVar1;
  char acStack_101c [4096];
  int local_1c;
  
  piVar1 = *(int **)(DAT_00037198 + 0x37104 + DAT_0003719c);
  local_1c = *piVar1;
  __snprintf_chk(acStack_101c,0x1000,1,0x1000,DAT_000371a0 + 0x37148,param_1,param_2);
  __fd = open(acStack_101c,0);
  if (__fd < 0) {
    *param_3 = 0;
  }
  else {
    close(__fd);
    *param_3 = 1;
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

