/* deviced : sig_usr1@0001a53c */

void sig_usr1(undefined4 param_1)

{
  __dlog_print(2,6,DAT_0001a5a4 + 0x1a584,DAT_0001a5a8 + 0x1a58c,DAT_0001a5a0 + 0x1a597,
               (int)&DAT_0001a5a0 + DAT_0001a59c,0x30,param_1);
  (*(code *)PTR_ecore_main_loop_quit_000593bc)();
  return;
}

