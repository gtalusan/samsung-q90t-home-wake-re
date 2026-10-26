/* deviced : earjack_init@0001c510 */

void earjack_init(void)

{
  int iVar1;
  
  iVar1 = register_edbus_method(DAT_0001c598 + 0x1c530,DAT_0001c594 + 0x1c528,1);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_0001c5a8 + 0x1c58c,DAT_0001c5a4 + 0x1c588,DAT_0001c5a0 + 0x1c599,
                 DAT_0001c59c + 0x1c57c,0x65,iVar1);
    return;
  }
  return;
}

