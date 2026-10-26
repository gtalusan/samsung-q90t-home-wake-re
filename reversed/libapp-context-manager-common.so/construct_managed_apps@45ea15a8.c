/* libapp-context-manager-common.so : construct_managed_apps@45ea15a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void construct_managed_apps(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int unaff_r5;
  int unaff_r6;
  int unaff_r8;
  undefined4 unaff_r11;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar8 = _LAB_45ea1744 + 0x45ea15b6;
  piVar7 = *(int **)(iVar8 + _LAB_45ea1748);
  local_2c = *piVar7;
  if (param_1 == 0) {
    g_assertion_message_expr
              (0,DAT_45ea1790 + 0x45ea1724,0x317,DAT_45ea178c + 0x45ea2192,DAT_45ea1788 + 0x45ea1718
              );
LAB_45ea1726:
    __dlog_print(0,6,unaff_r6,DAT_45ea1794 + 0x45ea1736,iVar8,unaff_r5,0x216);
  }
  else {
    iVar1 = json_node_get_node_type();
    if (iVar1 != 1) {
      g_assertion_message_expr
                (0,_LAB_45ea1754 + 0x45ea15ea,0x318,_LAB_45ea1750 + 0x45ea2058,
                 _LAB_45ea174c + 0x45ea15de);
    }
    uVar2 = json_node_get_array(param_1);
    iVar1 = json_array_get_length();
    unaff_r11 = g_hash_table_new_full
                          (*(undefined4 *)(iVar8 + DAT_45ea175c),
                           *(undefined4 *)(iVar8 + DAT_45ea1760),
                           *(undefined4 *)(iVar8 + DAT_45ea1758));
    uVar3 = util_get_default_uid();
    iVar8 = 0;
    pkgmgrinfo_appinfo_get_usr_installed_list(DAT_45ea1764 + 0x45ea1622,uVar3,unaff_r11);
    if (iVar1 != 0) {
LAB_45ea162e:
      do {
        iVar4 = json_array_get_object_element(uVar2,iVar8);
        if (iVar4 == 0) {
LAB_45ea16d8:
          g_hash_table_foreach(*(undefined4 *)(param_2 + 4),DAT_45ea1784 + 0x45ea16e4,0);
          g_hash_table_destroy(*(undefined4 *)(param_2 + 4));
          *(undefined4 *)(param_2 + 4) = 0;
          g_hash_table_destroy(unaff_r11);
          goto LAB_45ea16fa;
        }
        iVar5 = FUN_45e991f8(iVar4,param_2 + 0x20);
        if (iVar5 == 0) {
          iVar8 = iVar8 + 1;
          if (iVar1 == iVar8) break;
          goto LAB_45ea162e;
        }
        puVar6 = (undefined4 *)task_from_json_object(iVar4,unaff_r11);
        if (puVar6 == (undefined4 *)0x0) goto LAB_45ea16d8;
        iVar8 = iVar8 + 1;
        g_hash_table_insert(*(undefined4 *)(param_2 + 4),*puVar6,puVar6);
      } while (iVar1 != iVar8);
    }
    iVar1 = DAT_45ea1768;
    FUN_45ea0188(param_2 + 4);
    iVar8 = DAT_45ea1774;
    iVar4 = DAT_45ea1770;
    unaff_r6 = iVar1 + 0x45ea1680;
    local_34 = param_2;
    local_30 = unaff_r11;
    uVar2 = tzplatform_mkpath(0x18,DAT_45ea176c + 0x45ea1678);
    unaff_r5 = iVar4 + 0x45ea20ea;
    iVar8 = iVar8 + 0x45ea16d3;
    __dlog_print(0,4,unaff_r6,DAT_45ea1778 + 0x45ea169a,iVar8,unaff_r5,0x20f);
    unaff_r8 = util_db_open(uVar2);
    if (unaff_r8 == 0) goto LAB_45ea16d0;
    iVar1 = util_db_foreach_get_from_table
                      (unaff_r8,DAT_45ea1780 + 0x45ea16c4,DAT_45ea177c + 0x45ea16c2,&local_34);
    if (iVar1 < 0) goto LAB_45ea1726;
  }
  util_db_close(unaff_r8);
LAB_45ea16d0:
  g_hash_table_destroy(unaff_r11);
LAB_45ea16fa:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

