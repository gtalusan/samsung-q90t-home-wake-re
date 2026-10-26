/* deviced : print_callback_list_console.part.1@00024048 */

void print_callback_list_console_part_1(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 auStack_190 [100];
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar5 = *(int **)(DAT_00024328 + 0x24058 + DAT_0002432c);
  local_2c = *piVar5;
  puVar3 = (undefined4 *)(DAT_00024330 + 0x24078);
  iVar1 = g_list_length(*puVar3);
  if ((((iVar1 != 0) && (param_1 - 1 < 2)) &&
      (puVar3 = (undefined4 *)*puVar3, puVar3 != (undefined4 *)0x0)) &&
     (puVar4 = (undefined4 *)*puVar3, puVar4 != (undefined4 *)0x0)) {
    iVar1 = DAT_00024344 + 0x24298;
    do {
      if ((*(char *)(puVar4 + 2) == '\0') && (*(char *)((int)puVar4 + 9) != '\0')) {
        get_name_from_pid(*puVar4,auStack_12c,0xff);
        __snprintf_chk(auStack_190,100,1,100,iVar1,2,*puVar4,auStack_12c,*(undefined1 *)(puVar4 + 2)
                       ,*(undefined1 *)((int)puVar4 + 9));
        print_log_console(auStack_190);
      }
      puVar3 = (undefined4 *)puVar3[1];
    } while ((puVar3 != (undefined4 *)0x0) &&
            (puVar4 = (undefined4 *)*puVar3, puVar4 != (undefined4 *)0x0));
  }
  iVar1 = DAT_00024334;
  iVar2 = g_list_length(*(undefined4 *)(DAT_00024334 + 0x240a4));
  if ((iVar2 != 0) &&
     ((((param_1 & 0xfffffffd) == 1 &&
       (puVar3 = *(undefined4 **)(iVar1 + 0x240a4), puVar3 != (undefined4 *)0x0)) &&
      (puVar4 = (undefined4 *)*puVar3, puVar4 != (undefined4 *)0x0)))) {
    iVar1 = DAT_00024338 + 0x240e0;
    do {
      if ((*(char *)(puVar4 + 2) == '\0') && (*(char *)((int)puVar4 + 9) != '\0')) {
        get_name_from_pid(*puVar4,auStack_12c,0xff);
        __snprintf_chk(auStack_190,100,1,100,iVar1,3,*puVar4,auStack_12c,*(undefined1 *)(puVar4 + 2)
                       ,*(undefined1 *)((int)puVar4 + 9));
        print_log_console(auStack_190);
        puVar3 = (undefined4 *)puVar3[1];
      }
      else {
        puVar3 = (undefined4 *)puVar3[1];
      }
    } while ((puVar3 != (undefined4 *)0x0) &&
            (puVar4 = (undefined4 *)*puVar3, puVar4 != (undefined4 *)0x0));
  }
  iVar1 = DAT_0002433c;
  iVar2 = g_list_length(*(undefined4 *)(DAT_0002433c + 0x24188));
  if ((iVar2 != 0) &&
     (((param_1 == 4 || param_1 == 1 &&
       (puVar3 = *(undefined4 **)(iVar1 + 0x24188), puVar3 != (undefined4 *)0x0)) &&
      (puVar4 = (undefined4 *)*puVar3, puVar4 != (undefined4 *)0x0)))) {
    iVar1 = DAT_00024340 + 0x241c0;
    do {
      if ((*(char *)(puVar4 + 2) == '\0') && (*(char *)((int)puVar4 + 9) != '\0')) {
        get_name_from_pid(*puVar4,auStack_12c,0xff);
        __snprintf_chk(auStack_190,100,1,100,iVar1,4,*puVar4,auStack_12c,*(undefined1 *)(puVar4 + 2)
                       ,*(undefined1 *)((int)puVar4 + 9));
        print_log_console(auStack_190);
        puVar3 = (undefined4 *)puVar3[1];
      }
      else {
        puVar3 = (undefined4 *)puVar3[1];
      }
    } while ((puVar3 != (undefined4 *)0x0) &&
            (puVar4 = (undefined4 *)*puVar3, puVar4 != (undefined4 *)0x0));
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

