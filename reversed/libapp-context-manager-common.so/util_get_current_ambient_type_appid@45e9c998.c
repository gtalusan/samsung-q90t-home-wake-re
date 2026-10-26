/* libapp-context-manager-common.so : util_get_current_ambient_type_appid@45e9c998 */

int util_get_current_ambient_type_appid(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = context_system_property_check(DAT_45e9ca30 + 0x45e9c9a2);
  if (iVar1 == 0) {
    uVar2 = device_power_get_ambient_type();
    if ((int)uVar2 < 0) {
      __dlog_print(0,6,DAT_45e9ca5c + 0x45e9ca2a,DAT_45e9ca58 + 0x45e9ca28,DAT_45e9ca54 + 0x45e9ca53
                   ,DAT_45e9ca50 + 0x45e9d00c,0x3a4,uVar2);
      iVar1 = 0;
    }
    else {
      if ((int)(uVar2 << 0x1f) < 0) {
        return DAT_45e9ca3c + 0x45e9c9d2;
      }
      if ((uVar2 & 4) != 0) {
        return DAT_45e9ca38 + 0x45e9c9ca;
      }
      __dlog_print(0,6,DAT_45e9ca4c + 0x45e9c9fc,DAT_45e9ca48 + 0x45e9c9fa,DAT_45e9ca44 + 0x45e9ca25
                   ,DAT_45e9ca40 + 0x45e9cfde,0x3ad,uVar2);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = DAT_45e9ca34 + 0x45e9c9ae;
  }
  return iVar1;
}

