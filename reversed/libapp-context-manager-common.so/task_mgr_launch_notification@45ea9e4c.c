/* libapp-context-manager-common.so : task_mgr_launch_notification@45ea9e4c */

int task_mgr_launch_notification
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = notification_create(0);
  if (iVar1 == 0) {
    iVar2 = -0xc;
    __dlog_print(0,6,DAT_45eaa0c4 + 0x45eaa046,DAT_45eaa0c0 + 0x45eaa044,DAT_45eaa0bc + 0x45eaa06f,
                 DAT_45eaa0b8 + 0x45eaa354,0xc90);
  }
  else {
    iVar2 = notification_set_text(iVar1,0,param_1,DAT_45eaa04c + 0x45ea9e78,0xffffffff);
    if (iVar2 != 0) {
      __dlog_print(0,6,DAT_45eaa084 + 0x45ea9f7e,DAT_45eaa080 + 0x45ea9f7a,DAT_45eaa07c + 0x45ea9fa7
                   ,DAT_45eaa078 + 0x45eaa28c,0xc96,iVar2);
      notification_free(iVar1);
      return iVar2;
    }
    iVar2 = notification_set_text(iVar1,1,param_2,DAT_45eaa050 + 0x45ea9e8e,0xffffffff);
    if (iVar2 == 0) {
      iVar2 = notification_set_text(iVar1,0xd,param_3,DAT_45eaa054 + 0x45ea9ea4,0xffffffff);
      if (iVar2 != 0) {
        __dlog_print(0,6,DAT_45eaa0a4 + 0x45ea9fe2,DAT_45eaa0a0 + 0x45ea9fde,
                     DAT_45eaa09c + 0x45eaa00b,(int)&DAT_45eaa2f0 + DAT_45eaa098,0xca2,iVar2);
        notification_free(iVar1);
        return iVar2;
      }
      iVar2 = notification_set_image(iVar1,0,param_4);
      if (iVar2 == 0) {
        iVar2 = notification_set_display_applist(iVar1,0x10);
        if (iVar2 == 0) {
          notification_set_hide_timeout(iVar1,0x3c);
          notification_set_auto_remove(iVar1,1);
          notification_set_delete_timeout(iVar1,3);
          iVar2 = notification_post(iVar1);
          if (iVar2 != 0) {
            __dlog_print(0,6,DAT_45eaa064 + 0x45ea9f1a,DAT_45eaa060 + 0x45ea9f18,
                         DAT_45eaa05c + 0x45ea9f43,DAT_45eaa058 + 0x45eaa228,0xcb8,iVar2);
          }
        }
        else {
          __dlog_print(0,6,DAT_45eaa0b4 + 0x45eaa01a,DAT_45eaa0b0 + 0x45eaa018,
                       DAT_45eaa0ac + 0x45eaa043,(int)&DAT_45eaa328 + DAT_45eaa0a8,0xcae,iVar2);
        }
      }
      else {
        __dlog_print(0,6,DAT_45eaa094 + 0x45ea9fb6,DAT_45eaa090 + 0x45ea9fb4,
                     DAT_45eaa08c + 0x45ea9fdf,DAT_45eaa088 + 0x45eaa2c4,0xca8,iVar2);
      }
    }
    else {
      __dlog_print(0,6,DAT_45eaa074 + 0x45ea9f46,DAT_45eaa070 + 0x45ea9f44,DAT_45eaa06c + 0x45ea9f6f
                   ,DAT_45eaa068 + 0x45eaa254,0xc9c,iVar2);
    }
  }
  notification_free(iVar1);
  return iVar2;
}

