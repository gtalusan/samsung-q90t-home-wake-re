/* libapp-context-manager-common.so : task_mgr_launch_btn_popup@45ea226c */

undefined4
task_mgr_launch_btn_popup
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = bundle_create();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
    __dlog_print(0,6,DAT_45ea2398 + 0x45ea2352,DAT_45ea2394 + 0x45ea2350,DAT_45ea2390 + 0x45ea237b,
                 DAT_45ea238c + 0x45ea2e18,0x8d8);
  }
  else {
    if (param_3 == 1) {
      bundle_add(iVar1,DAT_45ea2388 + 0x45ea2326,DAT_45ea2384 + 0x45ea2324);
    }
    bundle_add(iVar1,DAT_45ea235c + 0x45ea229c,DAT_45ea2358 + 0x45ea229a);
    bundle_add(iVar1,DAT_45ea2360 + 0x45ea22a8,param_1);
    bundle_add(iVar1,DAT_45ea2364 + 0x45ea22b4,param_2);
    bundle_add(iVar1,DAT_45ea2368 + 0x45ea22c0,param_4);
    if (param_5 == 0) {
      bundle_add(iVar1,DAT_45ea2380 + 0x45ea2318,DAT_45ea237c + 0x45ea2316);
    }
    else {
      bundle_add(iVar1,DAT_45ea2370 + 0x45ea22d0,DAT_45ea236c + 0x45ea22ce);
      bundle_add(iVar1,DAT_45ea2374 + 0x45ea22dc,param_5);
    }
    bundle_add(iVar1,DAT_45ea2378 + 0x45ea22e8,param_6);
    uVar2 = FUN_45ea2164(iVar1,param_7,param_8);
    bundle_free(iVar1);
    uVar3 = util_get_time_in_millis();
    *(undefined4 *)(param_8 + 0x28) = uVar3;
  }
  return uVar2;
}

