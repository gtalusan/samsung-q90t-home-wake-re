/* libapp-context-manager-common.so : read@45e97e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_45ec9270)(__fd);
  return sVar1;
}

