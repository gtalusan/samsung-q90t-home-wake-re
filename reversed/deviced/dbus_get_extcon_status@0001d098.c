/* deviced : dbus_get_extcon_status@0001d098 */

void dbus_get_extcon_status(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_5c [56];
  int local_24;
  
  piVar3 = *(int **)(DAT_0001d258 + 0x1d0a8 + DAT_0001d25c);
  local_24 = *piVar3;
  dbus_error_init(&local_6c);
  iVar1 = dbus_message_get_args(param_2,&local_6c,0x73,&local_74,0);
  if (iVar1 == 0) {
    uVar4 = 0xffffffea;
    __dlog_print(2,6,DAT_0001d278 + 0x1d1e8,DAT_0001d27c + 0x1d1f8,DAT_0001d274 + 0x1d209,
                 DAT_0001d270 + 0x1d208,0x1df,local_6c,local_68);
    dbus_error_free(&local_6c);
  }
  else {
    puVar2 = (undefined4 *)find_extcon(local_74);
    if (puVar2 == (undefined4 *)0x0) {
      uVar4 = 0xfffffffe;
      __dlog_print(2,6,DAT_0001d28c + 0x1d250,DAT_0001d288 + 0x1d24c,DAT_0001d284 + 0x1d259,
                   (int)&DAT_0001d260 + DAT_0001d280,0x1e7,local_74);
    }
    else {
      uVar4 = puVar2[1];
      __dlog_print(0,3,DAT_0001d268 + 0x1d150,DAT_0001d26c + 0x1d158,DAT_0001d264 + 0x1d15d,
                   DAT_0001d260 + 0x1d164,0x1ed,*puVar2,uVar4);
    }
  }
  local_70 = uVar4;
  uVar4 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar4,auStack_5c);
  dbus_message_iter_append_basic(auStack_5c,0x69,&local_70);
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

