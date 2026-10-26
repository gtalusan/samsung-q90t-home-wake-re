/* tvctx-manager : receive_key_event_product@0001fe3c */

undefined4 receive_key_event_product(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *__ptr;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == (int *)0x0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid data",DAT_0002087c,DAT_00020878,0x184);
    return 0xffffffff;
  }
  iVar1 = context_system_property_check("exhibit_mode");
  if (((iVar1 == 0) || (iVar1 = g_strcmp0(param_1[4],"XF86PowerOff"), iVar1 != 0)) ||
     (iVar1 = key_handler_is_panel_key_event(param_1[5]), iVar1 != 0)) {
    iVar1 = context_system_property_check("ignore_powerkey");
    if ((iVar1 == 0) || (iVar1 = g_strcmp0(param_1[4],"XF86PowerOff"), iVar1 != 0)) {
      iVar1 = context_check_mask(0x20000000,param_2);
      if (iVar1 == 0) {
LAB_0001feb8:
        iVar1 = context_check_mask(0x20022000,param_2);
        if (iVar1 != 0) {
          iVar1 = context_check_mask(0x8000000,param_2);
          if ((iVar1 != 0) && (iVar1 = context_check_mask(0x20000000,param_2), iVar1 == 0)) {
            pcVar4 = "%s: %s(%d) > ignore key - on sleepy";
            uVar5 = 0xf1;
            uVar2 = DAT_000205b8;
            uVar3 = DAT_000205c4;
            goto LAB_000200fe;
          }
          iVar1 = context_check_mask(0x2000,param_2);
          if (iVar1 == 0) {
LAB_0002003e:
            iVar1 = context_check_mask(0x20020000,param_2);
            if (iVar1 != 0) {
              if ((*param_1 != 0) &&
                 (((((iVar1 = g_strcmp0(param_1[4],"XF86PowerOff"), iVar1 == 0 ||
                     (iVar1 = g_strcmp0(param_1[4],"XF86PanelEnter"), iVar1 == 0)) ||
                    ((iVar1 = g_strcmp0(param_1[4],"XF86LFDPowerOn"), iVar1 == 0 ||
                     (iVar1 = g_strcmp0(param_1[4],"XF86DiscretPowerOn"), iVar1 == 0)))) ||
                   ((iVar1 = context_system_property_check("product:wall"), iVar1 != 0 &&
                    (iVar1 = g_strcmp0(param_1[4],"XF86Home"), iVar1 == 0)))) ||
                  ((iVar1 = context_system_property_check(&DAT_00028e00), iVar1 != 0 &&
                   ((((((iVar1 = g_strcmp0(param_1[4],"0"), iVar1 == 0 ||
                        (iVar1 = g_strcmp0(param_1[4],&DAT_000270e4), iVar1 == 0)) ||
                       (iVar1 = g_strcmp0(param_1[4],&DAT_000270e0), iVar1 == 0)) ||
                      ((iVar1 = g_strcmp0(param_1[4],"3"), iVar1 == 0 ||
                       (iVar1 = g_strcmp0(param_1[4],&DAT_00027198), iVar1 == 0)))) ||
                     ((iVar1 = g_strcmp0(param_1[4],&DAT_00027194), iVar1 == 0 ||
                      ((iVar1 = g_strcmp0(param_1[4],&DAT_00027190), iVar1 == 0 ||
                       (iVar1 = g_strcmp0(param_1[4],&DAT_0002718c), iVar1 == 0)))))) ||
                    ((iVar1 = g_strcmp0(param_1[4],&DAT_00027188), iVar1 == 0 ||
                     (((iVar1 = g_strcmp0(param_1[4],&DAT_00027184), iVar1 == 0 ||
                       (iVar1 = g_strcmp0(param_1[4],"XF86RaiseChannel"), iVar1 == 0)) ||
                      (iVar1 = g_strcmp0(param_1[4],"XF86LowerChannel"), iVar1 == 0)))))))))))) {
                uVar2 = DAT_000205b8;
                iVar6 = param_1[4];
                iVar7 = param_1[5];
                __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s pressed for power wakeup",
                             DAT_000205b8,DAT_000205c0,0x93,iVar6);
                iVar1 = g_strcmp0(iVar6,"0");
                if (iVar1 == 0) {
                  uVar3 = 6;
                }
                else {
                  iVar1 = g_strcmp0(iVar6,&DAT_000270e4);
                  if (iVar1 == 0) {
                    uVar3 = 7;
                  }
                  else {
                    iVar1 = g_strcmp0(iVar6,&DAT_000270e0);
                    if (iVar1 == 0) {
                      uVar3 = 8;
                    }
                    else {
                      iVar1 = g_strcmp0(iVar6,"3");
                      if (iVar1 == 0) {
                        uVar3 = 9;
                      }
                      else {
                        iVar1 = g_strcmp0(iVar6,&DAT_00027198);
                        if (iVar1 == 0) {
                          uVar3 = 10;
                        }
                        else {
                          iVar1 = g_strcmp0(iVar6,&DAT_00027194);
                          if (iVar1 == 0) {
                            uVar3 = 0xb;
                          }
                          else {
                            iVar1 = g_strcmp0(iVar6,&DAT_00027190);
                            if (iVar1 == 0) {
                              uVar3 = 0xc;
                            }
                            else {
                              iVar1 = g_strcmp0(iVar6,&DAT_0002718c);
                              if (iVar1 == 0) {
                                uVar3 = 0xd;
                              }
                              else {
                                iVar1 = g_strcmp0(iVar6,&DAT_00027188);
                                if (iVar1 == 0) {
                                  uVar3 = 0xe;
                                }
                                else {
                                  iVar1 = g_strcmp0(iVar6,&DAT_00027184);
                                  if (iVar1 == 0) {
                                    uVar3 = 0xf;
                                  }
                                  else {
                                    iVar1 = g_strcmp0(iVar6,"XF86RaiseChannel");
                                    if ((iVar1 == 0) ||
                                       (iVar1 = g_strcmp0(iVar6,"XF86LowerChannel"), iVar1 == 0)) {
                                      uVar3 = 0x10;
                                    }
                                    else {
                                      iVar1 = context_system_property_check("product:wall");
                                      if (((iVar1 == 0) ||
                                          (iVar1 = g_strcmp0(iVar6,"XF86Home"), iVar1 != 0)) &&
                                         (iVar1 = g_strcmp0(iVar6,"XF86PowerOff"), iVar1 != 0)) {
                                        iVar1 = g_strcmp0(iVar6,"XF86LFDPowerOn");
                                        if ((iVar1 == 0) ||
                                           (iVar1 = g_strcmp0(iVar6,"XF86DiscretPowerOn"),
                                           iVar1 == 0)) {
                                          uVar3 = 1;
                                        }
                                        else {
                                          iVar1 = g_strcmp0(iVar6,"XF86PanelEnter");
                                          uVar3 = 0xffffffff;
                                          if (iVar1 == 0) {
                                            uVar3 = 0x20;
                                          }
                                        }
                                      }
                                      else {
                                        iVar1 = key_handler_is_smart_control_key_event(iVar7);
                                        uVar3 = 1;
                                        if (iVar1 == 1) {
                                          uVar3 = 0x44;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                iVar1 = device_power_set_wakeup_reason(uVar3);
                if (iVar1 == 0) {
                  iVar1 = context_check_mask(0x20000000,param_2);
                  if (iVar1 == 0) {
                    iVar1 = device_power_set_state(0,0);
                    if (iVar1 == 0) {
                      iVar1 = context_system_property_check("welcome_mode_supported");
                      if (iVar1 != 0) {
                        context_set_timeout(0x8000000,3000,param_2);
                      }
                      goto LAB_0001fff8;
                    }
                    pcVar4 = "%s: %s(%d) > device_power_set_state failed %d";
                    uVar5 = 0x141;
                    uVar3 = DAT_00020874;
                  }
                  else {
                    iVar1 = device_power_get_ambient_mode();
                    if ((iVar1 != 2) || (iVar1 = screen_manager_set_ambient_mode(0,0), -1 < iVar1))
                    goto LAB_0001fff8;
                    uVar5 = 0x13c;
                    pcVar4 = "%s: %s(%d) > screen_manager_set_ambient_mode failed %d";
                    uVar3 = DAT_000205c4;
                  }
                  __dlog_print(0,6,"tvctx-manager",pcVar4,uVar2,uVar3,uVar5,iVar1);
                }
                else {
                  __dlog_print(0,6,"tvctx-manager",
                               "%s: %s(%d) > device_power_set_wakeup_reason failed %d",uVar2,
                               DAT_00020874,0x12f,iVar1);
                }
                goto LAB_0001fff8;
              }
              iVar1 = g_strcmp0(param_1[4],"XF86Wakeup");
              if (iVar1 == 0) {
                __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > welcomemode key event",DAT_0002025c,
                             DAT_00020258,0x14a);
              }
              else {
                iVar1 = g_strcmp0(param_1[4],"XF86Ambient");
                if (iVar1 == 0) {
                  FUN_0001fc04(param_1,0,param_2);
                  goto LAB_0001fff8;
                }
                if (*param_1 == 1) {
                  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore key event: %s",DAT_0002025c,
                               DAT_00020258,0x151,param_1[4]);
                  goto LAB_0001fff8;
                }
              }
            }
          }
          else {
            iVar1 = g_strcmp0(param_1[4],"XF86AudioRaiseVolume");
            if ((iVar1 == 0) || (iVar1 = g_strcmp0(param_1[4],"XF86AudioLowerVolume"), iVar1 == 0))
            {
              uVar2 = DAT_0002025c;
              uVar3 = DAT_00020258;
              if (DAT_0003b520 < 1) {
                if (DAT_0003b514 < 1) {
                  if (DAT_0003b518 < 1) {
                    if (DAT_0003b51c < 1) goto LAB_0002003e;
                    pcVar4 = "%s: %s(%d) > org.tizen.btapp set input_window_id :%#x";
                    uVar5 = 0x10c;
                    iVar1 = DAT_0003b51c;
                  }
                  else {
                    pcVar4 = "%s: %s(%d) > ACM set input window id :%#x";
                    uVar5 = 0x107;
                    uVar2 = DAT_000205b8;
                    uVar3 = DAT_000205c4;
                    iVar1 = DAT_0003b518;
                  }
                }
                else {
                  pcVar4 = "%s: %s(%d) > CEC set input window id :%#x";
                  uVar5 = 0x102;
                  uVar2 = DAT_000205b8;
                  uVar3 = DAT_000205c4;
                  iVar1 = DAT_0003b514;
                }
              }
              else {
                pcVar4 = "%s: %s(%d) > EWBS set input window id :%#x";
                uVar5 = 0xfd;
                iVar1 = DAT_0003b520;
              }
              __dlog_print(0,4,"tvctx-manager",pcVar4,uVar2,uVar3,uVar5,iVar1);
              goto LAB_0001fff8;
            }
            iVar1 = g_strcmp0(param_1[4],"XF86PowerOff");
            if (((iVar1 == 0) || (iVar1 = g_strcmp0(param_1[4],"XF86LFDPowerOff"), iVar1 == 0)) ||
               (iVar1 = g_strcmp0(param_1[4],"XF86DiscretPowerOff"), iVar1 == 0)) goto LAB_0002003e;
            iVar1 = g_strcmp0(param_1[4],"XF86PanelPlus");
            if ((iVar1 != 0) && (iVar1 = g_strcmp0(param_1[4],"XF86PanelMinus"), iVar1 != 0)) {
              if (*param_1 != 1) goto LAB_0002003e;
              iVar1 = g_hash_table_lookup(*(undefined4 *)(param_2 + 0x24),"picture_direct");
              uVar3 = DAT_0002087c;
              uVar2 = DAT_00020874;
              if (iVar1 == 0) {
                __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > set power normal from picture off",
                             DAT_0002087c,DAT_00020874,0x122);
                iVar1 = device_power_set_state(0);
                if (iVar1 != 0) {
                  __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > device_power_set_state failed",
                               uVar3,uVar2,0x124);
                }
                goto LAB_0001fff8;
              }
              __dlog_print(0,4,"tvctx-manager",
                           "%s: %s(%d) > only e-manual key works on picture direct",DAT_0002025c,
                           DAT_00020258,0x11a);
              iVar1 = g_strcmp0(param_1[4],"XF86EManual");
              if (iVar1 != 0) goto LAB_0001fff8;
            }
          }
          iVar1 = context_check_mask(0x20000000,param_2);
          if ((iVar1 != 0) && (iVar1 = context_check_mask(0x2000,param_2), iVar1 == 0)) {
            __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > invalid power state with key %s",
                         DAT_000205b8,DAT_000205bc,0x1b6,param_1[4]);
            goto LAB_0001fff8;
          }
        }
        iVar1 = context_check_mask(0x10000,param_2);
        if ((iVar1 == 0) ||
           (iVar1 = context_check_mbr_key(param_1[4],param_1[3],param_2), iVar1 == 0)) {
          iVar1 = context_system_property_check("cec-stb_connected");
          if ((iVar1 == 0) || (iVar1 = cec_check_remocon_key(param_1[4]), iVar1 != 1)) {
            iVar1 = context_system_property_check("network:none");
            if ((iVar1 == 0) || (iVar1 = g_strcmp0(param_1[4],"XF86HotelAppsGuest"), iVar1 != 0)) {
              if (DAT_0003b598 == 0) {
                iVar1 = context_system_property_check("product:portland");
                if ((iVar1 != 0) && (iVar1 = util_get_time_in_millis(), iVar1 < 0xea61)) {
                  __ptr = (void *)vconf_get_str("memory/appfw/current_fullscreen_appid");
                  iVar1 = g_strcmp0(__ptr,"");
                  if (iVar1 == 0) {
                    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > ignore key : no fullscreen app",
                                 DAT_0002087c,DAT_00020880,0x171);
                    free(__ptr);
                    goto LAB_0001fff8;
                  }
                  free(__ptr);
                }
                DAT_0003b598 = 1;
              }
              uVar2 = key_handler_receive_key_event(param_1,param_2);
              return uVar2;
            }
            __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > not available : non-smart model",
                         DAT_0002025c,DAT_00020260,0x1cb);
            event_filter_handle("not_available",*(undefined4 *)(param_2 + 0x2c),param_2);
            goto LAB_0001fff8;
          }
          pcVar4 = "%s: %s(%d) > ignore key : on CEC-STB";
          uVar5 = 0x1c4;
          uVar2 = DAT_000205b8;
          uVar3 = DAT_000205bc;
        }
        else {
          pcVar4 = "%s: %s(%d) > ignore key : on MBR";
          uVar5 = 0x1bd;
          uVar2 = DAT_0002025c;
          uVar3 = DAT_00020260;
        }
      }
      else {
        iVar1 = context_check_mask(0x2000,param_2);
        if (iVar1 == 0) {
          iVar1 = device_power_get_ambient_mode();
          if (iVar1 != 2) {
            __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore key : on suspend",DAT_0002025c,
                         DAT_00020260,0x1aa);
            goto LAB_0001fff8;
          }
          goto LAB_0001feb8;
        }
        if (*param_1 != 1) goto LAB_0001feb8;
        iVar1 = g_strcmp0(param_1[4],"XF86AudioRaiseVolume");
        if (((iVar1 == 0) || (iVar1 = g_strcmp0(param_1[4],"XF86AudioLowerVolume"), iVar1 == 0)) ||
           ((iVar1 = g_strcmp0(param_1[4],"XF86PowerOff"), iVar1 == 0 ||
            ((iVar1 = g_strcmp0(param_1[4],"XF86LFDPowerOff"), iVar1 == 0 ||
             (iVar1 = g_strcmp0(param_1[4],"XF86DiscretPowerOff"), iVar1 == 0)))))) {
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > process vol/power key : picture off spec",
                       DAT_000205b8,DAT_000205bc,0x1a2);
          goto LAB_0001feb8;
        }
        pcVar4 = "%s: %s(%d) > ignore key : picture off within 1sec";
        uVar5 = 0x1a4;
        uVar2 = DAT_0002087c;
        uVar3 = DAT_00020878;
      }
      __dlog_print(0,4,"tvctx-manager",pcVar4,uVar2,uVar3,uVar5);
      goto LAB_0001fff8;
    }
    pcVar4 = "%s: %s(%d) > ignore power key : ignore_powerkey";
    uVar5 = 0x197;
    uVar2 = DAT_0002025c;
    uVar3 = DAT_00020260;
  }
  else {
    pcVar4 = "%s: %s(%d) > ignore power key : exhibition mode";
    uVar5 = 399;
    uVar2 = DAT_0002025c;
    uVar3 = DAT_00020260;
  }
LAB_000200fe:
  __dlog_print(0,4,"tvctx-manager",pcVar4,uVar2,uVar3,uVar5);
LAB_0001fff8:
  key_handler_cancel_long_press(param_1);
  return 0;
}

