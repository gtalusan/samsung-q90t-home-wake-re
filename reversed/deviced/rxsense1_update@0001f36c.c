/* deviced : rxsense1_update@0001f36c */

undefined4 rxsense1_update(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    uVar1 = update_status(DAT_0001f3e4 + 0x1f384,param_1);
    return uVar1;
  }
  __dlog_print(2,6,DAT_0001f3f0 + 0x1f3cc,DAT_0001f3f4 + 0x1f3d4,DAT_0001f3ec + 0x1f3e1,
               DAT_0001f3e8 + 0x1f4cc,0x194,param_1);
  return 0xffffffff;
}

