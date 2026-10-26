/* tvctx-manager : FUN_0001c138@0001c138 */

void FUN_0001c138(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_28;
  int local_24;
  
  local_24 = __stack_chk_guard;
  util_vconf_unwatch(DAT_0003b57c);
  util_vconf_watch_spec_free(DAT_0003b57c);
  uVar2 = DAT_0001c230;
  uVar1 = DAT_0001c22c;
  DAT_0003b57c = 0;
  local_28 = 1;
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > wrong param",DAT_0001c230,DAT_0001c22c,0x5a);
  }
  if (param_1 == 0) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > Normal Boot Mode",uVar2,uVar1,0x5e);
    DAT_0003b580 = util_vconf_watch_spec_create("memory/system/boot_done",1,0,&local_28);
    util_vconf_watch(DAT_0003b580,1,0x1c375,param_2);
  }
  else {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > On PNP, Start Context Manager",uVar2,uVar1,100);
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

