/* deviced : execute_poweroff@0002526c */

void execute_poweroff(int *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r0;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  __pid_t _Var8;
  undefined4 extraout_r1;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  undefined4 extraout_s3;
  undefined8 uVar19;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  int local_168;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined1 *local_154;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [100];
  int local_2c;
  
  piVar10 = *(int **)(DAT_000261dc + 0x25280 + DAT_000261e0);
  local_2c = *piVar10;
  piVar2 = (int *)get_poweroff_info();
  if (*piVar2 == 0) {
    __dlog_print(2,6,DAT_0002642c + 0x267a8,DAT_00026428 + 0x267a4,DAT_00026424 + 0x267b8,
                 DAT_00026420 + 0x26928,0x421);
    uVar4 = 0xffffffff;
    goto LAB_000255a4;
  }
  if (param_1 == (int *)0x0) {
    __dlog_print(2,6,DAT_00026490 + 0x269f8,DAT_0002648c + 0x269f4,DAT_00026488 + 0x26a08,
                 DAT_00026484 + 0x26b78,0x427);
    uVar4 = 0xffffffea;
    goto LAB_000255a4;
  }
  iVar11 = *param_1;
  iVar3 = *(int *)(DAT_000261e4 + 0x252cc);
  if (iVar3 < iVar11) {
    __dlog_print(2,6,DAT_00026438 + 0x267ec,DAT_0002643c + 0x267fc,DAT_00026430 + 0x267fc,
                 DAT_00026434 + 0x26988,0x42f,iVar3,iVar11);
    uVar4 = 0xffffffea;
    goto LAB_000255a4;
  }
  *(int *)(DAT_000261e4 + 0x252cc) = iVar11;
  piVar2[4] = iVar11;
  iVar6 = DAT_000263a8;
  iVar7 = DAT_00026350;
  iVar18 = DAT_00026348;
  iVar16 = DAT_000262e4;
  iVar12 = DAT_000262dc;
  iVar3 = DAT_00026260;
  switch(iVar11) {
  case 1:
    iVar11 = DAT_00026250 + 0x25788;
    iVar12 = DAT_00026254 + 0x25614;
    iVar16 = DAT_0002625c + 0x2560c;
    *(undefined4 *)(DAT_00026258 + 0x255e8) = 2;
    __dlog_print(2,4,iVar3 + 0x25614,iVar16,iVar12,iVar11,0x43d);
    piVar13 = *(int **)(DAT_00026264 + 0x25620);
    if (piVar13 != (int *)0x0) {
      iVar3 = *piVar13;
      while (iVar3 != 0) {
        piVar13 = (int *)piVar13[1];
        *(undefined1 *)(iVar3 + 8) = 0;
        if (piVar13 == (int *)0x0) break;
        iVar3 = *piVar13;
      }
    }
    piVar13 = *(int **)(DAT_00026268 + 0x25668);
    if (piVar13 != (int *)0x0) {
      iVar3 = *piVar13;
      while (iVar3 != 0) {
        piVar13 = (int *)piVar13[1];
        *(undefined1 *)(iVar3 + 8) = 0;
        if (piVar13 == (int *)0x0) break;
        iVar3 = *piVar13;
      }
    }
    piVar13 = *(int **)(DAT_0002626c + 0x256b0);
    if (piVar13 != (int *)0x0) {
      iVar3 = *piVar13;
      while (iVar3 != 0) {
        piVar13 = (int *)piVar13[1];
        *(undefined1 *)(iVar3 + 8) = 0;
        if (piVar13 == (int *)0x0) break;
        iVar3 = *piVar13;
      }
    }
    reset_callback_checkin(0);
    iVar3 = get_current_power_state();
    iVar12 = internal_pm_change_state(4);
    if (iVar12 < 0) {
      __dlog_print(2,6,DAT_00026454 + 0x268ac,DAT_00026450 + 0x268a8,DAT_0002644c + 0x268bc,
                   DAT_00026448 + 0x26a2c,0x446);
      uVar4 = 0;
      piVar2[4] = 0;
      goto LAB_000255a4;
    }
    if (((piVar2[2] & 0x40000000U) == 0) ||
       (iVar12 = power_need_background_standby_wait(), iVar12 == 0)) {
      iVar16 = config_is_factory_mode();
      iVar12 = DAT_00026270;
      if (iVar16 != 0) {
        *(undefined4 *)(DAT_00026270 + 0x2575c) = 0x5dc;
        *(undefined4 *)(iVar12 + 0x25758) = 0x5dc;
        *(undefined4 *)(iVar12 + 0x25754) = 0x5dc;
      }
      local_168 = g_list_length(*(undefined4 *)(DAT_00026274 + 0x25748));
      uVar19 = 0;
      uVar1 = 0;
      if (0 < local_168) goto LAB_00025764;
LAB_0002669c:
      uVar19 = uVar1;
      uVar1 = uVar19;
    }
    else {
      uVar19 = get_uptime();
      if ((int)((ulonglong)uVar19 >> 0x20) == 0 && (uint)uVar19 < 0x6a) {
        uVar19 = __aeabi_i2d(0x78 - (uint)uVar19);
        local_168 = g_list_length(*(undefined4 *)(DAT_00026404 + 0x2666c));
        if (local_168 < 1) {
          iVar12 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),0,0);
          if (iVar12 != 0) {
            uVar1 = uVar19;
            goto LAB_0002669c;
          }
          uVar1 = 0;
          goto LAB_00025798;
        }
      }
      else {
        local_168 = g_list_length(*(undefined4 *)(DAT_00026440 + 0x26810));
        uVar19 = 0x402e000000000000;
        uVar1 = 0x402e000000000000;
        if (local_168 < 1) goto LAB_0002669c;
      }
LAB_00025764:
      uVar4 = __aeabi_i2f(*(undefined4 *)(DAT_00026278 + 0x25798));
      __aeabi_fdiv(uVar4,0x447a0000);
      uVar4 = __aeabi_f2d();
      fmax((double)CONCAT44(extraout_s1,uVar4),(double)CONCAT44(extraout_s3,extraout_s2));
      uVar1 = CONCAT44(extraout_r1,extraout_r0);
    }
LAB_00025798:
    uStack_16c = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_170 = (undefined4)uVar1;
    uStack_174 = (undefined4)((ulonglong)uVar19 >> 0x20);
    local_178 = (undefined4)uVar19;
    iVar6 = DAT_00026280 + 0x257dc;
    uVar4 = uStack_16c;
    __snprintf_chk(auStack_90,100,1,100,DAT_0002627c + 0x257b8,iVar11,uVar1);
    print_log_console(auStack_90);
    iVar11 = DAT_0002628c;
    iVar7 = DAT_00026288 + 0x25800;
    iVar18 = DAT_00026284 + 0x25830;
    __dlog_print(2,4,iVar7,DAT_00026290 + 0x25824,iVar18,DAT_0002628c + 0x259b8,0x46f,uVar4,uVar1);
    iVar12 = DAT_00026298;
    trace_begin(DAT_00026294 + 0x25854);
    trace_end();
    iVar16 = DAT_000262a0;
    uVar4 = *(undefined4 *)(DAT_0002629c + 0x2586c);
    *(undefined4 *)(DAT_000262a0 + 0x25884) = 1;
    *(undefined4 *)(iVar16 + 0x258a0) = uVar4;
    iVar16 = get_poweroff_info();
    __snprintf_chk(auStack_a8,0x18,1,0x18,iVar6,*(undefined4 *)(iVar16 + 8));
    local_15c = auStack_a8;
    broadcast_edbus_signal
              (DAT_000262ac + 0x258c0,DAT_000262a8 + 0x258b8,iVar12 + 0x2585c,DAT_000262a4 + 0x258b0
               ,&local_15c);
    puVar15 = (undefined4 *)get_poweroff_info();
    __snprintf_chk(auStack_d8,0x18,1,0x18,iVar6,puVar15[2]);
    local_15c = auStack_d8;
    __snprintf_chk(auStack_c0,0x18,1,0x18,iVar6,*puVar15);
    local_158 = auStack_c0;
    __snprintf_chk(auStack_a8,0x18,1,0x18,iVar6,0);
    local_154 = auStack_a8;
    __dlog_print(2,4,iVar7,DAT_000262b0 + 0x25968,iVar18,iVar11 + 0x259cc,0x381);
    broadcast_edbus_signal
              (DAT_000262bc + 0x25998,DAT_000262b8 + 0x25994,iVar12 + 0x2585c,DAT_000262b4 + 0x2598c
               ,&local_15c);
    if ((0 < local_168) || (iVar11 = __aeabi_dcmpgt(local_178,uStack_174,0,0), iVar11 != 0)) {
      uVar4 = __register_poweroff_timer
                        (local_170,uStack_16c,DAT_000262c0 + 0x259d4,DAT_000262c4 + 0x259dc);
      *(undefined4 *)(DAT_000262c8 + 0x259f8) = uVar4;
    }
    iVar12 = piVar2[2];
    iVar11 = config_get_always_instant_on_support();
    if (iVar11 != 0) {
      uVar4 = config_get_poweroff_interval_reset();
      if (iVar12 == 0x1a || iVar3 != 1) {
        uVar4 = 0;
      }
      iVar3 = config_is_projector_model();
      if ((iVar3 != 0) && (iVar3 = config_is_shop_mode(), iVar3 != 0)) {
        uVar4 = 0;
        __dlog_print(2,6,DAT_000263fc + 0x26614,DAT_000263f8 + 0x26610,DAT_000263f4 + 0x26620,
                     DAT_000263f0 + 0x267c4,0x40a);
      }
      set_force_reboot_interval(uVar4);
    }
    if (*(int *)(DAT_000262cc + 0x25a14) != 0) {
      device_notify(8);
      uVar4 = 0;
      goto LAB_000255a4;
    }
    break;
  case 2:
    iVar3 = DAT_000262d0 + 0x25bf0;
    iVar11 = DAT_000262d4 + 0x25a7c;
    iVar18 = DAT_000262e0 + 0x25a7c;
    *(undefined4 *)(DAT_000262d8 + 0x25a50) = 3;
    __dlog_print(2,4,iVar16 + 0x25a84,iVar18,iVar11,iVar3,0x48e);
    if (*(int *)(iVar12 + 0x25a74) != 0) {
      ecore_timer_del();
      *(undefined4 *)(iVar12 + 0x25a74) = 0;
      device_notify(8);
    }
    uVar9 = piVar2[1];
    iVar3 = get_display_lock_count(4);
    if (iVar3 != 0 && (uVar9 & 0x20000000) == 0) {
      print_display_lock_status(4);
      __dlog_print(2,6,DAT_000263e8 + 0x26564,DAT_000263e4 + 0x26560,DAT_000263e0 + 0x26570,
                   DAT_000263dc + 0x266e0,0x4a0);
      print_log_console(DAT_000263ec + 0x26570);
      uVar4 = 0;
      piVar2[4] = 0;
      goto LAB_000255a4;
    }
    trace_begin(DAT_000262e8 + 0x25ae0);
    trace_end();
    reset_callback_checkin(1);
    iVar3 = piVar2[3];
    *(undefined4 *)(DAT_000262f0 + 0x25b3c) = *(undefined4 *)(DAT_000262ec + 0x25afc);
    if (iVar3 == 4) {
      _Var8 = getpid();
      ambient_set_current_mode_without_action(_Var8,3);
    }
    iVar11 = get_poweroff_info();
    iVar3 = DAT_000262fc;
    iVar18 = DAT_000262f4 + 0x25b5c;
    iVar7 = DAT_000262f8 + 0x25b34;
    iVar12 = DAT_00026304 + 0x25b68;
    __dlog_print(2,4,iVar7,DAT_00026300 + 0x25b48,iVar18,DAT_000262fc + 0x25d3c,0x361);
    __snprintf_chk(auStack_90,0x18,1,0x18,iVar12,*(undefined4 *)(iVar11 + 8));
    local_15c = auStack_90;
    broadcast_edbus_signal
              (DAT_00026314 + 0x25bc0,DAT_00026310 + 0x25bb8,DAT_0002630c + 0x25bb0,
               DAT_00026308 + 0x25ba8,&local_15c);
    puVar15 = (undefined4 *)get_poweroff_info();
    __snprintf_chk(auStack_c0,0x18,1,0x18,iVar12,puVar15[2]);
    local_15c = auStack_c0;
    __snprintf_chk(auStack_a8,0x18,1,0x18,iVar12,*puVar15);
    local_158 = auStack_a8;
    __snprintf_chk(auStack_90,0x18,1,0x18,iVar12,0);
    iVar11 = DAT_0002631c;
    local_154 = auStack_90;
    __dlog_print(2,4,iVar7,DAT_00026318 + 0x25c5c,iVar18,iVar3 + 0x25d58,0x39e);
    broadcast_edbus_signal
              (DAT_0002632c + 0x25c98,DAT_00026328 + 0x25c90,DAT_00026324 + 0x25c8c,
               DAT_00026320 + 0x25c84,&local_15c);
    iVar16 = g_list_length(*(undefined4 *)(iVar11 + 0x25c7c));
    iVar12 = DAT_00026334;
    if (0 < iVar16) {
      iVar16 = DAT_00026330 + 0x25cbc;
      uVar4 = __aeabi_i2f(*(undefined4 *)(iVar11 + 0x25c98));
      __aeabi_fdiv(uVar4,0x447a0000);
      uVar19 = __aeabi_f2d();
      iVar12 = __register_poweroff_timer
                         ((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),iVar12 + 0x25cc4,iVar16);
      *(int *)(iVar11 + 0x25c88) = iVar12;
      if (iVar12 != 0) {
        uVar4 = __aeabi_i2f(*(undefined4 *)(iVar11 + 0x25c98));
        iVar11 = DAT_00026338;
        __aeabi_fdiv(uVar4,0x447a0000);
        __aeabi_f2d();
        __dlog_print(0,3,iVar7,iVar11 + 0x25d10,iVar18,iVar3 + 0x25ce8,0x4bf);
        uVar4 = 0;
        goto LAB_000255a4;
      }
    }
    break;
  case 3:
    iVar3 = DAT_0002633c + 0x25f04;
    iVar11 = DAT_00026340 + 0x25d90;
    iVar12 = DAT_0002634c + 0x25d90;
    *(undefined4 *)(DAT_00026344 + 0x25d64) = 4;
    __dlog_print(2,4,iVar7 + 0x25d98,iVar12,iVar11,iVar3,0x4c6);
    if (*(int *)(iVar18 + 0x25d90) != 0) {
      ecore_timer_del();
      *(undefined4 *)(iVar18 + 0x25d90) = 0;
    }
    iVar11 = DAT_00026360;
    iVar3 = DAT_0002635c;
    puVar14 = (undefined4 *)(DAT_00026354 + 0x25dc8);
    trace_begin(DAT_00026358 + 0x25dd0);
    trace_end();
    reset_callback_checkin(2);
    iVar12 = DAT_00026364;
    iVar11 = iVar11 + 0x25df4;
    *(undefined4 *)(iVar3 + 0x25e0c) = *puVar14;
    iVar18 = get_poweroff_info();
    iVar16 = DAT_0002636c;
    iVar7 = DAT_00026368 + 0x25e18;
    iVar6 = DAT_0002636c + 0x26064;
    __snprintf_chk(auStack_90,0x18,1,0x18,iVar11,*(undefined4 *)(iVar18 + 8));
    local_15c = auStack_90;
    broadcast_edbus_signal
              (DAT_00026378 + 0x25e68,DAT_00026374 + 0x25e60,iVar12 + 0x25e24,DAT_00026370 + 0x25e58
               ,&local_15c);
    puVar15 = (undefined4 *)get_poweroff_info();
    __snprintf_chk(auStack_c0,0x18,1,0x18,iVar11,puVar15[2]);
    local_15c = auStack_c0;
    __snprintf_chk(auStack_a8,0x18,1,0x18,iVar11,*puVar15);
    iVar18 = DAT_0002637c + 0x25f04;
    uVar4 = 0;
    local_158 = auStack_a8;
    __dlog_print(2,4,iVar7,DAT_00026380 + 0x25ee8,iVar18,iVar6,0x3b7,0);
    __snprintf_chk(auStack_90,0x18,1,0x18,iVar11,0);
    local_154 = auStack_90;
    __dlog_print(2,4,iVar7,DAT_00026384 + 0x25f40,iVar18,iVar6,0x3bb);
    broadcast_edbus_signal
              (DAT_00026390 + 0x25f70,DAT_0002638c + 0x25f68,iVar12 + 0x25e24,DAT_00026388 + 0x25f64
               ,&local_15c);
    iVar12 = g_list_length(*(undefined4 *)(iVar3 + 0x25de4));
    iVar11 = DAT_00026394;
    if (0 < iVar12) {
      uVar5 = __aeabi_i2f(*(undefined4 *)(iVar3 + 0x25e00));
      __aeabi_fdiv(uVar5,0x447a0000);
      uVar19 = __aeabi_f2d();
      iVar11 = __register_poweroff_timer
                         ((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),iVar11 + 0x25f94,puVar14);
      *(int *)(iVar3 + 0x25dec) = iVar11;
      if (iVar11 != 0) {
        uVar5 = __aeabi_i2f(*(undefined4 *)(iVar3 + 0x25e00));
        iVar3 = DAT_00026398;
        __aeabi_fdiv(uVar5,0x447a0000);
        uVar19 = __aeabi_f2d();
        __dlog_print(0,3,iVar7,iVar3 + 0x25fdc,iVar18,iVar16 + 0x25fd4,0x4e2,uVar4,uVar19);
        uVar4 = 0;
        goto LAB_000255a4;
      }
    }
    break;
  case 4:
    puVar15 = (undefined4 *)(DAT_000263a4 + 0x26038);
    iVar3 = DAT_0002639c + 0x261d8;
    iVar12 = DAT_000263a0 + 0x26064;
    iVar16 = DAT_000263ac + 0x26064;
    iVar11 = DAT_000263b0 + 0x26068;
    *puVar15 = 5;
    __dlog_print(2,4,iVar11,iVar16,iVar12,iVar3,0x4e9);
    *(undefined4 *)(iVar6 + 0x2607c) = *puVar15;
    if (*(int *)(iVar6 + 0x2605c) != 0) {
      ecore_timer_del();
      *(undefined4 *)(iVar6 + 0x2605c) = 0;
    }
    break;
  case 5:
    __dlog_print(2,4,DAT_000261f4 + 0x25344,DAT_000261f0 + 0x25340,DAT_000261ec + 0x25354,
                 DAT_000261e8 + 0x254c4,0x4f3);
    uVar9 = piVar2[2];
    puVar15 = *(undefined4 **)(DAT_000261f8 + 0x25354);
    iVar3 = 0;
    if (puVar15 != (undefined4 *)0x0) {
      puVar14 = (undefined4 *)*puVar15;
      puVar15 = (undefined4 *)puVar15[1];
      if (puVar14 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        iVar12 = DAT_00026200 + 0x253c8;
        iVar18 = DAT_00026204 + 0x2539c;
        iVar11 = DAT_00026208 + 0x253a0;
        iVar16 = DAT_000261fc + 0x255f0;
        do {
          if ((*(char *)(puVar14 + 2) == '\0') && (*(char *)((int)puVar14 + 9) != '\0')) {
            iVar7 = is_valid_pid(*puVar14);
            if (iVar7 == 0) {
              puVar17 = (undefined4 *)(DAT_000263bc + 0x26140);
              __dlog_print(2,4,iVar11,iVar18,iVar12,iVar16,0x1cd,*puVar14);
              uVar4 = g_list_remove(*puVar17,puVar14);
              *puVar17 = uVar4;
              free(puVar14);
            }
            else {
              iVar3 = iVar3 + 1;
            }
          }
          if (puVar15 == (undefined4 *)0x0) break;
          puVar14 = (undefined4 *)*puVar15;
          puVar15 = (undefined4 *)puVar15[1];
        } while (puVar14 != (undefined4 *)0x0);
      }
    }
    puVar15 = *(undefined4 **)(DAT_0002620c + 0x253ec);
    if (puVar15 != (undefined4 *)0x0) {
      puVar14 = (undefined4 *)*puVar15;
      puVar15 = (undefined4 *)puVar15[1];
      if (puVar14 != (undefined4 *)0x0) {
        iVar12 = DAT_00026214 + 0x25450;
        iVar18 = DAT_00026218 + 0x25424;
        iVar11 = DAT_0002621c + 0x25428;
        iVar16 = DAT_00026210 + 0x25678;
        do {
          if ((*(char *)(puVar14 + 2) == '\0') && (*(char *)((int)puVar14 + 9) != '\0')) {
            iVar6 = is_valid_pid(*puVar14);
            iVar7 = DAT_000263c0;
            if (iVar6 == 0) {
              __dlog_print(2,4,iVar11,iVar18,iVar12,iVar16,0x1de,*puVar14);
              uVar4 = g_list_remove(*(undefined4 *)(iVar7 + 0x261ac),puVar14);
              *(undefined4 *)(iVar7 + 0x261ac) = uVar4;
              free(puVar14);
            }
            else {
              iVar3 = iVar3 + 1;
            }
          }
          if (puVar15 == (undefined4 *)0x0) break;
          puVar14 = (undefined4 *)*puVar15;
          puVar15 = (undefined4 *)puVar15[1];
        } while (puVar14 != (undefined4 *)0x0);
      }
    }
    puVar15 = *(undefined4 **)(DAT_00026220 + 0x25478);
    if (puVar15 != (undefined4 *)0x0) {
      puVar14 = (undefined4 *)*puVar15;
      puVar15 = (undefined4 *)puVar15[1];
      if (puVar14 != (undefined4 *)0x0) {
        iVar12 = DAT_00026228 + 0x254d8;
        iVar18 = DAT_0002622c + 0x254ac;
        iVar11 = DAT_00026230 + 0x254b0;
        iVar16 = DAT_00026224 + 0x25700;
        do {
          if ((*(char *)(puVar14 + 2) == '\0') && (*(char *)((int)puVar14 + 9) != '\0')) {
            iVar6 = is_valid_pid(*puVar14);
            iVar7 = DAT_000263b8;
            if (iVar6 == 0) {
              __dlog_print(2,4,iVar11,iVar18,iVar12,iVar16,0x1ef,*puVar14);
              uVar4 = g_list_remove(*(undefined4 *)(iVar7 + 0x260e0),puVar14);
              *(undefined4 *)(iVar7 + 0x260e0) = uVar4;
              free(puVar14);
            }
            else {
              iVar3 = iVar3 + 1;
            }
          }
          if (puVar15 == (undefined4 *)0x0) break;
          puVar14 = (undefined4 *)*puVar15;
          puVar15 = (undefined4 *)puVar15[1];
        } while (puVar14 != (undefined4 *)0x0);
      }
    }
    iVar11 = access((char *)(DAT_00026234 + 0x254fc),0);
    if (iVar11 == 0) {
      if (*(int *)(DAT_00026238 + 0x2553c) != 1) {
        if (!(*(int *)(DAT_00026238 + 0x2552c) != 0 && iVar3 != 0)) goto LAB_00025528;
        iVar3 = __need_error_popup(piVar2[2]);
        if (iVar3 == 0) goto LAB_000264ac;
        create_debug_event_loop();
        if ((uVar9 & 0x40000000) != 0) {
          kill_all_poweroff_listeners();
        }
        iVar16 = DAT_00026408 + 0x266e4;
        iVar12 = DAT_0002640c + 0x26898;
        iVar11 = DAT_00026410 + 0x26728;
        __dlog_print(2,6,iVar16,DAT_00026414 + 0x26704,iVar11,iVar12,0x514);
        internal_pm_change_state(1);
        __dlog_print(2,6,iVar16,DAT_00026418 + 0x2672c,iVar11,iVar12,0x516);
        broadcast_wakeup_signal();
        sleep(3);
        request_for_display_error_popup_async();
        *(undefined4 *)(DAT_0002641c + 0x26788) = 1;
        request_for_mount_usb_storage_async();
        goto LAB_000264b0;
      }
      print_log_console(DAT_00026470 + 0x26964);
      __dlog_print(2,6,DAT_00026480 + 0x269a8,DAT_0002647c + 0x269a4,DAT_00026478 + 0x269b4,
                   DAT_00026474 + 0x26b24,0x506);
LAB_00025534:
      uVar4 = 6;
      iVar3 = DAT_0002623c + 0x25544;
    }
    else {
      if (!(*(int *)(DAT_000263c4 + 0x264bc) == 0 || iVar3 == 0)) {
LAB_000264ac:
        iVar3 = 0;
LAB_000264b0:
        print_log_console(DAT_000263c8 + 0x264bc);
        __dlog_print(2,6,DAT_000263d8 + 0x26500,DAT_000263d4 + 0x264fc,DAT_000263d0 + 0x2650c,
                     DAT_000263cc + 0x2667c,0x524);
        print_callback_list_constprop_10();
        if (iVar3 != 0) {
          uVar4 = 0;
          piVar2[4] = 0;
          goto LAB_000255a4;
        }
        goto LAB_00025534;
      }
LAB_00025528:
      if ((uVar9 & 0x40000000) == 0) goto LAB_00025534;
      power_get_poweroff_extra_info(&local_15c);
      if (local_15c._3_1_ == '\0') {
        uVar4 = 5;
        iVar3 = DAT_00026400 + 0x26640;
      }
      else {
        uVar4 = 6;
        __dlog_print(2,6,DAT_00026464 + 0x26908,DAT_00026460 + 0x26900,DAT_0002645c + 0x26910,
                     DAT_00026458 + 0x26a80,0x535,(int)&local_15c + 3);
        __snprintf_chk(auStack_90,100,1,100,DAT_00026468 + 0x26924,(int)&local_15c + 3);
        print_log_console(auStack_90);
        iVar3 = DAT_0002646c + 0x26948;
      }
    }
    iVar16 = DAT_00026240 + 0x2555c;
    iVar12 = DAT_00026244 + 0x25710;
    iVar11 = DAT_00026248 + 0x255a0;
    uVar5 = uVar4;
    __dlog_print(2,4,iVar16,DAT_0002624c + 0x2557c,iVar11,iVar12,0x54e,iVar3,uVar4);
    iVar3 = internal_pm_change_state(uVar4);
    if (iVar3 < 0) {
      __dlog_print(2,6,iVar16,DAT_00026444 + 0x26860,iVar11,iVar12,0x554,uVar4,uVar5);
      uVar4 = 0;
      goto LAB_000255a4;
    }
  default:
    uVar4 = 0;
    goto LAB_000255a4;
  }
  device_notify(1,DAT_000263b4 + 0x2609c);
  uVar4 = 0;
LAB_000255a4:
  if (local_2c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

