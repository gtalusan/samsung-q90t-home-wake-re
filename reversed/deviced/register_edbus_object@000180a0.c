/* deviced : register_edbus_object@000180a0 */

int register_edbus_object(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    __dlog_print(2,6,DAT_00018188 + 0x18128,DAT_00018184 + 0x18124,DAT_00018180 + 0x18133,
                 (int)&DAT_0001817c + DAT_0001817c,0x52);
    iVar1 = 0;
  }
  else {
    iVar1 = e_dbus_object_add(*(undefined4 *)(DAT_00018178 + 0x180d0),param_1,param_2);
    if (iVar1 == 0) {
      __dlog_print(2,6,DAT_00018198 + 0x18174,DAT_00018194 + 0x18170,DAT_00018190 + 0x1817f,
                   DAT_0001818c + 0x181c8,0x59,param_1);
    }
  }
  return iVar1;
}

