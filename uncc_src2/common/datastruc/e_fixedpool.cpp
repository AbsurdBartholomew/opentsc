// STATUS: NOT STARTED

#include "e_fixedpool.h"

EFixedPool* EFixedPool::EFixedPool() {
  this->m_pFreeObjHead = (void *)0x0;
  this->m_pData = (void *)0x0;
  return this;
}

void EFixedPool::~EFixedPool(int __in_chrg) {
	void *pAddress;
	
  _memmanFree__FPv(this->m_pData);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EFixedPool::Init(int blockSize, int blockCount) {
  void *pUserBuffer;
  
  pUserBuffer = _memmanAlloc__FUiUi(blockSize * blockCount,0x10);
  this->m_pData = pUserBuffer;
  Init__10EFixedPooliiPv(this,blockSize,blockCount,pUserBuffer);
  return;
}

void EFixedPool::Init(int blockSize, int blockCount, void *pUserBuffer) {
	int i;
	
  int iVar1;
  void **ppvVar2;
  
  iVar1 = blockCount + -1;
  if ((pUserBuffer != (void *)0x0) && (-1 < iVar1)) {
    ppvVar2 = (void **)(iVar1 * blockSize + (int)pUserBuffer);
    do {
      iVar1 = iVar1 + -1;
      *ppvVar2 = this->m_pFreeObjHead;
      this->m_pFreeObjHead = ppvVar2;
      ppvVar2 = (void **)((int)ppvVar2 - blockSize);
    } while (-1 < iVar1);
  }
  return;
}
