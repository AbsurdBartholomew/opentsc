// STATUS: NOT STARTED

#include "espriterenderman.h"

ESpriteRenderMan* ESpriteRenderMan::ESpriteRenderMan() {
	TNodeList<ESpriteRender *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_sprites).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_sprites).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  return this;
}

void ESpriteRenderMan::~ESpriteRenderMan(int __in_chrg) {
	TNodeList<ESpriteRender *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	TNodeList<ESpriteRender *> *this;
	ENodeList *this;
	void *pAddress;
	void *pAddress;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_sprites).field0_0x0.m_l.m_pHead;
  if (pEVar2 != (ENodeListNode *)0x0) {
    uVar1 = pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      if (uVar1 != 0) {
        (**(code **)(*(int *)(uVar1 + 0x80) + 0xc))
                  (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x80) + 8),3);
      }
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
    }
  }
  RemoveAll__9ENodeList((ENodeList *)this);
  RemoveAll__9ENodeList((ENodeList *)this);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ESpriteRenderMan::Update() {
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_sprites).field0_0x0.m_l.m_pHead; pEVar1 != (ENodeListNode *)0x0;
      pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
    Update__13ESpriteRender((ESpriteRender *)pEVar1->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
  RemoveMarkedSprites__16ESpriteRenderMan(this);
  return;
}

void ESpriteRenderMan::RemoveMarkedSprites() {
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	TNodeList<ESpriteRender *> *this;
	NLIterator i;
	
  ESpriteRender *this_00;
  ENodeListNode *pEVar1;
  ENodeListNode *i;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  i = (this->m_sprites).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (i != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = (ESpriteRender *)i->data;
    while( true ) {
                    /* end of inlined section */
      pEVar1 = i->pNext;
      if (*(int *)this_00 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/espriterender.h */
                    /* end of inlined section */
        if (*(int *)&this_00->bMarkedAsNew != 0) {
          SetSprite__13ESpriteRender(this_00);
        }
      }
      else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        Remove__9ENodeListP17NLIteratorPtrType((ENodeList *)this,(undefined1 *)i);
                    /* end of inlined section */
        if (this_00 != (ESpriteRender *)0x0) {
          (*(code *)this_00->__vtable[1].ESpriteRender)
                    (&this_00->bMarked + *(short *)(this_00->__vtable + 1),3);
        }
      }
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this_00 = (ESpriteRender *)pEVar1->data;
      i = pEVar1;
    }
  }
  return;
}

void ESpriteRenderMan::Draw(ERC *prc) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ESpriteRender *this_00;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_sprites).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    this_00 = (ESpriteRender *)pEVar1->data;
    while( true ) {
      Draw__13ESpriteRenderP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this_00 = (ESpriteRender *)pEVar1->data;
    }
  }
  return;
}

void ESpriteRenderMan::SetSprite(SpriteSlot *pSprite) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	SpriteSlot *this;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_sprites).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = pEVar2->data;
                    /* end of inlined section */
    while (*(cXObject__15_2008 **)(uVar1 + 8) != pSprite->m_pObj) {
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) {
        return;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      uVar1 = pEVar2->data;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/espriterender.h */
    *(undefined4 *)(uVar1 + 4) = 1;
  }
                    /* end of inlined section */
  return;
}

ESpriteRender* ESpriteRenderMan::AddSprite(cXObject *pSprite) {
	ESpriteRender *pRender;
	TNodeList<ESpriteRender *> *this;
	ESpriteRender *data;
	
  ESpriteRender *pEVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/espriterender.h */
  pEVar1 = (ESpriteRender *)_memmanAlloc__FUiUi(0x90,0x10);
                    /* end of inlined section */
  pEVar1 = __13ESpriteRender(pEVar1);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  pEVar1->m_pObj = (cXObject__36_1024 *)pSprite;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi((ENodeList *)this,(uint)pEVar1);
                    /* end of inlined section */
  return pEVar1;
}

void ESpriteRenderMan::MarkSprite(cXObject *pSprite) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  undefined4 *puVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_sprites).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    puVar1 = (undefined4 *)pEVar2->data;
    while( true ) {
                    /* end of inlined section */
      if ((cXObject__179_1116 *)puVar1[2] == pSprite) {
        *puVar1 = 1;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      puVar1 = (undefined4 *)pEVar2->data;
    }
  }
  return;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}
