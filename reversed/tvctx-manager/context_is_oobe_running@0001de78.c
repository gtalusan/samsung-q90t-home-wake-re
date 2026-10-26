/* tvctx-manager : context_is_oobe_running@0001de78 */

void context_is_oobe_running(undefined4 param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  local_20 = 0;
  iVar1 = context_find_running_task_byappid("org.tizen.wizard",param_1);
  if ((iVar1 != 0) && (iVar1 = vconf_get_int("db/boot/need_setup_wizard",&local_20), iVar1 != 0)) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get %s",DAT_0001defc,DAT_0001def8,900,
                 "db/boot/need_setup_wizard");
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_20 == 1);
  }
  return;
}

