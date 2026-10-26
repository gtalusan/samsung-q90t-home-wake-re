/* deviced : ops_update@0001f9f0 */

undefined4 ops_update(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = is_valid_status();
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0001fae0 + 0x1fab4,DAT_0001fadc + 0x1fab0,DAT_0001fad8 + 0x1fac1,
                 DAT_0001fad4 + 0x1fab0,0x49,param_1);
    return 0xffffffff;
  }
  __dlog_print(2,4,DAT_0001facc + 0x1fa54,DAT_0001fac8 + 0x1fa50,DAT_0001fac4 + 0x1fa61,
               DAT_0001fac0 + 0x1fa50,0x4d,param_1);
  uVar2 = update_status(DAT_0001fad0 + 0x1fa64,param_1);
  return uVar2;
}

