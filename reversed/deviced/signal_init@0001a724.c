/* deviced : signal_init@0001a724 */

void signal_init(void)

{
  int iVar1;
  sigaction *__oact;
  int *piVar2;
  _union_1051 local_b0;
  sigset_t sStack_ac;
  undefined4 local_2c;
  int local_24;
  
  iVar1 = DAT_0001a7d4;
  piVar2 = *(int **)(DAT_0001a7c8 + 0x1a734 + DAT_0001a7cc);
  local_b0.sa_handler = (__sighandler_t)(DAT_0001a7d0 + 0x1a75c);
  local_24 = *piVar2;
  __oact = (sigaction *)(DAT_0001a7d4 + 0x1a764);
  local_2c = 4;
  sigemptyset(&sStack_ac);
  sigaction(0x11,(sigaction *)&local_b0,__oact);
  local_2c = 4;
  local_b0.sa_handler = (__sighandler_t)(DAT_0001a7d8 + 0x1a798);
  sigemptyset(&sStack_ac);
  sigaction(0xd,(sigaction *)&local_b0,(sigaction *)(iVar1 + 0x1a7f0));
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

