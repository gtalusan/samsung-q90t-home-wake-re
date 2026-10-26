/* tvctx-manager : context_fini_product@00021138 */

void context_fini_product(undefined4 param_1)

{
  int iVar1;
  
  mbr_unregister_event_callback(0x19a19,param_1);
  sound_manager_unset_tv_master_mute_changed_cb();
  sound_manager_unset_speaker_changed_cb();
  util_cleanup_epop_enabled();
  svc_pvr_unregister_get_pvr_state_cb(&LAB_00019184_1);
  TVServiceAPI::DestroySignalSubscriber
            ((_func_int_ESignalType_EProfile_ushort_TSSignalData_void_ptr *)0x0);
  TVServiceAPI::DestroySourceControl();
  TVServiceAPI::DestroyServiceNavigation();
  __fini_device_power_handler();
  if (DAT_0003b560 != 0) {
    sensor_listener_stop();
    sensor_destroy_listener(DAT_0003b560);
    DAT_0003b560 = 0;
  }
  iVar1 = context_system_property_check("product:portland");
  if (iVar1 != 0) {
    display_rotator_unregister_cb();
  }
  FUN_0001bcfc();
  FUN_0001be58();
  if (DAT_0003b59c != 0) {
    if (DAT_0003b5a0 == 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > connection is null",DAT_00021228,DAT_00021224,
                   799);
      goto LAB_000211d4;
    }
    g_dbus_connection_signal_unsubscribe();
    DAT_0003b59c = 0;
  }
  if (DAT_0003b5a0 != 0) {
    g_object_unref();
    DAT_0003b5a0 = 0;
  }
LAB_000211d4:
  FUN_0001bde8();
  cp_app_cleanup_all_cp_app_info();
  if (DAT_0003b534 != (void *)0x0) {
    free(DAT_0003b534);
    DAT_0003b534 = (void *)0x0;
  }
  context_fini(param_1);
  return;
}

