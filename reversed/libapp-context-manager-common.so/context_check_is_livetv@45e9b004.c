/* libapp-context-manager-common.so : context_check_is_livetv@45e9b004 */

undefined4 context_check_is_livetv(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_45e9b030 + 0x45e9b05e);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[1];
  } while ((iVar1 == 0) || (iVar1 = g_strcmp0(iVar1,param_1), iVar1 != 0));
  return 1;
}

