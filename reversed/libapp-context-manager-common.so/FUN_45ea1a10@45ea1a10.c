/* libapp-context-manager-common.so : FUN_45ea1a10@45ea1a10 */

void FUN_45ea1a10(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte local_149;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  uint local_130;
  char acStack_12c [256];
  int local_2c;
  
  piVar5 = *(int **)(DAT_45ea1f04 + 0x45ea1a28 + DAT_45ea1f08);
  local_134 = 0;
  local_2c = *piVar5;
  local_130 = 0xffffffff;
  local_138 = 0;
  local_149 = 0;
  local_13c = 0;
  local_140 = 0;
  local_144 = 0;
  local_148 = 0;
  memset(acStack_12c,0,0xff);
  iVar1 = aul_window_info_get_pid(param_1,&local_134);
  if (iVar1 < 0) {
    __dlog_print(0,6,DAT_45ea1f68 + 0x45ea1ce6,DAT_45ea1f6c + 0x45ea1ce8,DAT_45ea1f60 + 0x45ea1d0b,
                 &LAB_45ea2770 + DAT_45ea1f64,0x357,iVar1);
  }
  if (0 < local_134) {
    iVar1 = aul_window_info_get_visibility(param_1,&local_130);
    if (iVar1 < 0) {
      __dlog_print(0,6,DAT_45ea1f58 + 0x45ea1cac,DAT_45ea1f5c + 0x45ea1cb4,DAT_45ea1f50 + 0x45ea1cdd
                   ,(int)&DAT_45ea2748 + DAT_45ea1f54,0x35d,iVar1);
    }
    iVar1 = aul_window_info_get_opaque(param_1,&local_149);
    if (iVar1 < 0) {
      __dlog_print(0,6,DAT_45ea1f48 + 0x45ea1c7e,DAT_45ea1f4c + 0x45ea1c86,DAT_45ea1f40 + 0x45ea1caf
                   ,DAT_45ea1f44 + 0x45ea271a,0x362,iVar1);
    }
    uVar2 = (uint)local_149;
    iVar7 = DAT_45ea1f0c + 0x45ea2580;
    iVar6 = DAT_45ea1f10 + 0x45ea1b21;
    iVar1 = DAT_45ea1f14 + 0x45ea1afc;
    uVar4 = local_130;
    __dlog_print(0,3,iVar1,DAT_45ea1f18 + 0x45ea1b0c,iVar6,iVar7,0x364,local_134,local_130,uVar2);
    if ((local_149 != 0) && (local_130 < 2)) {
      iVar3 = aul_window_info_get_geometry(param_1,&local_138,&local_13c,&local_140,&local_144);
      if (iVar3 < 0) {
        __dlog_print(0,6,iVar1,DAT_45ea1f74 + 0x45ea1d2a,iVar6,iVar7,0x36a,iVar3,uVar4,uVar2);
      }
      uVar2 = util_is_fullscreen_geometry(local_138,local_13c,local_140,local_144);
      iVar1 = context_system_property_check(DAT_45ea1f1c + 0x45ea1b62);
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = util_is_portrait_pig_geometry(local_138,local_13c,local_140,local_144);
      }
      if (((uVar4 | uVar2) & 0xff) != 0) {
        iVar1 = aul_app_get_appid_bypid(local_134,acStack_12c,0xff);
        if (iVar1 == 0) {
          if (uVar4 != 0) {
            iVar6 = DAT_45ea1f8c + 0x45ea1d72;
            *(undefined1 *)(DAT_45ea1f88 + 0x45ea1da2) = 1;
            iVar1 = task_mgr_check_visible(iVar6,0,0,param_2);
            if ((((iVar1 == 0) &&
                 (iVar1 = g_strcmp0(acStack_12c,DAT_45ea1f90 + 0x45ea1d8e), iVar1 != 0)) &&
                (iVar1 = g_strcmp0(acStack_12c,DAT_45ea1f94 + 0x45ea1d9e), iVar1 != 0)) &&
               (iVar1 = g_strcmp0(acStack_12c,DAT_45ea1f98 + 0x45ea1dae), iVar1 != 0)) {
              iVar8 = (int)&DAT_45ea2868 + DAT_45ea1f9c;
              iVar3 = DAT_45ea1fa4 + 0x45ea1dd6;
              iVar7 = DAT_45ea1fa0 + 0x45ea1e11;
              pcVar9 = acStack_12c;
              __dlog_print(0,4,iVar3,DAT_45ea1fa8 + 0x45ea1dda,iVar7,iVar8,0x37d,acStack_12c);
              iVar1 = aul_extension_app_group_relocate_below_base_appid(acStack_12c,iVar6);
              if (iVar1 < 0) {
                __dlog_print(0,6,iVar3,DAT_45ea1fac + 0x45ea1e0c,iVar7,iVar8,0x37f,pcVar9);
              }
            }
          }
          iVar1 = context_check_mask(0x20000,param_2);
          if (((iVar1 == 0) &&
              (iVar1 = context_system_property_check(DAT_45ea1f20 + 0x45ea1ba2), iVar1 == 0)) ||
             (iVar1 = g_strcmp0(acStack_12c,DAT_45ea1f70 + 0x45ea1d0c), iVar1 != 0)) {
            FUN_45e9ce90(acStack_12c,local_134,param_2);
            iVar1 = util_is_ambient_type_appid(acStack_12c);
            if (((iVar1 == 0) &&
                (iVar1 = g_strcmp0(acStack_12c,DAT_45ea1f24 + 0x45ea1bca), iVar1 != 0)) &&
               (iVar1 = g_strcmp0(acStack_12c,*(undefined4 *)(DAT_45ea1f28 + 0x45ea1bd8)),
               iVar1 != 0)) {
              if ((*(char *)(DAT_45ea1f2c + 0x45ea1c1a) == '\0') || (uVar2 == 0)) {
                if ((*(char *)(DAT_45ea1f30 + 0x45ea1d7e) == '\0') ||
                   (iVar1 = g_strcmp0(acStack_12c,DAT_45ea1f30 + 0x45ea1d7e), iVar1 != 0)) {
                  iVar1 = task_mgr_task_find_pid(local_134,param_2);
                  if (iVar1 == 0) {
                    __dlog_print(0,6,DAT_45ea1fcc + 0x45ea1e72,DAT_45ea1fd0 + 0x45ea1e76,
                                 DAT_45ea1fc8 + 0x45ea1e9f,DAT_45ea1fc4 + 0x45ea28fc,0x3a0,
                                 acStack_12c,local_134);
                  }
                  else {
                    snprintf((char *)(DAT_45ea1f34 + 0x45ea1dac),0xff,
                             (char *)(DAT_45ea1f38 + 0x45ea1c2c),acStack_12c);
                    iVar1 = g_strcmp0(*(undefined4 *)(iVar1 + 8),DAT_45ea1f3c + 0x45ea1c36);
                    if (iVar1 == 0) {
                      iVar1 = util_get_appbooting_supported_webapp_byappid(acStack_12c,&local_148);
                    }
                    else {
                      iVar1 = util_get_uiapp_has_metadata_byappid
                                        (acStack_12c,DAT_45ea1fb0 + 0x45ea1e1e,&local_148);
                    }
                    if (iVar1 < 0) {
                      local_148 = 0;
                    }
                    else if (local_148 == 1) {
                      iVar6 = DAT_45ea1fd4 + 0x45ea1e86;
                      iVar1 = vconf_set_str(iVar6,DAT_45ea1fd8 + 0x45ea1e88);
                      if (iVar1 < 0) {
                        __dlog_print(0,6,DAT_45ea1fe8 + 0x45ea1eb8,DAT_45ea1fe4 + 0x45ea1eb6,
                                     DAT_45ea1fe0 + 0x45ea1ee1,DAT_45ea1fdc + 0x45ea293e,0x3b2,iVar6
                                    );
                      }
                      iVar6 = DAT_45ea1fec + 0x45ea1ec2;
                      iVar1 = vconf_set_str(iVar6,acStack_12c);
                      if (iVar1 < 0) {
                        __dlog_print(0,6,DAT_45ea1ffc + 0x45ea1ef2,DAT_45ea1ff8 + 0x45ea1ef0,
                                     DAT_45ea1ff4 + 0x45ea1f1b,DAT_45ea1ff0 + 0x45ea2978,0x3b5,iVar6
                                    );
                      }
                      context_set_booting_appid_vconf(acStack_12c);
                      goto LAB_45ea1b12;
                    }
                    FUN_45eacab8(param_2 + 0x34);
                  }
                }
              }
              else {
                __dlog_print(0,5,DAT_45ea1fc0 + 0x45ea1e4a,DAT_45ea1fbc + 0x45ea1e48,
                             DAT_45ea1fb8 + 0x45ea1e75,DAT_45ea1fb4 + 0x45ea28d2,0x398);
              }
            }
          }
        }
        else {
          __dlog_print(0,6,DAT_45ea1f84 + 0x45ea1d5c,DAT_45ea1f80 + 0x45ea1d5a,
                       DAT_45ea1f7c + 0x45ea1d87,DAT_45ea1f78 + 0x45ea27e4,0x375);
        }
      }
    }
  }
LAB_45ea1b12:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

