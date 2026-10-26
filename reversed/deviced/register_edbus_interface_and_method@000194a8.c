/* deviced : register_edbus_interface_and_method@000194a8 */

int register_edbus_interface_and_method(char *param_1,char *param_2,int param_3,int param_4)

{
  size_t sVar1;
  undefined4 *__ptr;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  if (param_2 != (char *)0x0 && param_1 != (char *)0x0) {
    iVar4 = 0;
    if (param_3 != 0) {
      iVar4 = param_4;
    }
    if ((param_3 != 0 && param_4 != 0) && -1 < iVar4) {
      for (puVar5 = *(undefined4 **)(DAT_00019780 + 0x194fc);
          (puVar5 != (undefined4 *)0x0 &&
          (__ptr = (undefined4 *)*puVar5, __ptr != (undefined4 *)0x0));
          puVar5 = (undefined4 *)puVar5[1]) {
        pcVar6 = (char *)*__ptr;
        sVar1 = strlen(pcVar6);
        iVar4 = strncmp(pcVar6,param_1,sVar1);
        if (iVar4 == 0) {
          pcVar6 = (char *)__ptr[1];
          sVar1 = strlen(pcVar6);
          iVar4 = strncmp(pcVar6,param_2,sVar1);
          if (iVar4 == 0) {
            __dlog_print(2,4,DAT_00019794 + 0x19614,DAT_00019790 + 0x19610,DAT_0001978c + 0x1961f,
                         DAT_00019788 + 0x1973c,0x2b5,__ptr);
            goto LAB_000195a4;
          }
        }
      }
      __ptr = malloc(0x10);
      if (__ptr == (undefined4 *)0x0) {
        __dlog_print(2,6,DAT_000197d4 + 0x1977c,DAT_000197d0 + 0x19774,DAT_000197cc + 0x1977f,
                     DAT_000197c8 + 0x1989c,0x2c0,param_1,0);
        return -0xc;
      }
      uVar2 = __strdup(param_1);
      *__ptr = uVar2;
      uVar2 = __strdup(param_2);
      __ptr[1] = uVar2;
      iVar3 = register_edbus_interface(__ptr);
      iVar4 = DAT_00019784;
      if (iVar3 < 0) {
        __dlog_print(2,6,DAT_000197c0 + 0x19708,DAT_000197c4 + 0x19710,DAT_000197bc + 0x19717,
                     DAT_000197b8 + 0x19834,0x2ca,*__ptr,iVar3);
        free((void *)*__ptr);
        free((void *)__ptr[1]);
        free(__ptr);
        return iVar3;
      }
      uVar2 = g_list_append(*(undefined4 *)(DAT_00019784 + 0x195b0),__ptr);
      *(undefined4 *)(iVar4 + 0x195b0) = uVar2;
LAB_000195a4:
      iVar4 = register_method(__ptr[3],param_3,param_4);
      if (iVar4 < 0) {
        __dlog_print(2,6,DAT_000197a0 + 0x19660,DAT_000197a4 + 0x19668,DAT_0001979c + 0x1966f,
                     (int)&DAT_0001978c + DAT_00019798,0x2d7,*__ptr,iVar4);
        return iVar4;
      }
      return 0;
    }
  }
  __dlog_print(2,6,DAT_000197b4 + 0x196bc,DAT_000197b0 + 0x196b8,DAT_000197ac + 0x196c7,
               DAT_000197a8 + 0x197e4,0x2ab);
  return -0x16;
}

