/* deviced : __create_ready_flag@0001d988 */

undefined4 __create_ready_flag(void)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  int iVar3;
  char *__filename;
  int iVar4;
  undefined4 uVar5;
  
  __filename = (char *)(DAT_0001dac0 + 0x1d9a4);
  __stream = fopen(__filename,(char *)(DAT_0001dac4 + 0x1d9a8));
  if (__stream == (FILE *)0x0) {
    uVar5 = 0xffffffff;
    __dlog_print(2,6,DAT_0001dae8 + 0x1dabc,DAT_0001dae4 + 0x1dab8,DAT_0001dae0 + 0x1dac5,
                 DAT_0001dadc + 0x1db44,0x46,__filename);
  }
  else {
    iVar4 = DAT_0001dac8 + 0x1d9d0;
    iVar3 = DAT_0001dacc + 0x1da94;
    iVar2 = DAT_0001dad0 + 0x1da15;
    __dlog_print(2,4,iVar4,DAT_0001dad4 + 0x1d9ec,iVar2,iVar3,0x4a,__filename);
    iVar1 = is_linked_file(__filename);
    if (iVar1 == 0) {
      fflush(__stream);
      iVar1 = fileno(__stream);
      fsync(iVar1);
      fclose(__stream);
      uVar5 = 0;
    }
    else {
      __dlog_print(2,6,iVar4,DAT_0001dad8 + 0x1da58,iVar2,iVar3,0x4e,__filename);
      uVar5 = 0xffffffff;
      fclose(__stream);
    }
  }
  return uVar5;
}

