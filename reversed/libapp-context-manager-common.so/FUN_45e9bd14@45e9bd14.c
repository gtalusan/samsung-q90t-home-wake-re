/* libapp-context-manager-common.so : FUN_45e9bd14@45e9bd14 */

void FUN_45e9bd14(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = context_to_string(*param_2);
  __dlog_print(0,3,DAT_45e9bd74 + 0x45e9bd4c,DAT_45e9bd70 + 0x45e9bd48,DAT_45e9bd6c + 0x45e9bd71,
               DAT_45e9bd68 + 0x45e9c1aa,0xb2,uVar1,param_1);
  if (param_1 == 0) {
    context_unset();
    return;
  }
  context_set(*param_2,param_2[1]);
  return;
}

