/* libapp-context-manager-common.so : init_config@45ea0a14 */

void init_config(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar1 = DAT_45ea0af0;
  iVar4 = DAT_45ea0aec;
  iVar7 = DAT_45ea0ae8 + 0x45ea0a22;
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = g_assertion_message_expr
                      (0,DAT_45ea0b08 + 0x45ea0abe,0x597,DAT_45ea0b04 + 0x45ea1480,
                       DAT_45ea0b00 + 0x45ea0ab2);
  }
  else {
    *param_1 = 0;
    iVar2 = DAT_45ea0af4;
    uVar6 = *(undefined4 *)(iVar7 + iVar4);
    uVar5 = *(undefined4 *)(iVar7 + iVar1);
    uVar3 = g_hash_table_new(uVar5,uVar6);
    param_1[1] = uVar3;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    uVar3 = g_hash_table_new(uVar5,uVar6);
    iVar4 = DAT_45ea0af8;
    param_1[7] = uVar3;
    uVar8 = *(undefined4 *)(iVar7 + iVar4);
    uVar3 = g_hash_table_new_full(uVar5,uVar6,uVar8,0);
    param_1[8] = uVar3;
    uVar3 = g_hash_table_new_full(uVar5,uVar6,0,0);
    param_1[9] = uVar3;
    util_init_system_info();
    uVar3 = g_hash_table_new_full(uVar5,uVar6,uVar8,0);
    *(undefined4 *)(iVar2 + 0x45ea0a9c) = uVar3;
    iVar4 = vconf_get_str(DAT_45ea0afc + 0x45ea0a98);
    *(int *)(iVar2 + 0x45ea0a4c) = iVar4;
    uVar3 = 0;
    if (iVar4 != 0) {
      return;
    }
  }
  __dlog_print(uVar3,6,DAT_45ea0b18 + 0x45ea0ae4,DAT_45ea0b14 + 0x45ea0ae2,DAT_45ea0b10 + 0x45ea0b11
               ,DAT_45ea0b0c + 0x45ea1496,0x5aa);
  return;
}

