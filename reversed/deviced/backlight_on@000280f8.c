/* deviced : backlight_on@000280f8 */

int backlight_on(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = DAT_00028228;
  piVar6 = (int *)(DAT_00028228 + 0x28114);
  trace_begin(DAT_0002822c + 0x28118);
  g_mutex_lock(iVar1 + 0x28118);
  __dlog_print(2,4,DAT_0002823c + 0x2816c,DAT_00028238 + 0x28160,DAT_00028234 + 0x28172,
               DAT_00028230 + 0x28158,0x84,*(undefined4 *)(iVar1 + 0x28120));
  iVar2 = *piVar6;
  if ((iVar2 == 0) || (*(code **)(iVar2 + 4) == (code *)0x0)) {
    g_mutex_unlock(DAT_00028254 + 0x28218);
    trace_end();
    return 0;
  }
  iVar2 = (**(code **)(iVar2 + 4))(iVar2,1);
  iVar4 = DAT_00028240 + 0x281c0;
  iVar5 = DAT_00028244 + 0x281de;
  if (iVar2 == 0) {
    uVar3 = 1;
    *(undefined4 *)(iVar1 + 0x28120) = 1;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x28120);
  }
  __dlog_print(2,4,DAT_00028248 + 0x281d8,DAT_0002824c + 0x281dc,iVar5,iVar4,0x8e,uVar3);
  g_mutex_unlock(DAT_00028250 + 0x281f4);
  trace_end();
  return iVar2;
}

