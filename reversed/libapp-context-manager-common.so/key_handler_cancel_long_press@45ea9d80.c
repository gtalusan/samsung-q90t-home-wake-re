/* libapp-context-manager-common.so : key_handler_cancel_long_press@45ea9d80 */

void key_handler_cancel_long_press(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == (int *)0x0) {
    __dlog_print(0,6,DAT_45ea9e48 + 0x45ea9e24,DAT_45ea9e44 + 0x45ea9e22,DAT_45ea9e40 + 0x45ea9e51,
                 DAT_45ea9e3c + 0x45eaa116,0x52);
  }
  else if ((*param_1 != 1) &&
          (piVar1 = (int *)g_hash_table_lookup(*(undefined4 *)(DAT_45ea9e28 + 0x45ea9dfe),param_1[4]
                                              ), piVar1 != (int *)0x0)) {
    iVar6 = DAT_45ea9e34 + 0x45ea9db8;
    iVar4 = (int)&DAT_45eaa0b8 + DAT_45ea9e2c;
    iVar5 = DAT_45ea9e38 + 0x45ea9dbe;
    iVar3 = DAT_45ea9e30 + 0x45ea9df5;
    do {
      while (((iVar2 = *piVar1, iVar2 != 0 && (*(int *)(iVar2 + 0x10) != 0)) &&
             (*(int *)(iVar2 + 0xc) != 0))) {
        __dlog_print(0,4,iVar5,iVar6,iVar3,iVar4,0x61);
        g_source_remove(*(undefined4 *)(iVar2 + 0xc));
        *(undefined4 *)(iVar2 + 0xc) = 0;
        piVar1 = (int *)piVar1[1];
        if (piVar1 == (int *)0x0) {
          return;
        }
      }
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != (int *)0x0);
  }
  return;
}

