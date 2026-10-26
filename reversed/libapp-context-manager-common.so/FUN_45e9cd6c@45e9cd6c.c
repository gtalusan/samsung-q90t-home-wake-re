/* libapp-context-manager-common.so : FUN_45e9cd6c@45e9cd6c */

void FUN_45e9cd6c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_45e9ce54 + 0x45e9cd76 + DAT_45e9ce58);
  iVar4 = DAT_45e9ce5c + 0x45e9cd82;
  local_20 = (void *)0x0;
  local_1c = *piVar3;
  iVar1 = context_system_property_check(iVar4);
  if (iVar1 != 0) {
    uVar2 = device_power_get_state();
    if ((uVar2 < 2) && (iVar1 = g_strcmp0(param_1,DAT_45e9ce78 + 0x45e9cdfe), iVar1 != 0)) {
      iVar1 = util_get_metadata_byappid(param_1,iVar4,&local_20);
      if (iVar1 < 0) {
        local_20 = (void *)g_strdup(DAT_45e9ce8c + 0x45e9ce48);
      }
    }
    else {
      local_20 = (void *)g_strdup(DAT_45e9ce60 + 0x45e9cdac);
    }
    iVar4 = DAT_45e9ce64 + 0x45e9cdb8;
    iVar1 = vconf_set_str(iVar4,local_20);
    if (iVar1 < 0) {
      __dlog_print(0,6,DAT_45e9ce88 + 0x45e9ce3e,DAT_45e9ce84 + 0x45e9ce3c,DAT_45e9ce80 + 0x45e9ce67
                   ,DAT_45e9ce7c + 0x45e9d49c,0x123,iVar4);
    }
    else {
      __dlog_print(0,4,DAT_45e9ce74 + 0x45e9cdec,DAT_45e9ce70 + 0x45e9cde4,DAT_45e9ce68 + 0x45e9ce0f
                   ,DAT_45e9ce6c + 0x45e9d450,0x125,iVar4,local_20);
    }
    free(local_20);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

