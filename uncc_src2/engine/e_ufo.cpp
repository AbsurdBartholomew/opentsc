// STATUS: NOT STARTED

#include "e_ufo.h"

EUfo* EUfo::EUfo() {
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
  this->m_transSpeed = 10.0;
  this->m_rotSpeed = 1.047198;
  *(undefined4 *)&this->m_enableDPad = 1;
  *(undefined4 *)&this->m_transMode = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vEye).field0_0x0.d[0] = 0.0;
  (this->m_vEye).field0_0x0.d[1] = 0.0;
  (this->m_vEye).field0_0x0.d[2] = 0.0;
  (this->m_vTarget).field0_0x0.d[0] = 0.0;
  (this->m_vTarget).field0_0x0.d[2] = 0.0;
  (this->m_vTarget).field0_0x0.d[1] = 1.0;
  (this->m_vUp).field0_0x0.d[0] = 0.0;
  (this->m_vUp).field0_0x0.d[2] = 1.0;
  (this->m_vUp).field0_0x0.d[1] = 0.0;
  return this;
}

void EUfo::SetPos(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_t1;
  
  puVar1 = (undefined *)((int)&vEye->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vEye & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vEye - uVar3) >> uVar3 * 8;
  fVar4 = (vEye->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)this & 7;
  *(ulong *)((int)this - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)this - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vEye).field0_0x0.d[2] = fVar4;
  puVar1 = (undefined *)((int)&vTarget->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vTarget & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vTarget - uVar3) >> uVar3 * 8;
  fVar4 = (vTarget->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vTarget & 7;
  puVar5 = (ulong *)((int)&this->m_vTarget - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vTarget).field0_0x0.d[2] = fVar4;
  puVar1 = (undefined *)((int)&vUp->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vUp & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_t1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vUp - uVar3) >> uVar3 * 8;
  fVar4 = (vUp->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vUp).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vUp & 7;
  puVar5 = (ulong *)((int)&this->m_vUp - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vUp).field0_0x0.d[2] = fVar4;
  return;
}

void EUfo::GetPos(EVec3 &vEyeOut, EVec3 &vTargetOut, EVec3 &vUpOut) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_t1;
  
  puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)this & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)this - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vEye).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vEyeOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vEyeOut & 7;
  *(ulong *)((int)vEyeOut - uVar2) =
       uVar6 << uVar2 * 8 |
       *(ulong *)((int)vEyeOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vEyeOut->field0_0x0).d[2] = fVar4;
  puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vTarget & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vTarget - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vTarget).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vTargetOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vTargetOut & 7;
  *(ulong *)((int)vTargetOut - uVar2) =
       uVar6 << uVar2 * 8 |
       *(ulong *)((int)vTargetOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vTargetOut->field0_0x0).d[2] = fVar4;
  puVar1 = (undefined *)((int)&(this->m_vUp).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vUp & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_t1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vUp - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vUp).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vUpOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vUpOut & 7;
  *(ulong *)((int)vUpOut - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)vUpOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (vUpOut->field0_0x0).d[2] = fVar4;
  return;
}

void EUfo::GetPos(E3DWindow &win) {
  EWindow__vtable *pEVar1;
  
  pEVar1 = (win->field0_0x0).__vtable;
  (*(code *)pEVar1[2].Cast3DWindow)
            ((int)&(win->field0_0x0).m_mWindow.field0_0x0 +
             (int)*(short *)&pEVar1[2].SetRenderSurface,this,&this->m_vTarget,&this->m_vUp);
  return;
}

void EUfo::Update() {
	EMat4 mLookAtPos;
	EMat4 mLookAt;
	EVec3 vLocalEye;
	EVec3 vLocalTarget;
	EVec3 vTrans;
	float t;
	u32 buts;
	float xrot;
	float yrot;
	EMat4 mRot;
	EVec3 &vLeft;
	
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  EMat4 mLookAtPos;
  EMat4 mLookAt;
  EVec3 vLocalEye;
  EVec3 vLocalTarget;
  EVec3 vTrans;
  EMat4 mRot;
  
  LookAtPos__5EMat4RC5EVec3N21(&mLookAtPos,&this->m_vEye,&this->m_vTarget,&this->m_vUp);
  Invert__5EMat4RC5EMat4(&mLookAt,&mLookAtPos);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar7 = (this->m_vTarget).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar13 = (this->m_vTarget).field0_0x0.d[1];
  fVar9 = (this->m_vEye).field0_0x0.d[0];
  fVar11 = (this->m_vEye).field0_0x0.d[1];
  fVar14 = (this->m_vTarget).field0_0x0.d[2];
  fVar10 = (this->m_vEye).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  vLocalTarget.field0_0x0.d[2] =
       fVar7 * mLookAt.field0_0x0.d[0][2] + fVar13 * mLookAt.field0_0x0.d[1][2] +
       fVar14 * mLookAt.field0_0x0.d[2][2] + mLookAt.field0_0x0.d[3][2];
  vLocalTarget.field0_0x0._0_8_ =
       CONCAT44(fVar7 * mLookAt.field0_0x0.d[0][1] + fVar13 * mLookAt.field0_0x0.d[1][1] +
                fVar14 * mLookAt.field0_0x0.d[2][1] + mLookAt.field0_0x0.d[3][1],
                fVar7 * mLookAt.field0_0x0.d[0][0] + fVar13 * mLookAt.field0_0x0.d[1][0] +
                fVar14 * mLookAt.field0_0x0.d[2][0] + mLookAt.field0_0x0.d[3][0]);
                    /* end of inlined section */
  uVar6 = GetPressed__11EControlleri(_ctrlPads[0],0x200);
  if (uVar6 == 0) {
    fVar7 = this->m_transSpeed;
  }
  else {
    *(uint *)&this->m_transMode = *(uint *)&this->m_transMode ^ 1;
                    /* end of inlined section */
    fVar7 = this->m_transSpeed;
  }
  fVar7 = _dt * fVar7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vTrans.field0_0x0.d[2] = 0.0;
  vTrans.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  vTrans.field0_0x0.d[0] = 0.0;
  uVar6 = GetDownButtons__11EControlleri(_ctrlPads[0],-1);
  if ((uVar6 & 8) != 0) {
    fVar7 = fVar7 * 0.1;
  }
  if ((uVar6 & 2) != 0) {
    fVar7 = fVar7 * 10.0;
  }
  if (*(int *)&this->m_transMode == 0) {
    fVar13 = GetStick__11EControllerci(_ctrlPads[0],'y',0);
    fVar14 = -fVar13 * _dt * this->m_rotSpeed;
    fVar13 = GetStick__11EControllerci(_ctrlPads[0],'x',0);
    fVar13 = -fVar13 * _dt * this->m_rotSpeed;
  }
  else {
    fVar14 = 0.0;
    fVar13 = GetStick__11EControllerci(_ctrlPads[0],'x',0);
    vTrans.field0_0x0.d[0] = (fVar13 + fVar13) * fVar7 + 0.0;
    fVar13 = fVar14;
    fVar8 = GetStick__11EControllerci(_ctrlPads[0],'y',0);
    vTrans.field0_0x0.d[1] = (fVar8 + fVar8) * fVar7 + 0.0;
  }
                    /* end of inlined section */
  RotateX__5EMat4f(&mRot,fVar14);
  PostRotateY__5EMat4f(&mRot,fVar13);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
  iVar2 = *(int *)&this->m_enableDPad;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar14 = vLocalTarget.field0_0x0.d[0] * mRot.field0_0x0.d[0][0] +
           vLocalTarget.field0_0x0.d[1] * mRot.field0_0x0.d[1][0] +
           vLocalTarget.field0_0x0.d[2] * mRot.field0_0x0.d[2][0] + mRot.field0_0x0.d[3][0];
  fVar13 = vLocalTarget.field0_0x0.d[0] * mRot.field0_0x0.d[0][1] +
           vLocalTarget.field0_0x0.d[1] * mRot.field0_0x0.d[1][1] +
           vLocalTarget.field0_0x0.d[2] * mRot.field0_0x0.d[2][1] + mRot.field0_0x0.d[3][1];
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&vLocalTarget.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | CONCAT44(fVar13,fVar14) >> (7 - uVar3) * 8;
  if (iVar2 != 0) {
    if ((uVar6 & 0x8000) != 0) {
                    /* end of inlined section */
      vTrans.field0_0x0.d[0] = vTrans.field0_0x0.d[0] - fVar7;
    }
    if ((uVar6 & 0x2000) != 0) {
                    /* end of inlined section */
      vTrans.field0_0x0.d[0] = vTrans.field0_0x0.d[0] + fVar7;
    }
    if ((uVar6 & 0x1000) != 0) {
                    /* end of inlined section */
      vTrans.field0_0x0.d[1] = vTrans.field0_0x0.d[1] + fVar7;
    }
    if ((uVar6 & 0x4000) != 0) {
                    /* end of inlined section */
      vTrans.field0_0x0.d[1] = vTrans.field0_0x0.d[1] - fVar7;
    }
  }
  if ((uVar6 & 0x80) != 0) {
                    /* end of inlined section */
    vTrans.field0_0x0.d[0] = vTrans.field0_0x0.d[0] - fVar7;
  }
  if ((uVar6 & 0x20) != 0) {
                    /* end of inlined section */
    vTrans.field0_0x0.d[0] = vTrans.field0_0x0.d[0] + fVar7;
  }
  if ((uVar6 & 0x10) != 0) {
                    /* end of inlined section */
    vTrans.field0_0x0.d[2] = vTrans.field0_0x0.d[2] - fVar7;
  }
  if ((uVar6 & 0x40) != 0) {
                    /* end of inlined section */
    vTrans.field0_0x0.d[2] = vTrans.field0_0x0.d[2] + fVar7;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = fVar9 * mLookAt.field0_0x0.d[0][0] + fVar11 * mLookAt.field0_0x0.d[1][0] +
          fVar10 * mLookAt.field0_0x0.d[2][0] + mLookAt.field0_0x0.d[3][0] + vTrans.field0_0x0.d[0];
  fVar12 = fVar9 * mLookAt.field0_0x0.d[0][1] + fVar11 * mLookAt.field0_0x0.d[1][1] +
           fVar10 * mLookAt.field0_0x0.d[2][1] + mLookAt.field0_0x0.d[3][1] + vTrans.field0_0x0.d[1]
  ;
  fVar13 = fVar13 + vTrans.field0_0x0.d[1];
  fVar9 = fVar9 * mLookAt.field0_0x0.d[0][2] + fVar11 * mLookAt.field0_0x0.d[1][2] +
          fVar10 * mLookAt.field0_0x0.d[2][2] + mLookAt.field0_0x0.d[3][2] + vTrans.field0_0x0.d[2];
  fVar14 = fVar14 + vTrans.field0_0x0.d[0];
  fVar7 = vLocalTarget.field0_0x0.d[0] * mRot.field0_0x0.d[0][2] +
          vLocalTarget.field0_0x0.d[1] * mRot.field0_0x0.d[1][2] +
          vLocalTarget.field0_0x0.d[2] * mRot.field0_0x0.d[2][2] + mRot.field0_0x0.d[3][2] +
          vTrans.field0_0x0.d[2];
                    /* end of inlined section */
  uVar5 = CONCAT44(fVar8 * mLookAtPos.field0_0x0.d[0][1] + fVar12 * mLookAtPos.field0_0x0.d[1][1] +
                   fVar9 * mLookAtPos.field0_0x0.d[2][1] + mLookAtPos.field0_0x0.d[3][1],
                   fVar8 * mLookAtPos.field0_0x0.d[0][0] + fVar12 * mLookAtPos.field0_0x0.d[1][0] +
                   fVar9 * mLookAtPos.field0_0x0.d[2][0] + mLookAtPos.field0_0x0.d[3][0]);
  puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar6);
  *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar5 >> (7 - uVar6) * 8;
  uVar6 = (uint)this & 7;
  *(ulong *)((int)this - uVar6) =
       uVar5 << uVar6 * 8 | *(ulong *)((int)this - uVar6) & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (this->m_vEye).field0_0x0.d[2] =
       fVar8 * mLookAtPos.field0_0x0.d[0][2] + fVar12 * mLookAtPos.field0_0x0.d[1][2] +
       fVar9 * mLookAtPos.field0_0x0.d[2][2] + mLookAtPos.field0_0x0.d[3][2];
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
  uVar5 = CONCAT44(fVar14 * mLookAtPos.field0_0x0.d[0][1] + fVar13 * mLookAtPos.field0_0x0.d[1][1] +
                   fVar7 * mLookAtPos.field0_0x0.d[2][1] + mLookAtPos.field0_0x0.d[3][1],
                   fVar14 * mLookAtPos.field0_0x0.d[0][0] + fVar13 * mLookAtPos.field0_0x0.d[1][0] +
                   fVar7 * mLookAtPos.field0_0x0.d[2][0] + mLookAtPos.field0_0x0.d[3][0]);
  puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar6);
  *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar5 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vTarget & 7;
  puVar4 = (ulong *)((int)&this->m_vTarget - uVar6);
  *puVar4 = uVar5 << uVar6 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (this->m_vTarget).field0_0x0.d[2] =
       fVar14 * mLookAtPos.field0_0x0.d[0][2] + fVar13 * mLookAtPos.field0_0x0.d[1][2] +
       fVar7 * mLookAtPos.field0_0x0.d[2][2] + mLookAtPos.field0_0x0.d[3][2];
  return;
}
