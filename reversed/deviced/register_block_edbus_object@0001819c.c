/* deviced : register_block_edbus_object@0001819c */

int register_block_edbus_object(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    __dlog_print(2,6,DAT_00018284 + 0x18224,DAT_00018280 + 0x18220,DAT_0001827c + 0x1822f,
                 (int)&DAT_00018290 + DAT_00018278,0x66);
    iVar1 = 0;
  }
  else {
    iVar1 = e_dbus_object_add(*(undefined4 *)(DAT_00018274 + 0x181d4),param_1,param_2);
    if (iVar1 == 0) {
      __dlog_print(2,6,DAT_00018294 + 0x18270,DAT_00018290 + 0x1826c,DAT_0001828c + 0x1827b,
                   DAT_00018288 + 0x182dc,0x6d,param_1);
    }
  }
  return iVar1;
}

