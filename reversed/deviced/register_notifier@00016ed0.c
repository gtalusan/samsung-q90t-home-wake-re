/* deviced : register_notifier@00016ed0 */

undefined4 register_notifier(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_2 == 0) {
    __dlog_print(2,6,DAT_00017098 + 0x1705c,DAT_0001709c + 0x17060,DAT_00017090 + 0x1706b,
                 DAT_00017094 + 0x17040,0x32);
    uVar4 = 0xffffffea;
  }
  else {
    piVar6 = *(int **)(DAT_00017068 + 0x16ef4);
    if ((piVar6 != (int *)0x0) && (iVar3 = *piVar6, iVar3 != 0)) {
      piVar5 = piVar6;
      do {
        if ((*(int *)(iVar3 + 4) == param_1) && (param_2 == *(int *)(iVar3 + 8))) {
          __dlog_print(2,6,DAT_00017074 + 0x16f7c,DAT_00017078 + 0x16f84,DAT_0001706c + 0x16f87,
                       DAT_00017070 + 0x16f5c,0x39,param_1,param_2);
          return 0xffffffea;
        }
        piVar5 = (int *)piVar5[1];
      } while ((piVar5 != (int *)0x0) && (iVar3 = *piVar5, iVar3 != 0));
    }
    pvVar1 = calloc(1,0xc);
    if (pvVar1 == (void *)0x0) {
      __dlog_print(2,6,DAT_00017088 + 0x17014,DAT_0001708c + 0x17018,DAT_00017080 + 0x17023,
                   DAT_00017084 + 0x16ff8,0x40);
      uVar4 = 0xfffffff4;
    }
    else {
      *(int *)((int)pvVar1 + 4) = param_1;
      *(int *)((int)pvVar1 + 8) = param_2;
      uVar2 = g_list_append(piVar6,pvVar1);
      uVar4 = 0;
      *(undefined4 *)(DAT_0001707c + 0x16fcc) = uVar2;
    }
  }
  return uVar4;
}

