/* deviced : pc1_update@0001ee94 */

undefined4 pc1_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001ef6c + 0x1eef4,DAT_0001ef68 + 0x1eef0,DAT_0001ef64 + 0x1ef01,
                 DAT_0001ef60 + 0x1ef90,0x121,param_1);
    uVar1 = update_status(DAT_0001ef70 + 0x1ef04,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001ef80 + 0x1ef54,DAT_0001ef7c + 0x1ef50,DAT_0001ef78 + 0x1ef61,
               DAT_0001ef74 + 0x1eff0,0x11d,param_1);
  return 0xffffffff;
}

