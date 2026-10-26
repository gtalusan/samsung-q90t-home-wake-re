/* deviced : uevent_kernel_control_start@0001b3a4 */

void uevent_kernel_control_start(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined2 uStack_410;
  undefined1 local_40e;
  int local_2c;
  
  iVar7 = DAT_0001b938;
  piVar3 = *(int **)(DAT_0001b924 + 0x1b3bc + DAT_0001b928);
  iVar6 = DAT_0001b92c + 0x1b3dc;
  local_2c = *piVar3;
  iVar8 = DAT_0001b930 + 0x1b460;
  iVar4 = DAT_0001b934 + 0x1b427;
  piVar9 = (int *)(DAT_0001b938 + 0x1b40c);
  __dlog_print(0,3,iVar6,DAT_0001b93c + 0x1b41c,iVar4,iVar8,0xd6);
  iVar1 = *(int *)(iVar7 + 0x1b420);
  if (iVar1 == 0) {
    iVar1 = udev_new();
    *(int *)(iVar7 + 0x1b420) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0xe0;
      iVar7 = DAT_0001b9b4 + 0x1b75c;
      goto LAB_0001b774;
    }
  }
  else if (*piVar9 != 0) {
    uVar2 = 0xd9;
    iVar7 = DAT_0001b9b8 + 0x1b774;
LAB_0001b774:
    uVar11 = 0xffffffea;
    __dlog_print(2,6,iVar6,iVar7,iVar4,iVar8,uVar2);
    goto LAB_0001b680;
  }
  iVar7 = DAT_0001b944;
  iVar1 = udev_monitor_new_from_netlink(iVar1,DAT_0001b940 + 0x1b444);
  piVar9 = (int *)(iVar7 + 0x1b44c);
  *piVar9 = iVar1;
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0001b9f8 + 0x1b8a8,DAT_0001b9f4 + 0x1b8a4,DAT_0001b9f0 + 0x1b8b7,
                 DAT_0001b9ec + 0x1b8f0,0xe7);
  }
  else {
    iVar1 = udev_monitor_set_receive_buffer_size(iVar1,0x200000);
    if (iVar1 == 0) {
      iVar1 = udev_monitor_filter_add_match_subsystem_devtype(*piVar9,DAT_0001b948 + 0x1b478,0);
      if (iVar1 < 0) {
        __dlog_print(2,6,DAT_0001b9a0 + 0x1b6e4,DAT_0001b99c + 0x1b6e0,DAT_0001b998 + 0x1b6f3,
                     DAT_0001b994 + 0x1b72c,0xf4);
      }
      else {
        puVar5 = *(undefined4 **)(iVar7 + 0x1b450);
        if ((puVar5 != (undefined4 *)0x0) && (piVar9 = (int *)*puVar5, piVar9 != (int *)0x0)) {
          puVar10 = (undefined4 *)(DAT_0001b954 + 0x1b4b8);
          iVar1 = DAT_0001b94c + 0x1b520;
          iVar4 = DAT_0001b958 + 0x1b4c0;
          iVar7 = DAT_0001b950 + 0x1b4e7;
          do {
            if (*piVar9 == 0) {
LAB_0001b4f4:
              puVar5 = (undefined4 *)puVar5[1];
            }
            else {
              iVar6 = udev_monitor_filter_add_match_subsystem_devtype(*puVar10,*piVar9,0);
              if (-1 < iVar6) {
                __dlog_print(0,3,DAT_0001b95c + 0x1b4f0,iVar4,iVar7,iVar1,0x102,*piVar9);
                goto LAB_0001b4f4;
              }
              __dlog_print(2,6,DAT_0001b96c + 0x1b570,DAT_0001b968 + 0x1b56c,DAT_0001b964 + 0x1b57f,
                           DAT_0001b960 + 0x1b5b8,0x100);
              puVar5 = (undefined4 *)puVar5[1];
            }
          } while ((puVar5 != (undefined4 *)0x0) && (piVar9 = (int *)*puVar5, piVar9 != (int *)0x0))
          ;
        }
        iVar7 = udev_monitor_filter_update(*(undefined4 *)(DAT_0001b970 + 0x1b588));
        if (iVar7 < 0) {
          __dlog_print(2,6,DAT_0001b9c8 + 0x1b7d0,DAT_0001b9c4 + 0x1b7cc,DAT_0001b9c0 + 0x1b7df,
                       DAT_0001b9bc + 0x1b818,0x107);
        }
        iVar7 = DAT_0001b974;
        puVar5 = (undefined4 *)(DAT_0001b974 + 0x1b59c);
        iVar1 = udev_monitor_get_fd(*puVar5);
        *(int *)(DAT_0001b978 + 0x1b5ac) = iVar1;
        if (iVar1 == -1) {
          __dlog_print(2,6,DAT_0001b9e8 + 0x1b860,DAT_0001b9e4 + 0x1b85c,DAT_0001b9e0 + 0x1b86f,
                       DAT_0001b9dc + 0x1b8a8,0x10b);
        }
        else {
          iVar1 = ecore_main_fd_handler_add(iVar1,1,DAT_0001b97c + 0x1b5d0,0,0,0);
          *(int *)(iVar7 + 0x1b5ac) = iVar1;
          if (iVar1 == 0) {
            __dlog_print(2,6,DAT_0001ba08 + 0x1b8f0,DAT_0001ba04 + 0x1b8ec,DAT_0001ba00 + 0x1b8ff,
                         (int)&DAT_0001b938 + DAT_0001b9fc,0x112);
          }
          else {
            iVar7 = g_list_length(*(undefined4 *)(iVar7 + 0x1b5a0));
            uVar11 = 0;
            if (iVar7 == 0) {
              __dlog_print(0,3,DAT_0001b9b0 + 0x1b72c,DAT_0001b9ac + 0x1b728,DAT_0001b9a8 + 0x1b73f,
                           DAT_0001b9a4 + 0x1b77c,0x11a);
              goto LAB_0001b680;
            }
            iVar6 = DAT_0001b980 + 0x1b60c;
            iVar4 = DAT_0001b984 + 0x1b688;
            iVar1 = DAT_0001b988 + 0x1b64f;
            __dlog_print(2,4,iVar6,DAT_0001b98c + 0x1b628,iVar1,iVar4,0x11e);
            local_42c = *(undefined4 *)(DAT_0001b990 + 0x1b64c);
            uStack_428 = *(undefined4 *)(DAT_0001b990 + 0x1b650);
            uStack_424 = *(undefined4 *)(DAT_0001b990 + 0x1b654);
            uStack_420 = *(undefined4 *)(DAT_0001b990 + 0x1b658);
            local_41c = *(undefined4 *)(DAT_0001b990 + 0x1b65c);
            uStack_418 = *(undefined4 *)(DAT_0001b990 + 0x1b660);
            uStack_414 = *(undefined4 *)(DAT_0001b990 + 0x1b664);
            uStack_410 = (undefined2)*(undefined4 *)(DAT_0001b990 + 0x1b668);
            local_40e = (undefined1)((uint)*(undefined4 *)(DAT_0001b990 + 0x1b668) >> 0x10);
            print_log_console_extcon(&local_42c);
            iVar7 = udev_monitor_enable_receiving(*puVar5);
            if (-1 < iVar7) goto LAB_0001b680;
            __dlog_print(2,6,iVar6,DAT_0001ba0c + 0x1b910,iVar1,iVar4,0x124);
          }
        }
      }
    }
    else {
      __dlog_print(2,6,DAT_0001b9d8 + 0x1b818,DAT_0001b9d4 + 0x1b814,DAT_0001b9d0 + 0x1b827,
                   DAT_0001b9cc + 0x1b860,0xec);
    }
  }
  uevent_kernel_control_stop();
  uVar11 = 0xffffffea;
LAB_0001b680:
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}

