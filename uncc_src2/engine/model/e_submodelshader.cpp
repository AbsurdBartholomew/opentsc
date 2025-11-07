// STATUS: NOT STARTED

#include "e_submodelshader.h"

ESubModelShader* ESubModelShader::ESubModelShader() {
	EModelCollisionData *this;
	TArray<unsigned int> *this;
	EArray *this;
	TArray<ESMSStrip> *this;
	EArray *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  __6EArray((EArray *)&this->m_col);
  (this->m_col).cols.field0_0x0.m_elementSize = 4;
  __6EArray(&(this->m_strips).field0_0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  (this->m_strips).field0_0x0.m_elementSize = 0x18;
                    /* end of inlined section */
  this->m_pDL = (EDL *)0x0;
  this->m_pRShader = (ERShader *)0x0;
  this->m_flags = 0;
  return this;
}

void ESubModelShader::~ESubModelShader(int __in_chrg) {
	TArray<ESMSStrip> *this;
	int i;
	TArray<ESMSStrip> *this;
	EArray *this;
	int index;
	TArray<ESMSStrip> *this;
	EArray *this;
	void *pAddress;
	EModelCollisionData *this;
	TArray<unsigned int> *this;
	int i;
	TArray<unsigned int> *this;
	EArray *this;
	TArray<unsigned int> *this;
	int index;
	EArray *this;
	void *pAddress;
	void *pAddress;
	void *pAddress;
	
  int iVar1;
  
  Deallocate__15ESubModelShader(this);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar1 = (this->m_strips).field0_0x0.m_size;
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  Deallocate__6EArray(&(this->m_strips).field0_0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar1 = (this->m_col).cols.field0_0x0.m_size;
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  Deallocate__6EArray((EArray *)&this->m_col);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ESubModelShader::Deallocate() {
	int i;
	int index;
	int i;
	int index;
	int i;
	int index;
	
  EGlobalManagerClient__vtable *pEVar1;
  ERShader *this_00;
  void *pvVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  
  if (this->m_pDL == (EDL *)0x0) {
    this_00 = this->m_pRShader;
  }
  else {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[7].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7));
    this->m_pDL = (EDL *)0x0;
    this_00 = this->m_pRShader;
  }
  if (this_00 != (ERShader *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pRShader = (ERShader *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  }
                    /* end of inlined section */
  iVar4 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  if (0 < (this->m_strips).field0_0x0.m_size) {
    iVar5 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    pvVar2 = (this->m_strips).field0_0x0.m_p;
    while( true ) {
                    /* end of inlined section */
      iVar4 = iVar4 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      ppvVar3 = (void **)((int)pvVar2 + iVar5);
                    /* end of inlined section */
      iVar5 = iVar5 + 0x18;
      _memmanFree__FPv(*ppvVar3);
      _memmanFree__FPv(ppvVar3[1]);
      _memmanFree__FPv(ppvVar3[2]);
      _memmanFree__FPv(ppvVar3[3]);
      _memmanFree__FPv(ppvVar3[4]);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      if ((this->m_strips).field0_0x0.m_size <= iVar4) break;
      pvVar2 = (this->m_strips).field0_0x0.m_p;
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar4 = (this->m_strips).field0_0x0.m_size;
  iVar5 = iVar4;
  if (0 < iVar4) {
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  SetSize__6EArrayii(&(this->m_strips).field0_0x0,0,0);
  if (iVar4 < 0) {
    iVar4 = -iVar4;
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

int ESubModelShader::GetVertCount() {
	int nVerts;
	int i;
	int index;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar2 = (this->m_strips).field0_0x0.m_size;
                    /* end of inlined section */
  iVar4 = 0;
  if (0 < iVar2) {
    piVar3 = (int *)((int)(this->m_strips).field0_0x0.m_p + 0x14);
    do {
                    /* end of inlined section */
      iVar1 = *piVar3;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + 6;
      iVar4 = iVar4 + iVar1;
    } while (iVar2 != 0);
  }
  return iVar4;
}

bool ESubModelShader::IsCollideable() {
	EShader *this;
	
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
  return (bool)((byte)(this->m_pRShader->m_pShader->m_sd).flags & 1);
}

bool ESubModelShader::IsVisible() {
	EShader *this;
	
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
  return ((this->m_pRShader->m_pShader->m_sd).flags & 2) != 0;
}

void ESubModelShader::Read(EStream &s) {
	u32 shaderId;
	u32 nStrips;
	ERC *prc;
	bool done;
	int nTris;
	int nMatrices;
	int nModeChanges;
	bool weighting;
	ESMSStrip *pStrip;
	EStream &s;
	EStream &s;
	EModelCollisionData &mcd;
	TArray<unsigned int> &d;
	EStream &s;
	u32 size;
	EStream &s;
	TArray<unsigned int> *this;
	int size;
	TArray<unsigned int> *this;
	EArray *this;
	int i;
	int index;
	TArray<unsigned int> *this;
	int i;
	int index;
	TArray<unsigned int> *this;
	int i;
	TArray<unsigned int> *this;
	int index;
	EStream &s;
	EStream &s;
	u32 id;
	EStream &s;
	int size;
	int i;
	int index;
	int i;
	int index;
	u8 command;
	EStream &s;
	EStream &s;
	u32 i;
	s16 *p;
	u16 mask;
	EStream &s;
	short int &d;
	EStream &s;
	u32 offset;
	u32 largestWeight;
	u32 i;
	float *p;
	u32 mask;
	EStream &s;
	float &d;
	EStream &s;
	u32 offset;
	u32 largestWeight;
	u32 i;
	s16 *t;
	EStream &s;
	short int &d;
	u32 i;
	float *t;
	EStream &s;
	float &d;
	u32 i;
	u8 *c;
	EStream &s;
	unsigned char &d;
	u32 i;
	s8 *n;
	EStream &s;
	signed char &d;
	u32 i;
	u8 *w;
	EStream &s;
	unsigned char &d;
	u16 sourcePos;
	u8 bufferPos;
	EStream &s;
	EStream &s;
	int nTris;
	int nStrips;
	
  EGlobalManagerClient__vtable *pEVar1;
  undefined *puVar2;
  bool bVar3;
  void **ppvVar4;
  int iVar5;
  int iVar6;
  EStream *s_00;
  ERShader *pEVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  EDL *pEVar11;
  undefined8 uVar12;
  EStream__vtable *pEVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  void **ppvVar14;
  undefined8 unaff_s2;
  void *pvVar15;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  uchar command;
  ushort local_ce;
  short sourcePos;
  uchar bufferPos;
  uint size;
  uint shaderId;
  uint nStrips;
  uint mask;
  bool done;
  int nTris;
  int nMatrices;
  EArray *local_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from c:/eor/src2/engine/model/e_modelcollisiondata.h */
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
                    /* end of inlined section */
  Deallocate__15ESubModelShader(this);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_flags,4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,(uint)&command | 8,4);
  uVar10 = size;
  iVar6 = (this->m_col).cols.field0_0x0.m_size;
  if ((int)size < iVar6) {
    iVar5 = iVar6 - size;
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  SetSize__6EArrayii((EArray *)&this->m_col,size,0);
  local_ac = (EArray *)&this->m_strips;
  if (iVar6 < (int)uVar10) {
    iVar6 = uVar10 - iVar6;
    do {
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = 0;
  if (0 < (int)size) {
    pEVar13 = s->__vtable;
    while( true ) {
      iVar5 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      (*(code *)pEVar13[1].GetPos)
                (&s->m_streamingStructure + *(short *)&pEVar13[1].EStream,
                 (void *)((int)(this->m_col).cols.field0_0x0.m_p + iVar5),4);
      if ((int)size <= iVar6) break;
      pEVar13 = s->__vtable;
    }
  }
  s_00 = __rs__FR7EStreamR5EVec3(s,&(this->m_col).vScale);
  __rs__FR7EStreamR5EVec3(s_00,&(this->m_col).vOffset);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&shaderId,4);
  pEVar7 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,shaderId,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pRShader = pEVar7;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&nStrips,4);
  uVar10 = nStrips;
  iVar6 = local_ac->m_size;
  iVar5 = iVar6 - nStrips;
  if ((int)nStrips < iVar6) {
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  SetSize__6EArrayii(local_ac,nStrips,0);
  iVar5 = uVar10 - iVar6;
  if (iVar6 < (int)uVar10) {
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
                    /* end of inlined section */
  _done = 0;
  nTris = 0;
  iVar6 = 0;
  nMatrices = 0;
  bVar3 = false;
  memset((this->m_strips).field0_0x0.m_p,0,(long)(int)(nStrips * 0x18));
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  uVar12 = (*(code *)pEVar1[6].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 6),1);
  ppvVar14 = (void **)0x0;
  if (nStrips != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    ppvVar14 = (void **)(this->m_strips).field0_0x0.m_p;
  }
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  pEVar13 = s->__vtable;
  do {
    (*(code *)pEVar13[1].GetPos)
              (&s->m_streamingStructure + *(short *)&pEVar13[1].EStream,&command,1);
                    /* end of inlined section */
    ppvVar4 = ppvVar14;
    if (command < 7) {
      iVar5 = (int)uVar12;
      switch(command) {
      case '\0':
                    /* inlined from /eor/src2/common/storage/e_storage.h */
        (*(code *)s->__vtable[1].GetPos)
                  (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,ppvVar14 + 5,4);
                    /* end of inlined section */
        if ((this->m_flags & 0x10) == 0) {
          pvVar15 = (void *)0x0;
          pvVar8 = _memmanAlloc__FUiUi((int)ppvVar14[5] << 4,0x10);
          *ppvVar14 = pvVar8;
          if (ppvVar14[5] != (void *)0x0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
            pEVar13 = s->__vtable;
            while( true ) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
              pvVar8 = (void *)((int)*ppvVar14 + (int)pvVar15 * 0x10);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
              (*(code *)pEVar13[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&pEVar13[1].EStream,pvVar8,4);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                         (int)pvVar8 + 4,4);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                         (int)pvVar8 + 8,4);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&mask,4);
                    /* end of inlined section */
              if (bVar3) {
                mask = mask & 0x8000 | (mask & 3) << 3;
              }
              pvVar15 = (void *)((int)pvVar15 + 1);
              *(uint *)((int)pvVar8 + 0xc) = mask;
              if (ppvVar14[5] <= pvVar15) break;
              pEVar13 = s->__vtable;
            }
          }
LAB_002a6380:
          uVar10 = this->m_flags;
        }
        else {
          pvVar15 = (void *)0x0;
          pvVar8 = _memmanAlloc__FUiUi((int)ppvVar14[5] << 3,0x10);
          *ppvVar14 = pvVar8;
          if (ppvVar14[5] == (void *)0x0) goto LAB_002a6380;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
          pEVar13 = s->__vtable;
          while( true ) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
            pvVar8 = (void *)((int)*ppvVar14 + (int)pvVar15 * 8);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
            (*(code *)pEVar13[1].GetPos)
                      (&s->m_streamingStructure + *(short *)&pEVar13[1].EStream,pvVar8,2);
            (*(code *)s->__vtable[1].GetPos)
                      (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,(int)pvVar8 + 2,
                       2);
            (*(code *)s->__vtable[1].GetPos)
                      (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,(int)pvVar8 + 4,
                       2);
            (*(code *)s->__vtable[1].GetPos)
                      (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&local_ce,2);
                    /* end of inlined section */
            if (bVar3) {
              local_ce = local_ce & 0x8000 | (ushort)((local_ce & 3) << 3);
            }
            pvVar15 = (void *)((int)pvVar15 + 1);
            *(ushort *)((int)pvVar8 + 6) = local_ce;
            if (ppvVar14[5] <= pvVar15) break;
            pEVar13 = s->__vtable;
          }
          uVar10 = this->m_flags;
        }
        if ((uVar10 & 2) == 0) {
LAB_002a648c:
          uVar10 = this->m_flags;
        }
        else {
          if ((uVar10 & 0x10) == 0) {
            pvVar15 = (void *)0x0;
            pvVar8 = _memmanAlloc__FUiUi((int)ppvVar14[5] << 3,0x10);
            ppvVar14[1] = pvVar8;
            if (ppvVar14[5] != (void *)0x0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
              pEVar13 = s->__vtable;
              while( true ) {
                iVar9 = (int)pvVar15 * 8;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                pvVar15 = (void *)((int)pvVar15 + 1);
                pvVar8 = (void *)((int)ppvVar14[1] + iVar9);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                (*(code *)pEVar13[1].GetPos)
                          (&s->m_streamingStructure + *(short *)&pEVar13[1].EStream,pvVar8,4);
                (*(code *)s->__vtable[1].GetPos)
                          (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                           (int)pvVar8 + 4,4);
                    /* end of inlined section */
                if (ppvVar14[5] <= pvVar15) break;
                pEVar13 = s->__vtable;
              }
            }
            goto LAB_002a648c;
          }
          pvVar15 = (void *)0x0;
          pvVar8 = _memmanAlloc__FUiUi((int)ppvVar14[5] << 2,0x10);
          ppvVar14[1] = pvVar8;
          if (ppvVar14[5] == (void *)0x0) goto LAB_002a648c;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
          pEVar13 = s->__vtable;
          while( true ) {
                    /* end of inlined section */
            iVar9 = (int)pvVar15 * 4;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
            pvVar15 = (void *)((int)pvVar15 + 1);
            pvVar8 = (void *)((int)ppvVar14[1] + iVar9);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
            (*(code *)pEVar13[1].GetPos)
                      (&s->m_streamingStructure + *(short *)&pEVar13[1].EStream,pvVar8,2);
            (*(code *)s->__vtable[1].GetPos)
                      (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,(int)pvVar8 + 2,
                       2);
                    /* end of inlined section */
            if (ppvVar14[5] <= pvVar15) break;
            pEVar13 = s->__vtable;
          }
          uVar10 = this->m_flags;
        }
        if ((uVar10 & 4) != 0) {
          pvVar15 = (void *)0x0;
          pvVar8 = _memmanAlloc__FUiUi((int)ppvVar14[5] << 2,0x10);
          ppvVar14[3] = pvVar8;
          if (ppvVar14[5] != (void *)0x0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
            pEVar13 = s->__vtable;
            while( true ) {
              iVar9 = (int)pvVar15 * 4;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
              pvVar15 = (void *)((int)pvVar15 + 1);
              pvVar8 = (void *)((int)ppvVar14[3] + iVar9);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
              (*(code *)pEVar13[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&pEVar13[1].EStream,pvVar8,1);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                         (int)pvVar8 + 1,1);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                         (int)pvVar8 + 2,1);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                         (int)pvVar8 + 3,1);
                    /* end of inlined section */
              if (ppvVar14[5] <= pvVar15) break;
              pEVar13 = s->__vtable;
            }
          }
        }
        if ((this->m_flags & 8) != 0) {
          pvVar15 = (void *)0x0;
          pvVar8 = _memmanAlloc__FUiUi((int)ppvVar14[5] << 2,0x10);
          ppvVar14[2] = pvVar8;
          if (ppvVar14[5] != (void *)0x0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
            pEVar13 = s->__vtable;
            while( true ) {
              iVar9 = (int)pvVar15 * 4;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
              pvVar15 = (void *)((int)pvVar15 + 1);
              pvVar8 = (void *)((int)ppvVar14[2] + iVar9);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
              (*(code *)pEVar13[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&pEVar13[1].EStream,pvVar8,1);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                         (int)pvVar8 + 1,1);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                         (int)pvVar8 + 2,1);
                    /* end of inlined section */
              *(undefined *)((int)pvVar8 + 3) = 0;
              if (ppvVar14[5] <= pvVar15) break;
              pEVar13 = s->__vtable;
            }
          }
        }
        if (bVar3) {
          pvVar15 = (void *)0x0;
          pvVar8 = _memmanAlloc__FUiUi((int)ppvVar14[5] << 2,0x10);
          ppvVar14[4] = pvVar8;
          if (ppvVar14[5] != (void *)0x0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
            pEVar13 = s->__vtable;
            while( true ) {
              iVar9 = (int)pvVar15 * 4;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
              pvVar15 = (void *)((int)pvVar15 + 1);
              pvVar8 = (void *)((int)ppvVar14[4] + iVar9);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
              (*(code *)pEVar13[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&pEVar13[1].EStream,pvVar8,1);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                         (int)pvVar8 + 1,1);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                         (int)pvVar8 + 2,1);
              (*(code *)s->__vtable[1].GetPos)
                        (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                         (int)pvVar8 + 3,1);
                    /* end of inlined section */
              if (ppvVar14[5] <= pvVar15) break;
              pEVar13 = s->__vtable;
            }
          }
        }
        puVar2 = (undefined *)ppvVar14[5];
        ppvVar4 = ppvVar14 + 6;
        if (&pModelMats < puVar2) {
          iVar9 = *(int *)(iVar5 + 0x2c);
          if ((this->m_flags & 0x10) == 0) {
            (**(code **)(iVar9 + 0x1c))
                      (iVar5 + *(short *)(iVar9 + 0x18),puVar2,*ppvVar14,ppvVar14[1],ppvVar14[3],
                       ppvVar14[2],ppvVar14[4]);
          }
          else {
            (**(code **)(iVar9 + 0x24))
                      (iVar5 + *(short *)(iVar9 + 0x20),puVar2,*ppvVar14,ppvVar14[1],ppvVar14[3],
                       ppvVar14[2],ppvVar14[4]);
          }
          nTris = nTris + -2 + (int)ppvVar14[5];
        }
        break;
      case '\x01':
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
        nMatrices = nMatrices + 1;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
        (*(code *)s->__vtable[1].GetPos)
                  (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&sourcePos,2);
        (*(code *)s->__vtable[1].GetPos)
                  (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&bufferPos,1);
                    /* end of inlined section */
        (**(code **)(*(int *)(iVar5 + 0x2c) + 0xc4))
                  (iVar5 + *(short *)(*(int *)(iVar5 + 0x2c) + 0xc0),
                   _7ERModel_m_mMatrixStack + (ushort)sourcePos,bufferPos,1);
        break;
      case '\x02':
        iVar6 = iVar6 + 1;
        (**(code **)(*(int *)(iVar5 + 0x2c) + 0x10c))
                  (iVar5 + *(short *)(*(int *)(iVar5 + 0x2c) + 0x108),0x40);
      case '\x04':
        bVar3 = true;
        break;
      case '\x03':
        iVar6 = iVar6 + 1;
        (**(code **)(*(int *)(iVar5 + 0x2c) + 0x114))
                  (iVar5 + *(short *)(*(int *)(iVar5 + 0x2c) + 0x110),0x40);
      case '\x05':
        bVar3 = false;
        break;
      case '\x06':
        _done = 1;
      }
    }
    ppvVar14 = ppvVar4;
    if (_done != 0) {
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      pEVar11 = (EDL *)(*(code *)pEVar1[6].ManagedShutdown)
                                 ((int)&(_pGfx->field0_0x0).__vtable +
                                  (int)*(short *)&pEVar1[6].ManagedStartup,uVar12);
      this->m_pDL = pEVar11;
                    /* inlined from c:/eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/model/e_modelman.h */
      _modelman.m_nTrisLoaded = _modelman.m_nTrisLoaded + nTris;
      _modelman.m_nStripsLoaded = _modelman.m_nStripsLoaded + nStrips;
                    /* end of inlined section */
      if (((nStrips == 1) && (nMatrices == 0)) && (iVar6 == 0)) {
        this->m_flags = this->m_flags | 1;
      }
      return;
    }
    pEVar13 = s->__vtable;
  } while( true );
}

void ESubModelShader::Draw(ERC *prc, u32 renderFlags) {
	EShader *this;
	int nGeometryPasses;
	int cGeometryPass;
	
  int iVar1;
  ERShader *this_00;
  int geometryPass;
  
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
  if (((this->m_pRShader->m_pShader->m_sd).flags & 2) != 0) {
    if ((renderFlags & 2) == 0) {
      if ((renderFlags & 1) == 0) {
        (*(code *)prc->__vtable->EndCommand)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
      }
      else {
        (*(code *)prc->__vtable->NewEntry)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate);
      }
    }
    if ((renderFlags & 4) == 0) {
      DrawGeometry__15ESubModelShaderP3ERC(this,prc);
    }
    else if ((renderFlags & 8) == 0) {
      iVar1 = GetGeometryPassCount__8ERShader(this->m_pRShader);
      if (0 < iVar1) {
        this_00 = this->m_pRShader;
        geometryPass = 0;
        while( true ) {
          Select__8ERShaderP3ERCi(this_00,prc,geometryPass);
          DrawGeometry__15ESubModelShaderP3ERC(this,prc);
          if (iVar1 <= geometryPass + 1) break;
          this_00 = this->m_pRShader;
          geometryPass = geometryPass + 1;
        }
      }
    }
    else {
      SelectForShadowMask__8ERShaderP3ERC(this->m_pRShader,prc);
      DrawGeometry__15ESubModelShaderP3ERC(this,prc);
    }
  }
  return;
}

void ESubModelShader::DrawGeometry(ERC *prc) {
	EShader *this;
	
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
  if (((this->m_pRShader->m_pShader->m_sd).flags & 2) != 0) {
    (*(code *)prc->__vtable->DisableRasterModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->EnableRasterModes,this->m_pDL);
  }
  return;
}

void ESubModelShader::SetUpVerts(EModelCollisionNode *pNode, int vertPos, EVec3 **pvsOut) {
	void *vertPositions;
	static EVec3 vs[3];
	s16 *s16VertPositions;
	int v;
	int d;
	int value;
	int v;
	int d;
	int value;
	float *fVertPositions;
	int v;
	int v;
	
  bool bVar1;
  short sVar2;
  int iVar3;
  EVec3 *pEVar4;
  short *psVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  EVec3 **ppEVar9;
  int iVar10;
  int iVar11;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* WARNING: Load size is inaccurate */
  iVar7 = *(this->m_strips).field0_0x0.m_p;
  if ((this->m_flags & 0x10) == 0) {
    iVar7 = iVar7 + vertPos * 0x10;
    if ((pNode->nNodes & 1) != 0) {
      ppEVar9 = pvsOut + 2;
      pEVar4 = (EVec3 *)(iVar7 + 0x20);
      iVar7 = 2;
      do {
        *ppEVar9 = pEVar4;
        iVar7 = iVar7 + -1;
        ppEVar9 = ppEVar9 + -1;
        pEVar4 = (EVec3 *)((int)&pEVar4[-2].field0_0x0 + 8);
      } while (-1 < iVar7);
      return;
    }
    pEVar4 = (EVec3 *)(iVar7 + 0x20);
    iVar7 = 2;
    do {
      *pvsOut = pEVar4;
      iVar7 = iVar7 + -1;
      pvsOut = pvsOut + 1;
      pEVar4 = (EVec3 *)((int)&pEVar4[-2].field0_0x0 + 8);
    } while (-1 < iVar7);
    return;
  }
  if (__tmp_0_2164 == 0) {
                    /* end of inlined section */
    iVar3 = 1;
    do {
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + -1;
    } while (bVar1);
    __tmp_0_2164 = 1;
  }
  pvsOut[2] = (EVec3 *)&DAT_004d3ec8;
  pvsOut[1] = (EVec3 *)&DAT_004d3ebc;
  *pvsOut = (EVec3 *)&vs_2163;
  iVar7 = iVar7 + vertPos * 8;
  if ((pNode->nNodes & 1) != 0) {
    iVar3 = 0;
    iVar11 = 0;
    do {
      iVar8 = 0;
      iVar10 = iVar11 + 1;
      pfVar6 = (float *)((int)&vs_2163 + iVar3);
      psVar5 = (short *)(iVar11 * 8 + iVar7);
      do {
                    /* end of inlined section */
        sVar2 = *psVar5;
        iVar8 = iVar8 + 1;
        psVar5 = psVar5 + 1;
        *pfVar6 = (float)(int)sVar2;
        pfVar6 = pfVar6 + 1;
      } while (iVar8 < 3);
      iVar3 = iVar10 * 0xc;
      iVar11 = iVar10;
    } while (iVar10 < 3);
    return;
  }
  iVar11 = 0;
  iVar3 = 0;
  do {
    iVar8 = iVar11 * 8;
    iVar10 = 0;
    iVar11 = iVar11 + 1;
    pfVar6 = (float *)(&vs_2163 + (iVar3 + 2) * 3);
    psVar5 = (short *)(iVar8 + iVar7);
    do {
                    /* end of inlined section */
      sVar2 = *psVar5;
      iVar10 = iVar10 + 1;
      psVar5 = psVar5 + 1;
      *pfVar6 = (float)(int)sVar2;
      pfVar6 = pfVar6 + 1;
    } while (iVar10 < 3);
    iVar3 = -iVar11;
  } while (iVar11 < 3);
  return;
}

bool ESubModelShader::CollidePoint(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, bool testOnly) {
	u64 xymask;
	u32 zmask;
	bool collided;
	float minT;
	int nNodes;
	int vertPos;
	EModelCollisionNode *pNode;
	TArray<unsigned int> *this;
	TArray<unsigned int> *this;
	EArray *this;
	EVec3 *pvs[3];
	ECollisionInfo ci;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 unaff_s0;
  EModelCollisionNode *pNode;
  undefined8 unaff_s1;
  int iVar8;
  undefined8 unaff_s2;
  int vertPos;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar9;
  EVec3 *pvs [3];
  ECollisionInfo ci;
  ulong xymask;
  uint zmask;
  ECollisionInfo *local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  if (((this->m_col).cols.field0_0x0.m_size != 0) &&
     (local_b4 = ciOut,
     bVar4 = BuildLineMask__15ESubModelShaderRC5EVec3T1RUlRUi(this,vStart,vEnd,&xymask,&zmask),
     bVar4)) {
    iVar8 = (this->m_col).cols.field0_0x0.m_size;
                    /* end of inlined section */
    bVar4 = false;
    fVar9 = 1.0;
    vertPos = 0;
                    /* end of inlined section */
    pNode = (EModelCollisionNode *)(this->m_col).cols.field0_0x0.m_p;
    if (iVar8 != 0) {
      uVar2 = pNode->nNodes;
      do {
        if ((uVar2 >> 0xc & 0xf & zmask) == 0) {
LAB_002a6d88:
          uVar6 = uVar2 >> 6 & 0x3f;
          vertPos = vertPos + (uVar2 >> 1 & 0x1f);
          pNode = pNode + uVar6;
          iVar8 = iVar8 - uVar6;
        }
        else {
          uVar7 = __muldi3((ulong)*(byte *)((int)&pNode->nNodes + 2),
                           _10ECollision_m_multMaskTable[*(byte *)((int)&pNode->nNodes + 3)]);
          if ((uVar7 & xymask) == 0) goto LAB_002a6d88;
          if ((uVar2 & 0x3e) == 2) {
            SetUpVerts__15ESubModelShaderP19EModelCollisionNodeiPP5EVec3(this,pNode,vertPos,pvs);
            bVar5 = CollidePointWithPolygon__10ECollisionR14ECollisionInfoRC5EVec3T2PP5EVec3i
                              (&ci,vStart,vEnd,pvs,3);
            if (bVar5) {
              if (testOnly) {
                return true;
              }
              if (ci.t < fVar9) {
                bVar4 = true;
                puVar1 = (undefined *)((int)&(local_b4->vPos).field0_0x0 + 3);
                uVar2 = (uint)puVar1 & 7;
                puVar3 = (ulong *)(puVar1 + -uVar2);
                *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
                          CONCAT44(ci.vPos.field0_0x0.d[0],ci.t) >> (7 - uVar2) * 8;
                uVar2 = (uint)local_b4 & 7;
                *(ulong *)((int)local_b4 - uVar2) =
                     CONCAT44(ci.vPos.field0_0x0.d[0],ci.t) << uVar2 * 8 |
                     *(ulong *)((int)local_b4 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                puVar1 = (undefined *)((int)&(local_b4->vPos).field0_0x0 + 0xb);
                uVar2 = (uint)puVar1 & 7;
                puVar3 = (ulong *)(puVar1 + -uVar2);
                *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
                          (ulong)ci.vPos.field0_0x0._4_8_ >> (7 - uVar2) * 8;
                puVar1 = (undefined *)((int)&(local_b4->vPos).field0_0x0 + 4);
                uVar2 = (uint)puVar1 & 7;
                puVar3 = (ulong *)(puVar1 + -uVar2);
                *puVar3 = ci.vPos.field0_0x0._4_8_ << uVar2 * 8 |
                          *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                puVar1 = (undefined *)((int)&(local_b4->vNormal).field0_0x0 + 7);
                uVar2 = (uint)puVar1 & 7;
                puVar3 = (ulong *)(puVar1 + -uVar2);
                *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
                          (ulong)ci.vNormal.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                uVar2 = (uint)&local_b4->vNormal & 7;
                puVar3 = (ulong *)((int)&local_b4->vNormal - uVar2);
                *puVar3 = ci.vNormal.field0_0x0._0_8_ << uVar2 * 8 |
                          *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                puVar1 = (undefined *)((int)&local_b4->pInst + 3);
                uVar2 = (uint)puVar1 & 7;
                puVar3 = (ulong *)(puVar1 + -uVar2);
                *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)ci._24_8_ >> (7 - uVar2) * 8;
                puVar1 = (undefined *)((int)&(local_b4->vNormal).field0_0x0 + 8);
                uVar2 = (uint)puVar1 & 7;
                puVar3 = (ulong *)(puVar1 + -uVar2);
                *puVar3 = ci._24_8_ << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                fVar9 = ci.t;
              }
            }
            vertPos = vertPos + 1;
          }
          pNode = pNode + 1;
          iVar8 = iVar8 + -1;
        }
        if (iVar8 == 0) {
          return bVar4;
        }
        uVar2 = pNode->nNodes;
      } while( true );
    }
  }
  return false;
}

bool ESubModelShader::BuildLineMask(EVec3 &vStart, EVec3 &vEnd, u64 &xymask, u32 &zmask) {
	EVec3 v[2];
	float zmin;
	float zmax;
	int ival[2][2];
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	int civ;
	
  undefined *puVar1;
  float *pfVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  EVec3 *pEVar8;
  int (*paiVar9) [2];
  int *piVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  EVec3 v [2];
  int ival [2] [2];
  
  pEVar8 = v;
                    /* end of inlined section */
  iVar6 = 0;
  do {
    bVar3 = iVar6 != -1;
    iVar6 = iVar6 + -1;
  } while (bVar3);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar18 = (this->m_col).vOffset.field0_0x0.d[0];
  fVar16 = (this->m_col).vScale.field0_0x0.d[0];
  fVar17 = (vEnd->field0_0x0).d[2];
  fVar13 = fVar16 * ((vStart->field0_0x0).d[0] + fVar18);
  fVar15 = (vEnd->field0_0x0).d[0];
  fVar11 = (this->m_col).vScale.field0_0x0.d[1] *
           ((vStart->field0_0x0).d[1] + (this->m_col).vOffset.field0_0x0.d[1]);
  v[0].field0_0x0._8_4_ =
       (this->m_col).vScale.field0_0x0.d[2] *
       ((vStart->field0_0x0).d[2] + (this->m_col).vOffset.field0_0x0.d[2]);
  ival[0][0] = (int)fVar13;
  fVar14 = (vEnd->field0_0x0).d[1];
  ival[0][1] = (int)fVar11;
  ival[1][0] = (int)v[0].field0_0x0._8_4_;
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&v[0].field0_0x0 + 7);
  uVar12 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar12);
  *puVar4 = *puVar4 & -1L << (uVar12 + 1) * 8 | CONCAT44(fVar11,fVar13) >> (7 - uVar12) * 8;
  v[0].field0_0x0._0_8_ = CONCAT44(fVar11,fVar13);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  ival[0][0] = (int)(fVar16 * (fVar15 + fVar18));
  v[1].field0_0x0._8_4_ =
       (this->m_col).vScale.field0_0x0.d[2] * (fVar17 + (this->m_col).vOffset.field0_0x0.d[2]);
  ival[0][1] = (int)((this->m_col).vScale.field0_0x0.d[1] *
                    (fVar14 + (this->m_col).vOffset.field0_0x0.d[1]));
  ival[1][0] = (int)v[1].field0_0x0._8_4_;
                    /* end of inlined section */
  uVar5 = CONCAT44(ival[0][1],ival[0][0]);
  puVar1 = (undefined *)((int)&v[1].field0_0x0 + 7);
  uVar12 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar12);
  *puVar4 = *puVar4 & -1L << (uVar12 + 1) * 8 | uVar5 >> (7 - uVar12) * 8;
  uVar12 = (uint)(v + 1) & 7;
  puVar4 = (ulong *)((int)(v + 1) - uVar12);
  *puVar4 = uVar5 << uVar12 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
  fVar14 = v[1].field0_0x0._0_4_;
  fVar15 = v[0].field0_0x0._8_4_;
  if (v[0].field0_0x0._8_4_ < v[1].field0_0x0._8_4_) {
    fVar15 = v[1].field0_0x0._8_4_;
    v[1].field0_0x0._8_4_ = v[0].field0_0x0._8_4_;
  }
  if (4.0 < v[1].field0_0x0._8_4_) {
    return false;
  }
  if (fVar15 < 0.0) {
    return false;
  }
  uVar12 = 0;
  if (0.0 <= v[1].field0_0x0._8_4_) {
    uVar12 = (uint)v[1].field0_0x0._8_4_;
  }
  iVar6 = 3;
  if (fVar15 < 4.0) {
    iVar6 = (int)fVar15;
  }
  *zmask = ((1 << (iVar6 + 1U & 0x1f)) + -1 >> (uVar12 & 0x1f)) << (uVar12 & 0x1f);
  if (fVar13 < 0.0) {
                    /* end of inlined section */
    if (v[1].field0_0x0._0_4_ < 0.0) {
      return false;
    }
                    /* end of inlined section */
    v[0].field0_0x0._0_4_ = 0.0;
    fVar15 = (fVar11 * v[1].field0_0x0._0_4_ - fVar13 * v[1].field0_0x0._4_4_) /
             (v[1].field0_0x0._0_4_ - fVar13);
LAB_002a7028:
    v[0].field0_0x0._0_8_ = CONCAT44(fVar15,v[0].field0_0x0._0_4_);
  }
  else {
                    /* end of inlined section */
    if (8.0 < fVar13) {
                    /* end of inlined section */
      if (8.0 < v[1].field0_0x0._0_4_) {
        return false;
      }
                    /* end of inlined section */
      v[0].field0_0x0._0_4_ = 8.0;
      fVar15 = ((fVar11 * v[1].field0_0x0._0_4_ - fVar13 * v[1].field0_0x0._4_4_) +
               (v[1].field0_0x0._4_4_ - fVar11) * 8.0) / (v[1].field0_0x0._0_4_ - fVar13);
      goto LAB_002a7028;
    }
  }
                    /* end of inlined section */
  fVar15 = v[0].field0_0x0._4_4_;
  if (v[1].field0_0x0._0_4_ < 0.0) {
                    /* end of inlined section */
    v[1].field0_0x0._0_4_ = 0.0;
    fVar11 = v[0].field0_0x0._4_4_ * fVar14 - v[0].field0_0x0._0_4_ * v[1].field0_0x0._4_4_;
LAB_002a70ac:
    v[1].field0_0x0._4_4_ = fVar11 / (fVar14 - v[0].field0_0x0._0_4_);
  }
  else {
                    /* end of inlined section */
    if (8.0 < v[1].field0_0x0._0_4_) {
                    /* end of inlined section */
      v[1].field0_0x0._0_4_ = 8.0;
      fVar11 = (v[0].field0_0x0._4_4_ * fVar14 - v[0].field0_0x0._0_4_ * v[1].field0_0x0._4_4_) +
               (v[1].field0_0x0._4_4_ - v[0].field0_0x0._4_4_) * 8.0;
      goto LAB_002a70ac;
    }
  }
                    /* end of inlined section */
  fVar14 = v[1].field0_0x0._4_4_;
  if (v[0].field0_0x0._4_4_ < 0.0) {
                    /* end of inlined section */
    if (v[1].field0_0x0._4_4_ < 0.0) {
      return false;
    }
                    /* end of inlined section */
    fVar11 = v[1].field0_0x0._4_4_ - v[0].field0_0x0._4_4_;
    v[0].field0_0x0._4_4_ = 0.0;
    fVar11 = (v[0].field0_0x0._0_4_ * v[1].field0_0x0._4_4_ - fVar15 * v[1].field0_0x0._0_4_) /
             fVar11;
LAB_002a715c:
    v[0].field0_0x0._0_8_ = CONCAT44(v[0].field0_0x0._4_4_,fVar11);
  }
  else {
                    /* end of inlined section */
    if (8.0 < v[0].field0_0x0._4_4_) {
                    /* end of inlined section */
      if (8.0 < v[1].field0_0x0._4_4_) {
        return false;
      }
                    /* end of inlined section */
      fVar11 = v[1].field0_0x0._4_4_ - v[0].field0_0x0._4_4_;
      v[0].field0_0x0._4_4_ = 8.0;
      fVar11 = ((v[0].field0_0x0._0_4_ * v[1].field0_0x0._4_4_ - fVar15 * v[1].field0_0x0._0_4_) +
               (v[1].field0_0x0._0_4_ - v[0].field0_0x0._0_4_) * 8.0) / fVar11;
      goto LAB_002a715c;
    }
  }
                    /* end of inlined section */
  if (v[1].field0_0x0._4_4_ < 0.0) {
                    /* end of inlined section */
    v[1].field0_0x0._4_4_ = 0.0;
    fVar15 = v[0].field0_0x0._0_4_ * fVar14 - v[0].field0_0x0._4_4_ * v[1].field0_0x0._0_4_;
  }
  else {
                    /* end of inlined section */
    if (v[1].field0_0x0._4_4_ <= 8.0) goto LAB_002a71e8;
                    /* end of inlined section */
    v[1].field0_0x0._4_4_ = 8.0;
    fVar15 = (v[0].field0_0x0._0_4_ * fVar14 - v[0].field0_0x0._4_4_ * v[1].field0_0x0._0_4_) +
             (v[1].field0_0x0._0_4_ - v[0].field0_0x0._0_4_) * 8.0;
  }
  v[1].field0_0x0._0_4_ = fVar15 / (fVar14 - v[0].field0_0x0._4_4_);
LAB_002a71e8:
  piVar10 = ival + 1;
  paiVar9 = ival;
  iVar6 = 1;
  do {
                    /* end of inlined section */
    iVar6 = iVar6 + -1;
    iVar7 = 7;
    if ((int)*(float *)pEVar8 < 8) {
      iVar7 = (int)*(float *)pEVar8;
    }
    (*paiVar9)[0] = iVar7;
    paiVar9 = paiVar9[1];
    pfVar2 = (float *)((int)pEVar8 + 4);
    pEVar8 = (EVec3 *)((int)pEVar8 + 0xc);
    iVar7 = 7;
    if ((int)*pfVar2 < 8) {
      iVar7 = (int)*pfVar2;
    }
    *piVar10 = iVar7;
    piVar10 = piVar10 + 2;
  } while (-1 < iVar6);
  if ((ival[0][0] == ival[1][0]) && (ival[0][1] == ival[1][1])) {
    *xymask = 1L << (long)(ival[0][0] + ival[0][1] * 8);
  }
  else {
    *xymask = _10ECollision_m_lineMaskTable[ival[0][0]][ival[0][1]][ival[1][0]][ival[1][1]];
  }
  return true;
}

bool ESubModelShader::CollideSphere(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius) {
	EBound3 b;
	unsigned int masks[3];
	bool collided;
	float minT;
	int vertPos;
	int nNodes;
	EModelCollisionNode *pNode;
	EVec3 &v;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	float v;
	float v;
	EVec3 *pvs[3];
	ECollisionInfo ci;
	
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  EVec3 *pEVar9;
  ulong in_t1;
  ulong uVar10;
  EModelCollisionNode *pNode;
  int iVar11;
  int vertPos;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  EBound3 b;
  uint masks [3];
  EVec3 *pvs [3];
  ECollisionInfo ci;
  ECollisionInfo *local_c0;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  if ((this->m_col).cols.field0_0x0.m_size != 0) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    masks[2] = 0;
    masks[1] = 0;
    masks[0] = 0;
    pfVar8 = (float *)((uint)&b | 0xc);
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    local_c0 = ciOut;
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
    uVar3 = (uint)&b.vMax & 7;
    puVar4 = (ulong *)((int)&b.vMax - uVar3);
    *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    b.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar7 = (uint)&b.vMax & 7;
    uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             in_t1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar7) * 8 |
             *(ulong *)((int)&b.vMax - uVar7) >> uVar7 * 8;
    puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
    b.vMin.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&vStart->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar7 = (uint)vStart & 7;
    uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar7) * 8 |
             *(ulong *)((int)vStart - uVar7) >> uVar7 * 8;
    fVar15 = (vStart->field0_0x0).d[2];
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
    uVar3 = (uint)&b.vMax & 7;
    puVar4 = (ulong *)((int)&b.vMax - uVar3);
    *puVar4 = uVar10 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    b.vMax.field0_0x0.d[2] = fVar15;
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar7 = (uint)&b.vMax & 7;
    uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar7) * 8 |
             *(ulong *)((int)&b.vMax - uVar7) >> uVar7 * 8;
    puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
    pEVar9 = vEnd;
    do {
      fVar14 = (pEVar9->field0_0x0).d[0];
      fVar12 = pfVar8[-3];
      if (fVar14 <= fVar12) {
        fVar12 = fVar14;
      }
      fVar13 = *pfVar8;
      pfVar8[-3] = fVar12;
      if (fVar13 <= fVar14) {
        fVar13 = fVar14;
      }
      *pfVar8 = fVar13;
      pEVar9 = (EVec3 *)((int)&pEVar9->field0_0x0 + 4);
      pfVar8 = pfVar8 + 1;
    } while ((int)pEVar9 < (int)(vEnd + 1));
    b.vMin.field0_0x0.d[0] = (float)uVar10;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    b.vMin.field0_0x0.d[1] = (float)(uVar10 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    b.vMin.field0_0x0.d[2] = fVar15 - radius;
    b.vMax.field0_0x0.d[0] = b.vMax.field0_0x0.d[0] + radius;
    b.vMax.field0_0x0.d[1] = b.vMax.field0_0x0.d[1] + radius;
    b.vMax.field0_0x0.d[2] = b.vMax.field0_0x0.d[2] + radius;
    b.vMin.field0_0x0._0_8_ =
         CONCAT44(b.vMin.field0_0x0.d[1] - radius,b.vMin.field0_0x0.d[0] - radius);
    masks[0] = (uint)radius;
    masks[1] = (uint)radius;
    masks[2] = (uint)radius;
                    /* end of inlined section */
    bVar5 = BuildBoundMask__15ESubModelShaderRC7EBound3PUi(this,&b,masks);
    if (bVar5) {
      iVar11 = (this->m_col).cols.field0_0x0.m_size;
                    /* end of inlined section */
      bVar5 = false;
      fVar15 = 1.0;
      vertPos = 0;
                    /* end of inlined section */
      pNode = (EModelCollisionNode *)(this->m_col).cols.field0_0x0.m_p;
      if (iVar11 == 0) {
        return false;
      }
      bVar2 = *(byte *)((int)&pNode->nNodes + 2);
      while( true ) {
        uVar3 = pNode->nNodes;
        if ((((bVar2 & masks[0]) == 0) || ((*(byte *)((int)&pNode->nNodes + 3) & masks[1]) == 0)) ||
           ((uVar3 >> 0xc & 0xf & masks[2]) == 0)) {
          uVar7 = uVar3 >> 6 & 0x3f;
          vertPos = vertPos + (uVar3 >> 1 & 0x1f);
          pNode = pNode + uVar7;
          iVar11 = iVar11 - uVar7;
        }
        else {
          if ((uVar3 & 0x3e) == 2) {
            SetUpVerts__15ESubModelShaderP19EModelCollisionNodeiPP5EVec3(this,pNode,vertPos,pvs);
            bVar6 = CollideSphereWithPolygon__10ECollisionR14ECollisionInfoRC5EVec3T2fPP5EVec3i
                              (&ci,vStart,vEnd,radius,pvs,3);
            if ((bVar6) && (ci.t < fVar15)) {
              bVar5 = true;
              puVar1 = (undefined *)((int)&(local_c0->vPos).field0_0x0 + 3);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
                        CONCAT44(ci.vPos.field0_0x0.d[0],ci.t) >> (7 - uVar3) * 8;
              uVar3 = (uint)local_c0 & 7;
              *(ulong *)((int)local_c0 - uVar3) =
                   CONCAT44(ci.vPos.field0_0x0.d[0],ci.t) << uVar3 * 8 |
                   *(ulong *)((int)local_c0 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar1 = (undefined *)((int)&(local_c0->vPos).field0_0x0 + 0xb);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
                        (ulong)ci.vPos.field0_0x0._4_8_ >> (7 - uVar3) * 8;
              puVar1 = (undefined *)((int)&(local_c0->vPos).field0_0x0 + 4);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = ci.vPos.field0_0x0._4_8_ << uVar3 * 8 |
                        *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar1 = (undefined *)((int)&(local_c0->vNormal).field0_0x0 + 7);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
                        (ulong)ci.vNormal.field0_0x0._0_8_ >> (7 - uVar3) * 8;
              uVar3 = (uint)&local_c0->vNormal & 7;
              puVar4 = (ulong *)((int)&local_c0->vNormal - uVar3);
              *puVar4 = ci.vNormal.field0_0x0._0_8_ << uVar3 * 8 |
                        *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar1 = (undefined *)((int)&local_c0->pInst + 3);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)ci._24_8_ >> (7 - uVar3) * 8;
              puVar1 = (undefined *)((int)&(local_c0->vNormal).field0_0x0 + 8);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = ci._24_8_ << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              fVar15 = ci.t;
            }
            vertPos = vertPos + 1;
          }
          pNode = pNode + 1;
          iVar11 = iVar11 + -1;
        }
        if (iVar11 == 0) break;
        bVar2 = *(byte *)((int)&pNode->nNodes + 2);
      }
      return bVar5;
    }
  }
  return false;
}

int ESubModelShader::CollideTest(EBound3 &b) {
	unsigned int masks[3];
	int count;
	int vertPos;
	int nNodes;
	EModelCollisionNode *pNode;
	TArray<unsigned int> *this;
	TArray<unsigned int> *this;
	EArray *this;
	EVec3 *pvs[3];
	EBound3 bPoly;
	EVec3 &vPoint;
	int i;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	EBound3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  EVec3 *pEVar6;
  uint uVar7;
  EBound3 *pEVar8;
  EBound3 *pEVar9;
  EVec3 *pEVar10;
  EVec3 *pEVar11;
  EModelCollisionNode *pNode;
  int iVar12;
  int vertPos;
  ulong in_t2;
  ulong uVar13;
  int iVar14;
  EModelCollisionNode *pEVar15;
  int iVar16;
  float fVar17;
  uint masks [3];
  EVec3 *pvs [3];
  EBound3 bPoly;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  if (((this->m_col).cols.field0_0x0.m_size == 0) ||
     (bVar5 = BuildBoundMask__15ESubModelShaderRC7EBound3PUi(this,b,masks), !bVar5)) {
    iVar14 = 0;
  }
  else {
    iVar16 = (this->m_col).cols.field0_0x0.m_size;
                    /* end of inlined section */
    iVar14 = 0;
    vertPos = 0;
                    /* end of inlined section */
    pNode = (EModelCollisionNode *)(this->m_col).cols.field0_0x0.m_p;
    if (iVar16 != 0) {
      bVar2 = *(byte *)((int)&pNode->nNodes + 2);
      while( true ) {
        uVar3 = pNode->nNodes;
        if ((((bVar2 & masks[0]) == 0) || ((*(byte *)((int)&pNode->nNodes + 3) & masks[1]) == 0)) ||
           ((uVar3 >> 0xc & 0xf & masks[2]) == 0)) {
          uVar7 = uVar3 >> 6 & 0x3f;
          vertPos = vertPos + (uVar3 >> 1 & 0x1f);
          iVar16 = iVar16 - uVar7;
          pEVar15 = pNode + uVar7;
        }
        else {
          iVar16 = iVar16 + -1;
          pEVar15 = pNode + 1;
          if ((uVar3 & 0x3e) == 2) {
            SetUpVerts__15ESubModelShaderP19EModelCollisionNodeiPP5EVec3(this,pNode,vertPos,pvs);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
            pEVar9 = &bPoly;
            pEVar11 = &bPoly.vMax;
            vertPos = vertPos + 1;
            puVar1 = (undefined *)((int)&pvs[0]->field0_0x0 + 7);
            uVar3 = (uint)puVar1 & 7;
            uVar7 = (uint)pvs[0] & 7;
            uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                     in_t2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar7) * 8 |
                     *(ulong *)((int)pvs[0] - uVar7) >> uVar7 * 8;
            bPoly.vMin.field0_0x0.d[2] = (pvs[0]->field0_0x0).d[2];
            puVar1 = (undefined *)((int)&bPoly.vMax.field0_0x0 + 7);
            uVar3 = (uint)puVar1 & 7;
            puVar4 = (ulong *)(puVar1 + -uVar3);
            *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
            uVar3 = (uint)&bPoly.vMax & 7;
            puVar4 = (ulong *)((int)&bPoly.vMax - uVar3);
            *puVar4 = uVar13 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            bPoly.vMax.field0_0x0.d[2] = bPoly.vMin.field0_0x0.d[2];
            puVar1 = (undefined *)((int)&bPoly.vMax.field0_0x0 + 7);
            uVar3 = (uint)puVar1 & 7;
            uVar7 = (uint)&bPoly.vMax & 7;
            bPoly.vMin.field0_0x0._0_8_ =
                 (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                 (long)(int)pvs[0] & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                 -1L << (8 - uVar7) * 8 | *(ulong *)((int)&bPoly.vMax - uVar7) >> uVar7 * 8;
            in_t2 = (ulong)(int)bPoly.vMin.field0_0x0.d[2];
            puVar1 = (undefined *)((int)&bPoly.vMin.field0_0x0 + 7);
            uVar3 = (uint)puVar1 & 7;
            puVar4 = (ulong *)(puVar1 + -uVar3);
            *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
                      (ulong)bPoly.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
            iVar12 = 2;
            pEVar8 = pEVar9;
            pEVar10 = pEVar11;
            pEVar6 = pvs[1];
            do {
              fVar17 = (pEVar8->vMin).field0_0x0.d[0];
              if ((pEVar6->field0_0x0).d[0] <= fVar17) {
                fVar17 = (pEVar6->field0_0x0).d[0];
              }
              (pEVar8->vMin).field0_0x0.d[0] = fVar17;
              fVar17 = (pEVar6->field0_0x0).d[0];
              if ((pEVar6->field0_0x0).d[0] < (pEVar10->field0_0x0).d[0]) {
                fVar17 = (pEVar10->field0_0x0).d[0];
              }
              (pEVar10->field0_0x0).d[0] = fVar17;
              pEVar6 = (EVec3 *)((int)&pEVar6->field0_0x0 + 4);
              pEVar10 = (EVec3 *)((int)&pEVar10->field0_0x0 + 4);
              iVar12 = iVar12 + -1;
              pEVar8 = (EBound3 *)((int)&(pEVar8->vMin).field0_0x0 + 4);
            } while (-1 < iVar12);
            pEVar10 = pvs[2];
            do {
              fVar17 = (pEVar9->vMin).field0_0x0.d[0];
              if ((pEVar10->field0_0x0).d[0] <= fVar17) {
                fVar17 = (pEVar10->field0_0x0).d[0];
              }
              (pEVar9->vMin).field0_0x0.d[0] = fVar17;
              fVar17 = (pEVar10->field0_0x0).d[0];
              if ((pEVar10->field0_0x0).d[0] < (pEVar11->field0_0x0).d[0]) {
                fVar17 = (pEVar11->field0_0x0).d[0];
              }
              (pEVar11->field0_0x0).d[0] = fVar17;
              pEVar9 = (EBound3 *)((int)&(pEVar9->vMin).field0_0x0 + 4);
              pEVar10 = (EVec3 *)((int)&pEVar10->field0_0x0 + 4);
              pEVar11 = (EVec3 *)((int)&pEVar11->field0_0x0 + 4);
            } while ((int)pEVar9 < (int)&bPoly.vMax);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
            bVar5 = false;
            if (((((b->vMin).field0_0x0.d[0] <= bPoly.vMax.field0_0x0.d[0]) &&
                 (bPoly.vMin.field0_0x0.d[0] <= (b->vMax).field0_0x0.d[0])) &&
                (((b->vMin).field0_0x0.d[1] <= bPoly.vMax.field0_0x0.d[1] &&
                 ((bPoly.vMin.field0_0x0.d[1] <= (b->vMax).field0_0x0.d[1] &&
                  ((b->vMin).field0_0x0.d[2] <= bPoly.vMax.field0_0x0.d[2])))))) &&
               (bPoly.vMin.field0_0x0.d[2] <= (b->vMax).field0_0x0.d[2])) {
              bVar5 = true;
            }
                    /* end of inlined section */
            if (bVar5) {
              iVar14 = iVar14 + 1;
            }
          }
        }
        pNode = pEVar15;
        if (iVar16 == 0) break;
        bVar2 = *(byte *)((int)&pNode->nNodes + 2);
      }
    }
  }
  return iVar14;
}

bool ESubModelShader::BuildBoundMask(EBound3 &b, unsigned int *dmasks) {
	EVec3 vMin;
	EVec3 vMax;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec3 vMin;
  EVec3 vMax;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar5 = (this->m_col).vOffset.field0_0x0.d[0];
  fVar4 = (this->m_col).vScale.field0_0x0.d[0];
  fVar7 = fVar4 * ((b->vMin).field0_0x0.d[0] + fVar5);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar4 = fVar4 * ((b->vMax).field0_0x0.d[0] + fVar5);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar6 = (this->m_col).vScale.field0_0x0.d[1] *
          ((b->vMin).field0_0x0.d[1] + (this->m_col).vOffset.field0_0x0.d[1]);
  fVar8 = (this->m_col).vScale.field0_0x0.d[2] *
          ((b->vMin).field0_0x0.d[2] + (this->m_col).vOffset.field0_0x0.d[2]);
  fVar5 = (this->m_col).vScale.field0_0x0.d[2] *
          ((b->vMax).field0_0x0.d[2] + (this->m_col).vOffset.field0_0x0.d[2]);
  fVar3 = (this->m_col).vScale.field0_0x0.d[1] *
          ((b->vMax).field0_0x0.d[1] + (this->m_col).vOffset.field0_0x0.d[1]);
                    /* end of inlined section */
  if (fVar7 <= 8.0) {
                    /* end of inlined section */
    if (fVar4 < 0.0) {
      return false;
    }
                    /* end of inlined section */
    uVar1 = 0;
    if (0.0 <= fVar7) {
                    /* end of inlined section */
      uVar1 = (uint)fVar7;
    }
                    /* end of inlined section */
    iVar2 = 7;
    if (fVar4 < 8.0) {
                    /* end of inlined section */
      iVar2 = (int)fVar4;
    }
    *dmasks = ((1 << (iVar2 + 1U & 0x1f)) + -1 >> (uVar1 & 0x1f)) << (uVar1 & 0x1f);
    if (fVar6 <= 8.0) {
                    /* end of inlined section */
      if (fVar3 < 0.0) {
        return false;
      }
                    /* end of inlined section */
      uVar1 = 0;
      if (0.0 <= fVar6) {
                    /* end of inlined section */
        uVar1 = (uint)fVar6;
      }
                    /* end of inlined section */
      iVar2 = 7;
      if (fVar3 < 8.0) {
                    /* end of inlined section */
        iVar2 = (int)fVar3;
      }
      dmasks[1] = ((1 << (iVar2 + 1U & 0x1f)) + -1 >> (uVar1 & 0x1f)) << (uVar1 & 0x1f);
                    /* end of inlined section */
      if ((fVar8 <= 4.0) && (0.0 <= fVar5)) {
                    /* end of inlined section */
        uVar1 = 0;
        if (0.0 <= fVar8) {
                    /* end of inlined section */
          uVar1 = (uint)fVar8;
        }
                    /* end of inlined section */
        iVar2 = 3;
        if (fVar5 < 4.0) {
                    /* end of inlined section */
          iVar2 = (int)fVar5;
        }
        dmasks[2] = ((1 << (iVar2 + 1U & 0x1f)) + -1 >> (uVar1 & 0x1f)) << (uVar1 & 0x1f);
        return true;
      }
    }
  }
  return false;
}

void ESubModelShader::DrawNormals(ERC *prc) {
	int nNodes;
	int vertPos;
	EModelCollisionNode *pNode;
	EVec3 *pvs[3];
	EVec3 vNormal;
	float shortestEdgeSq;
	EVec3 vCenter;
	int e;
	
  char cVar1;
  EVec3 *pEVar2;
  EVec3 *pEVar3;
  EModelCollisionNode *pEVar4;
  uint uVar5;
  EModelCollisionNode *pNode;
  int iVar6;
  int iVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int vertPos;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar8;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  EVec3 *pvs [3];
  EVec3 vNormal;
  EVec3 vCenter;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar6 = (this->m_col).cols.field0_0x0.m_size;
                    /* end of inlined section */
  if (iVar6 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
    vertPos = 0;
                    /* end of inlined section */
    pNode = (EModelCollisionNode *)(this->m_col).cols.field0_0x0.m_p;
    if (iVar6 != 0) {
      fVar15 = 1.0;
      cVar1 = *(char *)((int)&pNode->nNodes + 3);
      while( true ) {
        iVar8 = iVar6 + -1;
        if (cVar1 == '\0') {
          uVar5 = pNode->nNodes >> 6 & 0x3f;
          vertPos = vertPos + (pNode->nNodes >> 1 & 0x1f);
          iVar6 = iVar6 - uVar5;
          pEVar4 = pNode + uVar5;
        }
        else {
          iVar6 = iVar8;
          pEVar4 = pNode + 1;
          if ((pNode->nNodes & 0x3e) == 2) {
            SetUpVerts__15ESubModelShaderP19EModelCollisionNodeiPP5EVec3(this,pNode,vertPos,pvs);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            fVar13 = (pvs[1]->field0_0x0).d[0] - (pvs[0]->field0_0x0).d[0];
            fVar14 = (pvs[1]->field0_0x0).d[1] - (pvs[0]->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            fVar10 = (pvs[1]->field0_0x0).d[2] - (pvs[0]->field0_0x0).d[2];
            fVar9 = (pvs[2]->field0_0x0).d[2] - (pvs[1]->field0_0x0).d[2];
            fVar12 = (pvs[2]->field0_0x0).d[0] - (pvs[1]->field0_0x0).d[0];
            fVar11 = (pvs[2]->field0_0x0).d[1] - (pvs[1]->field0_0x0).d[1];
            vNormal.field0_0x0.d[1] = fVar10 * fVar12 - fVar13 * fVar9;
            vNormal.field0_0x0.d[0] = fVar14 * fVar9 - fVar10 * fVar11;
            vNormal.field0_0x0.d[2] = fVar13 * fVar11 - fVar14 * fVar12;
            fVar9 = sqrtf(vNormal.field0_0x0.d[0] * vNormal.field0_0x0.d[0] +
                          vNormal.field0_0x0.d[1] * vNormal.field0_0x0.d[1] +
                          vNormal.field0_0x0.d[2] * vNormal.field0_0x0.d[2]);
            if (fVar9 != 0.0) {
              fVar9 = fVar15 / fVar9;
              vNormal.field0_0x0.d[0] = vNormal.field0_0x0.d[0] * fVar9;
              vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * fVar9;
              vNormal.field0_0x0.d[1] = vNormal.field0_0x0.d[1] * fVar9;
                    /* end of inlined section */
            }
            vertPos = vertPos + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            fVar9 = (pvs[1]->field0_0x0).d[0] - (pvs[0]->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            fVar11 = (pvs[1]->field0_0x0).d[1] - (pvs[0]->field0_0x0).d[1];
            fVar10 = (pvs[1]->field0_0x0).d[2] - (pvs[0]->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
            fVar9 = fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
            iVar8 = 1;
            iVar7 = 2;
            while( true ) {
              pEVar2 = pvs[iVar8];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
              pEVar3 = pvs[iVar7 % 3];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              fVar11 = (pEVar3->field0_0x0).d[0] - (pEVar2->field0_0x0).d[0];
              fVar10 = (pEVar3->field0_0x0).d[1] - (pEVar2->field0_0x0).d[1];
              fVar12 = (pEVar3->field0_0x0).d[2] - (pEVar2->field0_0x0).d[2];
              fVar10 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
                    /* end of inlined section */
              if (fVar9 <= fVar10) {
                fVar10 = fVar9;
              }
              if (2 < iVar7) break;
              fVar9 = fVar10;
              iVar8 = iVar7;
              iVar7 = iVar7 + 1;
            }
            fVar9 = sqrtf(fVar10);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
            fVar9 = fVar9 * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_e8 = (pvs[0]->field0_0x0).d[2] + (pvs[1]->field0_0x0).d[2];
            local_f0 = (pvs[0]->field0_0x0).d[0] + (pvs[1]->field0_0x0).d[0];
            local_ec = (pvs[0]->field0_0x0).d[1] + (pvs[1]->field0_0x0).d[1];
            local_c0 = 0;
            local_bc = 0;
            local_f8 = (local_e8 + (pvs[2]->field0_0x0).d[2]) * 0.3333333;
            local_100 = (local_f0 + (pvs[2]->field0_0x0).d[0]) * 0.3333333;
            local_fc = (local_ec + (pvs[2]->field0_0x0).d[1]) * 0.3333333;
            local_d8 = local_f8 + vNormal.field0_0x0.d[2] * fVar9;
            local_e0 = local_100 + vNormal.field0_0x0.d[0] * fVar9;
            local_dc = local_fc + vNormal.field0_0x0.d[1] * fVar9;
            local_d0 = 0;
            local_cc = 0;
            local_c8 = fVar15;
            local_c4 = fVar15;
            local_b8 = fVar15;
                    /* end of inlined section */
            Vector__10EPrimitiveP3ERCG5EVec3T2G5EVec4
                      (prc,(EVec3 *)&local_100,(EVec3 *)&local_e0,(EVec4 *)&local_d0);
          }
        }
        pNode = pEVar4;
        if (iVar6 == 0) break;
        cVar1 = *(char *)((int)&pNode->nNodes + 3);
      }
    }
  }
  return;
}

void ESubModelShader::DrawWireFrame(ERC *prc) {
	int nNodes;
	int vertPos;
	EModelCollisionNode *pNode;
	EVec3 *pvs[3];
	EVec3 vNormal;
	ERC *this;
	int gv;
	EVec3 *puvs;
	signed char normal[3];
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  char cVar1;
  undefined4 *puVar2;
  EModelCollisionNode *pEVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  EModelCollisionNode *pNode;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int vertPos;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  EVec3 *pvs [3];
  EVec3 vNormal;
  char normal [3];
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar7 = (this->m_col).cols.field0_0x0.m_size;
                    /* end of inlined section */
  vertPos = 0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  if ((iVar7 != 0) && (pNode = (EModelCollisionNode *)(this->m_col).cols.field0_0x0.m_p, iVar7 != 0)
     ) {
    cVar1 = *(char *)((int)&pNode->nNodes + 3);
    while( true ) {
      if (cVar1 == '\0') {
        uVar6 = pNode->nNodes >> 6 & 0x3f;
        vertPos = vertPos + (pNode->nNodes >> 1 & 0x1f);
        iVar7 = iVar7 - uVar6;
        pEVar3 = pNode + uVar6;
      }
      else {
        iVar7 = iVar7 + -1;
        pEVar3 = pNode + 1;
        if ((pNode->nNodes & 0x3e) == 2) {
          SetUpVerts__15ESubModelShaderP19EModelCollisionNodeiPP5EVec3(this,pNode,vertPos,pvs);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          _normal = (pvs[1]->field0_0x0).d[0] - (pvs[0]->field0_0x0).d[0];
          fVar14 = (pvs[1]->field0_0x0).d[1] - (pvs[0]->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar11 = (pvs[1]->field0_0x0).d[2] - (pvs[0]->field0_0x0).d[2];
          fVar10 = (pvs[2]->field0_0x0).d[2] - (pvs[1]->field0_0x0).d[2];
          fVar13 = (pvs[2]->field0_0x0).d[0] - (pvs[1]->field0_0x0).d[0];
          fVar12 = (pvs[2]->field0_0x0).d[1] - (pvs[1]->field0_0x0).d[1];
          vNormal.field0_0x0.d[1] = fVar11 * fVar13 - _normal * fVar10;
          vNormal.field0_0x0.d[0] = fVar14 * fVar10 - fVar11 * fVar12;
          vNormal.field0_0x0.d[2] = _normal * fVar12 - fVar14 * fVar13;
          fVar10 = sqrtf(vNormal.field0_0x0.d[0] * vNormal.field0_0x0.d[0] +
                         vNormal.field0_0x0.d[1] * vNormal.field0_0x0.d[1] +
                         vNormal.field0_0x0.d[2] * vNormal.field0_0x0.d[2]);
          if (fVar10 != 0.0) {
            fVar10 = 1.0 / fVar10;
            vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * fVar10;
            vNormal.field0_0x0.d[0] = vNormal.field0_0x0.d[0] * fVar10;
            vNormal.field0_0x0.d[1] = vNormal.field0_0x0.d[1] * fVar10;
          }
                    /* end of inlined section */
          vertPos = vertPos + 1;
                    /* inlined from e_dl.h */
                    /* end of inlined section */
          iVar9 = 0;
                    /* inlined from e_dl.h */
          puVar4 = (undefined4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
                    /* end of inlined section */
                    /* inlined from e_dl.h */
                    /* end of inlined section */
          puVar8 = puVar4;
          do {
            iVar5 = iVar9 << 2;
            puVar8[0xc] = 0xff;
            if (iVar9 == 3) {
              iVar5 = 0;
            }
            puVar8[0xd] = 0;
            puVar8[0xe] = 0;
            puVar8[0xf] = 0x80;
            iVar9 = iVar9 + 1;
            puVar2 = *(undefined4 **)((int)pvs + iVar5);
            *puVar8 = *puVar2;
            puVar8[1] = puVar2[1];
            puVar8[2] = puVar2[2];
            ToS8s__C5EVec3PSc(&vNormal,normal);
            puVar8[4] = (int)normal[0];
            puVar8[5] = (int)normal[1];
            puVar8[8] = 0;
            puVar8[6] = (int)normal[2];
            puVar8[9] = 0;
            puVar8 = puVar8 + 0x14;
          } while (iVar9 < 4);
          (*(code *)prc->__vtable->Scissor)
                    ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ClipRect,puVar4,4);
        }
      }
      pNode = pEVar3;
      if (iVar7 == 0) break;
      cVar1 = *(char *)((int)&pNode->nNodes + 3);
    }
  }
  return;
}
