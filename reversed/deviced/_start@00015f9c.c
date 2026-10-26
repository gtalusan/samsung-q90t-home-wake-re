/* deviced : _start@00015f9c */

void processEntry _start(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  __libc_start_main(*(undefined4 *)((int)&DAT_00015fe4 + DAT_00015ff0 + DAT_00015fe4),param_2,
                    &param_3,*(undefined4 *)((int)&DAT_00015fe4 + DAT_00015fec + DAT_00015fe4),
                    *(undefined4 *)((int)&DAT_00015fe4 + DAT_00015fe8 + DAT_00015fe4),param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}

