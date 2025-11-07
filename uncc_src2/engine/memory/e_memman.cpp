// STATUS: NOT STARTED

#include "e_memman.h"

EMemoryManager _memman;
bool EMemoryManager::m_constructed = false;

EMMSubAllocator* EMMSubAllocator::EMMSubAllocator() {
  return this;
}

void EMMSubAllocator::~EMMSubAllocator(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

EMemoryManager* EMemoryManager::EMemoryManager() {
	EHeap *this;
	
  TLinkedList_EMMSubAllocator_28_32_ *pTVar1;
  int iVar2;
  
  __6EMutex(&this->m_heapMutex);
  __6EMutex(&this->m_segPoolMutex);
  pTVar1 = this->m_subAllocPowerLists;
  iVar2 = 0xb;
  do {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pTVar1->m_pTail = (EMMSubAllocator *)0x0;
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pTVar1->m_pHead = (EMMSubAllocator *)0x0;
                    /* end of inlined section */
    pTVar1 = pTVar1 + 1;
  } while (iVar2 != -1);
  __14EMemoryManager_m_constructed = 1;
  return this;
}

void EMemoryManager::Init(void *pAddress, int length, int nInitialSegments) {
	void *pSegmentEnd;
	EMemoryManager *this;
	EMemoryManager *this;
	int i;
	EMemoryManager *this;
	EMemoryManager *this;
	
  void *pvVar1;
  uint size;
  TLinkedList_EMMSubAllocator_28_32_ *pTVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
  if (__14EMemoryManager_m_constructed != 0) {
    Acquire__6EMutexUi(&this->m_heapMutex,0xffffffff);
    if (__14EMemoryManager_m_constructed != 0) {
      Acquire__6EMutexUi(&this->m_segPoolMutex,0xffffffff);
    }
  }
                    /* end of inlined section */
  Init__5EHeapPvUi(&this->m_heap,pAddress,length);
  pvVar1 = GetTopAvailableAddress__5EHeap(&this->m_heap);
  this->m_pTopOfHeap = pvVar1;
  size = (int)pvVar1 - (int)(void *)((uint)pvVar1 & 0xfffff000);
  this->m_segmentPad = size;
  this->m_segmentBlockSize = size;
  pvVar1 = AllocAt__5EHeapPvUi(&this->m_heap,(void *)((uint)pvVar1 & 0xfffff000),size);
  this->m_nSegments = 0;
  this->m_pFreeSegmentHead = (void *)0x0;
  this->m_pSegmentBlock = pvVar1;
  AllocSegmentBlock__14EMemoryManagerUi(this,nInitialSegments);
  pTVar2 = this->m_subAllocPowerLists;
  iVar3 = 0xb;
  do {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pTVar2->m_pTail = (EMMSubAllocator *)0x0;
                    /* end of inlined section */
    iVar3 = iVar3 + -1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pTVar2->m_pHead = (EMMSubAllocator *)0x0;
                    /* end of inlined section */
    pTVar2 = pTVar2 + 1;
  } while (-1 < iVar3);
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
  if ((__14EMemoryManager_m_constructed != 0) &&
     (Release__6EMutex(&this->m_segPoolMutex), __14EMemoryManager_m_constructed != 0)) {
    Release__6EMutex(&this->m_heapMutex);
  }
  return;
}

bool EMemoryManager::AllocSegmentBlock(u32 nSegments) {
	bool prevMemSet;
	u32 segmentBlockSize;
	void *pSegmentBlock;
	bool success;
	void *pNewSeg;
	u32 cs;
	
  bool bVar1;
  bool enable;
  void **ppvVar2;
  void **ppvVar3;
  uint uVar4;
  
                    /* end of inlined section */
  if (nSegments == this->m_nSegments) {
    bVar1 = true;
  }
  else {
    enable = SetMemset__5EHeapb(&this->m_heap,false);
    Free__5EHeapPv(&this->m_heap,this->m_pSegmentBlock);
    uVar4 = this->m_segmentPad + nSegments * 0x1000;
    ppvVar2 = (void **)AllocAt__5EHeapPvUi(&this->m_heap,(void *)((int)this->m_pTopOfHeap - uVar4),
                                           uVar4);
    if (ppvVar2 == (void **)0x0) {
      bVar1 = false;
      uVar4 = this->m_segmentPad + this->m_nSegments * 0x1000;
      AllocAt__5EHeapPvUi(&this->m_heap,(void *)((int)this->m_pTopOfHeap - uVar4),uVar4);
    }
    else {
      ppvVar3 = ppvVar2;
      for (uVar4 = this->m_nSegments; uVar4 < nSegments; uVar4 = uVar4 + 1) {
        *ppvVar3 = this->m_pFreeSegmentHead;
        this->m_pFreeSegmentHead = ppvVar3;
        ppvVar3 = ppvVar3 + 0x400;
      }
      this->m_nSegments = nSegments;
      bVar1 = true;
      this->m_pSegmentBlock = ppvVar2;
    }
    SetMemset__5EHeapb(&this->m_heap,enable);
  }
  return bVar1;
}

bool EMemoryManager::GrowSegmentBlock() {
	void *pNewSegmentBlock;
	
  bool bVar1;
  void **ppvVar2;
  
  if (this->m_pSegmentBlock == (void *)0x0) {
    bVar1 = AllocSegmentBlock__14EMemoryManagerUi(this,1);
  }
  else {
    ppvVar2 = (void **)GrowDown__5EHeapPvUi(&this->m_heap,this->m_pSegmentBlock,0x1000);
    bVar1 = true;
    if (ppvVar2 == (void **)0x0) {
      bVar1 = false;
    }
    else {
      *ppvVar2 = this->m_pFreeSegmentHead;
      this->m_pSegmentBlock = ppvVar2;
      this->m_pFreeSegmentHead = ppvVar2;
      this->m_nSegments = this->m_nSegments + 1;
    }
  }
  return bVar1;
}

void* EMemoryManager::AllocSegment() {
	void *p;
	
  EMutex *this_00;
  void **ppvVar1;
  
  if (__14EMemoryManager_m_constructed == 0) {
    if (this->m_pFreeSegmentHead == (void *)0x0) {
      GrowSegmentBlock__14EMemoryManager(this);
      if (this->m_pFreeSegmentHead == (void *)0x0) {
        return (void *)0x0;
      }
      ppvVar1 = (void **)this->m_pFreeSegmentHead;
    }
    else {
      ppvVar1 = (void **)this->m_pFreeSegmentHead;
    }
    this->m_pFreeSegmentHead = *ppvVar1;
    return ppvVar1;
  }
  this_00 = &this->m_segPoolMutex;
  Acquire__6EMutexUi(this_00,0xffffffff);
  if (this->m_pFreeSegmentHead == (void *)0x0) {
    Release__6EMutex(this_00);
    AcquireBothMutexes__14EMemoryManager(this);
    if (this->m_pFreeSegmentHead == (void *)0x0) {
      GrowSegmentBlock__14EMemoryManager(this);
    }
    Release__6EMutex(&this->m_heapMutex);
    ppvVar1 = (void **)0x0;
    if (this->m_pFreeSegmentHead == (void *)0x0) goto LAB_002c893c;
    ppvVar1 = (void **)this->m_pFreeSegmentHead;
  }
  else {
    ppvVar1 = (void **)this->m_pFreeSegmentHead;
  }
  this->m_pFreeSegmentHead = *ppvVar1;
LAB_002c893c:
  Release__6EMutex(this_00);
  return ppvVar1;
}

void EMemoryManager::AcquireBothMutexes() {
	bool order;
	
  bool bVar1;
  bool bVar2;
  EMutex *this_00;
  EMutex *this_01;
  
  if (__14EMemoryManager_m_constructed != 0) {
    bVar2 = true;
    this_01 = &this->m_segPoolMutex;
    this_00 = &this->m_heapMutex;
    while( true ) {
      while (bVar2) {
        Acquire__6EMutexUi(this_01,0xffffffff);
        bVar1 = Acquire__6EMutexUi(this_00,0);
        if (bVar1) {
          return;
        }
        Release__6EMutex(this_01);
        bVar2 = (bool)(bVar2 ^ 1);
      }
      Acquire__6EMutexUi(this_00,0xffffffff);
      bVar2 = Acquire__6EMutexUi(this_01,0);
      if (bVar2) break;
      Release__6EMutex(this_00);
      bVar2 = true;
    }
  }
  return;
}

void EMemoryManager::ReleaseBothMutexes() {
  if (__14EMemoryManager_m_constructed != 0) {
    Release__6EMutex(&this->m_segPoolMutex);
    Release__6EMutex(&this->m_heapMutex);
  }
  return;
}

EMMSubAllocator* EMemoryManager::AllocSubAllocator() {
	EMMSubAllocator *psa;
	void *pAddress;
	
  EMMSubAllocator *this_00;
  
  this_00 = (EMMSubAllocator *)AllocSegment__14EMemoryManager(this);
  if (this_00 != (EMMSubAllocator *)0x0) {
                    /* end of inlined section */
    __15EMMSubAllocator(this_00);
    Init__5EHeapPvUi((EHeap *)this_00,this_00 + 1,0xfdc);
    this_00->listPos = 0xb;
  }
  return this_00;
}

void EMemoryManager::FreeSubAllocator(EMMSubAllocator *psa) {
	TLinkedList<EMMSubAllocator,28,32> *this;
	EMMSubAllocator *pNode;
	void *pNode;
	EMMSubAllocator *pNode;
	void *pNode;
	void *pNode;
	EMMSubAllocator *pNode;
	void *pNode;
	EMMSubAllocator *pNode;
	EMMSubAllocator *pNode;
	
  int iVar1;
  
  iVar1 = psa->listPos;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  if (this->m_subAllocPowerLists[iVar1].m_pHead == psa) {
    this->m_subAllocPowerLists[iVar1].m_pHead = psa->pNext;
  }
  else {
    psa->pLast->pNext = psa->pNext;
  }
  if (this->m_subAllocPowerLists[iVar1].m_pTail == psa) {
    this->m_subAllocPowerLists[iVar1].m_pTail = psa->pLast;
  }
  else {
    psa->pNext->pLast = psa->pLast;
  }
                    /* end of inlined section */
  ___15EMMSubAllocator(psa,2);
  FreeSegment__14EMemoryManagerPv(this,psa);
  return;
}

int EMemoryManager::CalcListPos(int val) {
	int listPos;
	
  int iVar1;
  
  if (val < 1) {
    iVar1 = 0xb;
    if (-1 < val) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = ((uint)(float)val >> 0x17) - 0x7f;
    if (0xb < iVar1) {
      iVar1 = 0xb;
    }
  }
  return iVar1;
}

void EMemoryManager::UpdateListPos(EMMSubAllocator *psa) {
	int listPos;
	EHeap *this;
	TLinkedList<EMMSubAllocator,28,32> *this;
	EMMSubAllocator *pNode;
	void *pNode;
	EMMSubAllocator *pNode;
	void *pNode;
	void *pNode;
	EMMSubAllocator *pNode;
	void *pNode;
	EMMSubAllocator *pNode;
	EMMSubAllocator *pNode;
	TLinkedList<EMMSubAllocator,28,32> *this;
	EMMSubAllocator *pNewNode;
	EMMSubAllocator *pNode;
	void *pNode;
	
  int iVar1;
  EMMSubAllocator *pEVar2;
  int iVar3;
  
  iVar3 = CalcListPos__14EMemoryManageri((psa->heap).m_smallestFailedAlloc);
  iVar1 = psa->listPos;
  if (iVar1 != iVar3) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    if (this->m_subAllocPowerLists[iVar1].m_pHead == psa) {
      this->m_subAllocPowerLists[iVar1].m_pHead = psa->pNext;
    }
    else {
      psa->pLast->pNext = psa->pNext;
    }
    if (this->m_subAllocPowerLists[iVar1].m_pTail == psa) {
      this->m_subAllocPowerLists[iVar1].m_pTail = psa->pLast;
    }
    else {
      psa->pNext->pLast = psa->pLast;
    }
    psa->pLast = this->m_subAllocPowerLists[iVar3].m_pTail;
    pEVar2 = this->m_subAllocPowerLists[iVar3].m_pTail;
    if (pEVar2 == (EMMSubAllocator *)0x0) {
      this->m_subAllocPowerLists[iVar3].m_pHead = psa;
    }
    else {
      pEVar2->pNext = psa;
    }
    psa->pNext = (EMMSubAllocator *)0x0;
    this->m_subAllocPowerLists[iVar3].m_pTail = psa;
                    /* end of inlined section */
    psa->listPos = iVar3;
  }
  return;
}

void* EMemoryManager::AllocFromSubAllocatorList(EMMSAList &list, u32 size, u32 alignment) {
  void *pvVar1;
  
  pvVar1 = AllocFromSubAllocatorList__14EMemoryManagerRt11TLinkedList3Z15EMMSubAllocatorUi28Ui32UiUiPCcUi
                     (this,list,size,alignment,(char *)0x0,0);
  return pvVar1;
}

void* EMemoryManager::AllocFromSubAllocatorList(EMMSAList &list, u32 size, u32 alignment, char *szFile, u32 line) {
	EMMSubAllocator *psa;
	EMMSubAllocator *next;
	int prevSmallestFailedAlloc;
	void *p;
	void *pNode;
	EHeap *this;
	EHeap *this;
	
  EMMSubAllocator *pEVar1;
  uint uVar2;
  void *pvVar3;
  EMMSubAllocator *psa;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  psa = list->m_pHead;
                    /* end of inlined section */
  if (psa == (EMMSubAllocator *)0x0) {
LAB_002c8d0c:
    pvVar3 = (void *)0x0;
  }
  else {
                    /* end of inlined section */
    pEVar1 = psa->pNext;
    while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_heap.h */
      uVar2 = (psa->heap).m_smallestFailedAlloc;
                    /* end of inlined section */
      pvVar3 = Alloc__5EHeapUiUi(&psa->heap,size,alignment);
      if (pvVar3 != (void *)0x0) break;
                    /* inlined from /eor/src2/common/datastruc/e_heap.h */
                    /* end of inlined section */
      if ((psa->heap).m_smallestFailedAlloc != uVar2) {
        UpdateListPos__14EMemoryManagerP15EMMSubAllocator(this,psa);
      }
      if (pEVar1 == (EMMSubAllocator *)0x0) goto LAB_002c8d0c;
      psa = pEVar1;
      pEVar1 = pEVar1->pNext;
    }
  }
  return pvVar3;
}

void* EMemoryManager::Alloc(u32 size, u32 alignment) {
  void *pvVar1;
  
  pvVar1 = Alloc__14EMemoryManagerUiUiPCcUi(this,size,alignment,(char *)0x0,0);
  return pvVar1;
}

void* EMemoryManager::Alloc(u32 size, u32 alignment, char *szFile, u32 line) {
	void *p;
	int i;
	EMemoryManager *this;
	int listPos;
	int tryPos;
	EMMSubAllocator *psa;
	EMemoryManager *this;
	EMemoryManager *this;
	EMemoryManager *this;
	TLinkedList<EMMSubAllocator,28,32> *this;
	EMMSubAllocator *pNewNode;
	EMMSubAllocator *pNode;
	void *pNode;
	EMemoryManager *this;
	EMemoryManager *this;
	
  EMMSubAllocator *pEVar1;
  void *pvVar2;
  int iVar3;
  EMMSubAllocator *this_00;
  TLinkedList_EMMSubAllocator_28_32_ *list;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    if ((size == 0x1000) && (pvVar2 = AllocSegment__14EMemoryManager(this), pvVar2 != (void *)0x0))
    {
      return pvVar2;
    }
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
    if (__14EMemoryManager_m_constructed != 0) {
      Acquire__6EMutexUi(&this->m_heapMutex,0xffffffff);
    }
                    /* end of inlined section */
    if (size < 0x801) {
      iVar3 = CalcListPos__14EMemoryManageri(size);
      iVar4 = iVar3 + 1;
      if (iVar4 < 0xc) {
        list = this->m_subAllocPowerLists + iVar3 + 1;
        do {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
          if ((list->m_pHead != (EMMSubAllocator *)0x0) &&
             (pvVar2 = AllocFromSubAllocatorList__14EMemoryManagerRt11TLinkedList3Z15EMMSubAllocatorUi28Ui32UiUi
                                 (this,list,size,alignment), pvVar2 != (void *)0x0)) {
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
            if (__14EMemoryManager_m_constructed == 0) {
              return pvVar2;
            }
            Release__6EMutex(&this->m_heapMutex);
            return pvVar2;
                    /* end of inlined section */
          }
          iVar4 = iVar4 + 1;
          list = list + 1;
        } while (iVar4 < 0xc);
      }
      pvVar2 = AllocFromSubAllocatorList__14EMemoryManagerRt11TLinkedList3Z15EMMSubAllocatorUi28Ui32UiUi
                         (this,this->m_subAllocPowerLists + iVar3,size,alignment);
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
      if (__14EMemoryManager_m_constructed != 0) {
        Release__6EMutex(&this->m_heapMutex);
      }
                    /* end of inlined section */
      if (pvVar2 != (void *)0x0) {
        return pvVar2;
      }
      this_00 = AllocSubAllocator__14EMemoryManager(this);
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
      if (__14EMemoryManager_m_constructed != 0) {
        Acquire__6EMutexUi(&this->m_heapMutex,0xffffffff);
      }
                    /* end of inlined section */
      if (this_00 != (EMMSubAllocator *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
        this_00->pLast = this->m_subAllocPowerLists[0xb].m_pTail;
        pEVar1 = this->m_subAllocPowerLists[0xb].m_pTail;
        if (pEVar1 == (EMMSubAllocator *)0x0) {
          this->m_subAllocPowerLists[0xb].m_pHead = this_00;
        }
        else {
          pEVar1->pNext = this_00;
        }
        this_00->pNext = (EMMSubAllocator *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
        this->m_subAllocPowerLists[0xb].m_pTail = this_00;
                    /* end of inlined section */
        pvVar2 = Alloc__5EHeapUiUi(&this_00->heap,size,alignment);
        if (pvVar2 != (void *)0x0) {
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
          if (__14EMemoryManager_m_constructed == 0) {
            return pvVar2;
          }
          Release__6EMutex(&this->m_heapMutex);
          return pvVar2;
                    /* end of inlined section */
        }
      }
    }
    pvVar2 = Alloc__5EHeapUiUi(&this->m_heap,size,alignment);
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
    if (__14EMemoryManager_m_constructed != 0) {
      Release__6EMutex(&this->m_heapMutex);
    }
                    /* end of inlined section */
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    if (iVar5 == 0) {
      FreeUnusedSegments__14EMemoryManagerb(this,true);
    }
    iVar5 = iVar5 + 1;
    if (1 < iVar5) {
      return (void *)0x0;
    }
  } while( true );
}

void* EMemoryManager::AllocAt(void *pAddress, u32 size) {
  void *pvVar1;
  
  pvVar1 = AllocAt__14EMemoryManagerPvUiPCcUi(this,pAddress,size,(char *)0x0,0);
  return pvVar1;
}

void* EMemoryManager::AllocAt(void *pAddress, u32 size, char *szFile, u32 line) {
	void *p;
	EMemoryManager *this;
	EMemoryManager *this;
	
  void *pvVar1;
  
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
  if (__14EMemoryManager_m_constructed != 0) {
    Acquire__6EMutexUi(&this->m_heapMutex,0xffffffff);
  }
                    /* end of inlined section */
  pvVar1 = AllocAt__5EHeapPvUi(&this->m_heap,pAddress,size);
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
  if (__14EMemoryManager_m_constructed != 0) {
    Release__6EMutex(&this->m_heapMutex);
                    /* end of inlined section */
  }
  return pvVar1;
}

void* EMemoryManager::AllocTop(u32 size, u32 alignment) {
  void *pvVar1;
  
  pvVar1 = AllocTop__14EMemoryManagerUiUiPCcUi(this,size,alignment,(char *)0x0,0);
  return pvVar1;
}

void* EMemoryManager::AllocTop(u32 size, u32 alignment, char *szFile, u32 line) {
	void *p;
	EMemoryManager *this;
	EMemoryManager *this;
	
  void *pvVar1;
  
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
  if (__14EMemoryManager_m_constructed != 0) {
    Acquire__6EMutexUi(&this->m_heapMutex,0xffffffff);
  }
                    /* end of inlined section */
  pvVar1 = AllocTop__5EHeapUiUi(&this->m_heap,size,alignment);
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
  if (__14EMemoryManager_m_constructed != 0) {
    Release__6EMutex(&this->m_heapMutex);
                    /* end of inlined section */
  }
  return pvVar1;
}

void EMemoryManager::FreeSegment(void *p) {
	EMemoryManager *this;
	EMemoryManager *this;
	
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
  if (__14EMemoryManager_m_constructed != 0) {
    Acquire__6EMutexUi(&this->m_segPoolMutex,0xffffffff);
  }
                    /* end of inlined section */
  *(void **)p = this->m_pFreeSegmentHead;
  this->m_pFreeSegmentHead = p;
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
  if (__14EMemoryManager_m_constructed != 0) {
    Release__6EMutex(&this->m_segPoolMutex);
  }
  return;
}

u32 EMemoryManager::Free(void *p) {
	u32 ret;
	EMMSubAllocator *psa;
	int prevSmallestFailedAlloc;
	EMemoryManager *this;
	EHeap *this;
	EHeap *this;
	EHeap *this;
	EMemoryManager *this;
	EMemoryManager *this;
	EMemoryManager *this;
	
  uint uVar1;
  EHeapBlock *pEVar2;
  bool bVar3;
  uint uVar4;
  EMMSubAllocator *psa;
  
  uVar4 = 0;
  if (p != (void *)0x0) {
    if (p < this->m_pSegmentBlock) {
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
      if (__14EMemoryManager_m_constructed != 0) {
        Acquire__6EMutexUi(&this->m_heapMutex,0xffffffff);
      }
                    /* end of inlined section */
      uVar4 = Free__5EHeapPv(&this->m_heap,p);
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
      if (__14EMemoryManager_m_constructed != 0) {
        Release__6EMutex(&this->m_heapMutex);
      }
    }
    else if (((uint)p & 0xfff) == 0) {
      FreeSegment__14EMemoryManagerPv(this,p);
      uVar4 = 0x1000;
    }
    else {
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
      psa = (EMMSubAllocator *)((uint)p & 0xfffff000);
      if (__14EMemoryManager_m_constructed != 0) {
        Acquire__6EMutexUi(&this->m_heapMutex,0xffffffff);
      }
                    /* end of inlined section */
                    /* end of inlined section */
      uVar1 = (psa->heap).m_smallestFailedAlloc;
      uVar4 = Free__5EHeapPv((EHeap *)psa,p);
                    /* inlined from /eor/src2/common/datastruc/e_heap.h */
      pEVar2 = (psa->heap).m_pHead;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_heap.h */
      bVar3 = false;
      if ((pEVar2 == (EHeapBlock *)0x0) ||
         (((pEVar2->size & 1) != 0 &&
          ((void *)((int)&pEVar2->pLast + (pEVar2->size >> 1)) == (psa->heap).m_pEnd)))) {
        bVar3 = true;
      }
                    /* end of inlined section */
      if (bVar3) {
        FreeSubAllocator__14EMemoryManagerP15EMMSubAllocator(this,psa);
      }
      else {
                    /* inlined from /eor/src2/common/datastruc/e_heap.h */
                    /* end of inlined section */
        if ((psa->heap).m_smallestFailedAlloc != uVar1) {
          UpdateListPos__14EMemoryManagerP15EMMSubAllocator(this,psa);
        }
      }
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
      if (__14EMemoryManager_m_constructed != 0) {
        Release__6EMutex(&this->m_heapMutex);
                    /* end of inlined section */
      }
    }
  }
  return uVar4;
}

void* EMemoryManager::Realloc(void *pAddress, u32 newSize, u32 alignment) {
	void *np;
	u32 originalSize;
	EMMSubAllocator *psa;
	EMemoryManager *this;
	EMemoryManager *this;
	void *np;
	EMemoryManager *this;
	EMemoryManager *this;
	
  void *pDest;
  uint nBytes;
  
  if (pAddress == (void *)0x0) {
    pDest = Alloc__14EMemoryManagerUiUi(this,newSize,alignment);
  }
  else if (pAddress < this->m_pSegmentBlock) {
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
    if (__14EMemoryManager_m_constructed != 0) {
      Acquire__6EMutexUi(&this->m_heapMutex,0xffffffff);
    }
                    /* end of inlined section */
    pDest = Realloc__5EHeapPvUiUi(&this->m_heap,pAddress,newSize,alignment);
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
    if (__14EMemoryManager_m_constructed != 0) {
      Release__6EMutex(&this->m_heapMutex);
                    /* end of inlined section */
    }
  }
  else {
    pDest = Alloc__14EMemoryManagerUiUi(this,newSize,alignment);
    if (pDest == (void *)0x0) {
      pDest = (void *)0x0;
    }
    else {
      if (((uint)pAddress & 0xfff) == 0) {
        nBytes = 0x1000;
      }
      else {
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
        if (__14EMemoryManager_m_constructed != 0) {
          Acquire__6EMutexUi(&this->m_heapMutex,0xffffffff);
        }
                    /* end of inlined section */
        nBytes = GetBlockSize__5EHeapPv((EHeap *)((uint)pAddress & 0xfffff000),pAddress);
                    /* inlined from c:/eor/src2/engine/memory/e_memman.h */
        if (__14EMemoryManager_m_constructed != 0) {
          Release__6EMutex(&this->m_heapMutex);
                    /* end of inlined section */
        }
      }
      memcpy(pDest,pAddress,nBytes);
      Free__14EMemoryManagerPv(this,pAddress);
    }
  }
  return pDest;
}

int EMemoryManager::GetFreeSegmentCount() {
	int count;
	void *pseg;
	
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)this->m_pFreeSegmentHead; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

void EMemoryManager::FreeUnusedSegments(bool shrinkSegPool) {
	u32 i;
	void *pAddr;
	bool found;
	void *prevSeg;
	void *nextSeg;
	void *pseg;
	int usedSegments;
	bool prevMemSet;
	u32 segmentBlockSize;
	
  bool bVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint size;
  uint uVar5;
  undefined4 *puVar6;
  
  FreeUnusedSegments__12EAllocBucket(&_allocBucket);
  if (shrinkSegPool) {
    AcquireBothMutexes__14EMemoryManager(this);
    uVar5 = 0;
    if (this->m_nSegments != 0) {
      pvVar3 = this->m_pSegmentBlock;
      do {
        puVar4 = (undefined4 *)this->m_pFreeSegmentHead;
        bVar1 = false;
        puVar2 = (undefined4 *)0x0;
        puVar6 = (undefined4 *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)*puVar4;
          while (puVar4 != (undefined4 *)((int)pvVar3 + uVar5 * 0x1000)) {
            puVar6 = puVar4;
            if (puVar2 == (undefined4 *)0x0) goto LAB_002c94a0;
            puVar4 = puVar2;
            puVar2 = (undefined4 *)*puVar2;
          }
          bVar1 = true;
        }
LAB_002c94a0:
        if (!bVar1) break;
        if (puVar6 == (undefined4 *)0x0) {
          this->m_pFreeSegmentHead = puVar2;
        }
        else {
          *puVar6 = puVar2;
        }
        uVar5 = uVar5 + 1;
        if (this->m_nSegments <= uVar5) break;
        pvVar3 = this->m_pSegmentBlock;
      } while( true );
    }
    if (uVar5 != 0) {
      uVar5 = this->m_nSegments - uVar5;
      bVar1 = SetMemset__5EHeapb(&this->m_heap,false);
      Free__5EHeapPv(&this->m_heap,this->m_pSegmentBlock);
      size = this->m_segmentPad + uVar5 * 0x1000;
      pvVar3 = AllocAt__5EHeapPvUi(&this->m_heap,(void *)((int)this->m_pTopOfHeap - size),size);
      this->m_nSegments = uVar5;
      this->m_pSegmentBlock = pvVar3;
      SetMemset__5EHeapb(&this->m_heap,bVar1);
    }
    ReleaseBothMutexes__14EMemoryManager(this);
  }
  return;
}

void EMemoryManager::FreeMem(u32 *pTotal, u32 *pLargest) {
	u32 total;
	u32 largest;
	u32 t;
	u32 l;
	int nFreeSegs;
	int i;
	EMMSubAllocator *psa;
	void *pNode;
	
  EHeap *this_00;
  int iVar1;
  undefined8 unaff_s0;
  uint uVar2;
  undefined8 unaff_s1;
  uint uVar3;
  undefined8 unaff_s2;
  int iVar4;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  uint t;
  uint l;
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
  
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  AcquireBothMutexes__14EMemoryManager(this);
  FreeMem__5EHeapPUiT1(&this->m_heap,&t,&l);
  iVar4 = 0;
  iVar1 = 0;
  uVar2 = l;
  uVar3 = t;
  do {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    this_00 = *(EHeap **)((int)&this->m_subAllocPowerLists[0].m_pHead + iVar1);
    iVar4 = iVar4 + 1;
                    /* end of inlined section */
    while (this_00 != (EHeap *)0x0) {
      FreeMem__5EHeapPUiT1(this_00,&t,&l);
      this_00 = (EHeap *)this_00[1].m_pHead;
      if (uVar2 <= l) {
        uVar2 = l;
      }
      uVar3 = uVar3 + t;
    }
    iVar1 = iVar4 * 8;
  } while (iVar4 < 0xc);
  iVar1 = GetFreeSegmentCount__14EMemoryManager(this);
  if (iVar1 != 0) {
    if (uVar2 < 0x1000) {
      uVar2 = 0x1000;
    }
    uVar3 = uVar3 + iVar1 * 0x1000;
  }
  if (pTotal != (uint *)0x0) {
    *pTotal = uVar3;
  }
  if (pLargest != (uint *)0x0) {
    *pLargest = uVar2;
  }
  ReleaseBothMutexes__14EMemoryManager(this);
  return;
}

void EMemoryManager::Validate() {
  return;
}

void EMemoryManager::PrintFree() {
	int i;
	EMMSubAllocator *psa;
	void *pNode;
	
  EHeap *this_00;
  int iVar1;
  int iVar2;
  
  AcquireBothMutexes__14EMemoryManager(this);
  GetFreeSegmentCount__14EMemoryManager(this);
  PrintFree__5EHeap(&this->m_heap);
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    for (this_00 = *(EHeap **)((int)&this->m_subAllocPowerLists[0].m_pHead + iVar1);
        this_00 != (EHeap *)0x0; this_00 = (EHeap *)this_00[1].m_pHead) {
      PrintFree__5EHeap(this_00);
    }
    iVar1 = iVar2 * 8;
  } while (iVar2 < 0xc);
  ReleaseBothMutexes__14EMemoryManager(this);
  return;
}

void EMemoryManager::PrintUsed(u32 since) {
	int i;
	EMMSubAllocator *psa;
	void *pNode;
	
  EHeap *this_00;
  int iVar1;
  int iVar2;
  
  AcquireBothMutexes__14EMemoryManager(this);
  GetFreeSegmentCount__14EMemoryManager(this);
  PrintUsed__5EHeapUi(&this->m_heap,since);
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    for (this_00 = *(EHeap **)((int)&this->m_subAllocPowerLists[0].m_pHead + iVar1);
        this_00 != (EHeap *)0x0; this_00 = (EHeap *)this_00[1].m_pHead) {
      PrintUsed__5EHeapUi(this_00,since);
    }
    iVar1 = iVar2 * 8;
  } while (iVar2 < 0xc);
  ReleaseBothMutexes__14EMemoryManager(this);
  return;
}

void EMemoryManager::PrintUsedInOrder(u32 since) {
	int i;
	EMMSubAllocator *psa;
	void *pNode;
	
  EHeap *this_00;
  int iVar1;
  int iVar2;
  
  AcquireBothMutexes__14EMemoryManager(this);
  GetFreeSegmentCount__14EMemoryManager(this);
  PrintUsedInOrder__5EHeapUi(&this->m_heap,since);
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    for (this_00 = *(EHeap **)((int)&this->m_subAllocPowerLists[0].m_pHead + iVar1);
        this_00 != (EHeap *)0x0; this_00 = (EHeap *)this_00[1].m_pHead) {
      PrintUsedInOrder__5EHeapUi(this_00,since);
    }
    iVar1 = iVar2 * 8;
  } while (iVar2 < 0xc);
  ReleaseBothMutexes__14EMemoryManager(this);
  return;
}

void* _memmanAlloc(u32 size, u32 alignment, char *szFile, u32 line) {
  void *pvVar1;
  
  pvVar1 = Alloc__14EMemoryManagerUiUiPCcUi(&_memman,size,alignment,szFile,line);
  return pvVar1;
}

void* _memmanAllocTop(u32 size, u32 alignment, char *szFile, u32 line) {
  void *pvVar1;
  
  pvVar1 = AllocTop__14EMemoryManagerUiUiPCcUi(&_memman,size,alignment,szFile,line);
  return pvVar1;
}

void* _memmanAllocAt(void *pAddress, u32 size, char *szFile, u32 line) {
  void *pvVar1;
  
  pvVar1 = AllocAt__14EMemoryManagerPvUiPCcUi(&_memman,pAddress,size,szFile,line);
  return pvVar1;
}

void _memmanFree(void *pAddress) {
  Free__14EMemoryManagerPv(&_memman,pAddress);
  return;
}

void* _memmanAlloc(u32 size, u32 alignment) {
  void *pvVar1;
  
  pvVar1 = Alloc__14EMemoryManagerUiUi(&_memman,size,alignment);
  return pvVar1;
}

void* _memmanAllocTop(u32 size, u32 alignment) {
  void *pvVar1;
  
  pvVar1 = AllocTop__14EMemoryManagerUiUi(&_memman,size,alignment);
  return pvVar1;
}

void* _memmanAllocAt(void *pAddress, u32 size) {
  void *pvVar1;
  
  pvVar1 = AllocAt__14EMemoryManagerPvUi(&_memman,pAddress,size);
  return pvVar1;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___6EMutex(&_memman.m_segPoolMutex,2);
      ___6EMutex(&_memman.m_heapMutex,2);
    }
    else {
      __14EMemoryManager(&_memman);
    }
  }
  return;
}

void global constructors keyed to _memman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _memman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
