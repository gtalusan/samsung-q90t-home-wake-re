/* libapp-context-manager-common.so : context_handle_task_event@45e9be44 */

void context_handle_task_event(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  puVar7 = *(undefined4 **)(DAT_45e9bf44 + 0x45e9be56 + DAT_45e9bf48);
  puVar5 = (undefined4 *)*puVar7;
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45e9bf68 + 0x45e9bf16,DAT_45e9bf64 + 0x45e9bf14,
                 &UNK_45e9bf43 + DAT_45e9bf60,DAT_45e9bf5c + 0x45e9c3b0,0x150);
  }
  else if (*(int *)(param_1 + 4) == 0) {
    __dlog_print(0,6,DAT_45e9bf78 + 0x45e9bf3e,DAT_45e9bf74 + 0x45e9bf3c,DAT_45e9bf70 + 0x45e9bf69,
                 DAT_45e9bf6c + 0x45e9c3d6,0x155);
  }
  else if (puVar5 != (undefined4 *)0x0) {
    iVar9 = DAT_45e9bf4c + 0x45e9c32c;
    iVar3 = DAT_45e9bf54 + 0x45e9be84;
    iVar8 = DAT_45e9bf50 + 0x45e9bebd;
    iVar4 = DAT_45e9bf58 + 0x45e9be8e;
    do {
      while( true ) {
        piVar6 = (int *)*puVar5;
        puVar5 = (undefined4 *)puVar5[1];
        if (((piVar6 != (int *)0x0) && (piVar6[1] == param_2)) &&
           (iVar1 = g_strcmp0(*(undefined4 *)(param_1 + 4),*piVar6), iVar1 == 0)) break;
        if (puVar5 == (undefined4 *)0x0) {
          return;
        }
      }
      __dlog_print(0,4,iVar4,iVar3,iVar8,iVar9,0x161);
      context_unset(piVar6[2],param_3);
      uVar2 = g_list_remove(*puVar7,piVar6);
      *puVar7 = uVar2;
      if (*piVar6 != 0) {
        g_free(*piVar6);
      }
      g_free(piVar6);
    } while (puVar5 != (undefined4 *)0x0);
  }
  return;
}

