/* tvctx-manager : __init_sound_manager_handler@0001d290 */

/* __init_sound_manager_handler(manager_ctxt*) */

void __init_sound_manager_handler(manager_ctxt *param_1)

{
  int iVar1;
  char local_1d;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  local_1d = '\0';
  iVar1 = sound_manager_set_tv_master_mute_changed_cb(0x1af8d,param_1);
  if (iVar1 < 0) {
    __dlog_print(0,6,"tvctx-manager",
                 "%s: %s(%d) > failed to set change callback for master mute change",DAT_0001d380,
                 DAT_0001d37c,0xa2f);
  }
  iVar1 = sound_manager_get_tv_master_mute(&local_1d);
  if (iVar1 < 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get mute: %d",DAT_0001d380,DAT_0001d37c
                 ,0xa33,iVar1);
  }
  else if ((iVar1 == 0) && (local_1d != '\0')) {
    context_set(0x10000000,param_1);
  }
  iVar1 = sound_manager_set_speaker_changed_cb(0x1aff5,param_1);
  if (iVar1 < 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set change callback for speaker change"
                 ,DAT_0001d380,DAT_0001d37c,0xa39);
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

