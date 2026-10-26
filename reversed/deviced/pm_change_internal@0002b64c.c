/* deviced : pm_change_internal@0002b64c */

undefined4 pm_change_internal(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  iVar1 = DAT_0002b6dc;
  pcVar3 = *(code **)(DAT_0002b6dc + 0x2b65c);
  if (pcVar3 == (code *)0x0) {
    __dlog_print(2,6,DAT_0002b6e8 + 0x2b6d0,DAT_0002b6ec + 0x2b6d4,DAT_0002b6e0 + 0x2b6e2,
                 DAT_0002b6e4 + 0x2b6b4,0x3e);
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(DAT_0002b6dc + 0x2b660) = param_1;
    *(undefined4 *)(iVar1 + 0x2b664) = param_2;
    *(undefined4 *)(iVar1 + 0x2b668) = 0;
    (*pcVar3)(0xfffffffa,iVar1 + 0x2b660);
    uVar2 = 0;
  }
  return uVar2;
}

