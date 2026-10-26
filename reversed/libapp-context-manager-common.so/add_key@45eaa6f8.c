/* libapp-context-manager-common.so : add_key@45eaa6f8 */

void add_key(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 == 0) {
    return;
  }
  puVar3 = (undefined4 *)util_malloc_s(0x30);
  iVar2 = DAT_45eaa794;
  iVar1 = DAT_45eaa790;
  iVar4 = DAT_45eaa78c;
  puVar3[2] = param_5;
  puVar3[1] = param_4;
  *puVar3 = param_3;
  puVar3[4] = param_2;
  __dlog_print(0,3,DAT_45eaa79c + 0x45eaa750,DAT_45eaa798 + 0x45eaa74e,iVar1 + 0x45eaa765,
               iVar4 + 0x45eaaaaa,0x11c,param_1);
  iVar4 = g_hash_table_lookup(*(undefined4 *)((int)&DAT_45eaa79c + iVar2),param_1);
  if (iVar4 == 0) {
    uVar5 = g_list_append(0,puVar3);
    uVar7 = *(undefined4 *)((int)&DAT_45eaa79c + iVar2);
    uVar6 = g_strdup(param_1);
    g_hash_table_insert(uVar7,uVar6,uVar5);
  }
  else {
    g_list_append(iVar4,puVar3);
  }
  return;
}

