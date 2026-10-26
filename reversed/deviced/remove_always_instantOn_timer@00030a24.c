/* deviced : remove_always_instantOn_timer@00030a24 */

void remove_always_instantOn_timer(void)

{
  int iVar1;
  
  iVar1 = DAT_00030a50;
  if (*(int *)(DAT_00030a50 + 0x30a40) == 0) {
    return;
  }
  ecore_timer_del();
  *(undefined4 *)(iVar1 + 0x30a40) = 0;
  return;
}

