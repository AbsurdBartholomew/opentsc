// STATUS: NOT STARTED

#include "e_rotdecomp.h"

void ERotDecomp::Init(EBitArray *pData, int startPos) {
	int currentDataPos;
	int k;
	int deltaTime;
	
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = DAT_003cce58;
  this->m_fast = '\0';
  this->m_pData = pData;
  this->m_lastFrame = fVar5;
  uVar2 = Get__C9EBitArrayii(pData,startPos,0x14);
  this->m_nKeyframes = uVar2;
  uVar2 = Get__C9EBitArrayii(this->m_pData,startPos + 0x14,5);
  this->m_nBitsDeltaTime = (char)uVar2;
  uVar2 = Get__C9EBitArrayii(this->m_pData,startPos + 0x19,5);
  cVar3 = (char)uVar2;
  this->m_nBitsBias = cVar3;
  if (cVar3 == 0) {
    this->m_biasScale = 0.0;
  }
  else {
    fVar5 = SignedBitsToFloatScaler__9EBitArrayi(this->m_pData,(int)cVar3);
    this->m_biasScale = fVar5;
  }
  uVar2 = Get__C9EBitArrayii(this->m_pData,startPos + 0x1e,5);
  this->m_nBitsQuat = (char)uVar2;
  if ((uVar2 & 0xff) == 0) {
    this->m_nBitsQuat = ' ';
  }
  iVar4 = 0;
  fVar5 = SignedBitsToFloatScaler__9EBitArrayi(this->m_pData,(int)this->m_nBitsQuat);
  this->m_quatScale = fVar5;
  this->m_startDataPos = startPos + 0x23;
  this->m_nBitsKeyframe =
       (short)this->m_nBitsDeltaTime + (short)this->m_nBitsBias + this->m_nBitsQuat * 3 + 1;
  this->m_nFrames = 0;
  if (0 < this->m_nKeyframes) {
    do {
      iVar1 = iVar4 * (short)this->m_nBitsKeyframe;
      iVar4 = iVar4 + 1;
      uVar2 = Get__C9EBitArrayii(this->m_pData,this->m_startDataPos + iVar1,
                                 (int)this->m_nBitsDeltaTime);
      this->m_nFrames = this->m_nFrames + uVar2 + 1;
    } while (iVar4 < this->m_nKeyframes);
  }
  Reset__10ERotDecomp(this);
  return;
}

int ERotDecomp::GetBitCount() {
  return this->m_nKeyframes * (int)(short)this->m_nBitsKeyframe + 0x23;
}

EQuat ERotDecomp::GetFrame(float frame) {
	float fCurrentSplineStartFrame;
	float fCurrentSplineEndFrame;
	float u;
	EQuat qOut;
	float u;
	EQuat q0;
	EQuat q1;
	EQuat q2;
	float u;
	EQuat &qA;
	EQuat &qB;
	EQuat &q;
	EQuat *this;
	EQuat *this;
	float u;
	float u;
	float u;
	EQuat *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EQuat qOut;
  EQuat q0;
  EQuat q1;
  EQuat q2;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar4 = (float)this->m_currentSplineStartFrame;
  if (frame < fVar4) {
    Reset__10ERotDecomp(this);
    fVar4 = (float)this->m_currentSplineStartFrame;
    this->m_lastFrame = DAT_003cce5c;
  }
  fVar5 = (float)this->m_currentSplineEndFrame;
  if (fVar5 < frame) {
    do {
      NextSegment__10ERotDecompf(this,frame);
      fVar5 = (float)this->m_currentSplineEndFrame;
    } while (fVar5 < frame);
    fVar4 = (float)this->m_currentSplineStartFrame;
  }
  this->m_lastFrame = frame;
  fVar4 = (frame - fVar4) / (fVar5 - fVar4);
  if (this->m_fast == '\0') {
                    /* inlined from /eor/src2/common/math/e_quat.h */
    local_8c = (this->m_anp1).field0_0x0.d[1] - (this->m_bn).field0_0x0.d[1];
    local_88 = (this->m_anp1).field0_0x0.d[2] - (this->m_bn).field0_0x0.d[2];
    local_84 = (this->m_anp1).field0_0x0.d[3] - (this->m_bn).field0_0x0.d[3];
    local_90 = (this->m_anp1).field0_0x0.d[0] - (this->m_bn).field0_0x0.d[0];
    __ml__FfRC5EQuat((EQuat *)&local_a0,fVar4,(EQuat *)&local_90);
    local_a0 = (this->m_bn).field0_0x0.d[0] + local_a0;
    local_9c = (this->m_bn).field0_0x0.d[1] + local_9c;
    local_98 = (this->m_bn).field0_0x0.d[2] + local_98;
    fVar5 = (this->m_qn).field0_0x0.d[0];
    local_94 = (this->m_bn).field0_0x0.d[3] + local_94;
    local_b0 = local_a0;
    local_ac = local_9c;
    local_a8 = local_98;
    local_a4 = local_94;
    q0.field0_0x0._0_8_ = CONCAT44(local_9c,local_a0);
    q0.field0_0x0._8_8_ = CONCAT44(local_94,local_98);
    puVar1 = (undefined *)((int)&q0.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)q0.field0_0x0._0_8_ >> (7 - uVar2) * 8;
    puVar1 = (undefined *)((int)&q0.field0_0x0 + 0xf);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)q0.field0_0x0._8_8_ >> (7 - uVar2) * 8;
    local_9c = local_9c - (this->m_qn).field0_0x0.d[1];
    local_a0 = local_a0 - fVar5;
    local_98 = local_98 - (this->m_qn).field0_0x0.d[2];
    local_94 = local_94 - (this->m_qn).field0_0x0.d[3];
    __ml__FfRC5EQuat((EQuat *)&local_b0,fVar4,(EQuat *)&local_a0);
    local_90 = (this->m_qnp1).field0_0x0.d[0];
    q2.field0_0x0._0_8_ =
         CONCAT44((this->m_qn).field0_0x0.d[1] + local_ac,(this->m_qn).field0_0x0.d[0] + local_b0);
    q1.field0_0x0._0_8_ = q2.field0_0x0._0_8_;
    q2.field0_0x0._8_8_ =
         CONCAT44((this->m_qn).field0_0x0.d[3] + local_a4,(this->m_qn).field0_0x0.d[2] + local_a8);
    q1.field0_0x0._8_8_ = q2.field0_0x0._8_8_;
    puVar1 = (undefined *)((int)&q1.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)q2.field0_0x0._0_8_ >> (7 - uVar2) * 8;
    puVar1 = (undefined *)((int)&q1.field0_0x0 + 0xf);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)q1.field0_0x0._8_8_ >> (7 - uVar2) * 8;
    local_90 = local_90 - q0.field0_0x0.d[0];
    local_8c = (this->m_qnp1).field0_0x0.d[1] - q0.field0_0x0.d[1];
    local_84 = (this->m_qnp1).field0_0x0.d[3] - q0.field0_0x0.d[3];
    local_88 = (this->m_qnp1).field0_0x0.d[2] - q0.field0_0x0.d[2];
    __ml__FfRC5EQuat((EQuat *)&local_a0,fVar4,(EQuat *)&local_90);
    local_90 = q0.field0_0x0.d[0] + local_a0;
    local_8c = q0.field0_0x0.d[1] + local_9c;
    local_88 = q0.field0_0x0.d[2] + local_98;
    local_b0 = local_90;
    local_84 = q0.field0_0x0.d[3] + local_94;
    local_ac = local_8c;
    local_a8 = local_88;
    local_a4 = local_84;
    q2.field0_0x0._0_8_ = CONCAT44(local_8c,local_90);
    q2.field0_0x0._8_8_ = CONCAT44(local_84,local_88);
    puVar1 = (undefined *)((int)&q2.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)q2.field0_0x0._0_8_ >> (7 - uVar2) * 8;
    puVar1 = (undefined *)((int)&q2.field0_0x0 + 0xf);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)q2.field0_0x0._8_8_ >> (7 - uVar2) * 8;
    local_90 = local_90 - q1.field0_0x0.d[0];
    local_8c = local_8c - q1.field0_0x0.d[1];
    local_88 = local_88 - q1.field0_0x0.d[2];
    local_84 = local_84 - q1.field0_0x0.d[3];
    __ml__FfRC5EQuat((EQuat *)&local_a0,fVar4,(EQuat *)&local_90);
    fVar7 = q1.field0_0x0.d[0] + local_a0;
    fVar6 = q1.field0_0x0.d[1] + local_9c;
    fVar4 = q1.field0_0x0.d[2] + local_98;
    local_b0 = fVar7;
    fVar5 = q1.field0_0x0.d[3] + local_94;
    local_ac = fVar6;
    local_a8 = fVar4;
    local_a4 = fVar5;
    qOut.field0_0x0._0_8_ = CONCAT44(fVar6,fVar7);
    qOut.field0_0x0._8_8_ = CONCAT44(fVar5,fVar4);
    puVar1 = (undefined *)((int)&qOut.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)qOut.field0_0x0._0_8_ >> (7 - uVar2) * 8;
    puVar1 = (undefined *)((int)&qOut.field0_0x0 + 0xf);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)qOut.field0_0x0._8_8_ >> (7 - uVar2) * 8;
    fVar4 = sqrtf(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  }
  else {
                    /* inlined from /eor/src2/common/math/e_quat.h */
    q2.field0_0x0._0_8_ =
         CONCAT44((this->m_qnp1).field0_0x0.d[1] - (this->m_qn).field0_0x0.d[1],
                  (this->m_qnp1).field0_0x0.d[0] - (this->m_qn).field0_0x0.d[0]);
    q2.field0_0x0._8_8_ =
         CONCAT44((this->m_qnp1).field0_0x0.d[3] - (this->m_qn).field0_0x0.d[3],
                  (this->m_qnp1).field0_0x0.d[2] - (this->m_qn).field0_0x0.d[2]);
    __ml__FfRC5EQuat(&q1,fVar4,&q2);
    fVar7 = (this->m_qn).field0_0x0.d[0] + q1.field0_0x0.d[0];
    fVar5 = (this->m_qn).field0_0x0.d[1] + q1.field0_0x0.d[1];
    fVar4 = (this->m_qn).field0_0x0.d[2] + q1.field0_0x0.d[2];
    fVar6 = (this->m_qn).field0_0x0.d[3] + q1.field0_0x0.d[3];
    q0.field0_0x0._0_8_ = CONCAT44(fVar5,fVar7);
    qOut.field0_0x0._0_8_ = q0.field0_0x0._0_8_;
    q0.field0_0x0._8_8_ = CONCAT44(fVar6,fVar4);
    qOut.field0_0x0._8_8_ = q0.field0_0x0._8_8_;
    puVar1 = (undefined *)((int)&qOut.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)q0.field0_0x0._0_8_ >> (7 - uVar2) * 8;
    puVar1 = (undefined *)((int)&qOut.field0_0x0 + 0xf);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)qOut.field0_0x0._8_8_ >> (7 - uVar2) * 8;
    fVar4 = sqrtf(fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
  }
  if (fVar4 == 0.0) {
    Id__5EQuat(&qOut);
  }
  else {
    fVar4 = 1.0 / fVar4;
    qOut.field0_0x0.d[1] = (float)((ulong)qOut.field0_0x0._0_8_ >> 0x20);
    qOut.field0_0x0.d[3] = (float)((ulong)qOut.field0_0x0._8_8_ >> 0x20);
    qOut.field0_0x0.d[0] = qOut.field0_0x0.d[0] * fVar4;
    qOut.field0_0x0._0_8_ = CONCAT44(qOut.field0_0x0.d[1] * fVar4,qOut.field0_0x0.d[0]);
    qOut.field0_0x0._8_8_ = CONCAT44(qOut.field0_0x0.d[3] * fVar4,qOut.field0_0x0.d[2] * fVar4);
                    /* inlined from /eor/src2/common/math/e_quat.h */
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
  (__return_storage_ptr__->field0_0x0).d[0] = qOut.field0_0x0.d[0];
  (__return_storage_ptr__->field0_0x0).d[1] = qOut.field0_0x0.d[1];
  (__return_storage_ptr__->field0_0x0).d[2] = qOut.field0_0x0.d[2];
  (__return_storage_ptr__->field0_0x0).d[3] = qOut.field0_0x0.d[3];
  return __return_storage_ptr__;
}

void ERotDecomp::NextSegment(float frame) {
	int nextFrame;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  
  iVar9 = this->m_currentKeyframe;
  this->m_currentKeyframe = iVar9 + 1;
  this->m_currentSplineStartFrame = this->m_currentSplineEndFrame;
  uVar7 = Get__C9EBitArrayii(this->m_pData,
                             this->m_startDataPos + (iVar9 + 2) * (int)(short)this->m_nBitsKeyframe,
                             (int)this->m_nBitsDeltaTime);
  iVar9 = this->m_currentSplineEndFrame + 1 + uVar7;
  this->m_currentSplineEndFrame = iVar9;
  puVar1 = (undefined *)((int)&(this->m_qnp1).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_qnp1 & 7;
  uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          (long)(int)uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)&this->m_qnp1 - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&(this->m_qnp1).field0_0x0 + 0xf);
  uVar3 = (uint)puVar1 & 7;
  puVar2 = (undefined *)((int)&(this->m_qnp1).field0_0x0 + 8);
  uVar4 = (uint)puVar2 & 7;
  uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           (long)iVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&(this->m_qn).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_qn & 7;
  puVar5 = (ulong *)((int)&this->m_qn - uVar3);
  *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_qn).field0_0x0 + 0xf);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_qn).field0_0x0 + 8);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = uVar10 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  bVar6 = (float)(this->m_currentSplineEndFrame - this->m_currentSplineStartFrame) * 0.3333333 <=
          frame - this->m_lastFrame;
  iVar9 = this->m_currentKeyframe + 1;
  this->m_fast = bVar6;
  if (!bVar6) {
    GetQ__10ERotDecompiiR5EQuat(this,1,this->m_currentKeyframe,&this->m_bn);
    GetQ__10ERotDecompiiR5EQuat(this,0,iVar9,&this->m_anp1);
  }
  GetQ__10ERotDecompiiR5EQuat(this,2,iVar9,&this->m_qnp1);
  return;
}

void ERotDecomp::Reset() {
  uint uVar1;
  int keyframe;
  
  this->m_currentKeyframe = 0;
  this->m_currentSplineStartFrame = 0;
  uVar1 = Get__C9EBitArrayii(this->m_pData,this->m_startDataPos + (int)(short)this->m_nBitsKeyframe,
                             (int)this->m_nBitsDeltaTime);
  this->m_currentSplineEndFrame = uVar1 + 1;
  GetQ__10ERotDecompiiR5EQuat(this,2,this->m_currentKeyframe,&this->m_qn);
  GetQ__10ERotDecompiiR5EQuat(this,1,this->m_currentKeyframe,&this->m_bn);
  keyframe = this->m_currentKeyframe + 1;
  GetQ__10ERotDecompiiR5EQuat(this,0,keyframe,&this->m_anp1);
  GetQ__10ERotDecompiiR5EQuat(this,2,keyframe,&this->m_qnp1);
  return;
}

void ERotDecomp::GetKeyframe(int keyframe, ERotKeyframe &out) {
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
  GetQuatVal__10ERotDecompiR5EQuat(this,iVar4 + this->m_nBitsBias,&out->q);
  return;
}

void ERotDecomp::GetQuatVal(int dataPos, EQuat &qOut) {
	float x;
	int i;
	EQuat *this;
	int value;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	
  bool bVar1;
  int iVar2;
  EQuat__null___1__1 *pEVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = 2;
  pEVar3 = &qOut->field0_0x0;
  do {
    pEVar3 = (EQuat__null___1__1 *)(pEVar3->d + 1);
                    /* end of inlined section */
    iVar4 = iVar4 + -1;
    iVar2 = GetSigned__C9EBitArrayii(this->m_pData,dataPos,(int)this->m_nBitsQuat);
    pEVar3->d[0] = this->m_quatScale * (float)iVar2;
    dataPos = dataPos + this->m_nBitsQuat;
  } while (-1 < iVar4);
                    /* end of inlined section */
  fVar5 = 1.0 - ((qOut->field0_0x0).d[1] * (qOut->field0_0x0).d[1] +
                 (qOut->field0_0x0).d[2] * (qOut->field0_0x0).d[2] +
                (qOut->field0_0x0).d[3] * (qOut->field0_0x0).d[3]);
  if (fVar5 <= 0.0) {
                    /* end of inlined section */
    (qOut->field0_0x0).d[0] = 0.0;
  }
  else {
                    /* end of inlined section */
    fVar5 = sqrtf(fVar5);
    (qOut->field0_0x0).d[0] = fVar5;
    bVar1 = Get__C9EBitArrayi(this->m_pData,dataPos);
    if (bVar1) {
                    /* end of inlined section */
      (qOut->field0_0x0).d[0] = -(qOut->field0_0x0).d[0];
    }
  }
  return;
}

void ERotDecomp::GetQ(int sel, int keyframe, EQuat &qOut) {
	ERotKeyframe kn_1;
	ERotKeyframe kn;
	ERotKeyframe kn1;
	EQuat *qn_1;
	EQuat *qn1;
	int d1;
	int d2;
	EQuat *this;
	EQuat &qB;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat &qB;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	float f;
	float adjust;
	EQuat g1;
	EQuat g2;
	EQuat t;
	EQuat &qB;
	EQuat *this;
	EQuat &qB;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ERotKeyframe kn_1;
  ERotKeyframe kn;
  ERotKeyframe kn1;
  EQuat g1;
  EQuat g2;
  EQuat t;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  if (sel == 2) {
    GetQuatVal__10ERotDecompiR5EQuat
              (this,this->m_startDataPos + keyframe * (short)this->m_nBitsKeyframe +
                    (int)this->m_nBitsDeltaTime + (int)this->m_nBitsBias,qOut);
    return;
  }
                    /* end of inlined section */
  GetKeyframe__10ERotDecompiR12ERotKeyframe(this,keyframe,&kn);
  if (keyframe == 0) {
    GetKeyframe__10ERotDecompiR12ERotKeyframe(this,1,&kn1);
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
    fVar9 = kn.bias + 1.0;
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
    t.field0_0x0._8_8_ =
         CONCAT44(kn1.q.field0_0x0.d[3] - kn.q.field0_0x0.d[3],
                  kn1.q.field0_0x0.d[2] - kn.q.field0_0x0.d[2]);
    t.field0_0x0._0_8_ =
         CONCAT44(kn1.q.field0_0x0.d[1] - kn.q.field0_0x0.d[1],
                  kn1.q.field0_0x0.d[0] - kn.q.field0_0x0.d[0]);
                    /* end of inlined section */
  }
  else {
    if (keyframe != this->m_nKeyframes + -1) {
      GetKeyframe__10ERotDecompiR12ERotKeyframe(this,keyframe + -1,&kn_1);
      GetKeyframe__10ERotDecompiR12ERotKeyframe(this,keyframe + 1,&kn1);
      if (sel == 0) {
        fVar9 = 1.0;
        iVar4 = kn.time - kn_1.time;
      }
      else {
        fVar9 = -1.0;
        iVar4 = kn1.time - kn.time;
      }
      fVar5 = 1.0;
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
      local_a0 = kn_1.q.field0_0x0.d[0] - kn.q.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
      local_9c = kn_1.q.field0_0x0.d[1] - kn.q.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
      local_98 = kn_1.q.field0_0x0.d[2] - kn.q.field0_0x0.d[2];
      local_94 = kn_1.q.field0_0x0.d[3] - kn.q.field0_0x0.d[3];
      __ml__FfRC5EQuat((EQuat *)&local_b0,-(kn.bias + 1.0) * 0.5,(EQuat *)&local_a0);
      local_b0 = kn.q.field0_0x0.d[0] + local_b0;
      local_ac = kn.q.field0_0x0.d[1] + local_ac;
      local_a8 = kn.q.field0_0x0.d[2] + local_a8;
      local_a4 = kn.q.field0_0x0.d[3] + local_a4;
      local_c0 = local_b0;
      local_bc = local_ac;
      local_b8 = local_a8;
      local_b4 = local_a4;
      g1.field0_0x0._0_8_ = CONCAT44(local_ac,local_b0);
      g1.field0_0x0._8_8_ = CONCAT44(local_a4,local_a8);
      puVar1 = (undefined *)((int)&g1.field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)g1.field0_0x0._0_8_ >> (7 - uVar2) * 8;
      puVar1 = (undefined *)((int)&g1.field0_0x0 + 0xf);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)g1.field0_0x0._8_8_ >> (7 - uVar2) * 8;
      fVar6 = sqrtf(local_b0 * local_b0 + local_ac * local_ac + local_a8 * local_a8 +
                    local_a4 * local_a4);
      if (fVar6 == 0.0) {
        Id__5EQuat(&g1);
      }
      else {
        fVar5 = fVar5 / fVar6;
        g1.field0_0x0._0_8_ = CONCAT44(g1.field0_0x0.d[1] * fVar5,g1.field0_0x0.d[0] * fVar5);
        g1.field0_0x0._8_8_ = CONCAT44(g1.field0_0x0.d[3] * fVar5,g1.field0_0x0.d[2] * fVar5);
                    /* inlined from /eor/src2/common/math/e_quat.h */
      }
                    /* end of inlined section */
      fVar5 = 1.0;
                    /* inlined from /eor/src2/common/math/e_quat.h */
      local_b0 = kn1.q.field0_0x0.d[0] - kn.q.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
      local_a4 = kn1.q.field0_0x0.d[3] - kn.q.field0_0x0.d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
      local_ac = kn1.q.field0_0x0.d[1] - kn.q.field0_0x0.d[1];
      local_a8 = kn1.q.field0_0x0.d[2] - kn.q.field0_0x0.d[2];
      __ml__FfRC5EQuat((EQuat *)&local_c0,(1.0 - kn.bias) * 0.5,(EQuat *)&local_b0);
      fVar10 = kn.q.field0_0x0.d[0] + local_c0;
      fVar6 = kn.q.field0_0x0.d[1] + local_bc;
      fVar8 = kn.q.field0_0x0.d[2] + local_b8;
      fVar7 = kn.q.field0_0x0.d[3] + local_b4;
      t.field0_0x0._0_8_ = CONCAT44(fVar6,fVar10);
      g2.field0_0x0._0_8_ = t.field0_0x0._0_8_;
      t.field0_0x0._8_8_ = CONCAT44(fVar7,fVar8);
      g2.field0_0x0._8_8_ = t.field0_0x0._8_8_;
      puVar1 = (undefined *)((int)&g2.field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)t.field0_0x0._0_8_ >> (7 - uVar2) * 8;
      puVar1 = (undefined *)((int)&g2.field0_0x0 + 0xf);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)g2.field0_0x0._8_8_ >> (7 - uVar2) * 8;
      fVar6 = sqrtf(fVar10 * fVar10 + fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
      if (fVar6 == 0.0) {
        Id__5EQuat(&g2);
      }
      else {
        fVar5 = fVar5 / fVar6;
        g2.field0_0x0._0_8_ = CONCAT44(g2.field0_0x0.d[1] * fVar5,g2.field0_0x0.d[0] * fVar5);
        g2.field0_0x0._8_8_ = CONCAT44(g2.field0_0x0.d[3] * fVar5,g2.field0_0x0.d[2] * fVar5);
      }
      local_a0 = g2.field0_0x0.d[0] - g1.field0_0x0.d[0];
      local_9c = g2.field0_0x0.d[1] - g1.field0_0x0.d[1];
      local_98 = g2.field0_0x0.d[2] - g1.field0_0x0.d[2];
      local_94 = g2.field0_0x0.d[3] - g1.field0_0x0.d[3];
      __ml__FfRC5EQuat((EQuat *)&local_b0,0.5,(EQuat *)&local_a0);
      fVar7 = g1.field0_0x0.d[0] + local_b0;
      fVar10 = g1.field0_0x0.d[1] + local_ac;
      fVar5 = g1.field0_0x0.d[2] + local_a8;
      local_c0 = fVar7;
      fVar6 = g1.field0_0x0.d[3] + local_a4;
      local_bc = fVar10;
      local_b8 = fVar5;
      local_b4 = fVar6;
      t.field0_0x0._0_8_ = CONCAT44(fVar10,fVar7);
      t.field0_0x0._8_8_ = CONCAT44(fVar6,fVar5);
      puVar1 = (undefined *)((int)&t.field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)t.field0_0x0._0_8_ >> (7 - uVar2) * 8;
      puVar1 = (undefined *)((int)&t.field0_0x0 + 0xf);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)t.field0_0x0._8_8_ >> (7 - uVar2) * 8;
      fVar5 = sqrtf(fVar7 * fVar7 + fVar10 * fVar10 + fVar5 * fVar5 + fVar6 * fVar6);
      if (fVar5 == 0.0) {
        Id__5EQuat(&t);
      }
      else {
        fVar5 = 1.0 / fVar5;
        t.field0_0x0._0_8_ = CONCAT44(t.field0_0x0.d[1] * fVar5,t.field0_0x0.d[0] * fVar5);
        t.field0_0x0._8_8_ = CONCAT44(t.field0_0x0.d[3] * fVar5,t.field0_0x0.d[2] * fVar5);
                    /* inlined from /eor/src2/common/math/e_quat.h */
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
      local_a0 = t.field0_0x0.d[0] - kn.q.field0_0x0.d[0];
      local_9c = t.field0_0x0.d[1] - kn.q.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
      local_98 = t.field0_0x0.d[2] - kn.q.field0_0x0.d[2];
      local_94 = t.field0_0x0.d[3] - kn.q.field0_0x0.d[3];
      __ml__FfRC5EQuat((EQuat *)&local_b0,
                       fVar9 * ((float)iVar4 / (float)((kn.time - kn_1.time) + (kn1.time - kn.time))
                               ) * -2.0,(EQuat *)&local_a0);
      local_c0 = kn.q.field0_0x0.d[0] + local_b0;
      local_bc = kn.q.field0_0x0.d[1] + local_ac;
      local_b8 = kn.q.field0_0x0.d[2] + local_a8;
      local_b4 = kn.q.field0_0x0.d[3] + local_a4;
      puVar1 = (undefined *)((int)&qOut->field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(local_bc,local_c0) >> (7 - uVar2) * 8;
      uVar2 = (uint)qOut & 7;
      *(ulong *)((int)qOut - uVar2) =
           CONCAT44(local_bc,local_c0) << uVar2 * 8 |
           *(ulong *)((int)qOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)&qOut->field0_0x0 + 0xf);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(local_b4,local_b8) >> (7 - uVar2) * 8;
      puVar1 = (undefined *)((int)&qOut->field0_0x0 + 8);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = CONCAT44(local_b4,local_b8) << uVar2 * 8 |
                *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      fVar9 = sqrtf((qOut->field0_0x0).d[0] * (qOut->field0_0x0).d[0] +
                    (qOut->field0_0x0).d[1] * (qOut->field0_0x0).d[1] +
                    (qOut->field0_0x0).d[2] * (qOut->field0_0x0).d[2] +
                    (qOut->field0_0x0).d[3] * (qOut->field0_0x0).d[3]);
      if (fVar9 != 0.0) {
        fVar9 = 1.0 / fVar9;
        fVar6 = (qOut->field0_0x0).d[2];
        fVar10 = (qOut->field0_0x0).d[1];
        fVar5 = (qOut->field0_0x0).d[3];
        (qOut->field0_0x0).d[0] = (qOut->field0_0x0).d[0] * fVar9;
        (qOut->field0_0x0).d[3] = fVar5 * fVar9;
        (qOut->field0_0x0).d[1] = fVar10 * fVar9;
        (qOut->field0_0x0).d[2] = fVar6 * fVar9;
        return;
      }
      goto LAB_00320ab0;
    }
    GetKeyframe__10ERotDecompiR12ERotKeyframe(this,this->m_nKeyframes + -2,&kn_1);
                    /* end of inlined section */
    fVar9 = 1.0 - kn.bias;
                    /* inlined from /eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_quat.h */
    t.field0_0x0._0_8_ =
         CONCAT44(kn_1.q.field0_0x0.d[1] - kn.q.field0_0x0.d[1],
                  kn_1.q.field0_0x0.d[0] - kn.q.field0_0x0.d[0]);
    t.field0_0x0._8_8_ =
         CONCAT44(kn_1.q.field0_0x0.d[3] - kn.q.field0_0x0.d[3],
                  kn_1.q.field0_0x0.d[2] - kn.q.field0_0x0.d[2]);
                    /* inlined from /eor/src2/common/math/e_quat.h */
  }
  __ml__FfRC5EQuat(&g2,fVar9 * 0.5,&t);
  g1.field0_0x0._0_8_ =
       CONCAT44(kn.q.field0_0x0.d[1] + g2.field0_0x0.d[1],kn.q.field0_0x0.d[0] + g2.field0_0x0.d[0])
  ;
  g1.field0_0x0._8_8_ =
       CONCAT44(kn.q.field0_0x0.d[3] + g2.field0_0x0.d[3],kn.q.field0_0x0.d[2] + g2.field0_0x0.d[2])
  ;
  puVar1 = (undefined *)((int)&qOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)g1.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)qOut & 7;
  *(ulong *)((int)qOut - uVar2) =
       g1.field0_0x0._0_8_ << uVar2 * 8 |
       *(ulong *)((int)qOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&qOut->field0_0x0 + 0xf);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)g1.field0_0x0._8_8_ >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&qOut->field0_0x0 + 8);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = g1.field0_0x0._8_8_ << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  fVar9 = sqrtf((qOut->field0_0x0).d[0] * (qOut->field0_0x0).d[0] +
                (qOut->field0_0x0).d[1] * (qOut->field0_0x0).d[1] +
                (qOut->field0_0x0).d[2] * (qOut->field0_0x0).d[2] +
                (qOut->field0_0x0).d[3] * (qOut->field0_0x0).d[3]);
  if (fVar9 != 0.0) {
    fVar9 = 1.0 / fVar9;
    fVar6 = (qOut->field0_0x0).d[1];
    fVar10 = (qOut->field0_0x0).d[2];
    fVar5 = (qOut->field0_0x0).d[3];
    (qOut->field0_0x0).d[0] = (qOut->field0_0x0).d[0] * fVar9;
    (qOut->field0_0x0).d[3] = fVar5 * fVar9;
    (qOut->field0_0x0).d[1] = fVar6 * fVar9;
                    /* end of inlined section */
    (qOut->field0_0x0).d[2] = fVar10 * fVar9;
    return;
  }
LAB_00320ab0:
  Id__5EQuat(qOut);
  return;
}

EQuat& EQuat::Id() {
  (this->field0_0x0).d[0] = 0.0;
  (this->field0_0x0).d[3] = 1.0;
  (this->field0_0x0).d[2] = 0.0;
  (this->field0_0x0).d[1] = 0.0;
  return this;
}

EQuat operator*(float scaler, EQuat &q) {
	EQuat *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (q->field0_0x0).d[0];
  fVar2 = (q->field0_0x0).d[1];
  fVar3 = (q->field0_0x0).d[2];
  (__return_storage_ptr__->field0_0x0).d[3] = scaler * (q->field0_0x0).d[3];
  (__return_storage_ptr__->field0_0x0).d[0] = scaler * fVar1;
  (__return_storage_ptr__->field0_0x0).d[1] = scaler * fVar2;
  (__return_storage_ptr__->field0_0x0).d[2] = scaler * fVar3;
  return __return_storage_ptr__;
}
