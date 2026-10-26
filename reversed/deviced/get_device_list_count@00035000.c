/* deviced : get_device_list_count@00035000 */

void get_device_list_count(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_5c;
  int local_58;
  undefined1 auStack_54 [56];
  int local_1c;
  
  iVar5 = 0;
  piVar6 = *(int **)(DAT_00035170 + 0x35014 + DAT_00035174);
  local_1c = *piVar6;
  iVar1 = dbus_message_get_args(param_2,0,0x69,&local_5c,0);
  iVar4 = DAT_00035178;
  if (iVar1 == 0) {
    iVar5 = -0x16;
    __dlog_print(2,6,DAT_0003518c + 0x35158,DAT_00035188 + 0x35154,DAT_00035184 + 0x35166,
                 DAT_00035180 + 0x35150,0x224);
  }
  else {
    g_mutex_lock(DAT_00035178 + 0x35058);
    piVar3 = *(int **)(iVar4 + 0x35060);
    if (piVar3 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar4 = *piVar3;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        do {
          if ((local_5c == -1) || (*(int *)(iVar4 + 0x1000) == local_5c)) {
            piVar3 = (int *)piVar3[1];
            iVar5 = iVar5 + 1;
          }
          else {
            piVar3 = (int *)piVar3[1];
          }
        } while ((piVar3 != (int *)0x0) && (iVar4 = *piVar3, iVar4 != 0));
      }
    }
    g_mutex_unlock(DAT_0003517c + 0x350c8);
  }
  local_58 = iVar5;
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_58);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

