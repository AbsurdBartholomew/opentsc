// STATUS: NOT STARTED

#include "e_bound3.h"

void EBound3::GetCorners(EVec3 *vCornersOut) {
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  float fVar1;
  float fVar2;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar1 = (this->vMin).field0_0x0.d[1];
  fVar2 = (this->vMin).field0_0x0.d[2];
  (vCornersOut->field0_0x0).d[0] = (this->vMin).field0_0x0.d[0];
  (vCornersOut->field0_0x0).d[1] = fVar1;
  (vCornersOut->field0_0x0).d[2] = fVar2;
  fVar2 = (this->vMin).field0_0x0.d[1];
  fVar1 = (this->vMax).field0_0x0.d[2];
  vCornersOut[1].field0_0x0.d[0] = (this->vMin).field0_0x0.d[0];
  vCornersOut[1].field0_0x0.d[2] = fVar1;
  vCornersOut[1].field0_0x0.d[1] = fVar2;
  fVar2 = (this->vMin).field0_0x0.d[1];
  fVar1 = (this->vMax).field0_0x0.d[2];
  vCornersOut[2].field0_0x0.d[0] = (this->vMax).field0_0x0.d[0];
  vCornersOut[2].field0_0x0.d[2] = fVar1;
  vCornersOut[2].field0_0x0.d[1] = fVar2;
  fVar2 = (this->vMin).field0_0x0.d[1];
  fVar1 = (this->vMin).field0_0x0.d[2];
  vCornersOut[3].field0_0x0.d[0] = (this->vMax).field0_0x0.d[0];
  vCornersOut[3].field0_0x0.d[2] = fVar1;
  vCornersOut[3].field0_0x0.d[1] = fVar2;
  fVar2 = (this->vMax).field0_0x0.d[1];
  fVar1 = (this->vMin).field0_0x0.d[2];
  vCornersOut[4].field0_0x0.d[0] = (this->vMin).field0_0x0.d[0];
  vCornersOut[4].field0_0x0.d[2] = fVar1;
  vCornersOut[4].field0_0x0.d[1] = fVar2;
  fVar2 = (this->vMax).field0_0x0.d[1];
  fVar1 = (this->vMax).field0_0x0.d[2];
  vCornersOut[5].field0_0x0.d[0] = (this->vMin).field0_0x0.d[0];
  vCornersOut[5].field0_0x0.d[2] = fVar1;
  vCornersOut[5].field0_0x0.d[1] = fVar2;
  fVar2 = (this->vMax).field0_0x0.d[1];
  fVar1 = (this->vMax).field0_0x0.d[2];
  vCornersOut[6].field0_0x0.d[0] = (this->vMax).field0_0x0.d[0];
  vCornersOut[6].field0_0x0.d[2] = fVar1;
  vCornersOut[6].field0_0x0.d[1] = fVar2;
  fVar1 = (this->vMin).field0_0x0.d[2];
  fVar2 = (this->vMax).field0_0x0.d[1];
  vCornersOut[7].field0_0x0.d[0] = (this->vMax).field0_0x0.d[0];
  vCornersOut[7].field0_0x0.d[2] = fVar1;
  vCornersOut[7].field0_0x0.d[1] = fVar2;
  return;
}

void EBound3::Transform(EMat4 &mOrient, EVec3 *vCornersOut) {
	EVec3 v[8];
	EMat4 &mRight;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  EVec3 *pEVar7;
  EVec3 *pEVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  EVec3 v [8];
  
                    /* end of inlined section */
  pEVar7 = v;
                    /* end of inlined section */
  iVar6 = 6;
  do {
    bVar2 = iVar6 != -1;
    iVar6 = iVar6 + -1;
  } while (bVar2);
  GetCorners__C7EBound3P5EVec3(this,v);
  pEVar8 = vCornersOut + 8;
  do {
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
    fVar9 = *(float *)pEVar7;
    fVar15 = *(float *)((int)pEVar7 + 4);
    fVar10 = (mOrient->field0_0x0).d[2];
    fVar12 = (mOrient->field0_0x0).d[1][2];
    fVar14 = *(float *)((int)pEVar7 + 8);
    fVar11 = (mOrient->field0_0x0).d[2][2];
    fVar13 = (mOrient->field0_0x0).d[3][2];
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    uVar5 = CONCAT44(fVar9 * (mOrient->field0_0x0).d[1] + fVar15 * (mOrient->field0_0x0).d[1][1] +
                     fVar14 * (mOrient->field0_0x0).d[2][1] + (mOrient->field0_0x0).d[3][1],
                     fVar9 * (mOrient->field0_0x0).d[0] + fVar15 * (mOrient->field0_0x0).d[1][0] +
                     fVar14 * (mOrient->field0_0x0).d[2][0] + (mOrient->field0_0x0).d[3][0]);
    puVar1 = (undefined *)((int)&vCornersOut->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)vCornersOut & 7;
    *(ulong *)((int)vCornersOut - uVar3) =
         uVar5 << uVar3 * 8 |
         *(ulong *)((int)vCornersOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (vCornersOut->field0_0x0).d[2] = fVar9 * fVar10 + fVar15 * fVar12 + fVar14 * fVar11 + fVar13;
    vCornersOut = vCornersOut + 1;
    pEVar7 = (EVec3 *)((int)pEVar7 + 0xc);
  } while ((int)vCornersOut < (int)pEVar8);
  return;
}

void EBound3::Transform(EMat4 &mOrient, EBound3 &boundOut) {
	EVec3 v[8];
	
  bool bVar1;
  int iVar2;
  EVec3 v [8];
  
                    /* end of inlined section */
  iVar2 = 6;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  GetCorners__C7EBound3P5EVec3(this,v);
  Compute__7EBound3P5EVec3iRC5EMat4(boundOut,v,8,mOrient);
  return;
}

void EBound3::Add(EVec3 *vPoints, int count) {
	int i;
	EBound3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  int iVar1;
  EBound3 *pEVar2;
  EVec3 *pEVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = 0;
  if (0 < count) {
                    /* inlined from c:/eor/src2/common/math/e_bound3.h */
    iVar1 = 0;
    do {
      iVar5 = iVar5 + 1;
      pfVar4 = (float *)((int)&vPoints->field0_0x0 + iVar1);
      pEVar2 = this;
      pEVar3 = &this->vMax;
      do {
        fVar6 = (pEVar2->vMin).field0_0x0.d[0];
        if (*pfVar4 <= fVar6) {
          fVar6 = *pfVar4;
        }
        (pEVar2->vMin).field0_0x0.d[0] = fVar6;
        fVar6 = *pfVar4;
        if (*pfVar4 < (pEVar3->field0_0x0).d[0]) {
          fVar6 = (pEVar3->field0_0x0).d[0];
        }
        (pEVar3->field0_0x0).d[0] = fVar6;
        pEVar2 = (EBound3 *)((int)&(pEVar2->vMin).field0_0x0 + 4);
        pfVar4 = pfVar4 + 1;
        pEVar3 = (EVec3 *)((int)&pEVar3->field0_0x0 + 4);
      } while ((int)pEVar2 < (int)&this->vMax);
                    /* end of inlined section */
      iVar1 = iVar5 * 0xc;
    } while (iVar5 < count);
  }
  return;
}

void EBound3::Add(float *xyzs, int count) {
	EVec3 v;
	int i;
	float x;
	float y;
	float z;
	EBound3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  int iVar1;
  float *pfVar2;
  EBound3 *pEVar3;
  EVec3 *pEVar4;
  EVec3 *pEVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  EVec3 v;
  
  iVar6 = 0;
  if (0 < count) {
    iVar1 = 0;
    do {
      iVar6 = iVar6 + 1;
                    /* end of inlined section */
      pfVar2 = (float *)(iVar1 + (int)xyzs);
                    /* inlined from c:/eor/src2/common/math/e_bound3.h */
      v.field0_0x0.d[0] = *pfVar2;
      v.field0_0x0.d[1] = pfVar2[1];
      v.field0_0x0.d[2] = pfVar2[2];
      pEVar5 = &v;
      pEVar3 = this;
      pEVar4 = &this->vMax;
      do {
        fVar8 = *(float *)pEVar5;
        fVar7 = (pEVar3->vMin).field0_0x0.d[0];
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
        (pEVar3->vMin).field0_0x0.d[0] = fVar7;
        fVar7 = (pEVar4->field0_0x0).d[0];
        if (fVar7 <= fVar8) {
          fVar7 = fVar8;
        }
        (pEVar4->field0_0x0).d[0] = fVar7;
        pEVar3 = (EBound3 *)((int)&(pEVar3->vMin).field0_0x0 + 4);
        pEVar5 = (EVec3 *)((int)pEVar5 + 4);
        pEVar4 = (EVec3 *)((int)&pEVar4->field0_0x0 + 4);
      } while ((int)pEVar3 < (int)&this->vMax);
                    /* end of inlined section */
      iVar1 = iVar6 * 0x10;
    } while (iVar6 < count);
  }
  return;
}

void EBound3::Add(EVec3 *vPoints, int count, EMat4 &mOrient) {
	int i;
	EVec3 &vLeft;
	EMat4 &mRight;
	EBound3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  EBound3 *pEVar1;
  int iVar2;
  EVec3 *pEVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_10 [4];
  
  iVar5 = 0;
  if (0 < count) {
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
    iVar2 = 0;
    while( true ) {
      iVar5 = iVar5 + 1;
      pfVar4 = (float *)((int)&vPoints->field0_0x0 + iVar2);
      fVar6 = *pfVar4;
      fVar8 = pfVar4[1];
      fVar7 = pfVar4[2];
      local_10[2] = fVar6 * (mOrient->field0_0x0).d[2] + fVar8 * (mOrient->field0_0x0).d[1][2] +
                    fVar7 * (mOrient->field0_0x0).d[2][2] + (mOrient->field0_0x0).d[3][2];
      local_10[0] = fVar6 * (mOrient->field0_0x0).d[0] + fVar8 * (mOrient->field0_0x0).d[1][0] +
                    fVar7 * (mOrient->field0_0x0).d[2][0] + (mOrient->field0_0x0).d[3][0];
      local_10[1] = fVar6 * (mOrient->field0_0x0).d[1] + fVar8 * (mOrient->field0_0x0).d[1][1] +
                    fVar7 * (mOrient->field0_0x0).d[2][1] + (mOrient->field0_0x0).d[3][1];
      pfVar4 = local_10;
      pEVar1 = this;
      pEVar3 = &this->vMax;
      do {
        fVar7 = *pfVar4;
        fVar6 = (pEVar1->vMin).field0_0x0.d[0];
        if (fVar7 <= fVar6) {
          fVar6 = fVar7;
        }
        (pEVar1->vMin).field0_0x0.d[0] = fVar6;
        fVar6 = (pEVar3->field0_0x0).d[0];
        if (fVar6 <= fVar7) {
          fVar6 = fVar7;
        }
        (pEVar3->field0_0x0).d[0] = fVar6;
        pEVar1 = (EBound3 *)((int)&(pEVar1->vMin).field0_0x0 + 4);
        pfVar4 = pfVar4 + 1;
        pEVar3 = (EVec3 *)((int)&pEVar3->field0_0x0 + 4);
      } while ((int)pEVar1 < (int)&this->vMax);
                    /* end of inlined section */
      if (count <= iVar5) break;
      iVar2 = iVar5 * 0xc;
    }
  }
  return;
}

void EBound3::Add(EBound3 &b, EMat4 &mOrient) {
	EVec3 vPoints[8];
	int i;
	EVec3 &vLeft;
	EMat4 &mRight;
	EBound3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  bool bVar1;
  int iVar2;
  EBound3 *pEVar3;
  EVec3 *pEVar4;
  float *pfVar5;
  int iVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar7;
  float fVar8;
  float fVar9;
  EVec3 vPoints [8];
  float local_50 [3];
  undefined auStack_44 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  iVar2 = 6;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  GetCorners__C7EBound3P5EVec3(b,vPoints);
  iVar6 = 0;
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
  iVar2 = 0;
  while( true ) {
    iVar6 = iVar6 + 1;
    fVar7 = *(float *)((int)&vPoints[0].field0_0x0 + iVar2);
    fVar8 = *(float *)((int)&vPoints[0].field0_0x0 + iVar2 + 4);
    fVar9 = *(float *)((int)&vPoints[0].field0_0x0 + iVar2 + 8);
    local_50[2] = fVar7 * (mOrient->field0_0x0).d[2] + fVar8 * (mOrient->field0_0x0).d[1][2] +
                  fVar9 * (mOrient->field0_0x0).d[2][2] + (mOrient->field0_0x0).d[3][2];
    local_50[0] = fVar7 * (mOrient->field0_0x0).d[0] + fVar8 * (mOrient->field0_0x0).d[1][0] +
                  fVar9 * (mOrient->field0_0x0).d[2][0] + (mOrient->field0_0x0).d[3][0];
    local_50[1] = fVar7 * (mOrient->field0_0x0).d[1] + fVar8 * (mOrient->field0_0x0).d[1][1] +
                  fVar9 * (mOrient->field0_0x0).d[2][1] + (mOrient->field0_0x0).d[3][1];
    pEVar3 = this;
    pfVar5 = local_50;
    pEVar4 = &this->vMax;
    do {
      fVar8 = *pfVar5;
      fVar7 = (pEVar3->vMin).field0_0x0.d[0];
      if (fVar8 <= fVar7) {
        fVar7 = fVar8;
      }
      (pEVar3->vMin).field0_0x0.d[0] = fVar7;
      fVar7 = (pEVar4->field0_0x0).d[0];
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      (pEVar4->field0_0x0).d[0] = fVar7;
      pfVar5 = pfVar5 + 1;
      pEVar4 = (EVec3 *)((int)&pEVar4->field0_0x0 + 4);
      pEVar3 = (EBound3 *)((int)&(pEVar3->vMin).field0_0x0 + 4);
    } while ((int)pfVar5 < (int)auStack_44);
                    /* end of inlined section */
    if (7 < iVar6) break;
    iVar2 = iVar6 * 0xc;
  }
  return;
}

void EBound3::Compute(EVec3 *vPoints, int count) {
	EBound3 *this;
	EVec3 &v;
	EBound3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v1;
  ulong uVar6;
  ulong in_t1;
  
  if (count == 0) {
    puVar1 = (undefined *)((int)&(this->vMax).field0_0x0 + 7);
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->vMax & 7;
    puVar5 = (ulong *)((int)&this->vMax - uVar2);
    *puVar5 = 0L << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->vMax).field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&(this->vMax).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->vMax & 7;
    uVar6 = *(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&this->vMax - uVar3) >> uVar3 * 8;
    fVar4 = (this->vMax).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(this->vMin).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
    uVar2 = (uint)this & 7;
    *(ulong *)((int)this - uVar2) =
         uVar6 << uVar2 * 8 | *(ulong *)((int)this - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
    ;
    (this->vMin).field0_0x0.d[2] = fVar4;
                    /* end of inlined section */
  }
  else {
    puVar1 = (undefined *)((int)&vPoints->field0_0x0 + 7);
                    /* inlined from c:/eor/src2/common/math/e_bound3.h */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)vPoints & 7;
    uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)vPoints - uVar3) >> uVar3 * 8;
    fVar4 = (vPoints->field0_0x0).d[2];
    puVar1 = (undefined *)((int)&(this->vMax).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->vMax & 7;
    puVar5 = (ulong *)((int)&this->vMax - uVar2);
    *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->vMax).field0_0x0.d[2] = fVar4;
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&(this->vMax).field0_0x0 + 7);
                    /* inlined from c:/eor/src2/common/math/e_bound3.h */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->vMax & 7;
    uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            in_t1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&this->vMax - uVar3) >> uVar3 * 8;
    fVar4 = (this->vMax).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(this->vMin).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
    uVar2 = (uint)this & 7;
    *(ulong *)((int)this - uVar2) =
         uVar6 << uVar2 * 8 | *(ulong *)((int)this - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
    ;
    (this->vMin).field0_0x0.d[2] = fVar4;
                    /* end of inlined section */
    Add__7EBound3P5EVec3i(this,vPoints + 1,count + -1);
  }
  return;
}

void EBound3::Compute(EVec3 *vPoints, int count, EMat4 &mOrient) {
	EVec3 &vLeft;
	EMat4 &mRight;
	EBound3 *this;
	EMat4 &mRight;
	EBound3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong in_t1;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (count == 0) {
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
    fVar6 = (mOrient->field0_0x0).d[3][2];
    uVar5 = *(ulong *)((int)&mOrient->field0_0x0 + 0x30);
    puVar1 = (undefined *)((int)&(this->vMax).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)&this->vMax & 7;
    puVar4 = (ulong *)((int)&this->vMax - uVar3);
    *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (this->vMax).field0_0x0.d[2] = fVar6;
    puVar1 = (undefined *)((int)&(this->vMax).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar2 = (uint)&this->vMax & 7;
    uVar5 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            in_t1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)&this->vMax - uVar2) >> uVar2 * 8;
    fVar6 = (this->vMax).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(this->vMin).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)this & 7;
    *(ulong *)((int)this - uVar3) =
         uVar5 << uVar3 * 8 | *(ulong *)((int)this - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
    ;
    (this->vMin).field0_0x0.d[2] = fVar6;
                    /* end of inlined section */
  }
  else {
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
    fVar6 = (vPoints->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
    fVar11 = (vPoints->field0_0x0).d[1];
    fVar7 = (mOrient->field0_0x0).d[2];
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
    fVar12 = (mOrient->field0_0x0).d[1][2];
    fVar10 = (vPoints->field0_0x0).d[2];
    fVar8 = (mOrient->field0_0x0).d[2][2];
    fVar9 = (mOrient->field0_0x0).d[3][2];
    uVar5 = CONCAT44(fVar6 * (mOrient->field0_0x0).d[1] + fVar11 * (mOrient->field0_0x0).d[1][1] +
                     fVar10 * (mOrient->field0_0x0).d[2][1] + (mOrient->field0_0x0).d[3][1],
                     fVar6 * (mOrient->field0_0x0).d[0] + fVar11 * (mOrient->field0_0x0).d[1][0] +
                     fVar10 * (mOrient->field0_0x0).d[2][0] + (mOrient->field0_0x0).d[3][0]);
    puVar1 = (undefined *)((int)&(this->vMax).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)&this->vMax & 7;
    puVar4 = (ulong *)((int)&this->vMax - uVar3);
    *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (this->vMax).field0_0x0.d[2] = fVar6 * fVar7 + fVar11 * fVar12 + fVar10 * fVar8 + fVar9;
    puVar1 = (undefined *)((int)&(this->vMax).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar2 = (uint)&this->vMax & 7;
    uVar5 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar5 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)&this->vMax - uVar2) >> uVar2 * 8;
    fVar6 = (this->vMax).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(this->vMin).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)this & 7;
    *(ulong *)((int)this - uVar3) =
         uVar5 << uVar3 * 8 | *(ulong *)((int)this - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
    ;
    (this->vMin).field0_0x0.d[2] = fVar6;
                    /* end of inlined section */
    Add__7EBound3P5EVec3iRC5EMat4(this,vPoints + 1,count + -1,mOrient);
  }
  return;
}

void EBound3::Compute(EBound3 &b, EMat4 &mOrient) {
	EVec3 vPoints[8];
	EMat4 &mRight;
	EBound3 *this;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EVec3 vPoints [8];
  
                    /* end of inlined section */
  iVar6 = 6;
  do {
    bVar2 = iVar6 != -1;
    iVar6 = iVar6 + -1;
  } while (bVar2);
  GetCorners__C7EBound3P5EVec3(b,vPoints);
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
  fVar8 = (mOrient->field0_0x0).d[2];
  fVar11 = (mOrient->field0_0x0).d[1][2];
  fVar9 = (mOrient->field0_0x0).d[2][2];
  fVar10 = (mOrient->field0_0x0).d[3][2];
  uVar7 = CONCAT44(vPoints[0].field0_0x0._0_4_ * (mOrient->field0_0x0).d[1] +
                   vPoints[0].field0_0x0._4_4_ * (mOrient->field0_0x0).d[1][1] +
                   vPoints[0].field0_0x0._8_4_ * (mOrient->field0_0x0).d[2][1] +
                   (mOrient->field0_0x0).d[3][1],
                   vPoints[0].field0_0x0._0_4_ * (mOrient->field0_0x0).d[0] +
                   vPoints[0].field0_0x0._4_4_ * (mOrient->field0_0x0).d[1][0] +
                   vPoints[0].field0_0x0._8_4_ * (mOrient->field0_0x0).d[2][0] +
                   (mOrient->field0_0x0).d[3][0]);
  puVar1 = (undefined *)((int)&(this->vMax).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->vMax & 7;
  puVar5 = (ulong *)((int)&this->vMax - uVar4);
  *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->vMax).field0_0x0.d[2] =
       vPoints[0].field0_0x0._0_4_ * fVar8 + vPoints[0].field0_0x0._4_4_ * fVar11 +
       vPoints[0].field0_0x0._8_4_ * fVar9 + fVar10;
  puVar1 = (undefined *)((int)&(this->vMax).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->vMax & 7;
  uVar7 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->vMax - uVar3) >> uVar3 * 8;
  fVar8 = (this->vMax).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->vMin).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  uVar4 = (uint)this & 7;
  *(ulong *)((int)this - uVar4) =
       uVar7 << uVar4 * 8 | *(ulong *)((int)this - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->vMin).field0_0x0.d[2] = fVar8;
                    /* end of inlined section */
  Add__7EBound3P5EVec3iRC5EMat4(this,vPoints + 1,7,mOrient);
  return;
}

void EBound3::CalcBoundSphere(EBoundSphere &bsOut) {
	EBound3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar6 = (this->vMax).field0_0x0.d[2];
  fVar5 = (this->vMin).field0_0x0.d[2];
                    /* end of inlined section */
  uVar4 = CONCAT44(((this->vMin).field0_0x0.d[1] + (this->vMax).field0_0x0.d[1]) * 0.5,
                   ((this->vMin).field0_0x0.d[0] + (this->vMax).field0_0x0.d[0]) * 0.5);
  puVar1 = (undefined *)((int)&(bsOut->vCenter).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)bsOut & 7;
  *(ulong *)((int)bsOut - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)bsOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (bsOut->vCenter).field0_0x0.d[2] = (fVar5 + fVar6) * 0.5;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar7 = (bsOut->vCenter).field0_0x0.d[0] - (this->vMax).field0_0x0.d[0];
  fVar6 = (bsOut->vCenter).field0_0x0.d[1] - (this->vMax).field0_0x0.d[1];
  fVar5 = (bsOut->vCenter).field0_0x0.d[2] - (this->vMax).field0_0x0.d[2];
  fVar5 = sqrtf(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
                    /* end of inlined section */
  bsOut->radius = fVar5;
  return;
}

void EBound3::Compute(EVec3 &vCenter, float radius) {
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  float fVar1;
  float fVar2;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar1 = (vCenter->field0_0x0).d[1];
  fVar2 = (vCenter->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  (this->vMin).field0_0x0.d[0] = (vCenter->field0_0x0).d[0] - radius;
  (this->vMin).field0_0x0.d[1] = fVar1 - radius;
  (this->vMin).field0_0x0.d[2] = fVar2 - radius;
  fVar1 = (vCenter->field0_0x0).d[2];
  fVar2 = (vCenter->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  (this->vMax).field0_0x0.d[0] = (vCenter->field0_0x0).d[0] + radius;
  (this->vMax).field0_0x0.d[2] = fVar1 + radius;
  (this->vMax).field0_0x0.d[1] = fVar2 + radius;
  return;
}

void EBound3::Compute(EBoundSphere &bs) {
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* end of inlined section */
  fVar2 = bs->radius;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar1 = (bs->vCenter).field0_0x0.d[1];
  fVar3 = (bs->vCenter).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  (this->vMin).field0_0x0.d[0] = (bs->vCenter).field0_0x0.d[0] - fVar2;
  (this->vMin).field0_0x0.d[1] = fVar1 - fVar2;
  (this->vMin).field0_0x0.d[2] = fVar3 - fVar2;
                    /* end of inlined section */
  fVar1 = bs->radius;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar3 = (bs->vCenter).field0_0x0.d[2];
  fVar2 = (bs->vCenter).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  (this->vMax).field0_0x0.d[0] = (bs->vCenter).field0_0x0.d[0] + fVar1;
  (this->vMax).field0_0x0.d[2] = fVar3 + fVar1;
  (this->vMax).field0_0x0.d[1] = fVar2 + fVar1;
  return;
}
