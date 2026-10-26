/* libapp-context-manager-common.so : context_add_livetv_appid@45e9b034 */

void context_add_livetv_appid(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_45e9b080;
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45e9b090 + 0x45e9b078,DAT_45e9b08c + 0x45e9b076,DAT_45e9b088 + 0x45e9b0a5,
                 DAT_45e9b084 + 0x45e9b3de,0x4b0);
    return;
  }
  uVar2 = g_strdup();
  uVar2 = g_list_append(*(undefined4 *)(context_check_is_overlay_event_emitter + iVar1 + 4),uVar2);
  *(undefined4 *)(context_check_is_overlay_event_emitter + iVar1 + 4) = uVar2;
  return;
}

