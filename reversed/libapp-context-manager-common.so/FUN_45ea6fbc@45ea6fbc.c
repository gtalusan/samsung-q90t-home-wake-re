/* libapp-context-manager-common.so : FUN_45ea6fbc@45ea6fbc */

void FUN_45ea6fbc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *local_30;
  int local_2c;
  
  iVar12 = DAT_45ea71b8 + 0x45ea6fce;
  piVar9 = *(int **)(iVar12 + DAT_45ea71bc);
  iVar11 = DAT_45ea71c0 + 0x45ea6fde;
  local_30 = (undefined4 *)0x0;
  local_2c = *piVar9;
  puVar1 = (undefined4 *)util_malloc_s(0x20);
  uVar2 = json_node_get_object(param_3);
  iVar3 = json_object_has_member(uVar2,iVar11);
  iVar6 = DAT_45ea71c4;
  if (iVar3 == 0) {
    iVar3 = DAT_45ea71cc + 0x45ea704c;
    iVar6 = json_object_has_member(uVar2,iVar3);
    if (iVar6 != 0) {
      puVar1[5] = 2;
      uVar4 = json_object_get_array_member(uVar2,iVar3);
      iVar6 = json_array_get_length();
      puVar1[3] = iVar6;
      iVar3 = util_malloc_s(iVar6 << 2);
      puVar1[1] = iVar3;
      if (0 < iVar6) {
        iVar8 = DAT_45ea71d0 + 0x45ea7fb0;
        iVar7 = DAT_45ea71d8 + 0x45ea708e;
        iVar10 = DAT_45ea71d4 + 0x45ea70c7;
        iVar11 = 0;
        while( true ) {
          json_array_get_string_element(uVar4,iVar11);
          uVar5 = g_strdup();
          *(undefined4 *)(iVar3 + iVar11 * 4) = uVar5;
          iVar3 = iVar11 * 4;
          iVar11 = iVar11 + 1;
          __dlog_print(0,3,DAT_45ea71dc + 0x45ea70c2,iVar7,iVar10,iVar8,0x69a,
                       *(undefined4 *)(puVar1[1] + iVar3));
          if (iVar6 == iVar11) break;
          iVar3 = puVar1[1];
        }
      }
    }
  }
  else {
    json_object_get_string_member(uVar2,iVar11);
    uVar4 = g_strdup();
    puVar1[2] = uVar4;
    iVar3 = json_object_has_member(uVar2,iVar6 + 0x45ea7008);
    if (iVar3 == 0) {
      puVar1[5] = 0;
    }
    else {
      puVar1[5] = 1;
      uVar4 = json_object_get_int_member(uVar2,iVar6 + 0x45ea7008);
      puVar1[4] = uVar4;
    }
  }
  iVar11 = DAT_45ea71c8 + 0x45ea7024;
  iVar3 = json_object_has_member(uVar2,iVar11);
  iVar6 = DAT_45ea71e0;
  if (iVar3 != 0) {
    json_object_get_string_member(uVar2,iVar11);
    uVar4 = g_strdup();
    *puVar1 = uVar4;
    iVar3 = json_object_has_member(uVar2,iVar6 + 0x45ea70f4);
    if (iVar3 != 0) {
      json_object_get_string_member(uVar2,iVar6 + 0x45ea70f4);
      uVar4 = context_to_mask();
      puVar1[6] = uVar4;
    }
    iVar3 = DAT_45ea71e4 + 0x45ea710a;
    iVar6 = json_object_has_member(uVar2,iVar3);
    if (iVar6 != 0) {
      uVar2 = json_object_get_member(uVar2,iVar3);
      FUN_45e9989c(0,0xffffffff,uVar2,&local_30);
      if (local_30 != (undefined4 *)0x0) {
        puVar1[7] = *local_30;
        g_list_free();
      }
    }
    iVar6 = DAT_45ea71e8;
    uVar2 = g_list_append(*(undefined4 *)(DAT_45ea71e8 + 0x45ea729c),puVar1);
    iVar3 = puVar1[5];
    *(undefined4 *)(iVar6 + 0x45ea729c) = uVar2;
    if (iVar3 == 1) {
      add_key(puVar1[2],puVar1[4],0,*(undefined4 *)(iVar12 + DAT_45ea71ec),puVar1);
    }
    else if (iVar3 == 2) {
      key_sequence_add(puVar1[1],puVar1[3],*(undefined4 *)(iVar12 + DAT_45ea71ec),puVar1);
    }
    else if (iVar3 == 0) {
      add_key(puVar1[2],0,0,*(undefined4 *)(iVar12 + DAT_45ea71ec),puVar1);
    }
  }
  if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

