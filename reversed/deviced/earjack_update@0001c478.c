/* deviced : earjack_update@0001c478 */

undefined4 earjack_update(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0001c4f8 + 0x1c4ac;
  iVar3 = DAT_0001c4fc + 0x1c4d5;
  iVar4 = DAT_0001c504 + 0x1c4cc;
  iVar2 = DAT_0001c508 + 0x1c4d4;
  *(undefined4 *)(DAT_0001c500 + 0x1c4bc) = param_1;
  __dlog_print(2,4,iVar2,iVar4,iVar3,iVar1,0x55,param_1);
  vconf_set_int(DAT_0001c50c + 0x1c4ec,param_1);
  return 0;
}

