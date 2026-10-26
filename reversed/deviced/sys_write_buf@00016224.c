/* deviced : sys_write_buf@00016224 */

undefined4 sys_write_buf(char *param_1,char *param_2)

{
  int __fd;
  int iVar1;
  size_t __n;
  ssize_t sVar2;
  undefined4 uVar3;
  
  __fd = open(param_1,1);
  if (__fd == -1) {
    uVar3 = 0xfffffffe;
  }
  else {
    iVar1 = is_linked_file(param_1);
    if (iVar1 == 0) {
      __n = strlen(param_2);
      sVar2 = write(__fd,param_2,__n);
      uVar3 = 0;
      if (sVar2 < 0) {
        uVar3 = 0xfffffffb;
      }
      close(__fd);
    }
    else {
      uVar3 = 0xffffffff;
      close(__fd);
    }
  }
  return uVar3;
}

