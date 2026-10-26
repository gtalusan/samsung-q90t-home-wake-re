/* deviced : hdmi3_update@0001e390 */

undefined4 hdmi3_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001e468 + 0x1e3f0,DAT_0001e464 + 0x1e3ec,DAT_0001e460 + 0x1e3fd,
                 DAT_0001e45c + 0x1e3f0,0x77,param_1);
    uVar1 = update_status(DAT_0001e46c + 0x1e400,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001e47c + 0x1e450,DAT_0001e478 + 0x1e44c,DAT_0001e474 + 0x1e45d,
               DAT_0001e470 + 0x1e450,0x73,param_1);
  return 0xffffffff;
}

