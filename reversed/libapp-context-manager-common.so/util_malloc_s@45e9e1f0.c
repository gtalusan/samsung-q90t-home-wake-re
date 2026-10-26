/* libapp-context-manager-common.so : util_malloc_s@45e9e1f0 */

int util_malloc_s(void)

{
  int iVar1;
  
  iVar1 = g_malloc0();
  if (iVar1 == 0) {
    util_handle_error(DAT_45e9e20c + 0x45e9e206);
    return 0;
  }
  return iVar1;
}

