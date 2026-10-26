/* tvctx-manager : FUN_00017840@00017840 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00017840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = __stack_chk_guard;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_00017800();
  if (DAT_0003b504 == 0) {
    DAT_0003b504 = g_hash_table_new(g_str_hash,g_str_equal);
  }
  iVar6 = 0;
  puVar2 = &uStack_c;
  do {
    uVar7 = *puVar2;
    puVar4 = (undefined4 *)util_malloc_s(0x20);
    if (puVar4 == (undefined4 *)0x0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to allocate cp_app_info",DAT_0001795c,
                   DAT_00017958,0x130);
      uRam0000000c = puVar2[1];
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x17938);
      (*pcVar1)();
    }
    puVar4[1] = 0;
    *puVar4 = 0xffffffff;
    puVar4[2] = 0;
    puVar4[3] = puVar2[1];
    uVar5 = FUN_00017080(iVar6,"cp_key_appid");
    puVar4[5] = uVar5;
    uVar5 = FUN_00017080(iVar6,"cp_key_app_etag");
    puVar4[6] = uVar5;
    uVar5 = FUN_00017080(iVar6,"cp_key_app_query_status");
    iVar6 = iVar6 + 1;
    puVar4[7] = uVar5;
    g_hash_table_insert(DAT_0003b504,uVar7,puVar4);
    puVar2 = puVar2 + 2;
  } while (iVar6 != 8);
  FUN_0001772c();
  if (iVar3 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

