// STATUS: NOT STARTED

#include "e_spheretreegen.h"

struct TFloatTree<ESTGNode *> : EFloatTree {
	TFloatTree<ESTGNode *>& operator=();
	TFloatTree();
	TFloatTree();
	TFloatTree(TFloatTree<ESTGNode *>*, int, void);
	ESTGNode* operator[]();
	ESTGNode*& operator[]();
	FTIterator Insert();
	FTIterator Find();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	FTIterator SetValue();
	static void SetValue(/* parameters unknown */);
	void SetValues();
	static ESTGNode* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

ESphereTreeGen* ESphereTreeGen::ESphereTreeGen() {
	TNodeList<ESTGNode *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_nodeList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_nodeList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  *(undefined4 *)&this->m_built = 0;
  return this;
}

void ESphereTreeGen::~ESphereTreeGen(int __in_chrg) {
	TNodeList<ESTGNode *> *this;
	ENodeList *this;
	void *pAddress;
	void *pAddress;
	
  Reset__14ESphereTreeGen(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList((ENodeList *)this);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ESphereTreeGen::Reset() {
	TNodeList<ESTGNode *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  ESTGNode *this_00;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_nodeList).field0_0x0.m_l.m_pHead;
  if (pEVar1 != (ENodeListNode *)0x0) {
    this_00 = (ESTGNode *)pEVar1->data;
    while( true ) {
      pEVar1 = pEVar1->pNext;
      if (this_00 != (ESTGNode *)0x0) {
        ___8ESTGNode(this_00,3);
      }
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this_00 = (ESTGNode *)pEVar1->data;
    }
  }
  RemoveAll__9ENodeList((ENodeList *)this);
                    /* end of inlined section */
  *(undefined4 *)&this->m_built = 0;
  return;
}

ESTGNode* ESphereTreeGen::GetHead() {
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  int iVar1;
  ESTGNode *pEVar2;
  
  iVar1 = GetSize__C9ENodeList((ENodeList *)this);
  if (iVar1 == 0) {
    pEVar2 = (ESTGNode *)0x0;
  }
  else {
    pEVar2 = (ESTGNode *)((this->m_nodeList).field0_0x0.m_l.m_pHead)->data;
  }
  return pEVar2;
}

void ESphereTreeGen::AddObject(void *pObject, EBoundSphere &boundSphere) {
	ESTGNode *pNode;
	EBoundSphere &bs;
	TNodeList<ESTGNode *> *this;
	ESTGNode *data;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ESTGNode *pEVar6;
  undefined1 *puVar7;
  ulong uVar8;
  
                    /* inlined from c:/eor/src2/common/math/spheretree/e_stgnode.h */
  pEVar6 = (ESTGNode *)_allocBucketAlloc__FUiUi(0x40,0xb);
                    /* end of inlined section */
  pEVar6 = __8ESTGNode(pEVar6);
  if ((long)(int)pEVar6 != 0) {
    pEVar6->m_pObj = pObject;
    puVar1 = (undefined *)((int)&(boundSphere->vCenter).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_boundsphere.h */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)boundSphere & 7;
    uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            (long)(int)pEVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)boundSphere - uVar3) >> uVar3 * 8;
    fVar4 = (boundSphere->vCenter).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(pEVar6->m_boundSphere).vCenter.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
    uVar2 = (uint)&pEVar6->m_boundSphere & 7;
    puVar5 = (ulong *)((int)&pEVar6->m_boundSphere - uVar2);
    *puVar5 = uVar8 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (pEVar6->m_boundSphere).vCenter.field0_0x0.d[2] = fVar4;
    (pEVar6->m_boundSphere).radius = boundSphere->radius;
    puVar7 = AddTail__9ENodeListUi((ENodeList *)this,(uint)pEVar6);
                    /* end of inlined section */
    pEVar6->m_iNode = puVar7;
  }
  return;
}

void ESphereTreeGen::Build() {
	int remain;
	EBound3 b;
	bool first;
	NLIterator nli;
	float axisLength;
	int axis;
	TFloatTree<ESTGNode *> extents;
	TFloatTree<ESTGNode *> radii;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EBound3 nb;
	NLIterator i;
	NLIterator i;
	int d;
	float thisAxisLength;
	int value;
	int value;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	EVec3 *this;
	int value;
	int value;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  ulong uVar10;
  EBound3 *pEVar11;
  EVec3 *pEVar12;
  int iVar13;
  uint uVar14;
  EBound3 *pEVar15;
  EVec3 *pEVar16;
  ESTGNode *pNode;
  ulong in_a2;
  float *pfVar17;
  ENodeListNode *pEVar18;
  int iVar19;
  int axis;
  float fVar20;
  float fVar21;
  EBound3 b;
  TFloatTree_ESTGNode___ extents;
  EBound3 nb;
  
  pEVar11 = &b;
  iVar8 = GetSize__C9ENodeList((ENodeList *)this);
  if (1 < iVar8) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    extents.field0_0x0.m_pRoot = (EFloatTreeNode *)0x0;
                    /* end of inlined section */
    bVar5 = true;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    extents.field0_0x0.m_list.m_pTail = (EFloatTreeNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    extents.field0_0x0.m_list.m_pHead = (EFloatTreeNode *)0x0;
                    /* end of inlined section */
    pEVar16 = &b.vMax;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar18 = (this->m_nodeList).field0_0x0.m_l.m_pHead;
    uVar10 = 0;
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar14 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar14);
    *puVar4 = *puVar4 & -1L << (uVar14 + 1) * 8 | 0UL >> (7 - uVar14) * 8;
    uVar14 = (uint)&b.vMax & 7;
    puVar4 = (ulong *)((int)&b.vMax - uVar14);
    *puVar4 = 0L << uVar14 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
    b.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar14 = (uint)puVar1 & 7;
    uVar2 = (uint)&b.vMax & 7;
    b.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar14) << (7 - uVar14) * 8 |
         in_a2 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar2) * 8 |
         *(ulong *)((int)&b.vMax - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
    uVar14 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar14);
    *puVar4 = *puVar4 & -1L << (uVar14 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar14) * 8
    ;
    b.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    if (pEVar18 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      uVar14 = pEVar18->data;
      while( true ) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        extents.field0_0x0.m_pRoot = (EFloatTreeNode *)0x0;
        extents.field0_0x0.m_list.m_pTail = (EFloatTreeNode *)0x0;
        extents.field0_0x0.m_list.m_pHead = (EFloatTreeNode *)0x0;
        puVar1 = (undefined *)((int)&nb.vMax.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
        uVar2 = (uint)&nb.vMax & 7;
        puVar4 = (ulong *)((int)&nb.vMax - uVar2);
        *puVar4 = 0L << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        nb.vMax.field0_0x0.d[2] = 0.0;
        puVar1 = (undefined *)((int)&nb.vMax.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        uVar3 = (uint)&nb.vMax & 7;
        nb.vMin.field0_0x0._0_8_ =
             *(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&nb.vMax - uVar3) >> uVar3 * 8;
        puVar1 = (undefined *)((int)&nb.vMin.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 |
                  (ulong)nb.vMin.field0_0x0._0_8_ >> (7 - uVar2) * 8;
        nb.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
        Compute__7EBound3RC12EBoundSphere(&nb,(EBoundSphere *)(uVar14 + 0x10));
        uVar7 = nb.vMin.field0_0x0.d[2];
        uVar6 = nb.vMin.field0_0x0._0_8_;
        if (bVar5) {
          puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
          uVar14 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar14);
          *puVar4 = *puVar4 & -1L << (uVar14 + 1) * 8 |
                    (ulong)nb.vMin.field0_0x0._0_8_ >> (7 - uVar14) * 8;
          b.vMax.field0_0x0.d[2] = nb.vMax.field0_0x0.d[2];
          b.vMin.field0_0x0._0_8_ = uVar6;
          b.vMin.field0_0x0.d[2] = uVar7;
          puVar1 = (undefined *)((int)&nb.vMax.field0_0x0 + 7);
          uVar14 = (uint)puVar1 & 7;
          uVar2 = (uint)&nb.vMax & 7;
          uVar10 = (*(long *)(puVar1 + -uVar14) << (7 - uVar14) * 8 |
                   uVar10 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((int)&nb.vMax - uVar2) >> uVar2 * 8;
          puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
          uVar14 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar14);
          *puVar4 = *puVar4 & -1L << (uVar14 + 1) * 8 | uVar10 >> (7 - uVar14) * 8;
          uVar14 = (uint)&b.vMax & 7;
          puVar4 = (ulong *)((int)&b.vMax - uVar14);
          *puVar4 = uVar10 << uVar14 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
          bVar5 = false;
                    /* end of inlined section */
        }
        else {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
          pfVar17 = (float *)((uint)&b | 0xc);
          pEVar15 = &nb;
          pEVar12 = &nb.vMax;
          do {
            fVar21 = (pEVar15->vMin).field0_0x0.d[0];
            fVar20 = pfVar17[-3];
            if (fVar21 <= fVar20) {
              fVar20 = fVar21;
            }
            pfVar17[-3] = fVar20;
            fVar20 = (pEVar12->field0_0x0).d[0];
            if ((pEVar12->field0_0x0).d[0] < *pfVar17) {
              fVar20 = *pfVar17;
            }
            *pfVar17 = fVar20;
            pEVar15 = (EBound3 *)((int)&(pEVar15->vMin).field0_0x0 + 4);
            pEVar12 = (EVec3 *)((int)&pEVar12->field0_0x0 + 4);
            uVar10 = (ulong)((int)pEVar15 < (int)&nb.vMax);
            pfVar17 = pfVar17 + 1;
          } while (uVar10 != 0);
        }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar18 = pEVar18->pNext;
                    /* end of inlined section */
        if (pEVar18 == (ENodeListNode *)0x0) break;
        uVar14 = pEVar18->data;
      }
    }
    iVar13 = 0;
    fVar20 = -1.0;
    iVar19 = 0;
    do {
                    /* end of inlined section */
      fVar21 = (pEVar16->field0_0x0).d[0] - *(float *)pEVar11;
      axis = iVar13;
      if (fVar21 <= fVar20) {
        fVar21 = fVar20;
        axis = iVar19;
      }
      iVar13 = iVar13 + 1;
      pEVar11 = (EBound3 *)((int)pEVar11 + 4);
      pEVar16 = (EVec3 *)((int)&pEVar16->field0_0x0 + 4);
      fVar20 = fVar21;
      iVar19 = axis;
    } while (iVar13 < 3);
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    __10EFloatTree((EFloatTree *)&extents);
    pEVar18 = (this->m_nodeList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    if (pEVar18 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      uVar14 = pEVar18->data;
      while( true ) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pfVar17 = (float *)(uVar14 + 0x10 + axis * 4);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
        puVar9 = Insert__10EFloatTreefUib
                           ((EFloatTree *)&extents,*pfVar17 - *(float *)(uVar14 + 0x1c),uVar14,true)
        ;
                    /* end of inlined section */
        *(undefined1 **)(uVar14 + 0x20) = puVar9;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
        puVar9 = Insert__10EFloatTreefUib
                           ((EFloatTree *)&extents,*pfVar17 + *(float *)(uVar14 + 0x1c),uVar14,true)
        ;
                    /* end of inlined section */
        *(undefined1 **)(uVar14 + 0x24) = puVar9;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar18 = pEVar18->pNext;
                    /* end of inlined section */
        if (pEVar18 == (ENodeListNode *)0x0) break;
        uVar14 = pEVar18->data;
      }
    }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    __10EFloatTree((EFloatTree *)&nb);
    pEVar18 = (this->m_nodeList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    if (pEVar18 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
      pNode = (ESTGNode *)pEVar18->data;
      while( true ) {
        FindBestCombine__14ESphereTreeGenP8ESTGNodeRt10TFloatTree1ZP8ESTGNodeT2
                  (this,pNode,(TFloatTree_ESTGNode___ *)(EFloatTree *)&extents,
                   (TFloatTree_ESTGNode___ *)&nb);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar18 = pEVar18->pNext;
                    /* end of inlined section */
        if (pEVar18 == (ENodeListNode *)0x0) break;
        pNode = (ESTGNode *)pEVar18->data;
      }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    }
    do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
      iVar8 = iVar8 + -1;
      Combine__14ESphereTreeGenP8ESTGNodeT1Rt10TFloatTree1ZP8ESTGNodeT3i
                (this,*(ESTGNode **)((int)nb.vMin.field0_0x0.d[0] + 0x18),
                 (*(ESTGNode **)((int)nb.vMin.field0_0x0.d[0] + 0x18))->m_pBest,
                 (TFloatTree_ESTGNode___ *)(EFloatTree *)&extents,(TFloatTree_ESTGNode___ *)&nb,axis
                );
    } while (1 < iVar8);
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    RemoveAll__10EFloatTree((EFloatTree *)&nb);
    RemoveAll__10EFloatTree((EFloatTree *)&extents);
                    /* end of inlined section */
  }
  *(undefined4 *)&this->m_built = 1;
  return;
}

void ESphereTreeGen::Combine(ESTGNode *pNode1, ESTGNode *pNode2, TFloatTree<ESTGNode *> &extents, TFloatTree<ESTGNode *> &radii, int axis) {
	ESTGNode *pNodes[2];
	int i;
	ESTGNode *pParent;
	ESTGNode *pNode;
	TFloatTree<ESTGNode *> *this;
	TFloatTree<ESTGNode *> *this;
	TFloatTree<ESTGNode *> *this;
	ESTGNode *key;
	TNodeList<ESTGNode *> *this;
	bool lastNode;
	ESTGNode *pNode;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TNodeList<ESTGNode *> *this;
	ESTGNode *data;
	int value;
	TFloatTree<ESTGNode *> *this;
	int value;
	TFloatTree<ESTGNode *> *this;
	ESTGNode *pNode;
	RBIterator dbi;
	RBIterator i;
	RBIterator i;
	TFloatTree<ESTGNode *> *this;
	
  uint key;
  ESTGNode *pEVar1;
  ENodeListNode *pEVar2;
  ESTGNode *pEVar3;
  undefined1 *puVar4;
  ESTGNode **ppEVar5;
  ESTGNode *pEVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  ESTGNode **ppEVar10;
  int iVar11;
  ESTGNode *pNodes [2];
  
  ppEVar10 = pNodes;
  ppEVar5 = pNodes;
  iVar8 = 1;
  pNodes[0] = pNode1;
  pNodes[1] = pNode2;
  do {
    key = (uint)*ppEVar10;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
    ppEVar10 = ppEVar10 + 1;
    iVar8 = iVar8 + -1;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    Remove__10EFloatTreeP17FTIteratorPtrType(&extents->field0_0x0,*(undefined1 **)(key + 0x20));
    *(undefined4 *)(key + 0x20) = 0;
    Remove__10EFloatTreeP17FTIteratorPtrType(&extents->field0_0x0,*(undefined1 **)(key + 0x24));
    *(undefined4 *)(key + 0x24) = 0;
    Remove__10EFloatTreeP17FTIteratorPtrType(&radii->field0_0x0,*(undefined1 **)(key + 0x28));
                    /* end of inlined section */
    *(undefined4 *)(key + 0x28) = 0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Remove__13ERedBlackTreeUi((ERedBlackTree *)(*(int *)(key + 0x3c) + 0x30),key);
                    /* end of inlined section */
    *(undefined4 *)(key + 0x3c) = 0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    Remove__9ENodeListP17NLIteratorPtrType((ENodeList *)this,*(undefined1 **)(key + 0x2c));
                    /* end of inlined section */
    *(undefined4 *)(key + 0x2c) = 0;
  } while (-1 < iVar8);
                    /* inlined from c:/eor/src2/common/math/spheretree/e_stgnode.h */
  pEVar3 = (ESTGNode *)_allocBucketAlloc__FUiUi(0x40,0xb);
                    /* end of inlined section */
  pEVar3 = __8ESTGNode(pEVar3);
  if (pEVar3 != (ESTGNode *)0x0) {
    iVar8 = 1;
    pEVar6 = pEVar3;
    do {
      pEVar6 = (ESTGNode *)pEVar6->m_pChildren;
      pEVar1 = *ppEVar5;
      iVar8 = iVar8 + -1;
      ppEVar5 = ppEVar5 + 1;
      *(ESTGNode **)pEVar6 = pEVar1;
      pEVar1->m_pParent = pEVar3;
    } while (-1 < iVar8);
    Combine__12EBoundSphereRC12EBoundSphereT1
              (&pEVar3->m_boundSphere,&pNode1->m_boundSphere,&pNode2->m_boundSphere);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar2 = (this->m_nodeList).field0_0x0.m_l.m_pHead;
    puVar4 = AddTail__9ENodeListUi((ENodeList *)this,(uint)pEVar3);
                    /* end of inlined section */
    pEVar3->m_iNode = puVar4;
    if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      pfVar7 = (pEVar3->m_boundSphere).vCenter.field0_0x0.d + axis;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
      puVar4 = Insert__10EFloatTreefUib
                         (&extents->field0_0x0,*pfVar7 - (pEVar3->m_boundSphere).radius,(uint)pEVar3
                          ,true);
                    /* end of inlined section */
      pEVar3->m_iMinExt = puVar4;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
      puVar4 = Insert__10EFloatTreefUib
                         (&extents->field0_0x0,*pfVar7 + (pEVar3->m_boundSphere).radius,(uint)pEVar3
                          ,true);
                    /* end of inlined section */
      pEVar3->m_iMaxExt = puVar4;
      FindBestCombine__14ESphereTreeGenP8ESTGNodeRt10TFloatTree1ZP8ESTGNodeT2
                (this,pEVar3,extents,radii);
    }
  }
  iVar11 = 0;
  iVar8 = 0;
  do {
    iVar11 = iVar11 + 1;
    iVar8 = *(int *)((int)pNodes + iVar8);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    iVar9 = *(int *)(iVar8 + 0x30);
                    /* end of inlined section */
    if (iVar9 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      pEVar3 = *(ESTGNode **)(iVar9 + 0x18);
      while( true ) {
        if (pEVar3->m_pBest != (ESTGNode *)0x0) {
                    /* end of inlined section */
                    /* end of inlined section */
          pEVar3->m_pBest = (ESTGNode *)0x0;
                    /* end of inlined section */
          if (pEVar3->m_iRadius != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
            Remove__10EFloatTreeP17FTIteratorPtrType(&radii->field0_0x0,pEVar3->m_iRadius);
                    /* end of inlined section */
            pEVar3->m_iRadius = (undefined1 *)0x0;
          }
          FindBestCombine__14ESphereTreeGenP8ESTGNodeRt10TFloatTree1ZP8ESTGNodeT2
                    (this,pEVar3,extents,radii);
        }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        iVar9 = *(int *)(iVar9 + 0x10);
                    /* end of inlined section */
        if (iVar9 == 0) break;
        pEVar3 = *(ESTGNode **)(iVar9 + 0x18);
      }
    }
    RemoveAll__13ERedBlackTree((ERedBlackTree *)(iVar8 + 0x30));
    iVar8 = iVar11 * 4;
  } while (iVar11 < 2);
  return;
}

void ESphereTreeGen::FindBestCombine(ESTGNode *pNode, TFloatTree<ESTGNode *> &extents, TFloatTree<ESTGNode *> &radii) {
	ESTGNode *pBest;
	float bestRadius;
	float bestDiameter;
	float bestDiameterSq;
	FTIterator iHighExt;
	float highPos;
	FTIterator iLowExt;
	float lowPos;
	FTIterator iComp;
	FTIterator i;
	FTIterator i;
	void *pNode;
	FTIterator i;
	FTIterator i;
	EFloatTreeNode *pNode;
	float compPos;
	FTIterator i;
	FTIterator i;
	FTIterator i;
	EVec3 *this;
	EVec3 &v;
	EBoundSphere combined;
	float compPos;
	FTIterator i;
	FTIterator i;
	FTIterator i;
	EVec3 *this;
	EVec3 &v;
	EBoundSphere combined;
	TFloatTree<ESTGNode *> *this;
	ESTGNode *key;
	
  ESTGNode *pEVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ESTGNode *pEVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  EBoundSphere EStack_d0;
  EBoundSphere combined;
  
  pEVar6 = (ESTGNode *)0x0;
  fVar11 = 0.0;
  fVar10 = 0.0;
  fVar12 = 0.0;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
  fVar14 = *(float *)(pNode->m_iMaxExt + 0x1c);
  puVar3 = pNode->m_iMaxExt;
  do {
    puVar4 = puVar3;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    puVar3 = *(undefined1 **)(puVar4 + 0x10);
                    /* end of inlined section */
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = pNode->m_iMinExt;
      goto LAB_0031e130;
    }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
  } while (*(float *)(puVar3 + 0x1c) <= fVar14);
  puVar3 = pNode->m_iMinExt;
LAB_0031e130:
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
  fVar13 = *(float *)(puVar3 + 0x1c);
  do {
    puVar5 = puVar3;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    puVar3 = *(undefined1 **)(puVar5 + 0xc);
                    /* end of inlined section */
    if (puVar3 == (undefined1 *)0x0) break;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
  } while (fVar13 <= *(float *)(puVar3 + 0x1c));
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
  pEVar1 = *(ESTGNode **)(puVar4 + 0x18);
  do {
                    /* end of inlined section */
    fVar7 = *(float *)(pEVar1->m_iMaxExt + 0x1c);
    if ((puVar4 == pEVar1->m_iMaxExt) || (fVar14 < fVar7)) {
      if (pEVar1 == pNode) {
        puVar4 = *(undefined1 **)(puVar4 + 0xc);
      }
      else {
        if ((pEVar6 != (ESTGNode *)0x0) && (fVar11 < fVar13 - fVar7)) break;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        bVar2 = false;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar7 = (pNode->m_boundSphere).vCenter.field0_0x0.d[1] -
                (pEVar1->m_boundSphere).vCenter.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar9 = (pNode->m_boundSphere).vCenter.field0_0x0.d[0] -
                (pEVar1->m_boundSphere).vCenter.field0_0x0.d[0];
        fVar8 = (pNode->m_boundSphere).vCenter.field0_0x0.d[2] -
                (pEVar1->m_boundSphere).vCenter.field0_0x0.d[2];
                    /* end of inlined section */
        if ((fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8 < fVar12) || (pEVar6 == (ESTGNode *)0x0))
        {
          bVar2 = true;
        }
        if (bVar2) {
                    /* end of inlined section */
          Combine__12EBoundSphereRC12EBoundSphereT1
                    (&EStack_d0,&pNode->m_boundSphere,&pEVar1->m_boundSphere);
          if ((EStack_d0.radius < fVar10) || (pEVar6 == (ESTGNode *)0x0)) {
            fVar11 = EStack_d0.radius + EStack_d0.radius;
            fVar12 = fVar11 * fVar11;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
            puVar4 = *(undefined1 **)(puVar4 + 0xc);
            fVar10 = EStack_d0.radius;
            pEVar6 = pEVar1;
          }
          else {
            puVar4 = *(undefined1 **)(puVar4 + 0xc);
          }
        }
        else {
          puVar4 = *(undefined1 **)(puVar4 + 0xc);
        }
      }
    }
    else {
      puVar4 = *(undefined1 **)(puVar4 + 0xc);
    }
                    /* end of inlined section */
    if (puVar4 == (undefined1 *)0x0) break;
    pEVar1 = *(ESTGNode **)(puVar4 + 0x18);
  } while( true );
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
  pEVar1 = *(ESTGNode **)(puVar5 + 0x18);
  do {
                    /* end of inlined section */
    fVar7 = *(float *)(pEVar1->m_iMinExt + 0x1c);
    if ((puVar5 == pEVar1->m_iMinExt) || (fVar7 < fVar13)) {
      if (pEVar1 == pNode) {
        puVar5 = *(undefined1 **)(puVar5 + 0x10);
      }
      else {
        if ((pEVar6 != (ESTGNode *)0x0) && (fVar11 < fVar7 - fVar14)) {
          pNode->m_pBest = pEVar6;
          goto LAB_0031e35c;
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        bVar2 = false;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar7 = (pNode->m_boundSphere).vCenter.field0_0x0.d[1] -
                (pEVar1->m_boundSphere).vCenter.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar9 = (pNode->m_boundSphere).vCenter.field0_0x0.d[0] -
                (pEVar1->m_boundSphere).vCenter.field0_0x0.d[0];
        fVar8 = (pNode->m_boundSphere).vCenter.field0_0x0.d[2] -
                (pEVar1->m_boundSphere).vCenter.field0_0x0.d[2];
                    /* end of inlined section */
        if ((fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8 < fVar12) || (pEVar6 == (ESTGNode *)0x0))
        {
          bVar2 = true;
        }
        if (bVar2) {
                    /* end of inlined section */
          Combine__12EBoundSphereRC12EBoundSphereT1
                    (&combined,&pNode->m_boundSphere,&pEVar1->m_boundSphere);
          if ((combined.radius < fVar10) || (pEVar6 == (ESTGNode *)0x0)) {
            fVar11 = combined.radius + combined.radius;
            fVar12 = fVar11 * fVar11;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
            puVar5 = *(undefined1 **)(puVar5 + 0x10);
            fVar10 = combined.radius;
            pEVar6 = pEVar1;
          }
          else {
            puVar5 = *(undefined1 **)(puVar5 + 0x10);
          }
        }
        else {
          puVar5 = *(undefined1 **)(puVar5 + 0x10);
        }
      }
    }
    else {
      puVar5 = *(undefined1 **)(puVar5 + 0x10);
    }
                    /* end of inlined section */
    if (puVar5 == (undefined1 *)0x0) {
      pNode->m_pBest = pEVar6;
LAB_0031e35c:
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
      puVar3 = Insert__10EFloatTreefUib
                         (&radii->field0_0x0,(pNode->m_boundSphere).radius,(uint)pNode,true);
                    /* end of inlined section */
      pNode->m_iRadius = puVar3;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Insert__13ERedBlackTreeUiUib(&(pEVar6->m_desiredBy).field0_0x0,(uint)pNode,0,false);
      return;
    }
    pEVar1 = *(ESTGNode **)(puVar5 + 0x18);
  } while( true );
}
