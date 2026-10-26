/* deviced : usbdev_remove@00037380 */

void usbdev_remove(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_00037440;
  if (param_1 == (char *)0x0) {
    return;
  }
  g_mutex_lock(DAT_00037440 + 0x3739c);
  puVar4 = *(undefined4 **)(iVar1 + 0x373a4);
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      g_mutex_unlock(DAT_00037450 + 0x37438);
      return;
    }
    puVar5 = (undefined4 *)*puVar4;
    iVar2 = strcmp((char *)*puVar5,param_1);
    iVar1 = DAT_00037444;
    if (iVar2 == 0) break;
    puVar4 = (undefined4 *)puVar4[1];
  }
  uVar3 = clone_usbdev(puVar5);
  g_idle_add_full(200,DAT_0003744c + 0x373f8,uVar3,DAT_00037448 + 0x373f4);
  free_usbdev(puVar5);
  *puVar4 = 0;
  uVar3 = g_list_delete_link(*(undefined4 *)(iVar1 + 0x373f8),puVar4);
  *(undefined4 *)(iVar1 + 0x373f8) = uVar3;
  g_mutex_unlock(iVar1 + 0x373f0);
  return;
}

