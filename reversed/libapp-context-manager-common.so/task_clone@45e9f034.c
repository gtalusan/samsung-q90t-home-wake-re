/* libapp-context-manager-common.so : task_clone@45e9f034 */

void task_clone(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = g_memdup(param_1,0x58);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 1;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  return;
}

