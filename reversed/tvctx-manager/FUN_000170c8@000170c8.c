/* tvctx-manager : FUN_000170c8@000170c8 */

void FUN_000170c8(void)

{
  int iVar1;
  
  iVar1 = vconf_set_str("db/volt/last_service_app_booting","");
  if (iVar1 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set %s",DAT_00017118,DAT_00017114,0x437
                 ,"db/volt/last_service_app_booting");
  }
  return;
}

