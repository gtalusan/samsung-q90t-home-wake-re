/* libapp-context-manager-common.so : FUN_45ea78ac@45ea78ac */

void FUN_45ea78ac(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_45ea7958;
  if (*(int *)(DAT_45ea7958 + 0x45ea78ca) == 0) {
    __dlog_print(0,6,DAT_45ea7990 + 0x45ea794e,DAT_45ea798c + 0x45ea794c,DAT_45ea7988 + 0x45ea797b,
                 FUN_45ea7994 + DAT_45ea7984,0xaf);
    return;
  }
  iVar2 = GetKeyCodeFromKeyName(*(int *)(DAT_45ea7958 + 0x45ea78ca),DAT_45ea795c + 0x45ea78c2);
  if (0 < iVar2) {
    *(int *)(iVar1 + 0x45ea78da) = iVar2;
  }
  iVar1 = DAT_45ea7960;
  iVar2 = GetKeyCodeFromKeyName
                    (*(undefined4 *)(DAT_45ea7960 + 0x45ea78e6),DAT_45ea7964 + 0x45ea78d4);
  if (0 < iVar2) {
    *(int *)(iVar1 + 0x45ea78fa) = iVar2;
  }
  iVar1 = DAT_45ea7968;
  iVar2 = GetKeyCodeFromKeyName
                    (*(undefined4 *)(DAT_45ea7968 + 0x45ea78fa),DAT_45ea796c + 0x45ea78e8);
  if (iVar2 < 1) {
    iVar2 = *(int *)(iVar1 + 0x45ea7912);
  }
  else {
    *(int *)(iVar1 + 0x45ea7912) = iVar2;
  }
  __dlog_print(0,4,DAT_45ea797c + 0x45ea791c,DAT_45ea7980 + 0x45ea7920,DAT_45ea7978 + 0x45ea7945,
               (int)&DAT_45ea7960 + DAT_45ea7974,0xbf,*(undefined4 *)(DAT_45ea7970 + 0x45ea7922),
               *(undefined4 *)(DAT_45ea7970 + 0x45ea7926),iVar2);
  return;
}

