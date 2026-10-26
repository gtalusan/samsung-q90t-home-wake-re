/* libapp-context-manager-common.so : key_handler_is_smart_control_key_event@45ea9b68 */

bool key_handler_is_smart_control_key_event(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45ea9c14 + 0x45ea9be8,DAT_45ea9c10 + 0x45ea9be6,DAT_45ea9c0c + 0x45ea9c15,
                 DAT_45ea9c08 + 0x45ea9eb2,0x24e);
    return false;
  }
  iVar2 = GetInputDeviceType();
  __dlog_print(0,4,DAT_45ea9c00 + 0x45ea9ba2,DAT_45ea9bfc + 0x45ea9b9e,DAT_45ea9bf8 + 0x45ea9bc3,
               DAT_45ea9bf4 + 0x45ea9e60,0x253,param_1,iVar2);
  if (iVar2 - 0xc9U < 3) {
    bVar1 = true;
  }
  else {
    iVar2 = g_strcmp0(param_1,DAT_45ea9c04 + 0x45ea9bb6);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

