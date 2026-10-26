/* tvctx-manager : FUN_00017a68@00017a68 */

void FUN_00017a68(void)

{
  int iVar1;
  
  iVar1 = vconf_keynode_get_int();
  if (iVar1 == 1) {
    context_system_property_add("shop_mode");
  }
  else {
    context_system_property_remove();
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > use mode changed : %d",DAT_00017abc,DAT_00017ab8,
               0x902,iVar1);
  return;
}

