/* libapp-context-manager-common.so : key_handler_is_panel_key_event@45ea9abc */

bool key_handler_is_panel_key_event(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45ea9b64 + 0x45ea9b3a,DAT_45ea9b60 + 0x45ea9b38,DAT_45ea9b5c + 0x45ea9b67,
                 DAT_45ea9b58 + 0x45ea9de4,0x261);
    return false;
  }
  iVar2 = GetInputDeviceType();
  __dlog_print(0,4,DAT_45ea9b50 + 0x45ea9af6,DAT_45ea9b4c + 0x45ea9af2,DAT_45ea9b48 + 0x45ea9b17,
               DAT_45ea9b44 + 0x45ea9d94,0x266,param_1,iVar2);
  if (iVar2 == 2) {
    bVar1 = true;
  }
  else {
    iVar2 = g_strcmp0(param_1,DAT_45ea9b54 + 0x45ea9b08);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

