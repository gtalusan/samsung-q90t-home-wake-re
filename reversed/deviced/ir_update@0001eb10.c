/* deviced : ir_update@0001eb10 */

undefined4 ir_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001ebe8 + 0x1eb70,DAT_0001ebe4 + 0x1eb6c,DAT_0001ebe0 + 0x1eb7d,
                 (int)&DAT_0001ebe8 + DAT_0001ebdc,0x12e,param_1);
    uVar1 = update_status(DAT_0001ebec + 0x1eb80,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001ebfc + 0x1ebd0,DAT_0001ebf8 + 0x1ebcc,DAT_0001ebf4 + 0x1ebdd,
               DAT_0001ebf0 + 0x1ec48,0x12a,param_1);
  return 0xffffffff;
}

