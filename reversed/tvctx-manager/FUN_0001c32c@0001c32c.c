/* tvctx-manager : FUN_0001c32c@0001c32c */

void FUN_0001c32c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = LwipcEventDone();
  if (iVar1 < 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to create lwipc event : %s",DAT_0001c370,
                 DAT_0001c36c,0x122,param_1);
  }
  return;
}

