/* deviced : subscribe_udev@00037a38 */

undefined4 subscribe_udev(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_00037e18;
  if ((*(int *)(DAT_00037e18 + 0x37a60) != 0) || (*(int *)(DAT_00037e18 + 0x37a5c) != 0)) {
    __dlog_print(2,6,DAT_00037e4c + 0x37bc4,DAT_00037e48 + 0x37bbc,DAT_00037e44 + 0x37bcd,
                 DAT_00037e40 + 0x37c48,0x2f9,*(int *)(DAT_00037e18 + 0x37a60),
                 *(int *)(DAT_00037e18 + 0x37a5c));
    return 0xffffffef;
  }
  iVar2 = udev_new();
  *(int *)(iVar3 + 0x37a60) = iVar2;
  if (iVar2 == 0) {
    __dlog_print(2,6,DAT_00037eb8 + 0x37dcc,DAT_00037eb4 + 0x37dc8,DAT_00037eb0 + 0x37ddd,
                 (int)&DAT_00037e58 + DAT_00037eac,0x2ff);
  }
  else {
    iVar2 = udev_monitor_new_from_netlink(iVar2,DAT_00037e1c + 0x37a80);
    *(int *)(iVar3 + 0x37a5c) = iVar2;
    if (iVar2 == 0) {
      __dlog_print(2,6,DAT_00037ea8 + 0x37d80,DAT_00037ea4 + 0x37d7c,DAT_00037ea0 + 0x37d95,
                   DAT_00037e9c + 0x37e10,0x305);
    }
    else {
      iVar2 = udev_monitor_set_receive_buffer_size(iVar2,0x200000);
      if (iVar2 == 0) {
        udev_monitor_filter_add_match_subsystem_devtype
                  (*(undefined4 *)(iVar3 + 0x37a5c),DAT_00037e20 + 0x37ab0,0);
        udev_monitor_filter_add_match_subsystem_devtype
                  (*(undefined4 *)(iVar3 + 0x37a5c),DAT_00037e24 + 0x37ac4,0);
        iVar2 = udev_monitor_filter_add_match_subsystem_devtype
                          (*(undefined4 *)(iVar3 + 0x37a5c),DAT_00037e28 + 0x37ad8,0);
        if (iVar2 < 0) {
          __dlog_print(2,6,DAT_00037e88 + 0x37cf0,DAT_00037e84 + 0x37cec,DAT_00037e80 + 0x37d05,
                       DAT_00037e7c + 0x37d80,0x315);
        }
        else {
          iVar2 = udev_monitor_get_fd(*(undefined4 *)(iVar3 + 0x37a5c));
          if (iVar2 == -1) {
            __dlog_print(2,6,DAT_00037e78 + 0x37ca8,DAT_00037e74 + 0x37ca4,DAT_00037e70 + 0x37cbd,
                         DAT_00037e6c + 0x37d38,0x31b);
          }
          else {
            iVar2 = ecore_main_fd_handler_add(iVar2,1,DAT_00037e2c + 0x37b0c,0,0,0);
            if (iVar2 == 0) {
              __dlog_print(2,6,DAT_00037ec8 + 0x37e14,DAT_00037ec4 + 0x37e10,DAT_00037ec0 + 0x37e29,
                           (int)&DAT_00037ea4 + DAT_00037ebc,0x322);
            }
            else {
              iVar3 = udev_monitor_enable_receiving(*(undefined4 *)(iVar3 + 0x37a5c));
              if (-1 < iVar3) {
                __dlog_print(2,4,DAT_00037e3c + 0x37b68,DAT_00037e38 + 0x37b64,
                             DAT_00037e34 + 0x37b7d,DAT_00037e30 + 0x37bf8,0x32a);
                return 0;
              }
              __dlog_print(2,6,DAT_00037e98 + 0x37d38,DAT_00037e94 + 0x37d34,DAT_00037e90 + 0x37d4d,
                           DAT_00037e8c + 0x37dc8,0x327);
            }
          }
        }
      }
      else {
        __dlog_print(2,6,DAT_00037e5c + 0x37c14,DAT_00037e58 + 0x37c10,DAT_00037e54 + 0x37c29,
                     DAT_00037e50 + 0x37ca4,0x30a);
      }
    }
    if (*(int *)(DAT_00037e60 + 0x37c2c) != 0) {
      udev_monitor_unref();
    }
    piVar1 = (int *)(DAT_00037e64 + 0x37c4c);
    *(undefined4 *)(DAT_00037e64 + 0x37c48) = 0;
    if (*piVar1 != 0) {
      udev_unref();
    }
    *(undefined4 *)(DAT_00037e68 + 0x37c70) = 0;
  }
  return 0xffffffea;
}

