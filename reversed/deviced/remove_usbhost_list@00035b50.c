/* deviced : remove_usbhost_list@00035b50 */

undefined4 remove_usbhost_list(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *__s1;
  
  iVar1 = DAT_00035d20;
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)((int)&DAT_00035d18 + DAT_00035d54),(char *)(DAT_00035d50 + 0x35d10),0x146
                  ,(char *)(DAT_00035d4c + 0x35dac));
  }
  iVar4 = DAT_00035d20 + 0x35b98;
  __dlog_print(0,3,DAT_00035d28 + 0x35bb0,DAT_00035d24 + 0x35ba8,DAT_00035d1c + 0x35bba,
               DAT_00035d18 + 0x35c30,0x147,param_1);
  g_mutex_lock(iVar4);
  puVar3 = *(undefined4 **)(iVar1 + 0x35ba0);
  if (puVar3 != (undefined4 *)0x0) {
    __s1 = (char *)*puVar3;
    puVar3 = (undefined4 *)puVar3[1];
    while (__s1 != (char *)0x0) {
      iVar4 = strncmp(__s1,param_1,0x1000);
      iVar1 = DAT_00035d40;
      if (iVar4 == 0) {
        iVar4 = DAT_00035d40 + 0x35c80;
        g_mutex_unlock(iVar4);
        g_mutex_lock(iVar4);
        uVar2 = g_list_remove(*(undefined4 *)(iVar1 + 0x35c88),__s1);
        *(undefined4 *)(iVar1 + 0x35c88) = uVar2;
        uVar2 = clone_usbhost(__s1);
        g_idle_add_full(200,DAT_00035d48 + 0x35cb8,uVar2,DAT_00035d44 + 0x35cb4);
        g_mutex_unlock(iVar4);
        free(*(void **)(__s1 + 0x1014));
        free(*(void **)(__s1 + 0x1018));
        free(*(void **)(__s1 + 0x101c));
        free(__s1);
        return 0;
      }
      if (puVar3 == (undefined4 *)0x0) break;
      __s1 = (char *)*puVar3;
      puVar3 = (undefined4 *)puVar3[1];
    }
  }
  g_mutex_unlock(DAT_00035d2c + 0x35c1c);
  __dlog_print(2,4,DAT_00035d3c + 0x35c64,DAT_00035d38 + 0x35c60,DAT_00035d34 + 0x35c6e,
               DAT_00035d30 + 0x35ce4,0x155,param_1);
  return 0xffffffed;
}

