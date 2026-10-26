/* libapp-context-manager-common.so : handle_stop@45ea57fc */

void handle_stop(undefined4 param_1,undefined4 param_2)

{
  test_task_filter(param_1,9,param_2);
  context_handle_task_event(param_1,9,param_2);
  return;
}

