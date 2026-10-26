/* deviced : config_is_portland_supported@0003af28 */

void config_is_portland_supported(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_1d;
  
  iVar1 = DAT_0003b04c;
  piVar4 = *(int **)(DAT_0003b044 + 0x3af3c + DAT_0003b048);
  iVar3 = *piVar4;
  if (*(char *)(DAT_0003b04c + 0x3af7a) == '\0') {
    local_1d = 0;
    iVar2 = system_info_get_value_bool(0x333);
    if (iVar2 == 0) {
      __dlog_print(2,4,DAT_0003b05c + 0x3afe4,DAT_0003b058 + 0x3afd8,DAT_0003b054 + 0x3afed,
                   DAT_0003b050 + 0x3b10c,0x186,0);
      *(undefined1 *)(iVar1 + 0x3af7a) = 1;
      *(undefined1 *)(iVar1 + 0x3af6d) = 0;
    }
    else {
      __dlog_print(2,6,DAT_0003b06c + 0x3b03c,DAT_0003b068 + 0x3b038,DAT_0003b064 + 0x3b04d,
                   DAT_0003b060 + 0x3b168,0x182);
      local_1d = 0;
    }
  }
  else {
    local_1d = *(undefined1 *)(DAT_0003b04c + 0x3af6d);
  }
  if (iVar3 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_1d);
  }
  return;
}

