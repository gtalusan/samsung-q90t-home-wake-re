/* libapp-context-manager-common.so : util_config_get_str@45e9e1d4 */

undefined4 util_config_get_str(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = config_get_val(param_1,4);
  return *(undefined4 *)(iVar1 + 4);
}

