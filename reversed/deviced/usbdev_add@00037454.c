/* deviced : usbdev_add@00037454 */

void usbdev_add(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *__s2;
  undefined4 *puVar6;
  
  iVar1 = DAT_00037530;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  g_mutex_lock(DAT_00037530 + 0x37470);
  puVar6 = *(undefined4 **)(iVar1 + 0x37478);
  if (puVar6 != (undefined4 *)0x0) {
    __s2 = (char *)*param_1;
    puVar4 = puVar6;
    do {
      puVar5 = (undefined4 *)*puVar4;
      iVar2 = strcmp((char *)*puVar5,__s2);
      iVar1 = DAT_00037534;
      if (iVar2 == 0) {
        free_usbdev(puVar5);
        uVar3 = g_list_delete_link(puVar6,puVar4);
        *(undefined4 *)(iVar1 + 0x374d4) = uVar3;
        uVar3 = g_list_prepend(uVar3,param_1);
        *(undefined4 *)(iVar1 + 0x374d4) = uVar3;
        goto LAB_000374dc;
      }
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
  }
  uVar3 = g_list_prepend(puVar6,param_1);
  *(undefined4 *)(DAT_0003753c + 0x37510) = uVar3;
  uVar3 = clone_usbdev(param_1);
  g_idle_add_full(200,DAT_00037544 + 0x37524,uVar3,DAT_00037540 + 0x37520);
LAB_000374dc:
  g_mutex_unlock(DAT_00037538 + 0x374e8);
  return;
}

