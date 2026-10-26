/* deviced : __aeabi_i2d@0003cb10 */

ulonglong __aeabi_i2d(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint in_r12;
  bool bVar8;
  bool bVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar7 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar7 < 0) {
    uVar2 = -param_1;
  }
  uVar1 = 0;
  iVar5 = LZCOUNT(uVar2);
  uVar6 = iVar5 + 0x15;
  bVar9 = SBORROW4(uVar6,0x20);
  uVar3 = iVar5 - 0xb;
  bVar8 = uVar3 == 0;
  uVar4 = uVar3;
  if (uVar6 < 0x20) {
    bVar9 = SCARRY4(uVar3,0xc);
    uVar4 = iVar5 + 1;
    bVar8 = uVar4 == 0;
    if (!bVar8 && -0xd < (int)uVar3) {
      uVar1 = uVar2 << uVar6;
      uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
      goto LAB_0003c9fc;
    }
    uVar3 = uVar6;
  }
  if (bVar8 || (int)uVar4 < 0 != bVar9) {
    in_r12 = 0x20 - uVar3;
  }
  uVar2 = uVar2 << (uVar3 & 0xff);
  if (bVar8 || (int)uVar4 < 0 != bVar9) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar3 & 0xff);
  }
LAB_0003c9fc:
  if (uVar6 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar7,uVar1);
  }
  uVar3 = ~(0x432 - uVar6);
  if (0x1e < (int)uVar3) {
    return CONCAT44(param_1,uVar2 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar3 - 0x13 == 0 || (int)(uVar3 - 0x1f) < -0xc) {
    uVar3 = uVar3 + 1;
    return CONCAT44(uVar7 | uVar2 >> (uVar3 & 0xff),
                    uVar1 >> (uVar3 & 0xff) | uVar2 << (0x20 - uVar3 & 0xff));
  }
  uVar7 = 0xc - (uVar3 - 0x13);
  return CONCAT44(param_1,uVar1 >> (0x20 - uVar7 & 0xff) | uVar2 << (uVar7 & 0xff)) &
         0x80000000ffffffff;
}

