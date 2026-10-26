/* libapp-context-manager-common.so : key_filter_spec_from_json_object@45ea6428 */

undefined4 key_filter_spec_from_json_object(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar3 = DAT_45ea67cc;
  iVar8 = *param_1;
  if (iVar8 == 1) {
    json_object_get_string_member(param_2,DAT_45ea67d0 + 0x45ea672a);
    iVar8 = g_strdup();
    iVar3 = DAT_45ea67d4;
    param_1[1] = iVar8;
    iVar3 = json_object_get_int_member(param_2,iVar3 + 0x45ea673c);
    param_1[3] = iVar3;
  }
  else if (iVar8 == 2) {
    iVar9 = 0;
    param_1[1] = 0;
    uVar2 = json_object_get_array_member(param_2,iVar3 + 0x45ea66e4);
    iVar3 = json_array_get_length();
    param_1[3] = iVar3;
    iVar8 = util_malloc_s(iVar3 << 2);
    param_1[2] = iVar8;
    if (0 < iVar3) {
      while( true ) {
        json_array_get_string_element(uVar2,iVar9);
        uVar4 = g_strdup();
        *(undefined4 *)(iVar8 + iVar9 * 4) = uVar4;
        iVar9 = iVar9 + 1;
        if (iVar3 == iVar9) break;
        iVar8 = param_1[2];
      }
    }
  }
  else if (iVar8 == 0) {
    json_object_get_string_member(param_2,DAT_45ea67c4 + 0x45ea6662);
    iVar3 = g_strdup();
    param_1[1] = iVar3;
  }
  iVar9 = DAT_45ea6778 + 0x45ea6452;
  iVar8 = json_object_has_member(param_2,iVar9);
  iVar3 = DAT_45ea677c;
  if (iVar8 == 0) {
    iVar8 = DAT_45ea6784 + 0x45ea64b2;
    iVar3 = json_object_has_member(param_2,iVar8);
    if (iVar3 != 0) {
      uVar2 = json_object_get_array_member(param_2,iVar8);
      iVar3 = json_array_get_length();
      if (0 < iVar3) {
        iVar11 = DAT_45ea6788 + 0x45ea64e2;
        iVar9 = DAT_45ea678c + 0x45ea64e4;
        iVar10 = DAT_45ea6790 + 0x45ea64e8;
        iVar8 = 0;
        do {
          uVar4 = json_array_get_object_element(uVar2,iVar8);
          iVar5 = util_malloc_s(0x2c);
          iVar6 = json_object_has_member(uVar4,iVar11);
          if (iVar6 == 0) {
            iVar6 = json_object_has_member(uVar4,iVar10);
          }
          else {
            uVar7 = json_object_get_array_member(uVar4,iVar11);
            json_array_foreach_element(uVar7,iVar9,iVar5);
            iVar6 = json_object_has_member(uVar4,iVar10);
          }
          if (iVar6 != 0) {
            json_object_get_string_member(uVar4,iVar10);
            uVar7 = event_filter_to_signal();
            *(undefined4 *)(iVar5 + 4) = uVar7;
          }
          iVar12 = DAT_45ea6794 + 0x45ea64fe;
          iVar6 = json_object_has_member(uVar4,iVar12);
          if (iVar6 != 0) {
            uVar7 = json_object_get_array_member(uVar4,iVar12);
            json_array_foreach_element(uVar7,DAT_45ea67c8 + 0x45ea66d4,iVar5 + 0x28);
          }
          iVar12 = DAT_45ea6798 + 0x45ea6512;
          iVar6 = json_object_has_member(uVar4,iVar12);
          if (iVar6 != 0) {
            json_object_get_string_member(uVar4,iVar12);
            uVar7 = event_filter_to_target();
            *(undefined4 *)(iVar5 + 8) = uVar7;
          }
          iVar12 = DAT_45ea679c + 0x45ea6526;
          iVar6 = json_object_has_member(uVar4,iVar12);
          if (iVar6 != 0) {
            uVar7 = json_object_get_int_member(uVar4,iVar12);
            *(undefined4 *)(iVar5 + 0xc) = uVar7;
          }
          iVar12 = DAT_45ea67a0 + 0x45ea653a;
          iVar6 = json_object_has_member(uVar4,iVar12);
          if (iVar6 != 0) {
            json_object_get_string_member(uVar4,iVar12);
            uVar7 = g_strdup();
            *(undefined4 *)(iVar5 + 0x18) = uVar7;
          }
          iVar12 = DAT_45ea67a4 + 0x45ea654e;
          iVar6 = json_object_has_member(uVar4,iVar12);
          if (iVar6 != 0) {
            json_object_get_string_member(uVar4,iVar12);
            uVar7 = g_strdup();
            *(undefined4 *)(iVar5 + 0x1c) = uVar7;
          }
          iVar12 = DAT_45ea67a8 + 0x45ea6562;
          iVar6 = json_object_has_member(uVar4,iVar12);
          if (iVar6 != 0) {
            uVar7 = json_object_get_boolean_member(uVar4,iVar12);
            *(undefined4 *)(iVar5 + 0x10) = uVar7;
          }
          iVar12 = DAT_45ea67ac + 0x45ea6576;
          iVar6 = json_object_has_member(uVar4,iVar12);
          if (iVar6 != 0) {
            uVar4 = json_object_get_boolean_member(uVar4,iVar12);
            *(undefined4 *)(iVar5 + 0x14) = uVar4;
          }
          iVar5 = g_list_append(param_1[4],iVar5);
          iVar8 = iVar8 + 1;
          param_1[4] = iVar5;
        } while (iVar3 != iVar8);
      }
      return 0;
    }
    iVar9 = DAT_45ea67b0 + 0x45ea65e8;
    iVar8 = json_object_has_member(param_2,iVar9);
    iVar3 = DAT_45ea67b4;
    if (iVar8 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      puVar1 = (undefined4 *)util_malloc_s(0x2c);
      uVar2 = event_filter_to_signal(DAT_45ea67b8 + 0x45ea6608);
      puVar1[1] = uVar2;
      *puVar1 = 0;
      uVar2 = json_object_get_array_member(param_2,iVar9);
      json_array_foreach_element(uVar2,DAT_45ea67bc + 0x45ea6620,puVar1 + 10);
      iVar8 = g_list_append(0,puVar1);
      param_1[4] = iVar8;
      iVar8 = json_object_has_member(param_2,iVar3 + 0x45ea6606);
      if (iVar8 != 0) {
        json_object_get_string_member(param_2,iVar3 + 0x45ea6606);
        uVar2 = g_strdup();
        puVar1[6] = uVar2;
      }
      iVar8 = DAT_45ea67c0 + 0x45ea6644;
      iVar3 = json_object_has_member(param_2,iVar8);
      if (iVar3 == 0) {
        return 0;
      }
      json_object_get_string_member(param_2,iVar8);
      uVar4 = g_strdup();
      uVar2 = 0;
      puVar1[7] = uVar4;
    }
  }
  else {
    puVar1 = (undefined4 *)util_malloc_s(0x2c);
    uVar2 = event_filter_to_signal(DAT_45ea6780 + 0x45ea646c);
    puVar1[1] = uVar2;
    *puVar1 = 0;
    json_object_get_string_member(param_2,iVar9);
    uVar2 = event_filter_to_target();
    puVar1[2] = uVar2;
    iVar8 = json_object_has_member(param_2,iVar3 + 0x45ea646a);
    if (iVar8 != 0) {
      uVar2 = json_object_get_int_member(param_2,iVar3 + 0x45ea646a);
      puVar1[3] = uVar2;
    }
    iVar3 = g_list_append(0,puVar1);
    uVar2 = 0;
    param_1[4] = iVar3;
  }
  return uVar2;
}

