/* deviced : watch_poweroff_callback@00022e1c */

undefined4 watch_poweroff_callback(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  __dlog_print(2,4,DAT_00023048 + 0x22e64,DAT_0002304c + 0x22e6c,DAT_00023044 + 0x22e74,
               DAT_00023040 + 0x22e54,0x574,param_2);
  puVar3 = *(undefined4 **)(DAT_00023050 + 0x22e80);
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = (int *)*puVar3;
    puVar3 = (undefined4 *)puVar3[1];
    if (piVar4 != (int *)0x0) {
      puVar5 = (undefined4 *)(DAT_00023054 + 0x22ea4);
      do {
        if (param_2 == *piVar4) {
          uVar2 = g_list_remove(*puVar5,piVar4);
          *puVar5 = uVar2;
          free(piVar4);
        }
        if (puVar3 == (undefined4 *)0x0) break;
        piVar4 = (int *)*puVar3;
        puVar3 = (undefined4 *)puVar3[1];
      } while (piVar4 != (int *)0x0);
    }
  }
  iVar1 = DAT_0002305c;
  puVar3 = *(undefined4 **)(DAT_00023058 + 0x22ed8);
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = (int *)*puVar3;
    puVar3 = (undefined4 *)puVar3[1];
    while (piVar4 != (int *)0x0) {
      if (param_2 == *piVar4) {
        uVar2 = g_list_remove(*(undefined4 *)(iVar1 + 0x22efc),piVar4);
        *(undefined4 *)(iVar1 + 0x22efc) = uVar2;
        free(piVar4);
      }
      if (puVar3 == (undefined4 *)0x0) break;
      piVar4 = (int *)*puVar3;
      puVar3 = (undefined4 *)puVar3[1];
    }
  }
  iVar1 = DAT_00023064;
  puVar3 = *(undefined4 **)(DAT_00023060 + 0x22f30);
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = (int *)*puVar3;
    puVar3 = (undefined4 *)puVar3[1];
    while (piVar4 != (int *)0x0) {
      if (param_2 == *piVar4) {
        uVar2 = g_list_remove(*(undefined4 *)(iVar1 + 0x22f54),piVar4);
        *(undefined4 *)(iVar1 + 0x22f54) = uVar2;
        free(piVar4);
      }
      if (puVar3 == (undefined4 *)0x0) break;
      piVar4 = (int *)*puVar3;
      puVar3 = (undefined4 *)puVar3[1];
    }
  }
  iVar1 = DAT_0002306c;
  puVar3 = *(undefined4 **)(DAT_00023068 + 0x22f88);
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = (int *)*puVar3;
    puVar3 = (undefined4 *)puVar3[1];
    while (piVar4 != (int *)0x0) {
      if (param_2 == *piVar4) {
        uVar2 = g_list_remove(*(undefined4 *)(iVar1 + 0x22fac),piVar4);
        *(undefined4 *)(iVar1 + 0x22fac) = uVar2;
        free(piVar4);
      }
      if (puVar3 == (undefined4 *)0x0) {
        return 0;
      }
      piVar4 = (int *)*puVar3;
      puVar3 = (undefined4 *)puVar3[1];
    }
  }
  return 0;
}

