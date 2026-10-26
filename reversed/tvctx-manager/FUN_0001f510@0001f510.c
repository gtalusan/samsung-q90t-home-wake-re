/* tvctx-manager : FUN_0001f510@0001f510 */

void FUN_0001f510(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  void *__ptr;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStack_38 [4];
  int local_34;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if (param_1 == 0) {
    pcVar2 = "%s: %s(%d) > invalid parameter";
    uVar4 = 0x270;
  }
  else {
    iVar1 = display_rotator_is_supported();
    if (iVar1 != 0) {
      iVar1 = context_is_aod_window_ready();
      if (iVar1 == 0) {
        FUN_000168a8(param_3);
        goto LAB_0001f53e;
      }
      display_rotator_get_status(auStack_38);
      if (local_34 == 0) {
        util_rotate_landscape(*(undefined4 *)(param_1 + 0x10));
        goto LAB_0001f53e;
      }
      if (local_34 != 1) {
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > wrong orientation(%d)",DAT_0001f80c,
                     DAT_0001f808,0x2b2,local_34);
        goto LAB_0001f53e;
      }
      util_rotate_portrait(*(undefined4 *)(param_1 + 0x10));
      context_system_property_add("rotate_to_portrait");
      iVar1 = util_is_btmusic_playing(param_3);
      if (iVar1 != 0) {
        __dlog_print(0,4,"tvctx-manager",
                     "%s: %s(%d) > While BT music playing, don\'t relocate below.",DAT_0001f80c,
                     DAT_0001f808,0x288);
        goto LAB_0001f53e;
      }
      pcVar2 = (char *)vconf_get_str("memory/appfw/current_fullscreen_appid");
      __ptr = (void *)vconf_get_str("db/first_screen/type");
      iVar1 = g_strcmp0(pcVar2,"");
      if (iVar1 == 0) {
        if (*(int *)(param_3 + 0x34) == 0) {
          pcVar5 = "org.tizen.tv-viewer";
        }
        else {
          pcVar5 = *(char **)(*(int *)(param_3 + 0x34) + 4);
          if (pcVar5 == (char *)0x0) {
            pcVar5 = "org.tizen.tv-viewer";
          }
        }
      }
      else {
        pcVar5 = pcVar2;
      }
      iVar1 = g_strcmp0(pcVar5,__ptr);
      if ((iVar1 == 0) || (iVar1 = g_strcmp0(pcVar5,"com.samsung.tv.bbplayer"), iVar1 == 0)) {
        uVar4 = DAT_0001f808;
        pcVar8 = "org.tizen.tv-viewer";
        pcVar7 = "com.samsung.tv.aod";
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > relocate %s below %s because base app is %s",
                     DAT_0001f80c,DAT_0001f808,0x29a,"com.samsung.tv.aod","org.tizen.tv-viewer",
                     pcVar5);
        iVar1 = aul_extension_app_group_relocate_below_base_appid
                          ("org.tizen.tv-viewer","com.samsung.tv.aod");
        if (iVar1 < 0) {
          uVar3 = 0x29d;
          uVar6 = DAT_0001f80c;
          goto LAB_0001f750;
        }
      }
      else {
        iVar1 = g_strcmp0(pcVar5,"org.tizen.epg");
        uVar6 = DAT_0001f80c;
        uVar4 = DAT_0001f808;
        pcVar8 = pcVar5;
        if (iVar1 == 0) {
          pcVar10 = "org.tizen.tv-viewer";
          pcVar9 = "com.samsung.tv.aod";
          pcVar7 = "org.tizen.tv-viewer";
          __dlog_print(0,4,"tvctx-manager",
                       "%s: %s(%d) > relocate %s below %s and relocate %s below %s",DAT_0001f80c,
                       DAT_0001f808,0x29f,"org.tizen.tv-viewer",pcVar5,"com.samsung.tv.aod",
                       "org.tizen.tv-viewer");
          iVar1 = aul_extension_app_group_relocate_below_base_appid(pcVar5,"org.tizen.tv-viewer");
          if (iVar1 < 0) {
            __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to relocate below",DAT_0001f80c,
                         uVar4,0x2a2,pcVar7,pcVar8,pcVar9,pcVar10);
          }
          iVar1 = aul_extension_app_group_relocate_below_base_appid
                            ("org.tizen.tv-viewer","com.samsung.tv.aod");
          if (iVar1 < 0) {
            uVar3 = 0x2a5;
            uVar6 = DAT_0001f80c;
LAB_0001f750:
            __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to relocate below",uVar6,uVar4,
                         uVar3,pcVar7,pcVar8);
          }
        }
        else {
          pcVar7 = "com.samsung.tv.aod";
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > relocate %s below %s",DAT_0001f80c,
                       DAT_0001f808,0x2a8,"com.samsung.tv.aod",pcVar5);
          iVar1 = aul_extension_app_group_relocate_below_base_appid(pcVar5,"com.samsung.tv.aod");
          if (iVar1 < 0) {
            uVar3 = 0x2ab;
            goto LAB_0001f750;
          }
        }
      }
      free(pcVar2);
      free(__ptr);
      goto LAB_0001f53e;
    }
    pcVar2 = "%s: %s(%d) > display rotator not available";
    uVar4 = 0x275;
  }
  __dlog_print(0,6,"tvctx-manager",pcVar2,DAT_0001f80c,DAT_0001f808,uVar4);
LAB_0001f53e:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

