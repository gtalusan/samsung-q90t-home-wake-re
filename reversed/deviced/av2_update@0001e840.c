/* deviced : av2_update@0001e840 */

undefined4 av2_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001e918 + 0x1e8a0,DAT_0001e914 + 0x1e89c,DAT_0001e910 + 0x1e8ad,
                 DAT_0001e90c + 0x1e8ec,0xf8,param_1);
    uVar1 = update_status(DAT_0001e91c + 0x1e8b0,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001e92c + 0x1e900,DAT_0001e928 + 0x1e8fc,DAT_0001e924 + 0x1e90d,
               DAT_0001e920 + 0x1e94c,0xf4,param_1);
  return 0xffffffff;
}

