/* libapp-context-manager-common.so : util_config_get_int@45e9e1c4 */

undefined4 util_config_get_int(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = config_get_val(param_1,1);
  return *(undefined4 *)(iVar1 + 4);
}

