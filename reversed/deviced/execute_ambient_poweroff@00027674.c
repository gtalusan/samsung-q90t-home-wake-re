/* deviced : execute_ambient_poweroff@00027674 */

void execute_ambient_poweroff(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *__ptr;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 *local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 auStack_74 [24];
  undefined1 auStack_5c [24];
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar9 = *(int **)(DAT_00027b70 + 0x27684 + DAT_00027b74);
  local_2c = *piVar9;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)(DAT_00027c0c + 0x27b6c),(char *)(DAT_00027c08 + 0x27b64),0x76a,
                  (char *)(DAT_00027c04 + 0x27e20));
  }
  iVar1 = get_poweroff_info();
  piVar2 = (int *)get_ambient_poweroff_info();
  iVar6 = DAT_00027b78;
  iVar7 = *param_1;
  if (*(int *)(DAT_00027b78 + 0x276c0) < iVar7) {
    __dlog_print(2,6,DAT_00027bfc + 0x27b30,DAT_00027c00 + 0x27b38,DAT_00027bf4 + 0x27b40,
                 (int)&DAT_00027dfc + DAT_00027bf8,0x778,iVar7,*(int *)(DAT_00027b78 + 0x276c0));
    uVar3 = 0xffffffea;
  }
  else {
    *(int *)(DAT_00027b78 + 0x276c0) = iVar7;
    piVar2[1] = iVar7;
    iVar10 = DAT_00027bbc;
    iVar8 = DAT_00027b80;
    if (iVar7 == 2) {
      *(undefined4 *)(iVar6 + 0x276c0) = 3;
      if (*(int *)(iVar8 + 0x2777c) != 0) {
        ecore_timer_del();
        *(undefined4 *)(iVar8 + 0x2777c) = 0;
      }
      puVar5 = *(undefined4 **)(DAT_00027b84 + 0x27770);
      if (puVar5 != (undefined4 *)0x0) {
        __ptr = (undefined4 *)*puVar5;
        puVar5 = (undefined4 *)puVar5[1];
        if (__ptr != (undefined4 *)0x0) {
          iVar10 = 0;
          iVar6 = DAT_00027b88 + 0x27aac;
          iVar8 = DAT_00027b8c + 0x277d8;
          iVar12 = DAT_00027b90 + 0x277ac;
          iVar7 = DAT_00027b94 + 0x277b0;
          do {
            if ((*(char *)(__ptr + 2) == '\0') && (*(char *)((int)__ptr + 9) != '\0')) {
              iVar4 = is_valid_pid(*__ptr);
              if (iVar4 == 0) {
                puVar11 = (undefined4 *)(DAT_00027bb8 + 0x278b0);
                __dlog_print(2,4,iVar7,iVar12,iVar8,iVar6,0x70c,*__ptr);
                uVar3 = g_list_remove(*puVar11,__ptr);
                *puVar11 = uVar3;
                free(__ptr);
              }
              else {
                iVar10 = iVar10 + 1;
              }
            }
            if (puVar5 == (undefined4 *)0x0) break;
            __ptr = (undefined4 *)*puVar5;
            puVar5 = (undefined4 *)puVar5[1];
          } while (__ptr != (undefined4 *)0x0);
          if (iVar10 != 0) {
            iVar6 = access((char *)(DAT_00027b98 + 0x27800),0);
            if ((iVar6 == 0) && (iVar6 = __need_error_popup(*(undefined4 *)(iVar1 + 8)), iVar6 != 0)
               ) {
              create_debug_event_loop();
              kill_all_poweroff_listeners();
              internal_pm_change_state(1);
              broadcast_wakeup_signal();
              sleep(3);
              request_for_display_error_popup_async();
              *(undefined4 *)(DAT_00027bf0 + 0x27b18) = 1;
              request_for_mount_usb_storage_async();
            }
            print_log_console(DAT_00027b9c + 0x27814);
            __dlog_print(2,6,DAT_00027bac + 0x27858,DAT_00027ba8 + 0x27854,DAT_00027ba4 + 0x27864,
                         DAT_00027ba0 + 0x27b04,0x7b7);
            print_callback_list_constprop_10();
          }
        }
      }
      *(undefined4 *)(DAT_00027bb4 + 0x278a4) = *(undefined4 *)(DAT_00027bb0 + 0x27870);
    }
    else {
      if (iVar7 == 3) {
        if (*piVar2 != 0) {
          ambient_get_old_mode(piVar2);
        }
        internal_change_ambient_mode();
        uVar3 = 0;
        goto LAB_000276fc;
      }
      if (iVar7 == 1) {
        *(undefined4 *)(iVar6 + 0x276c0) = 2;
        piVar2 = *(int **)(iVar10 + 0x27904);
        if (piVar2 != (int *)0x0) {
          iVar6 = *piVar2;
          while (iVar6 != 0) {
            piVar2 = (int *)piVar2[1];
            *(undefined1 *)(iVar6 + 8) = 0;
            if (piVar2 == (int *)0x0) break;
            iVar6 = *piVar2;
          }
        }
        reset_callback_checkin(3);
        iVar6 = config_get_always_instant_on_support();
        if (iVar6 != 0) {
          set_force_reboot_interval(0);
        }
        iVar6 = DAT_00027bc0;
        iVar1 = g_list_length(*(undefined4 *)(DAT_00027bc0 + 0x2795c));
        if (iVar1 != 0) {
          puVar5 = (undefined4 *)get_poweroff_info();
          iVar1 = DAT_00027bc4 + 0x27978;
          __snprintf_chk(auStack_74,0x18,1,0x18,iVar1,puVar5[2]);
          local_80 = auStack_74;
          __snprintf_chk(auStack_5c,0x18,1,0x18,iVar1,*puVar5);
          local_7c = auStack_5c;
          __snprintf_chk(auStack_44,0x18,1,0x18,iVar1,0);
          local_78 = auStack_44;
          __dlog_print(2,4,DAT_00027bd4 + 0x27a28,DAT_00027bd0 + 0x27a20,DAT_00027bcc + 0x27a34,
                       DAT_00027bc8 + 0x27cf0,0x3d7);
          broadcast_edbus_signal
                    (DAT_00027be4 + 0x27a54,DAT_00027bdc + 0x27a4c,DAT_00027be0 + 0x27a50,
                     DAT_00027bd8 + 0x27a40,&local_80);
          uVar3 = __aeabi_i2f(*(undefined4 *)(iVar6 + 0x27970));
          __aeabi_fdiv(uVar3,0x447a0000);
          uVar13 = __aeabi_f2d();
          iVar1 = DAT_00027bec + 0x27a80;
          *(undefined4 *)(iVar6 + 0x27984) = *(undefined4 *)(DAT_00027be8 + 0x27a80);
          iVar6 = __register_ambient_poweroff_timer
                            ((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),iVar1);
          if (iVar6 != 0) {
            uVar3 = 0;
            goto LAB_000276fc;
          }
        }
      }
    }
    device_notify(4,DAT_00027b7c + 0x276f8);
    uVar3 = 0;
  }
LAB_000276fc:
  if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

