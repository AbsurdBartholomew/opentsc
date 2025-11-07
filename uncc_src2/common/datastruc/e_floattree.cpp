// STATUS: NOT STARTED

#include "e_floattree.h"

EFloatTreeSentinel EFloatTree::m_sentinel = {
	/* .pLeft = */ &EFloatTree::m_sentinel,
	/* .pRight = */ &EFloatTree::m_sentinel,
	/* .pParent = */ NULL,
	/* .pLast = */ NULL,
	/* .pNext = */ NULL,
	/* .color = */ FT_BLACK,
	/* .value = */ 0,
	/* .key = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0
	}
};

EFloatTree* EFloatTree::EFloatTree() {
	TLinkedList<EFloatTreeNode,12,16> *this;
	TLinkedList<EFloatTreeNode,12,16> *this;
	TLinkedList<EFloatTreeNode,12,16> *this;
	EFloatTree *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_floattree.h */
  (this->m_list).m_pTail = (EFloatTreeNode *)0x0;
  this->m_pRoot = (EFloatTreeNode *)&_10EFloatTree_m_sentinel;
  (this->m_list).m_pHead = (EFloatTreeNode *)0x0;
  return this;
}

EFloatTree* EFloatTree::EFloatTree(EFloatTree &s) {
	TLinkedList<EFloatTreeNode,12,16> *this;
	TLinkedList<EFloatTreeNode,12,16> *this;
	TLinkedList<EFloatTreeNode,12,16> *this;
	EFloatTree *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pTail = (EFloatTreeNode *)0x0;
  (this->m_list).m_pHead = (EFloatTreeNode *)0x0;
                    /* end of inlined section */
  this->m_pRoot = (EFloatTreeNode *)&_10EFloatTree_m_sentinel;
  SetValues__10EFloatTreeRC10EFloatTreeb(this,s,true);
  return this;
}

void EFloatTree::RotateLeft(EFloatTreeNode *x) {
	EFloatTreeNode *y;
	
  EFloatTreeSentinel *pEVar1;
  EFloatTreeNode *pEVar2;
  
  pEVar1 = (EFloatTreeSentinel *)x->pRight;
  x->pRight = pEVar1->pLeft;
  if ((EFloatTreeSentinel *)pEVar1->pLeft != &_10EFloatTree_m_sentinel) {
    ((EFloatTreeSentinel *)pEVar1->pLeft)->pParent = x;
  }
  if (pEVar1 == &_10EFloatTree_m_sentinel) {
    pEVar2 = x->pParent;
  }
  else {
    pEVar1->pParent = x->pParent;
    pEVar2 = x->pParent;
  }
  if (pEVar2 == (EFloatTreeNode *)0x0) {
    this->m_pRoot = (EFloatTreeNode *)pEVar1;
  }
  else if (x == pEVar2->pLeft) {
    pEVar2->pLeft = (EFloatTreeNode *)pEVar1;
  }
  else {
    pEVar2->pRight = (EFloatTreeNode *)pEVar1;
  }
  pEVar1->pLeft = x;
  if ((EFloatTreeSentinel *)x != &_10EFloatTree_m_sentinel) {
    x->pParent = (EFloatTreeNode *)pEVar1;
  }
  return;
}

void EFloatTree::RotateRight(EFloatTreeNode *x) {
	EFloatTreeNode *y;
	
  EFloatTreeSentinel *pEVar1;
  EFloatTreeNode *pEVar2;
  
  pEVar1 = (EFloatTreeSentinel *)x->pLeft;
  x->pLeft = pEVar1->pRight;
  if ((EFloatTreeSentinel *)pEVar1->pRight != &_10EFloatTree_m_sentinel) {
    ((EFloatTreeSentinel *)pEVar1->pRight)->pParent = x;
  }
  if (pEVar1 == &_10EFloatTree_m_sentinel) {
    pEVar2 = x->pParent;
  }
  else {
    pEVar1->pParent = x->pParent;
    pEVar2 = x->pParent;
  }
  if (pEVar2 == (EFloatTreeNode *)0x0) {
    this->m_pRoot = (EFloatTreeNode *)pEVar1;
  }
  else if (x == pEVar2->pRight) {
    pEVar2->pRight = (EFloatTreeNode *)pEVar1;
  }
  else {
    pEVar2->pLeft = (EFloatTreeNode *)pEVar1;
  }
  pEVar1->pRight = x;
  if ((EFloatTreeSentinel *)x != &_10EFloatTree_m_sentinel) {
    x->pParent = (EFloatTreeNode *)pEVar1;
  }
  return;
}

void EFloatTree::InsertFixup(EFloatTreeNode *x) {
	EFloatTreeNode *y;
	
  EFloatTreeNode *pEVar1;
  EFloatTreeNode *pEVar2;
  
LAB_00328538:
  pEVar1 = this->m_pRoot;
  do {
    if (x == pEVar1) {
LAB_00328554:
      this->m_pRoot->color = FT_BLACK;
      return;
    }
    pEVar1 = x->pParent;
    if (pEVar1->color != FT_RED) goto LAB_00328554;
    pEVar2 = pEVar1->pParent->pLeft;
    if (pEVar1 != pEVar2) {
      if (pEVar2->color == FT_RED) {
        pEVar1->color = FT_BLACK;
        goto LAB_003284e0;
      }
      if (x == pEVar1->pLeft) {
        RotateRight__10EFloatTreeP14EFloatTreeNode(this,pEVar1);
        pEVar2 = pEVar1->pParent;
        x = pEVar1;
      }
      else {
        pEVar2 = x->pParent;
      }
      pEVar2->color = FT_BLACK;
      x->pParent->pParent->color = FT_RED;
      RotateLeft__10EFloatTreeP14EFloatTreeNode(this,x->pParent->pParent);
      goto LAB_00328538;
    }
    pEVar2 = pEVar1->pParent->pRight;
    if (pEVar2->color == FT_RED) break;
    if (x == pEVar1->pRight) {
      RotateLeft__10EFloatTreeP14EFloatTreeNode(this,pEVar1);
      pEVar2 = pEVar1->pParent;
      x = pEVar1;
    }
    else {
      pEVar2 = x->pParent;
    }
    pEVar2->color = FT_BLACK;
    x->pParent->pParent->color = FT_RED;
    RotateRight__10EFloatTreeP14EFloatTreeNode(this,x->pParent->pParent);
    pEVar1 = this->m_pRoot;
  } while( true );
  pEVar1->color = FT_BLACK;
LAB_003284e0:
  pEVar2->color = FT_BLACK;
  x->pParent->pParent->color = FT_RED;
  x = x->pParent->pParent;
  goto LAB_00328538;
}

FTValue EFloatTree::operator[](float key) {
	FTValue value;
	
  undefined8 unaff_retaddr;
  uint value;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Find__C10EFloatTreefPUi(this,key,&value);
  return value;
}

FTValue& EFloatTree::operator[](float key) {
	EFloatTreeNode *pParent;
	
  EFloatTreeNode *pParent;
  
  pParent = FindKeyOrParent__C10EFloatTreef(this,key);
  if ((pParent == (EFloatTreeNode *)0x0) || (pParent->key != key)) {
    pParent = (EFloatTreeNode *)InsertAt__10EFloatTreeP14EFloatTreeNodefUi(this,pParent,key,0);
  }
  return &pParent->value;
}

EFloatTreeNode* EFloatTree::FindKeyOrParent(float key) {
	EFloatTreeNode *pCurrent;
	EFloatTreeNode *pParent;
	
  EFloatTreeSentinel *pEVar1;
  EFloatTreeSentinel *pEVar2;
  float fVar3;
  
  pEVar1 = (EFloatTreeSentinel *)this->m_pRoot;
  pEVar2 = (EFloatTreeSentinel *)0x0;
  if (pEVar1 != &_10EFloatTree_m_sentinel) {
    fVar3 = *(float *)pEVar1->key;
    pEVar2 = pEVar1;
    while( true ) {
      if (key == fVar3) {
        return (EFloatTreeNode *)pEVar2;
      }
      if (key < fVar3) {
        pEVar1 = (EFloatTreeSentinel *)pEVar2->pLeft;
      }
      else {
        pEVar1 = (EFloatTreeSentinel *)pEVar2->pRight;
      }
      if (pEVar1 == &_10EFloatTree_m_sentinel) break;
      fVar3 = *(float *)pEVar1->key;
      pEVar2 = pEVar1;
    }
  }
  return (EFloatTreeNode *)pEVar2;
}

EFloatTreeNode* EFloatTree::FindParent(float key) {
	EFloatTreeNode *pCurrent;
	EFloatTreeNode *pParent;
	
  EFloatTreeSentinel *pEVar1;
  EFloatTreeSentinel *pEVar2;
  
  pEVar2 = (EFloatTreeSentinel *)0x0;
  pEVar1 = (EFloatTreeSentinel *)this->m_pRoot;
  if ((EFloatTreeSentinel *)this->m_pRoot != &_10EFloatTree_m_sentinel) {
    do {
      pEVar2 = pEVar1;
      if (key < *(float *)pEVar2->key) {
        pEVar1 = (EFloatTreeSentinel *)pEVar2->pLeft;
      }
      else {
        pEVar1 = (EFloatTreeSentinel *)pEVar2->pRight;
      }
    } while (pEVar1 != &_10EFloatTree_m_sentinel);
  }
  return (EFloatTreeNode *)pEVar2;
}

FTIterator EFloatTree::SetValue(float key, FTValue value) {
	EFloatTreeNode *pParent;
	
  EFloatTreeNode *pParent;
  
  pParent = FindKeyOrParent__C10EFloatTreef(this,key);
  if ((pParent == (EFloatTreeNode *)0x0) || (pParent->key != key)) {
    pParent = (EFloatTreeNode *)InsertAt__10EFloatTreeP14EFloatTreeNodefUi(this,pParent,key,value);
  }
  else {
    pParent->value = value;
  }
  return (undefined1 *)pParent;
}

FTIterator EFloatTree::Insert(float key, FTValue value, bool allowDuplicates) {
	EFloatTreeNode *pParent;
	
  EFloatTreeNode *pParent;
  undefined1 *puVar1;
  
  if (allowDuplicates) {
    pParent = FindParent__C10EFloatTreef(this,key);
  }
  else {
    pParent = FindKeyOrParent__C10EFloatTreef(this,key);
    if ((pParent != (EFloatTreeNode *)0x0) && (pParent->key == key)) {
      return (undefined1 *)0x0;
    }
  }
  puVar1 = InsertAt__10EFloatTreeP14EFloatTreeNodefUi(this,pParent,key,value);
  return puVar1;
}

FTIterator EFloatTree::InsertAt(EFloatTreeNode *pParent, float key, FTValue value) {
	EFloatTreeNode *x;
	TLinkedList<EFloatTreeNode,12,16> *this;
	EFloatTreeNode *pTargetNode;
	EFloatTreeNode *pNewNode;
	EFloatTreeNode *pNode;
	EFloatTreeNode *pNode;
	EFloatTreeNode *pNode;
	EFloatTreeNode *pNode;
	EFloatTreeNode *pNode;
	void *pNode;
	EFloatTreeNode *pNewNode;
	TLinkedList<EFloatTreeNode,12,16> *this;
	void *pNode;
	EFloatTreeNode *pNode;
	TLinkedList<EFloatTreeNode,12,16> *this;
	EFloatTreeNode *pTargetNode;
	EFloatTreeNode *pNewNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	EFloatTreeNode *pNode;
	EFloatTreeNode *pNewNode;
	TLinkedList<EFloatTreeNode,12,16> *this;
	EFloatTreeNode *pNode;
	void *pNode;
	TLinkedList<EFloatTreeNode,12,16> *this;
	EFloatTreeNode *pNewNode;
	void *pNode;
	EFloatTreeNode *pNode;
	
  EFloatTreeNode *pEVar1;
  EFloatTreeNode *x;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_floattree.h */
  x = (EFloatTreeNode *)_allocBucketAlloc__FUiUi(0x20,0x20);
                    /* end of inlined section */
  if (x == (EFloatTreeNode *)0x0) {
    return (undefined1 *)0x0;
  }
  x->color = FT_RED;
  x->pRight = (EFloatTreeNode *)&_10EFloatTree_m_sentinel;
  x->value = value;
  x->pParent = pParent;
  x->pLeft = (EFloatTreeNode *)&_10EFloatTree_m_sentinel;
  x->key = key;
  if (pParent == (EFloatTreeNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pEVar1 = (this->m_list).m_pHead;
                    /* end of inlined section */
    this->m_pRoot = x;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    x->pNext = pEVar1;
    pEVar1 = (this->m_list).m_pHead;
    if (pEVar1 == (EFloatTreeNode *)0x0) {
      (this->m_list).m_pTail = x;
    }
    else {
      pEVar1->pLast = x;
    }
  }
  else {
    if (pParent->key <= key) {
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
      pParent->pRight = x;
      if (pParent->pNext == (EFloatTreeNode *)0x0) {
        x->pLast = (this->m_list).m_pTail;
        pEVar1 = (this->m_list).m_pTail;
        if (pEVar1 == (EFloatTreeNode *)0x0) {
          (this->m_list).m_pHead = x;
        }
        else {
          pEVar1->pNext = x;
        }
        x->pNext = (EFloatTreeNode *)0x0;
                    /* end of inlined section */
        (this->m_list).m_pTail = x;
      }
      else {
        pParent->pNext->pLast = x;
        x->pNext = pParent->pNext;
        pParent->pNext = x;
        x->pLast = pParent;
      }
      goto LAB_003288d0;
    }
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pParent->pLeft = x;
    if (pParent->pLast != (EFloatTreeNode *)0x0) {
      pParent->pLast->pNext = x;
      x->pLast = pParent->pLast;
      pParent->pLast = x;
      x->pNext = pParent;
      goto LAB_003288d0;
    }
    x->pNext = (this->m_list).m_pHead;
    pEVar1 = (this->m_list).m_pHead;
    if (pEVar1 == (EFloatTreeNode *)0x0) {
                    /* end of inlined section */
      (this->m_list).m_pTail = x;
    }
    else {
      pEVar1->pLast = x;
    }
  }
  x->pLast = (EFloatTreeNode *)0x0;
  (this->m_list).m_pHead = x;
LAB_003288d0:
                    /* end of inlined section */
  InsertFixup__10EFloatTreeP14EFloatTreeNode(this,x);
  return (undefined1 *)x;
}

void EFloatTree::RemoveFixup(EFloatTreeNode *x) {
	EFloatTreeNode *w;
	EFloatTreeNode *w;
	
  EFloatTreeNode *pEVar1;
  EFloatTreeNode *pEVar2;
  
LAB_00328a88:
  while( true ) {
    if (x == this->m_pRoot) {
      x->color = FT_BLACK;
      return;
    }
    if (x->color != FT_BLACK) {
      x->color = FT_BLACK;
      return;
    }
    pEVar2 = x->pParent->pLeft;
    if (x != pEVar2) break;
    pEVar2 = x->pParent->pRight;
    if (pEVar2->color == FT_RED) {
      pEVar2->color = FT_BLACK;
      x->pParent->color = FT_RED;
      RotateLeft__10EFloatTreeP14EFloatTreeNode(this,x->pParent);
      pEVar2 = x->pParent->pRight;
      pEVar1 = pEVar2->pLeft;
    }
    else {
      pEVar1 = pEVar2->pLeft;
    }
    if (pEVar1->color == FT_BLACK) {
      if (pEVar2->pRight->color == FT_BLACK) {
        pEVar2->color = FT_RED;
        goto LAB_00328a2c;
      }
      pEVar1 = x->pParent;
    }
    else if (pEVar2->pRight->color == FT_BLACK) {
      pEVar1->color = FT_BLACK;
      pEVar2->color = FT_RED;
      RotateRight__10EFloatTreeP14EFloatTreeNode(this,pEVar2);
      pEVar2 = x->pParent->pRight;
      pEVar1 = x->pParent;
    }
    else {
      pEVar1 = x->pParent;
    }
    pEVar2->color = pEVar1->color;
    x->pParent->color = FT_BLACK;
    pEVar2->pRight->color = FT_BLACK;
    RotateLeft__10EFloatTreeP14EFloatTreeNode(this,x->pParent);
    x = this->m_pRoot;
  }
  if (pEVar2->color == FT_RED) {
    pEVar2->color = FT_BLACK;
    x->pParent->color = FT_RED;
    RotateRight__10EFloatTreeP14EFloatTreeNode(this,x->pParent);
    pEVar2 = x->pParent->pLeft;
    pEVar1 = pEVar2->pRight;
  }
  else {
    pEVar1 = pEVar2->pRight;
  }
  if (pEVar1->color == FT_BLACK) {
    if (pEVar2->pLeft->color == FT_BLACK) {
      pEVar2->color = FT_RED;
LAB_00328a2c:
      x = x->pParent;
      goto LAB_00328a88;
    }
    pEVar1 = x->pParent;
  }
  else if (pEVar2->pLeft->color == FT_BLACK) {
    pEVar1->color = FT_BLACK;
    pEVar2->color = FT_RED;
    RotateLeft__10EFloatTreeP14EFloatTreeNode(this,pEVar2);
    pEVar2 = x->pParent->pLeft;
    pEVar1 = x->pParent;
  }
  else {
    pEVar1 = x->pParent;
  }
  pEVar2->color = pEVar1->color;
  x->pParent->color = FT_BLACK;
  pEVar2->pLeft->color = FT_BLACK;
  RotateRight__10EFloatTreeP14EFloatTreeNode(this,x->pParent);
  x = this->m_pRoot;
  goto LAB_00328a88;
}

bool EFloatTree::Remove(float key) {
	FTIterator i;
	
  undefined1 *i;
  
  i = Find__C10EFloatTreefPUi(this,key,(uint *)0x0);
  if (i != (undefined1 *)0x0) {
    Remove__10EFloatTreeP17FTIteratorPtrType(this,i);
  }
  return i != (undefined1 *)0x0;
}

void EFloatTree::Remove(FTIterator i) {
	EFloatTreeNode *z;
	EFloatTreeNode *y;
	EFloatTreeNode *x;
	bool swapY;
	TLinkedList<EFloatTreeNode,12,16> *this;
	EFloatTreeNode *pNode;
	void *pNode;
	EFloatTreeNode *pNode;
	void *pNode;
	void *pNode;
	EFloatTreeNode *pNode;
	void *pNode;
	EFloatTreeNode *pNode;
	EFloatTreeNode *pNode;
	void *p;
	
  EFloatTreeNode *pEVar1;
  FTNodeColor FVar2;
  EFloatTreeSentinel *pEVar3;
  EFloatTreeSentinel *pEVar4;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  if ((this->m_list).m_pHead == (EFloatTreeNode *)i) {
    (this->m_list).m_pHead = *(EFloatTreeNode **)(i + 0x10);
  }
  else {
    *(undefined4 *)(*(int *)(i + 0xc) + 0x10) = *(undefined4 *)(i + 0x10);
  }
  if ((this->m_list).m_pTail == (EFloatTreeNode *)i) {
    (this->m_list).m_pTail = *(EFloatTreeNode **)(i + 0xc);
  }
  else {
    *(undefined4 *)(*(int *)(i + 0x10) + 0xc) = *(undefined4 *)(i + 0xc);
  }
                    /* end of inlined section */
  pEVar3 = (EFloatTreeSentinel *)i;
  if ((*(EFloatTreeSentinel **)i == &_10EFloatTree_m_sentinel) ||
     (pEVar4 = *(EFloatTreeSentinel **)(i + 4), pEVar4 == &_10EFloatTree_m_sentinel)) {
LAB_00328bc4:
    pEVar4 = pEVar3;
    pEVar3 = (EFloatTreeSentinel *)pEVar4->pLeft;
    if (pEVar3 != &_10EFloatTree_m_sentinel) {
      pEVar1 = pEVar4->pParent;
      goto LAB_00328bdc;
    }
  }
  else if ((EFloatTreeSentinel *)pEVar4->pLeft != &_10EFloatTree_m_sentinel) {
    for (pEVar3 = (EFloatTreeSentinel *)pEVar4->pLeft;
        (EFloatTreeSentinel *)pEVar3->pLeft != &_10EFloatTree_m_sentinel;
        pEVar3 = (EFloatTreeSentinel *)pEVar3->pLeft) {
    }
    goto LAB_00328bc4;
  }
  pEVar3 = (EFloatTreeSentinel *)pEVar4->pRight;
  pEVar1 = pEVar4->pParent;
LAB_00328bdc:
  pEVar3->pParent = pEVar1;
  pEVar1 = pEVar4->pParent;
  if (pEVar1 == (EFloatTreeNode *)0x0) {
    this->m_pRoot = (EFloatTreeNode *)pEVar3;
  }
  else if (pEVar4 == (EFloatTreeSentinel *)pEVar1->pLeft) {
    pEVar1->pLeft = (EFloatTreeNode *)pEVar3;
  }
  else {
    pEVar1->pRight = (EFloatTreeNode *)pEVar3;
  }
  if (pEVar4 != (EFloatTreeSentinel *)i) {
    *(undefined4 *)(i + 0x1c) = *(undefined4 *)pEVar4->key;
    *(uint *)(i + 0x18) = pEVar4->value;
    FVar2 = pEVar4->color;
  }
  else {
    FVar2 = pEVar4->color;
  }
  if (FVar2 == FT_BLACK) {
    RemoveFixup__10EFloatTreeP14EFloatTreeNode(this,(EFloatTreeNode *)pEVar3);
  }
  if (pEVar4 != (EFloatTreeSentinel *)i) {
    pEVar4->color = *(FTNodeColor *)(i + 0x14);
    pEVar3 = *(EFloatTreeSentinel **)i;
    pEVar4->pLeft = (EFloatTreeNode *)pEVar3;
    if (pEVar3 != &_10EFloatTree_m_sentinel) {
      pEVar3->pParent = (EFloatTreeNode *)pEVar4;
    }
    pEVar3 = *(EFloatTreeSentinel **)(i + 4);
    pEVar4->pRight = (EFloatTreeNode *)pEVar3;
    if (pEVar3 != &_10EFloatTree_m_sentinel) {
      pEVar3->pParent = (EFloatTreeNode *)pEVar4;
    }
    pEVar1 = *(EFloatTreeNode **)(i + 8);
    pEVar4->pParent = pEVar1;
    if (pEVar1 != (EFloatTreeNode *)0x0) {
      if (pEVar1->pRight == (EFloatTreeNode *)i) {
        pEVar1->pRight = (EFloatTreeNode *)pEVar4;
      }
      else if (pEVar1->pLeft == (EFloatTreeNode *)i) {
        pEVar1->pLeft = (EFloatTreeNode *)pEVar4;
      }
    }
    if (this->m_pRoot == (EFloatTreeNode *)i) {
      this->m_pRoot = (EFloatTreeNode *)pEVar4;
    }
  }
                    /* inlined from c:/eor/src2/common/datastruc/e_floattree.h */
  _allocBucketFree__FPvUiUi(i,0x20,0x20);
  return;
}

FTIterator EFloatTree::Find(float key, FTValue *pOutValue) {
	EFloatTreeNode *pCurrent;
	
  EFloatTreeSentinel *pEVar1;
  float fVar2;
  
  pEVar1 = (EFloatTreeSentinel *)this->m_pRoot;
  if (pEVar1 != &_10EFloatTree_m_sentinel) {
    fVar2 = *(float *)pEVar1->key;
    while( true ) {
      if (key == fVar2) {
        if (pOutValue != (uint *)0x0) {
          *pOutValue = pEVar1->value;
        }
        return (undefined1 *)pEVar1;
      }
      if (key < fVar2) {
        pEVar1 = (EFloatTreeSentinel *)pEVar1->pLeft;
      }
      else {
        pEVar1 = (EFloatTreeSentinel *)pEVar1->pRight;
      }
      if (pEVar1 == &_10EFloatTree_m_sentinel) break;
      fVar2 = *(float *)pEVar1->key;
    }
  }
  return (undefined1 *)0x0;
}

void EFloatTree::RemoveAll() {
	TLinkedList<EFloatTreeNode,12,16> *this;
	EFloatTreeNode *pNode;
	TLinkedList<EFloatTreeNode,12,16> *this;
	EFloatTreeNode *pNext;
	void *pNode;
	void *p;
	TLinkedList<EFloatTreeNode,12,16> *this;
	EFloatTree *this;
	
  EFloatTreeNode *pEVar1;
  EFloatTreeNode *pAddress;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pAddress = (this->m_list).m_pHead;
  while (pAddress != (EFloatTreeNode *)0x0) {
    pEVar1 = pAddress->pNext;
    _allocBucketFree__FPvUiUi(pAddress,0x20,0x20);
    pAddress = pEVar1;
  }
  (this->m_list).m_pTail = (EFloatTreeNode *)0x0;
  (this->m_list).m_pHead = (EFloatTreeNode *)0x0;
  this->m_pRoot = (EFloatTreeNode *)&_10EFloatTree_m_sentinel;
  return;
}

int EFloatTree::GetSize() {
	EFloatTreeNode *p;
	int count;
	void *pNode;
	
  EFloatTreeNode *pEVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (EFloatTreeNode *)0x0; pEVar1 = pEVar1->pNext) {
    iVar2 = iVar2 + 1;
  }
                    /* end of inlined section */
  return iVar2;
}

void EFloatTree::SetValues(EFloatTree &s, bool allowDuplicates) {
	FTIterator i;
	FTIterator i;
	float key;
	FTValue value;
	FTIterator i;
	FTIterator i;
	
  EFloatTreeNode *pEVar1;
  float key;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (s->m_list).m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (EFloatTreeNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_floattree.h */
    key = pEVar1->key;
    while( true ) {
                    /* end of inlined section */
      if (allowDuplicates) {
        Insert__10EFloatTreefUib(this,key,pEVar1->value,true);
        pEVar1 = pEVar1->pNext;
      }
      else {
        SetValue__10EFloatTreefUi(this,key,pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_floattree.h */
        pEVar1 = pEVar1->pNext;
      }
                    /* end of inlined section */
      if (pEVar1 == (EFloatTreeNode *)0x0) break;
      key = pEVar1->key;
    }
  }
  return;
}

EFloatTree& EFloatTree::operator=(EFloatTree &s) {
  RemoveAll__10EFloatTree(this);
  SetValues__10EFloatTreeRC10EFloatTreeb(this,s,true);
  return this;
}

bool EFloatTree::operator==(EFloatTree &s) {
	FTIterator ti;
	FTIterator si;
	FTIterator i;
	FTIterator i;
	FTIterator i;
	FTIterator i;
	FTIterator i;
	FTIterator i;
	FTIterator i;
	
  EFloatTreeNode *pEVar1;
  EFloatTreeNode *pEVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_list).m_pHead;
  pEVar2 = (s->m_list).m_pHead;
  while( true ) {
                    /* end of inlined section */
    if (pEVar1 == (EFloatTreeNode *)0x0) {
                    /* end of inlined section */
      return pEVar2 == (EFloatTreeNode *)0x0;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
    if (((pEVar2 == (EFloatTreeNode *)0x0) || (pEVar1->key != pEVar2->key)) ||
       (pEVar1->value != pEVar2->value)) break;
                    /* inlined from c:/eor/src2/common/datastruc/e_floattree.h */
    pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
    pEVar2 = pEVar2->pNext;
  }
  return false;
}
