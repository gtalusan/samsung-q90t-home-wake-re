/* tvctx-manager : FUN_0001a104@0001a104 */

void FUN_0001a104(void)

{
  int iVar1;
  
  iVar1 = vconf_keynode_get_bool();
  if (iVar1 == 0) {
    context_system_property_remove("exhibit_mode");
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > exhibition mode off",DAT_0001a188,DAT_0001a184,
                 0x8ba);
    return;
  }
  context_system_property_add("exhibit_mode");
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > exhibition mode on",DAT_0001a188,DAT_0001a184,0x8b6
              );
  return;
}

