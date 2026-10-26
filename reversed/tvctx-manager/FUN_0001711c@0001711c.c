/* tvctx-manager : FUN_0001711c@0001711c */

void FUN_0001711c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > null info",DAT_0001721c,DAT_00017218,0xe0);
    return;
  }
  g_free(param_2[1]);
  g_free(param_2[2]);
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  param_2[2] = 0;
  iVar1 = vconf_set_int(param_2[7],0xffffffff);
  if (iVar1 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set %s",DAT_0001721c,DAT_00017218,0xec,
                 param_2[7]);
  }
  iVar1 = vconf_set_str(param_2[5],"");
  if (iVar1 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set %s",DAT_0001721c,DAT_00017218,0xee,
                 param_2[5]);
  }
  iVar1 = vconf_set_str(param_2[6],"");
  if (iVar1 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set %s",DAT_0001721c,DAT_00017218,0xf0,
                 param_2[6]);
  }
  return;
}

