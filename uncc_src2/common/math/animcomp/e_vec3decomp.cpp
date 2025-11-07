// STATUS: NOT STARTED

#include "e_vec3decomp.h"

void EVec3Decomp::Init(EBitArray *pData, int startPos) {
	int currentDataPos;
	float vecScale;
	int i;
	int value;
	int value;
	int k;
	int deltaTime;
	
  uint uVar1;
  char cVar2;
  int iVar3;
  int pos;
  EVec3 *pEVar4;
  EVec3 *pEVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = DAT_003ccc30;
  this->m_fast = '\0';
  this->m_pData = pData;
  this->m_lastFrame = fVar7;
  uVar1 = Get__C9EBitArrayii(pData,startPos,0x14);
  this->m_nKeyframes = uVar1;
  uVar1 = Get__C9EBitArrayii(this->m_pData,startPos + 0x14,5);
  this->m_nBitsDeltaTime = (char)uVar1;
  uVar1 = Get__C9EBitArrayii(this->m_pData,startPos + 0x19,5);
  cVar2 = (char)uVar1;
  this->m_nBitsBias = cVar2;
  if (cVar2 == 0) {
    this->m_biasScale = 0.0;
  }
  else {
    fVar7 = SignedBitsToFloatScaler__9EBitArrayi(this->m_pData,(int)cVar2);
    this->m_biasScale = fVar7;
  }
  uVar1 = Get__C9EBitArrayii(this->m_pData,startPos + 0x1e,5);
  this->m_nBitsVec = (char)uVar1;
  if ((uVar1 & 0xff) == 0) {
    this->m_nBitsVec = ' ';
  }
  iVar3 = startPos + 0x23;
  pEVar5 = &this->m_vOffset;
  pEVar4 = &this->m_vScale;
  iVar6 = 2;
  fVar7 = UnsignedBitsToFloatScaler__9EBitArrayi(this->m_pData,(int)this->m_nBitsVec);
  do {
                    /* end of inlined section */
    pos = iVar3 + 0x20;
    iVar6 = iVar6 + -1;
    fVar8 = GetFloat__C9EBitArrayi(this->m_pData,iVar3);
    iVar3 = iVar3 + 0x40;
    (pEVar4->field0_0x0).d[0] = fVar7 * fVar8;
    pEVar4 = (EVec3 *)((int)&pEVar4->field0_0x0 + 4);
    fVar8 = GetFloat__C9EBitArrayi(this->m_pData,pos);
    (pEVar5->field0_0x0).d[0] = fVar8;
    pEVar5 = (EVec3 *)((int)&pEVar5->field0_0x0 + 4);
  } while (-1 < iVar6);
  iVar6 = 0;
  this->m_startDataPos = iVar3;
  this->m_nBitsKeyframe =
       (short)this->m_nBitsDeltaTime + (short)this->m_nBitsBias + this->m_nBitsVec * 3;
  this->m_nFrames = 0;
  if (0 < this->m_nKeyframes) {
    do {
      iVar3 = iVar6 * (short)this->m_nBitsKeyframe;
      iVar6 = iVar6 + 1;
      uVar1 = Get__C9EBitArrayii(this->m_pData,this->m_startDataPos + iVar3,
                                 (int)this->m_nBitsDeltaTime);
      this->m_nFrames = this->m_nFrames + uVar1 + 1;
    } while (iVar6 < this->m_nKeyframes);
  }
  Reset__11EVec3Decomp(this);
  return;
}

int EVec3Decomp::GetBitCount() {
  return this->m_nKeyframes * (int)(short)this->m_nBitsKeyframe + 0xe3;
}

EVec3 EVec3Decomp::GetFrame(float frame) {
	float fCurrentSplineStartFrame;
	float fCurrentSplineEndFrame;
	float u;
	EVec3 vOut;
	float u;
	float scaler;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec3 vOut;
  float local_d0;
  float local_c8;
  
  fVar4 = (float)this->m_currentSplineStartFrame;
  if (frame < fVar4) {
    Reset__11EVec3Decomp(this);
    fVar4 = (float)this->m_currentSplineStartFrame;
    this->m_lastFrame = DAT_003ccc34;
  }
  fVar5 = (float)this->m_currentSplineEndFrame;
  if (fVar5 < frame) {
    do {
      NextSegment__11EVec3Decompf(this,frame);
      fVar5 = (float)this->m_currentSplineEndFrame;
    } while (fVar5 < frame);
    fVar4 = (float)this->m_currentSplineStartFrame;
  }
  this->m_lastFrame = frame;
  fVar4 = (frame - fVar4) / (fVar5 - fVar4);
  if (this->m_fast == '\0') {
    fVar8 = fVar4 * fVar4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar7 = fVar8 * fVar4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar5 = fVar7 * -2.0 + fVar8 * 3.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar4 = (fVar7 - (fVar8 + fVar8)) + fVar4;
    fVar6 = ((fVar7 + fVar7) - fVar8 * 3.0) + 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar7 = fVar7 - fVar8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_d0 = (this->m_vn).field0_0x0.d[0] * fVar6 + (this->m_bn).field0_0x0.d[0] * fVar4 +
               (this->m_vnp1).field0_0x0.d[0] * fVar5 + (this->m_anp1).field0_0x0.d[0] * fVar7;
    local_c8 = (this->m_vn).field0_0x0.d[2] * fVar6 + (this->m_bn).field0_0x0.d[2] * fVar4 +
               (this->m_vnp1).field0_0x0.d[2] * fVar5 + (this->m_anp1).field0_0x0.d[2] * fVar7;
    fVar5 = (this->m_vn).field0_0x0.d[1] * fVar6 + (this->m_bn).field0_0x0.d[1] * fVar4 +
            (this->m_vnp1).field0_0x0.d[1] * fVar5 + (this->m_anp1).field0_0x0.d[1] * fVar7;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_c8 = (this->m_vn).field0_0x0.d[2];
    local_d0 = (this->m_vn).field0_0x0.d[0];
    fVar5 = (this->m_vn).field0_0x0.d[1];
    local_c8 = local_c8 + ((this->m_vnp1).field0_0x0.d[2] - local_c8) * fVar4;
    local_d0 = local_d0 + ((this->m_vnp1).field0_0x0.d[0] - local_d0) * fVar4;
    fVar5 = fVar5 + ((this->m_vnp1).field0_0x0.d[1] - fVar5) * fVar4;
                    /* end of inlined section */
  }
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&vOut.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(fVar5,local_d0) >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[0] = local_d0;
  (__return_storage_ptr__->field0_0x0).d[1] = fVar5;
  (__return_storage_ptr__->field0_0x0).d[2] = local_c8;
  return __return_storage_ptr__;
}

void EVec3Decomp::NextSegment(float frame) {
	int nextFrame;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  
  iVar9 = this->m_currentKeyframe;
  this->m_currentKeyframe = iVar9 + 1;
  this->m_currentSplineStartFrame = this->m_currentSplineEndFrame;
  uVar7 = Get__C9EBitArrayii(this->m_pData,
                             this->m_startDataPos + (iVar9 + 2) * (int)(short)this->m_nBitsKeyframe,
                             (int)this->m_nBitsDeltaTime);
  this->m_currentSplineEndFrame = this->m_currentSplineEndFrame + 1 + uVar7;
  puVar1 = (undefined *)((int)&(this->m_vnp1).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vnp1 & 7;
  uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          (long)(int)uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vnp1 - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vnp1).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vn).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vn & 7;
  puVar5 = (ulong *)((int)&this->m_vn - uVar2);
  *puVar5 = uVar8 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vn).field0_0x0.d[2] = fVar4;
  bVar6 = (float)(this->m_currentSplineEndFrame - this->m_currentSplineStartFrame) * 0.3333333 <=
          frame - this->m_lastFrame;
  iVar9 = this->m_currentKeyframe + 1;
  this->m_fast = bVar6;
  if (!bVar6) {
    GetV__11EVec3DecompiiR5EVec3(this,1,this->m_currentKeyframe,&this->m_bn);
    GetV__11EVec3DecompiiR5EVec3(this,0,iVar9,&this->m_anp1);
  }
  GetV__11EVec3DecompiiR5EVec3(this,2,iVar9,&this->m_vnp1);
  return;
}

void EVec3Decomp::Reset() {
  uint uVar1;
  int keyframe;
  
  this->m_currentKeyframe = 0;
  this->m_currentSplineStartFrame = 0;
  uVar1 = Get__C9EBitArrayii(this->m_pData,this->m_startDataPos + (int)(short)this->m_nBitsKeyframe,
                             (int)this->m_nBitsDeltaTime);
  this->m_currentSplineEndFrame = uVar1 + 1;
  GetV__11EVec3DecompiiR5EVec3(this,2,this->m_currentKeyframe,&this->m_vn);
  GetV__11EVec3DecompiiR5EVec3(this,1,this->m_currentKeyframe,&this->m_bn);
  keyframe = this->m_currentKeyframe + 1;
  GetV__11EVec3DecompiiR5EVec3(this,0,keyframe,&this->m_anp1);
  GetV__11EVec3DecompiiR5EVec3(this,2,keyframe,&this->m_vnp1);
  return;
}

void EVec3Decomp::GetKeyframe(int keyframe, EVec3Keyframe &out) {
	int currentKeyframe;
	int currentTime;
	int currentPos;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = this->m_currentKeyframe;
  iVar5 = this->m_currentSplineStartFrame;
  iVar4 = this->m_startDataPos + iVar2 * (short)this->m_nBitsKeyframe;
  for (; keyframe < iVar2; iVar2 = iVar2 + -1) {
    uVar1 = Get__C9EBitArrayii(this->m_pData,iVar4,(int)this->m_nBitsDeltaTime);
    iVar5 = iVar5 - (uVar1 + 1);
    iVar4 = iVar4 - (short)this->m_nBitsKeyframe;
  }
  iVar3 = keyframe - iVar2;
  if (iVar2 < keyframe) {
    do {
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + (short)this->m_nBitsKeyframe;
      uVar1 = Get__C9EBitArrayii(this->m_pData,iVar4,(int)this->m_nBitsDeltaTime);
      iVar5 = iVar5 + uVar1 + 1;
    } while (iVar3 != 0);
  }
  out->time = iVar5;
  iVar4 = iVar4 + this->m_nBitsDeltaTime;
  iVar2 = GetSigned__C9EBitArrayii(this->m_pData,iVar4,(int)this->m_nBitsBias);
  out->bias = this->m_biasScale * (float)iVar2;
  GetVecVal__11EVec3DecompiR5EVec3(this,iVar4 + this->m_nBitsBias,&out->v);
  return;
}

void EVec3Decomp::GetVecVal(int dataPos, EVec3 &vOut) {
	int i;
	int value;
	int value;
	int value;
	
  EVec3__null___1__1 *pEVar1;
  uint uVar2;
  EVec3 *pEVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = 2;
  pEVar3 = &this->m_vOffset;
  do {
                    /* end of inlined section */
    iVar4 = iVar4 + -1;
    uVar2 = Get__C9EBitArrayii(this->m_pData,dataPos,(int)this->m_nBitsVec);
    if ((int)uVar2 < 0) {
      fVar6 = (float)(uVar2 & 1 | uVar2 >> 1);
      fVar6 = fVar6 + fVar6;
      fVar5 = pEVar3[-1].field0_0x0.d[0];
    }
    else {
      fVar6 = (float)uVar2;
      fVar5 = pEVar3[-1].field0_0x0.d[0];
    }
    pEVar1 = &pEVar3->field0_0x0;
    pEVar3 = (EVec3 *)((int)&pEVar3->field0_0x0 + 4);
    (vOut->field0_0x0).d[0] = fVar6 * fVar5 + pEVar1->d[0];
    vOut = (EVec3 *)((int)&vOut->field0_0x0 + 4);
    dataPos = dataPos + this->m_nBitsVec;
  } while (-1 < iVar4);
  return;
}

void EVec3Decomp::GetV(int sel, int keyframe, EVec3 &vOut) {
	EVec3Keyframe kn_1;
	EVec3Keyframe kn;
	EVec3Keyframe kn1;
	EVec3 *vn_1;
	int d1;
	int d2;
	EVec3 vNextAn;
	EVec3 &v;
	EVec3 vLastBn;
	EVec3 &v;
	float adjust;
	EVec3 &v;
	float scaler;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec3Keyframe kn_1;
  EVec3Keyframe kn;
  EVec3Keyframe kn1;
  EVec3 vNextAn;
  
  if (sel == 2) {
    GetVecVal__11EVec3DecompiR5EVec3
              (this,this->m_startDataPos + keyframe * (short)this->m_nBitsKeyframe +
                    (int)this->m_nBitsDeltaTime + (int)this->m_nBitsBias,vOut);
  }
  else {
                    /* end of inlined section */
    GetKeyframe__11EVec3DecompiR13EVec3Keyframe(this,keyframe,&kn);
    if (keyframe == 0) {
      GetKeyframe__11EVec3DecompiR13EVec3Keyframe(this,1,&kn1);
      if (this->m_nKeyframes != 2) {
                    /* end of inlined section */
        GetV__11EVec3DecompiiR5EVec3(this,0,1,&vNextAn);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        uVar4 = CONCAT44((kn1.v.field0_0x0.d[1] - kn.v.field0_0x0.d[1]) * 1.5 -
                         vNextAn.field0_0x0.d[1] * 0.5,
                         (kn1.v.field0_0x0.d[0] - kn.v.field0_0x0.d[0]) * 1.5 -
                         vNextAn.field0_0x0.d[0] * 0.5);
        puVar1 = (undefined *)((int)&vOut->field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
        uVar2 = (uint)vOut & 7;
        *(ulong *)((int)vOut - uVar2) =
             uVar4 << uVar2 * 8 |
             *(ulong *)((int)vOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        (vOut->field0_0x0).d[2] =
             (kn1.v.field0_0x0.d[2] - kn.v.field0_0x0.d[2]) * 1.5 - vNextAn.field0_0x0.d[2] * 0.5;
        return;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vNextAn.field0_0x0.d[2] = kn1.v.field0_0x0.d[2] - kn.v.field0_0x0.d[2];
      vNextAn.field0_0x0.d[1] = kn1.v.field0_0x0.d[1] - kn.v.field0_0x0.d[1];
      vNextAn.field0_0x0.d[0] = kn1.v.field0_0x0.d[0] - kn.v.field0_0x0.d[0];
                    /* end of inlined section */
    }
    else if (keyframe == this->m_nKeyframes + -1) {
      iVar5 = this->m_nKeyframes + -2;
      GetKeyframe__11EVec3DecompiR13EVec3Keyframe(this,iVar5,&kn_1);
      if (this->m_nKeyframes != 2) {
                    /* end of inlined section */
        GetV__11EVec3DecompiiR5EVec3(this,1,iVar5,&vNextAn);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        uVar4 = CONCAT44((kn.v.field0_0x0.d[1] - kn_1.v.field0_0x0.d[1]) * 1.5 -
                         vNextAn.field0_0x0.d[1] * 0.5,
                         (kn.v.field0_0x0.d[0] - kn_1.v.field0_0x0.d[0]) * 1.5 -
                         vNextAn.field0_0x0.d[0] * 0.5);
        puVar1 = (undefined *)((int)&vOut->field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
        uVar2 = (uint)vOut & 7;
        *(ulong *)((int)vOut - uVar2) =
             uVar4 << uVar2 * 8 |
             *(ulong *)((int)vOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        (vOut->field0_0x0).d[2] =
             (kn.v.field0_0x0.d[2] - kn_1.v.field0_0x0.d[2]) * 1.5 - vNextAn.field0_0x0.d[2] * 0.5;
        return;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vNextAn.field0_0x0.d[0] = kn.v.field0_0x0.d[0] - kn_1.v.field0_0x0.d[0];
      vNextAn.field0_0x0.d[1] = kn.v.field0_0x0.d[1] - kn_1.v.field0_0x0.d[1];
      vNextAn.field0_0x0.d[2] = kn.v.field0_0x0.d[2] - kn_1.v.field0_0x0.d[2];
                    /* end of inlined section */
    }
    else {
      GetKeyframe__11EVec3DecompiR13EVec3Keyframe(this,keyframe + -1,&kn_1);
      GetKeyframe__11EVec3DecompiR13EVec3Keyframe(this,keyframe + 1,&kn1);
      iVar5 = kn1.time - kn.time;
      if (sel == 0) {
        iVar5 = kn.time - kn_1.time;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar8 = (float)iVar5 / (float)((kn.time - kn_1.time) + (kn1.time - kn.time));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar6 = kn.bias + 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar7 = 1.0 - kn.bias;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vNextAn.field0_0x0.d[2] =
           ((kn.v.field0_0x0.d[2] - kn_1.v.field0_0x0.d[2]) * fVar6 +
           (kn1.v.field0_0x0.d[2] - kn.v.field0_0x0.d[2]) * fVar7) * fVar8;
      vNextAn.field0_0x0.d[0] =
           ((kn.v.field0_0x0.d[0] - kn_1.v.field0_0x0.d[0]) * fVar6 +
           (kn1.v.field0_0x0.d[0] - kn.v.field0_0x0.d[0]) * fVar7) * fVar8;
      vNextAn.field0_0x0.d[1] =
           ((kn.v.field0_0x0.d[1] - kn_1.v.field0_0x0.d[1]) * fVar6 +
           (kn1.v.field0_0x0.d[1] - kn.v.field0_0x0.d[1]) * fVar7) * fVar8;
    }
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&vOut->field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
              CONCAT44(vNextAn.field0_0x0.d[1],vNextAn.field0_0x0.d[0]) >> (7 - uVar2) * 8;
    uVar2 = (uint)vOut & 7;
    *(ulong *)((int)vOut - uVar2) =
         CONCAT44(vNextAn.field0_0x0.d[1],vNextAn.field0_0x0.d[0]) << uVar2 * 8 |
         *(ulong *)((int)vOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (vOut->field0_0x0).d[2] = vNextAn.field0_0x0.d[2];
  }
  return;
}
