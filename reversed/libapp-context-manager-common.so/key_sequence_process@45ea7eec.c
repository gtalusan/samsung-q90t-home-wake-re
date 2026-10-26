/* libapp-context-manager-common.so : key_sequence_process@45ea7eec */

void key_sequence_process(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45ea8064 + 0x45ea7ff0,DAT_45ea8060 + 0x45ea7fee,DAT_45ea805c + 0x45ea801f,
                 DAT_45ea8058 + 0x45ea80c4,0xc4);
    return;
  }
  piVar6 = *(int **)(DAT_45ea8034 + 0x45ea7f38);
  if (piVar6 != (int *)0x0) {
    iVar5 = *(int *)(param_1 + 8);
    iVar3 = piVar6[2];
    piVar6[2] = iVar5;
    iVar4 = *piVar6;
    iVar1 = piVar6[1];
    if (5000 < (uint)(iVar5 - iVar3)) {
      iVar1 = iVar4;
    }
    iVar3 = g_hash_table_lookup(piVar6[3],*(undefined4 *)(param_1 + 0x10));
    if ((iVar3 != 0) && (iVar3 = g_node_child_index(iVar1,iVar3), -1 < iVar3)) {
      iVar1 = g_node_nth_child(iVar1);
      puVar2 = (undefined4 *)g_hash_table_lookup(piVar6[4],iVar1);
      if (puVar2 == (undefined4 *)0x0) {
        piVar6[1] = iVar1;
        if (iVar4 != iVar1) {
          __dlog_print(0,3,DAT_45ea8070 + 0x45ea8024,DAT_45ea8074 + 0x45ea8028,
                       DAT_45ea806c + 0x45ea8053,(int)&DAT_45ea80f8 + DAT_45ea8068,0xc9,
                       *(undefined4 *)(param_1 + 0x10));
          return;
        }
        goto LAB_45ea7fa0;
      }
      puVar7 = &UNK_45ea8032 + DAT_45ea8038;
      iVar3 = DAT_45ea8040 + 0x45ea7f68;
      iVar1 = DAT_45ea803c + 0x45ea7fa3;
      do {
        __dlog_print(0,3,DAT_45ea8044 + 0x45ea7f82,iVar3,iVar1,puVar7,0xaa,puVar2[1]);
        (*(code *)*puVar2)(param_1,puVar2[1],param_3);
        puVar2 = (undefined4 *)puVar2[2];
      } while (puVar2 != (undefined4 *)0x0);
    }
    piVar6[1] = iVar4;
  }
LAB_45ea7fa0:
  __dlog_print(0,3,DAT_45ea8050 + 0x45ea7fc0,DAT_45ea8054 + 0x45ea7fc4,DAT_45ea804c + 0x45ea7fef,
               DAT_45ea8048 + 0x45ea8094,0xcb,*(undefined4 *)(param_1 + 0x10));
  return;
}

