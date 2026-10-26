/* libapp-context-manager-common.so : FUN_45eaa7cc@45eaa7cc */

undefined4 FUN_45eaa7cc(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int unaff_r11;
  
  iVar12 = DAT_45eaa9f8;
  puVar5 = *(undefined4 **)(DAT_45eaa9f8 + 0x45eaa812);
  iVar7 = DAT_45eaa9fc + 0x45eaa7e8;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)util_malloc_s(0x14);
    *(undefined4 **)(iVar12 + 0x45eaa812) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      __dlog_print(0,6,DAT_45eaaa48 + 0x45eaa9f0,DAT_45eaaa44 + 0x45eaa9ee,DAT_45eaaa40 + 0x45eaaa1d
                   ,DAT_45eaaa3c + 0x45eaad6a,0x49);
      return 0xffffffff;
    }
    g_strdup(DAT_45eaaa24 + 0x45eaa96c);
    uVar13 = g_node_new();
    puVar11 = *(undefined4 **)(iVar12 + 0x45eaa812);
    *puVar5 = uVar13;
    iVar6 = DAT_45eaaa2c;
    iVar4 = DAT_45eaaa28;
    puVar11[1] = *puVar11;
    uVar13 = g_hash_table_new(*(undefined4 *)(iVar7 + iVar4),*(undefined4 *)(iVar7 + iVar6));
    iVar4 = DAT_45eaaa30;
    puVar11[3] = uVar13;
    iVar6 = *(int *)(iVar12 + 0x45eaa812);
    uVar13 = g_hash_table_new_full
                       (*(undefined4 *)(iVar7 + iVar4),*(undefined4 *)(iVar7 + DAT_45eaaa34),0,
                        DAT_45eaaa38 + 0x45eaa99c);
    puVar5 = *(undefined4 **)(iVar12 + 0x45eaa812);
    *(undefined4 *)(iVar6 + 0x10) = uVar13;
    if (puVar5 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
  }
  if (param_2 == (int *)0x0 || (param_4 == 0 || param_3 < 0)) {
    return 0xffffffff;
  }
  uVar13 = *puVar5;
  if (param_3 != 0) {
    iVar6 = DAT_45eaaa04 + 0x45eaa81e;
    iVar8 = DAT_45eaaa00 + 0x45eaabac;
    iVar4 = DAT_45eaaa08 + 0x45eaa824;
    iVar9 = DAT_45eaaa04 + 0x45eaa85d;
    iVar12 = 0;
LAB_45eaa890:
    do {
      if (param_1 == 0) {
        iVar1 = key_handler_get_keysym(*param_2);
        iVar10 = *param_2;
      }
      else {
        iVar10 = *param_2;
        iVar1 = iVar10;
      }
      iVar14 = DAT_45eaaa0c + 0x45eaa842;
      __dlog_print(0,3,iVar14,iVar4,iVar9,iVar8,0x60,iVar10);
      if (iVar1 == 0) {
        g_assertion_message_expr(0,iVar6,0x61,iVar8,DAT_45eaaa18 + 0x45eaa90a);
LAB_45eaa912:
        iVar10 = g_strdup(iVar1);
        g_hash_table_add(*(undefined4 *)(*(int *)(unaff_r11 + 0x38) + 0xc),iVar10);
        __dlog_print(0,3,iVar14,DAT_45eaaa1c + 0x45eaa940,iVar9,iVar8,0x66,iVar10);
        key_handler_add_key(iVar10,*(undefined4 *)(iVar7 + DAT_45eaaa20),0);
      }
      else {
        unaff_r11 = DAT_45eaaa10 + 0x45eaa862;
        iVar10 = g_hash_table_lookup(*(undefined4 *)(*(int *)(DAT_45eaaa10 + 0x45eaa89a) + 0xc),
                                     iVar1);
        if (iVar10 == 0) goto LAB_45eaa912;
      }
      iVar1 = g_node_child_index(uVar13,iVar10);
      if (-1 < iVar1) {
        iVar12 = iVar12 + 1;
        uVar13 = g_node_nth_child(uVar13);
        param_2 = param_2 + 1;
        if (param_3 == iVar12) break;
        goto LAB_45eaa890;
      }
      iVar12 = iVar12 + 1;
      uVar2 = g_node_new(iVar10);
      uVar13 = g_node_insert(uVar13,0xffffffff,uVar2);
      param_2 = param_2 + 1;
    } while (param_3 != iVar12);
  }
  iVar12 = DAT_45eaaa14;
  iVar7 = g_hash_table_lookup(*(undefined4 *)(*(int *)(DAT_45eaaa14 + 0x45eaa902) + 0x10),uVar13);
  if (iVar7 == 0) {
    piVar3 = (int *)util_malloc_s(0x10);
    iVar12 = *(int *)(iVar12 + 0x45eaa902);
    piVar3[3] = 0;
    g_hash_table_insert(*(undefined4 *)(iVar12 + 0x10),uVar13,piVar3);
  }
  else {
    while (*(int *)(iVar7 + 8) != 0) {
      iVar7 = *(int *)(iVar7 + 8);
    }
    iVar12 = util_malloc_s(0x10);
    *(int *)(iVar7 + 8) = iVar12;
    *(int *)(iVar12 + 0xc) = iVar7;
    piVar3 = *(int **)(iVar7 + 8);
  }
  *piVar3 = param_4;
  piVar3[1] = param_5;
  piVar3[2] = 0;
  return 0;
}

