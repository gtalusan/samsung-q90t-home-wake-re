/* libapp-context-manager-common.so : handle_key_launcher_event@45e9b784 */

void handle_key_launcher_event(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  __dlog_print(0,3,DAT_45e9b7e4 + 0x45e9b7b4,DAT_45e9b7e0 + 0x45e9b7b2,DAT_45e9b7d8 + 0x45e9b7d1,
               DAT_45e9b7dc + 0x45e9bbf0,0x66c);
  if (param_2 != (undefined4 *)0x0) {
    if ((param_2[6] != 0) && (iVar1 = context_check_mask(param_2[6],param_3), iVar1 == 0)) {
      return;
    }
    aul_launch_app(*param_2,param_2[7]);
  }
  return;
}

