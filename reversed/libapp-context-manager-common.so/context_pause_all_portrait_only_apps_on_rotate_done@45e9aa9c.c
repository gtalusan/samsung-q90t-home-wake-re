/* libapp-context-manager-common.so : context_pause_all_portrait_only_apps_on_rotate_done@45e9aa9c */

void context_pause_all_portrait_only_apps_on_rotate_done(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  undefined1 auStack_44 [24];
  int local_2c;
  
  iVar1 = DAT_45e9ac68;
  piVar5 = *(int **)(DAT_45e9ac5c + 0x45e9aaa6 + DAT_45e9ac60);
  local_2c = *piVar5;
  if (*(int *)(DAT_45e9ac64 + 0x45e9aaf4) == 0) {
    __dlog_print(0,6,DAT_45e9acd0 + 0x45e9ac52,DAT_45e9accc + 0x45e9ac50,DAT_45e9acc8 + 0x45e9ac7d,
                 DAT_45e9acc4 + 0x45e9af16,0x573);
  }
  else {
    g_hash_table_iter_init(auStack_44);
    iVar4 = DAT_45e9ac74 + 0x45e9aae4;
    iVar6 = DAT_45e9ac6c + 0x45e9adb8;
    iVar7 = DAT_45e9ac70 + 0x45e9ab1d;
LAB_45e9aaee:
    iVar3 = g_hash_table_iter_next(auStack_44,&local_48,auStack_4c);
    if (iVar3 != 0) {
      while( true ) {
        uVar2 = local_48;
        iVar3 = g_strcmp0(local_48,iVar1 + 0x45e9aad8);
        if (iVar3 != 0) break;
        iVar3 = aul_app_get_status(uVar2);
        if (iVar3 == 5 || iVar3 < 0) {
          __dlog_print(0,5,DAT_45e9acb0 + 0x45e9ac00,DAT_45e9acac + 0x45e9abfa,
                       DAT_45e9aca4 + 0x45e9ac1d,DAT_45e9aca8 + 0x45e9aefe,0x518,uVar2,iVar3);
          goto LAB_45e9aaee;
        }
        iVar3 = bundle_create();
        if (iVar3 == 0) {
          __dlog_print(0,6,DAT_45e9acc0 + 0x45e9ac28,DAT_45e9acbc + 0x45e9ac26,
                       DAT_45e9acb8 + 0x45e9ac55,DAT_45e9acb4 + 0x45e9af22,0x51e);
          goto LAB_45e9aaee;
        }
        bundle_add(iVar3,DAT_45e9ac7c + 0x45e9ab38,DAT_45e9ac78 + 0x45e9ab36);
        bundle_add(iVar3,DAT_45e9ac84 + 0x45e9ab46,DAT_45e9ac80 + 0x45e9ab44);
        bundle_add(iVar3,DAT_45e9ac8c + 0x45e9ab54,DAT_45e9ac88 + 0x45e9ab52);
        __dlog_print(0,4,DAT_45e9ac9c + 0x45e9ab7e,DAT_45e9ac98 + 0x45e9ab7a,
                     DAT_45e9ac94 + 0x45e9aba3,DAT_45e9ac90 + 0x45e9ae70,0x525,uVar2);
        aul_launch_app_async(uVar2,iVar3);
        bundle_free(iVar3);
        iVar3 = g_hash_table_iter_next(auStack_44,&local_48,auStack_4c);
        if (iVar3 == 0) goto LAB_45e9ab9c;
      }
      __dlog_print(0,4,DAT_45e9aca0 + 0x45e9abc0,iVar4,iVar7,iVar6,0x57f,uVar2);
      aul_pause_app(uVar2);
      goto LAB_45e9aaee;
    }
  }
LAB_45e9ab9c:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

