/* deviced : frame_dummy@000160bc */

void frame_dummy(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000160dc + 0x160c4) != 0) {
    pcVar1 = *(code **)(DAT_000160e0 + 0x160ca + DAT_000160e4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
  }
  register_tm_clones();
  return;
}

