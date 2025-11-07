// STATUS: NOT STARTED

#include "e_nodelist.h"

void ENodeList::Remove(NLIterator i) {
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeListNode *pNode;
	void *pNode;
	ENodeListNode *pNode;
	void *pNode;
	void *pNode;
	ENodeListNode *pNode;
	void *pNode;
	ENodeListNode *pNode;
	ENodeListNode *pNode;
	void *p;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  if ((this->m_l).m_pHead == (ENodeListNode *)i) {
    (this->m_l).m_pHead = *(ENodeListNode **)(i + 8);
  }
  else {
    *(undefined4 *)(*(int *)(i + 4) + 8) = *(undefined4 *)(i + 8);
  }
  if ((this->m_l).m_pTail == (ENodeListNode *)i) {
    (this->m_l).m_pTail = *(ENodeListNode **)(i + 4);
  }
  else {
    *(undefined4 *)(*(int *)(i + 8) + 4) = *(undefined4 *)(i + 4);
  }
  _allocBucketFree__FPvUiUi(i,0xc,0xc);
  return;
}

NLIterator ENodeList::AddHead(NLData data) {
	ENodeListNode *i;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeListNode *pNewNode;
	void *pNode;
	ENodeListNode *pNode;
	
  ENodeListNode *pEVar1;
  ENodeListNode *pEVar2;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
  pEVar2 = (ENodeListNode *)_allocBucketAlloc__FUiUi(0xc,0xc);
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
    pEVar2->data = data;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pEVar2->pNext = (this->m_l).m_pHead;
    pEVar1 = (this->m_l).m_pHead;
    if (pEVar1 == (ENodeListNode *)0x0) {
      (this->m_l).m_pTail = pEVar2;
    }
    else {
      pEVar1->pLast = pEVar2;
    }
    pEVar2->pLast = (ENodeListNode *)0x0;
    (this->m_l).m_pHead = pEVar2;
                    /* end of inlined section */
  }
  return (undefined1 *)pEVar2;
}

NLIterator ENodeList::AddTail(NLData data) {
	ENodeListNode *i;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeListNode *pNewNode;
	ENodeListNode *pNode;
	void *pNode;
	
  ENodeListNode *pEVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
  pEVar2 = (ENodeListNode *)_allocBucketAlloc__FUiUi(0xc,0xc);
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
    pEVar2->data = data;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pEVar2->pLast = (this->m_l).m_pTail;
    pEVar1 = (this->m_l).m_pTail;
    if (pEVar1 == (ENodeListNode *)0x0) {
      (this->m_l).m_pHead = pEVar2;
    }
    else {
      pEVar1->pNext = pEVar2;
    }
    pEVar2->pNext = (ENodeListNode *)0x0;
    (this->m_l).m_pTail = pEVar2;
                    /* end of inlined section */
  }
  return (undefined1 *)pEVar2;
}

void ENodeList::AddHead(ENodeList &list) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	ENodeListNode *pNode;
	NLIterator i;
	
  uint data;
  ENodeListNode *pEVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (list->m_l).m_pTail;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    data = pEVar1->data;
    while( true ) {
      pEVar1 = pEVar1->pLast;
      AddHead__9ENodeListUi(this,data);
      if (pEVar1 == (ENodeListNode *)0x0) break;
      data = pEVar1->data;
    }
  }
  return;
}

void ENodeList::AddTail(ENodeList &list) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	
  uint data;
  ENodeListNode *pEVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (list->m_l).m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    data = pEVar1->data;
    while( true ) {
      pEVar1 = pEVar1->pNext;
      AddTail__9ENodeListUi(this,data);
      if (pEVar1 == (ENodeListNode *)0x0) break;
      data = pEVar1->data;
    }
  }
  return;
}

NLIterator ENodeList::InsertBefore(NLIterator target, NLData data) {
	ENodeListNode *i;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeListNode *pTargetNode;
	ENodeListNode *pNewNode;
	ENodeListNode *pNode;
	ENodeListNode *pNode;
	ENodeListNode *pNode;
	ENodeListNode *pNode;
	ENodeListNode *pNode;
	void *pNode;
	ENodeListNode *pNewNode;
	TLinkedList<ENodeListNode,4,8> *this;
	void *pNode;
	ENodeListNode *pNode;
	
  ENodeListNode *pEVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
  pEVar2 = (ENodeListNode *)_allocBucketAlloc__FUiUi(0xc,0xc);
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
    pEVar2->data = data;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    if (*(int *)(target + 4) == 0) {
      pEVar2->pNext = (this->m_l).m_pHead;
      pEVar1 = (this->m_l).m_pHead;
      if (pEVar1 == (ENodeListNode *)0x0) {
        (this->m_l).m_pTail = pEVar2;
      }
      else {
        pEVar1->pLast = pEVar2;
      }
      pEVar2->pLast = (ENodeListNode *)0x0;
      (this->m_l).m_pHead = pEVar2;
                    /* end of inlined section */
    }
    else {
      *(ENodeListNode **)(*(int *)(target + 4) + 8) = pEVar2;
      pEVar2->pLast = *(ENodeListNode **)(target + 4);
      *(ENodeListNode **)(target + 4) = pEVar2;
      pEVar2->pNext = (ENodeListNode *)target;
    }
  }
  return (undefined1 *)pEVar2;
}

NLIterator ENodeList::InsertAfter(NLIterator target, NLData data) {
	ENodeListNode *i;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeListNode *pTargetNode;
	ENodeListNode *pNewNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	ENodeListNode *pNode;
	ENodeListNode *pNewNode;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeListNode *pNode;
	void *pNode;
	
  ENodeListNode *pEVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
  pEVar2 = (ENodeListNode *)_allocBucketAlloc__FUiUi(0xc,0xc);
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
    pEVar2->data = data;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    if (*(int *)(target + 8) == 0) {
      pEVar2->pLast = (this->m_l).m_pTail;
      pEVar1 = (this->m_l).m_pTail;
      if (pEVar1 == (ENodeListNode *)0x0) {
        (this->m_l).m_pHead = pEVar2;
      }
      else {
        pEVar1->pNext = pEVar2;
      }
      pEVar2->pNext = (ENodeListNode *)0x0;
      (this->m_l).m_pTail = pEVar2;
                    /* end of inlined section */
    }
    else {
      *(ENodeListNode **)(*(int *)(target + 8) + 4) = pEVar2;
      pEVar2->pNext = *(ENodeListNode **)(target + 8);
      *(ENodeListNode **)(target + 8) = pEVar2;
      pEVar2->pLast = (ENodeListNode *)target;
    }
  }
  return (undefined1 *)pEVar2;
}

void ENodeList::RemoveAll() {
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	void *pNode;
	void *p;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  ENodeListNode *pEVar1;
  ENodeListNode *pAddress;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pAddress = (this->m_l).m_pHead;
                    /* end of inlined section */
  if (pAddress == (ENodeListNode *)0x0) {
    (this->m_l).m_pHead = (ENodeListNode *)0x0;
  }
  else {
    do {
      pEVar1 = pAddress->pNext;
      _allocBucketFree__FPvUiUi(pAddress,0xc,0xc);
                    /* end of inlined section */
      pAddress = pEVar1;
    } while (pEVar1 != (ENodeListNode *)0x0);
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    (this->m_l).m_pHead = (ENodeListNode *)0x0;
  }
  (this->m_l).m_pTail = (ENodeListNode *)0x0;
  return;
}

void ENodeList::FreeAll() {
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_l).m_pHead; pEVar1 != (ENodeListNode *)0x0; pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
    _memmanFree__FPv((void *)pEVar1->data);
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
  RemoveAll__9ENodeList(this);
  return;
}

int ENodeList::GetSize() {
	int count;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_l).m_pHead; pEVar1 != (ENodeListNode *)0x0; pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
  }
  return iVar2;
}

NLIterator ENodeList::Search(NLData data) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  uint uVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_l).m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
    uVar2 = pEVar1->data;
    while( true ) {
                    /* end of inlined section */
      if (uVar2 == data) {
        return (undefined1 *)pEVar1;
      }
      pEVar1 = pEVar1->pNext;
      if (pEVar1 == (ENodeListNode *)0x0) break;
      uVar2 = pEVar1->data;
    }
  }
  return (undefined1 *)0x0;
}

void ENodeList::MoveContents(ENodeList &source) {
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  ENodeListNode *pEVar1;
  
  RemoveAll__9ENodeList(this);
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (source->m_l).m_pTail;
  (this->m_l).m_pHead = (source->m_l).m_pHead;
  (this->m_l).m_pTail = pEVar1;
  (source->m_l).m_pTail = (ENodeListNode *)0x0;
  (source->m_l).m_pHead = (ENodeListNode *)0x0;
  return;
}
