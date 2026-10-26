/* tvctx-manager : FUN_00019010@00019010 */

undefined4 FUN_00019010(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 == 0) || (DAT_0003b534 == 0)) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > null param",DAT_00019170,DAT_0001916c,0x3f9);
    return 0;
  }
  iVar1 = context_system_property_check("product:wall");
  if ((iVar1 == 0) && (iVar1 = context_system_property_check("shop_mode"), iVar1 == 0)) {
    iVar1 = context_system_property_check("fs_autostart");
    if (iVar1 == 0) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > fs autostart is off, resume app directly",
                   DAT_00019170,DAT_0001916c,0x409);
      uVar2 = 0;
    }
    else {
      iVar1 = bundle_create();
      if (iVar1 == 0) {
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to create bundle",DAT_00019170,
                     DAT_0001916c,0x40f);
        uVar2 = 0;
      }
      else {
        bundle_add_str(iVar1,"__K_RELOCATE_BELOW",param_1);
        iVar3 = aul_launch_app(DAT_0003b534,iVar1);
        bundle_free(iVar1);
        if (iVar3 < 0) {
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to launch fs %d",DAT_00019170,
                       DAT_0001916c,0x417,iVar3);
          uVar2 = 0;
        }
        else {
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > activate %s below fs",DAT_00019170,
                       DAT_0001916c,0x41a,param_1);
          uVar2 = 1;
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

