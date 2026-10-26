/* deviced : open_proc_oom_score_adj_file@00016414 */

void open_proc_oom_score_adj_file(undefined4 param_1,char *param_2)

{
  int *piVar1;
  char acStack_3c [32];
  int local_1c;
  
  piVar1 = *(int **)(DAT_0001648c + 0x16428 + DAT_00016490);
  local_1c = *piVar1;
  __snprintf_chk(acStack_3c,0x20,1,0x20,DAT_00016494 + 0x1644c,param_1);
  fopen(acStack_3c,param_2);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

