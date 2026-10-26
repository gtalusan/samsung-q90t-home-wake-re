/* deviced : console_log_run_loop@0003c41c */

void console_log_run_loop(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0003c494;
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0003c494 + 0x3c430));
  if (*(int *)(iVar1 + 0x3c448) == 0) {
    uVar3 = g_async_queue_new();
    *(undefined4 *)(iVar1 + 0x3c448) = uVar3;
  }
  iVar1 = DAT_0003c498;
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0003c498 + 0x3c44c));
  do {
    do {
      puVar2 = (undefined4 *)g_async_queue_pop(*(undefined4 *)(iVar1 + 0x3c464));
    } while (puVar2 == (undefined4 *)0x0);
    do {
      print_console_log(*puVar2);
      g_string_free(puVar2,1);
      puVar2 = (undefined4 *)g_async_queue_pop(*(undefined4 *)(iVar1 + 0x3c464));
    } while (puVar2 != (undefined4 *)0x0);
  } while( true );
}

