/* libapp-context-manager-common.so : FUN_45e992ec@45e992ec */

void FUN_45e992ec(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_45e99384;
  iVar1 = DAT_45e99380;
  iVar4 = DAT_45e9937c;
  iVar3 = bundle_get_val(*param_3,param_1);
  iVar5 = param_2;
  iVar6 = iVar3;
  __dlog_print(0,3,iVar4 + 0x45e99312,DAT_45e99388 + 0x45e99330,iVar2 + 0x45e99357,
               iVar1 + 0x45e99382,0x4b2,param_2,iVar3);
  if (param_3[1] == 0) {
    __dlog_print(0,3,iVar4 + 0x45e99312,DAT_45e9938c + 0x45e9936e,iVar2 + 0x45e99357,
                 iVar1 + 0x45e99382,0x4b4,iVar5,iVar6);
    return;
  }
  if (param_2 == 0 || iVar3 == 0) {
    return;
  }
  iVar4 = g_strcmp0(param_2,iVar3);
  param_3[1] = (uint)(iVar4 == 0);
  return;
}

