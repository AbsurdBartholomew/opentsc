// STATUS: NOT STARTED

#include "e_overlaptracker.h"

int EOverlapTracker::m_axes[2] = {
	/* [0] = */ 0,
	/* [1] = */ 1
};

EOverlapTracker* EOverlapTracker::EOverlapTracker() {
  EOverlapTracker *pEVar1;
  int iVar2;
  
  iVar2 = 1;
  pEVar1 = this;
  do {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar1->m_dims[0].m_pTail = (EOTBound *)0x0;
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar1->m_dims[0].m_pHead = (EOTBound *)0x0;
                    /* end of inlined section */
    pEVar1 = (EOverlapTracker *)(pEVar1->m_dims + 1);
  } while (iVar2 != -1);
  *(undefined4 *)&this->m_warnOnBadReference = 1;
  return this;
}

void EOverlapTracker::~EOverlapTracker(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EOverlapTracker::ResetStats() {
  return;
}

bool EOverlapTracker::WarnOnBadReference(bool enable) {
	bool prev;
	
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)&this->m_warnOnBadReference;
  *(int *)&this->m_warnOnBadReference = (int)enable;
  return SUB41(uVar1,0);
}

RBIterator EOverlapTracker::GetOverlap(RBIterator i, EOTData &otd, u32 typeFlags) {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	EVec3 *this;
	RBIterator i;
	void *pNode;
	
  uint *puVar1;
  
  if (i != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    puVar1 = *(uint **)(i + 0x1c);
    while( true ) {
      if ((*puVar1 & typeFlags) == 0) {
        i = *(undefined1 **)(i + 0x10);
      }
      else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
        if ((otd->m_bPos).vMin.field0_0x0.d[2] <= *(float *)(*(int *)(i + 0x18) + 0x3c)) {
                    /* end of inlined section */
          if (*(float *)(*(int *)(i + 0x18) + 0x30) <= (otd->m_bPos).vMax.field0_0x0.d[2]) {
            return i;
          }
          i = *(undefined1 **)(i + 0x10);
        }
        else {
          i = *(undefined1 **)(i + 0x10);
        }
      }
                    /* end of inlined section */
      if (i == (undefined1 *)0x0) break;
      puVar1 = *(uint **)(i + 0x1c);
    }
  }
  return (undefined1 *)0x0;
}

void EOverlapTracker::Insert(EInstance *pInstance, EInstance *pRef) {
	EOTData &otd;
	EBound3 bPos;
	EOTData &otd;
	EOTData &self;
	EOTData &other;
	EBound3 &bInit;
	EOTData &refData;
	RBIterator i;
	EBound3 *this;
	EBound3 &b;
	int d;
	EOTBound *pNewNode;
	EOTBound *pNode;
	void *pNode;
	EOTBound *pNewNode;
	void *pNode;
	EOTBound *pNode;
	TLinkedList<EOTBound,4,8> *this;
	EOTBound *pNewNode;
	void *pNode;
	EOTBound *pNode;
	EOTBound *pNewNode;
	TLinkedList<EOTBound,4,8> *this;
	EOTBound *pNode;
	void *pNode;
	RBIterator i;
	RBIterator i;
	EOTData &self;
	EOTData &other;
	EOTData &self;
	EOTData &other;
	EBound3 *this;
	int d;
	EOTBound *pNewNode;
	EOTBound *pNode;
	void *pNode;
	TLinkedList<EOTBound,4,8> *this;
	EOTBound *pNewNode;
	EOTBound *pNode;
	void *pNode;
	int d2;
	int axis;
	EOTBound *pMinBound;
	EOTBound *pInsertBefore;
	EOTBound *pLastBound;
	EInstance *pOther;
	EOTBound *pBound;
	int dimension;
	EOTData &otd;
	int axis;
	int value;
	EOTData &self;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  EOTBound *pEVar6;
  int iVar7;
  ulong *puVar8;
  bool bVar9;
  ulong uVar10;
  EOTBound *pEVar11;
  EOTData *pEVar12;
  EOverlapTracker *pEVar13;
  EOTBound *pEVar14;
  EInstance *pEVar15;
  EOTBound *pEVar16;
  int iVar17;
  ulong in_a3;
  EOTBound *pEVar18;
  int iVar19;
  ERedBlackTreeNode *pEVar20;
  EOTData *a;
  EBound3 bPos;
  EOverlapTracker *local_c0;
  
  fVar5 = DAT_003c552c;
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
  bVar9 = false;
                    /* end of inlined section */
  a = &pInstance->m_otd;
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
  uVar10 = (ulong)(int)(pInstance->m_otd).m_causeFlags;
  if ((uVar10 != 0) || (uVar10 = (ulong)(int)(pInstance->m_otd).m_receiveFlags, uVar10 != 0)) {
    bVar9 = true;
  }
                    /* end of inlined section */
  if (!bVar9) {
    return;
  }
  pEVar12 = &pRef->m_otd;
  if (pRef != (EInstance *)0x0) {
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
    uVar4 = (pInstance->m_otd).m_causeFlags;
    uVar10 = (ulong)(int)(uVar4 & (pRef->m_otd).m_causeFlags);
    bVar9 = false;
    if (uVar10 == (long)(int)uVar4) {
      uVar4 = (pInstance->m_otd).m_receiveFlags;
      uVar10 = (ulong)(int)(uVar4 & (pRef->m_otd).m_receiveFlags ^ uVar4);
      bVar9 = uVar10 == 0;
    }
                    /* end of inlined section */
    if (!bVar9) {
      pRef = (EInstance *)0x0;
    }
  }
  puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMin.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  uVar4 = (uint)puVar1 & 7;
  uVar3 = (uint)a & 7;
  bPos.vMin.field0_0x0._0_8_ =
       (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
       uVar10 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
       *(ulong *)((int)a - uVar3) >> uVar3 * 8;
  bPos.vMin.field0_0x0.d[2] = (pInstance->m_otd).m_bPos.vMin.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&bPos.vMin.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar4);
  local_c0 = this;
  *puVar8 = *puVar8 & -1L << (uVar4 + 1) * 8 | (ulong)bPos.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
  puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  pEVar2 = &(pInstance->m_otd).m_bPos.vMax;
  uVar3 = (uint)pEVar2 & 7;
  uVar10 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
           in_a3 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)pEVar2 - uVar3) >> uVar3 * 8;
  bPos.vMax.field0_0x0.d[2] = (pInstance->m_otd).m_bPos.vMax.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&bPos.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar4);
  *puVar8 = *puVar8 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
  uVar4 = (uint)&bPos.vMax & 7;
  puVar8 = (ulong *)((int)&bPos.vMax - uVar4);
  *puVar8 = uVar10 << uVar4 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
                    /* end of inlined section */
  if (pRef == (EInstance *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    iVar19 = 0;
    pEVar11 = (pInstance->m_otd).m_maxPos;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    pEVar14 = (pInstance->m_otd).m_minPos;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    uVar10 = CONCAT44(DAT_003c552c,DAT_003c552c);
    puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar4);
    *puVar8 = *puVar8 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
    pEVar2 = &(pInstance->m_otd).m_bPos.vMax;
    uVar4 = (uint)pEVar2 & 7;
    puVar8 = (ulong *)((int)pEVar2 - uVar4);
    *puVar8 = uVar10 << uVar4 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    *(float *)((int)&(pInstance->m_otd).m_bPos.vMax.field0_0x0 + 8) = fVar5;
    puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    pEVar2 = &(pInstance->m_otd).m_bPos.vMax;
    uVar3 = (uint)pEVar2 & 7;
    uVar10 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             uVar10 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)pEVar2 - uVar3) >> uVar3 * 8;
    fVar5 = (pInstance->m_otd).m_bPos.vMax.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar4);
    *puVar8 = *puVar8 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
    uVar4 = (uint)a & 7;
    *(ulong *)((int)a - uVar4) =
         uVar10 << uVar4 * 8 | *(ulong *)((int)a - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (pInstance->m_otd).m_bPos.vMin.field0_0x0.d[2] = fVar5;
    pEVar13 = local_c0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      pEVar11[-2].pLast = pEVar13->m_dims[0].m_pTail;
      pEVar16 = pEVar13->m_dims[0].m_pTail;
      if (pEVar16 == (EOTBound *)0x0) {
        pEVar13->m_dims[0].m_pHead = pEVar14;
      }
      else {
        pEVar16->pNext = pEVar14;
      }
      pEVar11[-2].pNext = (EOTBound *)0x0;
      pEVar13->m_dims[0].m_pTail = pEVar14;
      pEVar11->pLast = pEVar14;
      pEVar16 = pEVar13->m_dims[0].m_pTail;
      if (pEVar16 == (EOTBound *)0x0) {
        pEVar13->m_dims[0].m_pHead = pEVar11;
      }
      else {
        pEVar16->pNext = pEVar11;
      }
      pEVar11->pNext = (EOTBound *)0x0;
                    /* end of inlined section */
      iVar19 = iVar19 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      pEVar13->m_dims[0].m_pTail = pEVar11;
                    /* end of inlined section */
      pEVar11 = pEVar11 + 1;
      pEVar13 = (EOverlapTracker *)(pEVar13->m_dims + 1);
      pEVar14 = pEVar14 + 1;
    } while (iVar19 < 2);
    iVar19 = 0;
    do {
      fVar5 = DAT_003c552c;
      iVar17 = iVar19 + 1;
      iVar7 = _15EOverlapTracker_m_axes[iVar19];
      pEVar11 = a->m_minPos[iVar19].pLast;
      pEVar14 = (EOTBound *)0x0;
      if (pEVar11 != (EOTBound *)0x0) {
        pEVar15 = pEVar11->pInstance;
        while( true ) {
          pEVar16 = pEVar11;
          bVar9 = pEVar16 == (pEVar15->m_otd).m_minPos + iVar19;
          pEVar12 = (EOTData *)&(pEVar15->m_otd).m_bPos.vMax;
          if (bVar9) {
            pEVar12 = &pEVar15->m_otd;
          }
                    /* end of inlined section */
          if (*(float *)((int)pEVar12->m_minPos + iVar7 * 4 + -0x2c) < fVar5) break;
          if (bVar9) {
LAB_002c6454:
            pEVar11 = (EOTBound *)(&pEVar16->pInstance)[1];
          }
          else {
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
            bVar9 = false;
            if ((((pInstance->m_otd).m_receiveFlags & (pEVar15->m_otd).m_causeFlags) != 0) ||
               (((pInstance->m_otd).m_causeFlags & (pEVar15->m_otd).m_receiveFlags) != 0)) {
              bVar9 = true;
            }
                    /* end of inlined section */
            if (bVar9) {
              if ((pInstance != pEVar15) &&
                 (bVar9 = OverlapTest__15EOverlapTrackerRC7EBound3T1
                                    (&a->m_bPos,&(pEVar15->m_otd).m_bPos), bVar9)) {
                AddOverlap__15EOverlapTrackerP9EInstanceT1(local_c0,pInstance,pEVar15);
              }
              goto LAB_002c6454;
            }
            pEVar11 = (EOTBound *)(&pEVar16->pInstance)[1];
          }
          pEVar14 = pEVar16;
          if (pEVar11 == (EOTBound *)0x0) break;
          pEVar15 = pEVar11->pInstance;
        }
      }
      if (pEVar14 != (EOTBound *)0x0) {
        MoveBefore__15EOverlapTrackerRt11TLinkedList3Z8EOTBoundUi4Ui8P8EOTBoundT2
                  (local_c0->m_dims + iVar19,a->m_minPos + iVar19,pEVar14);
      }
      iVar19 = iVar17;
    } while (iVar17 < 2);
  }
  else {
    puVar1 = (undefined *)((int)&(pRef->m_otd).m_bPos.vMin.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    uVar4 = (uint)puVar1 & 7;
    uVar3 = (uint)&pRef->m_otd & 7;
    uVar10 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             (long)(int)pEVar12 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&pRef->m_otd - uVar3) >> uVar3 * 8;
    fVar5 = (pRef->m_otd).m_bPos.vMin.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar4);
    *puVar8 = *puVar8 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
    uVar4 = (uint)a & 7;
    *(ulong *)((int)a - uVar4) =
         uVar10 << uVar4 * 8 | *(ulong *)((int)a - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (pInstance->m_otd).m_bPos.vMin.field0_0x0.d[2] = fVar5;
    puVar1 = (undefined *)((int)&(pRef->m_otd).m_bPos.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    pEVar2 = &(pRef->m_otd).m_bPos.vMax;
    uVar3 = (uint)pEVar2 & 7;
    uVar10 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             bPos.vMin.field0_0x0._0_8_ & 0xffffffffffffffffU >> (uVar4 + 1) * 8) &
             -1L << (8 - uVar3) * 8 | *(ulong *)((int)pEVar2 - uVar3) >> uVar3 * 8;
    fVar5 = (pRef->m_otd).m_bPos.vMax.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar4);
    *puVar8 = *puVar8 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
    pEVar2 = &(pInstance->m_otd).m_bPos.vMax;
    uVar4 = (uint)pEVar2 & 7;
    puVar8 = (ulong *)((int)pEVar2 - uVar4);
    *puVar8 = uVar10 << uVar4 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (pInstance->m_otd).m_bPos.vMax.field0_0x0.d[2] = fVar5;
                    /* end of inlined section */
    iVar19 = 0;
    pEVar11 = (pInstance->m_otd).m_maxPos;
    pEVar14 = (pRef->m_otd).m_maxPos;
    pEVar16 = (pInstance->m_otd).m_minPos;
    pEVar18 = (pRef->m_otd).m_minPos;
    pEVar13 = local_c0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      if (pEVar14[-2].pLast == (EOTBound *)0x0) {
        pEVar11[-2].pNext = pEVar13->m_dims[0].m_pHead;
        pEVar6 = pEVar13->m_dims[0].m_pHead;
        if (pEVar6 == (EOTBound *)0x0) {
          pEVar13->m_dims[0].m_pTail = pEVar16;
        }
        else {
          pEVar6->pLast = pEVar16;
        }
        pEVar11[-2].pLast = (EOTBound *)0x0;
        pEVar13->m_dims[0].m_pHead = pEVar16;
      }
      else {
        (pEVar14[-2].pLast)->pNext = pEVar16;
        pEVar11[-2].pLast = pEVar14[-2].pLast;
        pEVar14[-2].pLast = pEVar16;
        pEVar11[-2].pNext = pEVar18;
      }
      if (pEVar14->pNext == (EOTBound *)0x0) {
        pEVar11->pLast = pEVar13->m_dims[0].m_pTail;
        pEVar6 = pEVar13->m_dims[0].m_pTail;
        if (pEVar6 == (EOTBound *)0x0) {
          pEVar13->m_dims[0].m_pHead = pEVar11;
        }
        else {
          pEVar6->pNext = pEVar11;
        }
        pEVar11->pNext = (EOTBound *)0x0;
        pEVar13->m_dims[0].m_pTail = pEVar11;
      }
      else {
        pEVar14->pNext->pLast = pEVar11;
        pEVar11->pNext = pEVar14->pNext;
        pEVar14->pNext = pEVar11;
        pEVar11->pLast = pEVar14;
      }
                    /* end of inlined section */
      iVar19 = iVar19 + 1;
      pEVar11 = pEVar11 + 1;
      pEVar14 = pEVar14 + 1;
      pEVar13 = (EOverlapTracker *)(pEVar13->m_dims + 1);
      pEVar16 = pEVar16 + 1;
      pEVar18 = pEVar18 + 1;
    } while (iVar19 < 2);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pEVar20 = (pRef->m_otd).m_overlaps.field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
    if (pEVar20 == (ERedBlackTreeNode *)0x0) {
      uVar4 = (pInstance->m_otd).m_receiveFlags;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      pEVar15 = (EInstance *)pEVar20->key;
      while( true ) {
        bVar9 = false;
        if ((((pInstance->m_otd).m_receiveFlags & (pEVar15->m_otd).m_causeFlags) != 0) ||
           (((pInstance->m_otd).m_causeFlags & (pEVar15->m_otd).m_receiveFlags) != 0)) {
          bVar9 = true;
        }
                    /* end of inlined section */
        if (bVar9) {
          AddOverlap__15EOverlapTrackerP9EInstanceT1(local_c0,pInstance,pEVar15);
        }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        pEVar20 = pEVar20->pNext;
                    /* end of inlined section */
        if (pEVar20 == (ERedBlackTreeNode *)0x0) break;
        pEVar15 = (EInstance *)pEVar20->key;
      }
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
      uVar4 = (pInstance->m_otd).m_receiveFlags;
    }
    bVar9 = false;
    if (((uVar4 & (pRef->m_otd).m_causeFlags) != 0) ||
       (((pInstance->m_otd).m_causeFlags & (pRef->m_otd).m_receiveFlags) != 0)) {
      bVar9 = true;
    }
                    /* end of inlined section */
    if (bVar9) {
      AddOverlap__15EOverlapTrackerP9EInstanceT1(local_c0,pInstance,pRef);
      uVar4 = pInstance->m_instanceFlags;
      goto LAB_002c6490;
    }
  }
  uVar4 = pInstance->m_instanceFlags;
LAB_002c6490:
  pInstance->m_instanceFlags = uVar4 | 0x20;
  UpdatePosition__15EOverlapTrackerP9EInstanceRC7EBound3(local_c0,pInstance,&bPos);
  return;
}

void EOverlapTracker::Remove(EInstance *pInstance) {
	EOTData &otd;
	EOTData &otd;
	int d;
	EOTBound *pNode;
	void *pNode;
	EOTBound *pNode;
	void *pNode;
	void *pNode;
	EOTBound *pNode;
	void *pNode;
	EOTBound *pNode;
	EOTBound *pNode;
	TLinkedList<EOTBound,4,8> *this;
	EOTBound *pNode;
	void *pNode;
	EOTBound *pNode;
	void *pNode;
	void *pNode;
	EOTBound *pNode;
	void *pNode;
	EOTBound *pNode;
	EOTBound *pNode;
	
  bool bVar1;
  EOTBound *pEVar2;
  EOverlapTracker *pEVar3;
  EOTBound *pEVar4;
  int iVar5;
  
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
  bVar1 = false;
  if (((pInstance->m_otd).m_causeFlags != 0) || ((pInstance->m_otd).m_receiveFlags != 0)) {
    bVar1 = true;
  }
  pEVar4 = (pInstance->m_otd).m_minPos;
                    /* end of inlined section */
  if (bVar1) {
    iVar5 = 0;
    pEVar2 = (pInstance->m_otd).m_maxPos;
    pEVar3 = this;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      if (pEVar3->m_dims[0].m_pHead == pEVar4) {
        pEVar3->m_dims[0].m_pHead = pEVar2[-2].pNext;
      }
      else {
        (pEVar2[-2].pLast)->pNext = pEVar2[-2].pNext;
      }
      if (pEVar3->m_dims[0].m_pTail == pEVar4) {
        pEVar3->m_dims[0].m_pTail = pEVar2[-2].pLast;
      }
      else {
        (pEVar2[-2].pNext)->pLast = pEVar2[-2].pLast;
      }
      if (pEVar3->m_dims[0].m_pHead == pEVar2) {
        pEVar3->m_dims[0].m_pHead = pEVar2->pNext;
      }
      else {
        pEVar2->pLast->pNext = pEVar2->pNext;
      }
      if (pEVar3->m_dims[0].m_pTail == pEVar2) {
        pEVar3->m_dims[0].m_pTail = pEVar2->pLast;
      }
      else {
        pEVar2->pNext->pLast = pEVar2->pLast;
      }
                    /* end of inlined section */
      iVar5 = iVar5 + 1;
      pEVar2 = pEVar2 + 1;
      pEVar3 = (EOverlapTracker *)(pEVar3->m_dims + 1);
      pEVar4 = pEVar4 + 1;
    } while (iVar5 < 2);
    RemoveAllOverlaps__15EOverlapTrackerP9EInstance(this,pInstance);
    pInstance->m_instanceFlags = pInstance->m_instanceFlags & 0xffffffdf;
  }
  return;
}

void EOverlapTracker::RemoveAllOverlaps(EInstance *pInstance) {
	EOTData &otd;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	EInstance *key;
	
  uint uVar1;
  void *pAddress;
  ERedBlackTreeNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (pInstance->m_otd).m_overlaps.field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pAddress = (void *)pEVar2->value;
    while( true ) {
      uVar1 = pEVar2->key;
      _allocBucketFree__FPvUiUi(pAddress,4,4);
      Remove__13ERedBlackTreeUi((ERedBlackTree *)(uVar1 + 0x48),(uint)pInstance);
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      pAddress = (void *)pEVar2->value;
    }
  }
  RemoveAll__13ERedBlackTree(&(pInstance->m_otd).m_overlaps.field0_0x0);
  return;
}

void EOverlapTracker::UpdatePosition(EInstance *pInstance, EBound3 &bNewPos) {
	EOTData &otd;
	EBound3 bOldPos;
	EOTData &otd;
	EBound3 *this;
	EBound3 &b;
	EBound3 *this;
	EBound3 &b;
	EVec3 &v;
	EVec3 *this;
	EBound3 &bInit;
	int d;
	int axis;
	EOTBound *pMaxBound;
	float newMaxVal;
	float oldMaxVal;
	EOTBound *pMinBound;
	float newMinVal;
	float oldMinVal;
	int value;
	int value;
	EOTBound *pInsertAfter;
	EOTBound *pNextBound;
	EInstance *pOther;
	bool minBound;
	EOTBound *pBound;
	int dimension;
	EOTData &otd;
	bool minBound;
	int axis;
	int value;
	EOTBound *pInsertBefore;
	EOTBound *pLastBound;
	EInstance *pOther;
	bool minBound;
	EOTBound *pBound;
	int dimension;
	EOTData &otd;
	bool minBound;
	int axis;
	int value;
	int value;
	int value;
	EVec3 *this;
	int value;
	EVec3 *this;
	int value;
	EOTBound *pInsertAfter;
	EOTBound *pNextBound;
	EInstance *pOther;
	bool minBound;
	EOTBound *pBound;
	int dimension;
	EOTData &otd;
	bool minBound;
	int axis;
	int value;
	EOTBound *pInsertBefore;
	EOTBound *pLastBound;
	EInstance *pOther;
	bool minBound;
	EOTBound *pBound;
	int dimension;
	EOTData &otd;
	bool minBound;
	int axis;
	int value;
	EVec3 *this;
	int value;
	EVec3 *this;
	int value;
	EBound3 *this;
	EBound3 &b;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  EOTBound *pEVar6;
  EInstance *pEVar7;
  ulong *puVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  EOTData *pEVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  EOTBound *pEVar16;
  ulong uVar17;
  EOTBound *pEVar18;
  EOTData *pEVar19;
  ulong uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  EBound3 bOldPos;
  
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
  bVar9 = false;
                    /* end of inlined section */
  pEVar19 = &pInstance->m_otd;
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
  uVar11 = (ulong)(int)(pInstance->m_otd).m_causeFlags;
  if ((uVar11 != 0) || (uVar11 = (ulong)(int)(pInstance->m_otd).m_receiveFlags, uVar11 != 0)) {
    bVar9 = true;
  }
                    /* end of inlined section */
  if (bVar9) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    bVar10 = false;
    bVar9 = false;
    if ((((pEVar19->m_bPos).vMin.field0_0x0.d[0] == (bNewPos->vMin).field0_0x0.d[0]) &&
        ((pInstance->m_otd).m_bPos.vMin.field0_0x0.d[1] == (bNewPos->vMin).field0_0x0.d[1])) &&
       ((pInstance->m_otd).m_bPos.vMin.field0_0x0.d[2] == (bNewPos->vMin).field0_0x0.d[2])) {
      bVar9 = true;
    }
    if ((bVar9) &&
       (bVar10 = false,
       (pInstance->m_otd).m_bPos.vMax.field0_0x0.d[0] == (bNewPos->vMax).field0_0x0.d[0])) {
      if ((pInstance->m_otd).m_bPos.vMax.field0_0x0.d[1] == (bNewPos->vMax).field0_0x0.d[1]) {
        if ((pInstance->m_otd).m_bPos.vMax.field0_0x0.d[2] == (bNewPos->vMax).field0_0x0.d[2]) {
          bVar10 = true;
        }
      }
      else {
        bVar10 = false;
      }
    }
                    /* end of inlined section */
    if (!bVar10) {
      puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMin.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)pEVar19 & 7;
      bOldPos.vMin.field0_0x0._0_8_ =
           (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           (long)(int)pInstance & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)((int)pEVar19 - uVar4) >> uVar4 * 8;
      bOldPos.vMin.field0_0x0.d[2] = (pInstance->m_otd).m_bPos.vMin.field0_0x0.d[2];
      puVar1 = (undefined *)((int)&bOldPos.vMin.field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar3);
      *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 |
                (ulong)bOldPos.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
      uVar3 = (uint)puVar1 & 7;
      pEVar2 = &(pInstance->m_otd).m_bPos.vMax;
      uVar4 = (uint)pEVar2 & 7;
      uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               bOldPos.vMin.field0_0x0._0_8_ & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
               -1L << (8 - uVar4) * 8 | *(ulong *)((int)pEVar2 - uVar4) >> uVar4 * 8;
      bOldPos.vMax.field0_0x0.d[2] = (pInstance->m_otd).m_bPos.vMax.field0_0x0.d[2];
      puVar1 = (undefined *)((int)&bOldPos.vMax.field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar3);
      *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
      uVar3 = (uint)&bOldPos.vMax & 7;
      puVar8 = (ulong *)((int)&bOldPos.vMax - uVar3);
      *puVar8 = uVar11 << uVar3 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
      iVar21 = 0;
      do {
        iVar13 = iVar21 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        iVar5 = _15EOverlapTracker_m_axes[iVar21];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        iVar15 = iVar5 * 4;
        fVar23 = (bNewPos->vMax).field0_0x0.d[iVar5];
                    /* end of inlined section */
        fVar22 = *(float *)((int)(pInstance->m_otd).m_minPos + iVar15 + -0x20);
        pEVar18 = pEVar19->m_maxPos + iVar21;
        if (fVar23 != fVar22) {
          if (fVar22 < fVar23) {
            pEVar16 = (EOTBound *)0x0;
            for (pEVar6 = pEVar18->pNext; pEVar6 != (EOTBound *)0x0; pEVar6 = pEVar6->pNext) {
                    /* end of inlined section */
              pEVar7 = pEVar6->pInstance;
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
              bVar9 = pEVar6 == (pEVar7->m_otd).m_minPos + iVar21;
              pEVar12 = (EOTData *)&(pEVar7->m_otd).m_bPos.vMax;
              if (bVar9) {
                pEVar12 = &pEVar7->m_otd;
              }
                    /* end of inlined section */
              if (fVar23 < *(float *)((int)pEVar12->m_minPos + iVar15 + -0x2c)) break;
              if (bVar9) {
                TestAddOverlap__15EOverlapTrackerRC7EBound3T1P9EInstanceT3
                          (this,&bOldPos,bNewPos,pInstance,pEVar7);
              }
              pEVar16 = pEVar6;
            }
            if (pEVar16 != (EOTBound *)0x0) {
              MoveAfter__15EOverlapTrackerRt11TLinkedList3Z8EOTBoundUi4Ui8P8EOTBoundT2
                        (this->m_dims + iVar21,pEVar18,pEVar16);
            }
          }
          else {
            pEVar16 = (EOTBound *)0x0;
            for (pEVar6 = pEVar18->pLast; pEVar6 != (EOTBound *)0x0; pEVar6 = pEVar6->pLast) {
                    /* end of inlined section */
              pEVar7 = pEVar6->pInstance;
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
              bVar9 = pEVar6 == (pEVar7->m_otd).m_minPos + iVar21;
              pEVar12 = (EOTData *)&(pEVar7->m_otd).m_bPos.vMax;
              if (bVar9) {
                pEVar12 = &pEVar7->m_otd;
              }
                    /* end of inlined section */
              if (*(float *)((int)pEVar12->m_minPos + iVar15 + -0x2c) <= fVar23) break;
              if (bVar9) {
                TestRemoveOverlap__15EOverlapTrackerRC7EBound3T1P9EInstanceT3
                          (this,&bOldPos,bNewPos,pInstance,pEVar7);
              }
              pEVar16 = pEVar6;
            }
            if (pEVar16 != (EOTBound *)0x0) {
              MoveBefore__15EOverlapTrackerRt11TLinkedList3Z8EOTBoundUi4Ui8P8EOTBoundT2
                        (this->m_dims + iVar21,pEVar18,pEVar16);
            }
          }
                    /* end of inlined section */
          *(float *)((int)(pInstance->m_otd).m_minPos + iVar5 * 4 + -0x20) =
               (bNewPos->vMax).field0_0x0.d[iVar5];
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        iVar15 = iVar5 * 4;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pfVar14 = (float *)((int)pEVar19->m_minPos + iVar15 + -0x2c);
        uVar11 = (ulong)(int)pfVar14;
        fVar23 = (bNewPos->vMin).field0_0x0.d[iVar5];
                    /* end of inlined section */
        fVar22 = *pfVar14;
        pEVar18 = pEVar19->m_minPos + iVar21;
        uVar20 = (ulong)(int)pEVar18;
        if (fVar23 != fVar22) {
          if (fVar22 < fVar23) {
            uVar17 = 0;
                    /* end of inlined section */
            for (pEVar6 = pEVar18->pNext; uVar11 = (ulong)(int)pEVar6, uVar11 != 0;
                pEVar6 = pEVar6->pNext) {
              pEVar7 = pEVar6->pInstance;
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
              bVar9 = pEVar6 != (pEVar7->m_otd).m_minPos + iVar21;
              pEVar12 = (EOTData *)&(pEVar7->m_otd).m_bPos.vMax;
              if (!bVar9) {
                pEVar12 = &pEVar7->m_otd;
              }
                    /* end of inlined section */
              if (fVar23 <= *(float *)((int)pEVar12->m_minPos + iVar15 + -0x2c)) break;
              if (bVar9) {
                TestRemoveOverlap__15EOverlapTrackerRC7EBound3T1P9EInstanceT3
                          (this,&bOldPos,bNewPos,pInstance,pEVar7);
              }
              uVar17 = uVar11;
            }
            if (uVar17 != 0) {
              MoveAfter__15EOverlapTrackerRt11TLinkedList3Z8EOTBoundUi4Ui8P8EOTBoundT2
                        (this->m_dims + iVar21,pEVar18,(EOTBound *)uVar17);
              uVar11 = uVar20;
            }
          }
          else {
            uVar17 = 0;
                    /* end of inlined section */
            for (pEVar6 = pEVar18->pLast; uVar11 = (ulong)(int)pEVar6, uVar11 != 0;
                pEVar6 = pEVar6->pLast) {
              pEVar7 = pEVar6->pInstance;
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
              bVar9 = pEVar6 != (pEVar7->m_otd).m_minPos + iVar21;
              pEVar12 = (EOTData *)&(pEVar7->m_otd).m_bPos.vMax;
              if (!bVar9) {
                pEVar12 = &pEVar7->m_otd;
              }
                    /* end of inlined section */
              if (*(float *)((int)pEVar12->m_minPos + iVar15 + -0x2c) < fVar23) break;
              if (bVar9) {
                TestAddOverlap__15EOverlapTrackerRC7EBound3T1P9EInstanceT3
                          (this,&bOldPos,bNewPos,pInstance,pEVar7);
              }
              uVar17 = uVar11;
            }
            if (uVar17 != 0) {
              MoveBefore__15EOverlapTrackerRt11TLinkedList3Z8EOTBoundUi4Ui8P8EOTBoundT2
                        (this->m_dims + iVar21,pEVar18,(EOTBound *)uVar17);
              uVar11 = uVar20;
            }
          }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          *(float *)((int)pEVar19->m_minPos + iVar15 + -0x2c) = (bNewPos->vMin).field0_0x0.d[iVar5];
        }
        iVar21 = iVar13;
      } while (iVar13 < 2);
      puVar1 = (undefined *)((int)&(bNewPos->vMin).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)bNewPos & 7;
      uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)bNewPos - uVar4) >> uVar4 * 8;
      fVar22 = (bNewPos->vMin).field0_0x0.d[2];
      puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMin.field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar3);
      *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
      uVar3 = (uint)pEVar19 & 7;
      *(ulong *)((int)pEVar19 - uVar3) =
           uVar11 << uVar3 * 8 |
           *(ulong *)((int)pEVar19 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      (pInstance->m_otd).m_bPos.vMin.field0_0x0.d[2] = fVar22;
      puVar1 = (undefined *)((int)&(bNewPos->vMax).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&bNewPos->vMax & 7;
      uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&bNewPos->vMax - uVar4) >> uVar4 * 8;
      fVar22 = (bNewPos->vMax).field0_0x0.d[2];
      puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMax.field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar3);
      *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
      pEVar2 = &(pInstance->m_otd).m_bPos.vMax;
      uVar3 = (uint)pEVar2 & 7;
      puVar8 = (ulong *)((int)pEVar2 - uVar3);
      *puVar8 = uVar11 << uVar3 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      (pInstance->m_otd).m_bPos.vMax.field0_0x0.d[2] = fVar22;
                    /* end of inlined section */
    }
  }
  else {
    puVar1 = (undefined *)((int)&(bNewPos->vMin).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)bNewPos & 7;
    uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)bNewPos - uVar4) >> uVar4 * 8;
    fVar22 = (bNewPos->vMin).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMin.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar3);
    *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
    uVar3 = (uint)pEVar19 & 7;
    *(ulong *)((int)pEVar19 - uVar3) =
         uVar11 << uVar3 * 8 |
         *(ulong *)((int)pEVar19 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (pInstance->m_otd).m_bPos.vMin.field0_0x0.d[2] = fVar22;
    puVar1 = (undefined *)((int)&(bNewPos->vMax).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&bNewPos->vMax & 7;
    uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)&bNewPos->vMax - uVar4) >> uVar4 * 8;
    fVar22 = (bNewPos->vMax).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(pInstance->m_otd).m_bPos.vMax.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar3);
    *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
    pEVar2 = &(pInstance->m_otd).m_bPos.vMax;
    uVar3 = (uint)pEVar2 & 7;
    puVar8 = (ulong *)((int)pEVar2 - uVar3);
    *puVar8 = uVar11 << uVar3 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (pInstance->m_otd).m_bPos.vMax.field0_0x0.d[2] = fVar22;
                    /* end of inlined section */
  }
  return;
}

bool EOverlapTracker::OverlapTest(EBound3 &a, EBound3 &b) {
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  bVar1 = false;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (((((a->vMin).field0_0x0.d[0] <= (b->vMax).field0_0x0.d[0]) &&
       ((b->vMin).field0_0x0.d[0] <= (a->vMax).field0_0x0.d[0])) &&
      ((a->vMin).field0_0x0.d[1] <= (b->vMax).field0_0x0.d[1])) &&
     ((b->vMin).field0_0x0.d[1] <= (a->vMax).field0_0x0.d[1])) {
    bVar1 = true;
  }
  return bVar1;
}

void EOverlapTracker::TestAddOverlap(EBound3 &bOldPos, EBound3 &bNewPos, EInstance *pSelf, EInstance *pOther) {
	EOTData &self;
	EOTData &other;
	
  bool bVar1;
  
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
  bVar1 = false;
  if ((((pSelf->m_otd).m_receiveFlags & (pOther->m_otd).m_causeFlags) != 0) ||
     (((pSelf->m_otd).m_causeFlags & (pOther->m_otd).m_receiveFlags) != 0)) {
    bVar1 = true;
  }
                    /* end of inlined section */
  if ((((bVar1) && (pSelf != pOther)) &&
      (bVar1 = OverlapTest__15EOverlapTrackerRC7EBound3T1(bNewPos,&(pOther->m_otd).m_bPos), bVar1))
     && (bVar1 = OverlapTest__15EOverlapTrackerRC7EBound3T1(bOldPos,&(pOther->m_otd).m_bPos), !bVar1
        )) {
    AddOverlap__15EOverlapTrackerP9EInstanceT1(this,pSelf,pOther);
  }
  return;
}

void EOverlapTracker::AddOverlap(EInstance *pSelf, EInstance *pOther) {
	EInstance *key;
	EOTData &self;
	EOTData &other;
	EInstance *key;
	
  undefined1 *puVar1;
  uint *value;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar1 = Insert__13ERedBlackTreeUiUib(&(pSelf->m_otd).m_overlaps.field0_0x0,(uint)pOther,0,false);
                    /* end of inlined section */
  if (puVar1 != (undefined1 *)0x0) {
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptrackertypes.h */
    value = (uint *)_allocBucketAlloc__FUiUi(4,4);
                    /* end of inlined section */
    *value = (pSelf->m_otd).m_receiveFlags & (pOther->m_otd).m_causeFlags |
             (pSelf->m_otd).m_causeFlags & (pOther->m_otd).m_receiveFlags;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    *(uint **)(puVar1 + 0x1c) = value;
    Insert__13ERedBlackTreeUiUib
              (&(pOther->m_otd).m_overlaps.field0_0x0,(uint)pSelf,(uint)value,false);
  }
                    /* end of inlined section */
  return;
}

void EOverlapTracker::TestRemoveOverlap(EBound3 &bOldPos, EBound3 &bNewPos, EInstance *pSelf, EInstance *pOther) {
	EOTData &self;
	EOTData &other;
	
  bool bVar1;
  
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/collision/e_overlaptracker.h */
  bVar1 = false;
  if ((((pSelf->m_otd).m_receiveFlags & (pOther->m_otd).m_causeFlags) != 0) ||
     (((pSelf->m_otd).m_causeFlags & (pOther->m_otd).m_receiveFlags) != 0)) {
    bVar1 = true;
  }
                    /* end of inlined section */
  if ((((bVar1) && (pSelf != pOther)) &&
      (bVar1 = OverlapTest__15EOverlapTrackerRC7EBound3T1(bOldPos,&(pOther->m_otd).m_bPos), bVar1))
     && (bVar1 = OverlapTest__15EOverlapTrackerRC7EBound3T1(bNewPos,&(pOther->m_otd).m_bPos), !bVar1
        )) {
    RemoveOverlap__15EOverlapTrackerP9EInstanceT1(this,pSelf,pOther);
  }
  return;
}

void EOverlapTracker::RemoveOverlap(EInstance *pSelf, EInstance *pOther) {
	EOTOverlapPair *pOverlapPair;
	TRedBlackTree<EInstance *,EOTOverlapPair *> *this;
	EInstance *key;
	EInstance *key;
	
  undefined1 *i;
  TRedBlackTree_EInstance___EOTOverlapPair___ *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EOTOverlapPair *pOverlapPair;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  this_00 = &(pSelf->m_otd).m_overlaps;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  i = Find__C13ERedBlackTreeUiPUi(&this_00->field0_0x0,(uint)pOther,(uint *)&pOverlapPair);
                    /* end of inlined section */
  if (i != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Remove__13ERedBlackTreeP17RBIteratorPtrType(&this_00->field0_0x0,i);
    Remove__13ERedBlackTreeUi(&(pOther->m_otd).m_overlaps.field0_0x0,(uint)pSelf);
    _allocBucketFree__FPvUiUi(pOverlapPair,4,4);
  }
                    /* end of inlined section */
  return;
}

void EOverlapTracker::MoveAfter(TLinkedList<EOTBound,4,8> &axisList, EOTBound *pBound, EOTBound *pAfter) {
	TLinkedList<EOTBound,4,8> *this;
	EOTBound *pNode;
	void *pNode;
	EOTBound *pNode;
	void *pNode;
	void *pNode;
	EOTBound *pNode;
	void *pNode;
	EOTBound *pNode;
	EOTBound *pNode;
	TLinkedList<EOTBound,4,8> *this;
	EOTBound *pTargetNode;
	EOTBound *pNewNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	EOTBound *pNode;
	EOTBound *pNewNode;
	TLinkedList<EOTBound,4,8> *this;
	EOTBound *pNode;
	void *pNode;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  if (axisList->m_pHead == pBound) {
    axisList->m_pHead = pBound->pNext;
  }
  else {
    pBound->pLast->pNext = pBound->pNext;
  }
  if (axisList->m_pTail == pBound) {
    axisList->m_pTail = pBound->pLast;
  }
  else {
    pBound->pNext->pLast = pBound->pLast;
  }
  if (pAfter->pNext == (EOTBound *)0x0) {
    pBound->pLast = axisList->m_pTail;
    if (axisList->m_pTail == (EOTBound *)0x0) {
      axisList->m_pHead = pBound;
    }
    else {
      axisList->m_pTail->pNext = pBound;
    }
    pBound->pNext = (EOTBound *)0x0;
    axisList->m_pTail = pBound;
    return;
  }
  pAfter->pNext->pLast = pBound;
  pBound->pNext = pAfter->pNext;
  pAfter->pNext = pBound;
  pBound->pLast = pAfter;
  return;
}

void EOverlapTracker::MoveBefore(TLinkedList<EOTBound,4,8> &axisList, EOTBound *pBound, EOTBound *pBefore) {
	TLinkedList<EOTBound,4,8> *this;
	EOTBound *pNode;
	void *pNode;
	EOTBound *pNode;
	void *pNode;
	void *pNode;
	EOTBound *pNode;
	void *pNode;
	EOTBound *pNode;
	EOTBound *pNode;
	TLinkedList<EOTBound,4,8> *this;
	EOTBound *pTargetNode;
	EOTBound *pNewNode;
	EOTBound *pNode;
	EOTBound *pNode;
	EOTBound *pNode;
	EOTBound *pNode;
	EOTBound *pNode;
	void *pNode;
	EOTBound *pNewNode;
	TLinkedList<EOTBound,4,8> *this;
	void *pNode;
	EOTBound *pNode;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  if (axisList->m_pHead == pBound) {
    axisList->m_pHead = pBound->pNext;
  }
  else {
    pBound->pLast->pNext = pBound->pNext;
  }
  if (axisList->m_pTail == pBound) {
    axisList->m_pTail = pBound->pLast;
  }
  else {
    pBound->pNext->pLast = pBound->pLast;
  }
  if (pBefore->pLast == (EOTBound *)0x0) {
    pBound->pNext = axisList->m_pHead;
    if (axisList->m_pHead == (EOTBound *)0x0) {
      axisList->m_pTail = pBound;
    }
    else {
      axisList->m_pHead->pLast = pBound;
    }
    pBound->pLast = (EOTBound *)0x0;
    axisList->m_pHead = pBound;
    return;
  }
  pBefore->pLast->pNext = pBound;
  pBound->pLast = pBefore->pLast;
  pBefore->pLast = pBound;
  pBound->pNext = pBefore;
  return;
}
