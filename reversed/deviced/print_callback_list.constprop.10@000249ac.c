/* deviced : print_callback_list.constprop.10@000249ac */

void print_callback_list_constprop_10(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar3 = *(int **)(DAT_00024de0 + 0x249c0 + DAT_00024de4);
  puVar5 = (undefined4 *)(DAT_00024de8 + 0x249dc);
  local_2c = *piVar3;
  print_callback_list_console_part_1(1);
  iVar1 = g_list_length(*puVar5);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_00024e40 + 0x24cec,DAT_00024e3c + 0x24ce8,DAT_00024e38 + 0x24cfc,
                 (int)&DAT_00024dfc + DAT_00024e34,0x16c);
    puVar5 = (undefined4 *)*puVar5;
    if ((puVar5 != (undefined4 *)0x0) &&
       (puVar6 = (undefined4 *)*puVar5, puVar6 != (undefined4 *)0x0)) {
      iVar4 = DAT_00024e48 + 0x24d58;
      iVar9 = DAT_00024e4c + 0x24d2c;
      iVar2 = DAT_00024e50 + 0x24d30;
      iVar8 = DAT_00024e44 + 0x24e58;
      iVar1 = 0;
      do {
        iVar7 = iVar1;
        if ((*(char *)(puVar6 + 2) == '\0') && (*(char *)((int)puVar6 + 9) != '\0')) {
          iVar7 = iVar1 + 1;
          get_name_from_pid(*puVar6,auStack_12c,0xff);
          __dlog_print(2,6,iVar2,iVar9,iVar4,iVar8,0x17b,iVar1,*puVar6,auStack_12c,puVar6[1],
                       *(undefined1 *)(puVar6 + 2),*(undefined1 *)((int)puVar6 + 9));
        }
        puVar5 = (undefined4 *)puVar5[1];
      } while ((puVar5 != (undefined4 *)0x0) &&
              (puVar6 = (undefined4 *)*puVar5, iVar1 = iVar7, puVar6 != (undefined4 *)0x0));
      goto LAB_000249f8;
    }
  }
  iVar7 = 0;
LAB_000249f8:
  iVar1 = DAT_00024dec;
  iVar2 = g_list_length(*(undefined4 *)(DAT_00024dec + 0x24a08));
  if (iVar2 != 0) {
    __dlog_print(2,6,DAT_00024e20 + 0x24bbc,DAT_00024e1c + 0x24bb8,DAT_00024e18 + 0x24bcc,
                 DAT_00024e14 + 0x24ccc,0x181);
    puVar5 = *(undefined4 **)(iVar1 + 0x24a08);
    if ((puVar5 != (undefined4 *)0x0) &&
       (puVar6 = (undefined4 *)*puVar5, puVar6 != (undefined4 *)0x0)) {
      iVar2 = DAT_00024e28 + 0x24c24;
      iVar8 = DAT_00024e2c + 0x24bf8;
      iVar1 = DAT_00024e30 + 0x24bfc;
      iVar4 = DAT_00024e24 + 0x24d24;
      do {
        iVar9 = iVar7;
        if ((*(char *)(puVar6 + 2) == '\0') && (*(char *)((int)puVar6 + 9) != '\0')) {
          iVar9 = iVar7 + 1;
          get_name_from_pid(*puVar6,auStack_12c,0xff);
          __dlog_print(2,6,iVar1,iVar8,iVar2,iVar4,400,iVar7,*puVar6,auStack_12c,puVar6[1],
                       *(undefined1 *)(puVar6 + 2),*(undefined1 *)((int)puVar6 + 9));
        }
        puVar5 = (undefined4 *)puVar5[1];
      } while ((puVar5 != (undefined4 *)0x0) &&
              (puVar6 = (undefined4 *)*puVar5, iVar7 = iVar9, puVar6 != (undefined4 *)0x0));
    }
  }
  iVar1 = DAT_00024df0;
  iVar2 = g_list_length(*(undefined4 *)(DAT_00024df0 + 0x24a24));
  if (iVar2 != 0) {
    __dlog_print(2,6,DAT_00024e00 + 0x24a88,DAT_00024dfc + 0x24a84,DAT_00024df8 + 0x24a98,
                 DAT_00024df4 + 0x24b98,0x197);
    puVar5 = *(undefined4 **)(iVar1 + 0x24a24);
    if ((puVar5 != (undefined4 *)0x0) &&
       (puVar6 = (undefined4 *)*puVar5, puVar6 != (undefined4 *)0x0)) {
      iVar4 = DAT_00024e08 + 0x24af4;
      iVar9 = DAT_00024e0c + 0x24ac8;
      iVar2 = DAT_00024e10 + 0x24acc;
      iVar8 = DAT_00024e04 + 0x24bf4;
      iVar1 = 0;
      do {
        iVar7 = iVar1;
        if ((*(char *)(puVar6 + 2) == '\0') && (*(char *)((int)puVar6 + 9) != '\0')) {
          iVar7 = iVar1 + 1;
          get_name_from_pid(*puVar6,auStack_12c,0xff);
          __dlog_print(2,6,iVar2,iVar9,iVar4,iVar8,0x1a6,iVar1,*puVar6,auStack_12c,puVar6[1],
                       *(undefined1 *)(puVar6 + 2),*(undefined1 *)((int)puVar6 + 9));
        }
        puVar5 = (undefined4 *)puVar5[1];
      } while ((puVar5 != (undefined4 *)0x0) &&
              (puVar6 = (undefined4 *)*puVar5, iVar1 = iVar7, puVar6 != (undefined4 *)0x0));
    }
  }
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

