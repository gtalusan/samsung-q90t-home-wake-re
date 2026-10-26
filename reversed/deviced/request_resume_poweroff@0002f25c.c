/* deviced : request_resume_poweroff@0002f25c */

void request_resume_poweroff(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = malloc(4);
  iVar2 = DAT_0002f298 + 0x2f280;
  *puVar1 = param_1;
  g_idle_add_full(100,iVar2,puVar1,0);
  return;
}

