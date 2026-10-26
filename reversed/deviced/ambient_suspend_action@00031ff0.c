/* deviced : ambient_suspend_action@00031ff0 */

void ambient_suspend_action(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_128;
  undefined1 auStack_124 [256];
  int local_24;
  
  iVar2 = DAT_00032174;
  iVar1 = DAT_00032170;
  piVar4 = *(int **)(DAT_00032160 + 0x32000 + DAT_00032164);
  local_24 = *piVar4;
  iVar5 = DAT_0003216c + 0x3202c;
  broadcast_state_changed_signal_by_ambient
            (*(undefined4 *)(DAT_00032168 + 0x32018),*(undefined4 *)(DAT_00032168 + 0x3201c));
  local_128 = DAT_00032178 + 0x32058;
  __dlog_print(2,4,iVar5,DAT_0003217c + 0x32068,iVar2 + 0x3208a,iVar1 + 0x32078,0x1df,local_128);
  iVar3 = dbus_method_sync_timeout
                    (DAT_00032180 + 0x32094,DAT_00032188 + 0x320b0,DAT_00032180 + 0x32094,
                     DAT_0003218c + 0x320b8,DAT_00032184 + 0x3209c,&local_128,5);
  if (iVar3 < 0) {
    __dlog_print(2,6,iVar5,DAT_00032194 + 0x32114,iVar2 + 0x3208a,iVar1 + 0x32078,0x1e5,iVar3);
    __snprintf_chk(auStack_124,0x100,1,0x100,DAT_00032198 + 0x32138,iVar3);
    print_log_console(auStack_124);
    sync();
    pi_request_reboot(0x32);
  }
  trace_begin(DAT_00032190 + 0x320cc);
  system_suspend();
  trace_end();
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

