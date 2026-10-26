/* tvctx-manager : FUN_00022500@00022500 */

void FUN_00022500(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_30;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  DAT_0003b5a4 = (undefined4 *)util_malloc_s(0x28);
  init_config();
  uVar2 = DAT_000229bc;
  iVar1 = DAT_000229b8;
  util_init_system_info_product(DAT_0003b5a4[9]);
  traceBegin(0x40,0,"CM:\"init_config done\"");
  traceEnd(0x40,0);
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] init_config done",uVar2,iVar1,0x8d);
  iVar4 = load_config(param_2,DAT_0003b5a4);
  if (iVar4 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > load_config fail.",uVar2,iVar1,0x90);
    uVar6 = 0;
    goto LAB_000228ce;
  }
  traceBegin(0x40,0,"CM:\"load_config done\"");
  traceEnd(0x40,0);
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] load_config done",uVar2,iVar1,0x94);
  pcVar5 = setlocale(6,"");
  if (pcVar5 == (char *)0x0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > setlocale failed",uVar2,iVar1 + 0x14,0x7a);
  }
  iVar8 = iVar1 + 0x14;
  uVar6 = tzplatform_mkpath(5,"/tvctx-manager/res/locale");
  pcVar5 = "tvctx-manager";
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s, %s",uVar2,iVar8,0x7c,"tvctx-manager",uVar6);
  uVar7 = tzplatform_mkpath(5,"/tvctx-manager/res/locale");
  iVar4 = bindtextdomain("tvctx-manager",uVar7);
  if (iVar4 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bindtextdomain failed",uVar2,iVar8,0x80,pcVar5,
                 uVar6);
  }
  iVar4 = textdomain("tvctx-manager");
  if (iVar4 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > textdomain failed",uVar2,iVar8,0x84);
  }
  uVar6 = g_hash_table_ref(DAT_0003b5a4[1]);
  puVar3 = DAT_0003b5a4;
  param_1[7] = uVar6;
  *param_1 = *puVar3;
  param_1[1] = puVar3[2];
  param_1[2] = puVar3[3];
  param_1[3] = puVar3[4];
  param_1[4] = puVar3[5];
  param_1[5] = puVar3[6];
  param_1[9] = puVar3[9];
  uVar6 = g_hash_table_ref(puVar3[7]);
  param_1[0xf] = 0;
  param_1[6] = uVar6;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  iVar4 = window_util_init();
  if (iVar4 == 0) {
    traceBegin(0x40,0,"CM:\"window_util_init done\"");
    traceEnd(0x40,0);
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] window_util_init done",uVar2,iVar1,
                 0xae);
    window_handler_init(param_1);
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] window_handler_init done",uVar2,
                 iVar1,0xb1);
    traceBegin(0x40,0,"CM:\"window_handler_init done\"");
    traceEnd(0x40,0);
    iVar4 = context_init_product(param_1);
    if (iVar4 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > context_product_init fail.",uVar2,iVar1,0xb5);
      uVar6 = 0;
      goto LAB_000228ce;
    }
    traceBegin(0x40,0,"CM:\"context_product_init done\"");
    traceEnd(0x40,0);
    iVar4 = task_mgr_init(param_1);
    if (iVar4 == 0) {
      traceBegin(0x40,0,"CM:\"task_mgr_init done\"");
      traceEnd(0x40,0);
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] task_mgr_init done",uVar2,iVar1,
                   0xbf);
      local_30 = 1;
      DAT_0003b57c = util_vconf_watch_spec_create("db/boot/need_setup_wizard",1,0,&local_30);
      if (DAT_0003b57c != 0) {
        util_vconf_watch(DAT_0003b57c,1,0x1c139,param_1);
      }
      DAT_0003b57c = 0;
      traceBegin(0x40,0,"CM:\"block_key done\"");
      traceEnd(0x40,0);
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] block_key done",uVar2,iVar1,0xc4)
      ;
      key_handler_init_product(param_1);
      traceBegin(0x40,0,"CM:\"key_handler_init_product done\"");
      traceEnd(0x40,0);
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] key_handler_init_product done",
                   uVar2,iVar1,200);
      dbus_handler_init(param_1);
      traceBegin(0x40,0,"CM:\"dbus_handler_init done\"");
      traceEnd(0x40,0);
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] dbus_handler_init done",uVar2,
                   iVar1,0xcc);
      load_key_launcher_config(param_3);
      if ((DAT_0003b5b4 == '\0') && (iVar4 = device_power_get_state(), iVar4 == 2)) {
        context_handle_micom_power_key_count();
      }
      uVar6 = 1;
      DAT_0003b5b4 = '\x01';
      DAT_0003b5a8 = param_1;
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] setup_appctx_mgr done",uVar2,
                   iVar1,0xd8);
      goto LAB_000228ce;
    }
    pcVar5 = "%s: %s(%d) > task_mgr_init fail.";
    uVar7 = 0xbb;
  }
  else {
    pcVar5 = "%s: %s(%d) > window_util_init fail.";
    uVar7 = 0xaa;
  }
  uVar6 = 0;
  __dlog_print(0,6,"tvctx-manager",pcVar5,uVar2,iVar1,uVar7);
LAB_000228ce:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

