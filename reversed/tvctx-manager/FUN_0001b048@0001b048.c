/* tvctx-manager : FUN_0001b048@0001b048 */

void FUN_0001b048(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char local_85;
  int local_84;
  undefined1 auStack_80 [20];
  float local_6c;
  int local_24;
  
  local_24 = __stack_chk_guard;
  local_85 = '\0';
  iVar2 = context_system_property_check("product:frame32");
  if (iVar2 == 0) goto LAB_0001b070;
  iVar3 = g_file_test("/tmp/sensor_ready",0x10);
  iVar1 = DAT_0001b31c;
  iVar2 = DAT_0001b318;
  if (iVar3 == 0) {
    local_84 = iVar3;
    if (DAT_0003b554 == 0) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > set sensor ready file monitor",DAT_0001b318,
                   DAT_0001b31c,0x2c7);
      DAT_0003b558 = g_file_new_for_path("/tmp/sensor_ready");
      DAT_0003b55c = g_file_monitor_file(DAT_0003b558,0,0,&local_84);
      if (local_84 != 0) {
        g_assertion_message_error(0,iVar2 + -0x3b,0x2ca,iVar1 + 0x20,"error",local_84,0,0);
      }
      g_error_free(local_84);
      g_signal_connect_data(DAT_0003b55c,"changed",0x1bd51,param_1,0,0);
      DAT_0003b554 = g_timeout_add_seconds(0x78,&LAB_0001bdcc_1,0);
    }
    else {
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > sensor_ready monitoring is ongoing",
                   DAT_0001b318,DAT_0001b31c,0x2c3);
    }
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > sensord is not ready",iVar2,DAT_0001b314,0x9cd);
    goto LAB_0001b070;
  }
  iVar2 = sensor_is_supported(0x901,&local_85);
  if (iVar2 != 0) {
    pcVar4 = "%s: %s(%d) > sensor_is_supported failed (%d)";
    uVar5 = 0x9d3;
    goto LAB_0001b22a;
  }
  if (local_85 == '\0') {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > SENSOR_AUTO_ROTATION unsupported",DAT_0001b318,
                 DAT_0001b314,0x9d8);
    goto LAB_0001b070;
  }
  iVar2 = sensor_get_default_sensor(0x901,&local_84);
  if (iVar2 == 0) {
    iVar2 = sensor_create_listener(local_84,&DAT_0003b560);
    if (iVar2 == 0) {
      iVar2 = sensor_listener_set_event_cb(DAT_0003b560,500,0x1a7b1,param_1);
      if (iVar2 != 0) {
        pcVar4 = "%s: %s(%d) > sensor_listener_set_event_cb failed (%d)";
        uVar5 = 0x9ea;
        goto LAB_0001b254;
      }
      iVar2 = sensor_listener_start(DAT_0003b560);
      if (iVar2 == 0) {
        iVar2 = sensor_listener_read_data(DAT_0003b560,auStack_80);
        if (iVar2 == 0) {
          FUN_0001a4b0((int)local_6c,param_1);
          goto LAB_0001b070;
        }
        pcVar4 = "%s: %s(%d) > sensor_listener_read_data failed (%d)";
        uVar5 = 0x9f6;
      }
      else {
        pcVar4 = "%s: %s(%d) > sensor_listener_start failed (%d)";
        uVar5 = 0x9f0;
      }
    }
    else {
      pcVar4 = "%s: %s(%d) > sensor_create_listener failed (%d)";
      uVar5 = 0x9e4;
    }
LAB_0001b22a:
    __dlog_print(0,6,"tvctx-manager",pcVar4,DAT_0001b318,DAT_0001b314,uVar5,iVar2);
  }
  else {
    pcVar4 = "%s: %s(%d) > sensor_get_default_sensor failed (%d)";
    uVar5 = 0x9de;
LAB_0001b254:
    __dlog_print(0,6,"tvctx-manager",pcVar4,DAT_0001b318,DAT_0001b314,uVar5,iVar2);
  }
LAB_0001b070:
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

