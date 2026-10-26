/* libapp-context-manager-common.so : construct_context_extensions@45ea0bc8 */

void construct_context_extensions(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined8 uVar7;
  int iVar8;
  undefined4 local_4c;
  undefined8 *local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  if (param_1 == 0) {
    g_assertion_message_expr
              (0,DAT_45ea0ee4 + 0x45ea0e42,0x4f9,DAT_45ea0ee0 + 0x45ea1810,DAT_45ea0edc + 0x45ea0e36
              );
    goto LAB_45ea0e44;
  }
  iVar1 = json_node_get_node_type();
  if (iVar1 != 1) {
    g_assertion_message_expr
              (0,DAT_45ea0e74 + 0x45ea0bfc,0x4fa,DAT_45ea0e70 + 0x45ea15ca,DAT_45ea0e6c + 0x45ea0bf0
              );
  }
  unaff_r10 = json_node_get_array(param_1);
  unaff_r9 = json_array_get_length();
  if (unaff_r9 != 0) {
    local_44 = (undefined8 *)0x0;
    unaff_r4 = 0;
    local_34 = DAT_45ea0e78 + 0x45ea0c5d;
    local_30 = DAT_45ea0e7c + 0x45ea15fa;
    local_38 = DAT_45ea0e80 + 0x45ea0c2e;
    unaff_r11 = param_2 + 0x20;
    local_3c = DAT_45ea0e84 + 0x45ea0c3a;
    do {
      while( true ) {
        unaff_r5 = json_array_get_object_element(unaff_r10,unaff_r4);
        iVar1 = FUN_45e991f8(unaff_r5,unaff_r11);
        if (iVar1 == 0) break;
        iVar2 = json_object_get_string_member(unaff_r5,local_38);
        iVar1 = DAT_45ea0e88;
        if (iVar2 == 0) {
          return;
        }
        uVar3 = context_get_custom_mask();
        iVar8 = iVar2;
        __dlog_print(0,3,iVar1 + 0x45ea0c78,local_3c,local_34,local_30,0x514,iVar2,uVar3);
        iVar4 = json_object_get_string_member(unaff_r5,DAT_45ea0e8c + 0x45ea0c96);
        if ((iVar4 != 0) && (iVar5 = g_strcmp0(iVar4,DAT_45ea0e90 + 0x45ea0ca4), iVar5 == 0)) {
          __dlog_print(0,3,iVar1 + 0x45ea0c78,DAT_45ea0ea4 + 0x45ea0cfc,local_34,local_30,0x518,
                       iVar8,uVar3);
          unaff_r8 = (undefined4 *)util_malloc_s(0x14);
          local_4c = json_object_get_string_member(unaff_r5,DAT_45ea0ea8 + 0x45ea0d0e);
          uVar3 = json_object_get_string_member(unaff_r5,DAT_45ea0eac + 0x45ea0d1a);
          local_2c = json_object_get_string_member(unaff_r5,DAT_45ea0eb0 + 0x45ea0d26);
          uVar6 = g_strdup(iVar2);
          iVar1 = DAT_45ea0eb4;
          *unaff_r8 = uVar6;
          iVar1 = g_strcmp0(uVar3,iVar1 + 0x45ea0d3a);
          uVar6 = 1;
          if (iVar1 != 0) {
            iVar1 = g_strcmp0(uVar3,DAT_45ea0ec4 + 0x45ea0db2);
            uVar6 = 2;
            if (iVar1 != 0) {
              iVar1 = g_strcmp0(uVar3,DAT_45ea0ec8 + 0x45ea0dc2);
              uVar6 = 3;
              if (iVar1 != 0) {
                iVar1 = g_strcmp0(uVar3,DAT_45ea0ecc + 0x45ea0dd2);
                uVar6 = 0xffffffff;
                if (iVar1 == 0) {
                  uVar6 = 4;
                }
              }
            }
          }
          iVar1 = DAT_45ea0eb8;
          unaff_r8[2] = uVar6;
          iVar1 = g_strcmp0(local_2c,iVar1 + 0x45ea0d50);
          uVar3 = 0;
          if (iVar1 != 0) {
            iVar1 = g_strcmp0(local_2c,DAT_45ea0ec0 + 0x45ea0da0);
            if (iVar1 == 0) {
              uVar3 = 1;
            }
            else {
LAB_45ea0e44:
              iVar1 = g_strcmp0(local_2c,DAT_45ea0ee8 + 0x45ea0e4c);
              if (iVar1 == 0) {
                uVar3 = 3;
              }
              else {
                iVar1 = g_strcmp0(local_2c,DAT_45ea0eec + 0x45ea0e5c);
                uVar3 = 0xffffffff;
                if (iVar1 == 0) {
                  uVar3 = 2;
                }
              }
            }
          }
          unaff_r8[3] = uVar3;
          uVar3 = g_strdup(local_4c);
          unaff_r8[1] = uVar3;
          switch(unaff_r8[2]) {
          case 1:
            local_44 = (undefined8 *)util_malloc_s(4);
            uVar3 = json_object_get_int_member(unaff_r5,DAT_45ea0ed0 + 0x45ea0df0);
            *(undefined4 *)local_44 = uVar3;
            break;
          case 2:
            local_44 = (undefined8 *)util_malloc_s(4);
            uVar3 = json_object_get_boolean_member(unaff_r5,DAT_45ea0ed4 + 0x45ea0e08);
            *(undefined4 *)local_44 = uVar3;
            break;
          case 3:
            local_44 = (undefined8 *)util_malloc_s(8);
            uVar7 = json_object_get_double_member(unaff_r5,DAT_45ea0ed8 + 0x45ea0e20);
            *local_44 = uVar7;
            break;
          case 4:
            json_object_get_string_member(unaff_r5,DAT_45ea0ebc + 0x45ea0d7c);
            local_44 = (undefined8 *)g_strdup();
          }
          unaff_r8[4] = local_44;
          uVar3 = g_list_append(*(undefined4 *)(param_2 + 0x14),unaff_r8);
          *(undefined4 *)(param_2 + 0x14) = uVar3;
          break;
        }
        unaff_r4 = unaff_r4 + 1;
        __dlog_print(0,6,DAT_45ea0ea0 + 0x45ea0cd4,DAT_45ea0e9c + 0x45ea0cd2,
                     DAT_45ea0e98 + 0x45ea0cfb,DAT_45ea0e94 + 0x45ea168c,0x51b,iVar4,uVar3);
        if (unaff_r9 == unaff_r4) {
          return;
        }
      }
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r9 != unaff_r4);
  }
  return;
}

