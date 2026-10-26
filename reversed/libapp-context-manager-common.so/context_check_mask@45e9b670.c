/* libapp-context-manager-common.so : context_check_mask@45e9b670 */

bool context_check_mask(uint param_1,int param_2)

{
  return (param_1 & *(uint *)(param_2 + 0x3c)) != 0;
}

