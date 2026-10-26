/* libapp-context-manager-common.so : key_filter_spec_free@45ea76e4 */

void key_filter_spec_free(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_45ea775c + 0x45ea76f2;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      g_free();
      *(undefined4 *)(param_1 + 4) = 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      g_free();
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          iVar3 = *(int *)(iVar2 + iVar4 * 4);
          if (iVar3 != 0) {
            g_free(iVar3);
            *(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4) = 0;
            iVar2 = *(int *)(param_1 + 8);
            iVar1 = *(int *)(param_1 + 0xc);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      g_free(iVar2);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      g_list_free_full(*(int *)(param_1 + 0x10),*(undefined4 *)(iVar5 + DAT_45ea7760));
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    g_free(param_1);
  }
  return;
}

