/* libapp-context-manager-common.so : util_get_syspopup_list@45e9d9f0 */

void util_get_syspopup_list(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_45e9da54 + 0x45e9d9fa + DAT_45e9da58);
  local_14 = *piVar2;
  local_18 = 0;
  iVar1 = syspopup_foreach_info(DAT_45e9da5c + 0x45e9da0a,&local_18);
  if (iVar1 != 0) {
    __dlog_print(0,6,DAT_45e9da6c + 0x45e9da3c,DAT_45e9da68 + 0x45e9da3a,DAT_45e9da64 + 0x45e9da67,
                 DAT_45e9da60 + 0x45e9e16c,0x2b2);
  }
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_18);
  }
  return;
}

