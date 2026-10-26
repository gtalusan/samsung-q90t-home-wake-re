/* deviced : destory_usbhost@00034dec */

void destory_usbhost(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  free(*(void **)((int)param_1 + 0x1014));
  free(*(void **)((int)param_1 + 0x1018));
  free(*(void **)((int)param_1 + 0x101c));
  free(param_1);
  return;
}

