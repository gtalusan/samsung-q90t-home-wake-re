/* deviced : ambient_suspend_trans@00033ee4 */

undefined4 ambient_suspend_trans(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int unaff_r4;
  int iVar4;
  
  piVar2 = (int *)(DAT_00033fc0 + 0x33ef8);
  if (param_1 != 3) {
    unaff_r4 = param_1;
  }
  *(int *)(DAT_00033fc0 + 0x33efc) = param_1;
  if ((param_1 == 3) && (unaff_r4 = 1, *piVar2 != 1)) {
    unaff_r4 = 2;
  }
  iVar4 = DAT_00033fc4 + 0x33f18;
  iVar1 = vconf_set_int(iVar4,unaff_r4);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_00033fd4 + 0x33f70,DAT_00033fd0 + 0x33f68,DAT_00033fcc + 0x33f7a,
                 DAT_00033fc8 + 0x34018,0xb6,iVar4,unaff_r4);
  }
  pcVar3 = *(code **)(*(int *)(DAT_00033fd8 + 0x33f88) * 0x14 + DAT_00033fdc + 0x33f94);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(0);
  }
  ambient_suspend_post_isra_8();
  return 0;
}

