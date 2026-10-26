/* deviced : __floatunsisf@0003ce60 */

uint __floatunsisf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = LZCOUNT(param_1);
  uVar2 = uVar1 - 8;
  iVar3 = uVar2 * -0x800000 + 0x4a800000;
  if (uVar1 < 8) {
    uVar2 = param_1 << uVar1 + 0x18;
    uVar1 = iVar3 + ((param_1 >> (0x20 - (uVar1 + 0x18) & 0xff)) - ((int)uVar2 >> 0x1f));
    if ((uVar2 & 0x7fffffff) == 0) {
      uVar1 = uVar1 & ~(uVar2 >> 0x1f);
    }
    return uVar1;
  }
  uVar4 = 0 << (uVar2 & 0xff);
  uVar1 = iVar3 + (param_1 << (uVar2 & 0xff)) +
          (0U >> (0x20 - uVar2 & 0xff)) + (uint)(0x7fffffff < uVar4);
  if (uVar4 == 0x80000000) {
    uVar1 = uVar1 & 0xfffffffe;
  }
  return uVar1;
}

