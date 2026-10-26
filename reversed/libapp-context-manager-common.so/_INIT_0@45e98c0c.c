/* libapp-context-manager-common.so : _INIT_0@45e98c0c */

void _INIT_0(void)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(DAT_45e98c2c + 0x45e98c14) != 0) {
    pcVar2 = *(code **)(DAT_45e98c30 + 0x45e98c1a + DAT_45e98c34);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  iVar1 = (DAT_45e98bbc + 0x45e98ba0) - (DAT_45e98bc0 + 0x45e98ba4);
  if ((iVar1 >> 2) - (iVar1 >> 0x1f) >> 1 != 0) {
    pcVar2 = *(code **)(DAT_45e98bc4 + 0x45e98ba8 + DAT_45e98bc8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
      return;
    }
  }
  return;
}

