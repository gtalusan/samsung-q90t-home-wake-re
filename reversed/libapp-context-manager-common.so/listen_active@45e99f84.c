/* libapp-context-manager-common.so : listen_active@45e99f84 */

undefined4 listen_active(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    __dlog_print(0,6,DAT_45e9a074 + 0x45e9a022,DAT_45e9a070 + 0x45e9a020,DAT_45e9a06c + 0x45e9a04d,
                 DAT_45e9a068 + 0x45e9a166,0x280);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x2c);
    *(int *)(param_2 + 0x2c) = param_1;
    if (param_1 == 0) {
      __dlog_print(0,4,DAT_45e9a084 + 0x45e9a04a,DAT_45e9a080 + 0x45e9a048,DAT_45e9a07c + 0x45e9a077
                   ,DAT_45e9a078 + 0x45e9a190,0x287);
    }
    else {
      if (iVar1 != 0 && iVar1 != param_1) {
        __dlog_print(0,4,DAT_45e9a05c + 0x45e99fe2,DAT_45e9a060 + 0x45e99fe8,
                     DAT_45e9a058 + 0x45e9a00f,DAT_45e9a054 + 0x45e9a128,0x28c,
                     *(undefined4 *)(iVar1 + 0x2c));
        handle_listen(*(undefined4 *)(DAT_45e9a064 + 0x45e9a01a),iVar1,param_2);
      }
      handle_listen(*(undefined4 *)(DAT_45e9a050 + 0x45e99fcc),param_1,param_2);
      FUN_45e99484(param_1);
    }
  }
  return 0;
}

