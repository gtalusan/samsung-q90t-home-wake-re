/* deviced : restart_ap@000226d0 */

void restart_ap(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = get_poweroff_info();
  powerdown();
  print_log_console(DAT_00022840 + 0x226f4);
  sync();
  iVar2 = config_get_product_type();
  if ((iVar2 != 0) || (*(int *)(iVar1 + 8) != 0x1e)) {
                    /* WARNING: Subroutine does not return */
    reboot(0x1234567);
  }
  if (*(int *)(iVar1 + 0x18) == 1) {
    iVar1 = pi_request_reboot(0x62);
    if (-1 < iVar1) goto LAB_0002271c;
    __dlog_print(2,6,DAT_00022874 + 0x22834,DAT_00022870 + 0x22830,(int)&DAT_00022844 + DAT_0002286c
                 ,DAT_00022868 + 0x22890,0x107);
    iVar1 = (int)&DAT_00022840 + DAT_00022878;
  }
  else {
    __dlog_print(2,4,DAT_00022860 + 0x227bc,DAT_0002285c + 0x227b8,DAT_00022858 + 0x227cc,
                 DAT_00022854 + 0x22818,0x110);
    iVar1 = DAT_00022864 + 0x227c8;
  }
  print_log_console(iVar1);
  flush_log_console();
  pi_request_reboot(0x32);
LAB_0002271c:
  __dlog_print(2,6,DAT_00022850 + 0x22764,DAT_0002284c + 0x22760,DAT_00022848 + 0x22770,
               DAT_00022844 + 0x227bc,0x11b,0xffffffff);
  return;
}

