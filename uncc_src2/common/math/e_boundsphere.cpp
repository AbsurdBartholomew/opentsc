// STATUS: NOT STARTED

#include "e_boundsphere.h"

EBoundSphere& EBoundSphere::Combine(EBoundSphere &bs1, EBoundSphere &bs2) {
	EVec3 vDir;
	EVec3 *this;
	EVec3 &v;
	EVec3 vUnitDir;
	EVec3 vExtent1;
	EVec3 vExtent2;
	EVec3 *this;
	EVec3 *this;
	EVec3 &v;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong in_v0;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  EVec3 vDir;
  EVec3 vUnitDir;
  EVec3 vExtent1;
  EVec3 vExtent2;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar6 = (bs2->vCenter).field0_0x0.d[0] - (bs1->vCenter).field0_0x0.d[0];
  fVar10 = (bs2->vCenter).field0_0x0.d[1] - (bs1->vCenter).field0_0x0.d[1];
  fVar7 = (bs2->vCenter).field0_0x0.d[2] - (bs1->vCenter).field0_0x0.d[2];
  fVar8 = sqrtf(fVar6 * fVar6 + fVar10 * fVar10 + fVar7 * fVar7);
                    /* end of inlined section */
  if (fVar8 == 0.0) {
    puVar1 = (undefined *)((int)&(bs1->vCenter).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)bs1 & 7;
    uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)bs1 - uVar3) >> uVar3 * 8;
    fVar6 = (bs1->vCenter).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(this->vCenter).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
    uVar2 = (uint)this & 7;
    *(ulong *)((int)this - uVar2) =
         uVar5 << uVar2 * 8 | *(ulong *)((int)this - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
    ;
    (this->vCenter).field0_0x0.d[2] = fVar6;
    fVar7 = bs2->radius;
    fVar6 = bs1->radius;
    fVar6 = (float)((int)fVar7 * (uint)(fVar6 < fVar7) | (int)fVar6 * (uint)(fVar6 >= fVar7));
  }
  else {
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
    fVar8 = 1.0 / fVar8;
                    /* end of inlined section */
    fVar13 = bs2->radius;
    fVar12 = bs1->radius;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
    fVar14 = (bs2->vCenter).field0_0x0.d[2];
    fVar9 = (bs1->vCenter).field0_0x0.d[0] - fVar12 * fVar6 * fVar8;
    fVar11 = (bs1->vCenter).field0_0x0.d[1] - fVar12 * fVar10 * fVar8;
    fVar12 = (bs1->vCenter).field0_0x0.d[2] - fVar12 * fVar7 * fVar8;
                    /* end of inlined section */
    uVar5 = CONCAT44((fVar11 + (bs2->vCenter).field0_0x0.d[1] + fVar13 * fVar10 * fVar8) * 0.5,
                     (fVar9 + (bs2->vCenter).field0_0x0.d[0] + fVar13 * fVar6 * fVar8) * 0.5);
    puVar1 = (undefined *)((int)&(this->vCenter).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
    uVar2 = (uint)this & 7;
    *(ulong *)((int)this - uVar2) =
         uVar5 << uVar2 * 8 | *(ulong *)((int)this - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
    ;
    (this->vCenter).field0_0x0.d[2] = (fVar12 + fVar14 + fVar13 * fVar7 * fVar8) * 0.5;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
    fVar9 = fVar9 - (this->vCenter).field0_0x0.d[0];
    fVar11 = fVar11 - (this->vCenter).field0_0x0.d[1];
    fVar12 = fVar12 - (this->vCenter).field0_0x0.d[2];
    fVar6 = sqrtf(fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12);
                    /* end of inlined section */
    this->radius = fVar6;
    if (fVar6 < bs1->radius) {
      puVar1 = (undefined *)((int)&(bs1->vCenter).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)bs1 & 7;
      uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              uVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)bs1 - uVar3) >> uVar3 * 8;
      fVar6 = (bs1->vCenter).field0_0x0.d[2];
      puVar1 = (undefined *)((int)&(this->vCenter).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
      uVar2 = (uint)this & 7;
      *(ulong *)((int)this - uVar2) =
           uVar5 << uVar2 * 8 |
           *(ulong *)((int)this - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (this->vCenter).field0_0x0.d[2] = fVar6;
      fVar6 = bs1->radius;
    }
    else {
      if (bs2->radius <= fVar6) {
        return this;
      }
      puVar1 = (undefined *)((int)&(bs2->vCenter).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)bs2 & 7;
      uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              (long)(int)this & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)bs2 - uVar3) >> uVar3 * 8;
      fVar6 = (bs2->vCenter).field0_0x0.d[2];
      puVar1 = (undefined *)((int)&(this->vCenter).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
      uVar2 = (uint)this & 7;
      *(ulong *)((int)this - uVar2) =
           uVar5 << uVar2 * 8 |
           *(ulong *)((int)this - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (this->vCenter).field0_0x0.d[2] = fVar6;
      fVar6 = bs2->radius;
    }
  }
  this->radius = fVar6;
  return this;
}

EBoundSphere& EBoundSphere::ComputeFast(EVec3 *vPoints, int count) {
	EBound3 bb;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  EBound3 bb;
  
  puVar1 = (undefined *)((int)&bb.vMax.field0_0x0 + 7);
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  uVar3 = (uint)&bb.vMax & 7;
  puVar4 = (ulong *)((int)&bb.vMax - uVar3);
  *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  bb.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&bb.vMax.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar2 = (uint)&bb.vMax & 7;
  bb.vMin.field0_0x0._0_8_ =
       *(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 & -1L << (8 - uVar2) * 8 |
       *(ulong *)((int)&bb.vMax - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&bb.vMin.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)bb.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
  bb.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  Compute__7EBound3P5EVec3i(&bb,vPoints,count);
  CalcBoundSphere__7EBound3R12EBoundSphere(&bb,this);
  return this;
}
