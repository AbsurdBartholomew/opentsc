// STATUS: NOT STARTED

#include "e_stringredblacktree.h"

EStringRedBlackTreeSentinel EStringRedBlackTree::m_sentinel = {
	/* .pLeft = */ &EStringRedBlackTree::m_sentinel,
	/* .pRight = */ &EStringRedBlackTree::m_sentinel,
	/* .pParent = */ NULL,
	/* .pLast = */ NULL,
	/* .pNext = */ NULL,
	/* .color = */ SRB_BLACK,
	/* .value = */ 0,
	/* .key = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0
	}
};

EStringRedBlackTree* EStringRedBlackTree::EStringRedBlackTree() {
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	EStringRedBlackTree *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
  (this->m_list).m_pTail = (EStringRedBlackTreeNode *)0x0;
  this->m_pRoot = (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel;
  (this->m_list).m_pHead = (EStringRedBlackTreeNode *)0x0;
  return this;
}

EStringRedBlackTree* EStringRedBlackTree::EStringRedBlackTree(EStringRedBlackTree &s) {
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	EStringRedBlackTree *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pTail = (EStringRedBlackTreeNode *)0x0;
  (this->m_list).m_pHead = (EStringRedBlackTreeNode *)0x0;
                    /* end of inlined section */
  this->m_pRoot = (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel;
  SetValues__19EStringRedBlackTreeRC19EStringRedBlackTreeb(this,s,true);
  return this;
}

void EStringRedBlackTree::RotateLeft(EStringRedBlackTreeNode *x) {
	EStringRedBlackTreeNode *y;
	
  EStringRedBlackTreeNode *pEVar1;
  EStringRedBlackTreeNode *pEVar2;
  
  pEVar1 = x->pRight;
  x->pRight = pEVar1->pLeft;
  if (pEVar1->pLeft != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
    pEVar1->pLeft->pParent = x;
  }
  if (pEVar1 == (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
    pEVar2 = x->pParent;
  }
  else {
    pEVar1->pParent = x->pParent;
    pEVar2 = x->pParent;
  }
  if (pEVar2 == (EStringRedBlackTreeNode *)0x0) {
    this->m_pRoot = pEVar1;
  }
  else if (x == pEVar2->pLeft) {
    pEVar2->pLeft = pEVar1;
  }
  else {
    pEVar2->pRight = pEVar1;
  }
  pEVar1->pLeft = x;
  if (x != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
    x->pParent = pEVar1;
  }
  return;
}

void EStringRedBlackTree::RotateRight(EStringRedBlackTreeNode *x) {
	EStringRedBlackTreeNode *y;
	
  EStringRedBlackTreeNode *pEVar1;
  EStringRedBlackTreeNode *pEVar2;
  
  pEVar1 = x->pLeft;
  x->pLeft = pEVar1->pRight;
  if (pEVar1->pRight != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
    pEVar1->pRight->pParent = x;
  }
  if (pEVar1 == (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
    pEVar2 = x->pParent;
  }
  else {
    pEVar1->pParent = x->pParent;
    pEVar2 = x->pParent;
  }
  if (pEVar2 == (EStringRedBlackTreeNode *)0x0) {
    this->m_pRoot = pEVar1;
  }
  else if (x == pEVar2->pRight) {
    pEVar2->pRight = pEVar1;
  }
  else {
    pEVar2->pLeft = pEVar1;
  }
  pEVar1->pRight = x;
  if (x != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
    x->pParent = pEVar1;
  }
  return;
}

void EStringRedBlackTree::InsertFixup(EStringRedBlackTreeNode *x) {
	EStringRedBlackTreeNode *y;
	
  EStringRedBlackTreeNode *pEVar1;
  EStringRedBlackTreeNode *pEVar2;
  
LAB_00330450:
  pEVar1 = this->m_pRoot;
  do {
    if (x == pEVar1) {
LAB_0033046c:
      this->m_pRoot->color = SRB_BLACK;
      return;
    }
    pEVar1 = x->pParent;
    if (pEVar1->color != SRB_RED) goto LAB_0033046c;
    pEVar2 = pEVar1->pParent->pLeft;
    if (pEVar1 != pEVar2) {
      if (pEVar2->color == SRB_RED) {
        pEVar1->color = SRB_BLACK;
        goto LAB_003303f8;
      }
      if (x == pEVar1->pLeft) {
        RotateRight__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,pEVar1);
        pEVar2 = pEVar1->pParent;
        x = pEVar1;
      }
      else {
        pEVar2 = x->pParent;
      }
      pEVar2->color = SRB_BLACK;
      x->pParent->pParent->color = SRB_RED;
      RotateLeft__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,x->pParent->pParent);
      goto LAB_00330450;
    }
    pEVar2 = pEVar1->pParent->pRight;
    if (pEVar2->color == SRB_RED) break;
    if (x == pEVar1->pRight) {
      RotateLeft__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,pEVar1);
      pEVar2 = pEVar1->pParent;
      x = pEVar1;
    }
    else {
      pEVar2 = x->pParent;
    }
    pEVar2->color = SRB_BLACK;
    x->pParent->pParent->color = SRB_RED;
    RotateRight__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,x->pParent->pParent);
    pEVar1 = this->m_pRoot;
  } while( true );
  pEVar1->color = SRB_BLACK;
LAB_003303f8:
  pEVar2->color = SRB_BLACK;
  x->pParent->pParent->color = SRB_RED;
  x = x->pParent->pParent;
  goto LAB_00330450;
}

SRBValue EStringRedBlackTree::operator[](char *key) {
	SRBValue value;
	
  undefined8 unaff_retaddr;
  uint value;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Find__C19EStringRedBlackTreePCcPUi(this,key,&value);
  return value;
}

SRBValue& EStringRedBlackTree::operator[](char *key) {
	EStringRedBlackTreeNode *pParent;
	char *szOther;
	
  EStringRedBlackTreeNode *pParent;
  int iVar1;
  
  pParent = FindKeyOrParent__C19EStringRedBlackTreePCc(this,key);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  if ((pParent == (EStringRedBlackTreeNode *)0x0) ||
     (iVar1 = Compare__C7EStringPCc(&pParent->key,key), iVar1 != 0)) {
    pParent = (EStringRedBlackTreeNode *)
              InsertAt__19EStringRedBlackTreeP23EStringRedBlackTreeNodePCcUi(this,pParent,key,0);
  }
  return &pParent->value;
}

EStringRedBlackTreeNode* EStringRedBlackTree::FindKeyOrParent(char *key) {
	EStringRedBlackTreeNode *pCurrent;
	EStringRedBlackTreeNode *pParent;
	char *sz;
	EString &s;
	char *sz;
	
  EStringRedBlackTreeNode *pEVar1;
  int iVar2;
  EStringRedBlackTreeNode *pEVar3;
  
  pEVar3 = (EStringRedBlackTreeNode *)0x0;
  pEVar1 = this->m_pRoot;
  if (this->m_pRoot != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
    do {
      pEVar3 = pEVar1;
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
      iVar2 = Compare__C7EStringPCc(&pEVar3->key,key);
                    /* end of inlined section */
      if (iVar2 == 0) {
        return pEVar3;
      }
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
      iVar2 = Compare__C7EStringPCc(&pEVar3->key,key);
                    /* end of inlined section */
      if (iVar2 < 1) {
        pEVar1 = pEVar3->pRight;
      }
      else {
        pEVar1 = pEVar3->pLeft;
      }
    } while (pEVar1 != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel);
  }
  return pEVar3;
}

EStringRedBlackTreeNode* EStringRedBlackTree::FindParent(char *key) {
	EStringRedBlackTreeNode *pCurrent;
	EStringRedBlackTreeNode *pParent;
	char *sz;
	
  EStringRedBlackTreeNode *pEVar1;
  int iVar2;
  EStringRedBlackTreeNode *pEVar3;
  
  pEVar3 = (EStringRedBlackTreeNode *)0x0;
  pEVar1 = this->m_pRoot;
  if (this->m_pRoot != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
    do {
      pEVar3 = pEVar1;
      iVar2 = Compare__C7EStringPCc(&pEVar3->key,key);
                    /* end of inlined section */
      if (iVar2 < 1) {
        pEVar1 = pEVar3->pRight;
      }
      else {
        pEVar1 = pEVar3->pLeft;
      }
    } while (pEVar1 != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel);
  }
  return pEVar3;
}

SRBIterator EStringRedBlackTree::SetValue(char *key, SRBValue value) {
	EStringRedBlackTreeNode *pParent;
	char *szOther;
	
  EStringRedBlackTreeNode *pParent;
  int iVar1;
  
  pParent = FindKeyOrParent__C19EStringRedBlackTreePCc(this,key);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  if ((pParent == (EStringRedBlackTreeNode *)0x0) ||
     (iVar1 = Compare__C7EStringPCc(&pParent->key,key), iVar1 != 0)) {
    pParent = (EStringRedBlackTreeNode *)
              InsertAt__19EStringRedBlackTreeP23EStringRedBlackTreeNodePCcUi(this,pParent,key,value)
    ;
  }
  else {
    pParent->value = value;
  }
  return (undefined1 *)pParent;
}

SRBIterator EStringRedBlackTree::Insert(char *key, SRBValue value, bool allowDuplicates) {
	EStringRedBlackTreeNode *pParent;
	char *szOther;
	
  EStringRedBlackTreeNode *pParent;
  int iVar1;
  undefined1 *puVar2;
  
  if (allowDuplicates) {
    pParent = FindParent__C19EStringRedBlackTreePCc(this,key);
  }
  else {
    pParent = FindKeyOrParent__C19EStringRedBlackTreePCc(this,key);
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
    if ((pParent != (EStringRedBlackTreeNode *)0x0) &&
       (iVar1 = Compare__C7EStringPCc(&pParent->key,key), iVar1 == 0)) {
      return (undefined1 *)0x0;
    }
  }
  puVar2 = InsertAt__19EStringRedBlackTreeP23EStringRedBlackTreeNodePCcUi(this,pParent,key,value);
  return puVar2;
}

SRBIterator EStringRedBlackTree::InsertAt(EStringRedBlackTreeNode *pParent, char *key, SRBValue value) {
	EString *this;
	char *sz;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	EStringRedBlackTreeNode *pTargetNode;
	EStringRedBlackTreeNode *pNode;
	EStringRedBlackTreeNode *pNode;
	EStringRedBlackTreeNode *pNode;
	EStringRedBlackTreeNode *pNode;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	EStringRedBlackTreeNode *pTargetNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	
  EStringRedBlackTreeNode *pEVar1;
  EStringRedBlackTreeNode *x;
  int iVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
  x = (EStringRedBlackTreeNode *)_allocBucketAlloc__FUiUi(0x20,0x20);
  SetToNull__7EString(&x->key);
                    /* end of inlined section */
  if (x == (EStringRedBlackTreeNode *)0x0) {
    return (undefined1 *)0x0;
  }
  x->pParent = pParent;
  x->pRight = (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel;
  x->color = SRB_RED;
  x->pLeft = (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel;
  __as__7EStringPCc(&x->key,key);
  x->value = value;
  if (pParent == (EStringRedBlackTreeNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pEVar1 = (this->m_list).m_pHead;
                    /* end of inlined section */
    this->m_pRoot = x;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    x->pNext = pEVar1;
    pEVar1 = (this->m_list).m_pHead;
    if (pEVar1 == (EStringRedBlackTreeNode *)0x0) {
      (this->m_list).m_pTail = x;
    }
    else {
      pEVar1->pLast = x;
    }
  }
  else {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    iVar2 = Compare__C7EStringPCc(&pParent->key,key);
                    /* end of inlined section */
    if (iVar2 < 1) {
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
      pParent->pRight = x;
      if (pParent->pNext == (EStringRedBlackTreeNode *)0x0) {
        x->pLast = (this->m_list).m_pTail;
        pEVar1 = (this->m_list).m_pTail;
        if (pEVar1 == (EStringRedBlackTreeNode *)0x0) {
          (this->m_list).m_pHead = x;
        }
        else {
          pEVar1->pNext = x;
        }
        x->pNext = (EStringRedBlackTreeNode *)0x0;
                    /* end of inlined section */
        (this->m_list).m_pTail = x;
      }
      else {
        pParent->pNext->pLast = x;
        x->pNext = pParent->pNext;
        pParent->pNext = x;
        x->pLast = pParent;
      }
      goto LAB_003308a8;
    }
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pParent->pLeft = x;
    if (pParent->pLast != (EStringRedBlackTreeNode *)0x0) {
      pParent->pLast->pNext = x;
      x->pLast = pParent->pLast;
      pParent->pLast = x;
      x->pNext = pParent;
      goto LAB_003308a8;
    }
    x->pNext = (this->m_list).m_pHead;
    pEVar1 = (this->m_list).m_pHead;
    if (pEVar1 == (EStringRedBlackTreeNode *)0x0) {
                    /* end of inlined section */
      (this->m_list).m_pTail = x;
    }
    else {
      pEVar1->pLast = x;
    }
  }
  x->pLast = (EStringRedBlackTreeNode *)0x0;
  (this->m_list).m_pHead = x;
LAB_003308a8:
                    /* end of inlined section */
  InsertFixup__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,x);
  return (undefined1 *)x;
}

void EStringRedBlackTree::RemoveFixup(EStringRedBlackTreeNode *x) {
	EStringRedBlackTreeNode *w;
	EStringRedBlackTreeNode *w;
	
  EStringRedBlackTreeNode *pEVar1;
  EStringRedBlackTreeNode *pEVar2;
  
LAB_00330a68:
  while( true ) {
    if (x == this->m_pRoot) {
      x->color = SRB_BLACK;
      return;
    }
    if (x->color != SRB_BLACK) {
      x->color = SRB_BLACK;
      return;
    }
    pEVar2 = x->pParent->pLeft;
    if (x != pEVar2) break;
    pEVar2 = x->pParent->pRight;
    if (pEVar2->color == SRB_RED) {
      pEVar2->color = SRB_BLACK;
      x->pParent->color = SRB_RED;
      RotateLeft__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,x->pParent);
      pEVar2 = x->pParent->pRight;
      pEVar1 = pEVar2->pLeft;
    }
    else {
      pEVar1 = pEVar2->pLeft;
    }
    if (pEVar1->color == SRB_BLACK) {
      if (pEVar2->pRight->color == SRB_BLACK) {
        pEVar2->color = SRB_RED;
        goto LAB_00330a0c;
      }
      pEVar1 = x->pParent;
    }
    else if (pEVar2->pRight->color == SRB_BLACK) {
      pEVar1->color = SRB_BLACK;
      pEVar2->color = SRB_RED;
      RotateRight__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,pEVar2);
      pEVar2 = x->pParent->pRight;
      pEVar1 = x->pParent;
    }
    else {
      pEVar1 = x->pParent;
    }
    pEVar2->color = pEVar1->color;
    x->pParent->color = SRB_BLACK;
    pEVar2->pRight->color = SRB_BLACK;
    RotateLeft__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,x->pParent);
    x = this->m_pRoot;
  }
  if (pEVar2->color == SRB_RED) {
    pEVar2->color = SRB_BLACK;
    x->pParent->color = SRB_RED;
    RotateRight__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,x->pParent);
    pEVar2 = x->pParent->pLeft;
    pEVar1 = pEVar2->pRight;
  }
  else {
    pEVar1 = pEVar2->pRight;
  }
  if (pEVar1->color == SRB_BLACK) {
    if (pEVar2->pLeft->color == SRB_BLACK) {
      pEVar2->color = SRB_RED;
LAB_00330a0c:
      x = x->pParent;
      goto LAB_00330a68;
    }
    pEVar1 = x->pParent;
  }
  else if (pEVar2->pLeft->color == SRB_BLACK) {
    pEVar1->color = SRB_BLACK;
    pEVar2->color = SRB_RED;
    RotateLeft__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,pEVar2);
    pEVar2 = x->pParent->pLeft;
    pEVar1 = x->pParent;
  }
  else {
    pEVar1 = x->pParent;
  }
  pEVar2->color = pEVar1->color;
  x->pParent->color = SRB_BLACK;
  pEVar2->pLeft->color = SRB_BLACK;
  RotateRight__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,x->pParent);
  x = this->m_pRoot;
  goto LAB_00330a68;
}

bool EStringRedBlackTree::Remove(char *key) {
	SRBIterator i;
	
  undefined1 *i;
  
  i = Find__C19EStringRedBlackTreePCcPUi(this,key,(uint *)0x0);
  if (i != (undefined1 *)0x0) {
    Remove__19EStringRedBlackTreeP18SRBIteratorPtrType(this,i);
  }
  return i != (undefined1 *)0x0;
}

void EStringRedBlackTree::Remove(SRBIterator i) {
	EStringRedBlackTreeNode *z;
	EStringRedBlackTreeNode *y;
	EStringRedBlackTreeNode *x;
	bool swapY;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	EStringRedBlackTreeNode *pNode;
	void *pNode;
	EStringRedBlackTreeNode *pNode;
	void *pNode;
	void *pNode;
	EStringRedBlackTreeNode *pNode;
	void *pNode;
	EStringRedBlackTreeNode *pNode;
	EStringRedBlackTreeNode *pNode;
	EStringRedBlackTreeNode *this;
	void *p;
	
  EStringRedBlackTreeNode *pEVar1;
  EStringRedBlackTreeNode *pEVar2;
  SRBNodeColor SVar3;
  EStringRedBlackTreeNode *pEVar4;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  if ((this->m_list).m_pHead == (EStringRedBlackTreeNode *)i) {
    (this->m_list).m_pHead = *(EStringRedBlackTreeNode **)(i + 0x10);
  }
  else {
    *(undefined4 *)(*(int *)(i + 0xc) + 0x10) = *(undefined4 *)(i + 0x10);
  }
  if ((this->m_list).m_pTail == (EStringRedBlackTreeNode *)i) {
    (this->m_list).m_pTail = *(EStringRedBlackTreeNode **)(i + 0xc);
  }
  else {
    *(undefined4 *)(*(int *)(i + 0x10) + 0xc) = *(undefined4 *)(i + 0xc);
  }
                    /* end of inlined section */
  pEVar1 = (EStringRedBlackTreeNode *)i;
  if ((*(EStringRedBlackTreeSentinel **)i == &_19EStringRedBlackTree_m_sentinel) ||
     (pEVar4 = *(EStringRedBlackTreeNode **)(i + 4),
     pEVar4 == (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel)) {
LAB_00330ba4:
    pEVar4 = pEVar1;
    pEVar1 = pEVar4->pLeft;
    if (pEVar1 != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
      pEVar2 = pEVar4->pParent;
      goto LAB_00330bbc;
    }
  }
  else if (pEVar4->pLeft != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
    for (pEVar1 = pEVar4->pLeft;
        pEVar1->pLeft != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel;
        pEVar1 = pEVar1->pLeft) {
    }
    goto LAB_00330ba4;
  }
  pEVar1 = pEVar4->pRight;
  pEVar2 = pEVar4->pParent;
LAB_00330bbc:
  pEVar1->pParent = pEVar2;
  pEVar2 = pEVar4->pParent;
  if (pEVar2 == (EStringRedBlackTreeNode *)0x0) {
    this->m_pRoot = pEVar1;
  }
  else if (pEVar4 == pEVar2->pLeft) {
    pEVar2->pLeft = pEVar1;
  }
  else {
    pEVar2->pRight = pEVar1;
  }
  if (pEVar4 != (EStringRedBlackTreeNode *)i) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    __as__7EStringPCc((EString *)(i + 0x1c),(pEVar4->key).m_p);
                    /* end of inlined section */
    *(uint *)(i + 0x18) = pEVar4->value;
    SVar3 = pEVar4->color;
  }
  else {
    SVar3 = pEVar4->color;
  }
  if (SVar3 == SRB_BLACK) {
    RemoveFixup__19EStringRedBlackTreeP23EStringRedBlackTreeNode(this,pEVar1);
  }
  if (pEVar4 != (EStringRedBlackTreeNode *)i) {
    pEVar4->color = *(SRBNodeColor *)(i + 0x14);
    pEVar1 = *(EStringRedBlackTreeNode **)i;
    pEVar4->pLeft = pEVar1;
    if (pEVar1 != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
      pEVar1->pParent = pEVar4;
    }
    pEVar1 = *(EStringRedBlackTreeNode **)(i + 4);
    pEVar4->pRight = pEVar1;
    if (pEVar1 != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
      pEVar1->pParent = pEVar4;
    }
    pEVar1 = *(EStringRedBlackTreeNode **)(i + 8);
    pEVar4->pParent = pEVar1;
    if (pEVar1 != (EStringRedBlackTreeNode *)0x0) {
      if (pEVar1->pRight == (EStringRedBlackTreeNode *)i) {
        pEVar1->pRight = pEVar4;
      }
      else if (pEVar1->pLeft == (EStringRedBlackTreeNode *)i) {
        pEVar1->pLeft = pEVar4;
      }
    }
    if (this->m_pRoot == (EStringRedBlackTreeNode *)i) {
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

SRBIterator EStringRedBlackTree::Find(char *key, SRBValue *pOutValue) {
	EStringRedBlackTreeNode *pCurrent;
	char *sz;
	EString &s;
	char *sz;
	
  int iVar1;
  EStringRedBlackTreeNode *pEVar2;
  
  pEVar2 = this->m_pRoot;
  if (pEVar2 != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel) {
    do {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
      iVar1 = Compare__C7EStringPCc(&pEVar2->key,key);
                    /* end of inlined section */
      if (iVar1 == 0) {
        if (pOutValue == (uint *)0x0) {
          return (undefined1 *)pEVar2;
        }
        *pOutValue = pEVar2->value;
        return (undefined1 *)pEVar2;
      }
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
      iVar1 = Compare__C7EStringPCc(&pEVar2->key,key);
                    /* end of inlined section */
      if (iVar1 < 1) {
        pEVar2 = pEVar2->pRight;
      }
      else {
        pEVar2 = pEVar2->pLeft;
      }
    } while (pEVar2 != (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel);
  }
  return (undefined1 *)0x0;
}

SRBIterator EStringRedBlackTree::FindFirst(char *key, SRBValue *pOutValue) {
	SRBIterator i;
	SRBIterator i;
	EStringRedBlackTreeNode *pNode;
	char *szOther;
	SRBIterator i;
	
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = Find__C19EStringRedBlackTreePCcPUi(this,key,(uint *)0x0);
  puVar1 = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    do {
      puVar2 = puVar1;
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
      puVar1 = *(undefined1 **)(puVar2 + 0xc);
                    /* end of inlined section */
      if (puVar1 == (undefined1 *)0x0) break;
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
      iVar3 = Compare__C7EStringPCc((EString *)(puVar1 + 0x1c),key);
                    /* end of inlined section */
    } while (iVar3 == 0);
    if (pOutValue != (uint *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
                    /* end of inlined section */
      *pOutValue = *(uint *)(puVar2 + 0x18);
    }
  }
  return puVar2;
}

SRBIterator EStringRedBlackTree::FindNext(SRBIterator i, SRBValue *pOutValue) {
	SRBIterator next;
	SRBIterator i;
	void *pNode;
	SRBIterator i;
	SRBIterator i;
	SRBIterator i;
	
  int iVar1;
  undefined1 *puVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
  puVar2 = *(undefined1 **)(i + 0x10);
                    /* end of inlined section */
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
    iVar1 = Compare__C7EStringPCc((EString *)(puVar2 + 0x1c),*(char **)(i + 0x1c));
                    /* end of inlined section */
    if (iVar1 == 0) {
      if (pOutValue != (uint *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
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

void EStringRedBlackTree::RemoveAll() {
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	EStringRedBlackTreeNode *pNode;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	EStringRedBlackTreeNode *pNext;
	void *pNode;
	EStringRedBlackTreeNode *this;
	void *p;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	EStringRedBlackTree *this;
	
  EStringRedBlackTreeNode *pEVar1;
  EStringRedBlackTreeNode *pAddress;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_list).m_pHead;
  while (pAddress = pEVar1, pAddress != (EStringRedBlackTreeNode *)0x0) {
    pEVar1 = pAddress->pNext;
    if (pAddress != (EStringRedBlackTreeNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
      Deallocate__7EStringPc(&pAddress->key,(pAddress->key).m_p);
      _allocBucketFree__FPvUiUi(pAddress,0x20,0x20);
    }
  }
  (this->m_list).m_pTail = (EStringRedBlackTreeNode *)0x0;
  (this->m_list).m_pHead = (EStringRedBlackTreeNode *)0x0;
  this->m_pRoot = (EStringRedBlackTreeNode *)&_19EStringRedBlackTree_m_sentinel;
  return;
}

void EStringRedBlackTree::FreeAll() {
	SRBIterator i;
	EStringRedBlackTree *this;
	TLinkedList<EStringRedBlackTreeNode,12,16> *this;
	SRBIterator i;
	SRBIterator i;
	
  EStringRedBlackTreeNode *pEVar1;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (EStringRedBlackTreeNode *)0x0;
      pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
    _memmanFree__FPv((void *)pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
                    /* end of inlined section */
  }
  RemoveAll__19EStringRedBlackTree(this);
  return;
}

int EStringRedBlackTree::GetSize() {
	EStringRedBlackTreeNode *p;
	int count;
	void *pNode;
	
  EStringRedBlackTreeNode *pEVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (EStringRedBlackTreeNode *)0x0;
      pEVar1 = pEVar1->pNext) {
    iVar2 = iVar2 + 1;
  }
                    /* end of inlined section */
  return iVar2;
}

void EStringRedBlackTree::SetValues(EStringRedBlackTree &s, bool allowDuplicates) {
	SRBIterator i;
	SRBIterator i;
	SRBValue value;
	SRBIterator i;
	SRBIterator i;
	
  EStringRedBlackTreeNode *pEVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (s->m_list).m_pHead;
                    /* end of inlined section */
  while (pEVar1 != (EStringRedBlackTreeNode *)0x0) {
                    /* end of inlined section */
    if (allowDuplicates) {
                    /* end of inlined section */
      Insert__19EStringRedBlackTreePCcUib(this,(pEVar1->key).m_p,pEVar1->value,true);
      pEVar1 = pEVar1->pNext;
    }
    else {
                    /* end of inlined section */
      SetValue__19EStringRedBlackTreePCcUi(this,(pEVar1->key).m_p,pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
      pEVar1 = pEVar1->pNext;
    }
  }
  return;
}

EStringRedBlackTree& EStringRedBlackTree::operator=(EStringRedBlackTree &s) {
  RemoveAll__19EStringRedBlackTree(this);
  SetValues__19EStringRedBlackTreeRC19EStringRedBlackTreeb(this,s,true);
  return this;
}

bool EStringRedBlackTree::operator==(EStringRedBlackTree &s) {
	SRBIterator ti;
	SRBIterator si;
	SRBIterator i;
	SRBIterator i;
	SRBIterator i;
	SRBIterator i;
	SRBIterator i;
	SRBIterator i;
	SRBIterator i;
	
  EStringRedBlackTreeNode *pEVar1;
  EStringRedBlackTreeNode *pEVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_list).m_pHead;
  pEVar2 = (s->m_list).m_pHead;
  while( true ) {
                    /* end of inlined section */
    if (pEVar1 == (EStringRedBlackTreeNode *)0x0) {
                    /* end of inlined section */
      return pEVar2 == (EStringRedBlackTreeNode *)0x0;
    }
                    /* end of inlined section */
    if (pEVar2 == (EStringRedBlackTreeNode *)0x0) {
      return false;
    }
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
    iVar3 = Compare__C7EStringPCc(&pEVar1->key,(pEVar2->key).m_p);
                    /* end of inlined section */
    if (iVar3 != 0) {
      return false;
    }
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
                    /* end of inlined section */
    if (pEVar1->value != pEVar2->value) break;
                    /* inlined from c:/eor/src2/common/datastruc/e_stringredblacktree.h */
    pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
    pEVar2 = pEVar2->pNext;
  }
  return false;
}
