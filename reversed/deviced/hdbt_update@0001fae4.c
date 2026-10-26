/* deviced : hdbt_update@0001fae4 */

undefined4 hdbt_update(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = is_valid_status();
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0001fbd4 + 0x1fba8,DAT_0001fbd0 + 0x1fba4,DAT_0001fbcc + 0x1fbb5,
                 DAT_0001fbc8 + 0x1fbb0,0x56,param_1);
    return 0xffffffff;
  }
  __dlog_print(2,4,DAT_0001fbc0 + 0x1fb48,DAT_0001fbbc + 0x1fb44,DAT_0001fbb8 + 0x1fb55,
               DAT_0001fbb4 + 0x1fb50,0x5a,param_1);
  uVar2 = update_status(DAT_0001fbc4 + 0x1fb58,param_1);
  return uVar2;
}

