/* deviced : register_edbus_method@00019850 */

int register_edbus_method(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint unaff_r4;
  bool bVar2;
  
  bVar2 = param_2 == 0;
  iVar1 = 0;
  if (!bVar2) {
    iVar1 = param_3;
  }
  if ((bVar2 || param_3 == 0) || iVar1 < 0) {
    unaff_r4 = 1;
  }
  if ((!bVar2 && param_3 != 0) && iVar1 >= 0) {
    unaff_r4 = 0;
  }
  if (param_1 == 0) {
    unaff_r4 = unaff_r4 | 1;
  }
  if (unaff_r4 == 0) {
    iVar1 = get_edbus_interface();
    if (iVar1 == 0) {
      iVar1 = -0x13;
      __dlog_print(2,6,DAT_000199d4 + 0x199a4,DAT_000199d0 + 0x199a0,DAT_000199cc + 0x199af,
                   DAT_000199c8 + 0x19af0,0x2fc);
    }
    else {
      iVar1 = register_method(iVar1,param_2,param_3);
      if (iVar1 < 0) {
        __dlog_print(2,6,DAT_000199b4 + 0x19904,DAT_000199b0 + 0x198fc,DAT_000199ac + 0x1990b,
                     DAT_000199a8 + 0x19a4c,0x303,param_1,iVar1);
        return iVar1;
      }
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -0x16;
    __dlog_print(2,6,DAT_000199c4 + 0x19958,DAT_000199c0 + 0x19954,DAT_000199bc + 0x19963,
                 DAT_000199b8 + 0x19aa4,0x2f5);
  }
  return iVar1;
}

