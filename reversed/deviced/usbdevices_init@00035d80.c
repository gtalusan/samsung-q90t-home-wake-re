/* deviced : usbdevices_init@00035d80 */

void usbdevices_init(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_00035eb8 + 0x35da0;
  iVar6 = DAT_00035ec0 + 0x35dbc;
  iVar4 = DAT_00035ebc + 0x35de1;
  __dlog_print(2,4,iVar5,DAT_00035ec4 + 0x35dc4,iVar4,iVar6,0x411);
  uVar1 = g_main_context_new();
  uVar2 = g_main_loop_new(uVar1,0);
  iVar3 = g_thread_new(DAT_00035ecc + 0x35df8,DAT_00035ec8 + 0x35de8,uVar2);
  if (iVar3 == 0) {
    __dlog_print(2,6,iVar5,DAT_00035eec + 0x35e94,iVar4,iVar6,0x41b);
    g_main_loop_unref(uVar2);
    g_main_context_unref(uVar1);
  }
  iVar3 = register_edbus_interface_and_method
                    (DAT_00035ed8 + 0x35e20,DAT_00035ed4 + 0x35e1c,DAT_00035ed0 + 0x35e18,2);
  if (iVar3 < 0) {
    __dlog_print(2,6,DAT_00035ee4 + 0x35e70,DAT_00035ee8 + 0x35e74,DAT_00035edc + 0x35e81,
                 DAT_00035ee0 + 0x35e50,0x424,iVar3);
    return;
  }
  return;
}

