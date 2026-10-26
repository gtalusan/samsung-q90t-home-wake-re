/* deviced : register_tm_clones@00016048 */

void register_tm_clones(void)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = (DAT_0001606c + 0x16050) - (DAT_00016070 + 0x16054);
  if ((iVar1 >> 2) - (iVar1 >> 0x1f) >> 1 != 0) {
    pcVar2 = *(code **)(DAT_00016074 + 0x16058 + DAT_00016078);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
      return;
    }
  }
  return;
}

