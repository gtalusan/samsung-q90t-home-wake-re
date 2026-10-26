/* libapp-context-manager-common.so : context_set_epop_blocked@45e9a33c */

void context_set_epop_blocked(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45e9a3d0 + 0x45e9a3aa,DAT_45e9a3cc + 0x45e9a3a8,DAT_45e9a3c8 + 0x45e9a3d7,
                 DAT_45e9a3c4 + 0x45e9a530,0x647);
  }
  else {
    iVar2 = DAT_45e9a3b0 + 0x45e9a34e;
    iVar1 = vconf_set_int(iVar2,*(int *)(param_1 + 0x14) != 0);
    if (iVar1 != 0) {
      __dlog_print(0,6,DAT_45e9a3c0 + 0x45e9a380,DAT_45e9a3bc + 0x45e9a37e,DAT_45e9a3b8 + 0x45e9a3a9
                   ,DAT_45e9a3b4 + 0x45e9a502,0x64f,iVar2);
    }
  }
  return;
}

