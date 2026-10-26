/* deviced : ambient_poweroff_waiting_cb@00024788 */

void ambient_poweroff_waiting_cb(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int local_1f0;
  undefined1 auStack_1ec [100];
  undefined1 auStack_188 [100];
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar4 = *(int **)(DAT_00024978 + 0x2479c + DAT_0002497c);
  local_24 = *piVar4;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)(DAT_000249a8 + 0x24974),(char *)(DAT_000249a4 + 0x2496c),0x738,
                  (char *)(DAT_000249a0 + 0x24a6c));
  }
  local_1f0 = *param_1;
  __dlog_print(2,5,DAT_0002498c + 0x24804,DAT_00024988 + 0x247fc,DAT_00024984 + 0x24808,
               DAT_00024980 + 0x248f0,0x73c,local_1f0);
  __snprintf_chk(auStack_1ec,100,1,100,DAT_00024990 + 0x24828,local_1f0);
  print_log_console(auStack_1ec);
  iVar5 = DAT_00024994;
  if (local_1f0 == 2) {
    iVar1 = g_list_length(*(undefined4 *)(DAT_00024994 + 0x24858));
    if (((iVar1 != 0) && (puVar2 = *(undefined4 **)(iVar5 + 0x24858), puVar2 != (undefined4 *)0x0))
       && (puVar3 = (undefined4 *)*puVar2, puVar3 != (undefined4 *)0x0)) {
      iVar5 = DAT_00024998 + 0x24880;
      do {
        if ((*(char *)(puVar3 + 2) == '\0') && (*(char *)((int)puVar3 + 9) != '\0')) {
          get_name_from_pid(*puVar3,auStack_124,0xff);
          __snprintf_chk(auStack_188,100,1,100,iVar5,5,*puVar3,auStack_124,
                         *(undefined1 *)(puVar3 + 2),*(undefined1 *)((int)puVar3 + 9));
          print_log_console(auStack_188);
          puVar2 = (undefined4 *)puVar2[1];
        }
        else {
          puVar2 = (undefined4 *)puVar2[1];
        }
      } while ((puVar2 != (undefined4 *)0x0) &&
              (puVar3 = (undefined4 *)*puVar2, puVar3 != (undefined4 *)0x0));
    }
  }
  else {
    g_list_length(*(undefined4 *)(DAT_0002499c + 0x24954));
  }
  device_notify(4,&local_1f0);
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

