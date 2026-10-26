/* deviced : edbus_init_block@00019d94 */

void edbus_init_block(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_34 [16];
  int local_24;
  
  iVar4 = DAT_0001a048;
  piVar5 = *(int **)(DAT_0001a040 + 0x19da4 + DAT_0001a044);
  iVar3 = 6;
  local_24 = *piVar5;
  dbus_error_init(auStack_34);
  do {
    iVar1 = dbus_bus_get_private(1,auStack_34);
    *(int *)(iVar4 + 0x19de8) = iVar1;
    iVar6 = DAT_0001a05c;
    if (iVar1 != 0) {
      iVar4 = 6;
      goto LAB_00019e64;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  __dlog_print(2,6,DAT_0001a058 + 0x19e34,DAT_0001a054 + 0x19e30,DAT_0001a050 + 0x19e43,
               DAT_0001a04c + 0x19fa8,0x3e9);
LAB_00019e34:
  e_dbus_shutdown();
  goto LAB_00019e38;
LAB_00019e64:
  iVar1 = e_dbus_connection_setup(iVar1);
  *(int *)(iVar6 + 0x19e70) = iVar1;
  iVar3 = DAT_0001a07c;
  if (iVar1 != 0) goto LAB_00019ed8;
  iVar4 = iVar4 + -1;
  if (iVar4 == 0) {
    __dlog_print(2,6,DAT_0001a06c + 0x19ec0,DAT_0001a068 + 0x19ebc,DAT_0001a064 + 0x19ecf,
                 DAT_0001a060 + 0x1a034,0x3f8);
    goto LAB_00019ec0;
  }
  iVar1 = *(int *)(iVar6 + 0x19e7c);
  goto LAB_00019e64;
LAB_00019ef8:
  iVar1 = *(int *)(iVar3 + 0x19f08);
  goto LAB_00019efc;
LAB_00019ed8:
  iVar4 = 6;
  iVar7 = DAT_0001a074 + 0x19ef0;
  iVar6 = DAT_0001a078 + 0x19ef4;
LAB_00019efc:
  iVar2 = e_dbus_request_name(iVar1,iVar6,2,iVar7,0);
  iVar1 = DAT_0001a094;
  if (iVar2 == 0) {
    iVar4 = iVar4 + -1;
    if (iVar4 != 0) goto LAB_00019ef8;
    __dlog_print(2,6,DAT_0001a08c + 0x19f68,DAT_0001a088 + 0x19f64,DAT_0001a084 + 0x19f77,
                 DAT_0001a080 + 0x1a0dc,0x408);
    e_dbus_connection_close(*(undefined4 *)(DAT_0001a090 + 0x19f84));
LAB_00019ec0:
    dbus_connection_set_exit_on_disconnect(*(undefined4 *)(DAT_0001a070 + 0x19eec),0);
    goto LAB_00019e34;
  }
  iVar4 = register_edbus_interface(DAT_0001a094 + 0x1a018);
  if (iVar4 < 0) {
    __dlog_print(2,6,DAT_0001a0b4 + 0x1a038,DAT_0001a0b0 + 0x1a030,DAT_0001a0ac + 0x1a03f,
                 DAT_0001a0a8 + 0x1a1a8,0x414,*(undefined4 *)(iVar1 + 0x1a01c));
  }
  else {
    __dlog_print(0,3,DAT_0001a0a4 + 0x19fe0,DAT_0001a0a0 + 0x19fd8,DAT_0001a09c + 0x19fe7,
                 DAT_0001a098 + 0x1a150,0x417,*(undefined4 *)(iVar1 + 0x1a01c));
    check_owner_list();
    check_owner_name();
  }
LAB_00019e38:
  if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

