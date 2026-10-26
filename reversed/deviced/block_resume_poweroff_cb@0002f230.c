/* deviced : block_resume_poweroff_cb@0002f230 */

undefined4 block_resume_poweroff_cb(undefined4 *param_1)

{
  *(undefined4 *)(DAT_0002f258 + 0x2f244) = *param_1;
  return 0;
}

