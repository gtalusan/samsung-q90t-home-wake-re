/* tvctx-manager : context_get_last_source_appid@0001d7f4 */

char * context_get_last_source_appid(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = context_system_property_check("autorun_last_app");
  if (((iVar1 == 0) || (*(int *)(param_1 + 0x38) == 0)) ||
     (iVar1 = context_check_is_livetv(), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x34) == 0) {
      pcVar2 = "org.tizen.tv-viewer";
    }
    else {
      pcVar2 = *(char **)(*(int *)(param_1 + 0x34) + 4);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = "org.tizen.tv-viewer";
      }
    }
  }
  else {
    iVar1 = context_find_running_task_byappid(*(undefined4 *)(param_1 + 0x38),param_1);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = *(char **)(param_1 + 0x38);
    }
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > appid : %s",DAT_0001d878,DAT_0001d874,0x566,pcVar2)
  ;
  return pcVar2;
}

