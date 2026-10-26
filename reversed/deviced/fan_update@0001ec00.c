/* deviced : fan_update@0001ec00 */

undefined4 fan_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001ecd8 + 0x1ec60,DAT_0001ecd4 + 0x1ec5c,DAT_0001ecd0 + 0x1ec6d,
                 (int)&DAT_0001ece4 + DAT_0001eccc,0x13b,param_1);
    uVar1 = update_status(DAT_0001ecdc + 0x1ec70,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001ecec + 0x1ecc0,DAT_0001ece8 + 0x1ecbc,DAT_0001ece4 + 0x1eccd,
               DAT_0001ece0 + 0x1ed44,0x137,param_1);
  return 0xffffffff;
}

