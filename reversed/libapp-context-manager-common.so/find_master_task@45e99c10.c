/* libapp-context-manager-common.so : find_master_task@45e99c10 */

int find_master_task(int *param_1)

{
  int iVar1;
  
  while( true ) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    iVar1 = *param_1;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) break;
    param_1 = (int *)param_1[1];
  }
  return iVar1;
}

