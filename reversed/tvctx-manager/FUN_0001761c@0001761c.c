/* tvctx-manager : FUN_0001761c@0001761c */

void FUN_0001761c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = DAT_000176c4;
  uVar1 = DAT_000176c0;
  uVar3 = vconf_keynode_get_str();
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s",uVar2,uVar1,0x950,uVar3);
  iVar4 = g_strcmp0("on",uVar3);
  if (iVar4 == 0) {
    context_system_property_add("power_off_in_portrait");
    return;
  }
  iVar4 = g_strcmp0("off",uVar3);
  if (iVar4 == 0) {
    context_system_property_remove("power_off_in_portrait");
    return;
  }
  __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid value (%s)",uVar2,uVar1,0x957,uVar3);
  return;
}

