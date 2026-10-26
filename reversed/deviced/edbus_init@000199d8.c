/* deviced : edbus_init@000199d8 */

void edbus_init(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_3c [16];
  int local_2c;
  
  piVar7 = *(int **)(DAT_00019d08 + 0x199e8 + DAT_00019d0c);
  iVar5 = 6;
  local_2c = *piVar7;
  dbus_threads_init_default();
  dbus_error_init(auStack_3c);
  do {
    iVar2 = e_dbus_init();
    iVar8 = DAT_00019d20;
    if (iVar2 != 0) {
      iVar5 = 6;
      goto LAB_00019a88;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  __dlog_print(2,6,DAT_00019d1c + 0x19a64,DAT_00019d18 + 0x19a60,DAT_00019d14 + 0x19a73,
               DAT_00019d10 + 0x19bcc,0x38c);
  goto LAB_00019a64;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
LAB_00019a88:
    iVar3 = dbus_bus_get(1,0);
    *(int *)(iVar8 + 0x19a90) = iVar3;
    iVar2 = DAT_00019d34;
    if (iVar3 != 0) {
      iVar5 = 6;
      goto LAB_00019b08;
    }
  }
  __dlog_print(2,6,DAT_00019d30 + 0x19aec,DAT_00019d2c + 0x19ae8,DAT_00019d28 + 0x19afb,
               DAT_00019d24 + 0x19c54,0x39b);
LAB_00019aec:
  e_dbus_shutdown();
  goto LAB_00019a64;
LAB_00019b08:
  iVar3 = e_dbus_connection_setup(iVar3);
  *(int *)(iVar2 + 0x19b0c) = iVar3;
  iVar8 = DAT_00019d54;
  if (iVar3 != 0) goto LAB_00019b7c;
  iVar5 = iVar5 + -1;
  if (iVar5 == 0) {
    __dlog_print(2,6,DAT_00019d44 + 0x19b64,DAT_00019d40 + 0x19b60,DAT_00019d3c + 0x19b73,
                 DAT_00019d38 + 0x19ccc,0x3ab);
    goto LAB_00019b64;
  }
  iVar3 = *(int *)(iVar2 + 0x19b08);
  goto LAB_00019b08;
LAB_00019b9c:
  iVar3 = *(int *)(iVar8 + 0x19ba4);
  goto LAB_00019ba0;
LAB_00019b7c:
  iVar5 = 6;
  iVar9 = DAT_00019d4c + 0x19b94;
  iVar2 = DAT_00019d50 + 0x19b98;
LAB_00019ba0:
  iVar6 = 0;
  iVar3 = e_dbus_request_name(iVar3,iVar2,2,iVar9,0);
  if (iVar3 == 0) {
    iVar5 = iVar5 + -1;
    if (iVar5 != 0) goto LAB_00019b9c;
    __dlog_print(2,6,DAT_00019d64 + 0x19c0c,DAT_00019d60 + 0x19c08,DAT_00019d5c + 0x19c1b,
                 (int)&DAT_00019d74 + DAT_00019d58,0x3bd);
    e_dbus_connection_close(*(undefined4 *)(DAT_00019d68 + 0x19c20));
LAB_00019b64:
    dbus_connection_set_exit_on_disconnect(*(undefined4 *)(DAT_00019d48 + 0x19b78),0);
    goto LAB_00019aec;
  }
  iVar5 = DAT_00019d74 + 0x19c44;
  iVar2 = DAT_00019d6c + 0x19dc8;
  iVar9 = DAT_00019d78 + 0x19c4c;
  iVar8 = DAT_00019d70 + 0x19c6f;
  iVar3 = DAT_00019d7c + 0x19c54;
  do {
    iVar4 = register_edbus_interface(iVar5);
    if (iVar4 < 0) {
      __dlog_print(2,6,DAT_00019d90 + 0x19cfc,DAT_00019d8c + 0x19cec,DAT_00019d84 + 0x19cff,
                   DAT_00019d88 + 0x19e70,0x3c9,
                   *(undefined4 *)(DAT_00019d80 + iVar6 * 0x10 + 0x19cc4));
      goto LAB_00019a64;
    }
    puVar1 = (undefined4 *)(iVar5 + 4);
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x10;
    __dlog_print(0,3,iVar3,iVar9,iVar8,iVar2,0x3cc,*puVar1);
  } while (iVar6 != 9);
  check_owner_list();
  check_owner_name();
LAB_00019a64:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

