/* libapp-context-manager-common.so : test_blocker@45ea42d8 */

undefined4 test_blocker(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(param_3 + 8);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      __dlog_print(0,4,DAT_45ea43a0 + 0x45ea436e,DAT_45ea439c + 0x45ea436c,DAT_45ea4398 + 0x45ea4399
                   ,DAT_45ea4394 + 0x45ea5062,0x859);
      return 0;
    }
    puVar3 = (undefined4 *)*puVar2;
    if ((puVar3[1] == param_2) && (iVar1 = selector_test_task(*puVar3,param_1,param_3), iVar1 != 0))
    break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  __dlog_print(0,4,DAT_45ea438c + 0x45ea432c,DAT_45ea4388 + 0x45ea432a,DAT_45ea4384 + 0x45ea4357,
               (int)&DAT_45ea5020 + DAT_45ea4380,0x84d);
  util_debug(DAT_45ea4390 + 0x45ea4336,param_3);
  if (puVar3[6] == 0) {
    return 1;
  }
  event_filter_handle(puVar3[6],param_1,param_3);
  return 1;
}

