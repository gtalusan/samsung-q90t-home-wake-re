/* tvctx-manager : FUN_00017b24@00017b24 */

void FUN_00017b24(void)

{
  int iVar1;
  
  iVar1 = vconf_keynode_get_int();
  if (iVar1 == 0) {
    context_system_property_remove("ignore_powerkey");
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore_powerkey off",DAT_00017ba8,DAT_00017ba4,
                 0x8c9);
    return;
  }
  context_system_property_add("ignore_powerkey");
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore_powerkey on",DAT_00017ba8,DAT_00017ba4,0x8c5
              );
  return;
}

