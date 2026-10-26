/* deviced : __create_deviced_ready_flag@0001a5ac */

undefined4 __create_deviced_ready_flag(void)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  int iVar3;
  char *__filename;
  int iVar4;
  undefined4 uVar5;
  
  __filename = (char *)(DAT_0001a6e4 + 0x1a5c8);
  __stream = fopen(__filename,(char *)(DAT_0001a6e8 + 0x1a5cc));
  if (__stream == (FILE *)0x0) {
    uVar5 = 0xffffffff;
    __dlog_print(2,6,DAT_0001a70c + 0x1a6e0,DAT_0001a708 + 0x1a6dc,DAT_0001a704 + 0x1a6e7,
                 (int)&DAT_0001a6f8 + DAT_0001a700,0x3e,__filename);
  }
  else {
    iVar4 = DAT_0001a6ec + 0x1a5f4;
    iVar3 = DAT_0001a6f0 + 0x1a648;
    iVar2 = DAT_0001a6f4 + 0x1a637;
    __dlog_print(2,4,iVar4,DAT_0001a6f8 + 0x1a610,iVar2,iVar3,0x42,__filename);
    iVar1 = is_linked_file(__filename);
    if (iVar1 == 0) {
      fflush(__stream);
      iVar1 = fileno(__stream);
      fsync(iVar1);
      fclose(__stream);
      uVar5 = 0;
    }
    else {
      __dlog_print(2,6,iVar4,DAT_0001a6fc + 0x1a67c,iVar2,iVar3,0x46,__filename);
      uVar5 = 0xffffffff;
      fclose(__stream);
    }
  }
  return uVar5;
}

