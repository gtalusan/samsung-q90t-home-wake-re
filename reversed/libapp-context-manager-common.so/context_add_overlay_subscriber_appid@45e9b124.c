/* libapp-context-manager-common.so : context_add_overlay_subscriber_appid@45e9b124 */

void context_add_overlay_subscriber_appid(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_45e9b170;
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45e9b180 + 0x45e9b168,DAT_45e9b17c + 0x45e9b166,DAT_45e9b178 + 0x45e9b195,
                 DAT_45e9b174 + 0x45e9b50e,0x471);
    return;
  }
  uVar2 = g_strdup();
  uVar2 = g_list_append(*(undefined4 *)(iVar1 + 0x45e9b190),uVar2);
  *(undefined4 *)(iVar1 + 0x45e9b190) = uVar2;
  return;
}

