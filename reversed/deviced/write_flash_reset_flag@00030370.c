/* deviced : write_flash_reset_flag@00030370 */

void write_flash_reset_flag(void)

{
  FILE *__stream;
  int iVar1;
  size_t sVar2;
  int *piVar3;
  char *__filename;
  int *piVar4;
  undefined1 auStack_80 [100];
  int local_1c;
  
  piVar4 = *(int **)(DAT_000305ec + 0x30380 + DAT_000305f0);
  local_1c = *piVar4;
  __filename = (char *)(DAT_000305f8 + 0x303a4);
  __stream = fopen(__filename,(char *)(DAT_000305f4 + 0x30398));
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    __dlog_print(2,6,DAT_0003062c + 0x3052c,DAT_00030630 + 0x30534,DAT_00030628 + 0x30536,
                 DAT_00030624 + 0x30564,0x3e,*piVar3);
    __snprintf_chk(auStack_80,100,1,100,DAT_00030634 + 0x3054c,*piVar3);
    print_log_console(auStack_80);
  }
  else {
    iVar1 = is_linked_file(__filename);
    if (iVar1 == 0) {
      sVar2 = fwrite((void *)(DAT_000305fc + 0x303dc),6,1,__stream);
      if (sVar2 == 1) {
        iVar1 = fileno(__stream);
        fsync(iVar1);
        fclose(__stream);
        print_log_console(DAT_00030638 + 0x3058c);
        sync();
                    /* WARNING: Subroutine does not return */
        reboot(0x1234567);
      }
      piVar3 = __errno_location();
      __dlog_print(2,6,DAT_00030608 + 0x3042c,DAT_0003060c + 0x30434,DAT_00030604 + 0x3043a,
                   DAT_00030600 + 0x30468,0x4c,*piVar3);
      __snprintf_chk(auStack_80,100,1,100,DAT_00030610 + 0x30450,*piVar3);
      print_log_console(auStack_80);
      fclose(__stream);
    }
    else {
      __dlog_print(2,6,DAT_00030620 + 0x304d4,DAT_0003061c + 0x304d0,DAT_00030618 + 0x304e2,
                   DAT_00030614 + 0x30510,0x45,__filename);
      fclose(__stream);
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

