/* deviced : lcdoff_action@0002be88 */

undefined4 lcdoff_action(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002bec8;
  iVar2 = *(int *)(DAT_0002bec8 + 0x2bea0);
  if (*(int *)(DAT_0002bec8 + 0x2be9c) != 5 && *(int *)(DAT_0002bec8 + 0x2be9c) != iVar2) {
    set_setting_pmstate();
    iVar2 = *(int *)(iVar1 + 0x2bea0);
  }
  if ((iVar2 - 3U & 0xfffffffd) != 0) {
    backlight_off_async();
  }
  return 0;
}

