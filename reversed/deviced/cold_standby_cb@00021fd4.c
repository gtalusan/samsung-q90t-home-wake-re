/* deviced : cold_standby_cb@00021fd4 */

undefined4 cold_standby_cb(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)get_poweroff_info();
  if (*piVar1 == 2) {
    uVar2 = 5;
  }
  else {
    uVar2 = 4;
  }
  g_idle_add_full(0,DAT_0002200c + 0x21ff0,uVar2);
  return 0;
}

