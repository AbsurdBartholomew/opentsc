// STATUS: NOT STARTED

#include "e_dl.h"

__vtbl_ptr_type EDL virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDL::~EDL,
		/* .__delta2 = */ -30488
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EDL* EDL::EDL() {
  this->__vtable = (EDL__vtable *)_vt_3EDL;
  __11EAllocGroup(&this->m_allocGroup);
  __11EAllocGroup(&this->m_flushableAllocGroup);
  this->m_lastMPG = -1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_textureRefs).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_textureRefs).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_texturePasses).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_texturePasses).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_dlRefs).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_dlRefs).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pStart = (EDLEntry *)0x0;
  this->m_type = 0;
  this->m_branchDepth = 0;
  this->m_nVerts = 0;
  this->m_nStrips = 0;
  this->m_stripSum = 0;
  this->m_firstMPG = -1;
  this->m_nMPGLoads = 0;
  return this;
}

void EDL::Validate() {
	NLIterator ti;
	NLIterator dli;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
  Validate__11EAllocGroup(&this->m_allocGroup);
  Validate__11EAllocGroup(&this->m_flushableAllocGroup);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_textureRefs).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 == (ENodeListNode *)0x0) {
    pEVar2 = (this->m_dlRefs).field0_0x0.m_l.m_pHead;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = pEVar2->data;
    while( true ) {
                    /* end of inlined section */
      if (uVar1 == 0) {
        pEVar2 = pEVar2->pNext;
      }
      else {
        (**(code **)(*(int *)(uVar1 + 0x20) + 0x5c))
                  (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x20) + 0x58));
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar2 = pEVar2->pNext;
      }
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar2 = (this->m_dlRefs).field0_0x0.m_l.m_pHead;
  }
                    /* end of inlined section */
  for (; pEVar2 != (ENodeListNode *)0x0; pEVar2 = (ENodeListNode *)(&pEVar2->data)[2]) {
                    /* end of inlined section */
    Validate__3EDL((EDL *)pEVar2->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
  return;
}

void EDL::~EDL(int __in_chrg) {
	EAllocGroup *this;
	TNodeList<void *> *this;
	ENodeList *this;
	void *pAddress;
	void *pAddress;
	EAllocGroup *this;
	TNodeList<void *> *this;
	ENodeList *this;
	void *pAddress;
	void *pAddress;
	
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  this->__vtable = (EDL__vtable *)_vt_3EDL;
                    /* inlined from /eor/src2/common/datastruc/e_allocgroup.h */
  RemoveAll__9ENodeList(&(this->m_dlRefs).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_texturePasses).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_textureRefs).field0_0x0);
  DeallocateAll__11EAllocGroup(&this->m_flushableAllocGroup);
  RemoveAll__9ENodeList((ENodeList *)&this->m_flushableAllocGroup);
  DeallocateAll__11EAllocGroup(&this->m_allocGroup);
  RemoveAll__9ENodeList((ENodeList *)this);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
    __dl__3EDLPv(this);
  }
  return;
}

void EDL::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x58,0x23);
  return;
}
