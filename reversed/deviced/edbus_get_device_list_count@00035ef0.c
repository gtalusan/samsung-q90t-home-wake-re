/* deviced : edbus_get_device_list_count@00035ef0 */

void edbus_get_device_list_count(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_5c;
  int local_58;
  undefined1 auStack_54 [56];
  int local_1c;
  
  iVar5 = 0;
  piVar6 = *(int **)(DAT_00036040 + 0x35f04 + DAT_00036044);
  local_1c = *piVar6;
  iVar2 = dbus_message_get_args(param_2,0,0x69,&local_5c,0);
  iVar1 = DAT_00036048;
  if (iVar2 == 0) {
    iVar5 = -0x16;
    __dlog_print(2,6,DAT_0003605c + 0x36030,DAT_00036058 + 0x3602c,DAT_00036054 + 0x36041,
                 DAT_00036050 + 0x36010,0x290);
  }
  else {
    g_mutex_lock(DAT_00036048 + 0x35f48);
    piVar4 = *(int **)(iVar1 + 0x35f50);
    if (piVar4 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      do {
        while ((local_5c != -1 && (local_5c != *(int *)(*piVar4 + 4)))) {
          piVar4 = (int *)piVar4[1];
          if (piVar4 == (int *)0x0) goto LAB_00035f94;
        }
        piVar4 = (int *)piVar4[1];
        iVar5 = iVar5 + 1;
      } while (piVar4 != (int *)0x0);
    }
LAB_00035f94:
    g_mutex_unlock(DAT_0003604c + 0x35fa0);
  }
  local_58 = iVar5;
  uVar3 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar3,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_58);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

