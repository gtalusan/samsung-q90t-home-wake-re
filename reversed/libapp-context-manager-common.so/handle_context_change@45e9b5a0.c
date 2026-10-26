/* libapp-context-manager-common.so : handle_context_change@45e9b5a0 */

/* handle_context_change(int, manager_ctxt*) */

void handle_context_change(int param_1,manager_ctxt *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  __dlog_print(0,4,DAT_45e9b60c + 0x45e9b5d4,DAT_45e9b608 + 0x45e9b5ce,DAT_45e9b604 + 0x45e9b5ef,
               DAT_45e9b600 + 0x45e9b9d2,0x29d,*(undefined4 *)(param_2 + 0x3c));
  puVar2 = *(undefined4 **)(context_set + DAT_45e9b610 + 4);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    while (puVar1 = (uint *)*puVar2, (param_1 & *puVar1) == 0) {
      puVar2 = (undefined4 *)puVar2[1];
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
    }
    (*(code *)puVar1[1])(*(undefined4 *)(param_2 + 0x3c),puVar1[2]);
    puVar2 = (undefined4 *)puVar2[1];
  } while( true );
}

