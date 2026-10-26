/* tvctx-manager : FUN_0001bd50@0001bd50 */

void FUN_0001bd50(void)

{
  int in_r3;
  int in_stack_00000000;
  
  if (in_stack_00000000 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid parameter",DAT_0001bdc8,DAT_0001bdc4,
                 0x2b3);
  }
  else if (in_r3 == 3) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > sensord ready",DAT_0001bdc8,DAT_0001bdc4,0x2b8);
    FUN_0001bcfc();
    FUN_0001b048(in_stack_00000000);
    return;
  }
  return;
}

