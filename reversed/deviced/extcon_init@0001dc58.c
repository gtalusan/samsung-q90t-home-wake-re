/* deviced : extcon_init@0001dc58 */

void extcon_init(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *__name;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = register_edbus_interface_and_method
                    (DAT_0001deec + 0x1dc8c,DAT_0001dee8 + 0x1dc80,DAT_0001dee4 + 0x1dc94,2);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_0001df34 + 0x1de98,DAT_0001df30 + 0x1de94,DAT_0001df2c + 0x1dea5,
                 DAT_0001df28 + 0x1df70,0x295,iVar1);
  }
  puVar2 = *(undefined4 **)(DAT_0001def0 + 0x1dca0);
  if ((puVar2 != (undefined4 *)0x0) && (puVar3 = (undefined4 *)*puVar2, puVar3 != (undefined4 *)0x0)
     ) {
    iVar6 = DAT_0001def4 + 0x1ddcc;
    iVar7 = DAT_0001defc + 0x1dcd0;
    iVar1 = DAT_0001def8 + 0x1dcfd;
    do {
      __dlog_print(0,3,DAT_0001df00 + 0x1dd0c,iVar7,iVar1,iVar6,0x29a,*puVar3);
      if ((code *)puVar3[2] != (code *)0x0) {
        (*(code *)puVar3[2])(param_1);
      }
      puVar2 = (undefined4 *)puVar2[1];
    } while ((puVar2 != (undefined4 *)0x0) &&
            (puVar3 = (undefined4 *)*puVar2, puVar3 != (undefined4 *)0x0));
  }
  iVar1 = config_get_product_type();
  if ((iVar1 == 0) || (iVar1 == 4)) {
    __name = (char *)(DAT_0001df04 + 0x1dd60);
    iVar1 = access(__name,0);
    if (iVar1 != 0) {
      iVar6 = access(__name,0);
      iVar1 = DAT_0001df18;
      iVar5 = DAT_0001df08 + 0x1dd90;
      iVar4 = DAT_0001df10 + 0x1ddd5;
      iVar7 = DAT_0001df0c + 0x1deac;
      uVar8 = (uint)(iVar6 == 0);
      __dlog_print(2,5,iVar5,DAT_0001df14 + 0x1ddb4,iVar4,DAT_0001df0c + 0x1dea0,0x2b0,uVar8);
      __dlog_print(2,4,iVar5,DAT_0001df1c + 0x1ddf8,iVar4,iVar7,0x274);
      if (*(int *)(iVar1 + 0x1ddcc) != 0) {
        ecore_timer_del();
        *(undefined4 *)(iVar1 + 0x1ddcc) = 0;
      }
      iVar1 = ecore_timer_add(0,0x3ff00000,DAT_0001df20 + 0x1de30,0);
      *(int *)(DAT_0001df24 + 0x1de44) = iVar1;
      if (iVar1 == 0) {
        __dlog_print(2,6,DAT_0001df44 + 0x1dee0,DAT_0001df40 + 0x1dedc,DAT_0001df3c + 0x1def1,
                     DAT_0001df38 + 0x1dfc8,0x281,uVar8);
      }
      return;
    }
  }
  extcon_init_state();
  return;
}

