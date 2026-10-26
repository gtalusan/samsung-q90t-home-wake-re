/* libapp-context-manager-common.so : cleanup_config@45ea08b8 */

void cleanup_config(int *param_1)

{
  int *piVar1;
  int iVar2;
  int extraout_r3;
  int iVar3;
  undefined8 unaff_d13;
  undefined8 in_d21;
  undefined8 uVar4;
  
  iVar3 = iRam45ea09d8 + 0x45ea08c4;
  if (param_1 == (int *)0x0) {
    uVar4 = g_assertion_message_expr
                      (0,DAT_45ea0a10 + 0x45ea09d6,0x5af,DAT_45ea0a0c + 0x45ea1388,
                       DAT_45ea0a08 + 0x45ea09ca);
    iVar3 = (int)uVar4;
    *(short *)(iVar3 + 0x26) = (short)((ulonglong)uVar4 >> 0x20);
    VectorShiftRightAccumulate(in_d21,unaff_d13,1);
    g_assertion_message_expr
              (iVar3,DAT_45ea10d4 + 0x45ea10b4,iVar3,extraout_r3 + 0x45ea1aba,
               (int)((ulonglong)uVar4 >> 0x20));
    g_free();
    return;
  }
  if (*(int *)(iRam45ea09dc + 0x45ea0a50) != 0) {
    g_hash_table_destroy();
  }
  iVar2 = iRam45ea09e0;
  piVar1 = (int *)(iRam45ea09e0 + 0x45ea0a66);
  *(undefined4 *)(iRam45ea09e0 + 0x45ea0a62) = 0;
  if (*piVar1 != 0) {
    g_list_free_full(*piVar1,iRam45ea09e4 + 0x45ea08f0);
    *(undefined4 *)(iVar2 + 0x45ea0a66) = 0;
  }
  if (*param_1 != 0) {
    g_list_free_full(*param_1,iRam45ea09e8 + 0x45ea0900);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    g_hash_table_foreach(param_1[1],iRam45ea09ec + 0x45ea0912,0);
    g_hash_table_destroy(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    g_list_free_full(param_1[2],*(undefined4 *)(iVar3 + DAT_45ea09f0));
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    g_list_free_full(param_1[3],*(undefined4 *)(iVar3 + DAT_45ea09f0));
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    g_list_free_full(param_1[4],*(undefined4 *)(iVar3 + DAT_45ea09f4));
    param_1[4] = 0;
  }
  if (param_1[7] != 0) {
    g_hash_table_foreach(param_1[7],DAT_45ea09f8 + 0x45ea095a,0);
    g_hash_table_destroy(param_1[7]);
    param_1[7] = 0;
  }
  if (param_1[5] != 0) {
    g_list_free_full(param_1[5],*(undefined4 *)(iVar3 + DAT_45ea09fc));
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    g_slist_free();
    param_1[6] = 0;
  }
  if (param_1[9] != 0) {
    g_hash_table_destroy();
    param_1[9] = 0;
  }
  if (param_1[8] != 0) {
    g_hash_table_destroy();
    param_1[8] = 0;
  }
  iVar3 = DAT_45ea0a00;
  if (*(int *)((int)&DAT_45ea09fc + DAT_45ea0a00) != 0) {
    g_hash_table_destroy();
    *(undefined4 *)((int)&DAT_45ea09fc + iVar3) = 0;
  }
  iVar3 = DAT_45ea0a04;
  free(*(void **)(DAT_45ea0a04 + 0x45ea09bc));
  *(undefined4 *)(iVar3 + 0x45ea09bc) = 0;
  return;
}

