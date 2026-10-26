/* libapp-context-manager-common.so : FUN_45ea2164@45ea2164 */

int FUN_45ea2164(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = context_check_mask(0x20000480,param_3);
  if (iVar1 == 0 || param_2 != 0) {
    task_mgr_pause_partial_app(param_3);
    iVar1 = syspopup_launch_direct(DAT_45ea2238 + 0x45ea219e,param_1);
    if (iVar1 < 0) {
      __dlog_print(0,6,DAT_45ea2258 + 0x45ea21fe,DAT_45ea2254 + 0x45ea21fc,DAT_45ea2250 + 0x45ea2227
                   ,DAT_45ea224c + 0x45ea2cb0,0x8ad,iVar1);
      return iVar1;
    }
    __dlog_print(0,4,DAT_45ea2248 + 0x45ea21cc,DAT_45ea2244 + 0x45ea21ca,DAT_45ea2240 + 0x45ea21f5,
                 DAT_45ea223c + 0x45ea2c7e,0x8af,iVar1);
  }
  else {
    iVar1 = -3;
    __dlog_print(0,5,DAT_45ea2268 + 0x45ea2232,DAT_45ea2264 + 0x45ea2230,DAT_45ea2260 + 0x45ea2259,
                 DAT_45ea225c + 0x45ea2ce2,0x8a5);
  }
  return iVar1;
}

