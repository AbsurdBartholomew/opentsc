// STATUS: NOT STARTED

#include "e_growpool.h"

EGrowPool* EGrowPool::EGrowPool() {
  Init__9EGrowPool(this);
  return this;
}

EGrowPool* EGrowPool::EGrowPool(int blockSize) {
	EGrowPool *this;
	
  int iVar1;
  
  Init__9EGrowPool(this);
                    /* inlined from c:/eor/src2/common/datastruc/e_growpool.h */
  iVar1 = 4;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_growpool.h */
  if (3 < blockSize) {
    iVar1 = blockSize;
  }
  this->m_blockSize = iVar1;
  return this;
}

void EGrowPool::~EGrowPool(int __in_chrg) {
	void *pAddress;
	
  Reset__9EGrowPool(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EGrowPool::Init() {
  this->m_blockSize = 0;
  this->m_pFreeObjHead = (void *)0x0;
  this->m_pSegHead = (void *)0x0;
  return;
}

void* EGrowPool::AllocNewSeg() {
	void *p;
	void *pSeg;
	int i;
	void *pNewT;
	
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void **ppvVar4;
  int iVar5;
  void *pvVar6;
  
  if (this->m_blockSize < 0x7fd) {
    ppvVar3 = (void **)_memmanAlloc__FUiUi(0x1000,0x10);
    if (ppvVar3 == (void **)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      iVar5 = 1;
      *ppvVar3 = this->m_pSegHead;
      this->m_pSegHead = ppvVar3;
      iVar2 = this->m_blockSize;
      iVar1 = 0xff8 / iVar2;
      if (iVar2 == 0) {
        trap(7);
      }
      pvVar6 = (void *)((int)ppvVar3 - (iVar1 * iVar2 + -0x1000));
      if (1 < iVar1) {
        do {
          iVar2 = iVar5 * this->m_blockSize;
          iVar5 = iVar5 + 1;
          ppvVar4 = (void **)((int)ppvVar3 - (iVar2 + -0x1000));
          *ppvVar4 = this->m_pFreeObjHead;
          this->m_pFreeObjHead = ppvVar4;
        } while (iVar5 < iVar1);
      }
    }
  }
  else {
    pvVar6 = _memmanAlloc__FUiUi(this->m_blockSize,0x10);
  }
  return pvVar6;
}

void EGrowPool::Reset() {
	void *pSeg;
	void *pNextSeg;
	
  undefined4 *puVar1;
  undefined4 *pAddress;
  
  if (this->m_blockSize < 0x7fd) {
    this->m_pFreeObjHead = (void *)0x0;
    pAddress = (undefined4 *)this->m_pSegHead;
    while (pAddress != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*pAddress;
      _memmanFree__FPv(pAddress);
      pAddress = puVar1;
    }
    this->m_pSegHead = (void *)0x0;
  }
  else {
    FreeUnusedSegments__9EGrowPool(this);
  }
  return;
}

void EGrowPool::FreeUnusedSegments() {
	void *p;
	void *pHighestUnalignedSeg;
	void *pSeg;
	void *pLowestAlignedAddress;
	void *pUnalignedSegHead;
	void *pUnalignedSegTail;
	void *pAlignedSegHead;
	void *pObj;
	void *pAllSegsHead;
	void *NextpSeg;
	void *pNext;
	void *pNextSeg;
	int nFree;
	void *pNextObj;
	
  undefined4 *puVar1;
  void **ppvVar2;
  int iVar3;
  void **ppvVar4;
  void **ppvVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  void **ppvVar9;
  void **ppvVar10;
  void **pAddress;
  
  if (this->m_blockSize != 0) {
    if (this->m_blockSize < 0x7fd) {
      puVar8 = (undefined4 *)0x0;
      for (puVar1 = (undefined4 *)this->m_pSegHead; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        if ((((uint)puVar1 & 0xfff) != 0) && (puVar8 < puVar1)) {
          puVar8 = puVar1;
        }
        puVar1[1] = 0;
      }
      ppvVar9 = (void **)this->m_pSegHead;
      ppvVar4 = (void **)0x0;
      pAddress = (void **)0x0;
      ppvVar5 = (void **)0x0;
      while (ppvVar2 = ppvVar9, ppvVar2 != (void **)0x0) {
        ppvVar9 = (void **)*ppvVar2;
        if (ppvVar2 < puVar8 + 0x400) {
          *ppvVar2 = ppvVar4;
          ppvVar4 = ppvVar2;
          if (ppvVar5 == (void **)0x0) {
            ppvVar5 = ppvVar2;
          }
        }
        else {
          *ppvVar2 = pAddress;
          pAddress = ppvVar2;
        }
      }
      ppvVar9 = (void **)this->m_pFreeObjHead;
      if (ppvVar9 != (void **)0x0) {
        ppvVar2 = (void **)*ppvVar9;
        do {
          ppvVar10 = (void **)((uint)ppvVar9 & 0xfffff000);
          if ((ppvVar9 < puVar8 + 0x400) && (ppvVar10 = ppvVar4, ppvVar4 != (void **)0x0)) {
            if (ppvVar9 < ppvVar4) {
              ppvVar10 = (void **)*ppvVar4;
LAB_00327fb8:
              while (ppvVar10 != (void **)0x0) {
                if (ppvVar9 < ppvVar10) {
                  ppvVar10 = (void **)*ppvVar10;
                }
                else {
                  if (ppvVar9 < ppvVar10 + 0x400) break;
                  ppvVar10 = (void **)*ppvVar10;
                }
              }
              goto LAB_00327fe4;
            }
            if (ppvVar4 + 0x400 <= ppvVar9) {
              ppvVar10 = (void **)*ppvVar4;
              goto LAB_00327fb8;
            }
            pvVar6 = ppvVar4[1];
          }
          else {
LAB_00327fe4:
            pvVar6 = ppvVar10[1];
          }
          *ppvVar9 = pvVar6;
          ppvVar10[1] = ppvVar9;
          if (ppvVar2 == (void **)0x0) break;
          ppvVar9 = ppvVar2;
          ppvVar2 = (void **)*ppvVar2;
        } while( true );
      }
      if (ppvVar5 != (void **)0x0) {
        *ppvVar5 = pAddress;
        pAddress = ppvVar4;
      }
      iVar3 = this->m_blockSize;
      this->m_pFreeObjHead = (void *)0x0;
      this->m_pSegHead = (void *)0x0;
      if (iVar3 == 0) {
        trap(7);
      }
      if (pAddress != (void **)0x0) {
        ppvVar9 = (void **)pAddress[1];
        while( true ) {
          iVar7 = 0;
          ppvVar4 = (void **)*pAddress;
          for (ppvVar5 = ppvVar9; ppvVar5 != (void **)0x0; ppvVar5 = (void **)*ppvVar5) {
            iVar7 = iVar7 + 1;
          }
          if (iVar7 == 0xff8 / iVar3) {
            _memmanFree__FPv(pAddress);
          }
          else {
            while (ppvVar9 != (void **)0x0) {
              ppvVar5 = (void **)*ppvVar9;
              *ppvVar9 = this->m_pFreeObjHead;
              this->m_pFreeObjHead = ppvVar9;
              ppvVar9 = ppvVar5;
            }
            *pAddress = this->m_pSegHead;
            this->m_pSegHead = pAddress;
          }
          if (ppvVar4 == (void **)0x0) break;
          ppvVar9 = (void **)ppvVar4[1];
          pAddress = ppvVar4;
        }
      }
    }
    else if (this->m_pFreeObjHead != (void *)0x0) {
      ppvVar9 = (void **)this->m_pFreeObjHead;
      while( true ) {
        if (ppvVar9 == (void **)0x0) {
          pvVar6 = this->m_pFreeObjHead;
        }
        else {
          this->m_pFreeObjHead = *ppvVar9;
          _memmanFree__FPv(ppvVar9);
          pvVar6 = this->m_pFreeObjHead;
        }
        if (pvVar6 == (void *)0x0) break;
        ppvVar9 = (void **)this->m_pFreeObjHead;
      }
    }
  }
  return;
}
