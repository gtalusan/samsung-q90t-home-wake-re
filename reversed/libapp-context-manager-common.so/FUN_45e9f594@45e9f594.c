/* libapp-context-manager-common.so : FUN_45e9f594@45e9f594 */

void FUN_45e9f594(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    __dlog_print(0,6,DAT_45e9f638 + 0x45e9f610,DAT_45e9f634 + 0x45e9f60e,DAT_45e9f630 + 0x45e9f63b,
                 DAT_45e9f62c + 0x45e9fed0,0x3cf);
    return;
  }
  iVar1 = vconf_keynode_get_str();
  if ((iVar1 == 0) || (iVar2 = g_strcmp0(iVar1,DAT_45e9f618 + 0x45e9f5ac), iVar2 != 0)) {
    __dlog_print(0,4,DAT_45e9f628 + 0x45e9f5d8,DAT_45e9f624 + 0x45e9f5d6,DAT_45e9f620 + 0x45e9f601,
                 DAT_45e9f61c + 0x45e9fe96,0x3d8,iVar1);
    return;
  }
  FUN_45e9f27c(iVar1,param_2);
  return;
}

