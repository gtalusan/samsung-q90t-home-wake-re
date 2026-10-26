/* libapp-context-manager-common.so : construct_task_filter@45ea6a9c */

void construct_task_filter(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_r6;
  int iVar10;
  
  if (param_1 == 0) {
    g_assertion_message_expr
              (0,DAT_45ea6bf0 + 0x45ea6bbe,0x3c2,DAT_45ea6bec + 0x45ea7a9c,DAT_45ea6be8 + 0x45ea6bb2
              );
LAB_45ea6bc0:
    g_free(unaff_r6);
  }
  else {
    iVar1 = json_node_get_node_type();
    if (iVar1 != 1) {
      g_assertion_message_expr
                (0,DAT_45ea6bd0 + 0x45ea6ace,0x3c3,DAT_45ea6bcc + 0x45ea79ac,
                 DAT_45ea6bc8 + 0x45ea6ac2);
    }
    uVar2 = json_node_get_array(param_1);
    iVar1 = json_array_get_length();
    if (iVar1 != 0) {
      iVar9 = 0;
      iVar6 = DAT_45ea6bd8 + 0x45ea6af2;
      iVar7 = DAT_45ea6bd4 + 0x45ea79d2;
      iVar8 = DAT_45ea6bdc + 0x45ea6b3d;
      iVar10 = DAT_45ea6be0 + 0x45ea6b04;
      do {
        while( true ) {
          iVar3 = json_array_get_object_element(uVar2,iVar9);
          if (iVar3 == 0) {
            return;
          }
          iVar4 = FUN_45e991f8(iVar3,param_2 + 0x20);
          if (iVar4 == 0) break;
          unaff_r6 = util_malloc_s(0x28);
          if (unaff_r6 == 0) {
            return;
          }
          iVar3 = filter_from_json_object(unaff_r6,iVar3,param_2);
          if (iVar3 != 0) goto LAB_45ea6bc0;
          __dlog_print(0,3,iVar10,iVar6,iVar8,iVar7,0x3dc,*(undefined4 *)(unaff_r6 + 4));
          __dlog_print(0,3,iVar10,DAT_45ea6be4 + 0x45ea6b74,iVar8,iVar7,0x3dd,
                       *(undefined4 *)(unaff_r6 + 8));
          if (*(int *)(unaff_r6 + 8) == 1) {
            uVar5 = g_list_append(*(undefined4 *)(param_2 + 0xc),unaff_r6);
            *(undefined4 *)(param_2 + 0xc) = uVar5;
            break;
          }
          iVar9 = iVar9 + 1;
          uVar5 = g_list_append(*(undefined4 *)(param_2 + 8),unaff_r6);
          *(undefined4 *)(param_2 + 8) = uVar5;
          if (iVar1 == iVar9) {
            return;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar1 != iVar9);
    }
  }
  return;
}

