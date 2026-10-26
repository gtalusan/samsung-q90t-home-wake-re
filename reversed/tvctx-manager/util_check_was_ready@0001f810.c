/* tvctx-manager : util_check_was_ready@0001f810 */

bool util_check_was_ready(void)

{
  int iVar1;
  
  iVar1 = g_file_test("/run/was_ready",0x10);
  return iVar1 != 0;
}

