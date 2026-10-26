/* libapp-context-manager-common.so : cosntruct_event_filter@45ea6224 */

void cosntruct_event_filter(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_1 == 0) {
    g_assertion_message_expr
              (0,DAT_45ea6424 + 0x45ea63e8,0x495,DAT_45ea6420 + 0x45ea7296,DAT_45ea641c + 0x45ea63dc
              );
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xe0,0x45ea63ec);
    (*pcVar1)();
  }
  iVar2 = json_node_get_node_type();
  if (iVar2 != 1) {
    g_assertion_message_expr
              (0,DAT_45ea63f4 + 0x45ea6258,0x496,DAT_45ea63f0 + 0x45ea7106,iRam45ea63ec + 0x45ea624c
              );
  }
  uVar3 = json_node_get_array(param_1);
  iVar2 = json_array_get_length();
  if (iVar2 != 0) {
    iVar11 = 0;
    iVar8 = DAT_45ea63f8 + 0x45ea627a;
    iVar9 = DAT_45ea63fc + 0x45ea6280;
    iVar10 = DAT_45ea6400 + 0x45ea6286;
    do {
      while( true ) {
        uVar4 = json_array_get_object_element(uVar3,iVar11);
        iVar5 = FUN_45e991f8(uVar4,param_2 + 0x20);
        if (iVar5 == 0) break;
        puVar6 = (undefined4 *)util_malloc_s(0x20);
        iVar5 = json_object_has_member(uVar4,iVar8);
        if (iVar5 != 0) {
          json_object_get_string_member(uVar4,iVar8);
          uVar7 = g_strdup();
          *puVar6 = uVar7;
        }
        iVar5 = json_object_has_member(uVar4,iVar9);
        if (iVar5 != 0) {
          json_object_get_string_member(uVar4,iVar9);
          uVar7 = g_strdup();
          puVar6[1] = uVar7;
        }
        iVar5 = json_object_has_member(uVar4,iVar10);
        if (iVar5 != 0) {
          json_object_get_string_member(uVar4,iVar10);
          uVar7 = event_filter_to_signal();
          puVar6[2] = uVar7;
        }
        iVar12 = DAT_45ea6404 + 0x45ea62d8;
        iVar5 = json_object_has_member(uVar4,iVar12);
        if (iVar5 != 0) {
          json_object_get_string_member(uVar4,iVar12);
          uVar7 = event_filter_to_target();
          puVar6[3] = uVar7;
        }
        iVar12 = DAT_45ea6408 + 0x45ea62ea;
        iVar5 = json_object_has_member(uVar4,iVar12);
        if (iVar5 != 0) {
          uVar7 = json_object_get_array_member(uVar4,iVar12);
          json_array_foreach_element(uVar7,DAT_45ea6418 + 0x45ea637a,puVar6 + 7);
        }
        iVar12 = DAT_45ea640c + 0x45ea62fc;
        iVar5 = json_object_has_member(uVar4,iVar12);
        if (iVar5 != 0) {
          uVar7 = json_object_get_int_member(uVar4,iVar12);
          puVar6[4] = uVar7;
        }
        iVar12 = DAT_45ea6410 + 0x45ea630c;
        iVar5 = json_object_has_member(uVar4,iVar12);
        if (iVar5 != 0) {
          uVar7 = json_object_get_int_member(uVar4,iVar12);
          puVar6[5] = uVar7;
        }
        iVar12 = DAT_45ea6414 + 0x45ea631c;
        iVar5 = json_object_has_member(uVar4,iVar12);
        if (iVar5 != 0) {
          uVar4 = json_object_get_boolean_member(uVar4,iVar12);
          puVar6[6] = uVar4;
        }
        iVar5 = g_hash_table_lookup(*(undefined4 *)(param_2 + 0x1c),*puVar6);
        if (iVar5 == 0) {
          uVar4 = g_list_append(0,puVar6);
          g_hash_table_insert(*(undefined4 *)(param_2 + 0x1c),*puVar6,uVar4);
          break;
        }
        iVar11 = iVar11 + 1;
        g_list_append(iVar5,puVar6);
        if (iVar2 == iVar11) {
          return;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar2 != iVar11);
  }
  return;
}

