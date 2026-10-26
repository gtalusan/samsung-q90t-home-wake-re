/* tvctx-manager : __init_mls_event_handler@0001d04c */

/* __init_mls_event_handler(manager_ctxt*) */

void __init_mls_event_handler(manager_ctxt *param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  local_20 = 0;
  vconf_notify_key_changed("memory/mls/state",0x198c9,param_1);
  vconf_notify_key_changed("db/mls/mls_focus",0x198c9,param_1);
  iVar1 = vconf_get_int("db/mls/mls_left_screen_id",&DAT_0003b544);
  if (iVar1 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get mls left screen id. set 2",
                 DAT_0001d220,DAT_0001d21c,0xa98);
    DAT_0003b544 = 2;
  }
  iVar1 = vconf_get_int("db/mls/mls_right_screen_id",DAT_0001d218);
  if (iVar1 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get mls right screen id. set 3",
                 DAT_0001d220,DAT_0001d21c,0xa9d);
    DAT_0003b590 = 3;
  }
  iVar1 = vconf_get_int("memory/mls/state",&local_20);
  if (iVar1 == 0) {
    if (local_20 == 1) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > on mls",DAT_0001d220,DAT_0001d21c,0xaa3);
      context_set(0x80000,param_1);
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get mls state",DAT_0001d220,
                 DAT_0001d21c,0xaa7);
  }
  iVar1 = vconf_get_int("db/mls/mls_focus",&local_20);
  if (iVar1 == 0) {
    if (local_20 == DAT_0003b544) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > left screen has focus",DAT_0001d220,
                   DAT_0001d21c,0xaab);
      context_set(0x200000,param_1);
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get mls focus",DAT_0001d220,
                 DAT_0001d21c,0xaaf);
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

