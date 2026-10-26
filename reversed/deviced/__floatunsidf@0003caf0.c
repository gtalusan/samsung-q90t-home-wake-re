/* deviced : __floatunsidf@0003caf0 */

ulonglong __floatunsidf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint in_r12;
  bool bVar6;
  bool bVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  iVar4 = LZCOUNT(param_1);
  uVar5 = iVar4 + 0x15;
  bVar7 = SBORROW4(uVar5,0x20);
  uVar2 = iVar4 - 0xb;
  bVar6 = uVar2 == 0;
  uVar3 = uVar2;
  if (uVar5 < 0x20) {
    bVar7 = SCARRY4(uVar2,0xc);
    uVar3 = iVar4 + 1;
    bVar6 = uVar3 == 0;
    if (!bVar6 && -0xd < (int)uVar2) {
      uVar1 = param_1 << uVar5;
      param_1 = param_1 >> (0xc - uVar3 & 0xff);
      goto LAB_0003c9fc;
    }
    uVar2 = uVar5;
  }
  if (bVar6 || (int)uVar3 < 0 != bVar7) {
    in_r12 = 0x20 - uVar2;
  }
  param_1 = param_1 << (uVar2 & 0xff);
  if (bVar6 || (int)uVar3 < 0 != bVar7) {
    param_1 = param_1 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar2 & 0xff);
  }
LAB_0003c9fc:
  if (uVar5 < 0x433) {
    return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
  }
  uVar2 = ~(0x432 - uVar5);
  if (0x1e < (int)uVar2) {
    return (ulonglong)(param_1 >> (uVar2 - 0x1f & 0xff));
  }
  if (uVar2 - 0x13 == 0 || (int)(uVar2 - 0x1f) < -0xc) {
    uVar2 = uVar2 + 1;
    return CONCAT44(param_1 >> (uVar2 & 0xff),
                    uVar1 >> (uVar2 & 0xff) | param_1 << (0x20 - uVar2 & 0xff));
  }
  uVar2 = 0xc - (uVar2 - 0x13);
  return (ulonglong)(uVar1 >> (0x20 - uVar2 & 0xff) | param_1 << (uVar2 & 0xff));
}

