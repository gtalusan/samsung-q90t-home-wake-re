/* deviced : request_for_mount_usb_storage_async@00020888 */

void request_for_mount_usb_storage_async(void)

{
  __dlog_print(2,6,DAT_00020910 + 0x208d8,DAT_0002090c + 0x208d0,DAT_00020908 + 0x208e4,
               DAT_00020904 + 0x20934,0x111);
  if (*(int *)(DAT_00020914 + 0x208e4) == 0) {
    debug_event_queue_push_part_0();
    return;
  }
  g_async_queue_push(*(int *)(DAT_00020914 + 0x208e4),1);
  return;
}

