/* tvctx-manager : FUN_0001e0f8@0001e0f8 */

void FUN_0001e0f8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  int local_30;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  iVar1 = context_is_oobe_running(param_3);
  if (iVar1 != 0) {
    __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > app-booting blocked by OOBE",DAT_0001e40c,
                 DAT_0001e408,0x3b7);
    uVar4 = 0;
    goto LAB_0001e16e;
  }
  pvVar2 = (void *)vconf_get_str("memory/menu/network/airplay_status");
  uVar4 = 0;
  if (pvVar2 != (void *)0x0) {
    iVar1 = g_strcmp0(pvVar2,"running");
    free(pvVar2);
    if (iVar1 == 0) {
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > app-booting blocked by airplay",DAT_0001e40c,
                   DAT_0001e408,0x3bc);
      goto LAB_0001e16e;
    }
  }
  local_30 = 0;
  iVar1 = context_system_property_check("bizapp_boot_support");
  if ((iVar1 != 0) &&
     (vconf_get_int("db/menu/system/smartfeatures/autorunsignage",&local_30), local_30 != 0)) {
    pvVar2 = (void *)vconf_get_str("db/menu/system/smartfeatures/autorun-defaultapp");
    iVar1 = g_strcmp0(pvVar2,"");
    uVar5 = DAT_0001e40c;
    if (iVar1 != 0) {
      iVar1 = DAT_0001e410 + -0x20;
      __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > autorun bizapp on wakeup (%s)",DAT_0001e40c,
                   DAT_0001e410,0x3ac,pvVar2);
      free(pvVar2);
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > app-booting blocked by bizapp boot",uVar5,iVar1
                   ,0x3c1);
      goto LAB_0001e16e;
    }
    free(pvVar2);
  }
  iVar1 = DAT_0001e568;
  uVar5 = DAT_0001e564;
  switch(param_1) {
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x3e:
  case 0x3f:
  case 0x5b:
    uVar5 = DAT_0001e40c;
    goto LAB_0001e28a;
  default:
switchD_0001e1a4_caseD_3:
    uVar5 = DAT_0001e40c;
LAB_0001e2ee:
    iVar1 = DAT_0001e408;
    uVar9 = 1;
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > app_booting %d, power_state %d",uVar5,
                 DAT_0001e408,0x3c7,1,param_2);
    iVar3 = device_power_get_ambient_mode();
    if (iVar3 == 0) {
      uVar4 = aul_app_get_status("org.tizen.webappservice-commui");
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > pin status %d",uVar5,iVar1,0x3ce,uVar4,param_2)
      ;
      bVar6 = uVar4 == 0;
      bVar7 = uVar4 == 3;
      bVar8 = uVar4 != 2;
      if (uVar4 == 2 || (bVar6 || bVar7)) {
        uVar4 = 1;
      }
      if (!bVar6 && (bVar8 && !bVar7)) {
        uVar4 = 0;
      }
      uVar4 = uVar4 ^ 1;
    }
    else {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > app booting blocked by ambient mode",uVar5,
                   iVar1 + 0xa4,0x377,uVar9,param_2);
    }
    goto LAB_0001e16e;
  case 0x1e:
    if (param_2 != 2) goto switchD_0001e1a4_caseD_3;
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > skip app-booting, reason %d",DAT_0001e564,
                 DAT_0001e568,0x35c,0x1e);
    break;
  case 0x29:
    if (param_2 != 0) goto LAB_0001e2ee;
LAB_0001e28a:
    iVar1 = DAT_0001e414;
    break;
  case 0x2b:
    local_30 = 0;
    iVar1 = vconf_get_int("memory/appfw/temp_youtube_wakeup",&local_30);
    uVar5 = DAT_0001e564;
    if (iVar1 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get %s",DAT_0001e564,DAT_0001e560,
                   0x332,"memory/appfw/temp_youtube_wakeup");
    }
    iVar1 = DAT_0001e568;
    if (local_30 == 0) goto LAB_0001e2ee;
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > wakeup by youtube casting",uVar5,DAT_0001e568,
                 0x362);
    iVar3 = vconf_set_int("memory/appfw/temp_youtube_wakeup",0);
    if (iVar3 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set %s",uVar5,iVar1 + 0x50,0x33d,
                   "memory/appfw/temp_youtube_wakeup");
    }
  }
  __dlog_print(0,4,"tvctx-manager",
               "%s: %s(%d) > app booting blocked by wakeup reason %d (power state %d)",uVar5,iVar1,
               0x36c,param_1,param_2);
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > app_booting %d, power_state %d",uVar5,DAT_0001e408,
               0x3c7,0,param_2);
LAB_0001e16e:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

