/* libapp-context-manager-common.so : window_handler_dump@45ea82d0 */

void window_handler_dump(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [24];
  int local_2c;
  
  iVar1 = DAT_45ea83b4;
  piVar3 = *(int **)(DAT_45ea839c + 0x45ea82e0 + DAT_45ea83a0);
  iVar5 = DAT_45ea83a8 + 0x45ea833f;
  local_2c = *piVar3;
  iVar6 = DAT_45ea83ac + 0x45ea8462;
  iVar7 = DAT_45ea83b0 + 0x45ea8316;
  g_hash_table_iter_init(auStack_44,*(undefined4 *)(DAT_45ea83a4 + 0x45ea833c));
  while (iVar2 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c), iVar2 != 0) {
    while (iVar2 = local_4c, puVar4 = *(undefined4 **)(local_4c + 0x10), puVar4 != (undefined4 *)0x0
          ) {
      do {
        __dlog_print(0,3,iVar1 + 0x45ea8322,iVar7,iVar5,iVar6,0x5f,*(undefined4 *)(iVar2 + 4),
                     *(undefined4 *)(iVar2 + 8),((undefined4 *)*puVar4)[1],*(undefined4 *)*puVar4);
        puVar4 = (undefined4 *)puVar4[1];
      } while (puVar4 != (undefined4 *)0x0);
      iVar2 = g_hash_table_iter_next(auStack_44,auStack_48,&local_4c);
      if (iVar2 == 0) goto LAB_45ea8384;
    }
  }
LAB_45ea8384:
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

