/* deviced : need_ew_boot@000319bc */

void need_ew_boot(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  int local_134;
  int local_130;
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar6 = *(int **)(DAT_00031d78 + 0x319cc + DAT_00031d7c);
  uVar5 = 0;
  local_134 = 0;
  local_2c = *piVar6;
  iVar1 = config_get_ew_end_time();
  iVar2 = access((char *)(DAT_00031d80 + 0x31a00),0);
  if (iVar2 == 0) {
    __dlog_print(2,4,DAT_00031dac + 0x31b28,DAT_00031da8 + 0x31b24,DAT_00031da4 + 0x31b36,
                 DAT_00031da0 + 0x31eb0,0x269);
    uVar5 = 0;
    goto LAB_00031ac4;
  }
  iVar2 = get_poweroff_info();
  if ((*(uint *)(iVar2 + 8) & 0x9fffffff) == 0x1a) {
    __dlog_print(2,6,DAT_00031dbc + 0x31b70,DAT_00031db8 + 0x31b6c,DAT_00031db4 + 0x31b82,
                 DAT_00031db0 + 0x31efc,0x270);
    goto LAB_00031ac4;
  }
  iVar7 = DAT_00031d84 + 0x31a2c;
  iVar2 = vconf_get_int(iVar7,&local_134);
  if (iVar2 != 0) {
    __dlog_print(2,6,DAT_00031de4 + 0x31cc0,DAT_00031de0 + 0x31cbc,DAT_00031ddc + 0x31cce,
                 DAT_00031dd8 + 0x32048,0x276,iVar7);
    goto LAB_00031ac4;
  }
  iVar2 = local_134;
  __dlog_print(2,4,DAT_00031d90 + 0x31a78,DAT_00031d94 + 0x31a80,DAT_00031d8c + 0x31a8e,
               register_panel_display_time_update_timer + DAT_00031d88,0x27a,local_134);
  iVar7 = access((char *)(DAT_00031d98 + 0x31a94),0);
  if (((iVar7 == 0) || (local_134 != 0)) &&
     (iVar7 = access((char *)(DAT_00031d9c + 0x31ab8),0), iVar7 != 0)) {
    iVar7 = 0;
    local_130 = 0;
    iVar3 = vconf_get_int(DAT_00031dc0 + 0x31b88);
    if (iVar3 == 0) {
      iVar7 = local_130;
    }
    else {
      __dlog_print(2,6,DAT_00031df4 + 0x31d2c,DAT_00031df0 + 0x31d28,DAT_00031dec + 0x31d3e,
                   DAT_00031de8 + 0x320c8,0x245,iVar2);
    }
    iVar3 = config_get_ew_mode_interval();
    iVar4 = config_get_panel_display_time();
    __dlog_print(2,4,DAT_00031dcc + 0x31be4,DAT_00031dd0 + 0x31bec,DAT_00031dc8 + 0x31bfe,
                 DAT_00031dc4 + 0x31f78,0x285,iVar4,iVar7,iVar3);
    __snprintf_chk(auStack_12c,0x100,1,0x100,DAT_00031dd4 + 0x31c10,iVar4,iVar7,iVar3);
    print_log_console(auStack_12c);
    bVar8 = iVar1 == iVar4;
    iVar2 = iVar1 - iVar4;
    if (iVar1 >= iVar4) {
      bVar8 = iVar3 == 0;
      iVar2 = iVar3;
    }
    if (!bVar8 && iVar2 < 0 == (iVar1 < iVar4 && SBORROW4(iVar1,iVar4))) {
      if (iVar3 == 0x870 || iVar3 == 10) {
        uVar5 = 1;
        if (iVar3 + iVar7 <= iVar4) {
          __aeabi_idivmod(iVar4,iVar3);
          set_last_ew_time(iVar4 - extraout_r1);
          goto LAB_00031ac4;
        }
      }
      else if (iVar7 == 0) {
        if (599 < iVar4) {
          if (iVar4 < iVar3) {
            uVar5 = 1;
            set_last_ew_time(600);
            goto LAB_00031ac4;
          }
LAB_00031d58:
          __aeabi_idivmod(iVar4,iVar3);
          uVar5 = 1;
          set_last_ew_time(iVar4 - extraout_r1_00);
          goto LAB_00031ac4;
        }
      }
      else {
        iVar1 = 0;
        if (iVar3 < 0x259 || iVar7 != 600) {
          iVar1 = iVar7;
        }
        if (iVar1 + iVar3 <= iVar4) goto LAB_00031d58;
      }
    }
  }
  uVar5 = 0;
LAB_00031ac4:
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

