/* tvctx-manager : FUN_00017578@00017578 */

void FUN_00017578(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = vconf_keynode_get_str();
  iVar2 = g_strcmp0("",uVar1);
  if (iVar2 == 0) {
    __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > invalid value",DAT_00017618,DAT_00017614,0x933);
    return;
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s",DAT_00017618,DAT_00017614,0x937,uVar1);
  iVar2 = g_strcmp0("org.tizen.voice-app",uVar1);
  if (iVar2 == 0) {
    context_system_property_remove("no_bixby");
    return;
  }
  context_system_property_add("no_bixby");
  return;
}

