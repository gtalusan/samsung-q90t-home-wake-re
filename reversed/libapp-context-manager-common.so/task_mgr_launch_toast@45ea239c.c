/* libapp-context-manager-common.so : task_mgr_launch_toast@45ea239c */

void task_mgr_launch_toast
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_60 [52];
  int local_2c;
  
  piVar4 = *(int **)(DAT_45ea2468 + 0x45ea23ac + DAT_45ea246c);
  local_2c = *piVar4;
  iVar1 = bundle_create();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
    __dlog_print(0,6,DAT_45ea2494 + 0x45ea245e,DAT_45ea2490 + 0x45ea245c,DAT_45ea248c + 0x45ea2487,
                 DAT_45ea2488 + 0x45ea2f40,0x8bc);
  }
  else {
    g_snprintf(auStack_60,0x32,DAT_45ea2470 + 0x45ea23d2,param_3);
    bundle_add(iVar1,DAT_45ea2474 + 0x45ea23e0,auStack_60);
    bundle_add(iVar1,DAT_45ea247c + 0x45ea23ee,DAT_45ea2478 + 0x45ea23ec);
    bundle_add(iVar1,DAT_45ea2480 + 0x45ea23fa,param_1);
    if (param_4 != 0) {
      bundle_add(iVar1,DAT_45ea2484 + 0x45ea2408,param_4);
    }
    uVar2 = FUN_45ea2164(iVar1,param_2,param_5);
    bundle_free(iVar1);
    uVar3 = util_get_time_in_millis();
    *(undefined4 *)(param_5 + 0x28) = uVar3;
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

