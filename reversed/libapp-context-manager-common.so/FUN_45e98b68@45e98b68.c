/* libapp-context-manager-common.so : FUN_45e98b68@45e98b68 */

void FUN_45e98b68(void)

{
  code *pcVar1;
  
  if (((uint)((DAT_45e98b88 + 0x45e98b73) - (DAT_45e98b8c + 0x45e98b74)) < 7) ||
     (pcVar1 = *(code **)(DAT_45e98b90 + 0x45e98b7a + DAT_45e98b94), pcVar1 == (code *)0x0)) {
    return;
  }
  (*pcVar1)();
  return;
}

