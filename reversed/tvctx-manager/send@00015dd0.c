/* tvctx-manager : send@00015dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0003b28c)(__fd);
  return sVar1;
}

