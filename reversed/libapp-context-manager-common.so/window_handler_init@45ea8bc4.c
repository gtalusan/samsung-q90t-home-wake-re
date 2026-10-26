/* libapp-context-manager-common.so : window_handler_init@45ea8bc4 */

undefined4 window_handler_init(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_45ea8c5c;
  iVar3 = DAT_45ea8c4c + 0x45ea8bd6;
  uVar5 = *(undefined4 *)(iVar3 + DAT_45ea8c50);
  uVar4 = *(undefined4 *)(iVar3 + DAT_45ea8c54);
  uVar1 = g_hash_table_new_full(uVar4,uVar5,0,*(undefined4 *)(iVar3 + DAT_45ea8c58));
  iVar3 = DAT_45ea8c60 + 0x45ea8bf6;
  *(undefined4 *)(iVar2 + 0x45ea8c28) = uVar1;
  uVar1 = g_hash_table_new_full(uVar4,uVar5,0,iVar3);
  *(undefined4 *)(iVar2 + 0x45ea8c2c) = uVar1;
  uVar1 = g_hash_table_new(uVar4,uVar5);
  *(undefined4 *)(iVar2 + 0x45ea8c24) = uVar1;
  window_util_listen_event(DAT_45ea8c64 + 0x45ea8c10,param_1);
  iVar2 = VirtualScreenSetMessageCallback(DAT_45ea8c68 + 0x45ea8c1a,param_1);
  if (iVar2 == 0) {
    __dlog_print(0,6,DAT_45ea8c78 + 0x45ea8c42,DAT_45ea8c74 + 0x45ea8c40,DAT_45ea8c70 + 0x45ea8c6f,
                 DAT_45ea8c6c + 0x45ea8e08,0x16e);
  }
  return 0;
}

