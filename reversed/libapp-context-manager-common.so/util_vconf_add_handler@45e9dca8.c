/* libapp-context-manager-common.so : util_vconf_add_handler@45e9dca8 */

void util_vconf_add_handler(undefined4 param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  vconf_notify_key_changed();
  iVar1 = vconf_keylist_new();
  iVar2 = vconf_get(iVar1,param_1,0);
  if (iVar2 < 0) {
    __dlog_print(0,6,DAT_45e9dd20 + 0x45e9dd0e,DAT_45e9dd1c + 0x45e9dd0c,DAT_45e9dd18 + 0x45e9dd37,
                 DAT_45e9dd14 + 0x45e9e480,0x1a5,param_1);
  }
  else {
    iVar2 = vconf_keylist_nextnode(iVar1);
    if (iVar2 != 0) {
      (*param_2)(iVar2,param_3);
    }
  }
  if (iVar1 != 0) {
    vconf_keylist_free(iVar1);
  }
  return;
}

