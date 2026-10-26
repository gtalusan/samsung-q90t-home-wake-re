/* deviced : usbhost_init@00034f58 */

void usbhost_init(void)

{
  int iVar1;
  
  iVar1 = register_edbus_interface_and_method
                    (DAT_00034fec + 0x34f80,DAT_00034fe8 + 0x34f78,DAT_00034fe4 + 0x34f70,2);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_00034ffc + 0x34fdc,DAT_00034ff8 + 0x34fd8,DAT_00034ff4 + 0x34fea,
                 DAT_00034ff0 + 0x34fc4,0x25a,iVar1);
    return;
  }
  return;
}

