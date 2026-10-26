/* deviced : hdmi2_update@0001e2a0 */

undefined4 hdmi2_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001e378 + 0x1e300,DAT_0001e374 + 0x1e2fc,DAT_0001e370 + 0x1e30d,
                 DAT_0001e36c + 0x1e2f0,0x6a,param_1);
    uVar1 = update_status(DAT_0001e37c + 0x1e310,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001e38c + 0x1e360,DAT_0001e388 + 0x1e35c,DAT_0001e384 + 0x1e36d,
               DAT_0001e380 + 0x1e350,0x66,param_1);
  return 0xffffffff;
}

