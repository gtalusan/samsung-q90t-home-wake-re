/* tvctx-manager : FUN_00017bac@00017bac */

void FUN_00017bac(void)

{
  int iVar1;
  
  iVar1 = vconf_keynode_get_int();
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      context_system_property_remove("low_memory");
    }
  }
  else {
    context_system_property_add("low_memory");
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > low memory state changed : %d",DAT_00017c0c,
               DAT_00017c08,0x8dd,iVar1);
  return;
}

