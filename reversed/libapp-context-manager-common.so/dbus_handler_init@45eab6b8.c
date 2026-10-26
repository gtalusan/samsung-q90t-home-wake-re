/* libapp-context-manager-common.so : dbus_handler_init@45eab6b8 */

void dbus_handler_init(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_45eab710;
  uVar3 = g_dbus_node_info_new_for_xml(DAT_45eab70c + 0x45eabb6a,0);
  iVar2 = DAT_45eab718;
  iVar4 = DAT_45eab714 + 0x45eab6de;
  *(undefined4 *)(iVar1 + 0x45eab700) = uVar3;
  g_bus_own_name(1,DAT_45eab720 + 0x45eab6f4,0,DAT_45eab71c + 0x45eab6f0,iVar2 + 0x45eab6e2,iVar4,
                 param_1,0);
  context_add_change_handler(0x3ffffff,DAT_45eab724 + 0x45eab702,param_1);
  return;
}

