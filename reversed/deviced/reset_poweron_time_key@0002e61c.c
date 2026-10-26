/* deviced : reset_poweron_time_key@0002e61c */

void reset_poweron_time_key(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0002e698 + 0x2e638;
  iVar1 = vconf_set_str(iVar2,DAT_0002e69c + 0x2e63c);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_0002e6ac + 0x2e690,DAT_0002e6a8 + 0x2e68c,DAT_0002e6a4 + 0x2e69e,
                 DAT_0002e6a0 + 0x2e6e0,0x109,iVar2);
  }
  return;
}

