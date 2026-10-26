/* tvctx-manager : util_get_network_connection@00020884 */

void util_get_network_connection(void)

{
  int iVar1;
  undefined4 uVar2;
  char local_1d;
  int local_1c;
  
  local_1d = '\0';
  local_1c = __stack_chk_guard;
  iVar1 = connection_profile_check_default_gateway(&local_1d);
  if ((iVar1 == 0) && (local_1d != '\0')) {
    uVar2 = 1;
  }
  else {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ret %d, validation %d",DAT_000208f0,DAT_000208f4,
                 0x1e3,iVar1,local_1d);
    uVar2 = 0;
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

