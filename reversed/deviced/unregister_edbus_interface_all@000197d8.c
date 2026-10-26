/* deviced : unregister_edbus_interface_all@000197d8 */

undefined4 unregister_edbus_interface_all(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *__ptr;
  undefined4 *__ptr_00;
  undefined4 *puVar3;
  
  iVar2 = DAT_0001984c;
  puVar3 = *(undefined4 **)(DAT_0001984c + 0x19800);
  if (puVar3 != (undefined4 *)0x0) {
    __ptr_00 = (undefined4 *)*puVar3;
    puVar1 = (undefined4 *)puVar3[1];
    while (__ptr_00 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)g_list_remove(puVar3,__ptr_00);
      __ptr = (void *)*__ptr_00;
      *(undefined4 **)(iVar2 + 0x19800) = puVar3;
      free(__ptr);
      free((void *)__ptr_00[1]);
      free(__ptr_00);
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      __ptr_00 = (undefined4 *)*puVar1;
      puVar1 = (undefined4 *)puVar1[1];
    }
  }
  return 0;
}

