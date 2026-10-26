/* libapp-context-manager-common.so : FUN_45ea7dac@45ea7dac */

void FUN_45ea7dac(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (((*(int *)(param_1 + 0xc) != 0) || (*(int *)(param_1 + 8) != 0)) ||
     (*(int *)(param_1 + 4) != 0)) {
    param_2 = g_list_append(param_2,param_1);
  }
  iVar1 = DAT_45ea7ea0;
  iVar3 = g_hash_table_lookup(*(undefined4 *)(*(int *)(DAT_45ea7ea0 + 0x45ea7e06) + 0x10),param_1);
  iVar2 = DAT_45ea7eb0;
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar3 + 4);
    iVar6 = DAT_45ea7ea8 + 0x45ea7e2b;
    iVar3 = (int)&DAT_45ea7eb0 + DAT_45ea7ea4;
    iVar5 = DAT_45ea7eac + 0x45ea7e06;
    *(int *)(iVar1 + 0x45ea7e0a) = *(int *)(iVar1 + 0x45ea7e0a) + 1;
    __dlog_print(0,3,iVar5,iVar2 + 0x45ea7e0c,iVar6,iVar3,0x10d,uVar4);
    g_list_foreach(param_2,DAT_45ea7eb4 + 0x45ea7e18,0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_45ea7dac(*(int *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 4) != 0) {
    param_2 = g_list_remove(param_2,param_1);
    FUN_45ea7dac(*(undefined4 *)(param_1 + 4),param_2);
  }
  g_list_remove(param_2,param_1);
  iVar1 = DAT_45ea7eb8;
  if (((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 8) == 0)) &&
     ((*(int *)(param_1 + 4) == 0 && (*(int *)((int)&DAT_45ea7ea8 + DAT_45ea7eb8) != 0)))) {
    __dlog_print(0,3,DAT_45ea7ec4 + 0x45ea7e98,DAT_45ea7ec8 + 0x45ea7e94,DAT_45ea7ebc + 0x45ea7ebd,
                 DAT_45ea7ec0 + 0x45ea7f54,0x11b,*(int *)((int)&DAT_45ea7ea8 + DAT_45ea7eb8));
    *(undefined4 *)((int)&DAT_45ea7ea8 + iVar1) = 0;
  }
  return;
}

