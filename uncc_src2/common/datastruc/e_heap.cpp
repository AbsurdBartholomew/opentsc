// STATUS: NOT STARTED

#include "e_heap.h"

struct EHeapUsedBlock : EHeapBlock {
};

u32 _heapBreakAlloc = 65535;
u32 _heapValidateStart = 65535;
u32 _heapAllocCounter = 0;

void EHeap::Init(void *p, EHeapInt size) {
	EHeapFreeBlock *pBlock;
	
  uint uVar1;
  EHeapFreeBlock *pEVar2;
  
  pEVar2 = (EHeapFreeBlock *)((int)p + 3U & 0xfffffffc);
  uVar1 = size - ((int)pEVar2 - (int)p) & 0xfffffffc;
  if (uVar1 < 0x10) {
    uVar1 = 0;
    pEVar2 = (EHeapFreeBlock *)0x0;
  }
  else {
    (pEVar2->field0_0x0).pLast = (EHeapBlock *)0x0;
    pEVar2->pFreeNext = (EHeapFreeBlock *)0x0;
    pEVar2->pFreeLast = (EHeapFreeBlock *)0x0;
    (pEVar2->field0_0x0).size = uVar1 << 1 | 1;
  }
  this->m_smallestFailedAlloc = uVar1 + 1;
  this->m_pEnd = (void *)((int)&(pEVar2->field0_0x0).pLast + uVar1);
  this->m_pFreeHead = pEVar2;
  this->m_pHead = &pEVar2->field0_0x0;
  this->m_pFreeTail = pEVar2;
  return;
}

void* EHeap::GetTopAvailableAddress() {
  EHeapFreeBlock *pEVar1;
  
  pEVar1 = this->m_pFreeTail;
  if (pEVar1 != (EHeapFreeBlock *)0x0) {
    return (void *)((int)&(pEVar1->field0_0x0).pLast + ((pEVar1->field0_0x0).size >> 1));
  }
  return (void *)0x0;
}

void* EHeap::Alloc(EHeapInt size, EHeapInt align) {
  void *pvVar1;
  
  pvVar1 = Alloc__5EHeapUiUiPCcUi(this,size,align,(char *)0x0,0);
  return pvVar1;
}

void* EHeap::Alloc(EHeapInt size, EHeapInt align, char *szFile, u32 line) {
	EHeapInt originalSize;
	EHeapInt sizeNeeded;
	EHeapFreeBlock *pFreeBlock;
	EHeapInt address;
	EHeapInt unaligned;
	EHeapInt pad;
	
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  EHeapFreeBlock *pFreeBlock;
  uint uVar5;
  uint uVar6;
  
  if (size < this->m_smallestFailedAlloc) {
    uVar5 = size + 3 & 0xfffffffc;
    if (uVar5 < 8) {
      uVar5 = 8;
    }
    pFreeBlock = this->m_pFreeHead;
    uVar6 = 4;
    if (3 < align) {
      uVar6 = align;
    }
    if (pFreeBlock != (EHeapFreeBlock *)0x0) {
      uVar1 = (pFreeBlock->field0_0x0).size;
      while( true ) {
        if (uVar1 >> 1 < uVar5 + 8) {
          pFreeBlock = pFreeBlock->pFreeNext;
        }
        else {
          uVar4 = (uint)&pFreeBlock->pFreeLast & uVar6 - 1;
          iVar3 = uVar6 - uVar4;
          if (uVar4 == 0) {
            iVar3 = 0;
          }
          if (uVar5 + 8 + iVar3 <= uVar1 >> 1) {
            pvVar2 = DoAlloc__5EHeapPvUiP14EHeapFreeBlockPCcUi
                               (this,(void *)((int)&pFreeBlock->pFreeLast + iVar3),size,pFreeBlock,
                                szFile,line);
            return pvVar2;
          }
          pFreeBlock = pFreeBlock->pFreeNext;
        }
        if (pFreeBlock == (EHeapFreeBlock *)0x0) break;
        uVar1 = (pFreeBlock->field0_0x0).size;
      }
    }
    this->m_smallestFailedAlloc = uVar5;
  }
  return (void *)0x0;
}

void* EHeap::AllocTop(EHeapInt size, EHeapInt align) {
  void *pvVar1;
  
  pvVar1 = AllocTop__5EHeapUiUiPCcUi(this,size,align,(char *)0x0,0);
  return pvVar1;
}

void* EHeap::AllocTop(EHeapInt size, EHeapInt align, char *szFile, u32 line) {
	EHeapInt originalSize;
	EHeapInt sizeNeeded;
	EHeapFreeBlock *pFreeBlock;
	EHeapInt address;
	EHeapInt pad;
	
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  EHeapFreeBlock *pFreeBlock;
  uint uVar6;
  
  if (size < this->m_smallestFailedAlloc) {
    uVar6 = size + 3 & 0xfffffffc;
    if (uVar6 < 8) {
      uVar6 = 8;
    }
    pFreeBlock = this->m_pFreeTail;
    uVar4 = 4;
    if (3 < align) {
      uVar4 = align;
    }
    if (pFreeBlock != (EHeapFreeBlock *)0x0) {
      uVar3 = (pFreeBlock->field0_0x0).size;
      while( true ) {
        uVar3 = uVar3 >> 1;
        if (uVar3 < uVar6 + 8) {
          pFreeBlock = pFreeBlock->pFreeLast;
        }
        else {
          uVar5 = (int)pFreeBlock + (uVar3 - uVar6);
          uVar2 = uVar5 & uVar4 - 1;
          if (uVar6 + 8 + uVar2 <= uVar3) {
            pvVar1 = DoAlloc__5EHeapPvUiP14EHeapFreeBlockPCcUi
                               (this,(void *)(uVar5 - uVar2),size,pFreeBlock,szFile,line);
            return pvVar1;
          }
          pFreeBlock = pFreeBlock->pFreeLast;
        }
        if (pFreeBlock == (EHeapFreeBlock *)0x0) break;
        uVar3 = (pFreeBlock->field0_0x0).size;
      }
    }
    this->m_smallestFailedAlloc = uVar6;
  }
  return (void *)0x0;
}

void* EHeap::AllocAt(void *p, EHeapInt size) {
  void *pvVar1;
  
  pvVar1 = AllocAt__5EHeapPvUiPCcUi(this,p,size,(char *)0x0,0);
  return pvVar1;
}

void* EHeap::AllocAt(void *p, EHeapInt size, char *szFile, u32 line) {
	EHeapInt originalSize;
	EHeapFreeBlock *pFreeBlock;
	EHeapUsedBlock *pNewUsed;
	void *pEndFree;
	void *pEndNeeded;
	
  void *pvVar1;
  uint uVar2;
  EHeapFreeBlock *pFreeBlock;
  
  pFreeBlock = this->m_pFreeHead;
  uVar2 = size + 3 & 0xfffffffc;
  if (uVar2 < 8) {
    uVar2 = 8;
  }
  if ((pFreeBlock->pFreeNext != (EHeapFreeBlock *)0x0) && (pFreeBlock->pFreeNext < p)) {
    for (pFreeBlock = pFreeBlock->pFreeNext;
        (pFreeBlock->pFreeNext != (EHeapFreeBlock *)0x0 && (pFreeBlock->pFreeNext < p));
        pFreeBlock = pFreeBlock->pFreeNext) {
    }
  }
  if (pFreeBlock != (EHeapFreeBlock *)0x0) {
    if ((pFreeBlock <= (EHeapFreeBlock *)((int)p - 8U)) &&
       ((int)p + uVar2 <=
        (int)&(pFreeBlock->field0_0x0).pLast + ((pFreeBlock->field0_0x0).size >> 1))) {
      pvVar1 = DoAlloc__5EHeapPvUiP14EHeapFreeBlockPCcUi(this,p,size,pFreeBlock,szFile,line);
      return pvVar1;
    }
  }
  return (void *)0x0;
}

void* EHeap::DoAlloc(void *p, EHeapInt size, EHeapFreeBlock *pFreeBlock, char *szFile, u32 line) {
	EHeapInt sizeNeeded;
	EHeapUsedBlock *pNewUsed;
	void *pEndFree;
	void *pEndNeeded;
	EHeapFreeBlock *pLastFree;
	EHeapInt remainBefore;
	EHeapInt remainAfter;
	EHeap *this;
	EHeapBlock *pBlock;
	EHeapBlock *this;
	EHeapBlock *pLastBlock;
	EHeap *this;
	EHeapBlock *pBlock;
	EHeapBlock *this;
	EHeapFreeBlock *pNewFree;
	EHeap *this;
	EHeapBlock *pBlock;
	EHeapBlock *this;
	
  EHeapBlock *pEVar1;
  EHeapFreeBlock **ppEVar2;
  EHeapBlock **ppEVar3;
  uint uVar4;
  int iVar5;
  EHeapFreeBlock *pEVar6;
  uint uVar7;
  int iVar8;
  EHeapFreeBlock *pEVar9;
  EHeapBlock *pEVar10;
  uint uVar11;
  
  uVar7 = size + 3 & 0xfffffffc;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  pEVar10 = (EHeapBlock *)((int)p + -8);
  ppEVar3 = (EHeapBlock **)
            ((int)&(pFreeBlock->field0_0x0).pLast + ((pFreeBlock->field0_0x0).size >> 1));
  uVar4 = (int)pEVar10 - (int)pFreeBlock;
  uVar11 = (int)ppEVar3 - ((int)p + uVar7);
  iVar8 = uVar7 + 8;
  if (uVar4 < 0x10) {
    pEVar9 = pFreeBlock->pFreeLast;
    if (pEVar9 == (EHeapFreeBlock *)0x0) {
      this->m_pFreeHead = pFreeBlock->pFreeNext;
    }
    else {
      pEVar9->pFreeNext = pFreeBlock->pFreeNext;
    }
    if (pFreeBlock->pFreeNext == (EHeapFreeBlock *)0x0) {
      this->m_pFreeTail = pFreeBlock->pFreeLast;
    }
    else {
      pFreeBlock->pFreeNext->pFreeLast = pFreeBlock->pFreeLast;
    }
    if (uVar4 == 0) {
      uVar4 = *(uint *)((int)p + -4);
      goto LAB_00326dfc;
    }
                    /* inlined from c:/eor/src2/common/datastruc/e_heap.h */
                    /* end of inlined section */
    pEVar1 = (pFreeBlock->field0_0x0).pLast;
                    /* inlined from c:/eor/src2/common/datastruc/e_heap.h */
    ppEVar3 = (EHeapBlock **)
              ((int)&(pFreeBlock->field0_0x0).pLast + ((pFreeBlock->field0_0x0).size >> 1));
    if (this->m_pEnd <= ppEVar3) {
      ppEVar3 = (EHeapBlock **)0x0;
    }
                    /* end of inlined section */
    pEVar10->pLast = pEVar1;
    if (ppEVar3 != (EHeapBlock **)0x0) {
      *ppEVar3 = pEVar10;
    }
    if (pEVar1 == (EHeapBlock *)0x0) {
      this->m_pHead = pEVar10;
    }
    else {
      pEVar1->size = pEVar1->size & 1 | ((pEVar1->size >> 1) + uVar4) * 2;
    }
  }
  else {
                    /* inlined from c:/eor/src2/common/datastruc/e_heap.h */
    if (this->m_pEnd <= ppEVar3) {
      ppEVar3 = (EHeapBlock **)0x0;
    }
                    /* end of inlined section */
    if (ppEVar3 != (EHeapBlock **)0x0) {
      *ppEVar3 = pEVar10;
    }
    *(EHeapFreeBlock **)((int)p + -8) = pFreeBlock;
    (pFreeBlock->field0_0x0).size = (pFreeBlock->field0_0x0).size & 1 | uVar4 * 2;
    pEVar9 = pFreeBlock;
  }
  uVar4 = *(uint *)((int)p + -4);
LAB_00326dfc:
  iVar5 = iVar8 + uVar11;
  *(uint *)((int)p + -4) = uVar4 & 1 | iVar5 * 2;
  if (0xf < uVar11) {
    pEVar6 = (EHeapFreeBlock *)((int)&pEVar10[1].pLast + uVar7);
    (pEVar6->field0_0x0).pLast = pEVar10;
    (pEVar6->field0_0x0).size = uVar11 * 2 | 1;
                    /* inlined from c:/eor/src2/common/datastruc/e_heap.h */
    ppEVar2 = (EHeapFreeBlock **)((int)&pEVar10->pLast + (*(uint *)((int)p + -4) >> 1));
    if (this->m_pEnd <= ppEVar2) {
      ppEVar2 = (EHeapFreeBlock **)0x0;
    }
                    /* end of inlined section */
    if (ppEVar2 != (EHeapFreeBlock **)0x0) {
      *ppEVar2 = pEVar6;
    }
    iVar5 = iVar8;
    if (pEVar9 == (EHeapFreeBlock *)0x0) {
      pEVar6->pFreeNext = this->m_pFreeHead;
      if (this->m_pFreeHead == (EHeapFreeBlock *)0x0) {
        this->m_pFreeTail = pEVar6;
      }
      else {
        this->m_pFreeHead->pFreeLast = pEVar6;
      }
      pEVar6->pFreeLast = (EHeapFreeBlock *)0x0;
      this->m_pFreeHead = pEVar6;
    }
    else if (pEVar9->pFreeNext == (EHeapFreeBlock *)0x0) {
      pEVar6->pFreeLast = this->m_pFreeTail;
      this->m_pFreeTail->pFreeNext = pEVar6;
      pEVar6->pFreeNext = (EHeapFreeBlock *)0x0;
      this->m_pFreeTail = pEVar6;
    }
    else {
      pEVar9->pFreeNext->pFreeLast = pEVar6;
      pEVar6->pFreeNext = pEVar9->pFreeNext;
      pEVar9->pFreeNext = pEVar6;
      pEVar6->pFreeLast = pEVar9;
    }
  }
  *(int *)((int)p + -4) = iVar5 << 1;
  _heapAllocCounter = _heapAllocCounter + 1;
  return p;
}

void* EHeap::Realloc(void *p, EHeapInt size, EHeapInt align) {
  void *pvVar1;
  
  pvVar1 = Realloc__5EHeapPvUiUiPCcUi(this,p,size,align,(char *)0x0,0);
  return pvVar1;
}

void* EHeap::Realloc(void *p, EHeapInt size, EHeapInt align, char *szFile, u32 line) {
	EHeapUsedBlock *pBlock;
	unsigned char freeLargerBuffer[8];
	EHeapInt prevSize;
	void *pNewAddress;
	void *pOldAddress;
	
  void *pDest;
  void *p_00;
  uint size_00;
  uchar freeLargerBuffer [8];
  
  if (p == (void *)0x0) {
    pDest = Alloc__5EHeapUiUi(this,size,align);
  }
  else {
    memcpy(freeLargerBuffer,p,8);
    size_00 = (*(uint *)((int)p + -4) >> 1) - 8;
    Free__5EHeapPv(this,p);
    pDest = AllocAt__5EHeapPvUiPCcUi(this,p,size,szFile,line);
    if (pDest == (void *)0x0) {
      p_00 = AllocAt__5EHeapPvUiPCcUi(this,p,size_00,(char *)0x0,0);
      if (p_00 == (void *)0x0) {
        return (void *)0x0;
      }
      pDest = Alloc__5EHeapUiUiPCcUi(this,size,align,szFile,line);
      if (pDest != (void *)0x0) {
        if (size_00 <= size) {
          size = size_00;
        }
        memcpy(pDest,p,size);
        Free__5EHeapPv(this,p_00);
      }
    }
    if (pDest != (void *)0x0) {
      p = pDest;
    }
    memcpy(p,freeLargerBuffer,8);
  }
  return pDest;
}

void* EHeap::GrowDown(void *p, EHeapInt growBy) {
	EHeapUsedBlock *pBlock;
	EHeapBlock *pLastBlock;
	EHeapUsedBlock *pNewUsedBlock;
	EHeap *this;
	EHeapBlock *pBlock;
	EHeapBlock *this;
	
  void **ppvVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  void *__src;
  void **ppvVar5;
  void *__dest;
  
  __src = (void *)((int)p + -8);
  pvVar2 = p;
  if (growBy != 0) {
    uVar3 = *(uint *)(*(int *)((int)p + -8) + 4);
    uVar4 = uVar3 & 1;
    uVar3 = uVar3 >> 1;
    if (uVar4 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)0x0;
      if (growBy + 0x10 <= uVar3) {
        __dest = (void *)((int)__src - growBy);
                    /* inlined from c:/eor/src2/common/datastruc/e_heap.h */
                    /* end of inlined section */
        *(uint *)(*(int *)((int)p + -8) + 4) = uVar4 | (uVar3 - growBy) * 2;
                    /* inlined from c:/eor/src2/common/datastruc/e_heap.h */
        ppvVar1 = (void **)((int)__src + (*(uint *)((int)p + -4) >> 1));
        ppvVar5 = (void **)0x0;
                    /* end of inlined section */
        if (ppvVar1 < this->m_pEnd) {
          ppvVar5 = ppvVar1;
        }
        memmove(__dest,__src,8);
        if (ppvVar5 != (void **)0x0) {
          *ppvVar5 = __dest;
        }
        pvVar2 = (void *)((int)__dest + 8);
        *(uint *)((int)__dest + 4) =
             *(uint *)((int)__dest + 4) & 1 | ((*(uint *)((int)__dest + 4) >> 1) + growBy) * 2;
      }
    }
  }
  return pvVar2;
}

EHeapInt EHeap::Free(void *p) {
	EHeapFreeBlock *pFreeBlock;
	EHeapBlock *pNextBlock;
	EHeapBlock *pLastBlock;
	EHeapInt newFreeOpening;
	EHeap *this;
	EHeapBlock *pBlock;
	EHeapBlock *this;
	EHeapFreeBlock *pFreeNextBlock;
	EHeap *this;
	
  uint uVar1;
  EHeapFreeBlock **ppEVar2;
  EHeapFreeBlock *pEVar3;
  uint uVar4;
  uint uVar5;
  EHeapFreeBlock *pEVar6;
  EHeapFreeBlock *pEVar7;
  EHeapFreeBlock *pEVar8;
  
  if (p == (void *)0x0) {
    return 0;
  }
  pEVar6 = (EHeapFreeBlock *)((int)p + -8);
                    /* inlined from c:/eor/src2/common/datastruc/e_heap.h */
                    /* end of inlined section */
  uVar5 = *(uint *)((int)p + -4);
  *(uint *)((int)p + -4) = uVar5 | 1;
                    /* inlined from c:/eor/src2/common/datastruc/e_heap.h */
  uVar5 = uVar5 >> 1;
  pEVar3 = (EHeapFreeBlock *)((int)&(pEVar6->field0_0x0).pLast + uVar5);
                    /* end of inlined section */
  pEVar7 = *(EHeapFreeBlock **)((int)p + -8);
                    /* inlined from c:/eor/src2/common/datastruc/e_heap.h */
                    /* end of inlined section */
  pEVar8 = (EHeapFreeBlock *)0x0;
  if (pEVar3 < (EHeapFreeBlock *)this->m_pEnd) {
    pEVar8 = pEVar3;
  }
  if (pEVar7 == (EHeapFreeBlock *)0x0) {
    *(EHeapFreeBlock **)((int)p + 4) = this->m_pFreeHead;
    if (this->m_pFreeHead == (EHeapFreeBlock *)0x0) {
      this->m_pFreeTail = pEVar6;
    }
    else {
      this->m_pFreeHead->pFreeLast = pEVar6;
    }
LAB_0032724c:
    *(undefined4 *)p = 0;
    this->m_pFreeHead = pEVar6;
    pEVar7 = pEVar6;
    goto LAB_00327254;
  }
  uVar1 = (pEVar7->field0_0x0).size;
  uVar4 = uVar1 & 1;
  if (uVar4 != 0) {
    (pEVar7->field0_0x0).size = uVar4 | ((uVar1 >> 1) + uVar5) * 2;
    if (pEVar8 != (EHeapFreeBlock *)0x0) {
      (pEVar8->field0_0x0).pLast = &pEVar7->field0_0x0;
    }
    goto LAB_00327254;
  }
  if (pEVar8 == (EHeapFreeBlock *)0x0) {
    pEVar7 = this->m_pFreeHead;
LAB_003271c0:
    for (; pEVar7 != (EHeapFreeBlock *)0x0; pEVar7 = pEVar7->pFreeNext) {
      if (pEVar6 < pEVar7) goto LAB_003271dc;
    }
    pEVar7 = this->m_pFreeTail;
  }
  else {
    pEVar7 = pEVar8;
    if (((pEVar8->field0_0x0).size & 1) == 0) {
      pEVar7 = this->m_pFreeHead;
      goto LAB_003271c0;
    }
LAB_003271dc:
    if (pEVar7 != (EHeapFreeBlock *)0x0) {
      if (pEVar7->pFreeLast != (EHeapFreeBlock *)0x0) {
        pEVar7->pFreeLast->pFreeNext = pEVar6;
        *(EHeapFreeBlock **)p = pEVar7->pFreeLast;
        pEVar7->pFreeLast = pEVar6;
        *(EHeapFreeBlock **)((int)p + 4) = pEVar7;
        pEVar7 = pEVar6;
        goto LAB_00327254;
      }
      *(EHeapFreeBlock **)((int)p + 4) = pEVar7;
      pEVar7->pFreeLast = pEVar6;
      goto LAB_0032724c;
    }
    pEVar7 = this->m_pFreeTail;
  }
  *(EHeapFreeBlock **)p = pEVar7;
  if (this->m_pFreeTail == (EHeapFreeBlock *)0x0) {
    this->m_pFreeHead = pEVar6;
  }
  else {
    this->m_pFreeTail->pFreeNext = pEVar6;
  }
  *(undefined4 *)((int)p + 4) = 0;
  this->m_pFreeTail = pEVar6;
  pEVar7 = pEVar6;
LAB_00327254:
  if (pEVar8 == (EHeapFreeBlock *)0x0) {
    uVar5 = (pEVar7->field0_0x0).size;
  }
  else {
    uVar5 = (pEVar8->field0_0x0).size;
    if ((uVar5 & 1) != 0) {
      uVar1 = (pEVar7->field0_0x0).size;
      (pEVar7->field0_0x0).size = uVar1 & 1 | ((uVar1 >> 1) + (uVar5 >> 1)) * 2;
                    /* inlined from c:/eor/src2/common/datastruc/e_heap.h */
      ppEVar2 = (EHeapFreeBlock **)
                ((int)&(pEVar8->field0_0x0).pLast + ((pEVar8->field0_0x0).size >> 1));
      if (this->m_pEnd <= ppEVar2) {
        ppEVar2 = (EHeapFreeBlock **)0x0;
      }
                    /* end of inlined section */
      if (ppEVar2 != (EHeapFreeBlock **)0x0) {
        *ppEVar2 = pEVar7;
      }
      pEVar7->pFreeNext = pEVar8->pFreeNext;
      if (pEVar8->pFreeNext == (EHeapFreeBlock *)0x0) {
        this->m_pFreeTail = pEVar7;
      }
      else {
        pEVar8->pFreeNext->pFreeLast = pEVar7;
      }
    }
    uVar5 = (pEVar7->field0_0x0).size;
  }
  uVar5 = uVar5 >> 1;
  if (this->m_smallestFailedAlloc <= uVar5) {
    this->m_smallestFailedAlloc = uVar5 + 1;
  }
  return uVar5;
}

EHeapInt EHeap::GetBlockSize(void *p) {
  if (p != (void *)0x0) {
    return (*(uint *)((int)p + -4) >> 1) - 8;
  }
  return 0;
}

bool EHeap::IsSlideable(void *p) {
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)((int)p + -8) != 0) {
    bVar1 = (bool)((byte)*(undefined4 *)(*(int *)((int)p + -8) + 4) & 1);
  }
  return bVar1;
}

void EHeap::ValidateBlock(EHeapBlock *pBlock) {
  return;
}

void EHeap::FreeMem(EHeapInt *pTotal, EHeapInt *pLargest) {
	EHeapFreeBlock *pFreeBlock;
	
  EHeapFreeBlock *pEVar1;
  uint uVar2;
  
  if (pTotal != (uint *)0x0) {
    *pTotal = 0;
  }
  if (pLargest != (uint *)0x0) {
    *pLargest = 0;
  }
  pEVar1 = this->m_pFreeHead;
  while (pEVar1 != (EHeapFreeBlock *)0x0) {
    if (pTotal != (uint *)0x0) {
      *pTotal = *pTotal + ((pEVar1->field0_0x0).size >> 1);
    }
    if (pLargest == (uint *)0x0) {
      pEVar1 = pEVar1->pFreeNext;
    }
    else {
      uVar2 = (pEVar1->field0_0x0).size >> 1;
      if (uVar2 < *pLargest) {
        uVar2 = *pLargest;
      }
      *pLargest = uVar2;
      pEVar1 = pEVar1->pFreeNext;
    }
  }
  return;
}

bool EHeap::SetMemset(bool enable) {
  return false;
}

void EHeap::Validate() {
  return;
}

void EHeap::PrintFree() {
  return;
}

void EHeap::PrintUsed(u32 since) {
  return;
}

void EHeap::PrintUsedInOrder(u32 since) {
  return;
}
