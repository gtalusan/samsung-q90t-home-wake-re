/* deviced : init_pm_dbus@0002b57c */

int init_pm_dbus(void)

{
  int iVar1;
  
  iVar1 = register_edbus_method(DAT_0002b610 + 0x2b59c,DAT_0002b60c + 0x2b594,0x13);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_0002b620 + 0x2b600,DAT_0002b61c + 0x2b5fc,DAT_0002b618 + 0x2b60e,
                 DAT_0002b614 + 0x2b76c,0x3cb,iVar1);
    return iVar1;
  }
  return 0;
}

