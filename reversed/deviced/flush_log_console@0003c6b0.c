/* deviced : flush_log_console@0003c6b0 */

void flush_log_console(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = access((char *)(DAT_0003c768 + 0x3c6c4),0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_0003c76c + 0x3c6f8);
    if (iVar1 != 0) {
      iVar2 = 6;
      iVar4 = DAT_0003c770 + 0x3c750;
      iVar6 = DAT_0003c778 + 0x3c710;
      iVar3 = DAT_0003c774 + 0x3c73d;
      iVar5 = DAT_0003c77c + 0x3c718;
      while ((iVar1 = g_async_queue_length(iVar1), -1 < iVar1 && (iVar2 = iVar2 + -1, iVar2 != 0)))
      {
        __dlog_print(2,6,iVar5,iVar6,iVar3,iVar4,0x8d,iVar1);
        sleep(1);
        iVar1 = *(int *)((int)&DAT_0003c774 + DAT_0003c780);
      }
    }
  }
  return;
}

