/* deviced : comp1_update@0001e930 */

undefined4 comp1_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001ea08 + 0x1e990,DAT_0001ea04 + 0x1e98c,DAT_0001ea00 + 0x1e99d,
                 DAT_0001e9fc + 0x1e9e8,0x106,param_1);
    uVar1 = update_status(DAT_0001ea0c + 0x1e9a0,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001ea1c + 0x1e9f0,DAT_0001ea18 + 0x1e9ec,DAT_0001ea14 + 0x1e9fd,
               DAT_0001ea10 + 0x1ea48,0x102,param_1);
  return 0xffffffff;
}

