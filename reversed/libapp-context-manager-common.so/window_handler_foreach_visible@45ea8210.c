/* libapp-context-manager-common.so : window_handler_foreach_visible@45ea8210 */

void window_handler_foreach_visible(code *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)&DAT_45ea8264 + DAT_45ea825c);
  if (param_1 == (code *)0x0) {
    __dlog_print(0,6,DAT_45ea826c + 0x45ea8258,DAT_45ea8268 + 0x45ea8256,DAT_45ea8264 + 0x45ea8285,
                 DAT_45ea8260 + 0x45ea835e,0x78);
  }
  else {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[1]) {
      (*param_1)(*puVar1,param_2);
    }
  }
  return;
}

