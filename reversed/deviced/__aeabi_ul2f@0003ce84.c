/* deviced : __aeabi_ul2f@0003ce84 */

uint __aeabi_ul2f(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0 && param_2 == 0) {
    return param_1;
  }
  uVar1 = param_1;
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = param_1;
  }
  iVar5 = 0x5b000000;
  if (param_2 == 0) {
    iVar5 = 0x4b000000;
  }
  uVar3 = LZCOUNT(uVar2);
  uVar4 = uVar3 - 8;
  iVar5 = iVar5 + -0x800000 + uVar4 * -0x800000;
  if (uVar3 < 8) {
    uVar4 = uVar2 << uVar3 + 0x18;
    uVar2 = iVar5 + ((uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff)) - ((int)uVar4 >> 0x1f));
    if (uVar1 == 0 && (uVar4 & 0x7fffffff) == 0) {
      uVar2 = uVar2 & ~(uVar4 >> 0x1f);
    }
    return uVar2;
  }
  uVar3 = uVar1 << (uVar4 & 0xff);
  uVar2 = iVar5 + (uVar2 << (uVar4 & 0xff)) +
          (uVar1 >> (0x20 - uVar4 & 0xff)) + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}

