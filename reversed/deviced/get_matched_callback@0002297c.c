/* deviced : get_matched_callback@0002297c */

void get_matched_callback(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *local_2c [4];
  int local_1c;
  
  iVar1 = 0;
  piVar4 = *(int **)(DAT_00022a30 + 0x22990 + DAT_00022a34);
  iVar5 = 0;
  local_2c[0] = *(undefined4 **)(DAT_00022a38 + 0x229ac);
  local_1c = *piVar4;
  local_2c[1] = (undefined4 *)*(undefined4 *)(DAT_00022a38 + 0x229b0);
  local_2c[2] = (undefined4 *)*(undefined4 *)(DAT_00022a38 + 0x229b4);
  local_2c[3] = (undefined4 *)*(undefined4 *)(DAT_00022a38 + 0x229b8);
  puVar3 = local_2c[0];
  while( true ) {
    while ((puVar3 != (undefined4 *)0x0 && (piVar2 = (int *)*puVar3, piVar2 != (int *)0x0))) {
      puVar3 = (undefined4 *)puVar3[1];
      if (*piVar2 == param_1) {
        iVar1 = iVar1 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 4) break;
    puVar3 = local_2c[iVar5];
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

