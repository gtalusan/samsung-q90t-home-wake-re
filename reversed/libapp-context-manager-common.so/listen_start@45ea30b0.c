/* libapp-context-manager-common.so : listen_start@45ea30b0 */

void listen_start(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_2c;
  int local_28;
  int local_24;
  
  piVar4 = *(int **)(DAT_45ea32a0 + 0x45ea30c0 + DAT_45ea32a4);
  local_24 = *piVar4;
  iVar3 = param_2;
  __dlog_print(0,4,DAT_45ea32b4 + 0x45ea30f8,DAT_45ea32b0 + 0x45ea30ee,DAT_45ea32ac + 0x45ea311b,
               DAT_45ea32a8 + 0x45ea3ca2,0x1b2,param_2,param_1);
  iVar1 = check_config_is_service_app(param_2);
  if (iVar1 == 0) {
    local_2c = iVar1;
    local_28 = iVar1;
    iVar2 = context_system_property_check(DAT_45ea32b8 + 0x45ea3124);
    iVar1 = iVar3;
    if ((iVar2 != 0) ||
       (iVar2 = context_system_property_check(DAT_45ea32d0 + 0x45ea3192), iVar1 = iVar3, iVar2 != 0)
       ) {
      iVar3 = pkgmgrinfo_appinfo_get_appinfo(param_2,&local_2c);
      if (iVar3 == 0) {
        if (local_2c == 0) {
          __dlog_print(0,6,DAT_45ea3318 + 0x45ea328e,DAT_45ea3314 + 0x45ea328c,
                       DAT_45ea3310 + 0x45ea32bb,DAT_45ea330c + 0x45ea3e56,0x173);
          iVar3 = iVar1;
        }
        else {
          iVar3 = pkgmgrinfo_appinfo_get_metadata_value
                            (local_2c,DAT_45ea32bc + 0x45ea314c,&local_28);
          if ((iVar3 == 0) && (iVar3 = g_strcmp0(local_28,DAT_45ea32d4 + 0x45ea31a2), iVar3 == 0)) {
            iVar3 = pkgmgrinfo_appinfo_get_metadata_value
                              (local_2c,DAT_45ea32d8 + 0x45ea31b2,&local_28);
            if ((iVar3 == 0) && (iVar3 = g_strcmp0(local_28,DAT_45ea32dc + 0x45ea31be), iVar3 == 0))
            {
              context_add_portrait_only_appid(param_2);
            }
            else {
              context_add_landscape_only_appid(param_2);
            }
          }
          pkgmgrinfo_appinfo_destroy_appinfo(local_2c);
          iVar3 = iVar1;
        }
      }
      else {
        __dlog_print(0,6,DAT_45ea32ec + 0x45ea31f6,DAT_45ea32e8 + 0x45ea31f4,
                     DAT_45ea32e4 + 0x45ea321d,DAT_45ea32e0 + 0x45ea3dba,0x16f,iVar3);
      }
    }
    iVar1 = task_mgr_task_find_pid(param_1,param_3);
    if (iVar1 == 0) {
      iVar1 = find_task(param_1,param_2,param_3);
      iVar3 = DAT_45ea32f0;
      if (iVar1 == 0) {
        __dlog_print(0,3,DAT_45ea3304 + 0x45ea3262,DAT_45ea3308 + 0x45ea3264,
                     DAT_45ea3300 + 0x45ea328f,DAT_45ea32fc + 0x45ea3e1c,0x1c0,param_1);
      }
      else {
        assign_task(iVar1,param_1,param_3);
        hlogc(DAT_45ea32f8 + 0x45ea3226,iVar3 + 0x45ea34a2,DAT_45ea32f4 + 0x45ea3224,
              *(undefined4 *)(iVar1 + 4));
        update_state(iVar1,2,param_3);
        handle_listen(*(undefined4 *)(iVar3 + 0x45ea322a),iVar1,param_3);
      }
    }
    else {
      __dlog_print(0,4,DAT_45ea32cc + 0x45ea3188,DAT_45ea32c8 + 0x45ea3186,DAT_45ea32c4 + 0x45ea31b3
                   ,DAT_45ea32c0 + 0x45ea3d40,0x1c4,iVar3);
    }
  }
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

