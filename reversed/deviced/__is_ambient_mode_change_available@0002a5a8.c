/* deviced : __is_ambient_mode_change_available@0002a5a8 */

undefined4 __is_ambient_mode_change_available(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ambient_get_current_mode();
  if (((iVar1 == 3) && (iVar1 = get_current_power_state(), iVar1 == 4)) &&
     (iVar1 = is_state_change_available(), iVar1 == 0)) {
    __dlog_print(2,5,DAT_0002a714 + 0x2a6a0,DAT_0002a710 + 0x2a69c,DAT_0002a70c + 0x2a6b2,
                 DAT_0002a708 + 0x2a75c,0x58);
    uVar2 = 0;
  }
  else {
    iVar1 = ambient_get_current_mode();
    if (iVar1 == 4) {
      __dlog_print(2,5,DAT_0002a724 + 0x2a6ec,DAT_0002a720 + 0x2a6e8,DAT_0002a71c + 0x2a6fa,
                   DAT_0002a718 + 0x2a7a4,0x5f);
      return 0;
    }
    iVar1 = get_ambient_poweroff_info();
    if (*(int *)(iVar1 + 4) != 0) {
      __dlog_print(2,5,DAT_0002a700 + 0x2a628,DAT_0002a704 + 0x2a630,DAT_0002a6f8 + 0x2a63a,
                   (int)&DAT_0002a700 + DAT_0002a6fc,0x68,*(int *)(iVar1 + 4));
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

