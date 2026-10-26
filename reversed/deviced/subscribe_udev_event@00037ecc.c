/* deviced : subscribe_udev_event@00037ecc */

int subscribe_udev_event(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_000382f0;
  if (param_1 == 0) {
    __dlog_print(2,6,DAT_00038390 + 0x382a0,DAT_0003838c + 0x3829c,DAT_00038388 + 0x382b5,
                 (int)&DAT_00038340 + DAT_00038384,0x38b);
  }
  else {
    if ((*(int *)(DAT_000382f0 + 0x37efc) != 0) || (*(int *)(DAT_000382f0 + 0x37ef8) != 0)) {
      __dlog_print(2,6,DAT_00038320 + 0x3804c,DAT_0003831c + 0x38044,DAT_00038318 + 0x38055,
                   DAT_00038314 + 0x380e0,0x391,*(int *)(DAT_000382f0 + 0x37efc),
                   *(int *)(DAT_000382f0 + 0x37ef8));
      return -0x11;
    }
    uVar2 = g_main_loop_get_context();
    iVar3 = udev_new();
    *(int *)(iVar5 + 0x37efc) = iVar3;
    if (iVar3 == 0) {
      param_1 = -0x16;
      __dlog_print(2,6,DAT_000383a0 + 0x382ec,DAT_0003839c + 0x382e8,DAT_00038398 + 0x382fd,
                   (int)&DAT_00038388 + DAT_00038394,0x39a);
    }
    else {
      iVar3 = udev_monitor_new_from_netlink(iVar3,DAT_000382f4 + 0x37f24);
      *(int *)(iVar5 + 0x37ef8) = iVar3;
      if (iVar3 == 0) {
        __dlog_print(2,6,DAT_00038350 + 0x38178,DAT_0003834c + 0x38174,DAT_00038348 + 0x38189,
                     DAT_00038344 + 0x38214,0x3a1);
        iVar3 = 0;
      }
      else {
        param_1 = udev_monitor_set_receive_buffer_size(iVar3,0x200000);
        if (param_1 == 0) {
          udev_monitor_filter_add_match_subsystem_devtype
                    (*(undefined4 *)(iVar5 + 0x37ef8),DAT_00038324 + 0x3806c,0);
          udev_monitor_filter_add_match_subsystem_devtype
                    (*(undefined4 *)(iVar5 + 0x37ef8),DAT_00038328 + 0x38080,0);
          iVar4 = udev_monitor_filter_add_match_subsystem_devtype
                            (*(undefined4 *)(iVar5 + 0x37ef8),DAT_0003832c + 0x38094,0);
          iVar3 = 0;
          if (iVar4 < 0) {
            __dlog_print(2,6,DAT_00038360 + 0x381c4,DAT_0003835c + 0x381c0,DAT_00038358 + 0x381d5,
                         DAT_00038354 + 0x38260,0x3b1);
          }
          else {
            iVar4 = udev_monitor_get_fd(*(undefined4 *)(iVar5 + 0x37ef8));
            if (iVar4 == -1) {
              __dlog_print(2,6,DAT_00038370 + 0x38210,DAT_0003836c + 0x3820c,DAT_00038368 + 0x38221,
                           DAT_00038364 + 0x382ac,0x3b7);
            }
            else {
              iVar3 = g_unix_fd_source_new(iVar4,1);
              g_source_attach(iVar3,uVar2);
              g_source_set_callback(iVar3,DAT_00038330 + 0x380d8,0,0);
              iVar5 = udev_monitor_enable_receiving(*(undefined4 *)(iVar5 + 0x37ef8));
              if (-1 < iVar5) {
                __dlog_print(2,4,DAT_00038340 + 0x3812c,DAT_0003833c + 0x38128,
                             DAT_00038338 + 0x38141,DAT_00038334 + 0x381cc,0x3c6);
                return 0;
              }
              __dlog_print(2,6,DAT_00038380 + 0x38258,DAT_0003837c + 0x38254,DAT_00038378 + 0x3826d,
                           (int)&DAT_000382f8 + DAT_00038374,0x3c2);
            }
          }
        }
        else {
          __dlog_print(2,6,DAT_00038304 + 0x37f88,DAT_00038300 + 0x37f84,DAT_000382fc + 0x37f9d,
                       DAT_000382f8 + 0x38028,0x3a6);
          iVar3 = 0;
        }
      }
      if (*(int *)(DAT_00038308 + 0x37fa0) != 0) {
        udev_monitor_unref();
      }
      piVar1 = (int *)(DAT_0003830c + 0x37fc0);
      *(undefined4 *)(DAT_0003830c + 0x37fbc) = 0;
      if (*piVar1 != 0) {
        udev_unref();
      }
      if (iVar3 == 0) {
        param_1 = -0x16;
      }
      *(undefined4 *)(DAT_00038310 + 0x37fe4) = 0;
      if (iVar3 != 0) {
        param_1 = -0x16;
        g_source_destroy(iVar3);
        g_source_unref(iVar3);
      }
    }
  }
  return param_1;
}

