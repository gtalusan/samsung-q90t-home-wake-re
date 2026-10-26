/* libapp-context-manager-common.so : FUN_45e9f63c@45e9f63c */

void FUN_45e9f63c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  int iVar3;
  
  if (param_2 == 0) {
    __dlog_print(0,6,DAT_45e9f76c + 0x45e9f72c,DAT_45e9f768 + 0x45e9f72a,DAT_45e9f764 + 0x45e9f757,
                 DAT_45e9f760 + 0x45ea0008,0x42c);
  }
  else {
    if (*(int *)(DAT_45e9f730 + 0x45e9f692) != 0) {
      iVar3 = DAT_45e9f734 + 0x45e9f65a;
      iVar1 = g_strcmp0(*(int *)(DAT_45e9f730 + 0x45e9f692),iVar3);
      if (iVar1 != 0) {
        context_get_last_source_key();
        __ptr = (void *)vconf_get_str();
        if (__ptr != (void *)0x0) {
          iVar1 = g_strcmp0(__ptr,iVar3);
          if (iVar1 == 0) {
            FUN_45e9f27c(__ptr,param_2);
          }
          free(__ptr);
        }
      }
    }
    iVar3 = vconf_keynode_get_str(param_1);
    iVar1 = DAT_45e9f740;
    if (iVar3 == 0) {
      __dlog_print(0,6,DAT_45e9f75c + 0x45e9f702,DAT_45e9f758 + 0x45e9f700,DAT_45e9f754 + 0x45e9f72f
                   ,DAT_45e9f750 + 0x45e9ffe0,0x43c);
    }
    else {
      __dlog_print(0,4,DAT_45e9f748 + 0x45e9f698,DAT_45e9f744 + 0x45e9f694,DAT_45e9f73c + 0x45e9f6bd
                   ,DAT_45e9f738 + 0x45e9ff70,0x43f,iVar3);
      if (*(int *)(iVar1 + 0x45e9f6ce) != 0) {
        g_free();
        *(undefined4 *)(iVar1 + 0x45e9f6ce) = 0;
      }
      uVar2 = g_strdup(iVar3);
      *(undefined4 *)(DAT_45e9f74c + 0x45e9f6f6) = uVar2;
    }
  }
  return;
}

