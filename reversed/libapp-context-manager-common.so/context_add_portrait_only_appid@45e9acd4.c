/* libapp-context-manager-common.so : context_add_portrait_only_appid@45e9acd4 */

void context_add_portrait_only_appid(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = DAT_45e9ae4c;
  iVar2 = DAT_45e9ae14;
  iVar7 = DAT_45e9ae10 + 0x45e9ace2;
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45e9ae68 + 0x45e9ae0a,DAT_45e9ae64 + 0x45e9ae08,DAT_45e9ae60 + 0x45e9ae37,
                 DAT_45e9ae5c + 0x45e9b12c,0x4e6);
  }
  else {
    iVar4 = *(int *)(DAT_45e9ae14 + 0x45e9ad36);
    if (iVar4 == 0) {
      iVar6 = DAT_45e9ae48 + 0x45e9ad8a;
      uVar3 = g_hash_table_new_full
                        (*(undefined4 *)(iVar7 + DAT_45e9ae44),*(undefined4 *)(iVar7 + DAT_45e9ae40)
                         ,*(undefined4 *)(iVar7 + DAT_45e9ae3c),0);
      iVar7 = DAT_45e9ae50;
      *(undefined4 *)(iVar2 + 0x45e9ad36) = uVar3;
      __dlog_print(0,4,iVar6,DAT_45e9ae54 + 0x45e9adc0,iVar7 + 0x45e9ade5,iVar1 + 0x45e9b0da,0x4ec);
      iVar4 = *(int *)(iVar2 + 0x45e9ad36);
      if (iVar4 == 0) {
        __dlog_print(0,6,iVar6,DAT_45e9ae58 + 0x45e9ade0,iVar7 + 0x45e9ade5,iVar1 + 0x45e9b0da,0x4ef
                    );
        return;
      }
    }
    iVar2 = g_hash_table_contains(iVar4,param_1);
    if (iVar2 == 0) {
      uVar5 = *(undefined4 *)(DAT_45e9ae28 + 0x45e9ad7e);
      uVar3 = g_strdup(param_1);
      g_hash_table_add(uVar5,uVar3);
      __dlog_print(0,4,DAT_45e9ae38 + 0x45e9ad6a,DAT_45e9ae34 + 0x45e9ad68,DAT_45e9ae30 + 0x45e9ad8f
                   ,(int)&DAT_45e9b084 + DAT_45e9ae2c,0x4f5,param_1);
      return;
    }
    __dlog_print(0,4,DAT_45e9ae24 + 0x45e9ad26,DAT_45e9ae20 + 0x45e9ad24,DAT_45e9ae1c + 0x45e9ad4f,
                 DAT_45e9ae18 + 0x45e9b044,0x4f7,param_1);
  }
  return;
}

