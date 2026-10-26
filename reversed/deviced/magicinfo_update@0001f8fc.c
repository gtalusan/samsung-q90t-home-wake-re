/* deviced : magicinfo_update@0001f8fc */

undefined4 magicinfo_update(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = is_valid_status();
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0001f9ec + 0x1f9c0,DAT_0001f9e8 + 0x1f9bc,DAT_0001f9e4 + 0x1f9cd,
                 DAT_0001f9e0 + 0x1f9a8,0x3b,param_1);
    return 0xffffffff;
  }
  __dlog_print(2,4,DAT_0001f9d8 + 0x1f960,DAT_0001f9d4 + 0x1f95c,DAT_0001f9d0 + 0x1f96d,
               DAT_0001f9cc + 0x1f948,0x3f,param_1);
  uVar2 = update_status(DAT_0001f9dc + 0x1f970,param_1);
  return uVar2;
}

