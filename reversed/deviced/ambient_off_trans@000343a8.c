/* deviced : ambient_off_trans@000343a8 */

undefined4 ambient_off_trans(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int unaff_r4;
  int iVar4;
  
  piVar2 = (int *)(DAT_00034484 + 0x343bc);
  if (param_1 != 3) {
    unaff_r4 = param_1;
  }
  *(int *)(DAT_00034484 + 0x343c0) = param_1;
  if ((param_1 == 3) && (unaff_r4 = 1, *piVar2 != 1)) {
    unaff_r4 = 2;
  }
  iVar4 = DAT_00034488 + 0x343dc;
  iVar1 = vconf_set_int(iVar4,unaff_r4);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_00034498 + 0x34434,DAT_00034494 + 0x3442c,DAT_00034490 + 0x3443e,
                 DAT_0003448c + 0x344dc,0xb6,iVar4,unaff_r4);
  }
  pcVar3 = *(code **)(*(int *)(DAT_0003449c + 0x3444c) * 0x14 + DAT_000344a0 + 0x34458);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(0);
  }
  ambient_off_post_isra_9();
  return 0;
}

