/* tvctx-manager : _start@00016548 */

void processEntry _start(void)

{
  undefined4 in_r4;
  int in_r5;
  undefined4 uStack00000008;
  
  uStack00000008 = 0x114;
  *(undefined4 *)(in_r5 + 0x14) = in_r4;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > banner state changed:%d");
  FUN_00016a30();
  return;
}

