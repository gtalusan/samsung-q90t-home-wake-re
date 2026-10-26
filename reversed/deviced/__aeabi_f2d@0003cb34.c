/* deviced : __aeabi_f2d@0003cb34 */

ulonglong __aeabi_f2d(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint in_r12;
  bool bVar9;
  bool bVar10;
  
  uVar5 = param_1 << 1;
  bVar9 = uVar5 == 0;
  uVar8 = (uint)((param_1 & 0x80000000) != 0) << 0x1f;
  uVar3 = (uint)((int)uVar5 >> 3) >> 1;
  uVar2 = uVar8 | uVar3;
  param_1 = param_1 << 0x1d;
  if (!bVar9) {
    param_4 = uVar5 & 0xff000000;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = param_4 == 0xff000000;
  }
  if (!bVar9) {
    return CONCAT44(uVar2,param_1) ^ 0x3800000000000000;
  }
  if ((uVar5 & 0xffffff) == 0) {
    return CONCAT44(uVar2,param_1);
  }
  if (param_4 == 0xff000000) {
    return CONCAT44(uVar2,param_1) | 0x8000000000000;
  }
  uVar1 = param_1;
  uVar5 = uVar3;
  if (uVar3 == 0) {
    uVar1 = 0;
    uVar5 = param_1;
  }
  iVar6 = LZCOUNT(uVar5);
  if (uVar3 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar10 = SBORROW4(uVar7,0x20);
  uVar3 = iVar6 - 0x2b;
  bVar9 = uVar3 == 0;
  uVar4 = uVar3;
  if ((int)uVar7 < 0x20) {
    bVar10 = SCARRY4(uVar3,0xc);
    uVar4 = iVar6 - 0x1f;
    bVar9 = uVar4 == 0;
    if (!bVar9 && -0xd < (int)uVar3) {
      uVar1 = uVar5 << (uVar7 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar4 & 0xff);
      goto LAB_0003c9fc;
    }
    uVar3 = uVar7;
  }
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    in_r12 = 0x20 - uVar3;
  }
  uVar5 = uVar5 << (uVar3 & 0xff);
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    uVar5 = uVar5 | uVar1 >> (in_r12 & 0xff);
    uVar1 = uVar1 << (uVar3 & 0xff);
  }
LAB_0003c9fc:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar5 + (0x380 - uVar7) * 0x100000 | uVar8,uVar1);
  }
  uVar3 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar3) {
    return CONCAT44(uVar2,uVar5 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar3 - 0x13 == 0 || (int)(uVar3 - 0x1f) < -0xc) {
    uVar3 = uVar3 + 1;
    return CONCAT44(uVar8 | uVar5 >> (uVar3 & 0xff),
                    uVar1 >> (uVar3 & 0xff) | uVar5 << (0x20 - uVar3 & 0xff));
  }
  uVar8 = 0xc - (uVar3 - 0x13);
  return CONCAT44(uVar2,uVar1 >> (0x20 - uVar8 & 0xff) | uVar5 << (uVar8 & 0xff)) &
         0x80000000ffffffff;
}

