// STATUS: NOT STARTED

#include "e_submodel.h"

ESubModel* ESubModel::ESubModel() {
	TArray<ESubModelShader> *this;
	EArray *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  __6EArray((EArray *)this);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  (this->m_subModelShaders).field0_0x0.m_elementSize = 0x4c;
  return this;
}

void ESubModel::~ESubModel(int __in_chrg) {
	TArray<ESubModelShader> *this;
	int i;
	TArray<ESubModelShader> *this;
	EArray *this;
	int index;
	TArray<ESubModelShader> *this;
	EArray *this;
	void *pAddress;
	void *pAddress;
	
  int iVar1;
  int iVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar1 = 0;
  if (0 < (this->m_subModelShaders).field0_0x0.m_size) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      ___15ESubModelShader
                ((ESubModelShader *)((int)(this->m_subModelShaders).field0_0x0.m_p + iVar2),2);
      iVar2 = iVar2 + 0x4c;
    } while (iVar1 < (this->m_subModelShaders).field0_0x0.m_size);
  }
  Deallocate__6EArray((EArray *)this);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

bool ESubModel::IsCollideable() {
	int cSubModelShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	TArray<ESubModelShader> *this;
	int index;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar2 = 0;
  if (0 < (this->m_subModelShaders).field0_0x0.m_size) {
    iVar3 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      bVar1 = IsCollideable__15ESubModelShader
                        ((ESubModelShader *)((int)(this->m_subModelShaders).field0_0x0.m_p + iVar3))
      ;
      if (bVar1) {
        return true;
      }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x4c;
    } while (iVar2 < (this->m_subModelShaders).field0_0x0.m_size);
  }
  return false;
}

bool ESubModel::IsVisible() {
	int cSubModelShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	TArray<ESubModelShader> *this;
	int index;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar2 = 0;
  if (0 < (this->m_subModelShaders).field0_0x0.m_size) {
    iVar3 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      bVar1 = IsVisible__15ESubModelShader
                        ((ESubModelShader *)((int)(this->m_subModelShaders).field0_0x0.m_p + iVar3))
      ;
      if (bVar1) {
        return true;
      }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x4c;
    } while (iVar2 < (this->m_subModelShaders).field0_0x0.m_size);
  }
  return false;
}

int ESubModel::GetVertCount() {
	int nVerts;
	int cSubModelShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	TArray<ESubModelShader> *this;
	int index;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar2 = 0;
  if (0 < (this->m_subModelShaders).field0_0x0.m_size) {
    iVar3 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar4 = iVar4 + 1;
      iVar1 = GetVertCount__15ESubModelShader
                        ((ESubModelShader *)((int)(this->m_subModelShaders).field0_0x0.m_p + iVar3))
      ;
      iVar3 = iVar3 + 0x4c;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar2 = iVar2 + iVar1;
    } while (iVar4 < (this->m_subModelShaders).field0_0x0.m_size);
  }
  return iVar2;
}

EStream& operator>>(EStream &s, ESubModel &m) {
	int count;
	EStream &s;
	EStream &s;
	TArray<ESubModelShader> *this;
	int size;
	TArray<ESubModelShader> *this;
	EArray *this;
	int i;
	int index;
	TArray<ESubModelShader> *this;
	int i;
	int index;
	TArray<ESubModelShader> *this;
	int i;
	TArray<ESubModelShader> *this;
	int index;
	
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_s0;
  int iVar4;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  int count;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&m->m_nNode,4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&count,4);
  iVar2 = count;
  iVar3 = (m->m_subModelShaders).field0_0x0.m_size;
  if (count < iVar3) {
    iVar4 = iVar3 - count;
    iVar1 = count * 0x4c;
    do {
      iVar4 = iVar4 + -1;
      ___15ESubModelShader
                ((ESubModelShader *)((int)(m->m_subModelShaders).field0_0x0.m_p + iVar1),2);
      iVar1 = iVar1 + 0x4c;
    } while (iVar4 != 0);
  }
  SetSize__6EArrayii((EArray *)m,iVar2,0);
  if (iVar3 < iVar2) {
    iVar1 = iVar3 * 0x4c;
    iVar2 = iVar2 - iVar3;
    do {
      iVar2 = iVar2 + -1;
      __15ESubModelShader((ESubModelShader *)((int)(m->m_subModelShaders).field0_0x0.m_p + iVar1));
      iVar1 = iVar1 + 0x4c;
    } while (iVar2 != 0);
  }
                    /* end of inlined section */
  iVar3 = 0;
  if (0 < count) {
    iVar2 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar3 = iVar3 + 1;
      Read__15ESubModelShaderR7EStream
                ((ESubModelShader *)((int)(m->m_subModelShaders).field0_0x0.m_p + iVar2),s);
      iVar2 = iVar2 + 0x4c;
    } while (iVar3 < count);
  }
  return s;
}

bool ESubModel::CollidePoint(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, bool testOnly) {
	float tmult;
	bool collided;
	EVec3 vUseEnd;
	EVec3 &v;
	int cSubModelShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	TArray<ESubModelShader> *this;
	int index;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  EVec3 vUseEnd;
  
  iVar9 = 0;
  bVar8 = false;
  fVar11 = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUseEnd.field0_0x0.d[2] = (vEnd->field0_0x0).d[2];
  vUseEnd.field0_0x0._0_8_ = *(undefined8 *)&vEnd->field0_0x0;
                    /* end of inlined section */
  if (0 < (this->m_subModelShaders).field0_0x0.m_size) {
    iVar7 = 0;
    bVar8 = false;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      bVar5 = CollidePoint__15ESubModelShaderR14ECollisionInfoRC5EVec3T2b
                        ((ESubModelShader *)((int)(this->m_subModelShaders).field0_0x0.m_p + iVar7),
                         ciOut,vStart,&vUseEnd,testOnly);
      if ((long)bVar5 == 0) {
        iVar6 = (this->m_subModelShaders).field0_0x0.m_size;
      }
      else {
        fVar10 = ciOut->t;
        bVar8 = true;
        puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        uVar3 = (uint)&ciOut->vPos & 7;
        vUseEnd.field0_0x0._0_8_ =
             (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
             (long)bVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&ciOut->vPos - uVar3) >> uVar3 * 8;
        vUseEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
        puVar1 = (undefined *)((int)&vUseEnd.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 |
                  (ulong)vUseEnd.field0_0x0._0_8_ >> (7 - uVar2) * 8;
        fVar11 = fVar11 * fVar10;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        iVar6 = (this->m_subModelShaders).field0_0x0.m_size;
      }
                    /* end of inlined section */
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0x4c;
    } while (iVar9 < iVar6);
  }
  ciOut->t = ciOut->t * fVar11;
  return bVar8;
}

bool ESubModel::CollideSphere(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius) {
	float tmult;
	bool collided;
	EVec3 vUseEnd;
	EVec3 &v;
	int cSubModelShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	TArray<ESubModelShader> *this;
	int index;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  EVec3 vUseEnd;
  
  iVar9 = 0;
  bVar8 = false;
  fVar11 = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUseEnd.field0_0x0.d[2] = (vEnd->field0_0x0).d[2];
  vUseEnd.field0_0x0._0_8_ = *(undefined8 *)&vEnd->field0_0x0;
                    /* end of inlined section */
  if (0 < (this->m_subModelShaders).field0_0x0.m_size) {
    iVar7 = 0;
    bVar8 = false;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      bVar5 = CollideSphere__15ESubModelShaderR14ECollisionInfoRC5EVec3T2f
                        ((ESubModelShader *)((int)(this->m_subModelShaders).field0_0x0.m_p + iVar7),
                         ciOut,vStart,&vUseEnd,radius);
      if ((long)bVar5 == 0) {
        iVar6 = (this->m_subModelShaders).field0_0x0.m_size;
      }
      else {
        fVar10 = ciOut->t;
        bVar8 = true;
        puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        uVar3 = (uint)&ciOut->vPos & 7;
        vUseEnd.field0_0x0._0_8_ =
             (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
             (long)bVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&ciOut->vPos - uVar3) >> uVar3 * 8;
        vUseEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
        puVar1 = (undefined *)((int)&vUseEnd.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 |
                  (ulong)vUseEnd.field0_0x0._0_8_ >> (7 - uVar2) * 8;
        fVar11 = fVar11 * fVar10;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        iVar6 = (this->m_subModelShaders).field0_0x0.m_size;
      }
                    /* end of inlined section */
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0x4c;
    } while (iVar9 < iVar6);
  }
  ciOut->t = ciOut->t * fVar11;
  return bVar8;
}

int ESubModel::CollideTest(EBound3 &b) {
	int count;
	int cSubModelShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	TArray<ESubModelShader> *this;
	int index;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar2 = 0;
  if (0 < (this->m_subModelShaders).field0_0x0.m_size) {
    iVar3 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar4 = iVar4 + 1;
      iVar1 = CollideTest__15ESubModelShaderRC7EBound3
                        ((ESubModelShader *)((int)(this->m_subModelShaders).field0_0x0.m_p + iVar3),
                         b);
      iVar3 = iVar3 + 0x4c;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar2 = iVar2 + iVar1;
    } while (iVar4 < (this->m_subModelShaders).field0_0x0.m_size);
  }
  return iVar2;
}

void ESubModel::Draw(ERC *prc, u32 renderFlags) {
	int cSubModelShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	TArray<ESubModelShader> *this;
	int index;
	
  int iVar1;
  int iVar2;
  
  if ((renderFlags & 2) == 0) {
    if ((renderFlags & 1) == 0) {
      (*(code *)prc->__vtable->EndCommand)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
      renderFlags = renderFlags | 2;
    }
    else {
      (*(code *)prc->__vtable->NewEntry)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate);
      renderFlags = renderFlags | 2;
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar1 = 0;
  if (0 < (this->m_subModelShaders).field0_0x0.m_size) {
    iVar2 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar1 = iVar1 + 1;
      Draw__15ESubModelShaderP3ERCUi
                ((ESubModelShader *)((int)(this->m_subModelShaders).field0_0x0.m_p + iVar2),prc,
                 renderFlags);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar2 = iVar2 + 0x4c;
    } while (iVar1 < (this->m_subModelShaders).field0_0x0.m_size);
  }
  return;
}

void ESubModel::DrawNormals(ERC *prc) {
	int cSubModelShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	TArray<ESubModelShader> *this;
	int index;
	
  int iVar1;
  int iVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar1 = 0;
  if (0 < (this->m_subModelShaders).field0_0x0.m_size) {
    iVar2 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar1 = iVar1 + 1;
      DrawNormals__15ESubModelShaderP3ERC
                ((ESubModelShader *)((int)(this->m_subModelShaders).field0_0x0.m_p + iVar2),prc);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar2 = iVar2 + 0x4c;
    } while (iVar1 < (this->m_subModelShaders).field0_0x0.m_size);
  }
  return;
}

void ESubModel::DrawWireFrame(ERC *prc) {
	int cSubModelShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	TArray<ESubModelShader> *this;
	int index;
	
  int iVar1;
  int iVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar1 = 0;
  if (0 < (this->m_subModelShaders).field0_0x0.m_size) {
    iVar2 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar1 = iVar1 + 1;
      DrawWireFrame__15ESubModelShaderP3ERC
                ((ESubModelShader *)((int)(this->m_subModelShaders).field0_0x0.m_p + iVar2),prc);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar2 = iVar2 + 0x4c;
    } while (iVar1 < (this->m_subModelShaders).field0_0x0.m_size);
  }
  return;
}
