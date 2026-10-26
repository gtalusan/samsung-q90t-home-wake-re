/* deviced : uevent_udev_control_start@0001ad28 */

undefined4 uevent_udev_control_start(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_0001b150;
  iVar7 = DAT_0001b144 + 0x1ad50;
  iVar5 = DAT_0001b148 + 0x1ad8c;
  iVar3 = DAT_0001b14c + 0x1ad93;
  __dlog_print(0,3,iVar7,DAT_0001b154 + 0x1ad80,iVar3,iVar5,0x137);
  iVar1 = *(int *)(iVar6 + 0x1ad78);
  if (iVar1 == 0) {
    iVar1 = udev_new();
    *(int *)(iVar6 + 0x1ad78) = iVar1;
    if (iVar1 == 0) {
      __dlog_print(2,6,iVar7,DAT_0001b1e8 + 0x1b130,iVar3,iVar5,0x141);
      return 0xffffffea;
    }
  }
  else if (*(int *)(iVar6 + 0x1ad6c) != 0) {
    __dlog_print(2,6,iVar7,DAT_0001b158 + 0x1adb4,iVar3,iVar5,0x13a);
    return 0;
  }
  iVar6 = DAT_0001b160;
  iVar1 = udev_monitor_new_from_netlink(iVar1,DAT_0001b15c + 0x1adf0);
  *(int *)(iVar6 + 0x1ae00) = iVar1;
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0001b1d4 + 0x1b0c8,DAT_0001b1d0 + 0x1b0c4,DAT_0001b1cc + 0x1b0d7,
                 DAT_0001b1c8 + 0x1b0d0,0x148);
  }
  else {
    iVar3 = udev_monitor_set_receive_buffer_size(iVar1,0x8000000);
    iVar1 = DAT_0001b16c;
    if (iVar3 == 0) {
      puVar4 = *(undefined4 **)(iVar6 + 0x1ae04);
      if ((puVar4 != (undefined4 *)0x0) && (piVar2 = (int *)*puVar4, piVar2 != (int *)0x0)) {
        iVar3 = DAT_0001b164 + 0x1ae70;
        iVar5 = DAT_0001b170 + 0x1ae50;
        iVar6 = DAT_0001b168 + 0x1ae77;
        do {
          if ((*piVar2 == 0) ||
             (iVar7 = udev_monitor_filter_add_match_subsystem_devtype
                                (*(undefined4 *)(iVar1 + 0x1ae50)), -1 < iVar7)) {
            puVar4 = (undefined4 *)puVar4[1];
          }
          else {
            __dlog_print(2,6,DAT_0001b174 + 0x1aeb0,iVar5,iVar6,iVar3,0x158);
            puVar4 = (undefined4 *)puVar4[1];
          }
        } while ((puVar4 != (undefined4 *)0x0) && (piVar2 = (int *)*puVar4, piVar2 != (int *)0x0));
      }
      iVar6 = DAT_0001b178;
      iVar1 = udev_monitor_get_fd(*(undefined4 *)(DAT_0001b178 + 0x1aed4));
      *(int *)(DAT_0001b17c + 0x1aee0) = iVar1;
      if (iVar1 == -1) {
        __dlog_print(2,6,DAT_0001b1c4 + 0x1b080,DAT_0001b1c0 + 0x1b07c,DAT_0001b1bc + 0x1b08f,
                     DAT_0001b1b8 + 0x1b088,0x15d);
      }
      else {
        iVar1 = ecore_main_fd_handler_add(iVar1,1,DAT_0001b180 + 0x1af00,0,0,0);
        *(int *)(iVar6 + 0x1aee4) = iVar1;
        if (iVar1 == 0) {
          __dlog_print(2,6,DAT_0001b1e4 + 0x1b110,DAT_0001b1e0 + 0x1b10c,DAT_0001b1dc + 0x1b11f,
                       DAT_0001b1d8 + 0x1b118,0x164);
        }
        else {
          iVar1 = g_list_length(*(undefined4 *)(iVar6 + 0x1aed8));
          if (iVar1 == 0) {
            __dlog_print(0,3,DAT_0001b1a4 + 0x1afe8,DAT_0001b1a0 + 0x1afe4,DAT_0001b19c + 0x1affb,
                         DAT_0001b198 + 0x1aff8,0x16c);
            return 0;
          }
          iVar5 = DAT_0001b184 + 0x1af3c;
          iVar3 = DAT_0001b188 + 0x1af78;
          iVar1 = DAT_0001b18c + 0x1af7f;
          __dlog_print(2,4,iVar5,DAT_0001b190 + 0x1af58,iVar1,iVar3,0x170);
          iVar6 = udev_monitor_enable_receiving(*(undefined4 *)(iVar6 + 0x1aed4));
          if (-1 < iVar6) {
            return 0;
          }
          __dlog_print(2,6,iVar5,DAT_0001b194 + 0x1af94,iVar1,iVar3,0x172);
        }
      }
    }
    else {
      __dlog_print(2,6,DAT_0001b1b4 + 0x1b038,DAT_0001b1b0 + 0x1b034,DAT_0001b1ac + 0x1b047,
                   DAT_0001b1a8 + 0x1b040,0x14d);
    }
  }
  uevent_udev_control_stop();
  return 0xffffffea;
}

