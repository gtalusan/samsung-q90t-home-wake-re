/* libapp-context-manager-common.so : context_set_booting_appid_vconf@45e9a7e4 */

void context_set_booting_appid_vconf(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_45e9a864 + 0x45e9a7f2;
  iVar1 = vconf_set_str(iVar2,param_1);
  if (iVar1 != 0) {
    __dlog_print(0,6,DAT_45e9a888 + 0x45e9a860,DAT_45e9a884 + 0x45e9a85e,DAT_45e9a880 + 0x45e9a889,
                 DAT_45e9a87c + 0x45e9aa96,0x5d0,iVar2);
  }
  iVar2 = DAT_45e9a868 + 0x45e9a802;
  iVar1 = vconf_set_str(iVar2,param_1);
  if (iVar1 != 0) {
    __dlog_print(0,6,DAT_45e9a878 + 0x45e9a830,DAT_45e9a874 + 0x45e9a82e,DAT_45e9a870 + 0x45e9a859,
                 DAT_45e9a86c + 0x45e9aa66,0x5d4,iVar2);
  }
  return;
}

