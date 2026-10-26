/* libapp-context-manager-common.so : selector_append@45eac474 */

undefined4 selector_append(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  
  iVar1 = DAT_45eac4f0;
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x1c) != 0) {
      param_1 = *(int *)(param_1 + 0x1c);
    }
    uVar3 = selector_create(param_2);
    iVar2 = DAT_45eac4f4;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    __dlog_print(0,3,DAT_45eac4fc + 0x45eac4c0,DAT_45eac4f8 + 0x45eac4ba,iVar1 + 0x45eac4db,
                 iVar2 + 0x45eac48c,0x129,param_2);
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18) = *(undefined4 *)(param_1 + 0x18);
      return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18);
    }
    g_assertion_message_expr
              (0,iVar1 + 0x45eac49c,0x12a,iVar2 + 0x45eac48c,DAT_45eac500 + 0x45eac4de);
    param_2 = extraout_r1;
  }
  uVar3 = selector_create(param_2);
  return uVar3;
}

