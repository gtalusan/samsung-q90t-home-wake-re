/* libapp-context-manager-common.so : send_app_overlay_event@45ea2030 */

void send_app_overlay_event(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = context_check_is_overlay_event_emitter();
  if ((iVar1 != 0) &&
     (iVar1 = context_get_visible_overlay_event_subscriber_appid(param_3), iVar1 != 0)) {
    iVar2 = bundle_create();
    if (iVar2 != 0) {
      iVar5 = DAT_45ea2118 + 0x45ea207c;
      iVar4 = DAT_45ea2110 + 0x45ea2b28;
      iVar3 = DAT_45ea2114 + 0x45ea20b7;
      uVar6 = param_1;
      uVar7 = param_2;
      __dlog_print(0,4,iVar5,DAT_45ea211c + 0x45ea2084,iVar3,iVar4,0x145,iVar1,param_1,param_2);
      bundle_add(iVar2,DAT_45ea2120 + 0x45ea20a2,param_2);
      bundle_add(iVar2,DAT_45ea2124 + 0x45ea20ae,param_1);
      iVar1 = aul_launch_app_async(iVar1,iVar2);
      if (iVar1 < 0) {
        __dlog_print(0,6,iVar5,DAT_45ea2128 + 0x45ea20de,iVar3,iVar4,0x14a,iVar1,uVar6,uVar7);
      }
      bundle_free(iVar2);
      return;
    }
    __dlog_print(0,6,DAT_45ea2138 + 0x45ea210a,DAT_45ea2134 + 0x45ea2108,DAT_45ea2130 + 0x45ea2137,
                 DAT_45ea212c + 0x45ea2ba8,0x14d);
  }
  return;
}

