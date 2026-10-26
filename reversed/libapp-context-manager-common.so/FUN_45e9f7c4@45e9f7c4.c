/* libapp-context-manager-common.so : FUN_45e9f7c4@45e9f7c4 */

void FUN_45e9f7c4(int param_1)

{
  void *__ptr;
  int iVar1;
  
  context_get_last_source_key();
  __ptr = (void *)vconf_get_str();
  iVar1 = g_strcmp0(__ptr,DAT_45e9f80c + 0x45e9f7da);
  if (iVar1 == 0) {
    FUN_45e9f27c(__ptr,param_1);
    free(__ptr);
    return;
  }
  if ((*(int *)(param_1 + 0x34) == 0) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 4), iVar1 == 0)) {
    iVar1 = DAT_45e9f810 + 0x45e9f7fa;
  }
  FUN_45e9f27c(iVar1,param_1);
  free(__ptr);
  return;
}

