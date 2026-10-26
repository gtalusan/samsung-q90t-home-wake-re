/* deviced : lcdon_trans@0002c5c8 */

/* WARNING: Removing unreachable block (ram,0x0002c7ec) */

void lcdon_trans(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_20;
  int local_1c;
  
  piVar6 = *(int **)(DAT_0002c858 + 0x2c5e0 + DAT_0002c85c);
  local_1c = *piVar6;
  device_notify(2,0);
  iVar1 = need_pre_state_changed_signal();
  if (iVar1 != 0) {
    __dlog_print(2,4,DAT_0002c86c + 0x2c648,DAT_0002c868 + 0x2c644,DAT_0002c864 + 0x2c65a,
                 DAT_0002c860 + 0x2c6f8,0x2a8);
    local_20 = *(undefined4 *)(DAT_0002c870 + 0x2c67c);
    broadcast_edbus_signal
              (DAT_0002c87c + 0x2c678,DAT_0002c880 + 0x2c680,DAT_0002c878 + 0x2c670,
               DAT_0002c874 + 0x2c668,&local_20);
    broadcast_pre_state_changed_signal(*(undefined4 *)(DAT_0002c884 + 0x2c694),1);
    usleep(500000);
  }
  iVar1 = DAT_0002c888;
  uVar7 = *(undefined4 *)(DAT_0002c888 + 0x2c6bc);
  iVar2 = DAT_0002c88c + 0x2c7ac;
  iVar4 = DAT_0002c890 + 0x2c706;
  iVar3 = DAT_0002c894 + 0x2c6f4;
  iVar5 = DAT_0002c898 + 0x2c6f8;
  *(undefined4 *)(DAT_0002c888 + 0x2c6bc) = 1;
  *(undefined4 *)(iVar1 + 0x2c6c0) = uVar7;
  __dlog_print(2,4,iVar3,iVar5,iVar4,iVar2,0x2e1);
  if (*(code **)(DAT_0002c89c + 0x2c730) != (code *)0x0) {
    (**(code **)(DAT_0002c89c + 0x2c730))(0);
  }
  iVar1 = DAT_0002c8a4;
  trace_begin(DAT_0002c8a0 + 0x2c728);
  trace_end();
  broadcast_state_changed_signal(*(undefined4 *)(DAT_0002c8a8 + 0x2c744),1);
  iVar2 = vconf_get_int(iVar1 + 0x2c730);
  if (iVar2 != 0) {
    __dlog_print(2,6,DAT_0002c8b8 + 0x2c7e0,DAT_0002c8b4 + 0x2c7d8,DAT_0002c8b0 + 0x2c7ee,
                 (int)&DAT_0002c8a4 + DAT_0002c8ac,0x2c1,iVar1 + 0x2c730);
  }
  iVar1 = pi_set_system_power(1);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_0002c8cc + 0x2c850,DAT_0002c8c8 + 0x2c84c,DAT_0002c8c4 + 0x2c862,
                 DAT_0002c8c0 + 0x2c918,0x2cb);
  }
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

