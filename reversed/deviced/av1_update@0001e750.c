/* deviced : av1_update@0001e750 */

undefined4 av1_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001e828 + 0x1e7b0,DAT_0001e824 + 0x1e7ac,DAT_0001e820 + 0x1e7bd,
                 DAT_0001e81c + 0x1e7f0,0xeb,param_1);
    uVar1 = update_status(DAT_0001e82c + 0x1e7c0,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001e83c + 0x1e810,DAT_0001e838 + 0x1e80c,DAT_0001e834 + 0x1e81d,
               DAT_0001e830 + 0x1e850,0xe7,param_1);
  return 0xffffffff;
}

