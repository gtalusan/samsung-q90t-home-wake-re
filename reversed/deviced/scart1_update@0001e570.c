/* deviced : scart1_update@0001e570 */

undefined4 scart1_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    __dlog_print(0,3,DAT_0001e648 + 0x1e5d0,DAT_0001e644 + 0x1e5cc,DAT_0001e640 + 0x1e5dd,
                 DAT_0001e63c + 0x1e5f0,0xd1,param_1);
    uVar1 = update_status(DAT_0001e64c + 0x1e5e0,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001e65c + 0x1e630,DAT_0001e658 + 0x1e62c,DAT_0001e654 + 0x1e63d,
               (int)&DAT_0001e650 + DAT_0001e650,0xcd,param_1);
  return 0xffffffff;
}

