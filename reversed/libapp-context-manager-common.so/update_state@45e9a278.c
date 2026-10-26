/* libapp-context-manager-common.so : update_state@45e9a278 */

void update_state(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  param_1[0xc] = param_2;
  if (param_1[0x10] == 0) {
    uVar1 = to_state(param_2);
    __dlog_print(0,4,DAT_45e9a338 + 0x45e9a310,DAT_45e9a334 + 0x45e9a304,DAT_45e9a330 + 0x45e9a329,
                 DAT_45e9a32c + 0x45e9a470,0x9e,uVar1,*param_1,param_1[1],param_1[0xb]);
    return;
  }
  uVar1 = to_state(param_2);
  __dlog_print(0,4,DAT_45e9a324 + 0x45e9a2b2,DAT_45e9a328 + 0x45e9a2c6,DAT_45e9a320 + 0x45e9a2df,
               DAT_45e9a31c + 0x45e9a428,0x9b,uVar1,*param_1,param_1[1],param_1[0xb],
               *(undefined4 *)(param_1[0x10] + 4),*(undefined4 *)(param_1[0x10] + 0x2c));
  return;
}

