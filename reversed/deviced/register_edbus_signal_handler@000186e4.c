/* deviced : register_edbus_signal_handler@000186e4 */

undefined4
register_edbus_signal_handler
          (undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int *__ptr;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = *(undefined4 **)(DAT_00018940 + 0x1870c);
  if ((puVar6 != (undefined4 *)0x0) && (puVar7 = (undefined4 *)*puVar6, puVar7 != (undefined4 *)0x0)
     ) {
    sVar1 = strlen(param_3);
    do {
      iVar2 = strncmp((char *)*puVar7,param_3,sVar1);
      if (iVar2 == 0) {
        return 0xffffffef;
      }
      puVar6 = (undefined4 *)puVar6[1];
    } while ((puVar6 != (undefined4 *)0x0) &&
            (puVar7 = (undefined4 *)*puVar6, puVar7 != (undefined4 *)0x0));
  }
  iVar2 = DAT_00018944;
  iVar3 = e_dbus_signal_handler_add
                    (*(undefined4 *)(DAT_00018944 + 0x1878c),0,param_1,param_2,param_3,param_4,0);
  if (iVar3 == 0) {
    __dlog_print(2,6,DAT_00018974 + 0x188dc,DAT_00018970 + 0x188d8,DAT_0001896c + 0x188eb,
                 (int)&DAT_00018980 + DAT_00018968,0x135);
    uVar5 = 0xfffffff4;
  }
  else {
    __ptr = malloc(8);
    if (__ptr == (int *)0x0) {
      __dlog_print(2,6,DAT_00018964 + 0x18890,DAT_00018960 + 0x1888c,DAT_0001895c + 0x1889f,
                   DAT_00018958 + 0x18934,0x13d);
      uVar5 = 0xfffffff4;
    }
    else {
      sVar1 = strlen(param_3);
      iVar4 = __strndup(param_3,sVar1);
      *__ptr = iVar4;
      if (iVar4 == 0) {
        __dlog_print(2,6,DAT_00018954 + 0x1883c,DAT_00018950 + 0x18838,DAT_0001894c + 0x1884b,
                     DAT_00018948 + 0x188e0,0x145);
        free(__ptr);
        uVar5 = 0xfffffff4;
      }
      else {
        __ptr[1] = iVar3;
        iVar3 = g_list_prepend(*(undefined4 *)(iVar2 + 0x1879c),__ptr);
        *(int *)(iVar2 + 0x1879c) = iVar3;
        if (iVar3 == 0) {
          __dlog_print(2,6,DAT_00018984 + 0x18928,DAT_00018980 + 0x18924,DAT_0001897c + 0x18937,
                       DAT_00018978 + 0x189cc,0x14e);
          free((void *)*__ptr);
          free(__ptr);
          uVar5 = 0xfffffff4;
        }
        else {
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}

