/* deviced : deregister_tm_clones@00016018 */

void deregister_tm_clones(void)

{
  code *pcVar1;
  
  if (((uint)((DAT_00016038 + 0x16023) - (DAT_0001603c + 0x16024)) < 7) ||
     (pcVar1 = *(code **)(DAT_00016040 + 0x1602a + DAT_00016044), pcVar1 == (code *)0x0)) {
    return;
  }
  (*pcVar1)();
  return;
}

