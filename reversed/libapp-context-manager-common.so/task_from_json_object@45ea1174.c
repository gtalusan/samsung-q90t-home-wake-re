/* libapp-context-manager-common.so : task_from_json_object@45ea1174 */

void task_from_json_object(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar7 = DAT_45ea1504 + 0x45ea118e;
  piVar5 = *(int **)(DAT_45ea14fc + 0x45ea1186 + DAT_45ea1500);
  local_30 = 0;
  local_2c = *piVar5;
  uVar1 = json_object_get_string_member(param_1,iVar7);
  __dlog_print(0,3,DAT_45ea1514 + 0x45ea11c4,DAT_45ea1510 + 0x45ea11c0,DAT_45ea150c + 0x45ea11eb,
               DAT_45ea1508 + 0x45ea1be8,0x22c,uVar1);
  iVar2 = json_object_has_member(param_1,iVar7);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = json_object_get_string_member(param_1,iVar7);
  }
  iVar7 = DAT_45ea1518 + 0x45ea11de;
  iVar2 = json_object_has_member(param_1,iVar7);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = json_object_get_string_member(param_1,iVar7);
  }
  iVar8 = DAT_45ea151c + 0x45ea11f2;
  iVar7 = json_object_has_member(param_1,iVar8);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = json_object_get_string_member(param_1,iVar8);
  }
  iVar9 = DAT_45ea1520 + 0x45ea1208;
  iVar8 = json_object_has_member(param_1,iVar9);
  if (iVar8 == 0) {
    local_34 = 3;
  }
  else {
    json_object_get_string_member(param_1,iVar9);
    local_34 = task_to_prio();
  }
  iVar9 = DAT_45ea1524 + 0x45ea1220;
  iVar8 = json_object_has_member(param_1,iVar9);
  if (iVar8 == 0) {
    local_38 = 1;
  }
  else {
    json_object_get_string_member(param_1,iVar9);
    local_38 = task_to_type();
  }
  iVar9 = DAT_45ea1528 + 0x45ea1238;
  iVar8 = json_object_has_member(param_1,iVar9);
  if (iVar8 != 0) {
    uVar4 = json_object_get_member(param_1,iVar9);
    iVar8 = json_node_get_node_type();
    if (iVar8 == 1) {
      uVar4 = json_node_get_array(uVar4);
      json_array_foreach_element(uVar4,DAT_45ea1594 + 0x45ea14c2,&local_30);
    }
    else {
      iVar8 = json_node_get_node_type();
      if (iVar8 == 0) {
        FUN_45e9989c(0,0xffffffff,uVar4,&local_30);
      }
    }
  }
  iVar9 = DAT_45ea152c + 0x45ea124c;
  iVar8 = json_object_has_member(param_1,iVar9);
  if (iVar8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = json_object_get_boolean_member(param_1,iVar9);
  }
  iVar9 = DAT_45ea1530 + 0x45ea1262;
  iVar8 = json_object_has_member(param_1,iVar9);
  if (iVar8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = json_object_get_boolean_member(param_1,iVar9);
  }
  iVar9 = DAT_45ea1534 + 0x45ea1278;
  iVar8 = json_object_has_member(param_1,iVar9);
  if (iVar8 == 0) {
    if (iVar2 == 0) {
      uVar6 = 0;
      goto LAB_45ea132a;
    }
    iVar8 = context_check_is_livetv(iVar2);
    uVar6 = 0;
    if (iVar8 != 0) {
      uVar6 = 1;
      __dlog_print(0,4,DAT_45ea1590 + 0x45ea14b0,DAT_45ea158c + 0x45ea14ae,DAT_45ea1588 + 0x45ea14d5
                   ,DAT_45ea1584 + 0x45ea1ed2,0x25e,iVar2);
    }
LAB_45ea1296:
    g_hash_table_lookup(param_2,iVar2);
    iVar8 = g_strdup();
    if (iVar8 != 0) {
      iVar9 = g_strcmp0(iVar8,DAT_45ea1538 + 0x45ea12ae);
      if ((((iVar9 == 0) || (iVar9 = g_strcmp0(iVar8,DAT_45ea1560 + 0x45ea140a), iVar9 == 0)) ||
          (iVar9 = g_strcmp0(iVar8,DAT_45ea1564 + 0x45ea141a), iVar9 == 0)) ||
         (((iVar9 = g_strcmp0(iVar8,DAT_45ea1568 + 0x45ea142a), iVar9 == 0 ||
           (iVar9 = g_strcmp0(iVar8,DAT_45ea156c + 0x45ea143a), iVar9 == 0)) ||
          (iVar9 = g_strcmp0(iVar8,DAT_45ea1570 + 0x45ea144a), iVar9 == 0)))) {
        __dlog_print(0,3,DAT_45ea1548 + 0x45ea12e2,DAT_45ea1544 + 0x45ea12de,
                     DAT_45ea1540 + 0x45ea1307,DAT_45ea153c + 0x45ea1d04,0x277,iVar2,iVar8,uVar6);
      }
      else {
        __dlog_print(0,5,DAT_45ea1580 + 0x45ea147e,DAT_45ea157c + 0x45ea147a,
                     DAT_45ea1578 + 0x45ea14a3,DAT_45ea1574 + 0x45ea1ea0,0x272,iVar2,iVar8,uVar6);
      }
      goto LAB_45ea12e8;
    }
  }
  else {
    uVar6 = json_object_get_boolean_member(param_1,iVar9);
    if (iVar2 != 0) goto LAB_45ea1296;
LAB_45ea132a:
    iVar2 = iVar7;
    if (iVar7 == 0) {
      __dlog_print(0,6,DAT_45ea15a0 + 0x45ea14ea,DAT_45ea15a4 + 0x45ea14ee,DAT_45ea1598 + 0x45ea1513
                   ,DAT_45ea159c + 0x45ea1f1e,0x26a,uVar1);
    }
  }
  iVar8 = g_strdup(DAT_45ea154c + 0x45ea1338);
  __dlog_print(0,3,DAT_45ea155c + 0x45ea1362,DAT_45ea1558 + 0x45ea135e,DAT_45ea1550 + 0x45ea1383,
               DAT_45ea1554 + 0x45ea1d90,0x275,iVar2);
LAB_45ea12e8:
  uVar1 = task_create(uVar1,iVar2,iVar8,iVar7,local_34,local_38,uVar4,uVar3,uVar6,local_30);
  g_free(iVar8);
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

