/* libapp-context-manager-common.so : context_add_overlay_emitter_appid@45e9b0c4 */

void context_add_overlay_emitter_appid(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_45e9b110;
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45e9b120 + 0x45e9b108,DAT_45e9b11c + 0x45e9b106,DAT_45e9b118 + 0x45e9b135,
                 DAT_45e9b114 + 0x45e9b48a,0x48f);
    return;
  }
  uVar2 = g_strdup();
  uVar2 = g_list_append(*(undefined4 *)(iVar1 + 0x45e9b12c),uVar2);
  *(undefined4 *)(iVar1 + 0x45e9b12c) = uVar2;
  return;
}

