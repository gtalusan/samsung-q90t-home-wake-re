/* deviced : booting_done@0001b300 */

undefined4 booting_done(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0001b38c;
  if (param_1 == (int *)0x0) {
    return *(undefined4 *)(uevent_kernel_control_start + DAT_0001b3a0);
  }
  iVar2 = *param_1;
  *(int *)(DAT_0001b38c + 0x1b340) = iVar2;
  uVar3 = 0;
  if (iVar2 != 0) {
    __dlog_print(2,4,DAT_0001b39c + 0x1b370,DAT_0001b398 + 0x1b36c,DAT_0001b394 + 0x1b37f,
                 DAT_0001b390 + 0x1b3a8,0x4c);
    uVar3 = *(undefined4 *)(iVar1 + 0x1b340);
  }
  return uVar3;
}

