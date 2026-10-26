/* libapp-context-manager-common.so : util_set_power_state_normal@45e9c630 */

undefined4 util_set_power_state_normal(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = device_power_set_wakeup_reason();
  if (iVar1 == 0) {
    iVar1 = device_power_set_state(0,param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      __dlog_print(0,6,DAT_45e9c6c4 + 0x45e9c6a0,DAT_45e9c6c0 + 0x45e9c69e,DAT_45e9c6bc + 0x45e9c6cb
                   ,DAT_45e9c6b8 + 0x45e9cc28,0x43f);
      uVar2 = 0xffffffff;
    }
  }
  else {
    __dlog_print(0,6,DAT_45e9c6b4 + 0x45e9c672,DAT_45e9c6b0 + 0x45e9c670,DAT_45e9c6ac + 0x45e9c69d,
                 DAT_45e9c6a8 + 0x45e9cbfa,0x43a);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

