/* deviced : display_exit@00027c28 */

void display_exit(void)

{
  __dlog_print(2,4,DAT_00027c88 + 0x27c6c,DAT_00027c8c + 0x27c70,DAT_00027c80 + 0x27c7e,
               DAT_00027c84 + 0x27c4c,0x4c);
  exit_sysfs();
  return;
}

