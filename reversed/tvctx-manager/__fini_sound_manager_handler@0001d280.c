/* tvctx-manager : __fini_sound_manager_handler@0001d280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __fini_sound_manager_handler() */

void __fini_sound_manager_handler(void)

{
  sound_manager_unset_tv_master_mute_changed_cb();
  sound_manager_unset_speaker_changed_cb();
  return;
}

