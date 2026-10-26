/* libapp-context-manager-common.so : task_mgr_print_task_list@45ead594 */

void task_mgr_print_task_list(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar9 = *(int **)(DAT_45ead8c0 + 0x45ead5aa + DAT_45ead8c4);
  local_2c = *piVar9;
  g_hash_table_iter_init(auStack_44,*(undefined4 *)(param_1 + 0x20));
  window_handler_dump();
  iVar7 = DAT_45ead8c8 + 0x45ead6b8;
  iVar10 = DAT_45ead8cc + 0x45ead619;
  do {
    iVar11 = DAT_45ead8d0 + 0x45ead5e6;
    iVar12 = DAT_45ead8d4 + 0x45ead5ec;
    do {
      iVar3 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c);
      puVar1 = local_4c;
      iVar17 = DAT_45ead928;
      iVar14 = DAT_45ead924;
      if (iVar3 == 0) {
        iVar11 = DAT_45ead914 + 0x45ead759;
        iVar12 = DAT_45ead920 + 0x45ead812;
        __dlog_print(0,4,DAT_45ead91c + 0x45ead72c,DAT_45ead918 + 0x45ead728,
                     DAT_45ead910 + 0x45ead74f,DAT_45ead90c + 0x45ead7f0,0xb72);
        iVar7 = 1;
        iVar10 = 0x1e;
        do {
          iVar3 = iVar10;
          iVar10 = context_check_mask(iVar7,param_1);
          if (iVar10 != 0) {
            uVar4 = context_to_string(iVar7);
            __dlog_print(0,4,iVar17 + 0x45ead74c,iVar14 + 0x45ead74a,iVar11,iVar12,0xb75,uVar4);
          }
          iVar10 = iVar3 + -1;
          iVar7 = iVar7 << 1;
        } while (iVar10 != 0);
        iVar3 = iVar3 + -1;
        iVar7 = *(int *)(param_1 + 0x34);
        if (iVar7 == 0) {
          __dlog_print(iVar3,4,DAT_45ead968 + 0x45ead85e,DAT_45ead964 + 0x45ead85c,
                       DAT_45ead960 + 0x45ead88b,(int)&DAT_45ead92c + DAT_45ead95c,0xb79);
          iVar7 = *(int *)(param_1 + 0x38);
        }
        else {
          __dlog_print(iVar3,4,DAT_45ead934 + 0x45ead7b6,DAT_45ead938 + 0x45ead7ba,
                       DAT_45ead930 + 0x45ead7e5,DAT_45ead92c + 0x45ead886,0xb7b,
                       *(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 0x2c));
          iVar7 = *(int *)(param_1 + 0x38);
        }
        if (iVar7 == 0) {
          __dlog_print(0,4,DAT_45ead978 + 0x45ead88a,DAT_45ead974 + 0x45ead888,
                       DAT_45ead970 + 0x45ead8b7,(int)&DAT_45ead958 + DAT_45ead96c,0xb7f);
          iVar7 = *(int *)(param_1 + 0x2c);
        }
        else {
          __dlog_print(0,4,DAT_45ead948 + 0x45ead7ea,DAT_45ead944 + 0x45ead7e8,
                       DAT_45ead940 + 0x45ead815,DAT_45ead93c + 0x45ead8b6,0xb81,iVar7);
          iVar7 = *(int *)(param_1 + 0x2c);
        }
        if (iVar7 == 0) {
          __dlog_print(0,4,DAT_45ead988 + 0x45ead8b8,DAT_45ead984 + 0x45ead8b6,
                       DAT_45ead980 + 0x45ead8e5,DAT_45ead97c + 0x45ead986,0xb84);
        }
        else {
          __dlog_print(0,4,DAT_45ead954 + 0x45ead81c,DAT_45ead958 + 0x45ead820,
                       DAT_45ead950 + 0x45ead84b,(int)&DAT_45ead8ec + DAT_45ead94c,0xb86,
                       *(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 0x2c));
        }
        if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      __dlog_print(0,4,iVar12,iVar11,iVar10,iVar7,0xb61,*local_4c,local_4c[1]);
      uVar4 = task_to_prio_string(puVar1[4]);
      uVar5 = task_to_type_string(puVar1[5]);
      if (puVar1[0x14] == 1) {
        iVar14 = DAT_45ead908 + 0x45ead6fe;
      }
      else {
        iVar14 = DAT_45ead900 + 0x45ead6ea;
      }
      if (puVar1[0xe] == 0) {
        iVar17 = DAT_45ead8d8 + 0x45ead5f6;
      }
      else {
        iVar17 = DAT_45ead904 + 0x45ead6f8;
      }
      uVar18 = puVar1[0xb];
      uVar2 = to_state(puVar1[0xc]);
      uVar6 = puVar1[2];
      uVar8 = puVar1[0xf];
      iVar15 = DAT_45ead8dc + 0x45ead6f6;
      iVar16 = DAT_45ead8e4 + 0x45ead626;
      iVar3 = DAT_45ead8e0 + 0x45ead65f;
      __dlog_print(0,4,iVar16,DAT_45ead8e8 + 0x45ead62e,iVar3,iVar15,0xb62,uVar4,uVar5,iVar14,iVar17
                   ,uVar18,uVar2,uVar8,uVar6);
      if (puVar1[3] != 0) {
        __dlog_print(0,4,iVar16,DAT_45ead8ec + 0x45ead662,iVar3,iVar15,0xb67,puVar1[3],uVar5,iVar14,
                     iVar17,uVar18,uVar2,uVar8,uVar6);
      }
      puVar13 = (undefined4 *)puVar1[0x10];
      if (puVar13 != (undefined4 *)0x0) {
        __dlog_print(0,4,DAT_45ead8f8 + 0x45ead690,DAT_45ead8fc + 0x45ead694,
                     DAT_45ead8f4 + 0x45ead6c5,DAT_45ead8f0 + 0x45ead762,0xb6a,*puVar13,puVar13[1],
                     iVar14,iVar17,uVar18,uVar2,uVar8,uVar6);
      }
    } while (puVar1[0x15] == 0);
    property_dump();
  } while( true );
}

