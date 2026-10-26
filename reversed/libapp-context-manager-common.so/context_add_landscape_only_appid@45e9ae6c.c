/* libapp-context-manager-common.so : context_add_landscape_only_appid@45e9ae6c */

void context_add_landscape_only_appid(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = DAT_45e9afe4;
  iVar2 = DAT_45e9afac;
  iVar7 = DAT_45e9afa8 + 0x45e9ae7a;
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45e9b000 + 0x45e9afa2,DAT_45e9affc + 0x45e9afa0,DAT_45e9aff8 + 0x45e9afcf,
                 DAT_45e9aff4 + 0x45e9b2e4,0x4cf);
  }
  else {
    iVar4 = *(int *)(DAT_45e9afac + 0x45e9aed2);
    if (iVar4 == 0) {
      iVar6 = DAT_45e9afe0 + 0x45e9af22;
      uVar3 = g_hash_table_new_full
                        (*(undefined4 *)(iVar7 + DAT_45e9afdc),*(undefined4 *)(iVar7 + DAT_45e9afd8)
                         ,*(undefined4 *)(iVar7 + DAT_45e9afd4),0);
      iVar7 = DAT_45e9afe8;
      *(undefined4 *)(iVar2 + 0x45e9aed2) = uVar3;
      __dlog_print(0,4,iVar6,DAT_45e9afec + 0x45e9af58,iVar7 + 0x45e9af7d,iVar1 + 0x45e9b292,0x4d5);
      iVar4 = *(int *)(iVar2 + 0x45e9aed2);
      if (iVar4 == 0) {
        __dlog_print(0,6,iVar6,DAT_45e9aff0 + 0x45e9af78,iVar7 + 0x45e9af7d,iVar1 + 0x45e9b292,0x4d8
                    );
        return;
      }
    }
    iVar2 = g_hash_table_contains(iVar4,param_1);
    if (iVar2 == 0) {
      uVar5 = *(undefined4 *)(DAT_45e9afc0 + 0x45e9af1a);
      uVar3 = g_strdup(param_1);
      g_hash_table_add(uVar5,uVar3);
      __dlog_print(0,4,DAT_45e9afd0 + 0x45e9af02,DAT_45e9afcc + 0x45e9af00,DAT_45e9afc8 + 0x45e9af27
                   ,DAT_45e9afc4 + 0x45e9b23c,0x4de,param_1);
      return;
    }
    __dlog_print(0,4,DAT_45e9afbc + 0x45e9aebe,DAT_45e9afb8 + 0x45e9aebc,DAT_45e9afb4 + 0x45e9aee7,
                 DAT_45e9afb0 + 0x45e9b1fc,0x4e0,param_1);
  }
  return;
}

