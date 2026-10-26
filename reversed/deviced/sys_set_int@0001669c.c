/* deviced : sys_set_int@0001669c */

void sys_set_int(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0001671c + 0x166b0 + DAT_00016720);
  local_1c = *piVar3;
  __snprintf_chk(auStack_11c,0xff,1,0xff,DAT_00016724 + 0x166d4,param_2);
  iVar1 = sys_write_buf(param_1,auStack_11c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xfffffffb;
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

