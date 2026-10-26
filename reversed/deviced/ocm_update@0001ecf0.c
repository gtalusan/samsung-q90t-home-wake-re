/* deviced : ocm_update@0001ecf0 */

void ocm_update(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(DAT_0001ee54 + 0x1ed04 + DAT_0001ee58);
  iVar3 = *piVar4;
  if (param_1 < 2) {
    iVar1 = vconf_get_int(DAT_0001ee5c + 0x1ed34);
    if (iVar1 != 0) {
      __dlog_print(2,4,DAT_0001ee80 + 0x1edfc,DAT_0001ee7c + 0x1edf8,DAT_0001ee78 + 0x1ee0d,
                   (int)&DAT_0001ee90 + DAT_0001ee74,0x14b);
    }
    __dlog_print(2,4,DAT_0001ee6c + 0x1ed8c,DAT_0001ee68 + 0x1ed84,DAT_0001ee64 + 0x1ed95,
                 DAT_0001ee60 + 0x1ee1c,0x14e,0xffffffff,param_1);
    uVar2 = update_status(DAT_0001ee70 + 0x1eda0,param_1);
  }
  else {
    __dlog_print(2,6,DAT_0001ee90 + 0x1ee48,DAT_0001ee8c + 0x1ee44,DAT_0001ee88 + 0x1ee55,
                 DAT_0001ee84 + 0x1eed8,0x144,param_1);
    uVar2 = 0xffffffff;
  }
  if (iVar3 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

