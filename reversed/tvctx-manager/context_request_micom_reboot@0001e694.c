/* tvctx-manager : context_request_micom_reboot@0001e694 */

void context_request_micom_reboot(void)

{
  int *piVar1;
  
  piVar1 = (int *)IPowerControl::getInstance();
  (**(code **)(*piVar1 + 8))(piVar1,1);
  return;
}

