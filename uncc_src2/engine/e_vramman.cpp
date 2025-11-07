// STATUS: NOT STARTED

#include "e_vramman.h"

TGrowPool<EVramEntry> EVramEntry::pool = {
	/* base class 0 = */ {
		/* .m_pFreeObjHead = */ NULL,
		/* .m_pSegHead = */ NULL,
		/* .m_blockSize = */ 0
	}
};

EVramManager* EVramManager::EVramManager() {
	EEvent *this;
	
  __6EMutex(&this->m_mutex);
                    /* inlined from /eor/src2/common/sync/e_event.h */
  __10ESemaphore(&(this->m_unlockOrDeallocateEvent).m_sema);
  Create__10ESemaphoreii(&(this->m_unlockOrDeallocateEvent).m_sema,1,0);
                    /* end of inlined section */
  this->m_errorThreshold = -1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_orderedList).m_pTail = (EVramEntry *)0x0;
  (this->m_orderedList).m_pHead = (EVramEntry *)0x0;
  (this->m_unlockedList).m_pTail = (EVramEntry *)0x0;
  (this->m_unlockedList).m_pHead = (EVramEntry *)0x0;
  (this->m_freeList).m_pTail = (EVramEntry *)0x0;
  (this->m_freeList).m_pHead = (EVramEntry *)0x0;
  (this->m_lockedList).m_pTail = (EVramEntry *)0x0;
  (this->m_lockedList).m_pHead = (EVramEntry *)0x0;
                    /* end of inlined section */
  this->m_unlockOrDeallocateEventsWanted = 0;
  this->m_nFrame = 0;
  return this;
}

void EVramManager::~EVramManager(int __in_chrg) {
	TLinkedList<EVramEntry,24,28> *this;
	EVramEntry *pNode;
	TLinkedList<EVramEntry,24,28> *this;
	EVramEntry *pNext;
	void *pNode;
	void *p;
	EVramEntry *p;
	void *p;
	TLinkedList<EVramEntry,24,28> *this;
	EEvent *this;
	void *pAddress;
	void *pAddress;
	
  EVramEntry *pEVar1;
  EVramEntry *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_orderedList).m_pHead;
  while (pEVar1 = pEVar2, pEVar1 != (EVramEntry *)0x0) {
    pEVar2 = pEVar1->pOrderedNext;
    if (pEVar1 != (EVramEntry *)0x0) {
      pEVar1->flags = (uint)_10EVramEntry_pool.field0_0x0.m_pFreeObjHead;
      _10EVramEntry_pool.field0_0x0.m_pFreeObjHead = pEVar1;
    }
  }
  (this->m_orderedList).m_pHead = (EVramEntry *)0x0;
  (this->m_orderedList).m_pTail = (EVramEntry *)0x0;
  Destroy__10ESemaphore(&(this->m_unlockOrDeallocateEvent).m_sema);
  ___10ESemaphore(&(this->m_unlockOrDeallocateEvent).m_sema,2);
                    /* end of inlined section */
  ___6EMutex(&this->m_mutex,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EVramManager::Init(u32 startAddress, u32 size) {
	u32 useStart;
	EMutex *this;
	u32 useSize;
	void *p;
	TLinkedList<EVramEntry,24,28> *this;
	TLinkedList<EVramEntry,32,36> *this;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  EVramEntry *pEVar2;
  EVramEntry *pEVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  uVar6 = startAddress + 0x1fff & 0xffffe000;
  uVar5 = uVar6 - startAddress;
  this->m_largestFreeBlock = 0;
  if ((uVar5 < size) && (uVar5 = size - uVar5 & 0xffffe000, uVar5 != 0)) {
    this->m_largestFreeBlock = uVar5;
                    /* inlined from /eor/src2/common/datastruc/e_growpool.h */
    if (_10EVramEntry_pool.field0_0x0.m_pFreeObjHead == (void *)0x0) {
      pEVar3 = (EVramEntry *)AllocNewSeg__9EGrowPool(&_10EVramEntry_pool.field0_0x0);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      pEVar3 = (EVramEntry *)_10EVramEntry_pool.field0_0x0.m_pFreeObjHead;
      _10EVramEntry_pool.field0_0x0.m_pFreeObjHead = *_10EVramEntry_pool.field0_0x0.m_pFreeObjHead;
    }
                    /* end of inlined section */
    pEVar3->address = uVar6;
    pEVar3->size = uVar5;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    this->m_largestFreeBlock = uVar5;
    pEVar3->flags = 3;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar3->pOrderedLast = (this->m_orderedList).m_pTail;
    pEVar2 = (this->m_orderedList).m_pTail;
    if (pEVar2 == (EVramEntry *)0x0) {
      (this->m_orderedList).m_pHead = pEVar3;
    }
    else {
      pEVar2->pOrderedNext = pEVar3;
    }
    pEVar3->pOrderedNext = (EVramEntry *)0x0;
    (this->m_orderedList).m_pTail = pEVar3;
    pEVar3->pMultiLast = (this->m_freeList).m_pTail;
    pEVar2 = (this->m_freeList).m_pTail;
    if (pEVar2 == (EVramEntry *)0x0) {
      (this->m_freeList).m_pHead = pEVar3;
    }
    else {
      pEVar2->pMultiNext = pEVar3;
    }
    pEVar3->pMultiNext = (EVramEntry *)0x0;
    (this->m_freeList).m_pTail = pEVar3;
  }
                    /* end of inlined section */
  iVar4 = DoGetLargestAvailableBlock__12EVramManager(this);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
                    /* end of inlined section */
  this->m_errorThreshold = iVar4;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

EVramEntry* EVramManager::AllocateAndLock(EVramAllocParams &param) {
	EVramEntry *pRet;
	EEvent *this;
	EEvent *this;
	bool failed;
	EMutex *this;
	EMutex *this;
	EMutex *this;
	EMutex *this;
	
  bool bVar1;
  EVramEntry *pEVar2;
  ESyncObject__vtable *pEVar3;
  
                    /* end of inlined section */
  if (*(int *)&param->block == 0) {
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar3 = (this->m_mutex).field0_0x0.__vtable;
    (**(code **)(pEVar3 + 1))
              ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar3->Release,
               0xffffffffffffffff);
                    /* end of inlined section */
    pEVar2 = DoAllocateAndLock__12EVramManagerRC16EVramAllocParams(this,param);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar3 = (this->m_mutex).field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    (*(code *)pEVar3[1].Acquire)
              ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar3[1].ESyncObject);
                    /* end of inlined section */
  }
  else {
                    /* inlined from /eor/src2/common/sync/e_event.h */
    do {
      bVar1 = Acquire__10ESemaphoreUi(&(this->m_unlockOrDeallocateEvent).m_sema,0);
    } while (bVar1);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar3 = (this->m_mutex).field0_0x0.__vtable;
    while( true ) {
      (**(code **)(pEVar3 + 1))
                ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar3->Release,
                 0xffffffffffffffff);
                    /* end of inlined section */
      pEVar2 = DoAllocateAndLock__12EVramManagerRC16EVramAllocParams(this,param);
      if (pEVar2 != (EVramEntry *)0x0) {
        this->m_unlockOrDeallocateEventsWanted = 0;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
        pEVar3 = (this->m_mutex).field0_0x0.__vtable;
      }
      else {
        this->m_unlockOrDeallocateEventsWanted = param->size;
        pEVar3 = (this->m_mutex).field0_0x0.__vtable;
      }
      (*(code *)pEVar3[1].Acquire)
                ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar3[1].ESyncObject);
                    /* end of inlined section */
      if (pEVar2 != (EVramEntry *)0x0) break;
                    /* inlined from /eor/src2/common/sync/e_event.h */
      Acquire__10ESemaphoreUi(&(this->m_unlockOrDeallocateEvent).m_sema,0xffffffff);
                    /* end of inlined section */
      pEVar3 = (this->m_mutex).field0_0x0.__vtable;
    }
  }
  return pEVar2;
}

EVramEntry* EVramManager::DoAllocateAndLock(EVramAllocParams &param) {
	u32 size;
	EVramEntry *pEntry;
	void *pNode;
	EVramEntry *pUnlocked;
	EVramEntry *pNextUnlocked;
	void *pNode;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	EVramEntry *pOldEntry;
	void *p;
	TLinkedList<EVramEntry,24,28> *this;
	EVramEntry *pTargetNode;
	EVramEntry *pNewNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNewNode;
	TLinkedList<EVramEntry,24,28> *this;
	void *pNode;
	EVramEntry *pNode;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNewNode;
	EVramEntry *pNode;
	void *pNode;
	
  EVramEntry *pEVar1;
  EVramEntry *pEVar2;
  uint uVar3;
  EVramEntry *pEVar4;
  EVramEntry *pEVar5;
  uint uVar6;
  
  uVar6 = param->size + 0x1fff & 0xffffe000;
  if (this->m_largestFreeBlock < uVar6) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    pEVar5 = (EVramEntry *)0x0;
    if ((this->m_unlockedList).m_pHead == (EVramEntry *)0x0) {
      return (EVramEntry *)0x0;
    }
  }
  else {
                    /* end of inlined section */
    for (pEVar5 = (this->m_freeList).m_pHead; pEVar5 != (EVramEntry *)0x0;
        pEVar5 = pEVar5->pMultiNext) {
      if (uVar6 <= pEVar5->size) {
        if (pEVar5 != (EVramEntry *)0x0) {
          uVar3 = pEVar5->size;
          goto LAB_002ef02c;
        }
        break;
      }
    }
    this->m_largestFreeBlock = uVar6 - 1;
  }
  if (pEVar5 == (EVramEntry *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar4 = (this->m_unlockedList).m_pHead;
                    /* end of inlined section */
    pEVar2 = pEVar5;
    if (pEVar4 != (EVramEntry *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      pEVar2 = (this->m_unlockedList).m_pHead;
      while( true ) {
        pEVar1 = pEVar4->pMultiNext;
        if (pEVar2 == pEVar4) {
          (this->m_unlockedList).m_pHead = pEVar1;
        }
        else {
          pEVar4->pMultiLast->pMultiNext = pEVar1;
        }
        if ((this->m_unlockedList).m_pTail == pEVar4) {
          (this->m_unlockedList).m_pTail = pEVar4->pMultiLast;
        }
        else {
          pEVar4->pMultiNext->pMultiLast = pEVar4->pMultiLast;
        }
                    /* end of inlined section */
        DiscardEntry__12EVramManagerP10EVramEntry(this,pEVar4);
        pEVar2 = pEVar4;
        if ((uVar6 <= pEVar4->size) || (pEVar2 = pEVar5, pEVar1 == (EVramEntry *)0x0)) break;
        pEVar2 = (this->m_unlockedList).m_pHead;
        pEVar4 = pEVar1;
      }
    }
    pEVar5 = pEVar2;
    if (pEVar5 == (EVramEntry *)0x0) {
      return (EVramEntry *)0x0;
    }
    uVar3 = pEVar5->size;
  }
  else {
    uVar3 = pEVar5->size;
  }
LAB_002ef02c:
  if (uVar6 < uVar3) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_growpool.h */
    if (_10EVramEntry_pool.field0_0x0.m_pFreeObjHead == (void *)0x0) {
      pEVar4 = (EVramEntry *)AllocNewSeg__9EGrowPool(&_10EVramEntry_pool.field0_0x0);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      pEVar4 = (EVramEntry *)_10EVramEntry_pool.field0_0x0.m_pFreeObjHead;
      _10EVramEntry_pool.field0_0x0.m_pFreeObjHead = *_10EVramEntry_pool.field0_0x0.m_pFreeObjHead;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_vramman.h */
                    /* end of inlined section */
    pEVar4->address = pEVar5->address;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    pEVar5->address = pEVar5->address + uVar6;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar5->size = pEVar5->size - uVar6;
    if (pEVar5->pOrderedLast == (EVramEntry *)0x0) {
      pEVar4->pOrderedNext = (this->m_orderedList).m_pHead;
      pEVar5 = (this->m_orderedList).m_pHead;
      if (pEVar5 == (EVramEntry *)0x0) {
        (this->m_orderedList).m_pTail = pEVar4;
      }
      else {
        pEVar5->pOrderedLast = pEVar4;
      }
      pEVar4->pOrderedLast = (EVramEntry *)0x0;
                    /* end of inlined section */
      (this->m_orderedList).m_pHead = pEVar4;
      pEVar5 = pEVar4;
    }
    else {
      pEVar5->pOrderedLast->pOrderedNext = pEVar4;
      pEVar4->pOrderedLast = pEVar5->pOrderedLast;
      pEVar5->pOrderedLast = pEVar4;
      pEVar4->pOrderedNext = pEVar5;
      pEVar5 = pEVar4;
    }
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    if ((this->m_freeList).m_pHead == pEVar5) {
      (this->m_freeList).m_pHead = pEVar5->pMultiNext;
    }
    else {
      pEVar5->pMultiLast->pMultiNext = pEVar5->pMultiNext;
    }
    if ((this->m_freeList).m_pTail == pEVar5) {
      (this->m_freeList).m_pTail = pEVar5->pMultiLast;
    }
    else {
      pEVar5->pMultiNext->pMultiLast = pEVar5->pMultiLast;
    }
  }
                    /* end of inlined section */
  pEVar5->flags = 2;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  pEVar5->size = uVar6;
  pEVar5->nLocks = 1;
  pEVar5->pfnDiscardCallback = param->pfnCallback;
  pEVar5->callbackParam = param->callbackParam;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar5->pMultiLast = (this->m_lockedList).m_pTail;
  pEVar4 = (this->m_lockedList).m_pTail;
  if (pEVar4 == (EVramEntry *)0x0) {
    (this->m_lockedList).m_pHead = pEVar5;
  }
  else {
    pEVar4->pMultiNext = pEVar5;
  }
  pEVar5->pMultiNext = (EVramEntry *)0x0;
                    /* end of inlined section */
                    /* end of inlined section */
  (this->m_lockedList).m_pTail = pEVar5;
  return pEVar5;
}

void EVramManager::MergeFreeNeighbor(EVramEntry *pEntry, EVramEntry *pNeighbor) {
	TLinkedList<EVramEntry,24,28> *this;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	void *p;
	EVramEntry *p;
	void *p;
	
  if ((pNeighbor != (EVramEntry *)0x0) && ((pNeighbor->flags & 1) != 0)) {
    if (pNeighbor->address < pEntry->address) {
      pEntry->address = pNeighbor->address;
    }
                    /* end of inlined section */
    pEntry->size = pEntry->size + pNeighbor->size;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    if ((this->m_orderedList).m_pHead == pNeighbor) {
      (this->m_orderedList).m_pHead = pNeighbor->pOrderedNext;
    }
    else {
      pNeighbor->pOrderedLast->pOrderedNext = pNeighbor->pOrderedNext;
    }
    if ((this->m_orderedList).m_pTail == pNeighbor) {
      (this->m_orderedList).m_pTail = pNeighbor->pOrderedLast;
    }
    else {
      pNeighbor->pOrderedNext->pOrderedLast = pNeighbor->pOrderedLast;
    }
    if ((this->m_freeList).m_pHead == pNeighbor) {
      (this->m_freeList).m_pHead = pNeighbor->pMultiNext;
    }
    else {
      pNeighbor->pMultiLast->pMultiNext = pNeighbor->pMultiNext;
    }
    if ((this->m_freeList).m_pTail == pNeighbor) {
      (this->m_freeList).m_pTail = pNeighbor->pMultiLast;
    }
    else {
      pNeighbor->pMultiNext->pMultiLast = pNeighbor->pMultiLast;
    }
                    /* end of inlined section */
    pNeighbor->flags = 0;
                    /* inlined from /eor/src2/common/datastruc/e_growpool.h */
    if (pNeighbor != (EVramEntry *)0x0) {
      pNeighbor->flags = (uint)_10EVramEntry_pool.field0_0x0.m_pFreeObjHead;
      _10EVramEntry_pool.field0_0x0.m_pFreeObjHead = pNeighbor;
    }
  }
                    /* end of inlined section */
  return;
}

void EVramManager::DiscardEntry(EVramEntry *pEntry) {
	EVramEntry *pNode;
	void *pNode;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNewNode;
	void *pNode;
	EVramEntry *pNode;
	
  EVramEntry *pEVar1;
  
  if ((code *)pEntry->pfnDiscardCallback != (code *)0x0) {
    (*(code *)pEntry->pfnDiscardCallback)(pEntry->callbackParam);
  }
                    /* end of inlined section */
  MergeFreeNeighbor__12EVramManagerP10EVramEntryT1(this,pEntry,pEntry->pOrderedLast);
  MergeFreeNeighbor__12EVramManagerP10EVramEntryT1(this,pEntry,pEntry->pOrderedNext);
  pEntry->flags = pEntry->flags | 1;
  if (this->m_largestFreeBlock < pEntry->size) {
    this->m_largestFreeBlock = pEntry->size;
  }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEntry->pMultiNext = (this->m_freeList).m_pHead;
  pEVar1 = (this->m_freeList).m_pHead;
  if (pEVar1 == (EVramEntry *)0x0) {
    (this->m_freeList).m_pTail = pEntry;
  }
  else {
    pEVar1->pMultiLast = pEntry;
  }
  pEntry->pMultiLast = (EVramEntry *)0x0;
  (this->m_freeList).m_pHead = pEntry;
  return;
}

void EVramManager::Deallocate(EVramEntry *pEntry, bool useMutex) {
	EMutex *this;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  EVramEntry *pEVar3;
  TLinkedList_EVramEntry_32_36_ *pTVar4;
  
  if (pEntry == (EVramEntry *)0x0) {
    return;
  }
  if (useMutex) {
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar1 = (this->m_mutex).field0_0x0.__vtable;
    (**(code **)(pEVar1 + 1))
              ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
                    /* end of inlined section */
    iVar2 = pEntry->nLocks;
  }
  else {
    iVar2 = pEntry->nLocks;
  }
  if (iVar2 == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pTVar4 = &this->m_unlockedList;
    if ((this->m_unlockedList).m_pHead == pEntry) {
      (this->m_unlockedList).m_pHead = pEntry->pMultiNext;
    }
    else {
      pEntry->pMultiLast->pMultiNext = pEntry->pMultiNext;
    }
    if ((this->m_unlockedList).m_pTail != pEntry) {
      pEVar3 = pEntry->pMultiNext;
LAB_002ef3e8:
      pEVar3->pMultiLast = pEntry->pMultiLast;
      goto LAB_002ef3f0;
    }
    pEVar3 = pEntry->pMultiLast;
  }
  else {
    pEntry->nLocks = 0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pTVar4 = &this->m_lockedList;
    if ((this->m_lockedList).m_pHead == pEntry) {
      (this->m_lockedList).m_pHead = pEntry->pMultiNext;
    }
    else {
      pEntry->pMultiLast->pMultiNext = pEntry->pMultiNext;
    }
    if ((this->m_lockedList).m_pTail != pEntry) {
                    /* end of inlined section */
      pEVar3 = pEntry->pMultiNext;
      goto LAB_002ef3e8;
    }
    pEVar3 = pEntry->pMultiLast;
  }
  pTVar4->m_pTail = pEVar3;
LAB_002ef3f0:
                    /* end of inlined section */
  DiscardEntry__12EVramManagerP10EVramEntry(this,pEntry);
  SendEventIfNeeded__12EVramManagerP10EVramEntryb(this,pEntry,useMutex);
  return;
}

void EVramManager::SendEventIfNeeded(EVramEntry *pEntry, bool exitMutex) {
	u32 size;
	bool sendEvent;
	EVramEntry *pLastEntry;
	EVramEntry *pNode;
	EVramEntry *pNode;
	EVramEntry *pNextEntry;
	void *pNode;
	void *pNode;
	EMutex *this;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  EVramEntry *pEVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = true;
  if (this->m_unlockOrDeallocateEventsWanted == 0) {
LAB_002ef504:
    if (exitMutex) {
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
      pEVar1 = (this->m_mutex).field0_0x0.__vtable;
      (*(code *)pEVar1[1].Acquire)
                ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
    }
  }
  else {
    uVar3 = pEntry->size;
    if (uVar3 < this->m_unlockOrDeallocateEventsWanted) {
      pEVar2 = pEntry->pOrderedLast;
      bVar4 = false;
      while( true ) {
                    /* end of inlined section */
        if ((pEVar2 == (EVramEntry *)0x0) || (pEVar2->nLocks != 0)) goto LAB_002ef490;
        uVar3 = uVar3 + pEVar2->size;
        if (this->m_unlockOrDeallocateEventsWanted <= uVar3) break;
        pEVar2 = pEVar2->pOrderedLast;
      }
      bVar4 = true;
LAB_002ef490:
      if (!bVar4) {
                    /* end of inlined section */
        pEVar2 = pEntry->pOrderedNext;
        while( true ) {
          if ((pEVar2 == (EVramEntry *)0x0) || (pEVar2->nLocks != 0)) goto LAB_002ef4d0;
          uVar3 = uVar3 + pEVar2->size;
          if (this->m_unlockOrDeallocateEventsWanted <= uVar3) break;
          pEVar2 = pEVar2->pOrderedNext;
        }
        bVar4 = true;
        goto LAB_002ef4d0;
      }
    }
    else {
LAB_002ef4d0:
      if (!bVar4) goto LAB_002ef504;
    }
    if (exitMutex) {
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
      pEVar1 = (this->m_mutex).field0_0x0.__vtable;
      (*(code *)pEVar1[1].Acquire)
                ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
    }
                    /* inlined from /eor/src2/common/sync/e_event.h */
    Release__10ESemaphore(&(this->m_unlockOrDeallocateEvent).m_sema);
                    /* end of inlined section */
  }
  return;
}

void EVramManager::Lock(EVramEntry *pEntry, bool useMutex) {
	EMutex *this;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNewNode;
	EVramEntry *pNode;
	void *pNode;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  EVramEntry *pEVar3;
  
  if (useMutex) {
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar1 = (this->m_mutex).field0_0x0.__vtable;
    (**(code **)(pEVar1 + 1))
              ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
  }
                    /* end of inlined section */
  iVar2 = pEntry->nLocks;
  if (iVar2 == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    if ((this->m_unlockedList).m_pHead == pEntry) {
      (this->m_unlockedList).m_pHead = pEntry->pMultiNext;
    }
    else {
      pEntry->pMultiLast->pMultiNext = pEntry->pMultiNext;
    }
    if ((this->m_unlockedList).m_pTail == pEntry) {
      (this->m_unlockedList).m_pTail = pEntry->pMultiLast;
    }
    else {
      pEntry->pMultiNext->pMultiLast = pEntry->pMultiLast;
    }
    pEntry->pMultiLast = (this->m_lockedList).m_pTail;
    pEVar3 = (this->m_lockedList).m_pTail;
    if (pEVar3 == (EVramEntry *)0x0) {
      (this->m_lockedList).m_pHead = pEntry;
    }
    else {
      pEVar3->pMultiNext = pEntry;
    }
    pEntry->pMultiNext = (EVramEntry *)0x0;
    (this->m_lockedList).m_pTail = pEntry;
                    /* end of inlined section */
    iVar2 = pEntry->nLocks;
  }
  pEntry->nLocks = iVar2 + 1;
  if (useMutex) {
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar1 = (this->m_mutex).field0_0x0.__vtable;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  }
                    /* end of inlined section */
  return;
}

void EVramManager::Unlock(EVramEntry *pEntry) {
	bool unlocked;
	EMutex *this;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNewNode;
	EVramEntry *pNode;
	void *pNode;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  EVramEntry *pEVar2;
  int iVar3;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  iVar3 = pEntry->nLocks + -1;
  pEntry->nLocks = iVar3;
  if (iVar3 == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    if ((this->m_lockedList).m_pHead == pEntry) {
      (this->m_lockedList).m_pHead = pEntry->pMultiNext;
    }
    else {
      pEntry->pMultiLast->pMultiNext = pEntry->pMultiNext;
    }
    if ((this->m_lockedList).m_pTail == pEntry) {
      (this->m_lockedList).m_pTail = pEntry->pMultiLast;
    }
    else {
      pEntry->pMultiNext->pMultiLast = pEntry->pMultiLast;
    }
    pEntry->pMultiLast = (this->m_unlockedList).m_pTail;
    pEVar2 = (this->m_unlockedList).m_pTail;
    if (pEVar2 == (EVramEntry *)0x0) {
      (this->m_unlockedList).m_pHead = pEntry;
    }
    else {
      pEVar2->pMultiNext = pEntry;
    }
    pEntry->pMultiNext = (EVramEntry *)0x0;
                    /* end of inlined section */
    (this->m_unlockedList).m_pTail = pEntry;
    if (iVar3 == 0) {
      SendEventIfNeeded__12EVramManagerP10EVramEntryb(this,pEntry,true);
      return;
    }
  }
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return;
}

void EVramManager::DiscardAll() {
	EMutex *this;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  DoDiscardAll__12EVramManager(this);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void EVramManager::DoDiscardAll() {
	EVramEntry *pUnlocked;
	EVramEntry *pNextUnlocked;
	void *pNode;
	TLinkedList<EVramEntry,32,36> *this;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	void *pNode;
	EVramEntry *pNode;
	void *pNode;
	EVramEntry *pNode;
	EVramEntry *pNode;
	
  EVramEntry *pEVar1;
  EVramEntry *pEVar2;
  EVramEntry *pEntry;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEntry = (this->m_unlockedList).m_pHead;
                    /* end of inlined section */
  if (pEntry != (EVramEntry *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar2 = (this->m_unlockedList).m_pHead;
    while( true ) {
      pEVar1 = pEntry->pMultiNext;
      if (pEVar2 == pEntry) {
        (this->m_unlockedList).m_pHead = pEVar1;
      }
      else {
        pEntry->pMultiLast->pMultiNext = pEVar1;
      }
      if ((this->m_unlockedList).m_pTail == pEntry) {
        (this->m_unlockedList).m_pTail = pEntry->pMultiLast;
      }
      else {
        pEntry->pMultiNext->pMultiLast = pEntry->pMultiLast;
      }
                    /* end of inlined section */
      DiscardEntry__12EVramManagerP10EVramEntry(this,pEntry);
      if (pEVar1 == (EVramEntry *)0x0) break;
      pEVar2 = (this->m_unlockedList).m_pHead;
      pEntry = pEVar1;
    }
  }
  return;
}

int EVramManager::DoGetLargestAvailableBlock() {
	int largestBlock;
	int thisBlock;
	EVramEntry *pBlock;
	void *pNode;
	
  int iVar1;
  uint uVar2;
  EVramEntry *pEVar3;
  int iVar4;
  int iVar5;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_orderedList).m_pHead;
                    /* end of inlined section */
  iVar5 = 0;
  iVar4 = 0;
  if (pEVar3 != (EVramEntry *)0x0) {
    iVar1 = pEVar3->nLocks;
    do {
      if (iVar1 == 0) {
        uVar2 = pEVar3->size;
LAB_002ef844:
        iVar5 = iVar5 + uVar2;
      }
      else {
        if (((pEVar3->flags ^ 1) & 1) == 0) {
          uVar2 = pEVar3->size;
          goto LAB_002ef844;
        }
        if (iVar4 < iVar5) {
          iVar4 = iVar5;
        }
        iVar5 = 0;
      }
                    /* end of inlined section */
      pEVar3 = pEVar3->pOrderedNext;
      if (pEVar3 == (EVramEntry *)0x0) break;
      iVar1 = pEVar3->nLocks;
    } while( true );
  }
  if (iVar5 <= iVar4) {
    iVar5 = iVar4;
  }
  return iVar5;
}

int EVramManager::GetLargestAvailableBlock() {
	int largestBlock;
	EMutex *this;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  iVar2 = DoGetLargestAvailableBlock__12EVramManager(this);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return iVar2;
}

void EVramManager::ResetAvailableMemoryConstants() {
	EMutex *this;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  DoDiscardAll__12EVramManager(this);
  iVar2 = DoGetLargestAvailableBlock__12EVramManager(this);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
                    /* end of inlined section */
  this->m_errorThreshold = iVar2;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	int blockSize;
	
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___9EGrowPool(&_10EVramEntry_pool.field0_0x0,2);
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_growpool.h */
      __9EGrowPool(&_10EVramEntry_pool.field0_0x0);
                    /* end of inlined section */
      _10EVramEntry_pool.field0_0x0.m_blockSize = 0x28;
    }
  }
  return;
}

void global constructors keyed to EVramEntry::pool() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to EVramEntry::pool() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
