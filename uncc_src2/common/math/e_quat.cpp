// STATUS: NOT STARTED

#include "e_quat.h"

void EQuat::Print() {
  return;
}

void EQuat::ToMat4(EMat4 &m) {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = (this->field0_0x0).d[0];
  fVar5 = (this->field0_0x0).d[1];
  fVar3 = (this->field0_0x0).d[2];
  fVar1 = fVar5 + fVar5;
  fVar6 = (this->field0_0x0).d[3];
  fVar2 = fVar3 + fVar3;
  fVar7 = (fVar4 + fVar4) * fVar4;
  (m->field0_0x0).d[3] = 0.0;
  (m->field0_0x0).d[3][3] = 1.0;
  (m->field0_0x0).d[1][3] = 0.0;
  (m->field0_0x0).d[2][3] = 0.0;
  fVar8 = (fVar4 + fVar4) * fVar6;
  (m->field0_0x0).d[3][0] = 0.0;
  (m->field0_0x0).d[3][1] = 0.0;
  (m->field0_0x0).d[3][2] = 0.0;
  (m->field0_0x0).d[2][0] = fVar2 * fVar4 + fVar1 * fVar6;
  (m->field0_0x0).d[1][0] = fVar1 * fVar4 - fVar2 * fVar6;
  (m->field0_0x0).d[2][1] = fVar2 * fVar5 - fVar8;
  (m->field0_0x0).d[0] = 1.0 - (fVar1 * fVar5 + fVar2 * fVar3);
  (m->field0_0x0).d[1][1] = 1.0 - (fVar7 + fVar2 * fVar3);
  (m->field0_0x0).d[2][2] = 1.0 - (fVar7 + fVar1 * fVar5);
  (m->field0_0x0).d[1] = fVar1 * fVar4 + fVar2 * fVar6;
  (m->field0_0x0).d[2] = fVar2 * fVar4 - fVar1 * fVar6;
  (m->field0_0x0).d[1][2] = fVar2 * fVar5 + fVar8;
  return;
}

void EQuat::FromMat4(EMat4 &m) {
	float &y;
	float &z;
	float fRoot;
	static int s_iNext[3] = {
		/* [0] = */ 1,
		/* [1] = */ 2,
		/* [2] = */ 0
	};
	int i;
	int j;
	int k;
	float fRoot;
	float *apkQuat[3];
	
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *apkQuat [3];
  
  fVar8 = (m->field0_0x0).d[0];
  fVar9 = (m->field0_0x0).d[1][1];
  fVar10 = (m->field0_0x0).d[2][2];
  fVar7 = fVar8 + fVar9 + fVar10;
  if (0.0 < fVar7) {
    fVar7 = sqrtf(fVar7 + 1.0);
    fVar8 = 0.5 / fVar7;
    (this->field0_0x0).d[3] = fVar7 * 0.5;
    (this->field0_0x0).d[0] = ((m->field0_0x0).d[1][2] - (m->field0_0x0).d[2][1]) * fVar8;
    (this->field0_0x0).d[1] = ((m->field0_0x0).d[2][0] - (m->field0_0x0).d[2]) * fVar8;
    (this->field0_0x0).d[2] = ((m->field0_0x0).d[1] - (m->field0_0x0).d[1][0]) * fVar8;
  }
  else {
    uVar6 = (uint)(fVar8 < fVar9);
    if (*(float *)((int)&m->field0_0x0 + uVar6 * 0x14) < fVar10) {
      uVar6 = 2;
    }
    iVar4 = uVar6 * 4;
    iVar1 = *(int *)(s_iNext_945 + iVar4);
    iVar5 = iVar1 * 4;
    iVar2 = *(int *)(s_iNext_945 + iVar5);
    fVar7 = sqrtf(((*(float *)((int)&m->field0_0x0 + uVar6 * 0x14) -
                   *(float *)((int)&m->field0_0x0 + iVar1 * 0x14)) -
                  *(float *)((int)&m->field0_0x0 + iVar2 * 0x14)) + 1.0);
    apkQuat[1] = (this->field0_0x0).d + 1;
    apkQuat[2] = (this->field0_0x0).d + 2;
    apkQuat[0] = (float *)this;
    fVar8 = 0.5 / fVar7;
    *apkQuat[uVar6] = fVar7 * 0.5;
    pfVar3 = apkQuat[iVar1];
    (this->field0_0x0).d[3] =
         (*(float *)((int)&m->field0_0x0 + iVar2 * 4 + iVar1 * 0x10) -
         *(float *)((int)&m->field0_0x0 + iVar5 + iVar2 * 0x10)) * fVar8;
    *pfVar3 = (*(float *)((int)&m->field0_0x0 + iVar5 + uVar6 * 0x10) +
              *(float *)((int)&m->field0_0x0 + iVar4 + iVar1 * 0x10)) * fVar8;
    *apkQuat[iVar2] =
         (*(float *)((int)&m->field0_0x0 + iVar2 * 4 + uVar6 * 0x10) +
         *(float *)((int)&m->field0_0x0 + iVar4 + iVar2 * 0x10)) * fVar8;
  }
  return;
}

void EQuat::ToAxisAngle(EVec3 &vAxisOut, float &angleOut) {
	float onemw2;
	EVec3 *this;
	float denom;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  float fVar1;
  float fVar2;
  float x;
  
  fVar1 = 1.0;
  fVar2 = (this->field0_0x0).d[3];
  x = 1.0 - fVar2 * fVar2;
  if (x <= 0.0) {
    *angleOut = 0.0;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
    (vAxisOut->field0_0x0).d[2] = 0.0;
    (vAxisOut->field0_0x0).d[0] = 1.0;
                    /* end of inlined section */
    (vAxisOut->field0_0x0).d[1] = 0.0;
  }
  else {
    fVar2 = acosf(fVar2);
    *angleOut = fVar2 + fVar2;
    fVar2 = sqrtf(x);
    fVar1 = fVar1 / fVar2;
    (vAxisOut->field0_0x0).d[0] = (this->field0_0x0).d[0] * fVar1;
    (vAxisOut->field0_0x0).d[1] = (this->field0_0x0).d[1] * fVar1;
    (vAxisOut->field0_0x0).d[2] = (this->field0_0x0).d[2] * fVar1;
  }
  return;
}

float EQuat::ExtractAxisRotation(EVec3 &vAxis) {
	EVec3 vRotAxis;
	float rotAngle;
	EVec3 &v;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EVec3 vRotAxis;
  float rotAngle;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  ToAxisAngle__C5EQuatR5EVec3Rf(this,&vRotAxis,&rotAngle);
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  return (vRotAxis.field0_0x0.d[0] * (vAxis->field0_0x0).d[0] +
          vRotAxis.field0_0x0.d[1] * (vAxis->field0_0x0).d[1] +
         vRotAxis.field0_0x0.d[2] * (vAxis->field0_0x0).d[2]) * rotAngle;
}

EQuat& EQuat::Set(float rotX, float rotY, float rotZ) {
	EQuat qRotX;
	EQuat qRotY;
	EQuat qRotZ;
	float angle;
	float angle;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  EQuat qRotX;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  EQuat qRotY;
  EQuat qRotZ;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  local_a0 = 0x3f800000;
  local_9c = 0;
  local_98 = 0;
  Set__5EQuatRC5EVec3f(&qRotX,(EVec3 *)&local_a0,rotX);
  local_a0 = 0;
  local_9c = 0x3f800000;
  local_98 = 0;
  Set__5EQuatRC5EVec3f(&qRotY,(EVec3 *)&local_a0,rotY);
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0x3f800000;
  Set__5EQuatRC5EVec3f(&qRotZ,(EVec3 *)&local_a0,rotZ);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
  fVar6 = (qRotY.field0_0x0.d[3] * qRotX.field0_0x0.d[0] -
          qRotY.field0_0x0.d[2] * qRotX.field0_0x0.d[1]) +
          qRotY.field0_0x0.d[1] * qRotX.field0_0x0.d[2] +
          qRotY.field0_0x0.d[0] * qRotX.field0_0x0.d[3];
  fVar8 = ((qRotY.field0_0x0.d[2] * qRotX.field0_0x0.d[0] +
           qRotY.field0_0x0.d[3] * qRotX.field0_0x0.d[1]) -
          qRotY.field0_0x0.d[0] * qRotX.field0_0x0.d[2]) +
          qRotY.field0_0x0.d[1] * qRotX.field0_0x0.d[3];
  fVar7 = -qRotY.field0_0x0.d[1] * qRotX.field0_0x0.d[0] +
          qRotY.field0_0x0.d[0] * qRotX.field0_0x0.d[1] +
          qRotY.field0_0x0.d[3] * qRotX.field0_0x0.d[2] +
          qRotY.field0_0x0.d[2] * qRotX.field0_0x0.d[3];
  fVar9 = ((-qRotY.field0_0x0.d[0] * qRotX.field0_0x0.d[0] -
           qRotY.field0_0x0.d[1] * qRotX.field0_0x0.d[1]) -
          qRotY.field0_0x0.d[2] * qRotX.field0_0x0.d[2]) +
          qRotY.field0_0x0.d[3] * qRotX.field0_0x0.d[3];
                    /* end of inlined section */
  uVar4 = CONCAT44(((qRotZ.field0_0x0.d[2] * fVar6 + qRotZ.field0_0x0.d[3] * fVar8) -
                   qRotZ.field0_0x0.d[0] * fVar7) + qRotZ.field0_0x0.d[1] * fVar9,
                   (qRotZ.field0_0x0.d[3] * fVar6 - qRotZ.field0_0x0.d[2] * fVar8) +
                   qRotZ.field0_0x0.d[1] * fVar7 + qRotZ.field0_0x0.d[0] * fVar9);
  uVar5 = CONCAT44(((-qRotZ.field0_0x0.d[0] * fVar6 - qRotZ.field0_0x0.d[1] * fVar8) -
                   qRotZ.field0_0x0.d[2] * fVar7) + qRotZ.field0_0x0.d[3] * fVar9,
                   -qRotZ.field0_0x0.d[1] * fVar6 + qRotZ.field0_0x0.d[0] * fVar8 +
                   qRotZ.field0_0x0.d[3] * fVar7 + qRotZ.field0_0x0.d[2] * fVar9);
  puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)this & 7;
  *(ulong *)((int)this - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)this - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&this->field0_0x0 + 0xf);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&this->field0_0x0 + 8);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return this;
}

EQuat& EQuat::Slerp(float u, EQuat &qA, EQuat qB) {
	float dot;
	EQuat *this;
	EQuat &q;
	EQuat *this;
	EQuat *this;
	float u;
	EQuat &qA;
	EQuat &qB;
	EQuat &q;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_v1;
  ulong uVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
  fVar10 = (qB->field0_0x0).d[1];
  fVar9 = (qB->field0_0x0).d[2];
  fVar8 = (qB->field0_0x0).d[3];
  fVar11 = (qA->field0_0x0).d[0] * (qB->field0_0x0).d[0] + (qA->field0_0x0).d[1] * fVar10 +
           (qA->field0_0x0).d[2] * fVar9 + (qA->field0_0x0).d[3] * fVar8;
                    /* end of inlined section */
  if (fVar11 < 0.0) {
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
    (qB->field0_0x0).d[0] = -(qB->field0_0x0).d[0];
                    /* end of inlined section */
    fVar11 = -fVar11;
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
    (qB->field0_0x0).d[1] = -fVar10;
    (qB->field0_0x0).d[2] = -fVar9;
    (qB->field0_0x0).d[3] = -fVar8;
  }
                    /* end of inlined section */
  if (u == 0.0) {
    puVar1 = (undefined *)((int)&qA->field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar3 = (uint)qA & 7;
    uVar6 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            in_v0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)qA - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&qA->field0_0x0 + 0xf);
    uVar4 = (uint)puVar1 & 7;
    puVar2 = (undefined *)((int)&qA->field0_0x0 + 8);
    uVar3 = (uint)puVar2 & 7;
    uVar7 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)(puVar2 + -uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
    uVar4 = (uint)this & 7;
    *(ulong *)((int)this - uVar4) =
         uVar6 << uVar4 * 8 | *(ulong *)((int)this - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8
    ;
    puVar1 = (undefined *)((int)&this->field0_0x0 + 0xf);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
    puVar1 = (undefined *)((int)&this->field0_0x0 + 8);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  }
  else {
    fVar8 = 1.0;
    if (u == 1.0) {
      puVar1 = (undefined *)((int)&qB->field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      uVar3 = (uint)qB & 7;
      uVar6 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
              in_v0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)qB - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&qB->field0_0x0 + 0xf);
      uVar4 = (uint)puVar1 & 7;
      puVar2 = (undefined *)((int)&qB->field0_0x0 + 8);
      uVar3 = (uint)puVar2 & 7;
      uVar7 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)(puVar2 + -uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
      uVar4 = (uint)this & 7;
      *(ulong *)((int)this - uVar4) =
           uVar6 << uVar4 * 8 |
           *(ulong *)((int)this - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar1 = (undefined *)((int)&this->field0_0x0 + 0xf);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
      puVar1 = (undefined *)((int)&this->field0_0x0 + 8);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    }
    else if (0.999 <= fVar11) {
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
      local_70 = (qB->field0_0x0).d[0] - (qA->field0_0x0).d[0];
      local_64 = (qB->field0_0x0).d[3] - (qA->field0_0x0).d[3];
      local_6c = (qB->field0_0x0).d[1] - (qA->field0_0x0).d[1];
      local_68 = (qB->field0_0x0).d[2] - (qA->field0_0x0).d[2];
      __ml__FfRC5EQuat((EQuat *)&local_80,u,(EQuat *)&local_70);
      uVar6 = CONCAT44((qA->field0_0x0).d[1] + local_7c,(qA->field0_0x0).d[0] + local_80);
      uVar7 = CONCAT44((qA->field0_0x0).d[3] + local_74,(qA->field0_0x0).d[2] + local_78);
      puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
      uVar4 = (uint)this & 7;
      *(ulong *)((int)this - uVar4) =
           uVar6 << uVar4 * 8 |
           *(ulong *)((int)this - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar1 = (undefined *)((int)&this->field0_0x0 + 0xf);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
      puVar1 = (undefined *)((int)&this->field0_0x0 + 8);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      fVar9 = sqrtf((this->field0_0x0).d[0] * (this->field0_0x0).d[0] +
                    (this->field0_0x0).d[1] * (this->field0_0x0).d[1] +
                    (this->field0_0x0).d[2] * (this->field0_0x0).d[2] +
                    (this->field0_0x0).d[3] * (this->field0_0x0).d[3]);
      if (fVar9 == 0.0) {
        Id__5EQuat(this);
      }
      else {
        fVar8 = fVar8 / fVar9;
        fVar10 = (this->field0_0x0).d[1];
        fVar11 = (this->field0_0x0).d[2];
        fVar9 = (this->field0_0x0).d[3];
        (this->field0_0x0).d[0] = (this->field0_0x0).d[0] * fVar8;
        (this->field0_0x0).d[3] = fVar9 * fVar8;
        (this->field0_0x0).d[1] = fVar10 * fVar8;
                    /* end of inlined section */
        (this->field0_0x0).d[2] = fVar11 * fVar8;
      }
    }
    else {
      fVar9 = acosf(fVar11);
      fVar10 = sinf(fVar9);
      fVar10 = fVar8 / fVar10;
      local_78 = sinf((fVar8 - u) * fVar9);
      local_78 = local_78 * fVar10;
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
      local_74 = local_78 * (qA->field0_0x0).d[3];
      local_80 = local_78 * (qA->field0_0x0).d[0];
      local_7c = local_78 * (qA->field0_0x0).d[1];
      local_78 = local_78 * (qA->field0_0x0).d[2];
                    /* end of inlined section */
      fVar8 = sinf(u * fVar9);
      fVar8 = fVar8 * fVar10;
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
      uVar6 = CONCAT44(local_7c + fVar8 * (qB->field0_0x0).d[1],
                       local_80 + fVar8 * (qB->field0_0x0).d[0]);
      uVar7 = CONCAT44(local_74 + fVar8 * (qB->field0_0x0).d[3],
                       local_78 + fVar8 * (qB->field0_0x0).d[2]);
      puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
      uVar4 = (uint)this & 7;
      *(ulong *)((int)this - uVar4) =
           uVar6 << uVar4 * 8 |
           *(ulong *)((int)this - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar1 = (undefined *)((int)&this->field0_0x0 + 0xf);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
      puVar1 = (undefined *)((int)&this->field0_0x0 + 8);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    }
  }
  return this;
}

EQuat& EQuat::SlerpNoInvert(float u, EQuat &qA, EQuat &qB) {
	EQuat *this;
	EQuat &q;
	EQuat *this;
	float u;
	EQuat &qA;
	EQuat &qB;
	EQuat &q;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_v1;
  ulong uVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (u == 0.0) {
    puVar1 = (undefined *)((int)&qA->field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar3 = (uint)qA & 7;
    uVar6 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            in_v0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)qA - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&qA->field0_0x0 + 0xf);
    uVar4 = (uint)puVar1 & 7;
    puVar2 = (undefined *)((int)&qA->field0_0x0 + 8);
    uVar3 = (uint)puVar2 & 7;
    uVar7 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)(puVar2 + -uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
    uVar4 = (uint)this & 7;
    *(ulong *)((int)this - uVar4) =
         uVar6 << uVar4 * 8 | *(ulong *)((int)this - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8
    ;
    puVar1 = (undefined *)((int)&this->field0_0x0 + 0xf);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
    puVar1 = (undefined *)((int)&this->field0_0x0 + 8);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  }
  else {
    fVar9 = 1.0;
    if (u == 1.0) {
      puVar1 = (undefined *)((int)&qB->field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      uVar3 = (uint)qB & 7;
      uVar6 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
              in_v0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)qB - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&qB->field0_0x0 + 0xf);
      uVar4 = (uint)puVar1 & 7;
      puVar2 = (undefined *)((int)&qB->field0_0x0 + 8);
      uVar3 = (uint)puVar2 & 7;
      uVar7 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)(puVar2 + -uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
      uVar4 = (uint)this & 7;
      *(ulong *)((int)this - uVar4) =
           uVar6 << uVar4 * 8 |
           *(ulong *)((int)this - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar1 = (undefined *)((int)&this->field0_0x0 + 0xf);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
      puVar1 = (undefined *)((int)&this->field0_0x0 + 8);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    }
    else {
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
      fVar11 = (qA->field0_0x0).d[0] * (qB->field0_0x0).d[0] +
               (qA->field0_0x0).d[1] * (qB->field0_0x0).d[1] +
               (qA->field0_0x0).d[2] * (qB->field0_0x0).d[2] +
               (qA->field0_0x0).d[3] * (qB->field0_0x0).d[3];
                    /* end of inlined section */
      if (0.999 <= fVar11) {
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
        local_70 = (qB->field0_0x0).d[0] - (qA->field0_0x0).d[0];
        local_68 = (qB->field0_0x0).d[2] - (qA->field0_0x0).d[2];
        local_64 = (qB->field0_0x0).d[3] - (qA->field0_0x0).d[3];
        local_6c = (qB->field0_0x0).d[1] - (qA->field0_0x0).d[1];
        __ml__FfRC5EQuat((EQuat *)&local_80,u,(EQuat *)&local_70);
        uVar6 = CONCAT44((qA->field0_0x0).d[1] + local_7c,(qA->field0_0x0).d[0] + local_80);
        uVar7 = CONCAT44((qA->field0_0x0).d[3] + local_74,(qA->field0_0x0).d[2] + local_78);
        puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
        uVar4 = (uint)this & 7;
        *(ulong *)((int)this - uVar4) =
             uVar6 << uVar4 * 8 |
             *(ulong *)((int)this - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&this->field0_0x0 + 0xf);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
        puVar1 = (undefined *)((int)&this->field0_0x0 + 8);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        fVar11 = sqrtf((this->field0_0x0).d[0] * (this->field0_0x0).d[0] +
                       (this->field0_0x0).d[1] * (this->field0_0x0).d[1] +
                       (this->field0_0x0).d[2] * (this->field0_0x0).d[2] +
                       (this->field0_0x0).d[3] * (this->field0_0x0).d[3]);
        if (fVar11 == 0.0) {
          Id__5EQuat(this);
        }
        else {
          fVar9 = fVar9 / fVar11;
          fVar8 = (this->field0_0x0).d[1];
          fVar10 = (this->field0_0x0).d[2];
          fVar11 = (this->field0_0x0).d[3];
          (this->field0_0x0).d[0] = (this->field0_0x0).d[0] * fVar9;
          (this->field0_0x0).d[3] = fVar11 * fVar9;
          (this->field0_0x0).d[1] = fVar8 * fVar9;
                    /* end of inlined section */
          (this->field0_0x0).d[2] = fVar10 * fVar9;
        }
      }
      else {
        fVar11 = acosf(fVar11);
        fVar8 = sinf(fVar11);
        fVar8 = fVar9 / fVar8;
        local_78 = sinf((fVar9 - u) * fVar11);
        local_78 = local_78 * fVar8;
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
        local_74 = local_78 * (qA->field0_0x0).d[3];
        local_80 = local_78 * (qA->field0_0x0).d[0];
        local_7c = local_78 * (qA->field0_0x0).d[1];
        local_78 = local_78 * (qA->field0_0x0).d[2];
                    /* end of inlined section */
        fVar9 = sinf(u * fVar11);
        fVar9 = fVar9 * fVar8;
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
        uVar6 = CONCAT44(local_7c + fVar9 * (qB->field0_0x0).d[1],
                         local_80 + fVar9 * (qB->field0_0x0).d[0]);
        uVar7 = CONCAT44(local_74 + fVar9 * (qB->field0_0x0).d[3],
                         local_78 + fVar9 * (qB->field0_0x0).d[2]);
        puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
        uVar4 = (uint)this & 7;
        *(ulong *)((int)this - uVar4) =
             uVar6 << uVar4 * 8 |
             *(ulong *)((int)this - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&this->field0_0x0 + 0xf);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
        puVar1 = (undefined *)((int)&this->field0_0x0 + 8);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      }
    }
  }
  return this;
}

EQuat& EQuat::Scale(float u, EQuat &q) {
	EQuat *this;
	EQuat qId;
	EQuat &q;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_v1;
  ulong uVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EQuat qId;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (u == 0.0) {
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
    (this->field0_0x0).d[0] = 0.0;
    (this->field0_0x0).d[3] = 1.0;
    (this->field0_0x0).d[2] = 0.0;
                    /* end of inlined section */
    (this->field0_0x0).d[1] = 0.0;
  }
  else if (u == 1.0) {
    puVar1 = (undefined *)((int)&q->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)q & 7;
    uVar6 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)q - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&q->field0_0x0 + 0xf);
    uVar3 = (uint)puVar1 & 7;
    puVar2 = (undefined *)((int)&q->field0_0x0 + 8);
    uVar4 = (uint)puVar2 & 7;
    uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar3);
    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
    uVar3 = (uint)this & 7;
    *(ulong *)((int)this - uVar3) =
         uVar6 << uVar3 * 8 | *(ulong *)((int)this - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
    ;
    puVar1 = (undefined *)((int)&this->field0_0x0 + 0xf);
    uVar3 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar3);
    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
    puVar1 = (undefined *)((int)&this->field0_0x0 + 8);
    uVar3 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar3);
    *puVar5 = uVar7 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  }
  else {
    qId.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
    qId.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
    qId.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    qId.field0_0x0.d[1] = 0.0;
    SlerpNoInvert__5EQuatfRC5EQuatT2(this,u,&qId,q);
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
    local_44 = (q->field0_0x0).d[3];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
    local_50 = (q->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
    local_4c = (q->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
    local_48 = (q->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
    Slerp__5EQuatfRC5EQuatT0(this,u,&qId,(EQuat *)&local_50);
  }
  return this;
}

EQuat& EQuat::Set(EVec3 &vAxis, float angle) {
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar1 = sinf(angle * 0.5);
  fVar2 = cosf(angle * 0.5);
                    /* end of inlined section */
  (this->field0_0x0).d[0] = (vAxis->field0_0x0).d[0] * fVar1;
  (this->field0_0x0).d[1] = (vAxis->field0_0x0).d[1] * fVar1;
  fVar3 = (vAxis->field0_0x0).d[2];
  (this->field0_0x0).d[3] = fVar2;
  (this->field0_0x0).d[2] = fVar3 * fVar1;
  return this;
}

EStream& operator<<(EStream &s, EQuat &q) {
	EQuat *this;
	EStream &s;
	float d;
	EQuat *this;
	float d;
	EQuat *this;
	float d;
	EQuat *this;
	float d;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  float local_3c;
  float local_38;
  float d;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_40 = (q->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
  local_3c = (q->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 4,4);
  local_38 = (q->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 8,4);
  d = (q->field0_0x0).d[3];
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 0xc,4);
                    /* end of inlined section */
  return s;
}

EStream& operator>>(EStream &s, EQuat &q) {
	EQuat *this;
	EStream &s;
	EQuat *this;
	EQuat *this;
	EQuat *this;
	
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)(&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,q,4)
  ;
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
             (undefined *)((int)&q->field0_0x0 + 4),4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
             (undefined *)((int)&q->field0_0x0 + 8),4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
             (undefined *)((int)&q->field0_0x0 + 0xc),4);
                    /* end of inlined section */
  return s;
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
