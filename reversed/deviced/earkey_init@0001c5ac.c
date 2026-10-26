/* deviced : earkey_init@0001c5ac */

void earkey_init(void)

{
  int iVar1;
  
  iVar1 = register_edbus_method(DAT_0001c638 + 0x1c5c8,DAT_0001c634 + 0x1c5d0,1);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_0001c648 + 0x1c62c,DAT_0001c644 + 0x1c628,DAT_0001c640 + 0x1c639,
                 DAT_0001c63c + 0x1c62c,0x80,iVar1);
    return;
  }
  return;
}

