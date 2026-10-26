/* libapp-context-manager-common.so : FUN_45ea5e88@45ea5e88 */

void FUN_45ea5e88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = json_node_get_string(param_3);
  __dlog_print(0,3,DAT_45ea5ee0 + 0x45ea5ec0,DAT_45ea5edc + 0x45ea5ebc,DAT_45ea5ed8 + 0x45ea5ee7,
               DAT_45ea5ed4 + 0x45ea6d30,0x34d,uVar1);
  uVar1 = selector_append(*param_4,uVar1);
  *param_4 = uVar1;
  return;
}

