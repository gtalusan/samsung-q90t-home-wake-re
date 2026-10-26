/* deviced : console_event_queue_push@0003c49c */

void console_event_queue_push(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0003c550;
  if (param_1 == 0) {
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0003c550 + 0x3c4bc));
  if (*(int *)(iVar1 + 0x3c4d4) == 0) {
    __dlog_print(2,6,DAT_0003c564 + 0x3c544,DAT_0003c560 + 0x3c540,DAT_0003c55c + 0x3c555,
                 DAT_0003c558 + 0x3c52c,100);
    uVar2 = g_async_queue_new();
    *(undefined4 *)(iVar1 + 0x3c4d4) = uVar2;
  }
  iVar1 = DAT_0003c554;
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0003c554 + 0x3c4d8));
  uVar2 = g_string_new(param_1);
  g_async_queue_push(*(undefined4 *)(iVar1 + 0x3c4f0),uVar2);
  return;
}

