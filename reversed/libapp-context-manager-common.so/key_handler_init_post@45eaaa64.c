/* libapp-context-manager-common.so : key_handler_init_post@45eaaa64 */

void key_handler_init_post(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  window_util_set_input_bypass();
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    iVar6 = DAT_45eaaad4 + 0x45eaaa84;
    iVar5 = DAT_45eaaad8 + 0x45eaaa86;
    iVar4 = DAT_45eaaadc + 0x45eaaa88;
    do {
      while( true ) {
        piVar3 = (int *)*puVar2;
        iVar1 = *piVar3;
        if (iVar1 != 1) break;
        add_key(piVar3[1],piVar3[3],0,iVar6,piVar3[4]);
        puVar2 = (undefined4 *)puVar2[1];
        if (puVar2 == (undefined4 *)0x0) {
          return;
        }
      }
      if (iVar1 == 2) {
        key_sequence_add(piVar3[2],piVar3[3],iVar5,piVar3[4]);
      }
      else if (iVar1 == 0) {
        add_key(piVar3[1],0,0,iVar4,piVar3[4]);
      }
      puVar2 = (undefined4 *)puVar2[1];
    } while (puVar2 != (undefined4 *)0x0);
  }
  return;
}

