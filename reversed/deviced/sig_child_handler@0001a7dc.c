/* deviced : sig_child_handler@0001a7dc */

void sig_child_handler(int param_1,int param_2)

{
  __pid_t _Var1;
  int *piVar2;
  int iStack_20;
  int local_1c;
  
  piVar2 = *(int **)(DAT_0001a8e4 + 0x1a7f0 + DAT_0001a8e8);
  local_1c = *piVar2;
  if (param_2 != 0 && param_1 == 0x11) {
    _Var1 = waitpid(*(__pid_t *)(param_2 + 0xc),&iStack_20,1);
    if (_Var1 == -1) {
      __dlog_print(2,6,DAT_0001a904 + 0x1a8d8,DAT_0001a908 + 0x1a8dc,DAT_0001a8fc + 0x1a8e7,
                   DAT_0001a900 + 0x1a8bc,0x29);
    }
    else {
      __dlog_print(0,3,DAT_0001a8f4 + 0x1a890,DAT_0001a8f8 + 0x1a898,DAT_0001a8ec + 0x1a89f,
                   DAT_0001a8f0 + 0x1a870,0x2d,*(undefined4 *)(param_2 + 0xc));
    }
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

