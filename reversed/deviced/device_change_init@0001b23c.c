/* deviced : device_change_init@0001b23c */

void device_change_init(void)

{
  int iVar1;
  
  register_notifier(3,DAT_0001b2e0 + 0x1b250);
  register_notifier(0,DAT_0001b2e4 + 0x1b268);
  iVar1 = register_edbus_method(DAT_0001b2ec + 0x1b280,DAT_0001b2e8 + 0x1b27c,1);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_0001b2fc + 0x1b2d8,DAT_0001b2f8 + 0x1b2d4,DAT_0001b2f4 + 0x1b2e3,
                 (int)&DAT_0001b2f8 + DAT_0001b2f0,0x262,iVar1);
    return;
  }
  return;
}

