/* libapp-context-manager-common.so : context_check_support_current_orientation@45e9aa28 */

undefined4 context_check_support_current_orientation(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = context_system_property_check(DAT_45e9aa84 + 0x45e9aa34);
  if (((iVar1 == 0) ||
      (iVar1 = context_system_property_check(DAT_45e9aa88 + 0x45e9aa46), iVar1 == 0)) ||
     (iVar1 = context_check_is_landscape_only(param_1), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    __dlog_print(0,4,DAT_45e9aa98 + 0x45e9aa7e,DAT_45e9aa94 + 0x45e9aa7c,DAT_45e9aa90 + 0x45e9aaa7,
                 DAT_45e9aa8c + 0x45e9ad14,0x5aa,param_1);
    uVar2 = 0;
  }
  return uVar2;
}

