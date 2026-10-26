/* deviced : ambient_request_ambient_poweroff@00033648 */

undefined4 ambient_request_ambient_poweroff(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_228;
  undefined1 auStack_224 [256];
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar2 = *(int **)(DAT_00033740 + 0x3365c + DAT_00033744);
  local_24 = *piVar2;
  get_cmdline_name(param_1,auStack_224,0x100);
  __dlog_print(2,4,DAT_00033754 + 0x336d0,DAT_00033750 + 0x336cc,DAT_0003374c + 0x336de,
               DAT_00033748 + 0x33870,0x35d,param_1,auStack_224);
  __snprintf_chk(auStack_124,0x100,1,0x100,DAT_00033758 + 0x336f4,param_1,auStack_224);
  print_log_console(auStack_124);
  local_228 = 1;
  puVar1 = (undefined4 *)get_ambient_poweroff_info();
  *puVar1 = 1;
  device_notify(4,&local_228);
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

