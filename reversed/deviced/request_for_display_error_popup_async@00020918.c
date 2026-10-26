/* deviced : request_for_display_error_popup_async@00020918 */

void request_for_display_error_popup_async(void)

{
  __dlog_print(2,6,DAT_000209a0 + 0x20968,DAT_0002099c + 0x20960,DAT_00020998 + 0x20974,
               DAT_00020994 + 0x209e8,0x117);
  if (*(int *)(DAT_000209a4 + 0x20974) == 0) {
    debug_event_queue_push_part_0();
    return;
  }
  g_async_queue_push(*(int *)(DAT_000209a4 + 0x20974),2);
  return;
}

