/* deviced : check_owner_list@00017c18 */

void check_owner_list(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  void *__ptr;
  int *piVar6;
  char *local_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [56];
  int local_30;
  int local_2c;
  
  piVar6 = *(int **)(DAT_00017dec + 0x17c28 + DAT_00017df0);
  local_30 = DAT_00017df4 + 0x17c48;
  local_2c = *piVar6;
  iVar3 = dbus_method_sync_with_reply
                    (DAT_00017df8 + 0x17c54,DAT_00017e00 + 0x17c74,DAT_00017df8 + 0x17c54,
                     DAT_00017e04 + 0x17c7c,DAT_00017dfc + 0x17c5c,&local_30);
  if (iVar3 == 0) {
    __dlog_print(2,6,DAT_00017e28 + 0x17de4,DAT_00017e24 + 0x17de0,DAT_00017e20 + 0x17df3,
                 (int)&DAT_00017e14 + DAT_00017e1c,0x35c);
  }
  else {
    dbus_error_init(auStack_b0);
    dbus_message_iter_init(iVar3,auStack_a0);
    iVar4 = dbus_message_iter_get_arg_type(auStack_a0);
    iVar1 = DAT_00017e08;
    if (iVar4 == 0x61) {
      dbus_message_iter_recurse(auStack_a0,auStack_68);
      while (iVar4 = dbus_message_iter_get_arg_type(auStack_68), iVar4 == 0x73) {
        dbus_message_iter_get_basic(auStack_68,&local_b4);
        pcVar2 = local_b4;
        sVar5 = strlen(local_b4);
        __ptr = (void *)__strndup(pcVar2,sVar5);
        iVar4 = g_list_append(*(undefined4 *)(iVar1 + 0x17d00),__ptr);
        *(int *)(iVar1 + 0x17d00) = iVar4;
        if (iVar4 == 0) {
          __dlog_print(2,6,DAT_00017e18 + 0x17d94,DAT_00017e14 + 0x17d90,DAT_00017e10 + 0x17da3,
                       DAT_00017e0c + 0x17dc4,0x36f);
          free(__ptr);
          break;
        }
        dbus_message_iter_next(auStack_68);
      }
    }
    dbus_message_unref(iVar3);
    dbus_error_free(auStack_b0);
  }
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

