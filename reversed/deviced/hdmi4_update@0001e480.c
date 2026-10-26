/* deviced : hdmi4_update@0001e480 */

undefined4 hdmi4_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001e558 + 0x1e4e0,DAT_0001e554 + 0x1e4dc,DAT_0001e550 + 0x1e4ed,
                 DAT_0001e54c + 0x1e4f0,0x84,param_1);
    uVar1 = update_status(DAT_0001e55c + 0x1e4f0,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001e56c + 0x1e540,DAT_0001e568 + 0x1e53c,DAT_0001e564 + 0x1e54d,
               (int)&DAT_0001e550 + DAT_0001e560,0x80,param_1);
  return 0xffffffff;
}

