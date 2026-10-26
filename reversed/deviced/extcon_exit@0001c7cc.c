/* deviced : extcon_exit@0001c7cc */

void extcon_exit(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = DAT_0001c8b8;
  unregister_kernel_uevent_control(DAT_0001c8b8 + 0x1c7e8);
  unregister_kernel_uevent_control(iVar3 + 0x1c7f8);
  puVar1 = *(undefined4 **)(DAT_0001c8bc + 0x1c800);
  if ((puVar1 != (undefined4 *)0x0) && (puVar2 = (undefined4 *)*puVar1, puVar2 != (undefined4 *)0x0)
     ) {
    iVar5 = DAT_0001c8c4 + 0x1c828;
    iVar3 = DAT_0001c8c0 + 0x1c859;
    iVar4 = DAT_0001c8c8 + 0x1c830;
    do {
      __dlog_print(2,4,iVar4,iVar5,iVar3,DAT_0001c8cc + 0x1c85c,0x2cb,*puVar2);
      if ((code *)puVar2[3] != (code *)0x0) {
        (*(code *)puVar2[3])(param_1);
      }
      puVar1 = (undefined4 *)puVar1[1];
    } while ((puVar1 != (undefined4 *)0x0) &&
            (puVar2 = (undefined4 *)*puVar1, puVar2 != (undefined4 *)0x0));
  }
  iVar3 = DAT_0001c8d0;
  if (*(int *)(DAT_0001c8d0 + 0x1c8a0) != 0) {
    ecore_timer_del();
    *(undefined4 *)(iVar3 + 0x1c8a0) = 0;
  }
  return;
}

