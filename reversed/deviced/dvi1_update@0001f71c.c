/* deviced : dvi1_update@0001f71c */

undefined4 dvi1_update(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = is_valid_status();
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0001f800 + 0x1f7d4,DAT_0001f804 + 0x1f7d8,DAT_0001f7f8 + 0x1f7e1,
                 DAT_0001f7fc + 0x1f7b4,0x21,param_1);
    return 0xffffffff;
  }
  __dlog_print(2,4,DAT_0001f7ec + 0x1f778,DAT_0001f7f0 + 0x1f77c,DAT_0001f7e4 + 0x1f785,
               DAT_0001f7e8 + 0x1f758,0x25,param_1);
  uVar2 = update_status(DAT_0001f7f4 + 0x1f78c,param_1);
  return uVar2;
}

