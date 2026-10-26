/* deviced : scart2_update@0001e660 */

undefined4 scart2_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001e738 + 0x1e6c0,DAT_0001e734 + 0x1e6bc,DAT_0001e730 + 0x1e6cd,
                 DAT_0001e72c + 0x1e6f0,0xde,param_1);
    uVar1 = update_status(DAT_0001e73c + 0x1e6d0,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001e74c + 0x1e720,DAT_0001e748 + 0x1e71c,DAT_0001e744 + 0x1e72d,
               av1_update + DAT_0001e740,0xda,param_1);
  return 0xffffffff;
}

