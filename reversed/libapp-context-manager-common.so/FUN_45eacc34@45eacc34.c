/* libapp-context-manager-common.so : FUN_45eacc34@45eacc34 */

void FUN_45eacc34(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  char local_31;
  int local_30;
  int local_2c;
  
  piVar5 = *(int **)(DAT_45ead23c + 0x45eacc46 + DAT_45ead240);
  local_2c = *piVar5;
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
    goto LAB_45eacf36;
  }
  bVar6 = false;
  if (param_2 == 0) {
    param_2 = bundle_create();
    bVar6 = true;
    if (param_2 == 0) {
      uVar2 = 0xffffffff;
      __dlog_print(0,6,DAT_45ead368 + 0x45ead112,DAT_45ead364 + 0x45ead110,DAT_45ead360 + 0x45ead13d
                   ,DAT_45ead35c + 0x45ead14e,0xc52);
      goto LAB_45eacf36;
    }
  }
  iVar4 = *(int *)(param_3 + 0x2c);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) && (0 < *(int *)(iVar4 + 0x2c))) {
    bundle_add(param_2,DAT_45ead244 + 0x45eacc7e);
  }
  iVar4 = FUN_45eaa0c8(param_1);
  if (iVar4 == 0) {
    iVar1 = context_system_property_check(DAT_45ead248 + 0x45eacc94);
    iVar4 = DAT_45ead24c;
    if (((iVar1 != 0) &&
        (iVar1 = g_strcmp0(param_1,*(undefined4 *)(DAT_45ead24c + 0x45eacd0e)), iVar1 == 0)) &&
       (iVar4 = g_strcmp0(iVar4 + 0x45eacd12,DAT_45ead250 + 0x45eaccbe), iVar4 == 0)) {
      local_31 = '\0';
      local_30 = iVar4;
      iVar4 = aul_window_stack_get(&local_30);
      if (iVar4 < 0) {
        __dlog_print(0,6,DAT_45ead3b8 + 0x45ead206,DAT_45ead3bc + 0x45ead202,
                     DAT_45ead3b0 + 0x45ead229,(int)&DAT_45ead258 + DAT_45ead3b4,0x40e,iVar4);
      }
      else if (local_30 == 0) {
        __dlog_print(0,6,DAT_45ead378 + 0x45ead138,DAT_45ead374 + 0x45ead136,
                     DAT_45ead370 + 0x45ead165,DAT_45ead36c + 0x45ead182,0x413);
      }
      else {
        iVar4 = aul_window_stack_foreach(local_30,DAT_45ead254 + 0x45eaccee,&local_31);
        if (iVar4 < 0) {
          __dlog_print(0,6,DAT_45ead3a8 + 0x45ead1d8,DAT_45ead3ac + 0x45ead1d4,
                       DAT_45ead3a0 + 0x45ead1fb,DAT_45ead3a4 + 0x45ead22a,0x419,iVar4);
        }
        iVar4 = aul_window_stack_del(local_30);
        if (iVar4 < 0) {
          __dlog_print(0,6,DAT_45ead39c + 0x45ead1aa,DAT_45ead398 + 0x45ead1a8,
                       DAT_45ead394 + 0x45ead1d3,DAT_45ead390 + 0x45ead1f0,0x41d,iVar4);
        }
        if (local_31 == '\0') {
          __dlog_print(0,4,DAT_45ead344 + 0x45ead0a2,DAT_45ead340 + 0x45ead0a0,
                       DAT_45ead33c + 0x45ead0cf,DAT_45ead338 + 0x45ead0ec,0x422);
        }
        else {
          __dlog_print(0,4,DAT_45ead264 + 0x45eacd36,DAT_45ead260 + 0x45eacd34,
                       DAT_45ead25c + 0x45eacd5f,DAT_45ead258 + 0x45eacd7c,0x420);
        }
        if (local_31 != '\0') goto LAB_45eacdc2;
      }
      if ((*(int *)(param_3 + 0x38) == 0) ||
         (iVar4 = g_strcmp0(*(int *)(param_3 + 0x38),DAT_45ead268 + 0x45eacd4a), iVar4 == 0)) {
        if ((*(int *)(param_3 + 0x34) == 0) ||
           (iVar4 = *(int *)(*(int *)(param_3 + 0x34) + 4), iVar4 == 0)) goto LAB_45eacfe6;
      }
      else {
        iVar4 = context_check_is_landscape_only(*(undefined4 *)(param_3 + 0x38));
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_3 + 0x38);
        }
        else {
LAB_45eacfe6:
          iVar4 = DAT_45ead2fc + 0x45eacfee;
        }
      }
      if (bVar6) {
        __dlog_print(0,5,DAT_45ead388 + 0x45ead172,DAT_45ead384 + 0x45ead170,
                     DAT_45ead380 + 0x45ead19f,DAT_45ead37c + 0x45ead1e0,0xc35);
        bundle_add(param_2,DAT_45ead38c + 0x45ead17e,iVar4);
      }
      else {
        iVar1 = bundle_dup(param_2);
        if (iVar1 == 0) {
          __dlog_print(0,6,DAT_45ead3cc + 0x45ead234,DAT_45ead3c8 + 0x45ead232,
                       DAT_45ead3c4 + 0x45ead263,DAT_45ead3c0 + 0x45ead2a2,0xc3c);
        }
        else {
          bVar6 = true;
          iVar7 = DAT_45ead26c + 0x45eacd88;
          bundle_add(iVar1,iVar7,iVar4);
          __dlog_print(0,4,DAT_45ead278 + 0x45eacdc0,DAT_45ead27c + 0x45eacdb8,
                       DAT_45ead270 + 0x45eacddb,DAT_45ead274 + 0x45eace2c,0xc42,iVar7,iVar4);
          param_2 = iVar1;
        }
      }
    }
LAB_45eacdc2:
    __dlog_print(0,4,DAT_45ead28c + 0x45eacdf2,DAT_45ead288 + 0x45eacdee,DAT_45ead284 + 0x45eace19,
                 DAT_45ead280 + 0x45eace28,0xc66,param_1);
    uVar2 = aul_launch_app(param_1,param_2);
    if (bVar6) goto LAB_45eacf74;
LAB_45eace06:
    iVar4 = g_strcmp0(param_1,DAT_45ead290 + 0x45eace10);
    if (iVar4 == 0) {
      local_30 = 0;
      iVar4 = bundle_get_str(param_2,DAT_45ead294 + 0x45eace26,&local_30);
      if (iVar4 == 0) {
        iVar4 = g_strcmp0(local_30,DAT_45ead310 + 0x45ead01e);
        if ((iVar4 != 0) && (iVar4 = g_strcmp0(local_30,DAT_45ead314 + 0x45ead02a), iVar4 != 0))
        goto LAB_45eace70;
        __dlog_print(0,4,DAT_45ead324 + 0x45ead056,DAT_45ead320 + 0x45ead054,
                     DAT_45ead31c + 0x45ead083,DAT_45ead318 + 0x45ead0e0,0xbe4);
LAB_45ead058:
        __dlog_print(0,4,DAT_45ead334 + 0x45ead07c,DAT_45ead330 + 0x45ead07a,
                     DAT_45ead32c + 0x45ead0a9,DAT_45ead328 + 0x45ead0ba,0xc71);
        goto LAB_45eacf36;
      }
      if (iVar4 != -0x7e) {
        __dlog_print(0,6,DAT_45ead2a0 + 0x45eace6e,DAT_45ead2a4 + 0x45eace6a,
                     DAT_45ead298 + 0x45eace8d,DAT_45ead29c + 0x45eacf00,0xbe9,iVar4);
      }
LAB_45eace70:
      local_30 = 0;
      iVar4 = bundle_get_str(param_2,DAT_45ead2a8 + 0x45eace7e,&local_30);
      if (iVar4 == 0) {
        iVar4 = g_strcmp0(local_30,DAT_45ead348 + 0x45ead0ae);
        if (iVar4 == 0) {
          __dlog_print(0,4,DAT_45ead358 + 0x45ead0d8,DAT_45ead354 + 0x45ead0d6,
                       DAT_45ead350 + 0x45ead107,DAT_45ead34c + 0x45ead164,0xbf1);
          goto LAB_45ead058;
        }
      }
      else if (iVar4 != -0x7e) {
        __dlog_print(0,6,DAT_45ead2b4 + 0x45eacec0,DAT_45ead2b8 + 0x45eacebc,
                     DAT_45ead2ac + 0x45eacee1,DAT_45ead2b0 + 0x45eacf54,0xbf6,iVar4);
      }
      goto LAB_45eacec2;
    }
LAB_45eacec8:
    local_30 = 0;
    iVar4 = bundle_get_str(param_2,DAT_45ead2bc + 0x45eaced4,&local_30);
    if (iVar4 == 0) {
      iVar1 = g_strcmp0(local_30,DAT_45ead2e4 + 0x45eacf9a);
      iVar4 = DAT_45ead2e8;
      if (iVar1 == 0) {
        iVar7 = DAT_45ead2f0 + 0x45eacfba;
        iVar1 = DAT_45ead2ec + 0x45eacff5;
        __dlog_print(0,3,iVar7,DAT_45ead2f4 + 0x45eacfc4,iVar1,DAT_45ead2e8 + 0x45ead06a,0xc08);
        __dlog_print(0,4,iVar7,DAT_45ead2f8 + 0x45eacfe0,iVar1,iVar4 + 0x45ead006,0xc77);
        goto LAB_45eacf36;
      }
    }
    else if (iVar4 != -0x7e) {
      __dlog_print(0,6,DAT_45ead2cc + 0x45eacf06,DAT_45ead2c8 + 0x45eacf04,DAT_45ead2c4 + 0x45eacf31
                   ,DAT_45ead2c0 + 0x45eacfa6,0xc0d,iVar4);
    }
  }
  else {
    iVar4 = aul_svc_set_operation(param_2,param_1);
    if (iVar4 != 0) {
      __dlog_print(0,6,DAT_45ead30c + 0x45ead012,DAT_45ead308 + 0x45ead010,DAT_45ead304 + 0x45ead03f
                   ,DAT_45ead300 + 0x45ead050,0xc5e);
    }
    uVar2 = aul_svc_run_service_for_uid(param_2,0,0,0,0x1389);
    if (!bVar6) goto LAB_45eace06;
LAB_45eacf74:
    bundle_free(param_2);
    iVar4 = g_strcmp0(param_1,DAT_45ead2e0 + 0x45eacf82);
    if (iVar4 == 0) {
      param_2 = 0;
LAB_45eacec2:
      local_30 = 0;
      if (param_2 != 0) goto LAB_45eacec8;
    }
  }
  uVar3 = util_get_time_in_millis();
  iVar1 = DAT_45ead2d4;
  iVar4 = DAT_45ead2d0;
  *(undefined4 *)(param_3 + 0x28) = uVar3;
  __dlog_print(0,3,DAT_45ead2dc + 0x45eacf34,DAT_45ead2d8 + 0x45eacf2e,iVar1 + 0x45eacf5b,
               iVar4 + 0x45eacf6c,0xc7c,uVar3);
LAB_45eacf36:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

