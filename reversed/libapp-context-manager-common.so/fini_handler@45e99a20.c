/* libapp-context-manager-common.so : fini_handler@45e99a20 */

void fini_handler(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_45e99aa8;
  if (*(int *)(DAT_45e99aa8 + 0x45e99a3a) != 0) {
    g_list_free();
    *(undefined4 *)(iVar1 + 0x45e99a3a) = 0;
  }
  iVar1 = DAT_45e99aac;
  if (*(int *)(DAT_45e99aac + 0x45e99a4e) != 0) {
    g_list_free();
    *(undefined4 *)(iVar1 + 0x45e99a4e) = 0;
  }
  iVar1 = DAT_45e99ab0;
  if (*(int *)(DAT_45e99ab0 + 0x45e99a62) != 0) {
    g_list_free();
    *(undefined4 *)(iVar1 + 0x45e99a62) = 0;
  }
  iVar1 = DAT_45e99ab4;
  if (*(int *)(DAT_45e99ab4 + 0x45e99a76) != 0) {
    g_list_free();
    *(undefined4 *)(iVar1 + 0x45e99a76) = 0;
  }
  piVar2 = (int *)(DAT_45e99ab8 + 0x45e99a6a);
  if (*piVar2 != 0) {
    g_list_free();
    *piVar2 = 0;
  }
  piVar2 = (int *)(DAT_45e99abc + 0x45e99a7a);
  if (*piVar2 != 0) {
    g_list_free();
    *piVar2 = 0;
  }
  iVar1 = DAT_45e99ac0;
  if (*(int *)((int)&DAT_45e99aa8 + DAT_45e99ac0 + 2) != 0) {
    g_list_free();
    *(undefined4 *)((int)&DAT_45e99aa8 + iVar1 + 2) = 0;
  }
  iVar1 = DAT_45e99ac4;
  if (*(int *)((int)&DAT_45e99abc + DAT_45e99ac4 + 2) != 0) {
    g_list_free();
    *(undefined4 *)((int)&DAT_45e99abc + iVar1 + 2) = 0;
  }
  return;
}

