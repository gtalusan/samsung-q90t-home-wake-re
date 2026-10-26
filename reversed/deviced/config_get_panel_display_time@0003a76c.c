/* deviced : config_get_panel_display_time@0003a76c */

void config_get_panel_display_time(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_0003a868 + 0x3a780 + DAT_0003a86c);
  iVar2 = *piVar3;
  iVar1 = system_info_get_value_int(0x25d);
  if (iVar1 == 0) {
    __dlog_print(2,4,DAT_0003a87c + 0x3a800,DAT_0003a878 + 0x3a7f8,DAT_0003a874 + 0x3a809,
                 DAT_0003a870 + 0x3a898,0x102,0);
  }
  else {
    __dlog_print(2,6,DAT_0003a88c + 0x3a860,DAT_0003a888 + 0x3a85c,DAT_0003a884 + 0x3a871,
                 DAT_0003a880 + 0x3a8fc,0xfc);
  }
  if (iVar2 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

