/* libapp-context-manager-common.so : event_filter_handle@45eab384 */

void event_filter_handle(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = DAT_45eab5f0 + 0x45eab390;
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45eab67c + 0x45eab590,DAT_45eab678 + 0x45eab58e,DAT_45eab674 + 0x45eab5bd,
                 DAT_45eab670 + 0x45eab9f6,0x7f);
    return;
  }
  iVar5 = DAT_45eab5fc + 0x45eab3b0;
  iVar11 = (int)&DAT_45eab824 + DAT_45eab5f4;
  iVar10 = DAT_45eab5f8 + 0x45eab3eb;
  iVar4 = param_1;
  __dlog_print(0,4,iVar5,DAT_45eab600 + 0x45eab3b6,iVar10,iVar11,0x83,param_1);
  piVar2 = (int *)g_hash_table_lookup(*(undefined4 *)(param_3 + 0x18),param_1);
  iVar1 = DAT_45eab60c;
  if (piVar2 == (int *)0x0) {
    iVar8 = g_str_has_prefix(param_1,DAT_45eab680 + 0x45eab5a2);
    if (iVar8 == 0) {
      __dlog_print(0,4,iVar5,DAT_45eab688 + 0x45eab5e2,iVar10,iVar11,0x8c,param_1);
    }
    else {
      __dlog_print(0,4,iVar5,DAT_45eab684 + 0x45eab5bc,iVar10,iVar11,0x88,param_1 + 4);
      key_handler_push_key_event(param_1 + 4,param_3);
    }
  }
  else {
    iVar5 = (int)&USHORT_45eab878 + DAT_45eab604;
    iVar11 = DAT_45eab608 + 0x45eab433;
    iVar10 = DAT_45eab610 + 0x45eab3fa;
    do {
      while( true ) {
        iVar7 = *piVar2;
        if (iVar7 == 0) {
          __dlog_print(0,6,DAT_45eab66c + 0x45eab564,DAT_45eab668 + 0x45eab562,
                       DAT_45eab664 + 0x45eab58f,DAT_45eab660 + 0x45eab9c8,0x94,iVar4);
          return;
        }
        iVar9 = *(int *)(iVar7 + 0x14);
        if (iVar9 != 0) break;
        FUN_45eab2ac(iVar7,param_2,param_3);
        piVar2 = (int *)piVar2[1];
        if (piVar2 == (int *)0x0) {
          return;
        }
      }
      iVar6 = *(int *)(iVar1 + 0x45eab44e);
      if (iVar6 == 0) {
        iVar6 = g_hash_table_new(*(undefined4 *)(iVar8 + DAT_45eab63c),
                                 *(undefined4 *)(iVar8 + DAT_45eab638));
        *(int *)(iVar1 + 0x45eab44e) = iVar6;
        if (iVar6 != 0) goto LAB_45eab40a;
        __dlog_print(0,6,DAT_45eab64c + 0x45eab516,DAT_45eab648 + 0x45eab514,
                     DAT_45eab644 + 0x45eab543,DAT_45eab640 + 0x45eab990,0x48,iVar4);
      }
      else {
LAB_45eab40a:
        iVar6 = g_hash_table_lookup(iVar6,iVar7);
        if (iVar6 != 0) {
          __dlog_print(0,3,DAT_45eab620 + 0x45eab43a,DAT_45eab61c + 0x45eab438,
                       DAT_45eab618 + 0x45eab465,DAT_45eab614 + 0x45eab8b2,0x4f);
          g_source_remove(*(undefined4 *)(iVar6 + 0x10));
          g_hash_table_remove(*(undefined4 *)(DAT_45eab624 + 0x45eab4a4),iVar7);
        }
        piVar3 = (int *)util_malloc_s(0x14);
        iVar6 = DAT_45eab628;
        if (piVar3 == (int *)0x0) {
          __dlog_print(0,6,DAT_45eab65c + 0x45eab53c,DAT_45eab658 + 0x45eab53a,
                       DAT_45eab654 + 0x45eab569,DAT_45eab650 + 0x45eab9b6,0x57);
        }
        else {
          *piVar3 = iVar7;
          piVar3[1] = iVar9;
          piVar3[2] = param_2;
          piVar3[3] = param_3;
          iVar4 = g_timeout_add_full(0,iVar9,iVar10,piVar3,*(undefined4 *)(iVar8 + iVar6));
          piVar3[4] = iVar4;
          __dlog_print(0,4,DAT_45eab630 + 0x45eab498,DAT_45eab62c + 0x45eab492,iVar11,iVar5,0x61,
                       iVar9,iVar4);
          g_hash_table_insert(*(undefined4 *)(DAT_45eab634 + 0x45eab506),*piVar3,piVar3);
          iVar4 = iVar9;
        }
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  return;
}

