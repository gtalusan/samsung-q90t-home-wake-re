/* libapp-context-manager-common.so : context_init_pre@45e9dd24 */

void context_init_pre(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(DAT_45e9dd7c + 0x45e9dd62) = *(undefined4 *)(param_1 + 0x24);
  uVar1 = context_get_last_source_key();
  vconf_notify_key_changed(uVar1,DAT_45e9dd80 + 0x45e9dd3e,param_1);
  util_vconf_add_handler(DAT_45e9dd88 + 0x45e9dd4c,DAT_45e9dd84 + 0x45e9dd4a,param_1);
  util_vconf_add_handler(DAT_45e9dd90 + 0x45e9dd5a,DAT_45e9dd8c + 0x45e9dd58,param_1);
  util_vconf_add_handler(DAT_45e9dd98 + 0x45e9dd68,DAT_45e9dd94 + 0x45e9dd66,param_1);
  util_vconf_add_handler(DAT_45e9dda0 + 0x45e9dd76,DAT_45e9dd9c + 0x45e9dd74,param_1);
  return;
}

