/* libapp-context-manager-common.so : construct_key_filter@45ea67d8 */

void construct_key_filter(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *unaff_r5;
  int iVar8;
  
  if (param_1 == 0) {
    g_assertion_message_expr
              (0,DAT_45ea6950 + 0x45ea6916,0x46e,DAT_45ea694c + 0x45ea77dc,DAT_45ea6948 + 0x45ea690a
              );
LAB_45ea6918:
    g_free(unaff_r5);
  }
  else {
    iVar1 = json_node_get_node_type();
    if (iVar1 != 1) {
      g_assertion_message_expr
                (0,DAT_45ea6928 + 0x45ea680c,0x46f,&UNK_45ea76d2 + DAT_45ea6924,
                 DAT_45ea6920 + 0x45ea6800);
    }
    uVar2 = json_node_get_array(param_1);
    iVar1 = json_array_get_length();
    if (iVar1 != 0) {
      iVar8 = 0;
      iVar5 = DAT_45ea692c + 0x45ea682e;
      iVar6 = DAT_45ea6930 + 0x45ea6834;
      iVar7 = DAT_45ea6934 + 0x45ea683a;
      do {
        while( true ) {
          uVar3 = json_array_get_object_element(uVar2,iVar8);
          iVar4 = FUN_45e991f8(uVar3,param_2 + 0x20);
          if (iVar4 == 0) break;
          unaff_r5 = (undefined4 *)util_malloc_s(0x18);
          iVar4 = json_object_has_member(uVar3,iVar5);
          if (iVar4 == 0) {
            iVar4 = json_object_has_member(uVar3,iVar6);
            if (iVar4 == 0) {
              iVar4 = json_object_has_member(uVar3,iVar7);
              if (iVar4 != 0) {
                *unaff_r5 = 0;
                goto LAB_45ea686e;
              }
              goto LAB_45ea6918;
            }
            *unaff_r5 = 1;
            iVar4 = key_filter_spec_from_json_object(unaff_r5,uVar3,param_2);
          }
          else {
            *unaff_r5 = 2;
LAB_45ea686e:
            iVar4 = key_filter_spec_from_json_object(unaff_r5,uVar3,param_2);
          }
          if (iVar4 < 0) {
            __dlog_print(0,6,DAT_45ea6944 + 0x45ea68dc,DAT_45ea6940 + 0x45ea68da,
                         DAT_45ea693c + 0x45ea6907,DAT_45ea6938 + 0x45ea7790,0x48a);
            key_filter_spec_free(unaff_r5);
            return;
          }
          iVar8 = iVar8 + 1;
          uVar3 = g_list_append(*(undefined4 *)(param_2 + 0x10),unaff_r5);
          *(undefined4 *)(param_2 + 0x10) = uVar3;
          if (iVar1 == iVar8) {
            return;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
  }
  return;
}

