/* tvctx-manager : FUN_0001b60c@0001b60c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b60c(void)

{
  ssize_t sVar1;
  undefined8 local_24;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  local_24 = 0;
  if (0 < DAT_0003b568) {
    local_24 = (ulonglong)
               CONCAT16((char)((uint)ram0x00029c50 >> 0x10),
                        CONCAT24((short)ram0x00029c50,
                                 s_com_samsung_featureconf_appfw_bi_00029c24._40_4_));
    sVar1 = write(DAT_0003b568,&local_24,8);
    if (sVar1 < 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > Failed to write wakeup",DAT_0001b6a8,
                   DAT_0001b6a4,0x696);
    }
    close(DAT_0003b568);
    _DAT_0003b564 = 0;
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

