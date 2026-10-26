/* libapp-context-manager-common.so : FUN_45e9f8a8@45e9f8a8 */

void FUN_45e9f8a8(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_45e9f9f0;
  if (param_2 == 0) {
    __dlog_print(0,6,DAT_45e9fa3c + 0x45e9f9e4,DAT_45e9fa38 + 0x45e9f9e2,DAT_45e9fa34 + 0x45e9fa0f,
                 DAT_45e9fa30 + 0x45ea02fc,0x40a);
    return;
  }
  iVar2 = vconf_keynode_get_int();
  iVar7 = DAT_45e9f9f8 + 0x45e9f8d4;
  iVar6 = iVar6 + 0x45ea01fc;
  iVar5 = DAT_45e9f9f4 + 0x45e9f90f;
  __dlog_print(0,4,iVar7,DAT_45e9f9fc + 0x45e9f8da,iVar5,iVar6,0x40f,iVar2);
  iVar3 = context_system_property_check(DAT_45e9fa00 + 0x45e9f8f2);
  bVar1 = iVar3 != 0 && iVar2 != 0;
  if (bVar1) {
    context_system_property_add(DAT_45e9fa24 + 0x45e9f998);
    __dlog_print(0,4,iVar7,DAT_45e9fa2c + 0x45e9f9ba,iVar5,iVar6,0x414,iVar2,
                 *(undefined4 *)(DAT_45e9fa28 + 0x45e9f9e8));
  }
  else {
    context_system_property_remove(DAT_45e9fa04 + 0x45e9f90e);
    __dlog_print(0,4,iVar7,DAT_45e9fa08 + 0x45e9f922,iVar5,iVar6,0x418,iVar2);
  }
  iVar6 = DAT_45e9fa0c;
  if ((bool)*(char *)(DAT_45e9fa0c + 0x45e9f96c) != bVar1) {
    iVar2 = DAT_45e9fa18 + 0x45e9f954;
    __dlog_print(0,4,DAT_45e9fa20 + 0x45e9f962,DAT_45e9fa1c + 0x45e9f95c,DAT_45e9fa14 + 0x45e9f987,
                 DAT_45e9fa10 + 0x45ea0274,0x41c,bVar1);
    uVar4 = context_get_last_source_key();
    vconf_ignore_key_changed(uVar4,iVar2);
    *(bool *)(iVar6 + 0x45e9f96c) = bVar1;
    uVar4 = context_get_last_source_key();
    vconf_notify_key_changed(uVar4,iVar2,param_2);
    FUN_45e9f7c4(param_2);
  }
  return;
}

