/* deviced : tuner2_update@0001f074 */

undefined4 tuner2_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001f14c + 0x1f0d4,DAT_0001f148 + 0x1f0d0,DAT_0001f144 + 0x1f0e1,
                 DAT_0001f140 + 0x1f18c,0x168,param_1);
    uVar1 = update_status(DAT_0001f150 + 0x1f0e4,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001f160 + 0x1f134,DAT_0001f15c + 0x1f130,DAT_0001f158 + 0x1f141,
               DAT_0001f154 + 0x1f1ec,0x164,param_1);
  return 0xffffffff;
}

