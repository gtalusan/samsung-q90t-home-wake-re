/* libapp-context-manager-common.so : handle_listen@45e99e98 */

void handle_listen(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0x30) = param_2;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)param_1[1]) {
    (*(code *)*param_1)(param_2,param_3);
  }
  *(undefined4 *)(param_3 + 0x30) = 0;
  return;
}

