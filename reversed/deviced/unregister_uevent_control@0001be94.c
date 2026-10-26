/* deviced : unregister_uevent_control@0001be94 */

void unregister_uevent_control(undefined4 *param_1)

{
  size_t __n;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *__s;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(DAT_0001bf34 + 0x1beb0);
  if (puVar5 == (undefined4 *)0x0) {
    return;
  }
  puVar4 = (undefined4 *)*puVar5;
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  __s = (char *)*param_1;
  __n = strlen(__s);
  puVar3 = puVar5;
  while( true ) {
    iVar1 = strncmp((char *)*puVar4,__s,__n);
    if (iVar1 == 0) {
      if (puVar4[1] == param_1[1]) {
        uVar2 = g_list_remove(puVar5,puVar4);
        *(undefined4 *)(register_kernel_uevent_control + DAT_0001bf38) = uVar2;
        return;
      }
    }
    puVar3 = (undefined4 *)puVar3[1];
    if (puVar3 == (undefined4 *)0x0) break;
    puVar4 = (undefined4 *)*puVar3;
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
  }
  return;
}

