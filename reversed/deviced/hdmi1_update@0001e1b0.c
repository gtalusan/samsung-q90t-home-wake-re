/* deviced : hdmi1_update@0001e1b0 */

undefined4 hdmi1_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001e288 + 0x1e210,DAT_0001e284 + 0x1e20c,DAT_0001e280 + 0x1e21d,
                 DAT_0001e27c + 0x1e1f0,0x5d,param_1);
    uVar1 = update_status(DAT_0001e28c + 0x1e220,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001e29c + 0x1e270,DAT_0001e298 + 0x1e26c,DAT_0001e294 + 0x1e27d,
               DAT_0001e290 + 0x1e250,0x59,param_1);
  return 0xffffffff;
}

