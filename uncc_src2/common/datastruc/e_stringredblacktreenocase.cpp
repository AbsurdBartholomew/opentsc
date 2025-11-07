// STATUS: NOT STARTED

#include "e_stringredblacktreenocase.h"

EStringRedBlackTreeNoCaseNoCaseSentinel EStringRedBlackTreeNoCase::m_sentinel = {
	/* .pLeft = */ &EStringRedBlackTreeNoCase::m_sentinel,
	/* .pRight = */ &EStringRedBlackTreeNoCase::m_sentinel,
	/* .pParent = */ NULL,
	/* .pLast = */ NULL,
	/* .pNext = */ NULL,
	/* .color = */ SRBNC_BLACK,
	/* .value = */ 0,
	/* .key = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0
	}
};

EStringRedBlackTreeNoCase* EStringRedBlackTreeNoCase::EStringRedBlackTreeNoCase() {
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	EStringRedBlackTreeNoCase *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
  (this->m_list).m_pTail = (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
  this->m_pRoot = (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel;
  (this->m_list).m_pHead = (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
  return this;
}

EStringRedBlackTreeNoCase* EStringRedBlackTreeNoCase::EStringRedBlackTreeNoCase(EStringRedBlackTreeNoCase &s) {
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	EStringRedBlackTreeNoCase *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pTail = (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
  (this->m_list).m_pHead = (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
                    /* end of inlined section */
  this->m_pRoot = (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel;
  SetValues__25EStringRedBlackTreeNoCaseRC25EStringRedBlackTreeNoCaseb(this,s,true);
  return this;
}

void EStringRedBlackTreeNoCase::RotateLeft(EStringRedBlackTreeNoCaseNoCaseNode *x) {
	EStringRedBlackTreeNoCaseNoCaseNode *y;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar2;
  
  pEVar1 = x->pRight;
  x->pRight = pEVar1->pLeft;
  if (pEVar1->pLeft !=
      (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
    pEVar1->pLeft->pParent = x;
  }
  if (pEVar1 == (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
    pEVar2 = x->pParent;
  }
  else {
    pEVar1->pParent = x->pParent;
    pEVar2 = x->pParent;
  }
  if (pEVar2 == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
    this->m_pRoot = pEVar1;
  }
  else if (x == pEVar2->pLeft) {
    pEVar2->pLeft = pEVar1;
  }
  else {
    pEVar2->pRight = pEVar1;
  }
  pEVar1->pLeft = x;
  if (x != (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
    x->pParent = pEVar1;
  }
  return;
}

void EStringRedBlackTreeNoCase::RotateRight(EStringRedBlackTreeNoCaseNoCaseNode *x) {
	EStringRedBlackTreeNoCaseNoCaseNode *y;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar2;
  
  pEVar1 = x->pLeft;
  x->pLeft = pEVar1->pRight;
  if (pEVar1->pRight !=
      (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
    pEVar1->pRight->pParent = x;
  }
  if (pEVar1 == (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
    pEVar2 = x->pParent;
  }
  else {
    pEVar1->pParent = x->pParent;
    pEVar2 = x->pParent;
  }
  if (pEVar2 == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
    this->m_pRoot = pEVar1;
  }
  else if (x == pEVar2->pRight) {
    pEVar2->pRight = pEVar1;
  }
  else {
    pEVar2->pLeft = pEVar1;
  }
  pEVar1->pRight = x;
  if (x != (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
    x->pParent = pEVar1;
  }
  return;
}

void EStringRedBlackTreeNoCase::InsertFixup(EStringRedBlackTreeNoCaseNoCaseNode *x) {
	EStringRedBlackTreeNoCaseNoCaseNode *y;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar2;
  
LAB_0032f5d8:
  pEVar1 = this->m_pRoot;
  do {
    if (x == pEVar1) {
LAB_0032f5f4:
      this->m_pRoot->color = SRBNC_BLACK;
      return;
    }
    pEVar1 = x->pParent;
    if (pEVar1->color != SRBNC_RED) goto LAB_0032f5f4;
    pEVar2 = pEVar1->pParent->pLeft;
    if (pEVar1 != pEVar2) {
      if (pEVar2->color == SRBNC_RED) {
        pEVar1->color = SRBNC_BLACK;
        goto LAB_0032f580;
      }
      if (x == pEVar1->pLeft) {
        RotateRight__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode(this,pEVar1);
        pEVar2 = pEVar1->pParent;
        x = pEVar1;
      }
      else {
        pEVar2 = x->pParent;
      }
      pEVar2->color = SRBNC_BLACK;
      x->pParent->pParent->color = SRBNC_RED;
      RotateLeft__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode
                (this,x->pParent->pParent);
      goto LAB_0032f5d8;
    }
    pEVar2 = pEVar1->pParent->pRight;
    if (pEVar2->color == SRBNC_RED) break;
    if (x == pEVar1->pRight) {
      RotateLeft__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode(this,pEVar1);
      pEVar2 = pEVar1->pParent;
      x = pEVar1;
    }
    else {
      pEVar2 = x->pParent;
    }
    pEVar2->color = SRBNC_BLACK;
    x->pParent->pParent->color = SRBNC_RED;
    RotateRight__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode
              (this,x->pParent->pParent);
    pEVar1 = this->m_pRoot;
  } while( true );
  pEVar1->color = SRBNC_BLACK;
LAB_0032f580:
  pEVar2->color = SRBNC_BLACK;
  x->pParent->pParent->color = SRBNC_RED;
  x = x->pParent->pParent;
  goto LAB_0032f5d8;
}

SRBNCValue EStringRedBlackTreeNoCase::operator[](char *key) {
	SRBNCValue value;
	
  undefined8 unaff_retaddr;
  uint value;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Find__C25EStringRedBlackTreeNoCasePCcPUi(this,key,&value);
  return value;
}

SRBNCValue& EStringRedBlackTreeNoCase::operator[](char *key) {
	EStringRedBlackTreeNoCaseNoCaseNode *pParent;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pParent;
  int iVar1;
  
  pParent = FindKeyOrParent__C25EStringRedBlackTreeNoCasePCc(this,key);
  if ((pParent == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) ||
     (iVar1 = CompareNoCase__C7EStringPCc(&pParent->key,key), iVar1 != 0)) {
    pParent = (EStringRedBlackTreeNoCaseNoCaseNode *)
              InsertAt__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNodePCcUi
                        (this,pParent,key,0);
  }
  return &pParent->value;
}

EStringRedBlackTreeNoCaseNoCaseNode* EStringRedBlackTreeNoCase::FindKeyOrParent(char *key) {
	EStringRedBlackTreeNoCaseNoCaseNode *pCurrent;
	EStringRedBlackTreeNoCaseNoCaseNode *pParent;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  int iVar2;
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar3;
  
  pEVar3 = (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
  pEVar1 = this->m_pRoot;
  if (this->m_pRoot !=
      (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
    do {
      pEVar3 = pEVar1;
      iVar2 = CompareNoCase__C7EStringPCc(&pEVar3->key,key);
      if (iVar2 == 0) {
        return pEVar3;
      }
      iVar2 = CompareNoCase__C7EStringPCc(&pEVar3->key,key);
      if (iVar2 < 1) {
        pEVar1 = pEVar3->pRight;
      }
      else {
        pEVar1 = pEVar3->pLeft;
      }
    } while (pEVar1 != (EStringRedBlackTreeNoCaseNoCaseNode *)
                       &_25EStringRedBlackTreeNoCase_m_sentinel);
  }
  return pEVar3;
}

EStringRedBlackTreeNoCaseNoCaseNode* EStringRedBlackTreeNoCase::FindParent(char *key) {
	EStringRedBlackTreeNoCaseNoCaseNode *pCurrent;
	EStringRedBlackTreeNoCaseNoCaseNode *pParent;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  int iVar2;
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar3;
  
  pEVar3 = (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
  pEVar1 = this->m_pRoot;
  if (this->m_pRoot !=
      (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
    do {
      pEVar3 = pEVar1;
      iVar2 = CompareNoCase__C7EStringPCc(&pEVar3->key,key);
      if (iVar2 < 1) {
        pEVar1 = pEVar3->pRight;
      }
      else {
        pEVar1 = pEVar3->pLeft;
      }
    } while (pEVar1 != (EStringRedBlackTreeNoCaseNoCaseNode *)
                       &_25EStringRedBlackTreeNoCase_m_sentinel);
  }
  return pEVar3;
}

SRBNCIterator EStringRedBlackTreeNoCase::SetValue(char *key, SRBNCValue value) {
	EStringRedBlackTreeNoCaseNoCaseNode *pParent;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pParent;
  int iVar1;
  
  pParent = FindKeyOrParent__C25EStringRedBlackTreeNoCasePCc(this,key);
  if ((pParent == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) ||
     (iVar1 = CompareNoCase__C7EStringPCc(&pParent->key,key), iVar1 != 0)) {
    pParent = (EStringRedBlackTreeNoCaseNoCaseNode *)
              InsertAt__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNodePCcUi
                        (this,pParent,key,value);
  }
  else {
    pParent->value = value;
  }
  return (undefined1 *)pParent;
}

SRBNCIterator EStringRedBlackTreeNoCase::Insert(char *key, SRBNCValue value, bool allowDuplicates) {
	EStringRedBlackTreeNoCaseNoCaseNode *pParent;
	char *szOther;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pParent;
  int iVar1;
  undefined1 *puVar2;
  
  if (allowDuplicates) {
    pParent = FindParent__C25EStringRedBlackTreeNoCasePCc(this,key);
  }
  else {
    pParent = FindKeyOrParent__C25EStringRedBlackTreeNoCasePCc(this,key);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
    if ((pParent != (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) &&
       (iVar1 = Compare__C7EStringPCc(&pParent->key,key), iVar1 == 0)) {
      return (undefined1 *)0x0;
    }
  }
  puVar2 = InsertAt__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNodePCcUi
                     (this,pParent,key,value);
  return puVar2;
}

SRBNCIterator EStringRedBlackTreeNoCase::InsertAt(EStringRedBlackTreeNoCaseNoCaseNode *pParent, char *key, SRBNCValue value) {
	EString *this;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	EStringRedBlackTreeNoCaseNoCaseNode *pTargetNode;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	EStringRedBlackTreeNoCaseNoCaseNode *pTargetNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  EStringRedBlackTreeNoCaseNoCaseNode *x;
  int iVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
  x = (EStringRedBlackTreeNoCaseNoCaseNode *)_allocBucketAlloc__FUiUi(0x20,0x20);
  SetToNull__7EString(&x->key);
                    /* end of inlined section */
  if (x == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
    return (undefined1 *)0x0;
  }
  x->pParent = pParent;
  x->pRight = (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel;
  x->color = SRBNC_RED;
  x->pLeft = (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel;
  __as__7EStringPCc(&x->key,key);
  x->value = value;
  if (pParent == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pEVar1 = (this->m_list).m_pHead;
                    /* end of inlined section */
    this->m_pRoot = x;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    x->pNext = pEVar1;
    pEVar1 = (this->m_list).m_pHead;
    if (pEVar1 == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
      (this->m_list).m_pTail = x;
    }
    else {
      pEVar1->pLast = x;
    }
  }
  else {
                    /* end of inlined section */
    iVar2 = CompareNoCase__C7EStringPCc(&pParent->key,(x->key).m_p);
    if (iVar2 < 1) {
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
      pParent->pRight = x;
      if (pParent->pNext == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
        x->pLast = (this->m_list).m_pTail;
        pEVar1 = (this->m_list).m_pTail;
        if (pEVar1 == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
          (this->m_list).m_pHead = x;
        }
        else {
          pEVar1->pNext = x;
        }
        x->pNext = (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
                    /* end of inlined section */
        (this->m_list).m_pTail = x;
      }
      else {
        pParent->pNext->pLast = x;
        x->pNext = pParent->pNext;
        pParent->pNext = x;
        x->pLast = pParent;
      }
      goto LAB_0032fa30;
    }
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pParent->pLeft = x;
    if (pParent->pLast != (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
      pParent->pLast->pNext = x;
      x->pLast = pParent->pLast;
      pParent->pLast = x;
      x->pNext = pParent;
      goto LAB_0032fa30;
    }
    x->pNext = (this->m_list).m_pHead;
    pEVar1 = (this->m_list).m_pHead;
    if (pEVar1 == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
                    /* end of inlined section */
      (this->m_list).m_pTail = x;
    }
    else {
      pEVar1->pLast = x;
    }
  }
  x->pLast = (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
  (this->m_list).m_pHead = x;
LAB_0032fa30:
                    /* end of inlined section */
  InsertFixup__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode(this,x);
  return (undefined1 *)x;
}

void EStringRedBlackTreeNoCase::RemoveFixup(EStringRedBlackTreeNoCaseNoCaseNode *x) {
	EStringRedBlackTreeNoCaseNoCaseNode *w;
	EStringRedBlackTreeNoCaseNoCaseNode *w;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar2;
  
LAB_0032fbf0:
  while( true ) {
    if (x == this->m_pRoot) {
      x->color = SRBNC_BLACK;
      return;
    }
    if (x->color != SRBNC_BLACK) {
      x->color = SRBNC_BLACK;
      return;
    }
    pEVar2 = x->pParent->pLeft;
    if (x != pEVar2) break;
    pEVar2 = x->pParent->pRight;
    if (pEVar2->color == SRBNC_RED) {
      pEVar2->color = SRBNC_BLACK;
      x->pParent->color = SRBNC_RED;
      RotateLeft__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode(this,x->pParent)
      ;
      pEVar2 = x->pParent->pRight;
      pEVar1 = pEVar2->pLeft;
    }
    else {
      pEVar1 = pEVar2->pLeft;
    }
    if (pEVar1->color == SRBNC_BLACK) {
      if (pEVar2->pRight->color == SRBNC_BLACK) {
        pEVar2->color = SRBNC_RED;
        goto LAB_0032fb94;
      }
      pEVar1 = x->pParent;
    }
    else if (pEVar2->pRight->color == SRBNC_BLACK) {
      pEVar1->color = SRBNC_BLACK;
      pEVar2->color = SRBNC_RED;
      RotateRight__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode(this,pEVar2);
      pEVar2 = x->pParent->pRight;
      pEVar1 = x->pParent;
    }
    else {
      pEVar1 = x->pParent;
    }
    pEVar2->color = pEVar1->color;
    x->pParent->color = SRBNC_BLACK;
    pEVar2->pRight->color = SRBNC_BLACK;
    RotateLeft__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode(this,x->pParent);
    x = this->m_pRoot;
  }
  if (pEVar2->color == SRBNC_RED) {
    pEVar2->color = SRBNC_BLACK;
    x->pParent->color = SRBNC_RED;
    RotateRight__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode(this,x->pParent);
    pEVar2 = x->pParent->pLeft;
    pEVar1 = pEVar2->pRight;
  }
  else {
    pEVar1 = pEVar2->pRight;
  }
  if (pEVar1->color == SRBNC_BLACK) {
    if (pEVar2->pLeft->color == SRBNC_BLACK) {
      pEVar2->color = SRBNC_RED;
LAB_0032fb94:
      x = x->pParent;
      goto LAB_0032fbf0;
    }
    pEVar1 = x->pParent;
  }
  else if (pEVar2->pLeft->color == SRBNC_BLACK) {
    pEVar1->color = SRBNC_BLACK;
    pEVar2->color = SRBNC_RED;
    RotateLeft__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode(this,pEVar2);
    pEVar2 = x->pParent->pLeft;
    pEVar1 = x->pParent;
  }
  else {
    pEVar1 = x->pParent;
  }
  pEVar2->color = pEVar1->color;
  x->pParent->color = SRBNC_BLACK;
  pEVar2->pLeft->color = SRBNC_BLACK;
  RotateRight__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode(this,x->pParent);
  x = this->m_pRoot;
  goto LAB_0032fbf0;
}

bool EStringRedBlackTreeNoCase::Remove(char *key) {
	SRBNCIterator i;
	
  undefined1 *i;
  
  i = Find__C25EStringRedBlackTreeNoCasePCcPUi(this,key,(uint *)0x0);
  if (i != (undefined1 *)0x0) {
    Remove__25EStringRedBlackTreeNoCaseP20SRBNCIteratorPtrType(this,i);
  }
  return i != (undefined1 *)0x0;
}

void EStringRedBlackTreeNoCase::Remove(SRBNCIterator i) {
	EStringRedBlackTreeNoCaseNoCaseNode *z;
	EStringRedBlackTreeNoCaseNoCaseNode *y;
	EStringRedBlackTreeNoCaseNoCaseNode *x;
	bool swapY;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	void *pNode;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	void *pNode;
	void *pNode;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	void *pNode;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	EStringRedBlackTreeNoCaseNoCaseNode *this;
	void *p;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar2;
  SRBNCNodeColor SVar3;
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar4;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  if ((this->m_list).m_pHead == (EStringRedBlackTreeNoCaseNoCaseNode *)i) {
    (this->m_list).m_pHead = *(EStringRedBlackTreeNoCaseNoCaseNode **)(i + 0x10);
  }
  else {
    *(undefined4 *)(*(int *)(i + 0xc) + 0x10) = *(undefined4 *)(i + 0x10);
  }
  if ((this->m_list).m_pTail == (EStringRedBlackTreeNoCaseNoCaseNode *)i) {
    (this->m_list).m_pTail = *(EStringRedBlackTreeNoCaseNoCaseNode **)(i + 0xc);
  }
  else {
    *(undefined4 *)(*(int *)(i + 0x10) + 0xc) = *(undefined4 *)(i + 0xc);
  }
                    /* end of inlined section */
  pEVar1 = (EStringRedBlackTreeNoCaseNoCaseNode *)i;
  if ((*(EStringRedBlackTreeNoCaseNoCaseSentinel **)i == &_25EStringRedBlackTreeNoCase_m_sentinel)
     || (pEVar4 = *(EStringRedBlackTreeNoCaseNoCaseNode **)(i + 4),
        pEVar4 == (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel))
  {
LAB_0032fd2c:
    pEVar4 = pEVar1;
    pEVar1 = pEVar4->pLeft;
    if (pEVar1 != (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
      pEVar2 = pEVar4->pParent;
      goto LAB_0032fd44;
    }
  }
  else if (pEVar4->pLeft !=
           (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
    for (pEVar1 = pEVar4->pLeft;
        pEVar1->pLeft !=
        (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel;
        pEVar1 = pEVar1->pLeft) {
    }
    goto LAB_0032fd2c;
  }
  pEVar1 = pEVar4->pRight;
  pEVar2 = pEVar4->pParent;
LAB_0032fd44:
  pEVar1->pParent = pEVar2;
  pEVar2 = pEVar4->pParent;
  if (pEVar2 == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
    this->m_pRoot = pEVar1;
  }
  else if (pEVar4 == pEVar2->pLeft) {
    pEVar2->pLeft = pEVar1;
  }
  else {
    pEVar2->pRight = pEVar1;
  }
  if (pEVar4 != (EStringRedBlackTreeNoCaseNoCaseNode *)i) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    __as__7EStringPCc((EString *)(i + 0x1c),(pEVar4->key).m_p);
                    /* end of inlined section */
    *(uint *)(i + 0x18) = pEVar4->value;
    SVar3 = pEVar4->color;
  }
  else {
    SVar3 = pEVar4->color;
  }
  if (SVar3 == SRBNC_BLACK) {
    RemoveFixup__25EStringRedBlackTreeNoCaseP35EStringRedBlackTreeNoCaseNoCaseNode(this,pEVar1);
  }
  if (pEVar4 != (EStringRedBlackTreeNoCaseNoCaseNode *)i) {
    pEVar4->color = *(SRBNCNodeColor *)(i + 0x14);
    pEVar1 = *(EStringRedBlackTreeNoCaseNoCaseNode **)i;
    pEVar4->pLeft = pEVar1;
    if (pEVar1 != (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
      pEVar1->pParent = pEVar4;
    }
    pEVar1 = *(EStringRedBlackTreeNoCaseNoCaseNode **)(i + 4);
    pEVar4->pRight = pEVar1;
    if (pEVar1 != (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
      pEVar1->pParent = pEVar4;
    }
    pEVar1 = *(EStringRedBlackTreeNoCaseNoCaseNode **)(i + 8);
    pEVar4->pParent = pEVar1;
    if (pEVar1 != (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
      if (pEVar1->pRight == (EStringRedBlackTreeNoCaseNoCaseNode *)i) {
        pEVar1->pRight = pEVar4;
      }
      else if (pEVar1->pLeft == (EStringRedBlackTreeNoCaseNoCaseNode *)i) {
        pEVar1->pLeft = pEVar4;
      }
    }
    if (this->m_pRoot == (EStringRedBlackTreeNoCaseNoCaseNode *)i) {
      this->m_pRoot = pEVar4;
    }
  }
  if (i != (undefined1 *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    Deallocate__7EStringPc((EString *)(i + 0x1c),*(char **)(i + 0x1c));
    _allocBucketFree__FPvUiUi(i,0x20,0x20);
                    /* end of inlined section */
  }
  return;
}

SRBNCIterator EStringRedBlackTreeNoCase::Find(char *key, SRBNCValue *pOutValue) {
	EStringRedBlackTreeNoCaseNoCaseNode *pCurrent;
	
  int iVar1;
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar2;
  
  pEVar2 = this->m_pRoot;
  if (pEVar2 != (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel) {
    do {
      iVar1 = CompareNoCase__C7EStringPCc(&pEVar2->key,key);
      if (iVar1 == 0) {
        if (pOutValue == (uint *)0x0) {
          return (undefined1 *)pEVar2;
        }
        *pOutValue = pEVar2->value;
        return (undefined1 *)pEVar2;
      }
      iVar1 = CompareNoCase__C7EStringPCc(&pEVar2->key,key);
      if (iVar1 < 1) {
        pEVar2 = pEVar2->pRight;
      }
      else {
        pEVar2 = pEVar2->pLeft;
      }
    } while (pEVar2 != (EStringRedBlackTreeNoCaseNoCaseNode *)
                       &_25EStringRedBlackTreeNoCase_m_sentinel);
  }
  return (undefined1 *)0x0;
}

SRBNCIterator EStringRedBlackTreeNoCase::FindFirst(char *key, SRBNCValue *pOutValue) {
	SRBNCIterator i;
	SRBNCIterator i;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	SRBNCIterator i;
	
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = Find__C25EStringRedBlackTreeNoCasePCcPUi(this,key,(uint *)0x0);
  puVar1 = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    do {
      puVar2 = puVar1;
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
      puVar1 = *(undefined1 **)(puVar2 + 0xc);
                    /* end of inlined section */
      if (puVar1 == (undefined1 *)0x0) break;
                    /* end of inlined section */
      iVar3 = CompareNoCase__C7EStringPCc((EString *)(puVar1 + 0x1c),key);
    } while (iVar3 == 0);
    if (pOutValue != (uint *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
                    /* end of inlined section */
      *pOutValue = *(uint *)(puVar2 + 0x18);
    }
  }
  return puVar2;
}

SRBNCIterator EStringRedBlackTreeNoCase::FindNext(SRBNCIterator i, SRBNCValue *pOutValue) {
	SRBNCIterator next;
	SRBNCIterator i;
	void *pNode;
	SRBNCIterator i;
	SRBNCIterator i;
	SRBNCIterator i;
	
  int iVar1;
  undefined1 *puVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
  puVar2 = *(undefined1 **)(i + 0x10);
                    /* end of inlined section */
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
                    /* end of inlined section */
    iVar1 = CompareNoCase__C7EStringPCc((EString *)(puVar2 + 0x1c),*(char **)(i + 0x1c));
    if (iVar1 == 0) {
      if (pOutValue != (uint *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
                    /* end of inlined section */
        *pOutValue = *(uint *)(puVar2 + 0x18);
      }
    }
    else {
      puVar2 = (undefined1 *)0x0;
    }
  }
  return puVar2;
}

void EStringRedBlackTreeNoCase::RemoveAll() {
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	EStringRedBlackTreeNoCaseNoCaseNode *pNode;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	EStringRedBlackTreeNoCaseNoCaseNode *pNext;
	void *pNode;
	EStringRedBlackTreeNoCaseNoCaseNode *this;
	void *p;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	EStringRedBlackTreeNoCase *this;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  EStringRedBlackTreeNoCaseNoCaseNode *pAddress;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_list).m_pHead;
  while (pAddress = pEVar1, pAddress != (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
    pEVar1 = pAddress->pNext;
    if (pAddress != (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
      Deallocate__7EStringPc(&pAddress->key,(pAddress->key).m_p);
      _allocBucketFree__FPvUiUi(pAddress,0x20,0x20);
    }
  }
  (this->m_list).m_pTail = (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
  (this->m_list).m_pHead = (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
  this->m_pRoot = (EStringRedBlackTreeNoCaseNoCaseNode *)&_25EStringRedBlackTreeNoCase_m_sentinel;
  return;
}

void EStringRedBlackTreeNoCase::FreeAll() {
	SRBNCIterator i;
	EStringRedBlackTreeNoCase *this;
	TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> *this;
	SRBNCIterator i;
	SRBNCIterator i;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
      pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
    _memmanFree__FPv((void *)pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
                    /* end of inlined section */
  }
  RemoveAll__25EStringRedBlackTreeNoCase(this);
  return;
}

int EStringRedBlackTreeNoCase::GetSize() {
	EStringRedBlackTreeNoCaseNoCaseNode *p;
	int count;
	void *pNode;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
      pEVar1 = pEVar1->pNext) {
    iVar2 = iVar2 + 1;
  }
                    /* end of inlined section */
  return iVar2;
}

void EStringRedBlackTreeNoCase::SetValues(EStringRedBlackTreeNoCase &s, bool allowDuplicates) {
	SRBNCIterator i;
	SRBNCIterator i;
	SRBNCValue value;
	SRBNCIterator i;
	SRBNCIterator i;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (s->m_list).m_pHead;
                    /* end of inlined section */
  while (pEVar1 != (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
                    /* end of inlined section */
    if (allowDuplicates) {
                    /* end of inlined section */
      Insert__25EStringRedBlackTreeNoCasePCcUib(this,(pEVar1->key).m_p,pEVar1->value,true);
      pEVar1 = pEVar1->pNext;
    }
    else {
                    /* end of inlined section */
      SetValue__25EStringRedBlackTreeNoCasePCcUi(this,(pEVar1->key).m_p,pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
      pEVar1 = pEVar1->pNext;
    }
  }
  return;
}

EStringRedBlackTreeNoCase& EStringRedBlackTreeNoCase::operator=(EStringRedBlackTreeNoCase &s) {
  RemoveAll__25EStringRedBlackTreeNoCase(this);
  SetValues__25EStringRedBlackTreeNoCaseRC25EStringRedBlackTreeNoCaseb(this,s,true);
  return this;
}

bool EStringRedBlackTreeNoCase::operator==(EStringRedBlackTreeNoCase &s) {
	SRBNCIterator ti;
	SRBNCIterator si;
	SRBNCIterator i;
	SRBNCIterator i;
	SRBNCIterator i;
	SRBNCIterator i;
	SRBNCIterator i;
	SRBNCIterator i;
	SRBNCIterator i;
	
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar1;
  EStringRedBlackTreeNoCaseNoCaseNode *pEVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_list).m_pHead;
  pEVar2 = (s->m_list).m_pHead;
  while( true ) {
                    /* end of inlined section */
    if (pEVar1 == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
                    /* end of inlined section */
      return pEVar2 == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0;
    }
                    /* end of inlined section */
    if (pEVar2 == (EStringRedBlackTreeNoCaseNoCaseNode *)0x0) {
      return false;
    }
                    /* end of inlined section */
    iVar3 = CompareNoCase__C7EStringPCc(&pEVar1->key,(pEVar2->key).m_p);
    if (iVar3 != 0) {
      return false;
    }
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
                    /* end of inlined section */
    if (pEVar1->value != pEVar2->value) break;
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktreenocase.h */
    pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
    pEVar2 = pEVar2->pNext;
  }
  return false;
}
