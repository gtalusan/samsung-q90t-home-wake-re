/* libapp-context-manager-common.so : FUN_45e98f04@45e98f04 */

undefined4 FUN_45e98f04(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *param_3;
  uVar1 = g_strdup(param_2);
  uVar1 = g_list_append(uVar2,uVar1);
  *param_3 = uVar1;
  return 0;
}

