/* libapp-context-manager-common.so : construct_alloc_hints@45ea1004 */

void construct_alloc_hints(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_r11;
  
  if (param_1 == 0) {
    g_assertion_message_expr
              (0,DAT_45ea10d4 + 0x45ea10b4,0x373,DAT_45ea10d0 + 0x45ea1aba,DAT_45ea10cc + 0x45ea10a8
              );
LAB_45ea10b6:
    g_free(unaff_r11);
  }
  else {
    iVar1 = json_node_get_node_type();
    if (iVar1 != 1) {
      g_assertion_message_expr
                (0,DAT_45ea10c8 + 0x45ea1036,0x374,DAT_45ea10c4 + 0x45ea1a3c,
                 DAT_45ea10c0 + 0x45ea102a);
    }
    uVar2 = json_node_get_array(param_1);
    iVar6 = 0;
    iVar1 = json_array_get_length();
    if (iVar1 != 0) {
      do {
        while( true ) {
          iVar3 = json_array_get_object_element(uVar2,iVar6);
          if (iVar3 == 0) {
            return;
          }
          iVar4 = FUN_45e991f8(iVar3,param_2 + 8);
          if (iVar4 == 0) break;
          unaff_r11 = util_malloc_s(0x14);
          if (unaff_r11 == 0) {
            return;
          }
          iVar3 = hint_from_json_object(unaff_r11,iVar3,param_2);
          if (iVar3 != 0) goto LAB_45ea10b6;
          iVar6 = iVar6 + 1;
          uVar5 = g_list_prepend(*param_2,unaff_r11);
          *param_2 = uVar5;
          if (iVar1 == iVar6) {
            return;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  return;
}

