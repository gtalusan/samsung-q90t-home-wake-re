/* deviced : dp1_update@0001f808 */

undefined4 dp1_update(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = is_valid_status();
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0001f8f8 + 0x1f8cc,DAT_0001f8f4 + 0x1f8c8,DAT_0001f8f0 + 0x1f8d9,
                 DAT_0001f8ec + 0x1f8a8,0x2e,param_1);
    return 0xffffffff;
  }
  __dlog_print(2,4,DAT_0001f8e4 + 0x1f86c,DAT_0001f8e0 + 0x1f868,DAT_0001f8dc + 0x1f879,
               DAT_0001f8d8 + 0x1f848,0x32,param_1);
  uVar2 = update_status(DAT_0001f8e8 + 0x1f87c,param_1);
  return uVar2;
}

