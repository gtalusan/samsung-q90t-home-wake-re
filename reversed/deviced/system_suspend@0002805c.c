/* deviced : system_suspend@0002805c */

undefined4 system_suspend(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __dlog_print(2,4,DAT_000280f0 + 0x280ac,DAT_000280ec + 0x280a4,DAT_000280e8 + 0x280ba,
               DAT_000280e4 + 0x28090,0x75);
  puVar1 = *(undefined4 **)(DAT_000280f4 + 0x280b8);
  if ((puVar1 == (undefined4 *)0x0) || ((code *)*puVar1 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000280d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar1)(puVar1,0);
  return uVar2;
}

