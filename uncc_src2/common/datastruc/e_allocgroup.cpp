// STATUS: NOT STARTED

#include "e_allocgroup.h"

EAllocGroup* EAllocGroup::EAllocGroup() {
	TNodeList<void *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_allocList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pos = 0x2000;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_allocList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  return this;
}

void* EAllocGroup::Alloc(unsigned int size, int alignment) {
	void *pData;
	TNodeList<void *> *this;
	void *data;
	int pos;
	int newPos;
	void *pSeg;
	TNodeList<void *> *this;
	void *data;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  uint uVar1;
  void *data;
  int iVar2;
  uint uVar3;
  
  if (size < 0x1000) {
    uVar3 = this->m_pos + (alignment - 1U) & ~(alignment - 1U);
    iVar2 = uVar3 + size;
    if (iVar2 < 0x1001) {
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
      uVar1 = ((this->m_allocList).field0_0x0.m_l.m_pTail)->data;
                    /* end of inlined section */
      this->m_pos = iVar2;
      data = (void *)(uVar1 + uVar3);
    }
    else {
      data = _memmanAlloc__FUiUi(0x1000,0x10);
      if (data != (void *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi((ENodeList *)this,(uint)data);
                    /* end of inlined section */
        this->m_pos = size;
      }
    }
  }
  else {
    data = _memmanAlloc__FUiUi(size,alignment);
    if (data != (void *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
      AddHead__9ENodeListUi((ENodeList *)this,(uint)data);
                    /* end of inlined section */
    }
  }
  return data;
}

void EAllocGroup::Validate() {
  return;
}

void EAllocGroup::DeallocateAll() {
  FreeAll__9ENodeList((ENodeList *)this);
  this->m_pos = 0x2000;
  return;
}

void EAllocGroup::MoveContents(EAllocGroup &source) {
	TNodeList<void *> *this;
	ENodeList &source;
	
  DeallocateAll__11EAllocGroup(this);
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  this->m_pos = source->m_pos;
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
  source->m_pos = 0x1000;
  MoveContents__9ENodeListR9ENodeList((ENodeList *)this,(ENodeList *)source);
  return;
}

void EAllocGroup::RemoveAllocExternal(void *pData) {
	TNodeList<void *> *this;
	TNodeList<void *> *this;
	
  undefined1 *i;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
  i = Search__C9ENodeListUi((ENodeList *)this,(uint)pData);
                    /* end of inlined section */
  if (i != (undefined1 *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_nodelist.h */
    Remove__9ENodeListP17NLIteratorPtrType((ENodeList *)this,i);
  }
                    /* end of inlined section */
  return;
}
