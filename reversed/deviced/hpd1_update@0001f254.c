/* deviced : hpd1_update@0001f254 */

undefined4 hpd1_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    uVar1 = update_status(DAT_0001f2cc + 0x1f26c,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001f2d8 + 0x1f2b4,DAT_0001f2dc + 0x1f2bc,DAT_0001f2d4 + 0x1f2c9,
               DAT_0001f2d0 + 0x1f398,0x17e,param_1);
  return 0xffffffff;
}

