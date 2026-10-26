/* deviced : remove_post_wakeup_callback_timer@0003064c */

void remove_post_wakeup_callback_timer(void)

{
  int iVar1;
  
  iVar1 = DAT_00030678;
  if (*(int *)(DAT_00030678 + 0x30664) == 0) {
    return;
  }
  ecore_timer_del();
  *(undefined4 *)(iVar1 + 0x30664) = 0;
  return;
}

