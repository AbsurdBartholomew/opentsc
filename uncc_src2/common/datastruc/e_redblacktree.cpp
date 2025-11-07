// STATUS: NOT STARTED

#include "e_redblacktree.h"

ERedBlackTreeNode ERedBlackTree::m_sentinel = {
	/* .pLeft = */ &ERedBlackTree::m_sentinel,
	/* .pRight = */ &ERedBlackTree::m_sentinel,
	/* .pParent = */ NULL,
	/* .pLast = */ NULL,
	/* .pNext = */ NULL,
	/* .color = */ RB_BLACK,
	/* .key = */ 0,
	/* .value = */ 0
};

ERedBlackTree* ERedBlackTree::ERedBlackTree() {
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	ERedBlackTree *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
  (this->m_list).m_pTail = (ERedBlackTreeNode *)0x0;
  this->m_pRoot = &_13ERedBlackTree_m_sentinel;
  (this->m_list).m_pHead = (ERedBlackTreeNode *)0x0;
  return this;
}

ERedBlackTree* ERedBlackTree::ERedBlackTree(ERedBlackTree &s) {
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	ERedBlackTree *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pTail = (ERedBlackTreeNode *)0x0;
  (this->m_list).m_pHead = (ERedBlackTreeNode *)0x0;
                    /* end of inlined section */
  this->m_pRoot = &_13ERedBlackTree_m_sentinel;
  SetValues__13ERedBlackTreeRC13ERedBlackTreeb(this,s,true);
  return this;
}

void ERedBlackTree::RotateLeft(ERedBlackTreeNode *x) {
	ERedBlackTreeNode *y;
	
  ERedBlackTreeNode *pEVar1;
  ERedBlackTreeNode *pEVar2;
  
  pEVar1 = x->pRight;
  x->pRight = pEVar1->pLeft;
  if (pEVar1->pLeft != &_13ERedBlackTree_m_sentinel) {
    pEVar1->pLeft->pParent = x;
  }
  if (pEVar1 == &_13ERedBlackTree_m_sentinel) {
    pEVar2 = x->pParent;
  }
  else {
    pEVar1->pParent = x->pParent;
    pEVar2 = x->pParent;
  }
  if (pEVar2 == (ERedBlackTreeNode *)0x0) {
    this->m_pRoot = pEVar1;
  }
  else if (x == pEVar2->pLeft) {
    pEVar2->pLeft = pEVar1;
  }
  else {
    pEVar2->pRight = pEVar1;
  }
  pEVar1->pLeft = x;
  if (x != &_13ERedBlackTree_m_sentinel) {
    x->pParent = pEVar1;
  }
  return;
}

void ERedBlackTree::RotateRight(ERedBlackTreeNode *x) {
	ERedBlackTreeNode *y;
	
  ERedBlackTreeNode *pEVar1;
  ERedBlackTreeNode *pEVar2;
  
  pEVar1 = x->pLeft;
  x->pLeft = pEVar1->pRight;
  if (pEVar1->pRight != &_13ERedBlackTree_m_sentinel) {
    pEVar1->pRight->pParent = x;
  }
  if (pEVar1 == &_13ERedBlackTree_m_sentinel) {
    pEVar2 = x->pParent;
  }
  else {
    pEVar1->pParent = x->pParent;
    pEVar2 = x->pParent;
  }
  if (pEVar2 == (ERedBlackTreeNode *)0x0) {
    this->m_pRoot = pEVar1;
  }
  else if (x == pEVar2->pRight) {
    pEVar2->pRight = pEVar1;
  }
  else {
    pEVar2->pLeft = pEVar1;
  }
  pEVar1->pRight = x;
  if (x != &_13ERedBlackTree_m_sentinel) {
    x->pParent = pEVar1;
  }
  return;
}

void ERedBlackTree::InsertFixup(ERedBlackTreeNode *x) {
	ERedBlackTreeNode *y;
	
  ERedBlackTreeNode *pEVar1;
  ERedBlackTreeNode *pEVar2;
  
LAB_003210b0:
  pEVar1 = this->m_pRoot;
  do {
    if (x == pEVar1) {
LAB_003210cc:
      this->m_pRoot->color = RB_BLACK;
      return;
    }
    pEVar1 = x->pParent;
    if (pEVar1->color != RB_RED) goto LAB_003210cc;
    pEVar2 = pEVar1->pParent->pLeft;
    if (pEVar1 != pEVar2) {
      if (pEVar2->color == RB_RED) {
        pEVar1->color = RB_BLACK;
        goto LAB_00321058;
      }
      if (x == pEVar1->pLeft) {
        RotateRight__13ERedBlackTreeP17ERedBlackTreeNode(this,pEVar1);
        pEVar2 = pEVar1->pParent;
        x = pEVar1;
      }
      else {
        pEVar2 = x->pParent;
      }
      pEVar2->color = RB_BLACK;
      x->pParent->pParent->color = RB_RED;
      RotateLeft__13ERedBlackTreeP17ERedBlackTreeNode(this,x->pParent->pParent);
      goto LAB_003210b0;
    }
    pEVar2 = pEVar1->pParent->pRight;
    if (pEVar2->color == RB_RED) break;
    if (x == pEVar1->pRight) {
      RotateLeft__13ERedBlackTreeP17ERedBlackTreeNode(this,pEVar1);
      pEVar2 = pEVar1->pParent;
      x = pEVar1;
    }
    else {
      pEVar2 = x->pParent;
    }
    pEVar2->color = RB_BLACK;
    x->pParent->pParent->color = RB_RED;
    RotateRight__13ERedBlackTreeP17ERedBlackTreeNode(this,x->pParent->pParent);
    pEVar1 = this->m_pRoot;
  } while( true );
  pEVar1->color = RB_BLACK;
LAB_00321058:
  pEVar2->color = RB_BLACK;
  x->pParent->pParent->color = RB_RED;
  x = x->pParent->pParent;
  goto LAB_003210b0;
}

RBValue ERedBlackTree::operator[](RBKey key) {
	RBValue value;
	
  undefined8 unaff_retaddr;
  uint value;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Find__C13ERedBlackTreeUiPUi(this,key,&value);
  return value;
}

RBValue& ERedBlackTree::operator[](RBKey key) {
	ERedBlackTreeNode *pParent;
	
  ERedBlackTreeNode *pParent;
  
  pParent = FindKeyOrParent__C13ERedBlackTreeUi(this,key);
  if ((pParent == (ERedBlackTreeNode *)0x0) || (pParent->key != key)) {
    pParent = (ERedBlackTreeNode *)
              InsertAt__13ERedBlackTreeP17ERedBlackTreeNodeUiUi(this,pParent,key,0);
  }
  return &pParent->value;
}

ERedBlackTreeNode* ERedBlackTree::FindKeyOrParent(RBKey key) {
	ERedBlackTreeNode *pCurrent;
	ERedBlackTreeNode *pParent;
	
  ERedBlackTreeNode *pEVar1;
  uint uVar2;
  ERedBlackTreeNode *pEVar3;
  
  pEVar1 = this->m_pRoot;
  pEVar3 = (ERedBlackTreeNode *)0x0;
  if (pEVar1 != &_13ERedBlackTree_m_sentinel) {
    uVar2 = pEVar1->key;
    pEVar3 = pEVar1;
    while( true ) {
      if (key == uVar2) {
        return pEVar3;
      }
      if (key < uVar2) {
        pEVar1 = pEVar3->pLeft;
      }
      else {
        pEVar1 = pEVar3->pRight;
      }
      if (pEVar1 == &_13ERedBlackTree_m_sentinel) break;
      uVar2 = pEVar1->key;
      pEVar3 = pEVar1;
    }
  }
  return pEVar3;
}

ERedBlackTreeNode* ERedBlackTree::FindParent(RBKey key) {
	ERedBlackTreeNode *pCurrent;
	ERedBlackTreeNode *pParent;
	
  ERedBlackTreeNode *pEVar1;
  ERedBlackTreeNode *pEVar2;
  
  pEVar2 = (ERedBlackTreeNode *)0x0;
  pEVar1 = this->m_pRoot;
  if (this->m_pRoot != &_13ERedBlackTree_m_sentinel) {
    do {
      pEVar2 = pEVar1;
      if (key < pEVar2->key) {
        pEVar1 = pEVar2->pLeft;
      }
      else {
        pEVar1 = pEVar2->pRight;
      }
    } while (pEVar1 != &_13ERedBlackTree_m_sentinel);
  }
  return pEVar2;
}

RBIterator ERedBlackTree::SetValue(RBKey key, RBValue value) {
	ERedBlackTreeNode *pParent;
	
  ERedBlackTreeNode *pParent;
  
  pParent = FindKeyOrParent__C13ERedBlackTreeUi(this,key);
  if ((pParent == (ERedBlackTreeNode *)0x0) || (pParent->key != key)) {
    pParent = (ERedBlackTreeNode *)
              InsertAt__13ERedBlackTreeP17ERedBlackTreeNodeUiUi(this,pParent,key,value);
  }
  else {
    pParent->value = value;
  }
  return (undefined1 *)pParent;
}

RBIterator ERedBlackTree::Insert(RBKey key, RBValue value, bool allowDuplicates) {
	ERedBlackTreeNode *pParent;
	
  ERedBlackTreeNode *pParent;
  undefined1 *puVar1;
  
  if (allowDuplicates) {
    pParent = FindParent__C13ERedBlackTreeUi(this,key);
  }
  else {
    pParent = FindKeyOrParent__C13ERedBlackTreeUi(this,key);
    if ((pParent != (ERedBlackTreeNode *)0x0) && (pParent->key == key)) {
      return (undefined1 *)0x0;
    }
  }
  puVar1 = InsertAt__13ERedBlackTreeP17ERedBlackTreeNodeUiUi(this,pParent,key,value);
  return puVar1;
}

RBIterator ERedBlackTree::InsertAt(ERedBlackTreeNode *pParent, RBKey key, RBValue value) {
	ERedBlackTreeNode *x;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	ERedBlackTreeNode *pTargetNode;
	ERedBlackTreeNode *pNewNode;
	ERedBlackTreeNode *pNode;
	ERedBlackTreeNode *pNode;
	ERedBlackTreeNode *pNode;
	ERedBlackTreeNode *pNode;
	ERedBlackTreeNode *pNode;
	void *pNode;
	ERedBlackTreeNode *pNewNode;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	void *pNode;
	ERedBlackTreeNode *pNode;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	ERedBlackTreeNode *pTargetNode;
	ERedBlackTreeNode *pNewNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	ERedBlackTreeNode *pNode;
	ERedBlackTreeNode *pNewNode;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	ERedBlackTreeNode *pNode;
	void *pNode;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	ERedBlackTreeNode *pNewNode;
	void *pNode;
	ERedBlackTreeNode *pNode;
	
  ERedBlackTreeNode *pEVar1;
  ERedBlackTreeNode *x;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
  x = (ERedBlackTreeNode *)_allocBucketAlloc__FUiUi(0x20,0x20);
                    /* end of inlined section */
  if (x == (ERedBlackTreeNode *)0x0) {
    return (undefined1 *)0x0;
  }
  x->color = RB_RED;
  x->pRight = &_13ERedBlackTree_m_sentinel;
  x->value = value;
  x->pParent = pParent;
  x->pLeft = &_13ERedBlackTree_m_sentinel;
  x->key = key;
  if (pParent == (ERedBlackTreeNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pEVar1 = (this->m_list).m_pHead;
                    /* end of inlined section */
    this->m_pRoot = x;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    x->pNext = pEVar1;
    pEVar1 = (this->m_list).m_pHead;
    if (pEVar1 == (ERedBlackTreeNode *)0x0) {
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
      if (pParent->pNext == (ERedBlackTreeNode *)0x0) {
        x->pLast = (this->m_list).m_pTail;
        pEVar1 = (this->m_list).m_pTail;
        if (pEVar1 == (ERedBlackTreeNode *)0x0) {
          (this->m_list).m_pHead = x;
        }
        else {
          pEVar1->pNext = x;
        }
        x->pNext = (ERedBlackTreeNode *)0x0;
                    /* end of inlined section */
        (this->m_list).m_pTail = x;
      }
      else {
        pParent->pNext->pLast = x;
        x->pNext = pParent->pNext;
        pParent->pNext = x;
        x->pLast = pParent;
      }
      goto LAB_0032142c;
    }
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pParent->pLeft = x;
    if (pParent->pLast != (ERedBlackTreeNode *)0x0) {
      pParent->pLast->pNext = x;
      x->pLast = pParent->pLast;
      pParent->pLast = x;
      x->pNext = pParent;
      goto LAB_0032142c;
    }
    x->pNext = (this->m_list).m_pHead;
    pEVar1 = (this->m_list).m_pHead;
    if (pEVar1 == (ERedBlackTreeNode *)0x0) {
                    /* end of inlined section */
      (this->m_list).m_pTail = x;
    }
    else {
      pEVar1->pLast = x;
    }
  }
  x->pLast = (ERedBlackTreeNode *)0x0;
  (this->m_list).m_pHead = x;
LAB_0032142c:
                    /* end of inlined section */
  InsertFixup__13ERedBlackTreeP17ERedBlackTreeNode(this,x);
  return (undefined1 *)x;
}

void ERedBlackTree::RemoveFixup(ERedBlackTreeNode *x) {
	ERedBlackTreeNode *w;
	ERedBlackTreeNode *w;
	
  ERedBlackTreeNode *pEVar1;
  ERedBlackTreeNode *pEVar2;
  
LAB_003215e8:
  while( true ) {
    if (x == this->m_pRoot) {
      x->color = RB_BLACK;
      return;
    }
    if (x->color != RB_BLACK) {
      x->color = RB_BLACK;
      return;
    }
    pEVar2 = x->pParent->pLeft;
    if (x != pEVar2) break;
    pEVar2 = x->pParent->pRight;
    if (pEVar2->color == RB_RED) {
      pEVar2->color = RB_BLACK;
      x->pParent->color = RB_RED;
      RotateLeft__13ERedBlackTreeP17ERedBlackTreeNode(this,x->pParent);
      pEVar2 = x->pParent->pRight;
      pEVar1 = pEVar2->pLeft;
    }
    else {
      pEVar1 = pEVar2->pLeft;
    }
    if (pEVar1->color == RB_BLACK) {
      if (pEVar2->pRight->color == RB_BLACK) {
        pEVar2->color = RB_RED;
        goto LAB_0032158c;
      }
      pEVar1 = x->pParent;
    }
    else if (pEVar2->pRight->color == RB_BLACK) {
      pEVar1->color = RB_BLACK;
      pEVar2->color = RB_RED;
      RotateRight__13ERedBlackTreeP17ERedBlackTreeNode(this,pEVar2);
      pEVar2 = x->pParent->pRight;
      pEVar1 = x->pParent;
    }
    else {
      pEVar1 = x->pParent;
    }
    pEVar2->color = pEVar1->color;
    x->pParent->color = RB_BLACK;
    pEVar2->pRight->color = RB_BLACK;
    RotateLeft__13ERedBlackTreeP17ERedBlackTreeNode(this,x->pParent);
    x = this->m_pRoot;
  }
  if (pEVar2->color == RB_RED) {
    pEVar2->color = RB_BLACK;
    x->pParent->color = RB_RED;
    RotateRight__13ERedBlackTreeP17ERedBlackTreeNode(this,x->pParent);
    pEVar2 = x->pParent->pLeft;
    pEVar1 = pEVar2->pRight;
  }
  else {
    pEVar1 = pEVar2->pRight;
  }
  if (pEVar1->color == RB_BLACK) {
    if (pEVar2->pLeft->color == RB_BLACK) {
      pEVar2->color = RB_RED;
LAB_0032158c:
      x = x->pParent;
      goto LAB_003215e8;
    }
    pEVar1 = x->pParent;
  }
  else if (pEVar2->pLeft->color == RB_BLACK) {
    pEVar1->color = RB_BLACK;
    pEVar2->color = RB_RED;
    RotateLeft__13ERedBlackTreeP17ERedBlackTreeNode(this,pEVar2);
    pEVar2 = x->pParent->pLeft;
    pEVar1 = x->pParent;
  }
  else {
    pEVar1 = x->pParent;
  }
  pEVar2->color = pEVar1->color;
  x->pParent->color = RB_BLACK;
  pEVar2->pLeft->color = RB_BLACK;
  RotateRight__13ERedBlackTreeP17ERedBlackTreeNode(this,x->pParent);
  x = this->m_pRoot;
  goto LAB_003215e8;
}

bool ERedBlackTree::Remove(RBKey key) {
	RBIterator i;
	
  undefined1 *i;
  
  i = Find__C13ERedBlackTreeUiPUi(this,key,(uint *)0x0);
  if (i != (undefined1 *)0x0) {
    Remove__13ERedBlackTreeP17RBIteratorPtrType(this,i);
  }
  return i != (undefined1 *)0x0;
}

void ERedBlackTree::Remove(RBIterator i) {
	ERedBlackTreeNode *z;
	ERedBlackTreeNode *y;
	ERedBlackTreeNode *x;
	bool swapY;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	ERedBlackTreeNode *pNode;
	void *pNode;
	ERedBlackTreeNode *pNode;
	void *pNode;
	void *pNode;
	ERedBlackTreeNode *pNode;
	void *pNode;
	ERedBlackTreeNode *pNode;
	ERedBlackTreeNode *pNode;
	void *p;
	
  ERedBlackTreeNode *pEVar1;
  RBNodeColor RVar2;
  ERedBlackTreeNode *pEVar3;
  ERedBlackTreeNode *pEVar4;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  if ((this->m_list).m_pHead == (ERedBlackTreeNode *)i) {
    (this->m_list).m_pHead = *(ERedBlackTreeNode **)(i + 0x10);
  }
  else {
    *(undefined4 *)(*(int *)(i + 0xc) + 0x10) = *(undefined4 *)(i + 0x10);
  }
  if ((this->m_list).m_pTail == (ERedBlackTreeNode *)i) {
    (this->m_list).m_pTail = *(ERedBlackTreeNode **)(i + 0xc);
  }
  else {
    *(undefined4 *)(*(int *)(i + 0x10) + 0xc) = *(undefined4 *)(i + 0xc);
  }
                    /* end of inlined section */
  pEVar3 = (ERedBlackTreeNode *)i;
  if ((*(ERedBlackTreeNode **)i == &_13ERedBlackTree_m_sentinel) ||
     (pEVar4 = *(ERedBlackTreeNode **)(i + 4), pEVar4 == &_13ERedBlackTree_m_sentinel)) {
LAB_00321724:
    pEVar4 = pEVar3;
    pEVar3 = pEVar4->pLeft;
    if (pEVar3 != &_13ERedBlackTree_m_sentinel) {
      pEVar1 = pEVar4->pParent;
      goto LAB_0032173c;
    }
  }
  else if (pEVar4->pLeft != &_13ERedBlackTree_m_sentinel) {
    for (pEVar3 = pEVar4->pLeft; pEVar3->pLeft != &_13ERedBlackTree_m_sentinel;
        pEVar3 = pEVar3->pLeft) {
    }
    goto LAB_00321724;
  }
  pEVar3 = pEVar4->pRight;
  pEVar1 = pEVar4->pParent;
LAB_0032173c:
  pEVar3->pParent = pEVar1;
  pEVar1 = pEVar4->pParent;
  if (pEVar1 == (ERedBlackTreeNode *)0x0) {
    this->m_pRoot = pEVar3;
  }
  else if (pEVar4 == pEVar1->pLeft) {
    pEVar1->pLeft = pEVar3;
  }
  else {
    pEVar1->pRight = pEVar3;
  }
  if (pEVar4 != (ERedBlackTreeNode *)i) {
    *(uint *)(i + 0x18) = pEVar4->key;
    *(uint *)(i + 0x1c) = pEVar4->value;
    RVar2 = pEVar4->color;
  }
  else {
    RVar2 = pEVar4->color;
  }
  if (RVar2 == RB_BLACK) {
    RemoveFixup__13ERedBlackTreeP17ERedBlackTreeNode(this,pEVar3);
  }
  if (pEVar4 != (ERedBlackTreeNode *)i) {
    pEVar4->color = *(RBNodeColor *)(i + 0x14);
    pEVar3 = *(ERedBlackTreeNode **)i;
    pEVar4->pLeft = pEVar3;
    if (pEVar3 != &_13ERedBlackTree_m_sentinel) {
      pEVar3->pParent = pEVar4;
    }
    pEVar3 = *(ERedBlackTreeNode **)(i + 4);
    pEVar4->pRight = pEVar3;
    if (pEVar3 != &_13ERedBlackTree_m_sentinel) {
      pEVar3->pParent = pEVar4;
    }
    pEVar3 = *(ERedBlackTreeNode **)(i + 8);
    pEVar4->pParent = pEVar3;
    if (pEVar3 != (ERedBlackTreeNode *)0x0) {
      if (pEVar3->pRight == (ERedBlackTreeNode *)i) {
        pEVar3->pRight = pEVar4;
      }
      else if (pEVar3->pLeft == (ERedBlackTreeNode *)i) {
        pEVar3->pLeft = pEVar4;
      }
    }
    if (this->m_pRoot == (ERedBlackTreeNode *)i) {
      this->m_pRoot = pEVar4;
    }
  }
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
  _allocBucketFree__FPvUiUi(i,0x20,0x20);
  return;
}

RBIterator ERedBlackTree::Find(RBKey key, RBValue *pOutValue) {
	ERedBlackTreeNode *pCurrent;
	
  uint uVar1;
  ERedBlackTreeNode *pEVar2;
  
  pEVar2 = this->m_pRoot;
  if (pEVar2 != &_13ERedBlackTree_m_sentinel) {
    uVar1 = pEVar2->key;
    while( true ) {
      if (key == uVar1) {
        if (pOutValue != (uint *)0x0) {
          *pOutValue = pEVar2->value;
        }
        return (undefined1 *)pEVar2;
      }
      if (key < uVar1) {
        pEVar2 = pEVar2->pLeft;
      }
      else {
        pEVar2 = pEVar2->pRight;
      }
      if (pEVar2 == &_13ERedBlackTree_m_sentinel) break;
      uVar1 = pEVar2->key;
    }
  }
  return (undefined1 *)0x0;
}

RBIterator ERedBlackTree::FindFirst(RBKey key, RBValue *pOutValue) {
	RBIterator i;
	RBIterator i;
	ERedBlackTreeNode *pNode;
	RBIterator i;
	
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = Find__C13ERedBlackTreeUiPUi(this,key,(uint *)0x0);
  puVar1 = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    do {
      puVar2 = puVar1;
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
      puVar1 = *(undefined1 **)(puVar2 + 0xc);
                    /* end of inlined section */
      if (puVar1 == (undefined1 *)0x0) break;
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    } while (*(uint *)(puVar1 + 0x18) == key);
    if (pOutValue != (uint *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
      *pOutValue = *(uint *)(puVar2 + 0x1c);
    }
  }
  return puVar2;
}

RBIterator ERedBlackTree::FindNext(RBIterator i, RBValue *pOutValue) {
	RBIterator next;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  undefined1 *puVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
  puVar1 = *(undefined1 **)(i + 0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
  if ((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + 0x18) == *(int *)(i + 0x18))) {
    if (pOutValue != (uint *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
      *pOutValue = *(uint *)(puVar1 + 0x1c);
    }
    return puVar1;
  }
  return (undefined1 *)0x0;
}

void ERedBlackTree::RemoveAll() {
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	ERedBlackTreeNode *pNode;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	ERedBlackTreeNode *pNext;
	void *pNode;
	void *p;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	ERedBlackTree *this;
	
  ERedBlackTreeNode *pEVar1;
  ERedBlackTreeNode *pAddress;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pAddress = (this->m_list).m_pHead;
  while (pAddress != (ERedBlackTreeNode *)0x0) {
    pEVar1 = pAddress->pNext;
    _allocBucketFree__FPvUiUi(pAddress,0x20,0x20);
    pAddress = pEVar1;
  }
  (this->m_list).m_pTail = (ERedBlackTreeNode *)0x0;
  (this->m_list).m_pHead = (ERedBlackTreeNode *)0x0;
  this->m_pRoot = &_13ERedBlackTree_m_sentinel;
  return;
}

void ERedBlackTree::FreeAll() {
	RBIterator i;
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	RBIterator i;
	RBIterator i;
	
  ERedBlackTreeNode *pEVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (ERedBlackTreeNode *)0x0; pEVar1 = pEVar1->pNext)
  {
                    /* end of inlined section */
    _memmanFree__FPv((void *)pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
  }
  RemoveAll__13ERedBlackTree(this);
  return;
}

int ERedBlackTree::GetSize() {
	ERedBlackTreeNode *p;
	int count;
	void *pNode;
	
  ERedBlackTreeNode *pEVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (ERedBlackTreeNode *)0x0; pEVar1 = pEVar1->pNext)
  {
    iVar2 = iVar2 + 1;
  }
                    /* end of inlined section */
  return iVar2;
}

ERedBlackTree& ERedBlackTree::operator=(ERedBlackTree &s) {
  RemoveAll__13ERedBlackTree(this);
  SetValues__13ERedBlackTreeRC13ERedBlackTreeb(this,s,true);
  return this;
}

void ERedBlackTree::SetValues(ERedBlackTree &s, bool allowDuplicates) {
	RBIterator i;
	RBIterator i;
	RBKey key;
	RBValue value;
	RBIterator i;
	RBIterator i;
	
  uint key;
  ERedBlackTreeNode *pEVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (s->m_list).m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
    key = pEVar1->key;
    while( true ) {
                    /* end of inlined section */
      if (allowDuplicates) {
        Insert__13ERedBlackTreeUiUib(this,key,pEVar1->value,true);
        pEVar1 = pEVar1->pNext;
      }
      else {
        SetValue__13ERedBlackTreeUiUi(this,key,pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
        pEVar1 = pEVar1->pNext;
      }
                    /* end of inlined section */
      if (pEVar1 == (ERedBlackTreeNode *)0x0) break;
      key = pEVar1->key;
    }
  }
  return;
}

bool ERedBlackTree::operator==(ERedBlackTree &s) {
	RBIterator ti;
	RBIterator si;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  ERedBlackTreeNode *pEVar1;
  ERedBlackTreeNode *pEVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_list).m_pHead;
  pEVar2 = (s->m_list).m_pHead;
  while( true ) {
                    /* end of inlined section */
    if (pEVar1 == (ERedBlackTreeNode *)0x0) {
                    /* end of inlined section */
      return pEVar2 == (ERedBlackTreeNode *)0x0;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    if (((pEVar2 == (ERedBlackTreeNode *)0x0) || (pEVar1->key != pEVar2->key)) ||
       (pEVar1->value != pEVar2->value)) break;
                    /* inlined from c:/eor/src2/common/datastruc/e_redblacktree.h */
    pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
    pEVar2 = pEVar2->pNext;
  }
  return false;
}
