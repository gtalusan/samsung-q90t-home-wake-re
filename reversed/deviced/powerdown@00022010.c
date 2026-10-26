/* deviced : powerdown@00022010 */

void powerdown(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  if (*(int *)(DAT_00022104 + 0x22020) == 1) {
    __dlog_print(2,6,DAT_0002211c + 0x220a4,DAT_00022118 + 0x220a0,DAT_00022114 + 0x220b4,
                 DAT_00022110 + 0x220e4,100);
    return;
  }
  iVar1 = system((char *)(DAT_00022108 + 0x2203c));
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    __dlog_print(2,6,DAT_0002212c + 0x220f8,DAT_00022128 + 0x220f4,(int)&DAT_00022108 + DAT_00022124
                 ,DAT_00022120 + 0x22138,0x6b,pcVar3);
  }
  *(undefined4 *)(DAT_0002210c + 0x22054) = 1;
  remount_ro();
  return;
}

