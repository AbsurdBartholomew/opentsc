// STATUS: NOT STARTED

#include "e_mat4.h"

void EMat4::SoftwareMult(EMat4 &l, EMat4 &r) {
	int i;
	int j;
	
  EMat4__null___1__1 *pEVar1;
  int iVar2;
  float *pfVar3;
  EMat4 *pEVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar9 = 0;
  iVar2 = 0;
  while( true ) {
    iVar9 = iVar9 + 1;
    pfVar3 = (float *)((int)&this->field0_0x0 + iVar2);
    iVar8 = 3;
    pEVar4 = r;
    pfVar7 = &(r->field0_0x0).field1._30;
    pfVar5 = &(r->field0_0x0).field1._10;
    pfVar6 = &(r->field0_0x0).field1._20;
    do {
      pEVar1 = &pEVar4->field0_0x0;
      iVar8 = iVar8 + -1;
      fVar10 = *pfVar5;
      pEVar4 = (EMat4 *)((int)&pEVar4->field0_0x0 + 4);
      pfVar5 = pfVar5 + 1;
      fVar12 = *pfVar6;
      fVar11 = *pfVar7;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
      *pfVar3 = *(float *)((int)&l->field0_0x0 + iVar2) * pEVar1->d[0] +
                *(float *)((int)&l->field0_0x0 + iVar2 + 4) * fVar10 +
                *(float *)((int)&l->field0_0x0 + iVar2 + 8) * fVar12 +
                *(float *)((int)&l->field0_0x0 + iVar2 + 0xc) * fVar11;
      pfVar3 = pfVar3 + 1;
    } while (-1 < iVar8);
    if (3 < iVar9) break;
    iVar2 = iVar9 * 0x10;
  }
  return;
}

EStream& operator<<(EStream &s, EMat4 &m) {
	int i;
	int j;
	EStream &s;
	float d;
	
  int iVar1;
  EStream__vtable *pEVar2;
  float *pfVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar4;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float d;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar4 = 0;
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar1 = 0;
  do {
    iVar4 = iVar4 + 1;
    pfVar3 = (float *)((int)&m->field0_0x0 + iVar1);
    iVar1 = 3;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    pEVar2 = s->__vtable;
    while( true ) {
      d = *pfVar3;
                    /* end of inlined section */
      pfVar3 = pfVar3 + 1;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
      iVar1 = iVar1 + -1;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)pEVar2[1].Write)(&s->m_streamingStructure + *(short *)&pEVar2[1].Read,&d,4);
                    /* end of inlined section */
      if (iVar1 < 0) break;
      pEVar2 = s->__vtable;
    }
    iVar1 = iVar4 * 0x10;
  } while (iVar4 < 4);
  return s;
}

EStream& operator>>(EStream &s, EMat4 &m) {
	int i;
	int j;
	EStream &s;
	
  int iVar1;
  EStream__vtable *pEVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar4 + 1;
    iVar3 = 3;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    pEVar2 = s->__vtable;
    iVar1 = (int)&m->field0_0x0 + iVar1;
    while( true ) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
      iVar3 = iVar3 + -1;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)pEVar2[1].GetPos)(&s->m_streamingStructure + *(short *)&pEVar2[1].EStream,iVar1,4);
                    /* end of inlined section */
      if (iVar3 < 0) break;
      pEVar2 = s->__vtable;
      iVar1 = iVar1 + 4;
    }
    iVar1 = iVar4 * 0x10;
  } while (iVar4 < 4);
  return s;
}

EMat4& EMat4::operator=(EMat4 &m) {
	u32 *pData;
	u32 *pSrcData;
	int i;
	
  EMat4__null___1__1 *pEVar1;
  EMat4 *pEVar2;
  int iVar3;
  
  iVar3 = 0x10;
  pEVar2 = this;
  do {
    pEVar1 = &m->field0_0x0;
    iVar3 = iVar3 + -1;
    m = (EMat4 *)((int)&m->field0_0x0 + 4);
    (pEVar2->field0_0x0).d[0] = pEVar1->d[0];
    pEVar2 = (EMat4 *)((int)&pEVar2->field0_0x0 + 4);
  } while (iVar3 != 0);
  return this;
}

EMat4& EMat4::operator=(float v) {
	float *pData;
	int i;
	
  EMat4 *pEVar1;
  int iVar2;
  
  iVar2 = 0x10;
  pEVar1 = this;
  do {
    (pEVar1->field0_0x0).d[0] = v;
    iVar2 = iVar2 + -1;
    pEVar1 = (EMat4 *)((int)&pEVar1->field0_0x0 + 4);
  } while (iVar2 != 0);
  return this;
}

void EMat4::GetColumn(int column, EVec3 &vCol) {
	int row;
	int value;
	
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  iVar1 = 2;
  pfVar2 = (float *)((int)&this->field0_0x0 + column * 4);
  do {
                    /* end of inlined section */
    fVar3 = *pfVar2;
    iVar1 = iVar1 + -1;
    pfVar2 = pfVar2 + 4;
    (vCol->field0_0x0).d[0] = fVar3;
    vCol = (EVec3 *)((int)&vCol->field0_0x0 + 4);
  } while (-1 < iVar1);
  return;
}

void EMat4::GetColumn(int column, EVec4 &vCol) {
	int row;
	int value;
	
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  iVar1 = 3;
  pfVar2 = (float *)((int)&this->field0_0x0 + column * 4);
  do {
                    /* end of inlined section */
    fVar3 = *pfVar2;
    iVar1 = iVar1 + -1;
    pfVar2 = pfVar2 + 4;
    (vCol->field0_0x0).d[0] = fVar3;
    vCol = (EVec4 *)((int)&vCol->field0_0x0 + 4);
  } while (-1 < iVar1);
  return;
}

void EMat4::SetColumn(int column, EVec3 &vCol) {
	int row;
	int value;
	
  EVec3__null___1__1 *pEVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = 2;
  pfVar3 = (float *)((int)&this->field0_0x0 + column * 4);
  do {
    pEVar1 = &vCol->field0_0x0;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
    vCol = (EVec3 *)((int)&vCol->field0_0x0 + 4);
    *pfVar3 = pEVar1->d[0];
    pfVar3 = pfVar3 + 4;
  } while (-1 < iVar2);
  return;
}

void EMat4::SetColumn(int column, EVec4 &vCol) {
	int row;
	int value;
	
  EVec4__null___1__1 *pEVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = 3;
  pfVar3 = (float *)((int)&this->field0_0x0 + column * 4);
  do {
    pEVar1 = &vCol->field0_0x0;
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
    vCol = (EVec4 *)((int)&vCol->field0_0x0 + 4);
    *pfVar3 = pEVar1->d[0];
    pfVar3 = pfVar3 + 4;
  } while (-1 < iVar2);
  return;
}

EMat4& EMat4::Normalize() {
	int i;
	EVec3 vCol;
	
  int column;
  int iVar1;
  float fVar2;
  float fVar3;
  EVec3 vCol;
  
  fVar3 = 0.0;
                    /* end of inlined section */
  column = 0;
  do {
    GetColumn__5EMat4iR5EVec3(this,column,&vCol);
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
    fVar2 = sqrtf(vCol.field0_0x0.d[0] * vCol.field0_0x0.d[0] +
                  vCol.field0_0x0.d[1] * vCol.field0_0x0.d[1] +
                  vCol.field0_0x0.d[2] * vCol.field0_0x0.d[2]);
    if (fVar2 != fVar3) {
      fVar2 = 1.0 / fVar2;
      vCol.field0_0x0.d[0] = vCol.field0_0x0.d[0] * fVar2;
      vCol.field0_0x0.d[2] = vCol.field0_0x0.d[2] * fVar2;
      vCol.field0_0x0.d[1] = vCol.field0_0x0.d[1] * fVar2;
    }
                    /* end of inlined section */
    iVar1 = column + 1;
    SetColumn__5EMat4iRC5EVec3(this,column,&vCol);
    column = iVar1;
  } while (iVar1 < 3);
  return this;
}

EMat4& EMat4::Transpose(EMat4 &mSource) {
	int y;
	int x;
	
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar5 * 4;
    iVar5 = iVar5 + 1;
    puVar2 = (undefined4 *)((int)&this->field0_0x0 + iVar1);
    puVar4 = (undefined4 *)((int)&mSource->field0_0x0 + iVar3);
    iVar1 = 3;
    do {
      uVar6 = *puVar4;
      iVar1 = iVar1 + -1;
      puVar4 = puVar4 + 4;
      *puVar2 = uVar6;
      puVar2 = puVar2 + 1;
    } while (-1 < iVar1);
    iVar1 = iVar5 * 0x10;
  } while (iVar5 < 4);
  return this;
}

EMat4& EMat4::Transpose() {
	int y;
	int x;
	
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = 1;
  do {
    iVar4 = iVar3 + 1;
    if (0 < iVar3) {
      puVar1 = (undefined4 *)((int)&this->field0_0x0 + iVar3 * 4);
      pfVar2 = (float *)(this->field0_0x0).d[iVar3];
      do {
        iVar3 = iVar3 + -1;
        uVar5 = *pfVar2;
        *pfVar2 = (float)*puVar1;
        *puVar1 = uVar5;
        pfVar2 = pfVar2 + 1;
        puVar1 = puVar1 + 4;
      } while (iVar3 != 0);
    }
    iVar3 = iVar4;
  } while (iVar4 < 4);
  return this;
}

EMat4& EMat4::Id() {
	int y;
	float *row;
	int x;
	
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar4 = 0;
  do {
    iVar3 = 0;
    puVar2 = (undefined4 *)((int)&this->field0_0x0 + iVar1);
    iVar5 = iVar4 + 1;
    do {
      if (iVar3 == iVar4) {
        *puVar2 = 0x3f800000;
      }
      else {
        *puVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 4);
    iVar1 = iVar5 * 0x10;
    iVar4 = iVar5;
  } while (iVar5 < 4);
  return this;
}

EMat4& EMat4::Translate(EVec3 &v) {
	EMat4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  Id__5EMat4(this);
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
  (this->field0_0x0).d[3][0] = (v->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  (this->field0_0x0).d[3][1] = (v->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
  (this->field0_0x0).d[3][2] = (v->field0_0x0).d[2];
                    /* end of inlined section */
  return this;
}

EMat4& EMat4::Scale(EVec3 &v) {
  Id__5EMat4(this);
  (this->field0_0x0).d[0] = (v->field0_0x0).d[0];
  (this->field0_0x0).d[1][1] = (v->field0_0x0).d[1];
  (this->field0_0x0).d[2][2] = (v->field0_0x0).d[2];
  return this;
}

EMat4& EMat4::RotateX(float angle) {
	float angle;
	
  float fVar1;
  float fVar2;
  
  Id__5EMat4(this);
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar1 = sinf(angle);
  fVar2 = cosf(angle);
                    /* end of inlined section */
  (this->field0_0x0).d[1][2] = fVar1;
  (this->field0_0x0).d[1][1] = fVar2;
  (this->field0_0x0).d[2][2] = fVar2;
  (this->field0_0x0).d[2][1] = -fVar1;
  return this;
}

EMat4& EMat4::RotateY(float angle) {
	float angle;
	
  float fVar1;
  float fVar2;
  
  Id__5EMat4(this);
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar1 = sinf(angle);
  fVar2 = cosf(angle);
                    /* end of inlined section */
  (this->field0_0x0).d[2][0] = fVar1;
  (this->field0_0x0).d[0] = fVar2;
  (this->field0_0x0).d[2][2] = fVar2;
  (this->field0_0x0).d[2] = -fVar1;
  return this;
}

EMat4& EMat4::RotateZ(float angle) {
	float angle;
	
  float fVar1;
  float fVar2;
  
  Id__5EMat4(this);
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar1 = sinf(angle);
  fVar2 = cosf(angle);
                    /* end of inlined section */
  (this->field0_0x0).d[1] = fVar1;
  (this->field0_0x0).d[0] = fVar2;
  (this->field0_0x0).d[1][1] = fVar2;
  (this->field0_0x0).d[1][0] = -fVar1;
  return this;
}

bool EMat4::Invert(EMat4 &mSource) {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = (mSource->field0_0x0).d[2][1];
  fVar2 = (mSource->field0_0x0).d[0];
  fVar9 = (mSource->field0_0x0).d[1][1];
  fVar8 = (mSource->field0_0x0).d[2][2];
  fVar5 = (mSource->field0_0x0).d[1][2];
  fVar3 = (mSource->field0_0x0).d[1][0];
  fVar4 = (mSource->field0_0x0).d[1];
  fVar6 = (mSource->field0_0x0).d[2];
  fVar1 = (mSource->field0_0x0).d[2][0];
  fVar1 = (((fVar2 * fVar9 * fVar8 - fVar2 * fVar7 * fVar5) - fVar3 * fVar4 * fVar8) +
           fVar3 * fVar7 * fVar6 + fVar1 * fVar4 * fVar5) - fVar1 * fVar9 * fVar6;
  if (fVar1 == 0.0) {
    return false;
  }
  fVar1 = 1.0 / fVar1;
  (this->field0_0x0).d[0] = (fVar9 * fVar8 - fVar7 * fVar5) * fVar1;
  (this->field0_0x0).d[1] =
       ((mSource->field0_0x0).d[2][1] * (mSource->field0_0x0).d[2] -
       (mSource->field0_0x0).d[1] * (mSource->field0_0x0).d[2][2]) * fVar1;
  fVar5 = (mSource->field0_0x0).d[1][2];
  fVar4 = (mSource->field0_0x0).d[2];
  fVar2 = (mSource->field0_0x0).d[1];
  fVar3 = (mSource->field0_0x0).d[1][1];
  (this->field0_0x0).d[3] = 0.0;
  (this->field0_0x0).d[2] = (fVar2 * fVar5 - fVar3 * fVar4) * fVar1;
  (this->field0_0x0).d[1][0] =
       (-(mSource->field0_0x0).d[1][0] * (mSource->field0_0x0).d[2][2] +
       (mSource->field0_0x0).d[2][0] * (mSource->field0_0x0).d[1][2]) * fVar1;
  (this->field0_0x0).d[1][1] =
       ((mSource->field0_0x0).d[0] * (mSource->field0_0x0).d[2][2] -
       (mSource->field0_0x0).d[2][0] * (mSource->field0_0x0).d[2]) * fVar1;
  fVar5 = (mSource->field0_0x0).d[1][2];
  fVar4 = (mSource->field0_0x0).d[2];
  fVar3 = (mSource->field0_0x0).d[0];
  fVar2 = (mSource->field0_0x0).d[1][0];
  (this->field0_0x0).d[1][3] = 0.0;
  (this->field0_0x0).d[1][2] = (fVar2 * fVar4 - fVar3 * fVar5) * fVar1;
  (this->field0_0x0).d[2][0] =
       -(-(mSource->field0_0x0).d[1][0] * (mSource->field0_0x0).d[2][1] +
        (mSource->field0_0x0).d[2][0] * (mSource->field0_0x0).d[1][1]) * fVar1;
  (this->field0_0x0).d[2][1] =
       (-(mSource->field0_0x0).d[0] * (mSource->field0_0x0).d[2][1] +
       (mSource->field0_0x0).d[2][0] * (mSource->field0_0x0).d[1]) * fVar1;
  fVar3 = (mSource->field0_0x0).d[0];
  fVar4 = (mSource->field0_0x0).d[1][1];
  fVar5 = (mSource->field0_0x0).d[1];
  fVar2 = (mSource->field0_0x0).d[1][0];
  (this->field0_0x0).d[2][3] = 0.0;
  (this->field0_0x0).d[2][2] = -(-fVar3 * fVar4 + fVar2 * fVar5) * fVar1;
  fVar5 = (mSource->field0_0x0).d[1][0];
  fVar9 = (mSource->field0_0x0).d[2][1];
  fVar10 = (mSource->field0_0x0).d[2][2];
  fVar6 = (mSource->field0_0x0).d[3][2];
  fVar7 = (mSource->field0_0x0).d[3][1];
  fVar2 = (mSource->field0_0x0).d[2][0];
  fVar4 = (mSource->field0_0x0).d[1][1];
  fVar8 = (mSource->field0_0x0).d[1][2];
  fVar3 = (mSource->field0_0x0).d[3][0];
  (this->field0_0x0).d[3][0] =
       ((((-fVar5 * fVar9 * fVar6 + fVar5 * fVar10 * fVar7 + fVar2 * fVar4 * fVar6) -
         fVar2 * fVar8 * fVar7) - fVar3 * fVar4 * fVar10) + fVar3 * fVar9 * fVar8) * fVar1;
  fVar10 = (mSource->field0_0x0).d[2][1];
  fVar3 = (mSource->field0_0x0).d[0];
  fVar9 = (mSource->field0_0x0).d[2][2];
  fVar6 = (mSource->field0_0x0).d[3][2];
  fVar7 = (mSource->field0_0x0).d[3][1];
  fVar5 = (mSource->field0_0x0).d[2][0];
  fVar4 = (mSource->field0_0x0).d[1];
  fVar8 = (mSource->field0_0x0).d[2];
  fVar2 = (mSource->field0_0x0).d[3][0];
  (this->field0_0x0).d[3][1] =
       ((((fVar3 * fVar10 * fVar6 - fVar3 * fVar9 * fVar7) - fVar5 * fVar4 * fVar6) +
         fVar5 * fVar8 * fVar7 + fVar2 * fVar4 * fVar9) - fVar2 * fVar10 * fVar8) * fVar1;
  fVar3 = (mSource->field0_0x0).d[0];
  fVar10 = (mSource->field0_0x0).d[1][1];
  fVar9 = (mSource->field0_0x0).d[1][2];
  fVar6 = (mSource->field0_0x0).d[3][2];
  fVar7 = (mSource->field0_0x0).d[3][1];
  fVar5 = (mSource->field0_0x0).d[1][0];
  fVar4 = (mSource->field0_0x0).d[1];
  fVar8 = (mSource->field0_0x0).d[2];
  fVar2 = (mSource->field0_0x0).d[3][0];
  (this->field0_0x0).d[3][2] =
       (fVar2 * fVar10 * fVar8 -
       (((fVar3 * fVar10 * fVar6 - fVar3 * fVar9 * fVar7) - fVar5 * fVar4 * fVar6) +
        fVar5 * fVar8 * fVar7 + fVar2 * fVar4 * fVar9)) * fVar1;
  (this->field0_0x0).d[3][3] = 1.0;
  return true;
}

void EMat4::SimpleInvert(EMat4 &mSource) {
	int y;
	int x;
	int i;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	
  EMat4__null___1__1 *pEVar1;
  int iVar2;
  undefined4 *puVar3;
  EMat4 *pEVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  
  pfVar10 = &(this->field0_0x0).field1._30;
  pfVar6 = &(this->field0_0x0).field1._10;
  pfVar8 = &(this->field0_0x0).field1._20;
  iVar2 = 0;
  iVar7 = 0;
  do {
    iVar9 = iVar7 + 1;
    puVar3 = (undefined4 *)((int)&this->field0_0x0 + iVar2);
    pfVar5 = (float *)(mSource->field0_0x0).d[iVar7];
    iVar7 = 2;
    do {
      uVar11 = *pfVar5;
      iVar7 = iVar7 + -1;
      pfVar5 = pfVar5 + 1;
      *puVar3 = uVar11;
      puVar3 = puVar3 + 4;
    } while (-1 < iVar7);
    iVar2 = iVar9 * 4;
    iVar7 = iVar9;
  } while (iVar9 < 3);
  iVar7 = 2;
  pEVar4 = this;
  do {
    pEVar1 = &pEVar4->field0_0x0;
                    /* end of inlined section */
    iVar7 = iVar7 + -1;
    fVar13 = *pfVar6;
    pEVar4 = (EMat4 *)((int)&pEVar4->field0_0x0 + 4);
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    pfVar6 = pfVar6 + 1;
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    fVar12 = *pfVar8;
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    pfVar8 = pfVar8 + 1;
    *pfVar10 = -((mSource->field0_0x0).d[3][0] * pEVar1->d[0] +
                 (mSource->field0_0x0).d[3][1] * fVar13 + (mSource->field0_0x0).d[3][2] * fVar12);
    pfVar10 = pfVar10 + 1;
  } while (-1 < iVar7);
  (this->field0_0x0).d[3][3] = 1.0;
  return;
}

EMat4& EMat4::Rotate(EVec3 &vAxis, float angle) {
	float angle;
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
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar2 = sinf(angle);
  fVar3 = cosf(angle);
  fVar4 = (vAxis->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar6 = (vAxis->field0_0x0).d[0];
  fVar5 = (vAxis->field0_0x0).d[1];
                    /* end of inlined section */
  (this->field0_0x0).d[3] = 0.0;
  fVar1 = 1.0 - fVar3;
  (this->field0_0x0).d[3][3] = 1.0;
  (this->field0_0x0).d[1][3] = 0.0;
  (this->field0_0x0).d[2][3] = 0.0;
  (this->field0_0x0).d[3][0] = 0.0;
  (this->field0_0x0).d[3][1] = 0.0;
  (this->field0_0x0).d[3][2] = 0.0;
  fVar9 = fVar6 * fVar5 * fVar1;
  fVar8 = fVar5 * fVar4 * fVar1;
  fVar7 = fVar6 * fVar4 * fVar1;
  (this->field0_0x0).d[1][0] = fVar9 - fVar4 * fVar2;
  (this->field0_0x0).d[2][0] = fVar7 + fVar5 * fVar2;
  (this->field0_0x0).d[2][1] = fVar8 - fVar6 * fVar2;
  (this->field0_0x0).d[2][2] = fVar4 * fVar4 * fVar1 + fVar3;
  (this->field0_0x0).d[0] = fVar6 * fVar6 * fVar1 + fVar3;
  (this->field0_0x0).d[1][1] = fVar5 * fVar5 * fVar1 + fVar3;
  (this->field0_0x0).d[1] = fVar9 + fVar4 * fVar2;
  (this->field0_0x0).d[2] = fVar7 - fVar5 * fVar2;
  (this->field0_0x0).d[1][2] = fVar8 + fVar6 * fVar2;
  return this;
}

EMat4& EMat4::PreRotateX(float angle) {
	float a;
	float angle;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar2 = sinf(angle);
  fVar3 = cosf(angle);
                    /* end of inlined section */
  fVar1 = -fVar2;
  fVar7 = (this->field0_0x0).d[1][0];
  fVar5 = (this->field0_0x0).d[2][0];
  fVar4 = (this->field0_0x0).d[2][2];
  fVar6 = (this->field0_0x0).d[2][1];
  fVar8 = (this->field0_0x0).d[1][1];
  fVar9 = (this->field0_0x0).d[1][2];
  (this->field0_0x0).d[1][1] = fVar3 * fVar8 + fVar2 * fVar6;
  (this->field0_0x0).d[1][0] = fVar3 * fVar7 + fVar2 * fVar5;
  (this->field0_0x0).d[2][0] = fVar1 * fVar7 + fVar3 * fVar5;
  (this->field0_0x0).d[2][1] = fVar1 * fVar8 + fVar3 * fVar6;
  (this->field0_0x0).d[1][2] = fVar3 * fVar9 + fVar2 * fVar4;
  (this->field0_0x0).d[2][2] = fVar1 * fVar9 + fVar3 * fVar4;
  return this;
}

EMat4& EMat4::PostRotateX(float angle) {
	float a;
	float angle;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar2 = sinf(angle);
  fVar3 = cosf(angle);
                    /* end of inlined section */
  fVar8 = (this->field0_0x0).d[1];
  fVar1 = -fVar2;
  fVar5 = (this->field0_0x0).d[2];
  fVar4 = (this->field0_0x0).d[1][2];
  fVar6 = (this->field0_0x0).d[2][2];
  fVar9 = (this->field0_0x0).d[1][1];
  fVar7 = (this->field0_0x0).d[3][2];
  fVar10 = (this->field0_0x0).d[2][1];
  fVar11 = (this->field0_0x0).d[3][1];
  (this->field0_0x0).d[3][2] = fVar11 * fVar2 + fVar7 * fVar3;
  (this->field0_0x0).d[1] = fVar8 * fVar3 + fVar5 * fVar1;
  (this->field0_0x0).d[2] = fVar8 * fVar2 + fVar5 * fVar3;
  (this->field0_0x0).d[1][1] = fVar9 * fVar3 + fVar4 * fVar1;
  (this->field0_0x0).d[1][2] = fVar9 * fVar2 + fVar4 * fVar3;
  (this->field0_0x0).d[2][1] = fVar10 * fVar3 + fVar6 * fVar1;
  (this->field0_0x0).d[2][2] = fVar10 * fVar2 + fVar6 * fVar3;
  (this->field0_0x0).d[3][1] = fVar11 * fVar3 + fVar7 * fVar1;
  return this;
}

EMat4& EMat4::PreRotateY(float angle) {
	float a;
	float angle;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar2 = sinf(angle);
  fVar3 = cosf(angle);
                    /* end of inlined section */
  fVar7 = (this->field0_0x0).d[0];
  fVar1 = -fVar2;
  fVar5 = (this->field0_0x0).d[2][0];
  fVar4 = (this->field0_0x0).d[2][2];
  fVar6 = (this->field0_0x0).d[2][1];
  fVar8 = (this->field0_0x0).d[1];
  fVar9 = (this->field0_0x0).d[2];
  (this->field0_0x0).d[2][2] = fVar2 * fVar9 + fVar3 * fVar4;
  (this->field0_0x0).d[0] = fVar3 * fVar7 + fVar1 * fVar5;
  (this->field0_0x0).d[2][0] = fVar2 * fVar7 + fVar3 * fVar5;
  (this->field0_0x0).d[1] = fVar3 * fVar8 + fVar1 * fVar6;
  (this->field0_0x0).d[2][1] = fVar2 * fVar8 + fVar3 * fVar6;
  (this->field0_0x0).d[2] = fVar3 * fVar9 + fVar1 * fVar4;
  return this;
}

EMat4& EMat4::PostRotateY(float angle) {
	float a;
	float angle;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar2 = sinf(angle);
  fVar3 = cosf(angle);
                    /* end of inlined section */
  fVar1 = -fVar2;
  fVar8 = (this->field0_0x0).d[0];
  fVar5 = (this->field0_0x0).d[2];
  fVar4 = (this->field0_0x0).d[1][2];
  fVar6 = (this->field0_0x0).d[2][2];
  fVar9 = (this->field0_0x0).d[1][0];
  fVar7 = (this->field0_0x0).d[3][2];
  fVar10 = (this->field0_0x0).d[2][0];
  fVar11 = (this->field0_0x0).d[3][0];
  (this->field0_0x0).d[0] = fVar8 * fVar3 + fVar5 * fVar2;
  (this->field0_0x0).d[2] = fVar8 * fVar1 + fVar5 * fVar3;
  (this->field0_0x0).d[1][0] = fVar9 * fVar3 + fVar4 * fVar2;
  (this->field0_0x0).d[1][2] = fVar9 * fVar1 + fVar4 * fVar3;
  (this->field0_0x0).d[2][0] = fVar10 * fVar3 + fVar6 * fVar2;
  (this->field0_0x0).d[2][2] = fVar10 * fVar1 + fVar6 * fVar3;
  (this->field0_0x0).d[3][0] = fVar11 * fVar3 + fVar7 * fVar2;
  (this->field0_0x0).d[3][2] = fVar11 * fVar1 + fVar7 * fVar3;
  return this;
}

EMat4& EMat4::PreRotateZ(float angle) {
	float a;
	float angle;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar2 = sinf(angle);
  fVar3 = cosf(angle);
                    /* end of inlined section */
  fVar1 = -fVar2;
  fVar7 = (this->field0_0x0).d[0];
  fVar5 = (this->field0_0x0).d[1][0];
  fVar4 = (this->field0_0x0).d[1][2];
  fVar6 = (this->field0_0x0).d[1][1];
  fVar8 = (this->field0_0x0).d[1];
  fVar9 = (this->field0_0x0).d[2];
  (this->field0_0x0).d[1] = fVar3 * fVar8 + fVar2 * fVar6;
  (this->field0_0x0).d[0] = fVar3 * fVar7 + fVar2 * fVar5;
  (this->field0_0x0).d[1][0] = fVar1 * fVar7 + fVar3 * fVar5;
  (this->field0_0x0).d[1][1] = fVar1 * fVar8 + fVar3 * fVar6;
  (this->field0_0x0).d[2] = fVar3 * fVar9 + fVar2 * fVar4;
  (this->field0_0x0).d[1][2] = fVar1 * fVar9 + fVar3 * fVar4;
  return this;
}

EMat4& EMat4::PostRotateZ(float angle) {
	float a;
	float angle;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar2 = sinf(angle);
  fVar3 = cosf(angle);
                    /* end of inlined section */
  fVar8 = (this->field0_0x0).d[0];
  fVar1 = -fVar2;
  fVar5 = (this->field0_0x0).d[1];
  fVar4 = (this->field0_0x0).d[1][1];
  fVar6 = (this->field0_0x0).d[2][1];
  fVar9 = (this->field0_0x0).d[1][0];
  fVar7 = (this->field0_0x0).d[3][1];
  fVar10 = (this->field0_0x0).d[2][0];
  fVar11 = (this->field0_0x0).d[3][0];
  (this->field0_0x0).d[3][1] = fVar11 * fVar2 + fVar7 * fVar3;
  (this->field0_0x0).d[0] = fVar8 * fVar3 + fVar5 * fVar1;
  (this->field0_0x0).d[1] = fVar8 * fVar2 + fVar5 * fVar3;
  (this->field0_0x0).d[1][0] = fVar9 * fVar3 + fVar4 * fVar1;
  (this->field0_0x0).d[1][1] = fVar9 * fVar2 + fVar4 * fVar3;
  (this->field0_0x0).d[2][0] = fVar10 * fVar3 + fVar6 * fVar1;
  (this->field0_0x0).d[2][1] = fVar10 * fVar2 + fVar6 * fVar3;
  (this->field0_0x0).d[3][0] = fVar11 * fVar3 + fVar7 * fVar1;
  return this;
}

EMat4& EMat4::PreTranslate(EVec3 &vTrans) {
	int i;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  float *pfVar1;
  int iVar2;
  
  iVar2 = 2;
  pfVar1 = &(this->field0_0x0).field1._30;
  do {
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    *pfVar1 = *pfVar1 + (vTrans->field0_0x0).d[0] * ((null___1__1_conflict2 *)(pfVar1 + -0xc))->_00
                        + (vTrans->field0_0x0).d[1] * pfVar1[-8] +
                        (vTrans->field0_0x0).d[2] * pfVar1[-4];
    pfVar1 = pfVar1 + 1;
  } while (-1 < iVar2);
  return this;
}

EMat4& EMat4::PostTranslate(EVec3 &vTrans) {
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  float fVar1;
  float fVar2;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar2 = (this->field0_0x0).d[3][1];
  fVar1 = (this->field0_0x0).d[3][2];
  (this->field0_0x0).d[3][0] = (this->field0_0x0).d[3][0] + (vTrans->field0_0x0).d[0];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[3][1] = fVar2 + (vTrans->field0_0x0).d[1];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[3][2] = fVar1 + (vTrans->field0_0x0).d[2];
  return this;
}

EMat4& EMat4::PreScale(EVec3 &vScale) {
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
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar1 = (this->field0_0x0).d[1];
  fVar3 = (this->field0_0x0).d[2];
  fVar2 = (this->field0_0x0).d[1][0];
  fVar5 = (this->field0_0x0).d[1][1];
  (this->field0_0x0).d[0] = (this->field0_0x0).d[0] * (vScale->field0_0x0).d[0];
  fVar4 = (this->field0_0x0).d[1][2];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar7 = (this->field0_0x0).d[2][0];
  fVar6 = (this->field0_0x0).d[2][1];
  fVar8 = (this->field0_0x0).d[2][2];
  (this->field0_0x0).d[1] = fVar1 * (vScale->field0_0x0).d[0];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[2] = fVar3 * (vScale->field0_0x0).d[0];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[1][0] = fVar2 * (vScale->field0_0x0).d[1];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[1][1] = fVar5 * (vScale->field0_0x0).d[1];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[1][2] = fVar4 * (vScale->field0_0x0).d[1];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[2][0] = fVar7 * (vScale->field0_0x0).d[2];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[2][1] = fVar6 * (vScale->field0_0x0).d[2];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[2][2] = fVar8 * (vScale->field0_0x0).d[2];
  return this;
}

EMat4& EMat4::PreScale(float scale) {
	int i;
	int j;
	
  int iVar1;
  float *pfVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar3 + 1;
    pfVar2 = (float *)((int)&this->field0_0x0 + iVar1);
    iVar1 = 2;
    do {
      iVar1 = iVar1 + -1;
      *pfVar2 = *pfVar2 * scale;
      pfVar2 = pfVar2 + 1;
    } while (-1 < iVar1);
    iVar1 = iVar3 * 0x10;
  } while (iVar3 < 3);
  return this;
}

EMat4& EMat4::PostScale(EVec3 &vScale) {
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
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar1 = (this->field0_0x0).d[1][0];
  fVar2 = (this->field0_0x0).d[2][0];
  fVar3 = (this->field0_0x0).d[3][0];
  fVar5 = (this->field0_0x0).d[1];
  (this->field0_0x0).d[0] = (this->field0_0x0).d[0] * (vScale->field0_0x0).d[0];
  fVar4 = (this->field0_0x0).d[1][1];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar7 = (this->field0_0x0).d[2][1];
  fVar6 = (this->field0_0x0).d[3][1];
  fVar9 = (this->field0_0x0).d[2];
  fVar8 = (this->field0_0x0).d[1][2];
  (this->field0_0x0).d[1][0] = fVar1 * (vScale->field0_0x0).d[0];
  fVar10 = (this->field0_0x0).d[2][2];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar1 = (this->field0_0x0).d[3][2];
  (this->field0_0x0).d[2][0] = fVar2 * (vScale->field0_0x0).d[0];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[3][0] = fVar3 * (vScale->field0_0x0).d[0];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[1] = fVar5 * (vScale->field0_0x0).d[1];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[1][1] = fVar4 * (vScale->field0_0x0).d[1];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[2][1] = fVar7 * (vScale->field0_0x0).d[1];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[3][1] = fVar6 * (vScale->field0_0x0).d[1];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[2] = fVar9 * (vScale->field0_0x0).d[2];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[1][2] = fVar8 * (vScale->field0_0x0).d[2];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[2][2] = fVar10 * (vScale->field0_0x0).d[2];
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[3][2] = fVar1 * (vScale->field0_0x0).d[2];
  return this;
}

EMat4& EMat4::PostScale(float scale) {
	int i;
	int j;
	
  int iVar1;
  float *pfVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar3 + 1;
    pfVar2 = (float *)((int)&this->field0_0x0 + iVar1);
    iVar1 = 2;
    do {
      iVar1 = iVar1 + -1;
      *pfVar2 = *pfVar2 * scale;
      pfVar2 = pfVar2 + 1;
    } while (-1 < iVar1);
    iVar1 = iVar3 * 0x10;
  } while (iVar3 < 4);
  return this;
}

void EMat4::Conform(EVec3 &vNormal) {
	EVec3 vY;
	EVec3 vX;
	EMat4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EMat4 *this;
	EVec3 &v;
	EMat4 *this;
	EVec3 *this;
	EMat4 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  EVec3 vY;
  EVec3 vX;
  
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
  (this->field0_0x0).d[2][0] = (vNormal->field0_0x0).d[0];
  (this->field0_0x0).d[2][1] = (vNormal->field0_0x0).d[1];
  (this->field0_0x0).d[2][2] = (vNormal->field0_0x0).d[2];
  fVar5 = (this->field0_0x0).d[1][0];
  vY.field0_0x0.d[2] = (this->field0_0x0).d[1][2];
  fVar6 = (this->field0_0x0).d[1][1];
  vY.field0_0x0._0_8_ = *(undefined8 *)(this->field0_0x0).d[1];
  fVar4 = fVar6 * (vNormal->field0_0x0).d[2] - vY.field0_0x0.d[2] * (vNormal->field0_0x0).d[1];
  vX.field0_0x0.d[1] =
       vY.field0_0x0.d[2] * (vNormal->field0_0x0).d[0] - fVar5 * (vNormal->field0_0x0).d[2];
  vX.field0_0x0.d[2] = fVar5 * (vNormal->field0_0x0).d[1] - fVar6 * (vNormal->field0_0x0).d[0];
  fVar5 = sqrtf(fVar4 * fVar4 + vX.field0_0x0.d[1] * vX.field0_0x0.d[1] +
                vX.field0_0x0.d[2] * vX.field0_0x0.d[2]);
  if (fVar5 != 0.0) {
    fVar5 = 1.0 / fVar5;
    fVar4 = fVar4 * fVar5;
    vX.field0_0x0.d[2] = vX.field0_0x0.d[2] * fVar5;
    vX.field0_0x0.d[1] = vX.field0_0x0.d[1] * fVar5;
  }
  (this->field0_0x0).d[0] = fVar4;
  (this->field0_0x0).d[1] = vX.field0_0x0.d[1];
  (this->field0_0x0).d[2] = vX.field0_0x0.d[2];
  fVar5 = (vNormal->field0_0x0).d[2] * fVar4 - (vNormal->field0_0x0).d[0] * vX.field0_0x0.d[2];
  vY.field0_0x0.d[2] =
       (vNormal->field0_0x0).d[0] * vX.field0_0x0.d[1] - (vNormal->field0_0x0).d[1] * fVar4;
  fVar4 = (vNormal->field0_0x0).d[1] * vX.field0_0x0.d[2] -
          (vNormal->field0_0x0).d[2] * vX.field0_0x0.d[1];
                    /* end of inlined section */
  vY.field0_0x0._0_8_ = CONCAT44(fVar5,fVar4);
  puVar1 = (undefined *)((int)&vY.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)vY.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar5 = sqrtf(fVar4 * fVar4 + fVar5 * fVar5 + vY.field0_0x0.d[2] * vY.field0_0x0.d[2]);
  if (fVar5 != 0.0) {
    fVar5 = 1.0 / fVar5;
    vY.field0_0x0.d[0] = vY.field0_0x0.d[0] * fVar5;
    vY.field0_0x0.d[2] = vY.field0_0x0.d[2] * fVar5;
    vY.field0_0x0._0_8_ = CONCAT44(vY.field0_0x0.d[1] * fVar5,vY.field0_0x0.d[0]);
  }
  (this->field0_0x0).d[1][0] = vY.field0_0x0.d[0];
  (this->field0_0x0).d[1][2] = vY.field0_0x0.d[2];
  (this->field0_0x0).d[1][1] = vY.field0_0x0.d[1];
  return;
}

void EMat4::Clamp() {
	int i;
	int j;
	
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar3 + 1;
    pfVar2 = (float *)((int)&this->field0_0x0 + iVar1);
    iVar1 = 3;
    do {
      fVar5 = *pfVar2;
      fVar4 = -32767.0;
      if (-32767.0 <= fVar5) {
        fVar4 = (float)((int)fVar5 * (uint)(fVar5 < 32767.0) | (uint)(fVar5 >= 32767.0) * 0x46fffe00
                       );
      }
      *pfVar2 = fVar4;
      iVar1 = iVar1 + -1;
      pfVar2 = pfVar2 + 1;
    } while (-1 < iVar1);
    iVar1 = iVar3 * 0x10;
  } while (iVar3 < 4);
  return;
}

void EMat4::Print() {
  return;
}

float EMat4::GetMaxScale() {
	float maxScale;
	int i;
	float axisScale;
	int j;
	
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = 0;
  fVar5 = 0.0;
  iVar1 = 0;
  while( true ) {
    fVar6 = 0.0;
    iVar3 = iVar3 + 1;
    pfVar2 = (float *)((int)&this->field0_0x0 + iVar1);
    iVar1 = 2;
    do {
      fVar4 = *pfVar2;
      iVar1 = iVar1 + -1;
      pfVar2 = pfVar2 + 4;
      fVar4 = fabsf(fVar4);
      fVar6 = fVar6 + fVar4;
    } while (-1 < iVar1);
    if (fVar5 < fVar6) {
      fVar5 = fVar6;
    }
    if (2 < iVar3) break;
    iVar1 = iVar3 * 4;
  }
  return fVar5;
}

void EMat4::GetHPR(float &heading, float &pitch, float &roll) {
	float v;
	float v;
	
  float fVar1;
  float fVar2;
  
  fVar1 = atan2f((this->field0_0x0).d[2][0],(this->field0_0x0).d[2][2]);
  *heading = fVar1;
                    /* inlined from c:/eor/src2/common/math/e_math.h */
  fVar1 = (this->field0_0x0).d[2][0];
  fVar2 = (this->field0_0x0).d[2][2];
                    /* end of inlined section */
  fVar1 = sqrtf(fVar1 * fVar1 + fVar2 * fVar2);
  fVar1 = atan2f((this->field0_0x0).d[2][1],fVar1);
  *pitch = -fVar1;
  fVar1 = atan2f(-(this->field0_0x0).d[1],(this->field0_0x0).d[1][1]);
  *roll = -fVar1;
  return;
}

float EMat4::ExtractAxisRotation(EVec3 &vAxis) {
	EQuat q;
	
  float fVar1;
  EQuat q;
  
  FromMat4__5EQuatRC5EMat4(&q,this);
  fVar1 = ExtractAxisRotation__C5EQuatRC5EVec3(&q,vAxis);
  return fVar1;
}

EMat4& EMat4::LookAtPos(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp) {
	EVec3 zbody;
	EVec3 xbody;
	EVec3 ybody;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  float fVar1;
  float fVar2;
  EVec3 zbody;
  EVec3 xbody;
  EVec3 ybody;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  zbody.field0_0x0.d[0] = (vEye->field0_0x0).d[0] - (vTarget->field0_0x0).d[0];
  zbody.field0_0x0.d[1] = (vEye->field0_0x0).d[1] - (vTarget->field0_0x0).d[1];
  zbody.field0_0x0.d[2] = (vEye->field0_0x0).d[2] - (vTarget->field0_0x0).d[2];
  fVar1 = sqrtf(zbody.field0_0x0.d[0] * zbody.field0_0x0.d[0] +
                zbody.field0_0x0.d[1] * zbody.field0_0x0.d[1] +
                zbody.field0_0x0.d[2] * zbody.field0_0x0.d[2]);
  if (fVar1 == 0.0) {
    fVar1 = (vUp->field0_0x0).d[0];
  }
  else {
    fVar1 = 1.0 / fVar1;
    zbody.field0_0x0.d[0] = zbody.field0_0x0.d[0] * fVar1;
    zbody.field0_0x0.d[2] = zbody.field0_0x0.d[2] * fVar1;
    zbody.field0_0x0.d[1] = zbody.field0_0x0.d[1] * fVar1;
    fVar1 = (vUp->field0_0x0).d[0];
  }
  xbody.field0_0x0.d[0] =
       (vUp->field0_0x0).d[1] * zbody.field0_0x0.d[2] -
       (vUp->field0_0x0).d[2] * zbody.field0_0x0.d[1];
  xbody.field0_0x0.d[1] =
       (vUp->field0_0x0).d[2] * zbody.field0_0x0.d[0] - fVar1 * zbody.field0_0x0.d[2];
  xbody.field0_0x0.d[2] =
       fVar1 * zbody.field0_0x0.d[1] - (vUp->field0_0x0).d[1] * zbody.field0_0x0.d[0];
  fVar1 = sqrtf(xbody.field0_0x0.d[0] * xbody.field0_0x0.d[0] +
                xbody.field0_0x0.d[1] * xbody.field0_0x0.d[1] +
                xbody.field0_0x0.d[2] * xbody.field0_0x0.d[2]);
  if (fVar1 != 0.0) {
    fVar1 = 1.0 / fVar1;
    xbody.field0_0x0.d[0] = xbody.field0_0x0.d[0] * fVar1;
    xbody.field0_0x0.d[2] = xbody.field0_0x0.d[2] * fVar1;
    xbody.field0_0x0.d[1] = xbody.field0_0x0.d[1] * fVar1;
  }
  fVar2 = zbody.field0_0x0.d[1] * xbody.field0_0x0.d[2] -
          zbody.field0_0x0.d[2] * xbody.field0_0x0.d[1];
  ybody.field0_0x0.d[1] =
       zbody.field0_0x0.d[2] * xbody.field0_0x0.d[0] - zbody.field0_0x0.d[0] * xbody.field0_0x0.d[2]
  ;
  ybody.field0_0x0.d[2] =
       zbody.field0_0x0.d[0] * xbody.field0_0x0.d[1] - zbody.field0_0x0.d[1] * xbody.field0_0x0.d[0]
  ;
  fVar1 = sqrtf(fVar2 * fVar2 + ybody.field0_0x0.d[1] * ybody.field0_0x0.d[1] +
                ybody.field0_0x0.d[2] * ybody.field0_0x0.d[2]);
  if (fVar1 != 0.0) {
    fVar1 = 1.0 / fVar1;
    fVar2 = fVar2 * fVar1;
    ybody.field0_0x0.d[2] = ybody.field0_0x0.d[2] * fVar1;
    ybody.field0_0x0.d[1] = ybody.field0_0x0.d[1] * fVar1;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[3] = 0.0;
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
  (this->field0_0x0).d[0] = xbody.field0_0x0.d[0];
  (this->field0_0x0).d[1] = xbody.field0_0x0.d[1];
  (this->field0_0x0).d[1][0] = fVar2;
  (this->field0_0x0).d[2] = xbody.field0_0x0.d[2];
  (this->field0_0x0).d[1][2] = ybody.field0_0x0.d[2];
  (this->field0_0x0).d[1][1] = ybody.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[1][3] = 0.0;
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
  (this->field0_0x0).d[2][0] = zbody.field0_0x0.d[0];
  (this->field0_0x0).d[2][1] = zbody.field0_0x0.d[1];
  (this->field0_0x0).d[2][2] = zbody.field0_0x0.d[2];
                    /* end of inlined section */
  (this->field0_0x0).d[2][3] = 0.0;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
  (this->field0_0x0).d[3][0] = (vEye->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  (this->field0_0x0).d[3][1] = (vEye->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
  (this->field0_0x0).d[3][2] = (vEye->field0_0x0).d[2];
                    /* end of inlined section */
  (this->field0_0x0).d[3][3] = 1.0;
  return this;
}

EMat4& EMat4::LookAt(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp) {
	EMat4 *this;
	EMat4 mTemp;
	EMat4 &m;
	
  EMat4 mTemp;
  
  LookAtPos__5EMat4RC5EVec3N21(this,vEye,vTarget,vUp);
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
  __as__5EMat4RC5EMat4(&mTemp,this);
  Invert__5EMat4RC5EMat4(this,&mTemp);
                    /* end of inlined section */
  return this;
}

EMat4& EMat4::LookAtDirect(EVec3 &vOldUnitDir, EVec3 &vNewUnitDir, float multiplier) {
	float angle;
	EVec3 vAxis;
	float mag;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 &v;
	float scaler;
	
  float fVar1;
  float fVar2;
  EVec3 vAxis;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar1 = acosf((vOldUnitDir->field0_0x0).d[0] * (vNewUnitDir->field0_0x0).d[0] +
                (vOldUnitDir->field0_0x0).d[1] * (vNewUnitDir->field0_0x0).d[1] +
                (vOldUnitDir->field0_0x0).d[2] * (vNewUnitDir->field0_0x0).d[2]);
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  vAxis.field0_0x0.d[1] =
       (vOldUnitDir->field0_0x0).d[2] * (vNewUnitDir->field0_0x0).d[0] -
       (vOldUnitDir->field0_0x0).d[0] * (vNewUnitDir->field0_0x0).d[2];
  vAxis.field0_0x0.d[0] =
       (vOldUnitDir->field0_0x0).d[1] * (vNewUnitDir->field0_0x0).d[2] -
       (vOldUnitDir->field0_0x0).d[2] * (vNewUnitDir->field0_0x0).d[1];
  vAxis.field0_0x0.d[2] =
       (vOldUnitDir->field0_0x0).d[0] * (vNewUnitDir->field0_0x0).d[1] -
       (vOldUnitDir->field0_0x0).d[1] * (vNewUnitDir->field0_0x0).d[0];
  fVar2 = sqrtf(vAxis.field0_0x0.d[0] * vAxis.field0_0x0.d[0] +
                vAxis.field0_0x0.d[1] * vAxis.field0_0x0.d[1] +
                vAxis.field0_0x0.d[2] * vAxis.field0_0x0.d[2]);
                    /* end of inlined section */
  if (fVar2 == 0.0) {
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
    vAxis.field0_0x0.d[2] = 0.0;
    vAxis.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
    vAxis.field0_0x0.d[0] = 0.0;
  }
  else {
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
    fVar2 = 1.0 / fVar2;
    vAxis.field0_0x0.d[0] = vAxis.field0_0x0.d[0] * fVar2;
    vAxis.field0_0x0.d[2] = vAxis.field0_0x0.d[2] * fVar2;
    vAxis.field0_0x0.d[1] = vAxis.field0_0x0.d[1] * fVar2;
  }
                    /* end of inlined section */
  Rotate__5EMat4RC5EVec3f(this,&vAxis,multiplier * fVar1);
  return this;
}

EMat4& EMat4::LookTo(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp) {
	EVec3 zbody;
	EVec3 xbody;
	EVec3 ybody;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  float fVar1;
  float fVar2;
  EVec3 zbody;
  EVec3 xbody;
  EVec3 ybody;
  
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  zbody.field0_0x0.d[0] = (vTarget->field0_0x0).d[0] - (vEye->field0_0x0).d[0];
  zbody.field0_0x0.d[1] = (vTarget->field0_0x0).d[1] - (vEye->field0_0x0).d[1];
  zbody.field0_0x0.d[2] = (vTarget->field0_0x0).d[2] - (vEye->field0_0x0).d[2];
  fVar1 = sqrtf(zbody.field0_0x0.d[0] * zbody.field0_0x0.d[0] +
                zbody.field0_0x0.d[1] * zbody.field0_0x0.d[1] +
                zbody.field0_0x0.d[2] * zbody.field0_0x0.d[2]);
  if (fVar1 == 0.0) {
    fVar1 = (vUp->field0_0x0).d[0];
  }
  else {
    fVar1 = 1.0 / fVar1;
    zbody.field0_0x0.d[0] = zbody.field0_0x0.d[0] * fVar1;
    zbody.field0_0x0.d[2] = zbody.field0_0x0.d[2] * fVar1;
    zbody.field0_0x0.d[1] = zbody.field0_0x0.d[1] * fVar1;
    fVar1 = (vUp->field0_0x0).d[0];
  }
  xbody.field0_0x0.d[0] =
       (vUp->field0_0x0).d[1] * zbody.field0_0x0.d[2] -
       (vUp->field0_0x0).d[2] * zbody.field0_0x0.d[1];
  xbody.field0_0x0.d[1] =
       (vUp->field0_0x0).d[2] * zbody.field0_0x0.d[0] - fVar1 * zbody.field0_0x0.d[2];
  xbody.field0_0x0.d[2] =
       fVar1 * zbody.field0_0x0.d[1] - (vUp->field0_0x0).d[1] * zbody.field0_0x0.d[0];
  fVar1 = sqrtf(xbody.field0_0x0.d[0] * xbody.field0_0x0.d[0] +
                xbody.field0_0x0.d[1] * xbody.field0_0x0.d[1] +
                xbody.field0_0x0.d[2] * xbody.field0_0x0.d[2]);
  if (fVar1 != 0.0) {
    fVar1 = 1.0 / fVar1;
    xbody.field0_0x0.d[0] = xbody.field0_0x0.d[0] * fVar1;
    xbody.field0_0x0.d[2] = xbody.field0_0x0.d[2] * fVar1;
    xbody.field0_0x0.d[1] = xbody.field0_0x0.d[1] * fVar1;
  }
  fVar2 = zbody.field0_0x0.d[1] * xbody.field0_0x0.d[2] -
          zbody.field0_0x0.d[2] * xbody.field0_0x0.d[1];
  ybody.field0_0x0.d[1] =
       zbody.field0_0x0.d[2] * xbody.field0_0x0.d[0] - zbody.field0_0x0.d[0] * xbody.field0_0x0.d[2]
  ;
  ybody.field0_0x0.d[2] =
       zbody.field0_0x0.d[0] * xbody.field0_0x0.d[1] - zbody.field0_0x0.d[1] * xbody.field0_0x0.d[0]
  ;
  fVar1 = sqrtf(fVar2 * fVar2 + ybody.field0_0x0.d[1] * ybody.field0_0x0.d[1] +
                ybody.field0_0x0.d[2] * ybody.field0_0x0.d[2]);
  if (fVar1 != 0.0) {
    fVar1 = 1.0 / fVar1;
    fVar2 = fVar2 * fVar1;
    ybody.field0_0x0.d[2] = ybody.field0_0x0.d[2] * fVar1;
    ybody.field0_0x0.d[1] = ybody.field0_0x0.d[1] * fVar1;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[3] = 0.0;
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
  (this->field0_0x0).d[0] = xbody.field0_0x0.d[0];
  (this->field0_0x0).d[1] = xbody.field0_0x0.d[1];
  (this->field0_0x0).d[1][0] = fVar2;
  (this->field0_0x0).d[2] = xbody.field0_0x0.d[2];
  (this->field0_0x0).d[1][2] = ybody.field0_0x0.d[2];
  (this->field0_0x0).d[1][1] = ybody.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).d[1][3] = 0.0;
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
  (this->field0_0x0).d[2][0] = zbody.field0_0x0.d[0];
  (this->field0_0x0).d[2][1] = zbody.field0_0x0.d[1];
  (this->field0_0x0).d[2][2] = zbody.field0_0x0.d[2];
                    /* end of inlined section */
  (this->field0_0x0).d[2][3] = 0.0;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
  (this->field0_0x0).d[3][0] = (vEye->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  (this->field0_0x0).d[3][1] = (vEye->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec4.h */
  (this->field0_0x0).d[3][2] = (vEye->field0_0x0).d[2];
                    /* end of inlined section */
  (this->field0_0x0).d[3][3] = 1.0;
  return this;
}

EMat4& EMat4::Projection(float fovYDegrees, float aspect, float nearPlane, float farPlane) {
	float deg;
	
  float fVar1;
  float fVar2;
  
  Id__5EMat4(this);
                    /* inlined from e_standard_macros.h */
                    /* end of inlined section */
                    /* inlined from e_standard_macros.h */
                    /* end of inlined section */
  fVar2 = fovYDegrees * 0.01745329 * 0.5;
  fVar1 = cosf(fVar2);
  fVar2 = sinf(fVar2);
  (this->field0_0x0).d[2][3] = -1.0;
  (this->field0_0x0).d[3][3] = 0.0;
  (this->field0_0x0).d[1][1] = fVar1 / fVar2;
  (this->field0_0x0).d[0] = (fVar1 / fVar2) / aspect;
  (this->field0_0x0).d[2][2] = (nearPlane + farPlane) / (nearPlane - farPlane);
  (this->field0_0x0).d[3][2] = ((nearPlane + nearPlane) * farPlane) / (nearPlane - farPlane);
  return this;
}

EMat4& EMat4::Ortho(float left, float right, float bottom, float top, float nearPlane, float farPlane) {
  Id__5EMat4(this);
  (this->field0_0x0).d[3][3] = 1.0;
  (this->field0_0x0).d[3][1] = -(top + bottom) / (top - bottom);
  (this->field0_0x0).d[1][1] = 2.0 / (top - bottom);
  (this->field0_0x0).d[3][0] = -(right + left) / (right - left);
  (this->field0_0x0).d[3][2] = -(farPlane + nearPlane) / (farPlane - nearPlane);
  (this->field0_0x0).d[2][2] = -2.0 / (farPlane - nearPlane);
  (this->field0_0x0).d[0] = 2.0 / (right - left);
  return this;
}

EMat4& EMat4::BlendEuler(float u, EMat4 &mA, EMat4 &mB) {
	EVec3 vNewPos;
	EVec3 vX;
	EVec3 vY;
	EVec3 vZ;
	EMat4 *this;
	EMat4 *this;
	float u;
	float scaler;
	EMat4 *this;
	EMat4 *this;
	float u;
	float scaler;
	EMat4 *this;
	EMat4 *this;
	float u;
	float scaler;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  EVec3 vNewPos;
  EVec3 vX;
  EVec3 vY;
  EVec3 vZ;
  
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar11 = (mA->field0_0x0).d[3][0];
  fVar16 = (mA->field0_0x0).d[3][2];
  fVar5 = (mB->field0_0x0).d[3][0] - fVar11;
  fVar10 = (mA->field0_0x0).d[3][1];
  vZ.field0_0x0.d[2] = (mB->field0_0x0).d[3][2] - fVar16;
  fVar6 = (mA->field0_0x0).d[1][0];
  fVar4 = (mB->field0_0x0).d[3][1] - fVar10;
  fVar17 = (mA->field0_0x0).d[1][2];
  fVar8 = (mA->field0_0x0).d[1][1];
  vY.field0_0x0.d[2] = vZ.field0_0x0.d[2] * u;
  fVar19 = (mB->field0_0x0).d[1][2];
  fVar20 = fVar4 * u;
  fVar18 = fVar5 * u;
  fVar14 = (mA->field0_0x0).d[2][2];
  fVar15 = (mA->field0_0x0).d[2][0];
  fVar12 = (mB->field0_0x0).d[2][0];
  fVar13 = (mB->field0_0x0).d[2][2];
  fVar7 = (mA->field0_0x0).d[2][1];
  fVar9 = (mB->field0_0x0).d[2][1];
  vZ.field0_0x0._0_8_ = CONCAT44(fVar4,fVar5);
  vY.field0_0x0._0_8_ = CONCAT44(fVar20,fVar18);
  vNewPos.field0_0x0.d[2] = fVar16 + vY.field0_0x0.d[2];
  vX.field0_0x0._0_8_ = CONCAT44(fVar10 + fVar20,fVar11 + fVar18);
  vX.field0_0x0.d[2] = vNewPos.field0_0x0.d[2];
  fVar6 = fVar6 + ((mB->field0_0x0).d[1][0] - fVar6) * u;
  fVar8 = fVar8 + ((mB->field0_0x0).d[1][1] - fVar8) * u;
  puVar1 = (undefined *)((int)&vNewPos.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)vX.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  vNewPos.field0_0x0._0_8_ = vX.field0_0x0._0_8_;
  vY.field0_0x0.d[2] = fVar17 + (fVar19 - fVar17) * u;
  fVar7 = fVar7 + (fVar9 - fVar7) * u;
  vZ.field0_0x0.d[2] = fVar14 + (fVar13 - fVar14) * u;
  fVar15 = fVar15 + (fVar12 - fVar15) * u;
  puVar1 = (undefined *)((int)&vY.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(fVar8,fVar6) >> (7 - uVar2) * 8;
  vY.field0_0x0._0_8_ = CONCAT44(fVar8,fVar6);
  puVar1 = (undefined *)((int)&vZ.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(fVar7,fVar15) >> (7 - uVar2) * 8;
  vZ.field0_0x0._0_8_ = CONCAT44(fVar7,fVar15);
  fVar5 = fVar8 * vZ.field0_0x0.d[2] - vY.field0_0x0.d[2] * fVar7;
  vX.field0_0x0.d[2] = fVar6 * fVar7 - fVar8 * fVar15;
  fVar4 = vY.field0_0x0.d[2] * fVar15 - fVar6 * vZ.field0_0x0.d[2];
                    /* end of inlined section */
  vX.field0_0x0._0_8_ = CONCAT44(fVar4,fVar5);
  puVar1 = (undefined *)((int)&vX.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)vX.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  vZ.field0_0x0.d[2] = fVar5 * vY.field0_0x0.d[1] - fVar4 * vY.field0_0x0.d[0];
                    /* end of inlined section */
  vZ.field0_0x0._0_8_ =
       CONCAT44(vX.field0_0x0.d[2] * vY.field0_0x0.d[0] - fVar5 * vY.field0_0x0.d[2],
                fVar4 * vY.field0_0x0.d[2] - vX.field0_0x0.d[2] * vY.field0_0x0.d[1]);
  puVar1 = (undefined *)((int)&vZ.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)vZ.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  fVar4 = sqrtf(fVar5 * fVar5 + fVar4 * fVar4 + vX.field0_0x0.d[2] * vX.field0_0x0.d[2]);
  if (fVar4 != 0.0) {
    fVar4 = 1.0 / fVar4;
    vX.field0_0x0.d[2] = vX.field0_0x0.d[2] * fVar4;
    vX.field0_0x0._0_8_ = CONCAT44(vX.field0_0x0.d[1] * fVar4,vX.field0_0x0.d[0] * fVar4);
  }
  fVar4 = sqrtf(vY.field0_0x0.d[0] * vY.field0_0x0.d[0] + vY.field0_0x0.d[1] * vY.field0_0x0.d[1] +
                vY.field0_0x0.d[2] * vY.field0_0x0.d[2]);
  if (fVar4 != 0.0) {
    fVar4 = 1.0 / fVar4;
    vY.field0_0x0.d[2] = vY.field0_0x0.d[2] * fVar4;
    vY.field0_0x0._0_8_ = CONCAT44(vY.field0_0x0.d[1] * fVar4,vY.field0_0x0.d[0] * fVar4);
  }
  fVar4 = sqrtf(vZ.field0_0x0.d[0] * vZ.field0_0x0.d[0] + vZ.field0_0x0.d[1] * vZ.field0_0x0.d[1] +
                vZ.field0_0x0.d[2] * vZ.field0_0x0.d[2]);
  if (fVar4 != 0.0) {
    fVar4 = 1.0 / fVar4;
    vZ.field0_0x0.d[2] = vZ.field0_0x0.d[2] * fVar4;
    vZ.field0_0x0._0_8_ = CONCAT44(vZ.field0_0x0.d[1] * fVar4,vZ.field0_0x0.d[0] * fVar4);
                    /* end of inlined section */
  }
  (this->field0_0x0).d[2][3] = 0.0;
  (this->field0_0x0).d[3] = 0.0;
  (this->field0_0x0).d[1][3] = 0.0;
  (this->field0_0x0).d[0] = vX.field0_0x0.d[0];
  (this->field0_0x0).d[1] = vX.field0_0x0.d[1];
  (this->field0_0x0).d[2] = vX.field0_0x0.d[2];
  (this->field0_0x0).d[1][0] = vY.field0_0x0.d[0];
  (this->field0_0x0).d[1][1] = vY.field0_0x0.d[1];
  (this->field0_0x0).d[1][2] = vY.field0_0x0.d[2];
  (this->field0_0x0).d[2][0] = vZ.field0_0x0.d[0];
  (this->field0_0x0).d[2][1] = vZ.field0_0x0.d[1];
  (this->field0_0x0).d[2][2] = vZ.field0_0x0.d[2];
  (this->field0_0x0).d[3][0] = vNewPos.field0_0x0.d[0];
  (this->field0_0x0).d[3][1] = vNewPos.field0_0x0.d[1];
  (this->field0_0x0).d[3][2] = vNewPos.field0_0x0.d[2];
  (this->field0_0x0).d[3][3] = 1.0;
  return this;
}

EMat4& EMat4::BlendQuat(float u, EMat4 &mA, EMat4 &mB) {
	EQuat qA;
	EQuat qB;
	EVec3 vA;
	EVec3 vB;
	EQuat qBlended;
	EVec3 vBlended;
	EMat4 *this;
	EMat4 *this;
	float u;
	EQuat qB;
	float u;
	float scaler;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong in_a3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EQuat qA;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  EVec3 vA;
  EVec3 vB;
  EQuat qBlended;
  EVec3 vBlended;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  FromMat4__5EQuatRC5EMat4(&qA,mA);
  FromMat4__5EQuatRC5EMat4((EQuat *)&local_e0,mB);
  puVar1 = (undefined *)((int)&mA->field0_0x0 + 0x37);
  uVar3 = (uint)puVar1 & 7;
  puVar2 = (undefined *)((int)&mA->field0_0x0 + 0x30);
  uVar4 = (uint)puVar2 & 7;
  vA.field0_0x0._0_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
  vA.field0_0x0.d[2] = (mA->field0_0x0).d[3][2];
  puVar1 = (undefined *)((int)&vA.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)vA.field0_0x0._0_8_ >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&mB->field0_0x0 + 0x37);
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar2 = (undefined *)((int)&mB->field0_0x0 + 0x30);
  uVar4 = (uint)puVar2 & 7;
  vB.field0_0x0._0_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
  vB.field0_0x0.d[2] = (mB->field0_0x0).d[3][2];
  puVar1 = (undefined *)((int)&vB.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)vB.field0_0x0._0_8_ >> (7 - uVar3) * 8;
                    /* inlined from c:/eor/src2/common/math/e_quat.h */
  local_90 = local_e0;
  local_8c = local_dc;
  local_88 = local_d8;
  local_84 = local_d4;
  vBlended.field0_0x0.d[2] = local_d8;
  Slerp__5EQuatfRC5EQuatT0(&qBlended,u,&qA,(EQuat *)&local_90);
                    /* end of inlined section */
  ToMat4__C5EQuatR5EMat4(&qBlended,this);
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  local_60 = vB.field0_0x0.d[0] - vA.field0_0x0.d[0];
  local_70 = (vB.field0_0x0.d[0] - vA.field0_0x0.d[0]) * u;
  local_5c = vB.field0_0x0.d[1] - vA.field0_0x0.d[1];
  local_6c = (vB.field0_0x0.d[1] - vA.field0_0x0.d[1]) * u;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  local_68 = (vB.field0_0x0.d[2] - vA.field0_0x0.d[2]) * u;
  local_58 = vB.field0_0x0.d[2] - vA.field0_0x0.d[2];
  local_80 = vA.field0_0x0.d[0] + local_70;
  local_7c = vA.field0_0x0.d[1] + local_6c;
  local_78 = vA.field0_0x0.d[2] + local_68;
  puVar1 = (undefined *)((int)&vBlended.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | CONCAT44(local_7c,local_80) >> (7 - uVar3) * 8;
                    /* end of inlined section */
  (this->field0_0x0).d[3][0] = local_80;
  (this->field0_0x0).d[3][1] = local_7c;
  (this->field0_0x0).d[3][2] = local_78;
  return this;
}

EMat4& EMat4::TexturePerspectiveProjection(EVec3 &vSource, EVec3 &vTarget, EVec3 &vUp, float fovYDegrees, float aspect, float tileU, float tileV) {
	EMat4 mLookAt;
	EMat4 mProj;
	EMat4 mLookAtProj;
	EMat4 mOffset;
	EMat4 *this;
	
  float (*paafVar1) [4] [4];
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  undefined4 uVar2;
  EMat4 mLookAt;
  EMat4 mProj;
  EMat4 mLookAtProj;
  EMat4 mOffset;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  EMat4 EStack_b0;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  LookAt__5EMat4RC5EVec3N21(&mLookAt,vSource,vTarget,vUp);
  uVar2 = 0;
  Projection__5EMat4ffff(&mProj,fovYDegrees,aspect,0.0,1.0);
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
  paafVar1 = __opRA3_A3_f__5EMat4(&mOffset);
  sceVu0MulMatrix(paafVar1,&mProj,&mLookAt);
  __as__5EMat4RC5EMat4(&mLookAtProj,&mOffset);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_bc = tileV * 0.5;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_b8 = 0x3f800000;
  local_c0 = tileU * 0.5;
  Scale__5EMat4RC5EVec3(&mOffset,(EVec3 *)&local_c0);
  local_c0 = tileU * 0.5;
  local_b8 = uVar2;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
  PostTranslate__5EMat4RC5EVec3(&mOffset,(EVec3 *)&local_c0);
                    /* inlined from c:/eor/src2/common/math/e_mat4.h */
  paafVar1 = __opRA3_A3_f__5EMat4(&EStack_b0);
  sceVu0MulMatrix(paafVar1,&mOffset,&mLookAtProj);
  __as__5EMat4RC5EMat4(this,&EStack_b0);
                    /* end of inlined section */
  return this;
}

EMat4& EMat4::TexturePlanarProjection(EVec3 &vSource, EVec3 &vTarget, EVec3 &vUp, float width, float height, float tileU, float tileV) {
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  LookAt__5EMat4RC5EVec3N21(this,vSource,vTarget,vUp);
  local_50 = tileU / width;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_4c = tileV / height;
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
  local_48 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  PostScale__5EMat4RC5EVec3(this,(EVec3 *)&local_50);
  return this;
}

sceVu0FMATRIX& EMat4::operator float (&)[3][3]() {
  return (float (*) [4] [4])this;
}
