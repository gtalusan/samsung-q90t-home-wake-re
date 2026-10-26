/* libapp-context-manager-common.so : FUN_45ea5104@45ea5104 */

void FUN_45ea5104(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  puVar2 = (undefined4 *)g_list_copy(*(undefined4 *)(DAT_45ea51ec + 0x45ea53aa));
  iVar1 = DAT_45ea51fc;
  if (puVar2 != (undefined4 *)0x0) {
    iVar10 = DAT_45ea51f0 + 0x45ea5f1e;
    iVar11 = DAT_45ea51f8 + 0x45ea513c;
    iVar6 = DAT_45ea51f4 + 0x45ea5175;
    puVar8 = puVar2;
    do {
      while( true ) {
        piVar7 = (int *)*puVar8;
        puVar8 = (undefined4 *)puVar8[1];
        if (piVar7 != (int *)0x0) break;
LAB_45ea519c:
        if (puVar8 == (undefined4 *)0x0) goto LAB_45ea51a0;
      }
      iVar9 = piVar7[4];
      iVar3 = util_get_time_in_millis();
      iVar5 = DAT_45ea5200;
      if (iVar9 + 2000 < iVar3) {
        __dlog_print(0,4,DAT_45ea5204 + 0x45ea5160,iVar11,iVar6,iVar10,0x871,
                     *(undefined4 *)(*piVar7 + 4));
        uVar4 = g_list_remove(*(undefined4 *)((int)&UINT_45ea53f4 + iVar5 + 2),piVar7);
        *(undefined4 *)((int)&UINT_45ea53f4 + iVar5 + 2) = uVar4;
        task_unref(*piVar7);
        g_free(piVar7);
        goto LAB_45ea519c;
      }
      iVar5 = g_strcmp0(*(undefined4 *)(param_1 + 4),piVar7[1],DAT_45ea5204 + 0x45ea5160,iVar11);
      if (iVar5 != 0) goto LAB_45ea519c;
      task_mgr_task_launch(*piVar7,piVar7[3],piVar7[2],param_2);
      uVar4 = g_list_remove(*(undefined4 *)
                             ((int)&switchD_45ea53d0::switchdataD_45ea53d4 + iVar1 + 2),piVar7);
      *(undefined4 *)((int)&switchD_45ea53d0::switchdataD_45ea53d4 + iVar1 + 2) = uVar4;
      task_unref(*piVar7);
      g_free(piVar7);
    } while (puVar8 != (undefined4 *)0x0);
LAB_45ea51a0:
    g_list_free(puVar2);
  }
  return;
}

