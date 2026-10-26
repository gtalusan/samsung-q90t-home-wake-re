/* libapp-context-manager-common.so : context_get_custom_mask@45e9e38c */

undefined4 context_get_custom_mask(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar1 = DAT_45e9e508;
  if (*(int *)(DAT_45e9e508 + 0x45e9e3fe) == 0) {
    iVar2 = g_hash_table_new(*(undefined4 *)(DAT_45e9e50c + 0x45e9e3a0 + DAT_45e9e55c),
                             *(undefined4 *)(DAT_45e9e50c + 0x45e9e3a0 + DAT_45e9e560));
    *(int *)(iVar1 + 0x45e9e3fe) = iVar2;
    if (iVar2 == 0) {
      __dlog_print(0,6,DAT_45e9e570 + 0x45e9e4fe,DAT_45e9e56c + 0x45e9e4fc,DAT_45e9e568 + 0x45e9e52b
                   ,DAT_45e9e564 + 0x45e9ecc4,0x75);
      return 0xffffffff;
    }
  }
  iVar1 = DAT_45e9e510;
  if (*(int *)(DAT_45e9e510 + 0x45e9e414) == 0) {
    iVar2 = g_ptr_array_new_with_free_func(DAT_45e9e548 + 0x45e9e496);
    *(int *)(iVar1 + 0x45e9e414) = iVar2;
    if (iVar2 == 0) {
      __dlog_print(0,6,DAT_45e9e558 + 0x45e9e4c0,DAT_45e9e554 + 0x45e9e4be,DAT_45e9e550 + 0x45e9e4ed
                   ,DAT_45e9e54c + 0x45e9ec86,0x7e);
      return 0xffffffff;
    }
  }
  iVar1 = DAT_45e9e514;
  iVar2 = g_hash_table_lookup(*(undefined4 *)(DAT_45e9e514 + 0x45e9e41c),param_1);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)util_malloc_s(0x10);
    uVar5 = 0x400000 << (*(uint *)(*(int *)(iVar1 + 0x45e9e420) + 4) & 0xff);
    puVar4[1] = uVar5;
    if (uVar5 < 0x4000000) {
      puVar4[2] = 0;
      uVar3 = g_strdup(param_1);
      *puVar4 = uVar3;
      g_ptr_array_add(*(undefined4 *)(iVar1 + 0x45e9e420),puVar4);
      g_hash_table_insert(*(undefined4 *)(iVar1 + 0x45e9e41c),*puVar4,puVar4);
      __dlog_print(0,3,DAT_45e9e534 + 0x45e9e456,DAT_45e9e530 + 0x45e9e44e,DAT_45e9e52c + 0x45e9e479
                   ,DAT_45e9e528 + 0x45e9ec10,0x96,param_1,puVar4[1]);
      return puVar4[1];
    }
    g_free();
    __dlog_print(0,6,DAT_45e9e544 + 0x45e9e48a,DAT_45e9e540 + 0x45e9e488,DAT_45e9e53c + 0x45e9e4b3,
                 DAT_45e9e538 + 0x45e9ec4c,0x8d);
    uVar3 = 0;
  }
  else {
    __dlog_print(0,3,DAT_45e9e524 + 0x45e9e3e6,DAT_45e9e520 + 0x45e9e3e4,DAT_45e9e51c + 0x45e9e40f,
                 DAT_45e9e518 + 0x45e9eba8,0x85,param_1);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

