/* deviced : free_usbdev@000371a4 */

void free_usbdev(undefined4 *param_1)

{
  free((void *)*param_1);
  free((void *)param_1[10]);
  free((void *)param_1[0xb]);
  free((void *)param_1[0xc]);
  free((void *)param_1[0xd]);
  free((void *)param_1[0xe]);
  free((void *)param_1[0xf]);
  free((void *)param_1[0x10]);
  free((void *)param_1[0x11]);
  free(param_1);
  return;
}

