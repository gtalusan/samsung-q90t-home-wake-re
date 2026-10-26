/* libapp-context-manager-common.so : context_system_property_add@45e9a764 */

void context_system_property_add(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = DAT_45e9a7d4 + 0x45e9a780;
  iVar3 = DAT_45e9a7cc + 0x45e9a9ae;
  iVar2 = DAT_45e9a7d0 + 0x45e9a7bb;
  uVar5 = param_1;
  __dlog_print(0,4,iVar4,DAT_45e9a7d8 + 0x45e9a78a,iVar2,iVar3,0x629,param_1);
  iVar1 = *(int *)((int)&DAT_45e9a7d0 + DAT_45e9a7dc + 2);
  if (iVar1 == 0) {
    __dlog_print(0,6,iVar4,DAT_45e9a7e0 + 0x45e9a7c0,iVar2,iVar3,0x62e,uVar5);
    return;
  }
  g_hash_table_add(iVar1,param_1);
  return;
}

