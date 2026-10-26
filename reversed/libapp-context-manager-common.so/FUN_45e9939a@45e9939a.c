/* libapp-context-manager-common.so : FUN_45e9939a@45e9939a */

void FUN_45e9939a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = g_str_has_prefix(param_1,DAT_45e993e8 + 0x45e993a6);
  if (iVar1 == 1) {
    __dlog_print(0,3,DAT_45e993f8 + 0x45e993dc,DAT_45e993f4 + 0x45e993da,DAT_45e993f0 + 0x45e99407,
                 DAT_45e993ec + 0x45e9943c,0x4c5,param_1);
    bundle_del(param_3,param_1);
  }
  return;
}

