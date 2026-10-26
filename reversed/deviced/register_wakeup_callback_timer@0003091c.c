/* deviced : register_wakeup_callback_timer@0003091c */

void register_wakeup_callback_timer(void)

{
  int iVar1;
  
  iVar1 = ecore_timer_add(0,0x3fe00000,DAT_000309fc + 0x3094c,0);
  *(int *)(DAT_00030a00 + 0x3096c) = iVar1;
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00030a20 + 0x309f4,DAT_00030a1c + 0x309f0,DAT_00030a18 + 0x30a06,
                 DAT_00030a14 + 0x30a84,0xbe);
    return;
  }
  __dlog_print(2,4,DAT_00030a10 + 0x309a8,DAT_00030a0c + 0x309a4,DAT_00030a08 + 0x309b6,
               DAT_00030a04 + 0x30a34,0xc2);
  return;
}

