/* deviced : wait_for_file@00027e74 */

void wait_for_file(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  stat sStack_78;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00027fc4 + 0x27e88 + DAT_00027fc8);
  local_1c = *piVar3;
  iVar2 = 1000;
  __dlog_print(2,4,DAT_00027fd8 + 0x27ee8,DAT_00027fd4 + 0x27edc,DAT_00027fcc + 0x27eda,
               DAT_00027fd0 + 0x27ed4,0x43,param_1);
  do {
    iVar1 = __xstat(3,param_1,&sStack_78);
    if (iVar1 == 0) goto LAB_00027f14;
    usleep(30000);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  __dlog_print(2,6,DAT_00027ff8 + 0x27fbc,DAT_00027ff4 + 0x27fb4,DAT_00027fec + 0x27fbe,
               DAT_00027ff0 + 0x27f90,0x53,1000,param_1);
LAB_00027f14:
  __dlog_print(2,4,DAT_00027fe4 + 0x27f50,DAT_00027fe8 + 0x27f58,DAT_00027fdc + 0x27f62,
               DAT_00027fe0 + 0x27f34,0x57,param_1);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

