/* deviced : comp2_update@0001ea20 */

undefined4 comp2_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001eaf8 + 0x1ea80,DAT_0001eaf4 + 0x1ea7c,DAT_0001eaf0 + 0x1ea8d,
                 DAT_0001eaec + 0x1eae8,0x113,param_1);
    uVar1 = update_status(DAT_0001eafc + 0x1ea90,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001eb0c + 0x1eae0,DAT_0001eb08 + 0x1eadc,DAT_0001eb04 + 0x1eaed,
               DAT_0001eb00 + 0x1eb48,0x10f,param_1);
  return 0xffffffff;
}

