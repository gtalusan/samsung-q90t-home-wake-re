/* libapp-context-manager-common.so : handle_pause@45ea5834 */

void handle_pause(undefined4 param_1,undefined4 param_2)

{
  test_task_filter(param_1,6,param_2);
  context_handle_task_event(param_1,6,param_2);
  return;
}

