/* tvctx-manager : util_check_b2b_edit_blocked@0001fba4 */

undefined4 util_check_b2b_edit_blocked(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = context_system_property_check("product:b2b_option");
  if ((iVar1 == 0) || (iVar1 = context_system_property_check(param_1), iVar1 != 0)) {
    return 0;
  }
  __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > %s blocked",DAT_0001fc00,DAT_0001fbfc,0x1ed,param_1
              );
  return 1;
}

