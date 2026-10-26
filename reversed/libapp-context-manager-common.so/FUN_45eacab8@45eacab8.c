/* libapp-context-manager-common.so : FUN_45eacab8@45eacab8 */

void FUN_45eacab8(int *param_1)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_45eacb80 + 0x45eacac4;
  __ptr = (void *)vconf_get_str(iVar1);
  if (__ptr == (void *)0x0) {
    __dlog_print(0,6,DAT_45eacba0 + 0x45eacb42,DAT_45eacba4 + 0x45eacb44,DAT_45eacb9c + 0x45eacb71,
                 DAT_45eacb98 + 0x45eacb6a,0x195,iVar1);
    iVar1 = *param_1;
  }
  else {
    iVar2 = DAT_45eacb84 + 0x45eacad6;
    iVar1 = vconf_set_str(iVar2,__ptr);
    if (iVar1 < 0) {
      __dlog_print(0,6,DAT_45eacbb8 + 0x45eacb7a,DAT_45eacbb4 + 0x45eacb78,DAT_45eacbb0 + 0x45eacba3
                   ,(int)&DAT_45eacb9c + DAT_45eacbac,0x192,iVar2);
    }
    free(__ptr);
    iVar1 = *param_1;
  }
  if (iVar1 == 0) {
    iVar1 = DAT_45eacba8 + 0x45eacb52;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4);
  }
  __dlog_print(0,4,DAT_45eacb94 + 0x45eacb12,DAT_45eacb90 + 0x45eacb0e,DAT_45eacb8c + 0x45eacb3d,
               DAT_45eacb88 + 0x45eacb36,0x19b,iVar1);
  context_set_booting_appid_vconf(iVar1);
  return;
}

