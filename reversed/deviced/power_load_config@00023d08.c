/* deviced : power_load_config@00023d08 */

undefined4 power_load_config(undefined4 *param_1,uint *param_2)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *__s;
  char *__s_00;
  char *__s_01;
  int iVar6;
  int iVar7;
  
  if (param_2 != (uint *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    __s = (char *)*param_1;
    if (__s == (char *)0x0) {
      return 0;
    }
    __s_00 = (char *)param_1[1];
    if (__s_00 == (char *)0x0) {
      return 0;
    }
    __s_01 = (char *)param_1[2];
    if (__s_01 == (char *)0x0) {
      return 0;
    }
    sVar1 = strlen(__s);
    iVar2 = strncmp(__s,(char *)(DAT_00023fe8 + 0x23d5c),sVar1);
    if (iVar2 == 0) {
      sVar1 = strlen(__s_00);
      iVar2 = strncmp(__s_00,(char *)(DAT_00023fec + 0x23d80),sVar1);
      if (iVar2 == 0) {
        sVar1 = strlen(__s_01);
        iVar2 = strncmp(__s_01,(char *)(DAT_00024010 + 0x23e8c),sVar1);
        iVar7 = DAT_00024014 + 0x23f3c;
        iVar6 = DAT_00024018 + 0x23ee8;
        iVar5 = DAT_0002401c + 0x23ec0;
        iVar4 = DAT_00024020 + 0x23ec4;
        *param_2 = (uint)(iVar2 == 0);
        __dlog_print(0,3,iVar4,iVar5,iVar6,iVar7,0x7f2,(uint)(iVar2 == 0));
        return 0;
      }
      iVar2 = strncmp(__s_00,(char *)(DAT_00023ff0 + 0x23da8),sVar1);
      if (iVar2 == 0) {
        uVar3 = strtol(__s_01,(char **)0x0,10);
        param_2[1] = uVar3;
        iVar2 = access((char *)(DAT_00024024 + 0x23f20),0);
        iVar4 = DAT_00024028 + 0x23fc4;
        iVar5 = DAT_0002402c + 0x23f70;
        uVar3 = param_2[1];
        if (iVar2 == 0) {
          uVar3 = uVar3 + 5000;
          param_2[1] = uVar3;
        }
        __dlog_print(2,4,DAT_00024030 + 0x23f70,DAT_00024034 + 0x23f78,iVar5,iVar4,0x7fb,uVar3);
        return 0;
      }
      iVar2 = strncmp(__s_00,(char *)(DAT_00023ff4 + 0x23dc4),sVar1);
      if (iVar2 == 0) {
        uVar3 = strtol(__s_01,(char **)0x0,10);
        iVar2 = (int)&DAT_00024034 + DAT_00024038;
        iVar4 = DAT_0002403c + 0x23fe0;
        param_2[3] = uVar3;
        __dlog_print(0,3,DAT_00024040 + 0x23fd0,DAT_00024044 + 0x23fdc,iVar4,iVar2,0x800,uVar3);
        return 0;
      }
      iVar2 = strncmp(__s_00,(char *)(DAT_00023ff8 + 0x23de0),sVar1);
      if (iVar2 != 0) {
        return 0;
      }
      uVar3 = strtol(__s_01,(char **)0x0,10);
      param_2[2] = uVar3;
      iVar2 = access((char *)(DAT_00023ffc + 0x23e0c),0);
      iVar4 = DAT_00024000 + 0x23eb0;
      iVar5 = DAT_00024004 + 0x23e5c;
      uVar3 = param_2[2];
      if (iVar2 == 0) {
        uVar3 = uVar3 + 5000;
        param_2[2] = uVar3;
      }
      __dlog_print(2,4,DAT_00024008 + 0x23e5c,DAT_0002400c + 0x23e68,iVar5,iVar4,0x809,uVar3);
      return 0;
    }
  }
  return 0xffffffea;
}

