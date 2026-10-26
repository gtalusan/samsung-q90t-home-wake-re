/* libapp-context-manager-common.so : assign_task@45e9f134 */

void assign_task(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_2c [2];
  
  local_2c[0] = param_2;
  iVar1 = g_hash_table_lookup(*(undefined4 *)(param_3 + 0x20),local_2c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = local_2c[0];
    update_state(param_1,1,param_3);
    g_hash_table_insert(*(undefined4 *)(param_3 + 0x20),param_1 + 0x2c,param_1);
  }
  else if (iVar1 != param_1) {
    iVar5 = DAT_45e9f218 + 0x45e9f17e;
    iVar4 = DAT_45e9f210 + 0x45e9fa16;
    iVar3 = DAT_45e9f214 + 0x45e9f1b9;
    __dlog_print(0,4,iVar5,DAT_45e9f21c + 0x45e9f18c,iVar3,iVar4,0xac,*(undefined4 *)(iVar1 + 4),
                 *(undefined4 *)(iVar1 + 0x2c));
    uVar2 = *(undefined4 *)(iVar1 + 0x30);
    remove_task(iVar1,param_3);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    release_task(iVar1,param_3);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    g_hash_table_insert(*(undefined4 *)(param_3 + 0x20),(undefined4 *)(param_1 + 0x2c),param_1);
    __dlog_print(0,4,iVar5,DAT_45e9f220 + 0x45e9f1d2,iVar3,iVar4,0xb6,*(undefined4 *)(param_1 + 4),
                 *(undefined4 *)(param_1 + 0x2c));
    handle_listen(*(undefined4 *)(DAT_45e9f224 + 0x45e9f1e8),param_1,param_3);
  }
  return;
}

