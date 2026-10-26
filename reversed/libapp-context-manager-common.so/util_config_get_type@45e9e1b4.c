/* libapp-context-manager-common.so : util_config_get_type@45e9e1b4 */

undefined4 util_config_get_type(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)config_get_val(param_1,0xffffffff);
  return *puVar1;
}

