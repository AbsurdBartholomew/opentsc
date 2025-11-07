// STATUS: NOT STARTED

#include "iobjtileboundrect.h"

void EIObjTileBoundRect::AddTilePt(CTilePt &cPt) {
	EIObjTileBoundRect rNew;
	CTilePt &cPtIn;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  EIObjTileBoundRect rNew;
  
  bVar1 = PtInRect__18EIObjTileBoundRectRC7CTilePt(this,cPt);
  if (!bVar1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobjtileboundrect.h */
    Set__18EIObjTileBoundRectRC7CTilePt(&rNew,cPt);
                    /* end of inlined section */
    uVar3 = (this->m_vLRBT).field0_0x0.d[0];
    if (rNew.m_vLRBT.field0_0x0.d[0] <= uVar3) {
      uVar3 = rNew.m_vLRBT.field0_0x0.d[0];
    }
                    /* end of inlined section */
    uVar4 = (this->m_vLRBT).field0_0x0.d[2];
    (this->m_vLRBT).field0_0x0.d[0] = uVar3;
    if (rNew.m_vLRBT.field0_0x0.d[2] <= uVar4) {
      uVar4 = rNew.m_vLRBT.field0_0x0.d[2];
    }
                    /* end of inlined section */
    uVar2 = (this->m_vLRBT).field0_0x0.d[1];
    (this->m_vLRBT).field0_0x0.d[2] = uVar4;
    if (uVar2 <= rNew.m_vLRBT.field0_0x0.d[1]) {
      uVar2 = rNew.m_vLRBT.field0_0x0.d[1];
    }
                    /* end of inlined section */
    uVar5 = (this->m_vLRBT).field0_0x0.d[3];
    (this->m_vLRBT).field0_0x0.d[1] = uVar2;
    if (uVar5 <= rNew.m_vLRBT.field0_0x0.d[3]) {
      uVar5 = rNew.m_vLRBT.field0_0x0.d[3];
    }
                    /* end of inlined section */
    (this->m_vLRBT).field0_0x0.d[3] = uVar5;
                    /* end of inlined section */
  }
  return;
}

void EIObjTileBoundRect::AddTilePt(EVec2 &cPt) {
	EIObjTileBoundRect *this;
	float fx;
	float fy;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EIObjTileBoundRect rNew;
	EVec2 &v;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EIObjTileBoundRect rNew;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobjtileboundrect.h */
  bVar1 = false;
  if (((((this->m_vLRBT).field0_0x0.d[0] < (cPt->field0_0x0).d[0]) &&
       ((cPt->field0_0x0).d[0] < (this->m_vLRBT).field0_0x0.d[1])) &&
      ((this->m_vLRBT).field0_0x0.d[2] < (cPt->field0_0x0).d[1])) &&
     ((cPt->field0_0x0).d[1] < (this->m_vLRBT).field0_0x0.d[3])) {
    bVar1 = true;
  }
                    /* end of inlined section */
  if (!bVar1) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar2 = (cPt->field0_0x0).d[1];
                    /* end of inlined section */
    fVar3 = (this->m_vLRBT).field0_0x0.d[0];
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobjtileboundrect.h */
                    /* end of inlined section */
    if ((cPt->field0_0x0).d[0] <= fVar3) {
      fVar3 = (cPt->field0_0x0).d[0];
    }
                    /* end of inlined section */
    fVar4 = (this->m_vLRBT).field0_0x0.d[2];
    (this->m_vLRBT).field0_0x0.d[0] = fVar3;
    if (0.0 <= fVar4) {
      fVar4 = 0.0;
    }
                    /* end of inlined section */
    fVar3 = (this->m_vLRBT).field0_0x0.d[1];
    (this->m_vLRBT).field0_0x0.d[2] = fVar4;
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
                    /* end of inlined section */
    fVar2 = (this->m_vLRBT).field0_0x0.d[3];
    (this->m_vLRBT).field0_0x0.d[1] = fVar3;
    if (fVar2 <= 1.0) {
      fVar2 = 1.0;
    }
                    /* end of inlined section */
    (this->m_vLRBT).field0_0x0.d[3] = fVar2;
  }
                    /* end of inlined section */
  return;
}

void EIObjTileBoundRect::Set(CTilePt &cPtIn) {
	float fx;
	float fy;
	EVec4 *this;
	
  int iVar1;
  int iVar2;
  
  iVar1 = GetX__C7CTilePt(cPtIn);
  iVar2 = GetY__C7CTilePt(cPtIn);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_vLRBT).field0_0x0.d[1] = (float)iVar1 + 0.5;
  (this->m_vLRBT).field0_0x0.d[3] = (float)iVar2 + 0.5;
  (this->m_vLRBT).field0_0x0.d[0] = (float)iVar1 - 0.5;
  (this->m_vLRBT).field0_0x0.d[2] = (float)iVar2 - 0.5;
  return;
}

void EIObjTileBoundRect::Set(EVec2 &vIn) {
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec4 *this;
	
  float fVar1;
  float fVar2;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar2 = (vIn->field0_0x0).d[1];
  fVar1 = (vIn->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_vLRBT).field0_0x0.d[3] = fVar2 + 0.5;
  (this->m_vLRBT).field0_0x0.d[1] = fVar1 + 0.5;
  (this->m_vLRBT).field0_0x0.d[0] = fVar1 - 0.5;
  (this->m_vLRBT).field0_0x0.d[2] = fVar2 - 0.5;
  return;
}

bool EIObjTileBoundRect::PtInRect(CTilePt &cPt) {
	EIObjTileBoundRect *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
                    /* end of inlined section */
  iVar3 = GetX__C7CTilePt(cPt);
  iVar4 = GetY__C7CTilePt(cPt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobjtileboundrect.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobjtileboundrect.h */
  bVar1 = false;
  bVar2 = bVar1;
  if (((((this->m_vLRBT).field0_0x0.d[0] < (float)iVar3) &&
       ((float)iVar3 < (this->m_vLRBT).field0_0x0.d[1])) &&
      (bVar2 = false, (this->m_vLRBT).field0_0x0.d[2] < (float)iVar4)) &&
     (bVar2 = bVar1, (float)iVar4 < (this->m_vLRBT).field0_0x0.d[3])) {
    bVar2 = true;
  }
  return bVar2;
}

void EIObjTileBoundRect::GetCenter(EVec2 &vOut) {
	EVec2 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec2 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  float fVar1;
  
  fVar1 = (this->m_vLRBT).field0_0x0.d[0];
  (vOut->field0_0x0).d[0] = fVar1 + ((this->m_vLRBT).field0_0x0.d[1] - fVar1) * 0.5;
  fVar1 = (this->m_vLRBT).field0_0x0.d[2];
  (vOut->field0_0x0).d[1] = fVar1 + ((this->m_vLRBT).field0_0x0.d[3] - fVar1) * 0.5;
  return;
}

bool EIObjTileBoundRect::Overlap(EIObjTileBoundRect &r) {
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar2 = (r->m_vLRBT).field0_0x0.d[1];
  fVar4 = (this->m_vLRBT).field0_0x0.d[0];
                    /* end of inlined section */
  if (fVar4 <= fVar2) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    if (fVar2 <= (this->m_vLRBT).field0_0x0.d[1]) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      fVar2 = (r->m_vLRBT).field0_0x0.d[2];
                    /* end of inlined section */
      if ((this->m_vLRBT).field0_0x0.d[2] <= fVar2) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        if (fVar2 <= (this->m_vLRBT).field0_0x0.d[3]) {
          return true;
        }
        fVar4 = (this->m_vLRBT).field0_0x0.d[0];
      }
      else {
        fVar4 = (this->m_vLRBT).field0_0x0.d[0];
      }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      fVar2 = (r->m_vLRBT).field0_0x0.d[1];
    }
    else {
      fVar4 = (this->m_vLRBT).field0_0x0.d[0];
    }
                    /* end of inlined section */
    if (fVar4 <= fVar2) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      if ((this->m_vLRBT).field0_0x0.d[1] < fVar2) {
        fVar2 = (r->m_vLRBT).field0_0x0.d[0];
        goto LAB_00174060;
      }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      fVar2 = (r->m_vLRBT).field0_0x0.d[3];
                    /* end of inlined section */
      if (fVar2 < (this->m_vLRBT).field0_0x0.d[2]) {
        fVar2 = (r->m_vLRBT).field0_0x0.d[0];
        goto LAB_00174060;
      }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      if (fVar2 <= (this->m_vLRBT).field0_0x0.d[3]) {
        return true;
      }
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar2 = (r->m_vLRBT).field0_0x0.d[0];
LAB_00174060:
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  if ((((fVar4 <= fVar2) && (fVar2 <= (this->m_vLRBT).field0_0x0.d[1])) &&
      (fVar3 = (r->m_vLRBT).field0_0x0.d[2], (this->m_vLRBT).field0_0x0.d[2] <= fVar3)) &&
     (fVar3 <= (this->m_vLRBT).field0_0x0.d[3])) {
    return true;
  }
                    /* end of inlined section */
  bVar1 = false;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  if (((fVar4 <= fVar2) && (fVar2 <= (this->m_vLRBT).field0_0x0.d[1])) &&
     ((fVar2 = (r->m_vLRBT).field0_0x0.d[3], (this->m_vLRBT).field0_0x0.d[2] <= fVar2 &&
      (bVar1 = true, (this->m_vLRBT).field0_0x0.d[3] < fVar2)))) {
    bVar1 = false;
  }
  return bVar1;
}

void EIObjTileBoundRect::Scale(float xs, float ys) {
	float width;
	float height;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->m_vLRBT).field0_0x0.d[0] - (this->m_vLRBT).field0_0x0.d[1];
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
                    /* end of inlined section */
  }
  fVar3 = fVar1 * xs * 0.5;
                    /* end of inlined section */
  fVar2 = (this->m_vLRBT).field0_0x0.d[0];
  fVar1 = (this->m_vLRBT).field0_0x0.d[3] - (this->m_vLRBT).field0_0x0.d[2];
  (this->m_vLRBT).field0_0x0.d[1] = (this->m_vLRBT).field0_0x0.d[1] + fVar3;
  (this->m_vLRBT).field0_0x0.d[0] = fVar2 - fVar3;
  if (0.0 <= fVar1) {
                    /* end of inlined section */
    fVar2 = 0.5;
    fVar3 = fVar1 * ys;
  }
  else {
                    /* end of inlined section */
    fVar3 = 0.5;
    fVar2 = -fVar1 * ys;
  }
                    /* end of inlined section */
  fVar1 = (this->m_vLRBT).field0_0x0.d[2];
  (this->m_vLRBT).field0_0x0.d[3] = (this->m_vLRBT).field0_0x0.d[3] - fVar2 * fVar3;
  (this->m_vLRBT).field0_0x0.d[2] = fVar1 + fVar2 * fVar3;
  return;
}

void EIObjTileBoundRect::MirrorYX() {
	EVec3 vTL;
	EVec3 vBR;
	EMat4 m;
	EVec4 *this;
	EVec4 *this;
	float x;
	float y;
	EVec4 *this;
	EVec4 *this;
	float x;
	float y;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EVec3 vTL;
  EVec3 vBR;
  EMat4 m;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vTL.field0_0x0.d[0] = (this->m_vLRBT).field0_0x0.d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vTL.field0_0x0.d[1] = (this->m_vLRBT).field0_0x0.d[0];
  vBR.field0_0x0.d[0] = (this->m_vLRBT).field0_0x0.d[2];
  vBR.field0_0x0.d[1] = (this->m_vLRBT).field0_0x0.d[1];
  vTL.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  vBR.field0_0x0.d[2] = 0.0;
  Id__5EMat4(&m);
  SwapXY__FR5EMat4(&m);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar6 = vTL.field0_0x0.d[0] * m.field0_0x0.d[0][0] + vTL.field0_0x0.d[1] * m.field0_0x0.d[1][0] +
          vTL.field0_0x0.d[2] * m.field0_0x0.d[2][0] + m.field0_0x0.d[3][0];
  fVar4 = vTL.field0_0x0.d[0] * m.field0_0x0.d[0][1] + vTL.field0_0x0.d[1] * m.field0_0x0.d[1][1] +
          vTL.field0_0x0.d[2] * m.field0_0x0.d[2][1] + m.field0_0x0.d[3][1];
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&vTL.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(fVar4,fVar6) >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar5 = vBR.field0_0x0.d[0] * m.field0_0x0.d[0][0] + vBR.field0_0x0.d[1] * m.field0_0x0.d[1][0] +
          vBR.field0_0x0.d[2] * m.field0_0x0.d[2][0] + m.field0_0x0.d[3][0];
  fVar7 = vBR.field0_0x0.d[0] * m.field0_0x0.d[0][1] + vBR.field0_0x0.d[1] * m.field0_0x0.d[1][1] +
          vBR.field0_0x0.d[2] * m.field0_0x0.d[2][1] + m.field0_0x0.d[3][1];
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&vBR.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(fVar7,fVar5) >> (7 - uVar2) * 8;
  (this->m_vLRBT).field0_0x0.d[3] = fVar6;
  (this->m_vLRBT).field0_0x0.d[1] = fVar7;
  (this->m_vLRBT).field0_0x0.d[0] = fVar4;
  (this->m_vLRBT).field0_0x0.d[2] = fVar5;
  return;
}
