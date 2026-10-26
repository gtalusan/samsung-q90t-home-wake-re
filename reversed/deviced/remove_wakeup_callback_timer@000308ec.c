/* deviced : remove_wakeup_callback_timer@000308ec */

void remove_wakeup_callback_timer(void)

{
  int iVar1;
  
  iVar1 = DAT_00030918;
  if (*(int *)(DAT_00030918 + 0x30914) == 0) {
    return;
  }
  ecore_timer_del();
  *(undefined4 *)(iVar1 + 0x30914) = 0;
  return;
}

