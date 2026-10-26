/* deviced : tv_proc_change_state@0002cbb8 */

int tv_proc_change_state(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  param_1 = param_1 & 0xff;
  if (param_1 == *(uint *)(DAT_0002cd44 + 0x2cbc8)) {
    iVar1 = 0;
    __dlog_print(2,4,DAT_0002cd6c + 0x2ccf0,DAT_0002cd68 + 0x2cce8,DAT_0002cd64 + 0x2ccfa,
                 DAT_0002cd60 + 0x2cde4,0x210,param_1,param_1);
  }
  else if (param_1 - 5 < 2) {
    iVar1 = -1;
    __dlog_print(2,6,DAT_0002cd7c + 0x2cd40,DAT_0002cd78 + 0x2cd3c,DAT_0002cd74 + 0x2cd4e,
                 DAT_0002cd70 + 0x2ce38,0x216);
  }
  else {
    iVar3 = DAT_0002cd4c + 0x2cc1c;
    uVar5 = *(undefined4 *)(param_1 * 0x1c + DAT_0002cd48 + 0x2cc00 + 4);
    iVar4 = (int)&DAT_0002cd48 + DAT_0002cd50;
    iVar2 = DAT_0002cd54 + 0x2cc5a;
    uVar6 = param_2;
    __dlog_print(2,4,iVar3,DAT_0002cd58 + 0x2cc58,iVar2,iVar4,0x21a,
                 *(undefined4 *)
                  (*(uint *)(DAT_0002cd44 + 0x2cbc8) * 0x1c + DAT_0002cd48 + 0x2cc00 + 4),uVar5,
                 param_2);
    iVar1 = change_state_constprop_12(param_2,param_1);
    if (iVar1 != 0) {
      __dlog_print(2,6,iVar3,DAT_0002cd5c + 0x2cc98,iVar2,iVar4,0x220,iVar1,uVar5,uVar6);
    }
  }
  return iVar1;
}

