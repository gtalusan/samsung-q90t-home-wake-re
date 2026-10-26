/* tvctx-manager : FUN_0001776c@0001776c */

void FUN_0001776c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  context_system_property_remove(param_4);
  iVar1 = g_mutex_trylock(DAT_000177f4);
  if (iVar1 == 0) {
    __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > skip, mutex locked",DAT_000177fc,DAT_000177f8,
                 0x6e);
    return;
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > mutex lock - etag(%s)",DAT_000177fc,DAT_000177f8,
               0x72,param_3);
  FUN_00017240(param_4,param_1,param_3,param_2);
  FUN_0001772c();
  return;
}

