/* libapp-context-manager-common.so : load_config@45ea6bf4 */

void load_config(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_r4;
  int *piVar8;
  undefined *puVar9;
  int unaff_r8;
  undefined *puVar10;
  int unaff_r9;
  int iVar11;
  int local_30;
  int local_2c;
  
  puVar9 = (undefined *)(DAT_45ea6f1c + 0x45ea6c04);
  piVar7 = *(int **)(puVar9 + DAT_45ea6f20);
  local_2c = *piVar7;
  if (param_2 == 0) {
    g_assertion_message_expr
              (0,DAT_45ea6fa8 + 0x45ea6e56,0x714,&UNK_45ea7d4c + DAT_45ea6fa4,
               DAT_45ea6fa0 + 0x45ea6e4a);
LAB_45ea6e58:
    util_db_close(unaff_r9);
    uVar1 = 0x1f8;
    iVar4 = DAT_45ea6fac + 0x45ea6e6a;
LAB_45ea6e6c:
    __dlog_print(0,6,unaff_r8,iVar4,unaff_r4,puVar9,uVar1);
  }
  else {
    uVar1 = json_parser_new();
    local_30 = 0;
    json_parser_load_from_file(uVar1,param_1,&local_30);
    iVar4 = DAT_45ea6f34;
    if (local_30 != 0) {
      __dlog_print(0,6,DAT_45ea6f2c + 0x45ea6c50,DAT_45ea6f30 + 0x45ea6c54,DAT_45ea6f28 + 0x45ea6c7f
                   ,DAT_45ea6f24 + 0x45ea7b38,0x71a,param_1,*(undefined4 *)(local_30 + 8));
      g_error_free(local_30);
      g_object_unref(uVar1);
      uVar1 = 0;
      goto LAB_45ea6c6c;
    }
    json_parser_get_root(uVar1);
    uVar2 = json_node_get_object();
    iVar3 = json_object_has_member(uVar2,iVar4 + 0x45ea6c8e);
    if (iVar3 != 0) {
      uVar6 = json_object_get_object_member(uVar2,iVar4 + 0x45ea6c8e);
      json_object_foreach_member(uVar6,DAT_45ea6fb4 + 0x45ea6ebe,param_2);
    }
    iVar3 = DAT_45ea6f38 + 0x45ea6ca8;
    iVar4 = json_object_has_member(uVar2,iVar3);
    if (iVar4 != 0) {
      uVar6 = json_object_get_object_member(uVar2,iVar3);
      json_object_foreach_member(uVar6,DAT_45ea6fb0 + 0x45ea6eaa,param_2);
    }
    iVar3 = DAT_45ea6f3c + 0x45ea6cbc;
    iVar4 = json_object_has_member(uVar2,iVar3);
    if (iVar4 != 0) {
      uVar6 = json_object_get_member(uVar2,iVar3);
      construct_context_extensions(uVar6,param_2);
    }
    iVar3 = DAT_45ea6f40 + 0x45ea6cd0;
    iVar4 = json_object_has_member(uVar2,iVar3);
    if (iVar4 != 0) {
      uVar6 = json_object_get_member(uVar2,iVar3);
      construct_key_filter(uVar6,param_2);
    }
    iVar3 = DAT_45ea6f44 + 0x45ea6ce4;
    iVar4 = json_object_has_member(uVar2,iVar3);
    if (iVar4 != 0) {
      uVar6 = json_object_get_member(uVar2,iVar3);
      construct_managed_apps(uVar6,param_2);
    }
    iVar3 = DAT_45ea6f48 + 0x45ea6cf8;
    iVar4 = json_object_has_member(uVar2,iVar3);
    if (iVar4 != 0) {
      uVar6 = json_object_get_member(uVar2,iVar3);
      construct_alloc_hints(uVar6,param_2);
    }
    iVar3 = DAT_45ea6f4c + 0x45ea6d0c;
    iVar4 = json_object_has_member(uVar2,iVar3);
    if (iVar4 != 0) {
      uVar6 = json_object_get_member(uVar2,iVar3);
      construct_task_filter(uVar6,param_2);
    }
    iVar3 = DAT_45ea6f50 + 0x45ea6d20;
    iVar4 = json_object_has_member(uVar2,iVar3);
    if (iVar4 != 0) {
      uVar2 = json_object_get_member(uVar2,iVar3);
      cosntruct_event_filter(uVar2,param_2);
    }
    g_object_unref(uVar1);
    piVar5 = (int *)util_get_syspopup_list();
    if (piVar5 != (int *)0x0) {
      uVar1 = *(undefined4 *)(puVar9 + DAT_45ea6f54);
      puVar10 = &UNK_45ea7c58 + DAT_45ea6f60;
      iVar11 = DAT_45ea6f64 + 0x45ea6d5e;
      uVar2 = g_hash_table_new_full
                        (*(undefined4 *)(puVar9 + DAT_45ea6f58),
                         *(undefined4 *)(puVar9 + DAT_45ea6f5c),uVar1,0);
      iVar4 = DAT_45ea6f68 + 0x45ea6dad;
      iVar3 = DAT_45ea6f6c + 0x45ea6d76;
      piVar8 = piVar5;
      do {
        if (*piVar8 != 0) {
          uVar6 = g_strdup();
          __dlog_print(0,3,iVar3,iVar11,iVar4,puVar10,0x579,DAT_45ea6f70 + 0x45ea6d8e,uVar6);
          g_hash_table_add(uVar2,uVar6);
        }
        piVar8 = (int *)piVar8[1];
      } while (piVar8 != (int *)0x0);
      config_kv_put(DAT_45ea6f78 + 0x45ea6dc0,2,uVar2,DAT_45ea6f74 + 0x45ea6dbc);
      g_list_free_full(piVar5,uVar1);
    }
    iVar11 = DAT_45ea6f88;
    iVar3 = DAT_45ea6f84;
    iVar4 = DAT_45ea6f80;
    uVar1 = tzplatform_mkpath(0x18,DAT_45ea6f7c + 0x45ea6dd4);
    unaff_r8 = iVar11 + 0x45ea6dec;
    puVar9 = &UNK_45ea7d00 + iVar4;
    unaff_r4 = iVar3 + 0x45ea6e29;
    __dlog_print(0,4,unaff_r8,DAT_45ea6f8c + 0x45ea6df4,unaff_r4,puVar9,0x1f0);
    unaff_r9 = util_db_open(uVar1);
    if (unaff_r9 != 0) {
      iVar4 = util_db_foreach_get_from_table
                        (unaff_r9,DAT_45ea6f94 + 0x45ea6e18,DAT_45ea6f90 + 0x45ea6e16,param_2);
      if (iVar4 < 0) goto LAB_45ea6e58;
      iVar4 = util_db_foreach_get_from_table
                        (unaff_r9,DAT_45ea6f9c + 0x45ea6e2c,DAT_45ea6f98 + 0x45ea6e2a,param_2);
      if (-1 < iVar4) {
        util_db_close(unaff_r9);
        uVar1 = 1;
        goto LAB_45ea6c6c;
      }
      util_db_close(unaff_r9);
      uVar1 = 0x1ff;
      iVar4 = DAT_45ea6fb8 + 0x45ea6f16;
      goto LAB_45ea6e6c;
    }
  }
  uVar1 = 1;
LAB_45ea6c6c:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

