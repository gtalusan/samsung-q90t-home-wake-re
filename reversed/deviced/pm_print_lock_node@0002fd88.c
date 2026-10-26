/* deviced : pm_print_lock_node@0002fd88 */

void pm_print_lock_node(void)

{
  undefined4 *puVar1;
  int *piVar3;
  int *piVar2;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar5 = *(int **)(DAT_0002fe0c + 0x2fd98 + DAT_0002fe10);
  local_24 = *piVar5;
  piVar4 = (int *)(DAT_0002fe14 + 0x2fdd8);
  piVar2 = (int *)(DAT_0002fe14 + 0x2fdbc);
  do {
    piVar3 = piVar2 + 1;
    for (puVar1 = (undefined4 *)*piVar2; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[4]) {
      get_name_from_pid(*puVar1,auStack_124,0xff);
    }
    piVar2 = piVar3;
  } while (piVar3 != piVar4);
  if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

