/* libapp-context-manager-common.so : FUN_45ea0188@45ea0188 */

void FUN_45ea0188(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  void *local_1948;
  undefined1 auStack_1944 [896];
  undefined1 auStack_15c4 [2316];
  undefined1 auStack_cb8 [896];
  undefined1 auStack_938 [2316];
  int local_2c;
  
  iVar1 = DAT_45ea0478;
  iVar5 = DAT_45ea0464;
  piVar6 = *(int **)(DAT_45ea045c + 0x45ea019a + DAT_45ea0460);
  local_1948 = (void *)0x0;
  local_2c = *piVar6;
  if (*(int *)(DAT_45ea0464 + 0x45ea01ae) == 0) {
    __dlog_print(0,6,DAT_45ea0508 + 0x45ea0454,DAT_45ea0504 + 0x45ea0452,DAT_45ea0500 + 0x45ea047f,
                 DAT_45ea04fc + 0x45ea0dbc,0x29b);
  }
  else {
    __dlog_print(0,4,DAT_45ea0470 + 0x45ea01e6,DAT_45ea0474 + 0x45ea01ea,DAT_45ea046c + 0x45ea0215,
                 DAT_45ea0468 + 0x45ea0b50,0x28e,*(int *)(DAT_45ea0464 + 0x45ea01ae));
    uVar2 = bundle_create();
    bundle_add(uVar2,iVar1 + 0x45ea01f4,DAT_45ea047c + 0x45ea0200);
    uVar2 = g_list_append(0,uVar2);
    uVar3 = bundle_create();
    bundle_add(uVar3,iVar1 + 0x45ea01f4,DAT_45ea0480 + 0x45ea021a);
    uVar2 = g_list_append(uVar2,uVar3);
    puVar4 = (undefined4 *)
             task_create(DAT_45ea0488 + 0x45ea0246,*(undefined4 *)(iVar5 + 0x45ea01ae),
                         DAT_45ea0484 + 0x45ea023e,0,3,2,1,0,0,uVar2);
    g_hash_table_insert(*param_1,*puVar4);
  }
  iVar5 = was_get_emanual_id(&local_1948);
  if ((iVar5 == 0) && (local_1948 != (void *)0x0)) {
    iVar5 = was_get_app_info(local_1948,auStack_cb8);
    if (iVar5 == 0) {
      __dlog_print(0,4,DAT_45ea0494 + 0x45ea02a2,DAT_45ea0498 + 0x45ea02a6,DAT_45ea048c + 0x45ea02c7
                   ,DAT_45ea0490 + 0x45ea0c10,0x2a0,local_1948,auStack_938);
      puVar4 = (undefined4 *)
               task_create(DAT_45ea049c + 0x45ea02c4,auStack_938,DAT_45ea04a0 + 0x45ea02ca,0,3,2,1,0
                           ,0,0);
      g_hash_table_insert(*param_1,*puVar4);
    }
    else {
      __dlog_print(0,6,DAT_45ea04f8 + 0x45ea042c,DAT_45ea04f4 + 0x45ea042a,DAT_45ea04f0 + 0x45ea0457
                   ,DAT_45ea04ec + 0x45ea0d94,0x2a4);
    }
  }
  else {
    __dlog_print(0,6,DAT_45ea04b0 + 0x45ea0302,DAT_45ea04ac + 0x45ea0300,DAT_45ea04a8 + 0x45ea032d,
                 DAT_45ea04a4 + 0x45ea0c6a,0x2a7);
  }
  free(local_1948);
  local_1948 = (void *)0x0;
  iVar5 = system_info_get_value_string(0x16e,&local_1948);
  if ((iVar5 == 0) && (local_1948 != (void *)0x0)) {
    iVar5 = was_get_app_info(local_1948,auStack_1944);
    if (iVar5 == 0) {
      __dlog_print(0,4,DAT_45ea04c0 + 0x45ea0360,DAT_45ea04bc + 0x45ea035e,DAT_45ea04b8 + 0x45ea0385
                   ,DAT_45ea04b4 + 0x45ea0cc2,0x2af,local_1948,auStack_15c4);
      puVar4 = (undefined4 *)
               task_create(DAT_45ea04c4 + 0x45ea037a,auStack_15c4,DAT_45ea04c8 + 0x45ea0380,0,3,9,1,
                           0,0,0);
      g_hash_table_insert(*param_1,*puVar4);
    }
    else {
      __dlog_print(0,6,DAT_45ea04e8 + 0x45ea0402,DAT_45ea04e4 + 0x45ea0400,DAT_45ea04e0 + 0x45ea042d
                   ,DAT_45ea04dc + 0x45ea0d6a,0x2b3);
    }
  }
  else {
    __dlog_print(0,6,DAT_45ea04d8 + 0x45ea03b8,DAT_45ea04d4 + 0x45ea03b6,DAT_45ea04d0 + 0x45ea03e3,
                 DAT_45ea04cc + 0x45ea0d20,0x2b6);
  }
  free(local_1948);
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

