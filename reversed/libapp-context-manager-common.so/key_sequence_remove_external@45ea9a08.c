/* libapp-context-manager-common.so : key_sequence_remove_external@45ea9a08 */

void key_sequence_remove_external(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [24];
  int local_24;
  
  piVar5 = *(int **)(DAT_45ea9ab0 + 0x45ea9a12 + DAT_45ea9ab8);
  local_24 = *piVar5;
  g_hash_table_iter_init(auStack_3c,*(undefined4 *)(*(int *)(DAT_45ea9ab4 + 0x45ea9a4c) + 0x10));
LAB_45ea9a3c:
  do {
    iVar1 = g_hash_table_iter_next(auStack_3c,auStack_40,&local_44);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
LAB_45ea9a7c:
      if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar2);
      }
      return;
    }
  } while (local_44 == 0);
  iVar3 = *(int *)(local_44 + 4);
  iVar1 = local_44;
  do {
    if (param_1 == iVar3) {
      iVar3 = *(int *)(iVar1 + 0xc);
      if (*(int *)(iVar1 + 8) == 0) {
        iVar4 = 0;
        if (iVar3 != 0) goto LAB_45ea9a70;
LAB_45ea9a94:
        g_hash_table_iter_remove(auStack_3c);
        uVar2 = 0;
      }
      else {
        *(int *)(*(int *)(iVar1 + 8) + 0xc) = iVar3;
        iVar3 = *(int *)(iVar1 + 0xc);
        iVar4 = *(int *)(iVar1 + 8);
        if (iVar3 == 0) {
LAB_45ea9a90:
          if (iVar4 == 0) goto LAB_45ea9a94;
        }
        else {
LAB_45ea9a70:
          *(int *)(iVar3 + 8) = iVar4;
          if (*(int *)(iVar1 + 8) == 0) {
            iVar4 = *(int *)(iVar1 + 0xc);
            goto LAB_45ea9a90;
          }
        }
        g_free();
        uVar2 = 0;
      }
      goto LAB_45ea9a7c;
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) goto LAB_45ea9a3c;
    iVar3 = *(int *)(iVar1 + 4);
  } while( true );
}

