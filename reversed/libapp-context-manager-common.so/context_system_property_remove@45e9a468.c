/* libapp-context-manager-common.so : context_system_property_remove@45e9a468 */

void context_system_property_remove(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = DAT_45e9a4d8 + 0x45e9a484;
  iVar3 = DAT_45e9a4d0 + 0x45e9a64e;
  iVar2 = DAT_45e9a4d4 + 0x45e9a4bf;
  uVar5 = param_1;
  __dlog_print(0,4,iVar4,DAT_45e9a4dc + 0x45e9a48e,iVar2,iVar3,0x633,param_1);
  iVar1 = *(int *)((int)&DAT_45e9a4d4 + DAT_45e9a4e0 + 2);
  if (iVar1 == 0) {
    __dlog_print(0,6,iVar4,DAT_45e9a4e4 + 0x45e9a4c4,iVar2,iVar3,0x637,uVar5);
    return;
  }
  g_hash_table_remove(iVar1,param_1);
  return;
}

