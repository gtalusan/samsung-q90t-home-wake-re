/* libapp-context-manager-common.so : context_pause_all_portrait_only_apps@45e9c060 */

void context_pause_all_portrait_only_apps(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  undefined1 auStack_44 [24];
  int local_2c;
  
  iVar2 = DAT_45e9c180;
  iVar1 = DAT_45e9c17c;
  piVar6 = *(int **)(DAT_45e9c170 + 0x45e9c06a + DAT_45e9c174);
  local_2c = *piVar6;
  if (*(int *)(DAT_45e9c178 + 0x45e9c0ba) == 0) {
    __dlog_print(0,6,DAT_45e9c1ac + 0x45e9c166,DAT_45e9c1a8 + 0x45e9c164,DAT_45e9c1a4 + 0x45e9c191,
                 DAT_45e9c1a0 + 0x45e9c632,0x55b);
  }
  else {
    g_hash_table_iter_init(auStack_44);
    iVar5 = DAT_45e9c184 + 0x45e9c582;
    iVar7 = DAT_45e9c188 + 0x45e9c0e3;
    while (iVar4 = g_hash_table_iter_next(auStack_44,&local_48,auStack_4c), iVar4 != 0) {
      while( true ) {
        uVar3 = local_48;
        iVar4 = util_is_btmusic_playing(param_1);
        if ((iVar4 != 0) && (iVar4 = g_strcmp0(uVar3,DAT_45e9c18c + 0x45e9c112), iVar4 == 0)) break;
        __dlog_print(0,4,iVar2 + 0x45e9c0a6,iVar1 + 0x45e9c09c,iVar7,iVar5,0x566,uVar3);
        aul_pause_app(uVar3);
        iVar4 = g_hash_table_iter_next(auStack_44,&local_48,auStack_4c);
        if (iVar4 == 0) goto LAB_45e9c0f8;
      }
      __dlog_print(0,5,DAT_45e9c19c + 0x45e9c13c,DAT_45e9c198 + 0x45e9c13a,DAT_45e9c194 + 0x45e9c169
                   ,DAT_45e9c190 + 0x45e9c60a,0x564);
    }
  }
LAB_45e9c0f8:
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

