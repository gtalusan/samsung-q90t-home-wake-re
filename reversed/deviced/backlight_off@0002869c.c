/* deviced : backlight_off@0002869c */

int backlight_off(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = DAT_000287cc;
  piVar6 = (int *)(DAT_000287cc + 0x286b8);
  trace_begin(DAT_000287d0 + 0x286bc);
  g_mutex_lock(iVar1 + 0x286bc);
  __dlog_print(2,4,DAT_000287e0 + 0x28710,DAT_000287dc + 0x28704,DAT_000287d8 + 0x28716,
               DAT_000287d4 + 0x2878c,0x138,*(undefined4 *)(iVar1 + 0x286c4));
  iVar2 = *piVar6;
  if ((iVar2 == 0) || (*(code **)(iVar2 + 4) == (code *)0x0)) {
    g_mutex_unlock(DAT_000287f8 + 0x287bc);
    trace_end();
    return 0;
  }
  iVar2 = (**(code **)(iVar2 + 4))(iVar2,0);
  iVar4 = (int)&DAT_000287f4 + DAT_000287e4;
  iVar5 = DAT_000287e8 + 0x28782;
  if (iVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x286c4) = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x286c4);
  }
  __dlog_print(2,4,DAT_000287ec + 0x2877c,DAT_000287f0 + 0x28780,iVar5,iVar4,0x143,uVar3);
  g_mutex_unlock(DAT_000287f4 + 0x28798);
  trace_end();
  return iVar2;
}

