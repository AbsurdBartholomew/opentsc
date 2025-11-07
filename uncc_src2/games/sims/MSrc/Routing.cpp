// STATUS: NOT STARTED

#include "Routing.h"

struct simple_alloc<ASTNode,__malloc_alloc_template<0> > {
	simple_alloc<ASTNode,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static ASTNode* allocate(/* parameters unknown */);
	static ASTNode* allocate(/* parameters unknown */);
	static ASTNode* allocate(/* parameters unknown */);
	static ASTNode* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

SpacePartition Path::fSpacePartition = {
	/* .fParams = */ NULL,
	/* .fPartition1 = */ NULL,
	/* .fPartition2 = */ NULL,
	/* .fFree = */ {
		/* .start = */ NULL,
		/* .finish = */ NULL,
		/* .end_of_storage = */ NULL
	},
	/* .fPreGoalNodes = */ {
		/* base class 0 = */ {
			/* .start = */ NULL,
			/* .finish = */ NULL,
			/* .end_of_storage = */ NULL
		}
	},
	/* .fPostStartNodes = */ {
		/* base class 0 = */ {
			/* .start = */ NULL,
			/* .finish = */ NULL,
			/* .end_of_storage = */ NULL
		}
	},
	/* .fSuccessorTable = */ {
		/* base class 0 = */ {
			/* .start = */ NULL,
			/* .finish = */ NULL,
			/* .end_of_storage = */ NULL
		}
	},
	/* .fNodeList = */ {
		/* .start = */ NULL,
		/* .finish = */ NULL,
		/* .end_of_storage = */ NULL
	}
};

PenaltyRect* PenaltyRect::PenaltyRect(RECT *r, Int penalty) {
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_v1;
  ulong uVar7;
  
  puVar1 = (undefined *)((int)&r->top + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)r & 7;
  uVar6 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)r - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&r->bottom + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&r->right & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)&r->right - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&(this->bounds).top + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
  uVar3 = (uint)this & 7;
  *(ulong *)((int)this - uVar3) =
       uVar6 << uVar3 * 8 | *(ulong *)((int)this - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->bounds).bottom + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  piVar2 = &(this->bounds).right;
  uVar3 = (uint)piVar2 & 7;
  puVar5 = (ulong *)((int)piVar2 - uVar3);
  *puVar5 = uVar7 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  this->penalty = penalty;
  return this;
}

PenaltyRect* PenaltyRect::PenaltyRect(Int l, Int t, Int r, Int b, Int penalty) {
  (this->bounds).left = l;
  (this->bounds).right = r;
  (this->bounds).top = t;
  (this->bounds).bottom = b;
  this->penalty = penalty;
  return this;
}

Int FindIntersectingRect(RECT *r, Partition *partition) {
	PenaltyRect *i;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	
  int iVar1;
  PenaltyRect *pPVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pPVar2 = partition->start;
                    /* end of inlined section */
  if (pPVar2 != partition->finish) {
    iVar1 = (pPVar2->bounds).bottom;
    while( true ) {
      if ((((r->top < iVar1) && ((pPVar2->bounds).top < r->bottom)) &&
          (r->left < (pPVar2->bounds).right)) && ((pPVar2->bounds).left < r->right)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        return ((int)pPVar2 - (int)partition->start) * -0x33333333 >> 2;
      }
      if (pPVar2 + 1 == partition->finish) break;
      iVar1 = pPVar2[1].bounds.bottom;
      pPVar2 = pPVar2 + 1;
    }
  }
  return -1;
}

void SpacePartition::FindInterfaceRect(NodeRef n1, NodeRef n2, RECT *outRect) {
	ASTNode *node1;
	ASTNode *node2;
	
  ASTNode *n1_00;
  ASTNode *n2_00;
  
  n1_00 = GetNode__14SpacePartitioni(this,n1);
  n2_00 = GetNode__14SpacePartitioni(this,n2);
  if ((n1_00 == (ASTNode *)0x0) || (n2_00 == (ASTNode *)0x0)) {
    SetRect__FP7tagRECTiiii(outRect,0,0,0,0);
  }
  else {
    FindInterfaceRect__14SpacePartitionPC7ASTNodeT1P7tagRECT(this,n1_00,n2_00,outRect);
  }
  return;
}

void SpacePartition::FindInterfaceRect(ASTNode *n1, ASTNode *n2, RECT *outRect) {
	RECT tem;
	unsigned int n;
	unsigned int n;
	
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  PenaltyRect *pPVar6;
  ulong uVar7;
  ulong uVar8;
  tagRECT tem;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pPVar6 = (this->fFree).start + n1->rectNumber;
  puVar2 = (undefined *)((int)&(pPVar6->bounds).top + 3);
                    /* end of inlined section */
  uVar3 = (uint)puVar2 & 7;
  uVar4 = (uint)pPVar6 & 7;
  uVar7 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          (long)(n1->rectNumber * 0x14) & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
          -1L << (8 - uVar4) * 8 | *(ulong *)((int)pPVar6 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)&(pPVar6->bounds).bottom + 3);
  uVar3 = (uint)puVar2 & 7;
  piVar1 = &(pPVar6->bounds).right;
  uVar4 = (uint)piVar1 & 7;
  uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          (long)(int)outRect & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)&outRect->top + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)outRect & 7;
  *(ulong *)((int)outRect - uVar3) =
       uVar7 << uVar3 * 8 |
       *(ulong *)((int)outRect - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar2 = (undefined *)((int)&outRect->bottom + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
  uVar3 = (uint)&outRect->right & 7;
  puVar5 = (ulong *)((int)&outRect->right - uVar3);
  *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pPVar6 = (this->fFree).start + n2->rectNumber;
  puVar2 = (undefined *)((int)&(pPVar6->bounds).top + 3);
                    /* end of inlined section */
  uVar3 = (uint)puVar2 & 7;
  uVar4 = (uint)pPVar6 & 7;
  tem._0_8_ = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
              (long)(n2->rectNumber * 0x14) & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
              -1L << (8 - uVar4) * 8 | *(ulong *)((int)pPVar6 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)&(pPVar6->bounds).bottom + 3);
  uVar3 = (uint)puVar2 & 7;
  piVar1 = &(pPVar6->bounds).right;
  uVar4 = (uint)piVar1 & 7;
  tem._8_8_ = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)&tem.top + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | tem._0_8_ >> (7 - uVar3) * 8;
  puVar2 = (undefined *)((int)&tem.bottom + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | tem._8_8_ >> (7 - uVar3) * 8;
  localInflateRect__FP7tagRECTii(&tem,1,1);
  localInflateRect__FP7tagRECTii(outRect,1,1);
  localIntersectRect__FP7tagRECTPC7tagRECTT1(outRect,&tem,outRect);
  return;
}

POINT SpacePartition::FindInterfacePoint(ASTNode *n1, ASTNode *n2) {
	POINT i;
	RECT tem;
	
  uint uVar1;
  ulong *puVar2;
  tagPOINT tVar3;
  undefined8 unaff_retaddr;
  tagPOINT i;
  tagRECT tem;
  ulong uStack_19;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  FindInterfaceRect__14SpacePartitionPC7ASTNodeT1P7tagRECT(this,n1,n2,&tem);
  tVar3 = (tagPOINT)CONCAT44((tem.bottom + tem.top) / 2,(tem.right + tem.left) / 2);
  uVar1 = (uint)&uStack_19 & 7;
  puVar2 = (ulong *)((int)&uStack_19 - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)tVar3 >> (7 - uVar1) * 8;
  return tVar3;
}

SpacePartition* SpacePartition::SpacePartition() {
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	ASTNodeRefList *this;
	vector<int,__malloc_alloc_template<0> > *this;
	ASTNodeRefList *this;
	vector<int,__malloc_alloc_template<0> > *this;
	ASTNodeRefList *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fFree).start = (PenaltyRect *)0x0;
  (this->fFree).end_of_storage = (PenaltyRect *)0x0;
  (this->fFree).finish = (PenaltyRect *)0x0;
  (this->fPreGoalNodes).field0_0x0.start = (int *)0x0;
  (this->fPreGoalNodes).field0_0x0.end_of_storage = (int *)0x0;
  (this->fPreGoalNodes).field0_0x0.finish = (int *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fPostStartNodes).field0_0x0.start = (int *)0x0;
  (this->fPostStartNodes).field0_0x0.end_of_storage = (int *)0x0;
  (this->fPostStartNodes).field0_0x0.finish = (int *)0x0;
  (this->fSuccessorTable).field0_0x0.start = (int *)0x0;
  (this->fSuccessorTable).field0_0x0.end_of_storage = (int *)0x0;
  (this->fSuccessorTable).field0_0x0.finish = (int *)0x0;
  (this->fNodeList).start = (ASTNode *)0x0;
  (this->fNodeList).end_of_storage = (ASTNode *)0x0;
  (this->fNodeList).finish = (ASTNode *)0x0;
  return this;
}

RectRef SpacePartition::GetIntersectingFreeRect(RECT *r) {
	PenaltyRect *i;
	
  PenaltyRect *pPVar1;
  int iVar2;
  PenaltyRect *pPVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pPVar1 = (this->fFree).finish;
  pPVar3 = (this->fFree).start;
                    /* end of inlined section */
  if (pPVar3 != pPVar1) {
    iVar2 = (pPVar3->bounds).bottom;
    while( true ) {
      if ((((r->top < iVar2) && ((pPVar3->bounds).top < r->bottom)) &&
          (r->left < (pPVar3->bounds).right)) && ((pPVar3->bounds).left < r->right)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        return ((int)pPVar3 - (int)(this->fFree).start) * -0x33333333 >> 2;
      }
      if (pPVar3 + 1 == pPVar1) break;
      iVar2 = pPVar3[1].bounds.bottom;
      pPVar3 = pPVar3 + 1;
    }
  }
  return -1;
}

PenaltyRect* SpacePartition::GetIntersectingPartitionRect(RECT *r) {
	PenaltyRect *found;
	PenaltyRect *i;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	
  vector_PenaltyRect___malloc_alloc_template_0___ *pvVar1;
  int iVar2;
  PenaltyRect *pPVar3;
  PenaltyRect *pPVar4;
  PenaltyRect *pPVar5;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pPVar4 = this->fPartition1->finish;
  pPVar3 = this->fPartition1->start;
                    /* end of inlined section */
  pPVar5 = (PenaltyRect *)0x0;
  if (pPVar3 != pPVar4) {
    iVar2 = (pPVar3->bounds).bottom;
    while( true ) {
      if ((((r->top < iVar2) && ((pPVar3->bounds).top < r->bottom)) &&
          (r->left < (pPVar3->bounds).right)) &&
         (((pPVar3->bounds).left < r->right && (pPVar5 = pPVar3, pPVar3->penalty == 0x7fffffff)))) {
        return pPVar3;
      }
      if (pPVar3 + 1 == pPVar4) break;
      iVar2 = pPVar3[1].bounds.bottom;
      pPVar3 = pPVar3 + 1;
    }
  }
  pvVar1 = this->fPartition2;
  if (pvVar1 == (vector_PenaltyRect___malloc_alloc_template_0___ *)0x0) {
    return pPVar5;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pPVar4 = pvVar1->start;
                    /* end of inlined section */
  if (pPVar4 != pvVar1->finish) {
    iVar2 = (pPVar4->bounds).bottom;
    while( true ) {
      if (((r->top < iVar2) && ((pPVar4->bounds).top < r->bottom)) &&
         ((r->left < (pPVar4->bounds).right &&
          (((pPVar4->bounds).left < r->right && (pPVar5 = pPVar4, pPVar4->penalty == 0x7fffffff)))))
         ) {
        return pPVar4;
      }
      if (pPVar4 + 1 == pvVar1->finish) break;
      iVar2 = pPVar4[1].bounds.bottom;
      pPVar4 = pPVar4 + 1;
    }
  }
  return pPVar5;
}

ASTNode* SpacePartition::GetNode(NodeRef n) {
	unsigned int n;
	
  ASTNode *pAVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if ((-1 < n) &&
     (pAVar1 = (this->fNodeList).start,
     (uint)n < (uint)(((int)(this->fNodeList).finish - (int)pAVar1) * -0x45d1745d >> 2))) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    return pAVar1 + n;
  }
  return (ASTNode *)0x0;
}

bool SpacePartition::GetNodeRectangle(NodeRef nr, RECT *r) {
	ASTNode *node;
	
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ASTNode *pAVar6;
  PenaltyRect *pPVar7;
  ulong uVar8;
  ulong in_a3;
  ulong uVar9;
  
  if (nr != -1) {
    pAVar6 = GetNode__14SpacePartitioni(this,nr);
    if (pAVar6 == (ASTNode *)0x0) {
      return false;
    }
    uVar8 = (ulong)pAVar6->rectNumber;
    if ((long)uVar8 < 0) {
      return false;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pPVar7 = (this->fFree).start;
                    /* end of inlined section */
    if (uVar8 < (ulong)(long)(((int)(this->fFree).finish - (int)pPVar7) * -0x33333333 >> 2)) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pPVar7 = pPVar7 + pAVar6->rectNumber;
      puVar2 = (undefined *)((int)&(pPVar7->bounds).top + 3);
                    /* end of inlined section */
      uVar3 = (uint)puVar2 & 7;
      uVar4 = (uint)pPVar7 & 7;
      uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)pPVar7 - uVar4) >> uVar4 * 8;
      puVar2 = (undefined *)((int)&(pPVar7->bounds).bottom + 3);
      uVar3 = (uint)puVar2 & 7;
      piVar1 = &(pPVar7->bounds).right;
      uVar4 = (uint)piVar1 & 7;
      uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
      puVar2 = (undefined *)((int)&r->top + 3);
      uVar3 = (uint)puVar2 & 7;
      puVar5 = (ulong *)(puVar2 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
      uVar3 = (uint)r & 7;
      *(ulong *)((int)r - uVar3) =
           uVar9 << uVar3 * 8 | *(ulong *)((int)r - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar2 = (undefined *)((int)&r->bottom + 3);
      uVar3 = (uint)puVar2 & 7;
      puVar5 = (ulong *)(puVar2 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
      uVar3 = (uint)&r->right & 7;
      puVar5 = (ulong *)((int)&r->right - uVar3);
      *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      return true;
    }
  }
  return false;
}

bool SpacePartition::IsSpatialNode(NodeRef n) {
  return 2 < n + 1U;
}

float SpacePartition::EstimateDistanceToGoal(NodeRef n) {
	ASTNode *node;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	float delx;
	float dely;
	
  uint uVar1;
  vector_PenaltyRect___malloc_alloc_template_0___ *pvVar2;
  ASTNode *pAVar3;
  PenaltyRect *pPVar4;
  float fVar5;
  float fVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if (((((uint)n < 2) || (pAVar3 = GetNode__14SpacePartitioni(this,n), pAVar3 == (ASTNode *)0x0)) ||
      (uVar1 = pAVar3->goalNumber, (int)uVar1 < 0)) ||
     (((pvVar2 = this->fParams->goalList, pPVar4 = pvVar2->start,
       (uint)(((int)pvVar2->finish - (int)pPVar4) * -0x33333333 >> 2) <= uVar1 ||
       (pAVar3->rectNumber < 0)) ||
      ((uint)(((int)(this->fFree).finish - (int)(this->fFree).start) * -0x33333333 >> 2) <=
       (uint)pAVar3->rectNumber)))) {
    fVar5 = 0.0;
  }
  else {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pPVar4 = pPVar4 + uVar1;
                    /* end of inlined section */
    fVar5 = (float)(((pPVar4->bounds).left + (pPVar4->bounds).right) / 2 - (pAVar3->entry).x);
    fVar6 = (float)(((pPVar4->bounds).top + (pPVar4->bounds).bottom) / 2 - (pAVar3->entry).y);
    fVar5 = sqrtf(fVar5 * fVar5 + fVar6 * fVar6);
  }
  return fVar5;
}

float SpacePartition::MeasureDistance(NodeRef parent, NodeRef child, POINT *foundEntryPoint) {
	ASTNode *n;
	ASTNode *s;
	float xdel;
	float ydel;
	float dist;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  vector_PenaltyRect___malloc_alloc_template_0___ *pvVar5;
  PenaltyRect *pPVar6;
  ulong *puVar7;
  ASTNode *n1;
  ASTNode *n2;
  tagPOINT tVar8;
  int iVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  
  n1 = GetNode__14SpacePartitioni(this,parent);
  n2 = GetNode__14SpacePartitioni(this,child);
  if ((n1 != (ASTNode *)0x0) && (n2 != (ASTNode *)0x0)) {
    if (parent == 0) {
      uVar2 = n2->goalNumber;
      if (-1 < (int)uVar2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        pvVar5 = this->fParams->goalList;
        pPVar6 = pvVar5->start;
                    /* end of inlined section */
        if (uVar2 < (uint)(((int)pvVar5->finish - (int)pPVar6) * -0x33333333 >> 2)) {
          puVar1 = (undefined *)((int)&(n1->entry).y + 3);
                    /* end of inlined section */
          uVar4 = (uint)puVar1 & 7;
          uVar3 = (uint)&n1->entry & 7;
          uVar10 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                   (long)(int)pvVar5 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) &
                   -1L << (8 - uVar3) * 8 | *(ulong *)((int)&n1->entry - uVar3) >> uVar3 * 8;
          puVar1 = (undefined *)((int)&foundEntryPoint->y + 3);
          uVar4 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar4);
          *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
          uVar4 = (uint)foundEntryPoint & 7;
          *(ulong *)((int)foundEntryPoint - uVar4) =
               uVar10 << uVar4 * 8 |
               *(ulong *)((int)foundEntryPoint - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
          return (float)pPVar6[uVar2].penalty;
        }
      }
    }
    else if (child != 1) {
      if (n1->rectNumber == n2->rectNumber) {
        puVar1 = (undefined *)((int)&(n1->entry).y + 3);
        uVar2 = (uint)puVar1 & 7;
        uVar4 = (uint)&n1->entry & 7;
        uVar10 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                 (long)(int)this & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar4) * 8
                 | *(ulong *)((int)&n1->entry - uVar4) >> uVar4 * 8;
        puVar1 = (undefined *)((int)&foundEntryPoint->y + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar7 = (ulong *)(puVar1 + -uVar2);
        *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
        uVar2 = (uint)foundEntryPoint & 7;
        *(ulong *)((int)foundEntryPoint - uVar2) =
             uVar10 << uVar2 * 8 |
             *(ulong *)((int)foundEntryPoint - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        iVar9 = foundEntryPoint->y;
      }
      else {
        tVar8 = FindInterfacePoint__14SpacePartitionPC7ASTNodeT1(this,n1,n2);
        puVar1 = (undefined *)((int)&foundEntryPoint->y + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar7 = (ulong *)(puVar1 + -uVar2);
        *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | (ulong)tVar8 >> (7 - uVar2) * 8;
        uVar2 = (uint)foundEntryPoint & 7;
        *(ulong *)((int)foundEntryPoint - uVar2) =
             (long)tVar8 << uVar2 * 8 |
             *(ulong *)((int)foundEntryPoint - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        iVar9 = foundEntryPoint->y;
      }
      fVar11 = (float)(foundEntryPoint->x - (n1->entry).x);
      fVar12 = (float)(iVar9 - (n1->entry).y);
      fVar11 = sqrtf(fVar11 * fVar11 + fVar12 * fVar12);
      return (fVar11 + 1.0) * (float)(n1->penalty + n2->penalty + 2 >> 1);
    }
  }
  return 0.0;
}

void SpacePartition::GetTerminals(NodeRef *start, NodeRef *goal) {
  *start = 0;
  *goal = 1;
  return;
}

Int SpacePartition::CountSuccessors(NodeRef n) {
	ASTNode *node;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef *i;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	ASTNodeRefList *this;
	NodeRef val;
	NodeRef *i;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef val;
	NodeRef *i;
	NodeRef *i;
	ASTNode *preGoalNode;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	
  bool bVar1;
  ASTNode *pAVar2;
  ASTNodeRefList *this_00;
  int *piVar3;
  int iVar4;
  ASTNode *pAVar5;
  int *piVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  int local_90 [4];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  pAVar2 = GetNode__14SpacePartitioni(this,n);
  if (pAVar2 == (ASTNode *)0x0) {
    iVar4 = 0;
  }
  else if (pAVar2->succCount == -1) {
    pAVar2->succCount = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    this_00 = &this->fSuccessorTable;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    pAVar2->succTableIndex =
         (int)(this->fSuccessorTable).field0_0x0.finish -
         (int)(this->fSuccessorTable).field0_0x0.start >> 2;
    if (n == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      piVar6 = (this->fPostStartNodes).field0_0x0.start;
                    /* end of inlined section */
      if (piVar6 != (this->fPostStartNodes).field0_0x0.finish) {
        iVar4 = *piVar6;
        while( true ) {
          if (iVar4 == -1) {
            piVar3 = (this->fPostStartNodes).field0_0x0.finish;
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            piVar3 = (this->fSuccessorTable).field0_0x0.finish;
            if (piVar3 == (this->fSuccessorTable).field0_0x0.end_of_storage) {
              insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                        ((vector_int___malloc_alloc_template_0_____3_5561 *)this_00,piVar3,piVar6);
            }
            else {
              *piVar3 = iVar4;
              (this->fSuccessorTable).field0_0x0.finish =
                   (this->fSuccessorTable).field0_0x0.finish + 1;
            }
                    /* end of inlined section */
            StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(&this_00->field0_0x0);
            pAVar2->succCount = pAVar2->succCount + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            piVar3 = (this->fPostStartNodes).field0_0x0.finish;
          }
                    /* end of inlined section */
          piVar6 = piVar6 + 1;
          if (piVar6 == piVar3) break;
          iVar4 = *piVar6;
        }
        return pAVar2->succCount;
      }
    }
    else {
                    /* end of inlined section */
      if (n == 1) {
        return pAVar2->succCount;
      }
      BuildSpatialSuccessorList__14SpacePartitioni(this,n);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
                    /* end of inlined section */
      pAVar2 = GetNode__14SpacePartitioni(this,n);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
      piVar6 = (this->fPreGoalNodes).field0_0x0.start;
      piVar3 = (this->fPreGoalNodes).field0_0x0.finish;
      if (piVar6 == piVar3) {
LAB_0020b854:
        bVar1 = false;
      }
      else {
        iVar4 = *piVar6;
        while (piVar6 = piVar6 + 1, n != iVar4) {
          if (piVar6 == piVar3) goto LAB_0020b854;
          iVar4 = *piVar6;
        }
        bVar1 = true;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
      }
                    /* end of inlined section */
      if (bVar1) {
        pAVar2->succCount = pAVar2->succCount + 1;
        local_90[0] = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        piVar6 = (this->fSuccessorTable).field0_0x0.finish;
        if (piVar6 == (this->fSuccessorTable).field0_0x0.end_of_storage) {
          insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                    ((vector_int___malloc_alloc_template_0_____3_5561 *)this_00,piVar6,local_90);
        }
        else {
          *piVar6 = 1;
          (this->fSuccessorTable).field0_0x0.finish = (this->fSuccessorTable).field0_0x0.finish + 1;
        }
                    /* end of inlined section */
        StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(&this_00->field0_0x0);
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
      piVar6 = (this->fPostStartNodes).field0_0x0.finish;
      piVar3 = (this->fPostStartNodes).field0_0x0.start;
      if (piVar3 == piVar6) {
        bVar1 = false;
      }
      else {
        iVar4 = *piVar3;
        while (piVar3 = piVar3 + 1, n != iVar4) {
          if (piVar3 == piVar6) {
            bVar1 = false;
            goto LAB_0020b8e8;
          }
          iVar4 = *piVar3;
        }
        bVar1 = true;
      }
LAB_0020b8e8:
                    /* end of inlined section */
      if (!bVar1) {
        return pAVar2->succCount;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      piVar6 = (this->fPreGoalNodes).field0_0x0.start;
                    /* end of inlined section */
      if (piVar6 != (this->fPreGoalNodes).field0_0x0.finish) {
        iVar4 = *piVar6;
        while( true ) {
          if (iVar4 == -1) {
            piVar3 = (this->fPreGoalNodes).field0_0x0.finish;
          }
          else {
            pAVar5 = GetNode__14SpacePartitioni(this,iVar4);
            if (pAVar5 == (ASTNode *)0x0) {
              piVar3 = (this->fPreGoalNodes).field0_0x0.finish;
            }
            else if (pAVar5->rectNumber == pAVar2->rectNumber) {
              if (pAVar5->goalNumber == pAVar2->goalNumber) {
                pAVar2->succCount = pAVar2->succCount + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                piVar3 = (this->fSuccessorTable).field0_0x0.finish;
                if (piVar3 == (this->fSuccessorTable).field0_0x0.end_of_storage) {
                  insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                            ((vector_int___malloc_alloc_template_0_____3_5561 *)this_00,piVar3,
                             piVar6);
                }
                else {
                  *piVar3 = *piVar6;
                  (this->fSuccessorTable).field0_0x0.finish =
                       (this->fSuccessorTable).field0_0x0.finish + 1;
                }
                    /* end of inlined section */
                StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
                          (&this_00->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                piVar3 = (this->fPreGoalNodes).field0_0x0.finish;
              }
              else {
                piVar3 = (this->fPreGoalNodes).field0_0x0.finish;
              }
            }
            else {
              piVar3 = (this->fPreGoalNodes).field0_0x0.finish;
            }
          }
                    /* end of inlined section */
          piVar6 = piVar6 + 1;
          if (piVar6 == piVar3) break;
          iVar4 = *piVar6;
        }
      }
    }
    iVar4 = pAVar2->succCount;
  }
  else {
    iVar4 = pAVar2->succCount;
  }
  return iVar4;
}

NodeRef SpacePartition::GetNthSuccessor(NodeRef n, Int succIndex) {
	Int numSucc;
	ASTNode *node;
	Int tableIndex;
	unsigned int n;
	
  int iVar1;
  ASTNode *pAVar2;
  
  iVar1 = CountSuccessors__14SpacePartitioni(this,n);
  if ((succIndex < 0) || (iVar1 <= succIndex)) {
    iVar1 = -1;
  }
  else {
    pAVar2 = GetNode__14SpacePartitioni(this,n);
    if (pAVar2 == (ASTNode *)0x0) {
      iVar1 = -1;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      iVar1 = (this->fSuccessorTable).field0_0x0.start[pAVar2->succTableIndex + succIndex];
    }
  }
  return iVar1;
}

void SpacePartition::Clear() {
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	PenaltyRect *first;
	PenaltyRect *last;
	PenaltyRect *pointer;
	ASTNode *first;
	ASTNode *last;
	ASTNode *pointer;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	
  PenaltyRect *pPVar1;
  ASTNode *pAVar2;
  int *piVar3;
  PenaltyRect *pPVar4;
  ASTNode *pAVar5;
  int *piVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pPVar1 = (this->fFree).start;
  for (pPVar4 = pPVar1; pPVar4 != (this->fFree).finish; pPVar4 = pPVar4 + 1) {
  }
  (this->fFree).finish = pPVar1;
  pAVar2 = (this->fNodeList).start;
  for (pAVar5 = pAVar2; pAVar5 != (this->fNodeList).finish; pAVar5 = pAVar5 + 1) {
  }
  (this->fNodeList).finish = pAVar2;
  piVar3 = (this->fPreGoalNodes).field0_0x0.start;
  for (piVar6 = piVar3; piVar6 != (this->fPreGoalNodes).field0_0x0.finish; piVar6 = piVar6 + 1) {
  }
  (this->fPreGoalNodes).field0_0x0.finish = piVar3;
  piVar3 = (this->fPostStartNodes).field0_0x0.start;
  for (piVar6 = piVar3; piVar6 != (this->fPostStartNodes).field0_0x0.finish; piVar6 = piVar6 + 1) {
  }
  (this->fPostStartNodes).field0_0x0.finish = piVar3;
  piVar3 = (this->fSuccessorTable).field0_0x0.start;
  for (piVar6 = piVar3; piVar6 != (this->fSuccessorTable).field0_0x0.finish; piVar6 = piVar6 + 1) {
  }
  (this->fSuccessorTable).field0_0x0.finish = piVar3;
  return;
}

static bool IsRectInside(RECT *r, RECT *bounds) {
  bool bVar1;
  
                    /* end of inlined section */
  if (bounds != (tagRECT *)0x0) {
    bVar1 = false;
    if ((((bounds->left <= r->left) && (bVar1 = false, r->right <= bounds->right)) &&
        (bVar1 = false, bounds->top <= r->top)) && (bVar1 = true, bounds->bottom < r->bottom)) {
      bVar1 = false;
    }
    return bVar1;
  }
  return true;
}

bool SpacePartition::ExpandRect(PenaltyRect *exp) {
	Int expCnt;
	Int empCnt;
	RECT origExp;
	int flates[4];
	Int maxSize;
	Int iterations;
	PenaltyRect *startPart;
	Int flateSize;
	Int w;
	Int h;
	RECT newExp;
	float ratio;
	float ratio;
	
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  RoutingParams *pRVar4;
  int iVar5;
  ulong *puVar6;
  bool bVar7;
  PenaltyRect *bounds;
  int iVar8;
  PenaltyRect *pPVar9;
  int iVar10;
  ulong in_v0;
  int *piVar11;
  int *piVar12;
  ulong in_t0;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  tagRECT origExp;
  int flates [4];
  tagRECT newExp;
  ulong uVar13;
  
  iVar14 = 200;
  pRVar4 = this->fParams;
  puVar1 = (undefined *)((int)&(exp->bounds).top + 3);
  uVar16 = (uint)puVar1 & 7;
  uVar2 = (uint)exp & 7;
  origExp._0_8_ =
       (*(long *)(puVar1 + -uVar16) << (7 - uVar16) * 8 |
       in_v0 & 0xffffffffffffffffU >> (uVar16 + 1) * 8) & -1L << (8 - uVar2) * 8 |
       *(ulong *)((int)exp - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&(exp->bounds).bottom + 3);
  uVar16 = (uint)puVar1 & 7;
  piVar12 = &(exp->bounds).right;
  uVar2 = (uint)piVar12 & 7;
  origExp._8_8_ =
       (*(long *)(puVar1 + -uVar16) << (7 - uVar16) * 8 |
       (long)(int)this & 0xffffffffffffffffU >> (uVar16 + 1) * 8) & -1L << (8 - uVar2) * 8 |
       *(ulong *)((int)piVar12 - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&origExp.top + 3);
  uVar16 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar16);
  *puVar6 = *puVar6 & -1L << (uVar16 + 1) * 8 | origExp._0_8_ >> (7 - uVar16) * 8;
  puVar1 = (undefined *)((int)&origExp.bottom + 3);
  uVar16 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar16);
  *puVar6 = *puVar6 & -1L << (uVar16 + 1) * 8 | origExp._8_8_ >> (7 - uVar16) * 8;
  iVar15 = pRVar4->maxFreeRectSize;
  if (*(int *)&pRVar4->limitFreeRectSize != 0) {
    if (iVar15 < (exp->bounds).right - (exp->bounds).left) {
      return false;
    }
    if (iVar15 < (exp->bounds).bottom - (exp->bounds).top) {
      return false;
    }
  }
  bounds = GetIntersectingPartitionRect__14SpacePartitionPC7tagRECT(this,&exp->bounds);
  if ((bounds != (PenaltyRect *)0x0) && (bounds->penalty == 0x7fffffff)) {
    return false;
  }
  iVar8 = GetIntersectingFreeRect__14SpacePartitionPC7tagRECT(this,&exp->bounds);
  if (iVar8 != -1) {
    return false;
  }
  if (*(int *)&this->fParams->limitFreeRectSize == 0) {
    flates[3] = 0x20;
  }
  else {
    iVar8 = iVar15 + 3;
    if (-1 < iVar15) {
      iVar8 = iVar15;
    }
    flates[3] = iVar8 >> 2;
    if (flates[3] < 1) {
      flates[3] = 1;
    }
  }
  flates[0] = -flates[3];
  uVar16 = 0;
  flates[2] = flates[3];
  iVar17 = 0;
  flates[1] = -flates[3];
  iVar8 = 0;
  do {
    piVar12 = (int *)((int)flates + iVar8);
    uVar13 = (ulong)(int)piVar12;
    iVar10 = *piVar12;
    if (iVar10 == 0) {
      iVar17 = iVar17 + 1;
LAB_0020be3c:
      iVar14 = iVar14 + -1;
      uVar16 = uVar16 + 1 & 3;
      if (iVar14 == 0) break;
    }
    else {
      piVar11 = (int *)((int)&(exp->bounds).left + iVar8);
      iVar5 = *piVar11;
      *piVar11 = iVar5 + iVar10;
      iVar17 = 0;
      if ((*(int *)&this->fParams->limitFreeRectSize == 0) ||
         (((exp->bounds).right - (exp->bounds).left <= iVar15 &&
          ((exp->bounds).bottom - (exp->bounds).top <= iVar15)))) {
        pPVar9 = GetIntersectingPartitionRect__14SpacePartitionPC7tagRECT(this,&exp->bounds);
        if ((pPVar9 == bounds) &&
           ((((bounds == (PenaltyRect *)0x0 || (bounds->penalty != 0x7fffffff)) &&
             (iVar10 = GetIntersectingFreeRect__14SpacePartitionPC7tagRECT(this,&exp->bounds),
             iVar10 == -1)) &&
            (bVar7 = IsRectInside__FPC7tagRECTT0(&exp->bounds,&bounds->bounds), bVar7))))
        goto LAB_0020be3c;
        piVar12 = (int *)((int)&(exp->bounds).left + iVar8);
        iVar10 = *(int *)((int)flates + iVar8);
        *piVar12 = *piVar12 - iVar10;
        *(int *)((int)flates + iVar8) = iVar10 / 2;
      }
      else {
        *piVar11 = (iVar5 + iVar10) - iVar10;
        *piVar12 = iVar10 / 2;
      }
    }
    iVar8 = uVar16 << 2;
  } while (iVar17 < 4);
  pRVar4 = this->fParams;
  iVar15 = (exp->bounds).left;
  if (*(int *)&pRVar4->limitFreeRectRatio == 0) goto LAB_0020c0a8;
  iVar14 = (exp->bounds).bottom;
  iVar8 = (exp->bounds).top;
  iVar15 = (exp->bounds).right - iVar15;
  puVar1 = (undefined *)((int)&(exp->bounds).top + 3);
  uVar16 = (uint)puVar1 & 7;
  uVar2 = (uint)exp & 7;
  newExp._0_8_ = (*(long *)(puVar1 + -uVar16) << (7 - uVar16) * 8 |
                 uVar13 & 0xffffffffffffffffU >> (uVar16 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                 *(ulong *)((int)exp - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&(exp->bounds).bottom + 3);
  uVar16 = (uint)puVar1 & 7;
  piVar12 = &(exp->bounds).right;
  uVar2 = (uint)piVar12 & 7;
  newExp._8_8_ = (*(long *)(puVar1 + -uVar16) << (7 - uVar16) * 8 |
                 in_t0 & 0xffffffffffffffffU >> (uVar16 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                 *(ulong *)((int)piVar12 - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&newExp.top + 3);
  uVar16 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar16);
  *puVar6 = *puVar6 & -1L << (uVar16 + 1) * 8 | newExp._0_8_ >> (7 - uVar16) * 8;
  puVar1 = (undefined *)((int)&newExp.bottom + 3);
  uVar16 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar16);
  *puVar6 = *puVar6 & -1L << (uVar16 + 1) * 8 | newExp._8_8_ >> (7 - uVar16) * 8;
  iVar14 = iVar14 - iVar8;
  if (iVar14 < iVar15) {
    iVar8 = iVar14 * pRVar4->maxFreeRectRatio;
    if ((float)pRVar4->maxFreeRectRatio < (float)iVar15 / (float)iVar14) {
      newExp._8_8_ = newExp._8_8_ & 0xffffffff00000000 | (ulong)(uint)(newExp.left + iVar8);
      OffsetRect__FP7tagRECTss
                (&newExp,(ushort)(((-(iVar8 / 2) - (uint)(ushort)newExp.left) +
                                  (origExp.right + origExp.left) / 2) * 0x10000 >> 0x10),0);
      if (newExp.left < (exp->bounds).left) {
        sVar3 = *(short *)&(exp->bounds).left;
      }
      else {
        if (newExp.right <= (exp->bounds).right) goto LAB_0020c084;
        sVar3 = *(short *)&(exp->bounds).right;
        newExp.left._0_2_ = (short)newExp.right;
      }
      OffsetRect__FP7tagRECTss(&newExp,sVar3 - (ushort)newExp.left,0);
    }
  }
  else {
    iVar8 = iVar15 * pRVar4->maxFreeRectRatio;
    if ((float)pRVar4->maxFreeRectRatio < (float)iVar14 / (float)iVar15) {
      newExp.top._0_2_ = (ushort)(newExp._0_8_ >> 0x20);
      newExp.top = (int)(newExp._0_8_ >> 0x20);
      newExp._8_8_ = newExp._8_8_ & 0xffffffff | (ulong)(uint)(newExp.top + iVar8) << 0x20;
      OffsetRect__FP7tagRECTss
                (&newExp,0,
                 (ushort)(((-(iVar8 / 2) - (uint)(ushort)newExp.top) +
                          (origExp.bottom + origExp.top) / 2) * 0x10000 >> 0x10));
      if (newExp.top < (exp->bounds).top) {
        OffsetRect__FP7tagRECTss(&newExp,0,*(short *)&(exp->bounds).top - (ushort)newExp.top);
      }
      else if ((exp->bounds).bottom < newExp.bottom) {
        OffsetRect__FP7tagRECTss(&newExp,0,*(short *)&(exp->bounds).bottom - (short)newExp.bottom);
      }
    }
  }
LAB_0020c084:
  puVar1 = (undefined *)((int)&(exp->bounds).top + 3);
  uVar16 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar16);
  *puVar6 = *puVar6 & -1L << (uVar16 + 1) * 8 | newExp._0_8_ >> (7 - uVar16) * 8;
  uVar16 = (uint)exp & 7;
  *(ulong *)((int)exp - uVar16) =
       newExp._0_8_ << uVar16 * 8 |
       *(ulong *)((int)exp - uVar16) & 0xffffffffffffffffU >> (8 - uVar16) * 8;
  puVar1 = (undefined *)((int)&(exp->bounds).bottom + 3);
  uVar16 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar16);
  *puVar6 = *puVar6 & -1L << (uVar16 + 1) * 8 | newExp._8_8_ >> (7 - uVar16) * 8;
  piVar12 = &(exp->bounds).right;
  uVar16 = (uint)piVar12 & 7;
  puVar6 = (ulong *)((int)piVar12 - uVar16);
  *puVar6 = newExp._8_8_ << uVar16 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar16) * 8;
  iVar15 = (exp->bounds).left;
LAB_0020c0a8:
  bVar7 = false;
  if ((iVar15 < (exp->bounds).right) && (bVar7 = true, (exp->bounds).bottom <= (exp->bounds).top)) {
    bVar7 = false;
  }
  return bVar7;
}

void SpacePartition::BuildSpatialSuccessorList(NodeRef parent) {
	ASTNodeRefList &succTab;
	Int curEdge;
	ASTNode *p;
	PenaltyRect baseNode;
	PenaltyRect seed;
	unsigned int n;
	Int successorNode;
	RECT obstacle;
	PenaltyRect *part;
	RectRef freeRectNum;
	ASTNode newNode;
	ASTNode *i;
	PenaltyRect exp;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	unsigned int n;
	GoalRef goalNumber;
	RectRef rectNumber;
	Int penalty;
	ASTNode *this;
	unsigned int n;
	unsigned int n;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint *position;
  ulong *puVar5;
  ulong uVar6;
  bool bVar7;
  ASTNode *pAVar8;
  PenaltyRect *pPVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ASTNode *pAVar13;
  ulong in_a3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar14;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  PenaltyRect baseNode;
  PenaltyRect seed;
  tagRECT obstacle;
  PenaltyRect exp;
  ASTNode newNode;
  uint n;
  int local_ac;
  ASTNode *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar14 = 0;
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_ac = parent;
  pAVar8 = GetNode__14SpacePartitioni(this,parent);
  if (pAVar8 != (ASTNode *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pPVar9 = (this->fFree).start + pAVar8->rectNumber;
    puVar2 = (undefined *)((int)&(pPVar9->bounds).top + 3);
                    /* end of inlined section */
    uVar3 = (uint)puVar2 & 7;
    uVar4 = (uint)pPVar9 & 7;
    baseNode.bounds._0_8_ =
         (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
         (long)(pAVar8->rectNumber * 0x14) & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
         -1L << (8 - uVar4) * 8 | *(ulong *)((int)pPVar9 - uVar4) >> uVar4 * 8;
    puVar2 = (undefined *)((int)&(pPVar9->bounds).bottom + 3);
    uVar3 = (uint)puVar2 & 7;
    piVar1 = &(pPVar9->bounds).right;
    uVar4 = (uint)piVar1 & 7;
    baseNode.bounds._8_8_ =
         (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
         in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
    baseNode.penalty = pPVar9->penalty;
    puVar2 = (undefined *)((int)&baseNode.bounds.top + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar5 = (ulong *)(puVar2 + -uVar3);
    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | baseNode.bounds._0_8_ >> (7 - uVar3) * 8;
    puVar2 = (undefined *)((int)&baseNode.bounds.bottom + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar5 = (ulong *)(puVar2 + -uVar3);
    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | baseNode.bounds._8_8_ >> (7 - uVar3) * 8;
    __11PenaltyRectP7tagRECTi(&seed,&baseNode.bounds,0);
    local_a8 = &newNode;
    seed.bounds.bottom = CONCAT22(seed.bounds.top._2_2_,(short)seed.bounds.top);
    seed.bounds.top = seed.bounds.bottom + -1;
    seed.bounds.right = CONCAT22(seed.bounds.left._2_2_,(short)seed.bounds.left) + 1;
    do {
      n = 0xffffffff;
      pPVar9 = GetIntersectingPartitionRect__14SpacePartitionPC7tagRECT(this,&seed.bounds);
      if ((pPVar9 == (PenaltyRect *)0x0) || (pPVar9->penalty != 0x7fffffff)) {
        iVar10 = GetIntersectingFreeRect__14SpacePartitionPC7tagRECT(this,&seed.bounds);
        if (iVar10 == -1) {
          exp.bounds._0_8_ =
               CONCAT26(seed.bounds.top._2_2_,
                        CONCAT24((short)seed.bounds.top,
                                 CONCAT22(seed.bounds.left._2_2_,(short)seed.bounds.left)));
          exp.bounds._8_8_ = CONCAT44(seed.bounds.bottom,seed.bounds.right);
          puVar2 = (undefined *)((int)&exp.bounds.top + 3);
          uVar3 = (uint)puVar2 & 7;
          puVar5 = (ulong *)(puVar2 + -uVar3);
          *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | exp.bounds._0_8_ >> (7 - uVar3) * 8;
          puVar2 = (undefined *)((int)&exp.bounds.bottom + 3);
          uVar3 = (uint)puVar2 & 7;
          puVar5 = (ulong *)(puVar2 + -uVar3);
          *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | exp.bounds._8_8_ >> (7 - uVar3) * 8;
          exp.penalty = seed.penalty;
          localIsRectEmpty__FPC7tagRECT(&exp.bounds);
          bVar7 = ExpandRect__14SpacePartitionP11PenaltyRect(this,&exp);
          if (bVar7) {
            if (pPVar9 == (PenaltyRect *)0x0) {
              exp.penalty = this->fParams->defaultPenalty;
            }
            else {
              exp.penalty = pPVar9->penalty;
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            pPVar9 = (this->fFree).finish;
            if (pPVar9 == (this->fFree).end_of_storage) {
              insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
                        (&this->fFree,pPVar9,&exp);
            }
            else {
              puVar2 = (undefined *)((int)&(pPVar9->bounds).top + 3);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | exp.bounds._0_8_ >> (7 - uVar3) * 8;
              uVar3 = (uint)pPVar9 & 7;
              *(ulong *)((int)pPVar9 - uVar3) =
                   exp.bounds._0_8_ << uVar3 * 8 |
                   *(ulong *)((int)pPVar9 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar2 = (undefined *)((int)&(pPVar9->bounds).bottom + 3);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | exp.bounds._8_8_ >> (7 - uVar3) * 8;
              piVar1 = &(pPVar9->bounds).right;
              uVar3 = (uint)piVar1 & 7;
              puVar5 = (ulong *)((int)piVar1 - uVar3);
              *puVar5 = exp.bounds._8_8_ << uVar3 * 8 |
                        *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              pPVar9->penalty = exp.penalty;
              (this->fFree).finish = (this->fFree).finish + 1;
            }
                    /* end of inlined section */
            StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
                      (&this->fFree);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
            iVar10 = (((int)(this->fFree).finish - (int)(this->fFree).start) * -0x33333333 >> 2) +
                     -1;
          }
          else {
            ExpandRect__14SpacePartitionP11PenaltyRect(this,&exp);
          }
        }
        newNode.goalNumber = pAVar8->goalNumber;
        pAVar13 = (this->fNodeList).start;
        newNode.penalty = (this->fFree).start[iVar10].penalty;
        newNode.rectNumber = iVar10;
        local_a8->succCount = -1;
        local_a8->succTableIndex = -1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        for (; pAVar13 != (this->fNodeList).finish; pAVar13 = pAVar13 + 1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
          bVar7 = false;
          if ((pAVar13->goalNumber == newNode.goalNumber) &&
             (bVar7 = true, pAVar13->rectNumber != iVar10)) {
            bVar7 = false;
          }
                    /* end of inlined section */
          if (bVar7) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
            n = ((int)pAVar13 - (int)(this->fNodeList).start) * -0x45d1745d >> 2;
            break;
          }
        }
        if (n == 0xffffffff) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          pAVar8 = (this->fNodeList).finish;
          if (pAVar8 == (this->fNodeList).end_of_storage) {
            insert_aux__t6vector2Z7ASTNodeZt23__malloc_alloc_template1i0P7ASTNodeRC7ASTNode
                      (&this->fNodeList,pAVar8,&newNode);
          }
          else {
            uVar6 = CONCAT44(newNode.entry.x,newNode.penalty);
            puVar2 = (undefined *)((int)&pAVar8->rectNumber + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                      CONCAT44(iVar10,newNode.goalNumber) >> (7 - uVar3) * 8;
            uVar3 = (uint)pAVar8 & 7;
            *(ulong *)((int)pAVar8 - uVar3) =
                 CONCAT44(iVar10,newNode.goalNumber) << uVar3 * 8 |
                 *(ulong *)((int)pAVar8 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)&pAVar8->succTableIndex + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | newNode._8_8_ >> (7 - uVar3) * 8;
            uVar3 = (uint)&pAVar8->succCount & 7;
            puVar5 = (ulong *)((int)&pAVar8->succCount - uVar3);
            *puVar5 = newNode._8_8_ << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)&(pAVar8->entry).x + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
            uVar3 = (uint)&pAVar8->penalty & 7;
            puVar5 = (ulong *)((int)&pAVar8->penalty - uVar3);
            *puVar5 = uVar6 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)&pAVar8->parent + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)newNode._24_8_ >> (7 - uVar3) * 8;
            piVar1 = &(pAVar8->entry).y;
            uVar3 = (uint)piVar1 & 7;
            puVar5 = (ulong *)((int)piVar1 - uVar3);
            *puVar5 = (long)newNode._24_8_ << uVar3 * 8 |
                      *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)&pAVar8->g + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | newNode._32_8_ >> (7 - uVar3) * 8;
            uVar3 = (uint)&pAVar8->f & 7;
            puVar5 = (ulong *)((int)&pAVar8->f - uVar3);
            *puVar5 = newNode._32_8_ << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8
            ;
            pAVar8->h = newNode.h;
            (this->fNodeList).finish = (this->fNodeList).finish + 1;
          }
                    /* end of inlined section */
          StressVector__H1Z7ASTNode_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(&this->fNodeList)
          ;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
          n = (((int)(this->fNodeList).finish - (int)(this->fNodeList).start) * -0x45d1745d >> 2) -
              1;
          pAVar8 = GetNode__14SpacePartitioni(this,local_ac);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        }
        pPVar9 = (this->fFree).start + (this->fNodeList).start[n].rectNumber;
        puVar2 = (undefined *)((int)&(pPVar9->bounds).top + 3);
                    /* end of inlined section */
        uVar3 = (uint)puVar2 & 7;
        uVar4 = (uint)pPVar9 & 7;
        obstacle._0_8_ =
             (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
             (long)(int)(n * 0x2c) & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
             -1L << (8 - uVar4) * 8 | *(ulong *)((int)pPVar9 - uVar4) >> uVar4 * 8;
        puVar2 = (undefined *)((int)&(pPVar9->bounds).bottom + 3);
        uVar3 = (uint)puVar2 & 7;
        piVar1 = &(pPVar9->bounds).right;
        uVar4 = (uint)piVar1 & 7;
        obstacle._8_8_ =
             (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
             0xffffffffffffffffU >> (uVar3 + 1) * 8 & 0x14) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
        puVar2 = (undefined *)((int)&obstacle.top + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar5 = (ulong *)(puVar2 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | obstacle._0_8_ >> (7 - uVar3) * 8;
        puVar2 = (undefined *)((int)&obstacle.bottom + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar5 = (ulong *)(puVar2 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | obstacle._8_8_ >> (7 - uVar3) * 8;
      }
      else {
        puVar2 = (undefined *)((int)&(pPVar9->bounds).top + 3);
        uVar3 = (uint)puVar2 & 7;
        uVar4 = (uint)pPVar9 & 7;
        obstacle._0_8_ =
             (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
             0xffffffffffffffffU >> (uVar3 + 1) * 8 & 0x7fffffff) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)pPVar9 - uVar4) >> uVar4 * 8;
        puVar2 = (undefined *)((int)&(pPVar9->bounds).bottom + 3);
        uVar3 = (uint)puVar2 & 7;
        piVar1 = &(pPVar9->bounds).right;
        uVar4 = (uint)piVar1 & 7;
        obstacle._8_8_ =
             (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
             (long)(int)this & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
        puVar2 = (undefined *)((int)&obstacle.top + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar5 = (ulong *)(puVar2 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | obstacle._0_8_ >> (7 - uVar3) * 8;
        puVar2 = (undefined *)((int)&obstacle.bottom + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar5 = (ulong *)(puVar2 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | obstacle._8_8_ >> (7 - uVar3) * 8;
      }
      if (n != 0xffffffff) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        position = (uint *)(this->fSuccessorTable).field0_0x0.finish;
        if (position == (uint *)(this->fSuccessorTable).field0_0x0.end_of_storage) {
          insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                    ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fSuccessorTable,
                     (int *)position,(int *)&n);
        }
        else {
          *position = n;
          (this->fSuccessorTable).field0_0x0.finish = (this->fSuccessorTable).field0_0x0.finish + 1;
        }
                    /* end of inlined section */
        StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
                  (&(this->fSuccessorTable).field0_0x0);
        pAVar8->succCount = pAVar8->succCount + 1;
      }
      iVar10 = iVar14 + 3;
      if (-1 < iVar14) {
        iVar10 = iVar14;
      }
      iVar10 = iVar14 + (iVar10 >> 2) * -4;
      if (iVar10 == 1) {
        if ((baseNode.bounds.bottom < seed.bounds.bottom) ||
           (baseNode.bounds.bottom <= obstacle.bottom)) {
          uVar12 = 0xffff;
          iVar14 = iVar14 + 1;
          uVar11 = (short)baseNode.bounds.bottom - (short)seed.bounds.top;
        }
        else {
          uVar12 = 0;
          uVar11 = (short)obstacle.bottom - (short)seed.bounds.top;
        }
LAB_0020c690:
        OffsetRect__FP7tagRECTss(&seed.bounds,uVar12,uVar11);
        bVar7 = iVar14 < 4;
      }
      else {
        if (iVar10 < 2) {
          bVar7 = iVar14 < 4;
          if (iVar10 != 0) goto LAB_0020c6cc;
          if ((baseNode.bounds.right < seed.bounds.right) ||
             (baseNode.bounds.right <= obstacle.right)) {
            uVar12 = 1;
            iVar14 = iVar14 + 1;
            uVar11 = (short)baseNode.bounds.right - (short)seed.bounds.left;
          }
          else {
            uVar12 = 0;
            uVar11 = (short)obstacle.right - (short)seed.bounds.left;
          }
        }
        else {
          if (iVar10 != 2) {
            bVar7 = iVar14 < 4;
            if (iVar10 == 3) {
              if ((baseNode.bounds.top <= seed.bounds.top) && (baseNode.bounds.top < obstacle.top))
              {
                uVar12 = 0;
                uVar11 = ((short)obstacle.top - (short)seed.bounds.top) - 1;
                goto LAB_0020c690;
              }
              iVar14 = iVar14 + 1;
              OffsetRect__FP7tagRECTss
                        (&seed.bounds,1,((short)baseNode.bounds.top - (short)seed.bounds.top) - 1);
              bVar7 = iVar14 < 4;
            }
            goto LAB_0020c6cc;
          }
          if (CONCAT22(seed.bounds.left._2_2_,(short)seed.bounds.left) < baseNode.bounds.left) {
LAB_0020c62c:
            uVar12 = 0xffff;
            iVar14 = iVar14 + 1;
            obstacle.left._0_2_ = (short)baseNode.bounds.left;
          }
          else {
            if (obstacle.left <= baseNode.bounds.left) goto LAB_0020c62c;
            uVar12 = 0;
          }
          uVar11 = ((short)obstacle.left - (short)seed.bounds.left) - 1;
        }
        OffsetRect__FP7tagRECTss(&seed.bounds,uVar11,uVar12);
        bVar7 = iVar14 < 4;
      }
LAB_0020c6cc:
    } while (bVar7);
  }
  return;
}

bool Path::InitAST() {
	ASTNode *start;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef *last;
	NodeRef *first;
	NodeRef *pointer;
	NodeRef *last;
	NodeRef *first;
	NodeRef *pointer;
	
  tagPOINT *ptVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  ulong *puVar6;
  ASTNode *pAVar7;
  ulong uVar8;
  int *piVar9;
  float fVar10;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  piVar5 = (this->fOpenNodes).field0_0x0.start;
  for (piVar9 = piVar5; piVar9 != (this->fOpenNodes).field0_0x0.finish; piVar9 = piVar9 + 1) {
  }
  (this->fOpenNodes).field0_0x0.finish = piVar5;
  piVar5 = (this->fClosedNodes).field0_0x0.start;
  for (piVar9 = piVar5; piVar9 != (this->fClosedNodes).field0_0x0.finish; piVar9 = piVar9 + 1) {
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fClosedNodes).field0_0x0.finish = piVar5;
                    /* end of inlined section */
  GetTerminals__14SpacePartitionPiT1(&_4Path_fSpacePartition,&this->fStartNode,&this->fGoalNode);
  pAVar7 = GetNode__14SpacePartitioni(&_4Path_fSpacePartition,this->fStartNode);
  puVar2 = (undefined *)((int)&(this->fParams->begin).y + 3);
  uVar3 = (uint)puVar2 & 7;
  ptVar1 = &this->fParams->begin;
  uVar4 = (uint)ptVar1 & 7;
  uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          (long)(int)pAVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)ptVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)&(pAVar7->entry).y + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar3);
  *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
  uVar3 = (uint)&pAVar7->entry & 7;
  puVar6 = (ulong *)((int)&pAVar7->entry - uVar3);
  *puVar6 = uVar8 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  fVar10 = EstimateDistanceToGoal__14SpacePartitioni(&_4Path_fSpacePartition,this->fStartNode);
  pAVar7->f = fVar10;
  pAVar7->parent = -1;
  pAVar7->h = fVar10;
  pAVar7->g = 0.0;
  this->fCurNode = this->fStartNode;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  piVar5 = (this->fOpenNodes).field0_0x0.finish;
  if (piVar5 == (this->fOpenNodes).field0_0x0.end_of_storage) {
    insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
              ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fOpenNodes,piVar5,
               &this->fStartNode);
  }
  else {
    *piVar5 = this->fStartNode;
    (this->fOpenNodes).field0_0x0.finish = (this->fOpenNodes).field0_0x0.finish + 1;
  }
                    /* end of inlined section */
  StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(&(this->fOpenNodes).field0_0x0);
  return true;
}

bool Path::OpenANode() {
	Int ct;
	RectRef lastRect;
	ASTNode *cur;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef nr;
	ASTNode *node;
	unsigned int n;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	ASTNode *n1;
	unsigned int n;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	POINT &x;
	tagPOINT &value;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	GoalRef goalNumber;
	RECT goalRect;
	POINT center;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	NodeRef succ;
	float newg;
	int numSuccessors;
	int i;
	ASTNode *s;
	POINT newEntry;
	float dist;
	NodeRef val;
	NodeRef *i;
	NodeRef val;
	NodeRef *i;
	NodeRef *position;
	NodeRef *result;
	NodeRef *result;
	NodeRef *first;
	NodeRef *result;
	ptrdiff_t n;
	NodeRef val;
	NodeRef *i;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef val;
	NodeRef *i;
	NodeRef *position;
	NodeRef *result;
	NodeRef *result;
	NodeRef *first;
	NodeRef *result;
	ptrdiff_t n;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  tagPOINT *ptVar4;
  vector_PenaltyRect___malloc_alloc_template_0___ *pvVar5;
  int iVar6;
  ulong *puVar7;
  bool bVar8;
  ASTNode *pAVar9;
  PenaltyRect *pPVar10;
  int iVar11;
  ASTNode *pAVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int succIndex;
  undefined8 unaff_s0;
  int iVar17;
  uint uVar18;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar19;
  tagRECT goalRect;
  tagPOINT center;
  int nr;
  int succ;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar11 = this->fCurNode;
  if (iVar11 == this->fGoalNode) {
    if (iVar11 != -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      piVar16 = (this->fReverseNodePath).field0_0x0.finish;
      while( true ) {
        if (piVar16 == (this->fReverseNodePath).field0_0x0.end_of_storage) {
          insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                    ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fReverseNodePath,
                     piVar16,&this->fCurNode);
        }
        else {
          *piVar16 = this->fCurNode;
          (this->fReverseNodePath).field0_0x0.finish =
               (this->fReverseNodePath).field0_0x0.finish + 1;
        }
                    /* end of inlined section */
        StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
                  (&(this->fReverseNodePath).field0_0x0);
        pAVar9 = GetNode__14SpacePartitioni(&_4Path_fSpacePartition,this->fCurNode);
        this->fCurNode = pAVar9->parent;
        if ((this->fChosenGoal == -1) && (pAVar9->goalNumber != -1)) {
          this->fChosenGoal = pAVar9->goalNumber;
        }
        if (this->fCurNode == -1) break;
        piVar16 = (this->fReverseNodePath).field0_0x0.finish;
      }
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    iVar17 = ((int)(this->fReverseNodePath).field0_0x0.finish -
              (int)(this->fReverseNodePath).field0_0x0.start >> 2) + -1;
    iVar11 = -1;
    if (-1 < iVar17) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      piVar16 = (this->fReverseNodePath).field0_0x0.start;
      while( true ) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        nr = piVar16[iVar17];
        pAVar9 = GetNode__14SpacePartitioni(&_4Path_fSpacePartition,nr);
        if ((pAVar9->rectNumber != -1) && (pAVar9->rectNumber != iVar11)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          piVar16 = (this->fSpatialNodePath).field0_0x0.finish;
          if (piVar16 == (this->fSpatialNodePath).field0_0x0.end_of_storage) {
            insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                      ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fSpatialNodePath,
                       piVar16,&nr);
          }
          else {
            *piVar16 = nr;
            (this->fSpatialNodePath).field0_0x0.finish =
                 (this->fSpatialNodePath).field0_0x0.finish + 1;
          }
                    /* end of inlined section */
          StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
                    (&(this->fSpatialNodePath).field0_0x0);
          iVar11 = pAVar9->rectNumber;
        }
        iVar17 = iVar17 + -1;
        if (iVar17 < 0) break;
        piVar16 = (this->fReverseNodePath).field0_0x0.start;
      }
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    uVar18 = 0;
    if ((int)(this->fSpatialNodePath).field0_0x0.finish -
        (int)(this->fSpatialNodePath).field0_0x0.start >> 2 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      piVar16 = (this->fSpatialNodePath).field0_0x0.start;
      while( true ) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        pAVar9 = GetNode__14SpacePartitioni(&_4Path_fSpacePartition,piVar16[uVar18]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        ptVar4 = (this->fFinalPath).finish;
        uVar13 = (ulong)(int)(this->fFinalPath).end_of_storage;
        if ((long)(int)ptVar4 == uVar13) {
          insert_aux__t6vector2Z8tagPOINTZt23__malloc_alloc_template1i0P8tagPOINTRC8tagPOINT
                    (&this->fFinalPath,ptVar4,&pAVar9->entry);
        }
        else {
          puVar1 = (undefined *)((int)&(pAVar9->entry).y + 3);
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)&pAVar9->entry & 7;
          uVar13 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                   uVar13 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)&pAVar9->entry - uVar3) >> uVar3 * 8;
          puVar1 = (undefined *)((int)&ptVar4->y + 3);
          uVar2 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar2);
          *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar13 >> (7 - uVar2) * 8;
          uVar2 = (uint)ptVar4 & 7;
          *(ulong *)((int)ptVar4 - uVar2) =
               uVar13 << uVar2 * 8 |
               *(ulong *)((int)ptVar4 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          (this->fFinalPath).finish = (this->fFinalPath).finish + 1;
        }
                    /* end of inlined section */
        uVar18 = uVar18 + 1;
        StressVector__H1Z8tagPOINT_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(&this->fFinalPath)
        ;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        if ((uint)((int)(this->fSpatialNodePath).field0_0x0.finish -
                   (int)(this->fSpatialNodePath).field0_0x0.start >> 2) <= uVar18) break;
        piVar16 = (this->fSpatialNodePath).field0_0x0.start;
      }
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    bVar8 = true;
    if (((int)(this->fSpatialNodePath).field0_0x0.finish -
         (int)(this->fSpatialNodePath).field0_0x0.start >> 2 != 0) &&
       (bVar8 = true, *(int *)&this->fParams->routeNearDest == 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      pAVar9 = GetNode__14SpacePartitioni
                         (&_4Path_fSpacePartition,(this->fReverseNodePath).field0_0x0.start[1]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pvVar5 = this->fParams->goalList;
      pPVar10 = pvVar5->start + pAVar9->goalNumber;
      puVar1 = (undefined *)((int)&(pPVar10->bounds).top + 3);
                    /* end of inlined section */
      uVar18 = (uint)puVar1 & 7;
      uVar2 = (uint)pPVar10 & 7;
      goalRect._0_8_ =
           (*(long *)(puVar1 + -uVar18) << (7 - uVar18) * 8 |
           (long)(int)pvVar5 & 0xffffffffffffffffU >> (uVar18 + 1) * 8) & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)pPVar10 - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&(pPVar10->bounds).bottom + 3);
      uVar18 = (uint)puVar1 & 7;
      piVar16 = &(pPVar10->bounds).right;
      uVar2 = (uint)piVar16 & 7;
      goalRect._8_8_ =
           (*(long *)(puVar1 + -uVar18) << (7 - uVar18) * 8 |
           (long)(pAVar9->goalNumber * 0x14) & 0xffffffffffffffffU >> (uVar18 + 1) * 8) &
           -1L << (8 - uVar2) * 8 | *(ulong *)((int)piVar16 - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&goalRect.top + 3);
      uVar18 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar18);
      *puVar7 = *puVar7 & -1L << (uVar18 + 1) * 8 | goalRect._0_8_ >> (7 - uVar18) * 8;
      puVar1 = (undefined *)((int)&goalRect.bottom + 3);
      uVar18 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar18);
      *puVar7 = *puVar7 & -1L << (uVar18 + 1) * 8 | goalRect._8_8_ >> (7 - uVar18) * 8;
      goalRect.top = (int)(goalRect._0_8_ >> 0x20);
      goalRect.bottom = (int)(goalRect._8_8_ >> 0x20);
      center.x = (goalRect.left + goalRect.right) / 2;
      center.y = (goalRect.top + goalRect.bottom) / 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ptVar4 = (this->fFinalPath).finish;
      if (ptVar4 == (this->fFinalPath).end_of_storage) {
        insert_aux__t6vector2Z8tagPOINTZt23__malloc_alloc_template1i0P8tagPOINTRC8tagPOINT
                  (&this->fFinalPath,ptVar4,&center);
      }
      else {
        puVar1 = (undefined *)((int)&ptVar4->y + 3);
        uVar18 = (uint)puVar1 & 7;
        puVar7 = (ulong *)(puVar1 + -uVar18);
        *puVar7 = *puVar7 & -1L << (uVar18 + 1) * 8 |
                  CONCAT44(center.y,center.x) >> (7 - uVar18) * 8;
        uVar18 = (uint)ptVar4 & 7;
        *(ulong *)((int)ptVar4 - uVar18) =
             CONCAT44(center.y,center.x) << uVar18 * 8 |
             *(ulong *)((int)ptVar4 - uVar18) & 0xffffffffffffffffU >> (8 - uVar18) * 8;
        (this->fFinalPath).finish = (this->fFinalPath).finish + 1;
      }
                    /* end of inlined section */
      StressVector__H1Z8tagPOINT_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(&this->fFinalPath);
      bVar8 = true;
    }
  }
  else {
    iVar11 = CountSuccessors__14SpacePartitioni(&_4Path_fSpacePartition,iVar11);
    if (0 < iVar11) {
      iVar17 = this->fCurNode;
      succIndex = 0;
      do {
                    /* end of inlined section */
        succ = GetNthSuccessor__14SpacePartitionii(&_4Path_fSpacePartition,iVar17,succIndex);
        pAVar9 = GetNode__14SpacePartitioni(&_4Path_fSpacePartition,succ);
        fVar19 = MeasureDistance__14SpacePartitioniiP8tagPOINT
                           (&_4Path_fSpacePartition,this->fCurNode,succ,(tagPOINT *)&goalRect);
        pAVar12 = GetNode__14SpacePartitioni(&_4Path_fSpacePartition,this->fCurNode);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        piVar16 = (this->fClosedNodes).field0_0x0.finish;
        piVar14 = (this->fClosedNodes).field0_0x0.start;
        fVar19 = pAVar12->g + fVar19;
        if (piVar14 == piVar16) {
LAB_0020cc4c:
          bVar8 = false;
        }
        else {
          iVar17 = *piVar14;
          while (piVar14 = piVar14 + 1, succ != iVar17) {
            if (piVar14 == piVar16) goto LAB_0020cc4c;
            iVar17 = *piVar14;
          }
          bVar8 = true;
        }
                    /* end of inlined section */
        if (bVar8) {
          if (fVar19 < pAVar9->g) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
            piVar16 = (this->fClosedNodes).field0_0x0.start;
            if (piVar16 == (this->fClosedNodes).field0_0x0.finish) {
              piVar16 = (this->fOpenNodes).field0_0x0.start;
            }
            else {
              iVar17 = *piVar16;
              while (succ != iVar17) {
                piVar16 = piVar16 + 1;
                if (piVar16 == (this->fClosedNodes).field0_0x0.finish) goto LAB_0020cce8;
                iVar17 = *piVar16;
              }
              piVar14 = (this->fClosedNodes).field0_0x0.finish;
              piVar15 = piVar16 + 1;
              if ((piVar15 != piVar14) && (iVar17 = (int)piVar14 - (int)piVar15 >> 2, 0 < iVar17)) {
                do {
                  iVar6 = *piVar15;
                  iVar17 = iVar17 + -1;
                  piVar15 = piVar15 + 1;
                  *piVar16 = iVar6;
                  piVar16 = piVar16 + 1;
                } while (0 < iVar17);
                piVar14 = (this->fClosedNodes).field0_0x0.finish;
              }
              (this->fClosedNodes).field0_0x0.finish = piVar14 + -1;
LAB_0020cce8:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
              piVar16 = (this->fOpenNodes).field0_0x0.start;
            }
            goto LAB_0020ccec;
          }
        }
        else {
          piVar16 = (this->fOpenNodes).field0_0x0.start;
LAB_0020ccec:
          piVar14 = (this->fOpenNodes).field0_0x0.finish;
          if (piVar16 == piVar14) {
            bVar8 = false;
          }
          else {
            iVar17 = *piVar16;
            while (piVar16 = piVar16 + 1, succ != iVar17) {
              if (piVar16 == piVar14) {
                bVar8 = false;
                goto LAB_0020cd28;
              }
              iVar17 = *piVar16;
            }
            bVar8 = true;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
          }
LAB_0020cd28:
                    /* end of inlined section */
          if (bVar8) {
            if (pAVar9->g <= fVar19) goto LAB_0020cdd0;
            pAVar9->g = fVar19;
          }
          else {
            piVar16 = (this->fOpenNodes).field0_0x0.finish;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            if (piVar16 == (this->fOpenNodes).field0_0x0.end_of_storage) {
              insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                        ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fOpenNodes,
                         piVar16,&succ);
            }
            else {
              *piVar16 = succ;
              (this->fOpenNodes).field0_0x0.finish = (this->fOpenNodes).field0_0x0.finish + 1;
            }
                    /* end of inlined section */
            StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
                      (&(this->fOpenNodes).field0_0x0);
            pAVar9->g = fVar19;
          }
          puVar1 = (undefined *)((int)&(pAVar9->entry).y + 3);
          uVar18 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar18);
          *puVar7 = *puVar7 & -1L << (uVar18 + 1) * 8 | goalRect._0_8_ >> (7 - uVar18) * 8;
          uVar18 = (uint)&pAVar9->entry & 7;
          puVar7 = (ulong *)((int)&pAVar9->entry - uVar18);
          *puVar7 = goalRect._0_8_ << uVar18 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar18) * 8
          ;
          fVar19 = EstimateDistanceToGoal__14SpacePartitioni(&_4Path_fSpacePartition,succ);
          pAVar9->h = fVar19;
          pAVar9->f = pAVar9->g + fVar19;
          pAVar9->parent = this->fCurNode;
        }
LAB_0020cdd0:
        if (iVar11 <= succIndex + 1) break;
        iVar17 = this->fCurNode;
        succIndex = succIndex + 1;
      } while( true );
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
    piVar16 = (this->fOpenNodes).field0_0x0.start;
    if (piVar16 != (this->fOpenNodes).field0_0x0.finish) {
      iVar11 = *piVar16;
      while (this->fCurNode != iVar11) {
        piVar16 = piVar16 + 1;
        if (piVar16 == (this->fOpenNodes).field0_0x0.finish) goto LAB_0020ce50;
        iVar11 = *piVar16;
      }
      piVar14 = (this->fOpenNodes).field0_0x0.finish;
      piVar15 = piVar16 + 1;
      if (piVar15 != piVar14) {
        iVar11 = (int)piVar14 - (int)piVar15 >> 2;
        if (iVar11 < 1) {
          piVar14 = (this->fOpenNodes).field0_0x0.finish;
        }
        else {
          do {
            iVar17 = *piVar15;
            iVar11 = iVar11 + -1;
            piVar15 = piVar15 + 1;
            *piVar16 = iVar17;
            piVar16 = piVar16 + 1;
          } while (0 < iVar11);
          piVar14 = (this->fOpenNodes).field0_0x0.finish;
        }
      }
      (this->fOpenNodes).field0_0x0.finish = piVar14 + -1;
    }
LAB_0020ce50:
    piVar16 = (this->fClosedNodes).field0_0x0.finish;
    if (piVar16 == (this->fClosedNodes).field0_0x0.end_of_storage) {
      insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fClosedNodes,piVar16,
                 &this->fCurNode);
    }
    else {
      *piVar16 = this->fCurNode;
      (this->fClosedNodes).field0_0x0.finish = (this->fClosedNodes).field0_0x0.finish + 1;
    }
                    /* end of inlined section */
    StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
              (&(this->fClosedNodes).field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if ((int)(this->fOpenNodes).field0_0x0.finish - (int)(this->fOpenNodes).field0_0x0.start >> 2 ==
        0) {
      bVar8 = true;
    }
    else {
      iVar11 = FindSmallestOpenNode__4Path(this);
      this->fCurNode = iVar11;
      bVar8 = false;
    }
  }
  return bVar8;
}

static bool EvalPoint(POINT a, POINT b, POINT c, POINT *bestPt, float *bestDist) {
	float tem;
	POINT a;
	POINT b;
	POINT c;
	POINT b;
	POINT a;
	float xdel;
	float ydel;
	POINT b;
	POINT a;
	float xdel;
	float ydel;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar4;
  float fVar5;
  undefined auStack_b0 [16];
  undefined auStack_a0 [16];
  undefined auStack_90 [16];
  undefined local_80 [16];
  undefined local_70 [16];
  undefined local_60 [16];
  undefined local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (int)unaff_s1;
  uStack_2c = (int)((ulong)unaff_s1 >> 0x20);
  local_40 = (int)unaff_s0;
  uStack_3c = (int)((ulong)unaff_s0 >> 0x20);
  local_20 = (int)unaff_retaddr;
  uStack_1c = (int)((ulong)unaff_retaddr >> 0x20);
  puVar1 = auStack_b0 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)a >> (7 - uVar2) * 8;
  puVar1 = auStack_a0 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)b >> (7 - uVar2) * 8;
  puVar1 = auStack_90 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)c >> (7 - uVar2) * 8;
  puVar1 = local_80 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)a >> (7 - uVar2) * 8;
  puVar1 = local_70 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)b >> (7 - uVar2) * 8;
  local_70._0_4_ = b.x;
  local_70._4_4_ = b.y;
  local_80._0_4_ = a.x;
  local_80._4_4_ = a.y;
  auStack_b0._0_8_ = a;
  auStack_a0._0_8_ = b;
  auStack_90._0_8_ = c;
  local_80._0_8_ = a;
  local_70._0_8_ = b;
  fVar4 = sqrtf((float)(local_80._0_4_ - local_70._0_4_) * (float)(local_80._0_4_ - local_70._0_4_)
                + (float)(local_80._4_4_ - local_70._4_4_) *
                  (float)(local_80._4_4_ - local_70._4_4_));
  puVar1 = local_60 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       (ulong)auStack_a0._0_8_ >> (7 - uVar2) * 8;
  local_60._0_8_ = auStack_a0._0_8_;
  puVar1 = local_50 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       (ulong)auStack_90._0_8_ >> (7 - uVar2) * 8;
  local_50._0_8_ = auStack_90._0_8_;
  local_60._0_4_ = auStack_a0._0_8_.x;
  local_50._0_4_ = auStack_90._0_8_.x;
  local_60._4_4_ = auStack_a0._0_8_.y;
  local_50._4_4_ = auStack_90._0_8_.y;
  fVar5 = sqrtf((float)(local_60._0_4_ - local_50._0_4_) * (float)(local_60._0_4_ - local_50._0_4_)
                + (float)(local_60._4_4_ - local_50._4_4_) *
                  (float)(local_60._4_4_ - local_50._4_4_));
  fVar4 = fVar4 + fVar5;
  fVar5 = *bestDist;
  if (fVar4 < fVar5) {
    *bestDist = fVar4;
    puVar1 = (undefined *)((int)&bestPt->y + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)b >> (7 - uVar2) * 8;
    uVar2 = (uint)bestPt & 7;
    *(ulong *)((int)bestPt - uVar2) =
         (long)b << uVar2 * 8 |
         *(ulong *)((int)bestPt - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  }
  return fVar4 < fVar5;
}

bool Path::DoOneSmooth() {
	Int numNodes;
	Int somethingMoved;
	Int bumpValue;
	Int numPoints;
	Int ct;
	RECT irect;
	float bestDist;
	POINT a;
	POINT b;
	POINT c;
	POINT bestPt;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	POINT a;
	POINT b;
	POINT c;
	POINT b;
	POINT a;
	float xdel;
	float ydel;
	POINT b;
	POINT a;
	float xdel;
	float ydel;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  tagPOINT *ptVar4;
  tagPOINT *ptVar5;
  ulong *puVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  tagPOINT *ptVar10;
  tagPOINT *ptVar11;
  int iVar12;
  tagPOINT tVar13;
  ulong uVar14;
  tagPOINT tVar15;
  ulong uVar16;
  tagPOINT *ptVar17;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar18;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar19;
  undefined8 unaff_s5;
  int iVar20;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar21;
  float fVar22;
  tagRECT irect;
  undefined auStack_170 [16];
  undefined local_160 [16];
  undefined auStack_150 [16];
  tagPOINT bestPt;
  undefined local_130 [16];
  undefined local_120 [16];
  tagPOINT c;
  undefined local_100 [16];
  undefined local_f0 [16];
  tagPOINT a;
  tagPOINT b;
  float bestDist;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  iVar19 = 0;
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  iVar20 = (int)(this->fSpatialNodePath).field0_0x0.finish -
           (int)(this->fSpatialNodePath).field0_0x0.start >> 2;
                    /* end of inlined section */
  bVar7 = true;
  if (1 < iVar20) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ptVar4 = (this->fFinalPath).finish;
    ptVar5 = (this->fFinalPath).start;
    do {
      iVar8 = this->fSmoothCount + 1;
      iVar8 = iVar8 * iVar8;
      iVar18 = 100 / iVar8;
      if (iVar8 == 0) {
        trap(7);
      }
      if (iVar18 < 1) {
        iVar18 = 1;
      }
      if (1 < iVar20) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        piVar9 = (this->fSpatialNodePath).field0_0x0.start;
        iVar8 = 1;
        while( true ) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
          uVar14 = (ulong)piVar9[iVar8 + -1];
          FindInterfaceRect__14SpacePartitioniiP7tagRECT
                    (&_4Path_fSpacePartition,piVar9[iVar8 + -1],piVar9[iVar8],&irect);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          ptVar11 = (this->fFinalPath).start;
                    /* end of inlined section */
          iVar12 = iVar8 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          ptVar17 = ptVar11 + iVar8 + -1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          ptVar10 = ptVar11 + iVar8;
          puVar1 = (undefined *)((int)&ptVar17->y + 3);
                    /* end of inlined section */
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)ptVar17 & 7;
          auStack_170._0_8_ =
               (tagPOINT)
               ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                uVar14 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)ptVar17 - uVar3) >> uVar3 * 8);
          puVar1 = auStack_170 + 7;
          uVar2 = (uint)puVar1 & 7;
          *(ulong *)(puVar1 + -uVar2) =
               *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
               (ulong)auStack_170._0_8_ >> (7 - uVar2) * 8;
          uVar14 = (ulong)(iVar12 < (int)ptVar4 - (int)ptVar5 >> 3);
          puVar1 = (undefined *)((int)&ptVar10->y + 3);
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)ptVar10 & 7;
          tVar15 = (tagPOINT)
                   ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                    (ulong)auStack_170._0_8_ & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                    -1L << (8 - uVar3) * 8 | *(ulong *)((int)ptVar10 - uVar3) >> uVar3 * 8);
          puVar1 = local_160 + 7;
          uVar2 = (uint)puVar1 & 7;
          *(ulong *)(puVar1 + -uVar2) =
               *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
               (ulong)tVar15 >> (7 - uVar2) * 8;
          if (uVar14 == 0) {
            puVar1 = auStack_150 + 7;
            uVar2 = (uint)puVar1 & 7;
            *(ulong *)(puVar1 + -uVar2) =
                 *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                 (ulong)tVar15 >> (7 - uVar2) * 8;
            auStack_150._0_8_ = tVar15;
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ptVar11 = ptVar11 + iVar12;
            puVar1 = (undefined *)((int)&ptVar11->y + 3);
                    /* end of inlined section */
            uVar2 = (uint)puVar1 & 7;
            uVar3 = (uint)ptVar11 & 7;
            auStack_150._0_8_ =
                 (tagPOINT)
                 ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                  uVar14 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((int)ptVar11 - uVar3) >> uVar3 * 8);
            puVar1 = auStack_150 + 7;
            uVar2 = (uint)puVar1 & 7;
            *(ulong *)(puVar1 + -uVar2) =
                 *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                 (ulong)auStack_150._0_8_ >> (7 - uVar2) * 8;
          }
          puVar1 = local_130 + 7;
          uVar2 = (uint)puVar1 & 7;
          *(ulong *)(puVar1 + -uVar2) =
               *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
               (ulong)auStack_170._0_8_ >> (7 - uVar2) * 8;
          puVar1 = local_120 + 7;
          uVar2 = (uint)puVar1 & 7;
          *(ulong *)(puVar1 + -uVar2) =
               *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
               (ulong)tVar15 >> (7 - uVar2) * 8;
          puVar1 = (undefined *)((int)&c.y + 3);
          uVar2 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar2);
          *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | (ulong)auStack_150._0_8_ >> (7 - uVar2) * 8;
          c = auStack_150._0_8_;
          puVar1 = local_100 + 7;
          uVar2 = (uint)puVar1 & 7;
          *(ulong *)(puVar1 + -uVar2) =
               *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
               (ulong)auStack_170._0_8_ >> (7 - uVar2) * 8;
          puVar1 = local_f0 + 7;
          uVar2 = (uint)puVar1 & 7;
          *(ulong *)(puVar1 + -uVar2) =
               *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
               (ulong)tVar15 >> (7 - uVar2) * 8;
          local_f0._0_4_ = tVar15.x;
          local_f0._4_4_ = tVar15.y;
          local_100._0_4_ = auStack_170._0_8_.x;
          local_100._4_4_ = auStack_170._0_8_.y;
          local_160._0_8_ = tVar15;
          local_130._0_8_ = auStack_170._0_8_;
          local_120._0_8_ = tVar15;
          local_100._0_8_ = auStack_170._0_8_;
          local_f0._0_8_ = tVar15;
          fVar21 = sqrtf((float)(local_100._0_4_ - local_f0._0_4_) *
                         (float)(local_100._0_4_ - local_f0._0_4_) +
                         (float)(local_100._4_4_ - local_f0._4_4_) *
                         (float)(local_100._4_4_ - local_f0._4_4_));
          puVar1 = (undefined *)((int)&a.y + 3);
          uVar2 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar2);
          *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | (ulong)local_120._0_8_ >> (7 - uVar2) * 8;
          a = local_120._0_8_;
          puVar1 = (undefined *)((int)&b.y + 3);
          uVar2 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar2);
          *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | (ulong)c >> (7 - uVar2) * 8;
          b = c;
          b.x = c.x;
          b.y = c.y;
          a.x = local_120._0_8_.x;
          a.y = local_120._0_8_.y;
          fVar22 = sqrtf((float)(a.x - b.x) * (float)(a.x - b.x) +
                         (float)(a.y - b.y) * (float)(a.y - b.y));
          bestDist = fVar21 + fVar22;
          puVar1 = (undefined *)((int)&bestPt.y + 3);
          uVar2 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar2);
          *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | (ulong)local_160._0_8_ >> (7 - uVar2) * 8;
          bestPt = local_160._0_8_;
          tVar13 = local_160._0_8_;
          if (2 < irect.right - irect.left) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ptVar11 = (this->fFinalPath).start + iVar8;
            puVar1 = (undefined *)((int)&ptVar11->y + 3);
                    /* end of inlined section */
            uVar2 = (uint)puVar1 & 7;
            uVar3 = (uint)ptVar11 & 7;
            uVar16 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                     (ulong)tVar15 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                     -1L << (8 - uVar3) * 8 | *(ulong *)((int)ptVar11 - uVar3) >> uVar3 * 8;
            puVar1 = local_160 + 7;
            uVar2 = (uint)puVar1 & 7;
            *(ulong *)(puVar1 + -uVar2) =
                 *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar16 >> (7 - uVar2) * 8;
            local_160._0_4_ = (int)uVar16;
            uVar14 = (ulong)local_160._0_4_;
            if ((long)uVar14 < (long)(irect.right - iVar18)) {
              local_160._0_8_ =
                   (tagPOINT)(uVar16 & 0xffffffff00000000 | (ulong)(uint)(local_160._0_4_ + iVar18))
              ;
              puVar1 = local_130 + 7;
              uVar2 = (uint)puVar1 & 7;
              *(ulong *)(puVar1 + -uVar2) =
                   *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                   (ulong)auStack_170._0_8_ >> (7 - uVar2) * 8;
              local_130._0_8_ = auStack_170._0_8_;
              puVar1 = local_120 + 7;
              uVar2 = (uint)puVar1 & 7;
              *(ulong *)(puVar1 + -uVar2) =
                   *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                   (ulong)local_160._0_8_ >> (7 - uVar2) * 8;
              local_120._0_8_ = local_160._0_8_;
              puVar1 = (undefined *)((int)&c.y + 3);
              uVar2 = (uint)puVar1 & 7;
              puVar6 = (ulong *)(puVar1 + -uVar2);
              *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                        (ulong)auStack_150._0_8_ >> (7 - uVar2) * 8;
              c = auStack_150._0_8_;
              tVar13 = auStack_170._0_8_;
              bVar7 = EvalPoint__FG8tagPOINTN20P8tagPOINTPf
                                (auStack_170._0_8_,local_160._0_8_,auStack_150._0_8_,&bestPt,
                                 &bestDist);
              iVar19 = iVar19 + bVar7;
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ptVar11 = (this->fFinalPath).start + iVar8;
            puVar1 = (undefined *)((int)&ptVar11->y + 3);
                    /* end of inlined section */
            uVar2 = (uint)puVar1 & 7;
            uVar3 = (uint)ptVar11 & 7;
            local_160._0_8_ =
                 (tagPOINT)
                 ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                  uVar14 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((int)ptVar11 - uVar3) >> uVar3 * 8);
            puVar1 = local_160 + 7;
            uVar2 = (uint)puVar1 & 7;
            *(ulong *)(puVar1 + -uVar2) =
                 *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                 (ulong)local_160._0_8_ >> (7 - uVar2) * 8;
            if (irect.left + iVar18 < local_160._0_4_) {
              local_160._0_8_ =
                   (tagPOINT)
                   ((ulong)local_160._0_8_ & 0xffffffff00000000 |
                   (ulong)(uint)(local_160._0_4_ - iVar18));
              puVar1 = local_130 + 7;
              uVar2 = (uint)puVar1 & 7;
              *(ulong *)(puVar1 + -uVar2) =
                   *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                   (ulong)auStack_170._0_8_ >> (7 - uVar2) * 8;
              local_130._0_8_ = auStack_170._0_8_;
              puVar1 = local_120 + 7;
              uVar2 = (uint)puVar1 & 7;
              *(ulong *)(puVar1 + -uVar2) =
                   *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                   (ulong)local_160._0_8_ >> (7 - uVar2) * 8;
              local_120._0_8_ = local_160._0_8_;
              puVar1 = (undefined *)((int)&c.y + 3);
              uVar2 = (uint)puVar1 & 7;
              puVar6 = (ulong *)(puVar1 + -uVar2);
              *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                        (ulong)auStack_150._0_8_ >> (7 - uVar2) * 8;
              c = auStack_150._0_8_;
              tVar13 = auStack_170._0_8_;
              bVar7 = EvalPoint__FG8tagPOINTN20P8tagPOINTPf
                                (auStack_170._0_8_,local_160._0_8_,auStack_150._0_8_,&bestPt,
                                 &bestDist);
              iVar19 = iVar19 + bVar7;
            }
          }
          ptVar11 = (this->fFinalPath).start;
          if (2 < irect.bottom - irect.top) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ptVar11 = ptVar11 + iVar8;
            puVar1 = (undefined *)((int)&ptVar11->y + 3);
                    /* end of inlined section */
            uVar2 = (uint)puVar1 & 7;
            uVar3 = (uint)ptVar11 & 7;
            tVar15 = (tagPOINT)
                     ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                      (ulong)tVar13 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                      -1L << (8 - uVar3) * 8 | *(ulong *)((int)ptVar11 - uVar3) >> uVar3 * 8);
            puVar1 = local_160 + 7;
            uVar2 = (uint)puVar1 & 7;
            *(ulong *)(puVar1 + -uVar2) =
                 *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                 (ulong)tVar15 >> (7 - uVar2) * 8;
            local_160._4_4_ = tVar15.y;
            if (local_160._4_4_ < irect.bottom - iVar18) {
              local_160._0_8_ =
                   (tagPOINT)
                   ((ulong)tVar15 & 0xffffffff | (ulong)(uint)(local_160._4_4_ + iVar18) << 0x20);
              puVar1 = local_130 + 7;
              uVar2 = (uint)puVar1 & 7;
              *(ulong *)(puVar1 + -uVar2) =
                   *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                   (ulong)auStack_170._0_8_ >> (7 - uVar2) * 8;
              local_130._0_8_ = auStack_170._0_8_;
              puVar1 = local_120 + 7;
              uVar2 = (uint)puVar1 & 7;
              *(ulong *)(puVar1 + -uVar2) =
                   *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                   (ulong)local_160._0_8_ >> (7 - uVar2) * 8;
              local_120._0_8_ = local_160._0_8_;
              puVar1 = (undefined *)((int)&c.y + 3);
              uVar2 = (uint)puVar1 & 7;
              puVar6 = (ulong *)(puVar1 + -uVar2);
              *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                        (ulong)auStack_150._0_8_ >> (7 - uVar2) * 8;
              c = auStack_150._0_8_;
              tVar15 = auStack_170._0_8_;
              bVar7 = EvalPoint__FG8tagPOINTN20P8tagPOINTPf
                                (auStack_170._0_8_,local_160._0_8_,auStack_150._0_8_,&bestPt,
                                 &bestDist);
              iVar19 = iVar19 + bVar7;
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ptVar11 = (this->fFinalPath).start + iVar8;
            puVar1 = (undefined *)((int)&ptVar11->y + 3);
                    /* end of inlined section */
            uVar2 = (uint)puVar1 & 7;
            uVar3 = (uint)ptVar11 & 7;
            local_160._0_8_ =
                 (tagPOINT)
                 ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                  (ulong)tVar15 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((int)ptVar11 - uVar3) >> uVar3 * 8);
            puVar1 = local_160 + 7;
            uVar2 = (uint)puVar1 & 7;
            *(ulong *)(puVar1 + -uVar2) =
                 *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                 (ulong)local_160._0_8_ >> (7 - uVar2) * 8;
            if (irect.top + iVar18 < local_160._4_4_) {
              local_160._0_8_ =
                   (tagPOINT)
                   ((ulong)local_160._0_8_ & 0xffffffff |
                   (ulong)(uint)(local_160._4_4_ - iVar18) << 0x20);
              puVar1 = local_130 + 7;
              uVar2 = (uint)puVar1 & 7;
              *(ulong *)(puVar1 + -uVar2) =
                   *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                   (ulong)auStack_170._0_8_ >> (7 - uVar2) * 8;
              local_130._0_8_ = auStack_170._0_8_;
              puVar1 = local_120 + 7;
              uVar2 = (uint)puVar1 & 7;
              *(ulong *)(puVar1 + -uVar2) =
                   *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
                   (ulong)local_160._0_8_ >> (7 - uVar2) * 8;
              local_120._0_8_ = local_160._0_8_;
              puVar1 = (undefined *)((int)&c.y + 3);
              uVar2 = (uint)puVar1 & 7;
              puVar6 = (ulong *)(puVar1 + -uVar2);
              *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                        (ulong)auStack_150._0_8_ >> (7 - uVar2) * 8;
              c = auStack_150._0_8_;
              bVar7 = EvalPoint__FG8tagPOINTN20P8tagPOINTPf
                                (auStack_170._0_8_,local_160._0_8_,auStack_150._0_8_,&bestPt,
                                 &bestDist);
              iVar19 = iVar19 + bVar7;
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ptVar11 = (this->fFinalPath).start;
          }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          ptVar11 = ptVar11 + iVar8;
          puVar1 = (undefined *)((int)&ptVar11->y + 3);
                    /* end of inlined section */
          uVar2 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar2);
          *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | (ulong)bestPt >> (7 - uVar2) * 8;
          uVar2 = (uint)ptVar11 & 7;
          *(ulong *)((int)ptVar11 - uVar2) =
               (long)bestPt << uVar2 * 8 |
               *(ulong *)((int)ptVar11 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          if (iVar20 <= iVar12) break;
          piVar9 = (this->fSpatialNodePath).field0_0x0.start;
          iVar8 = iVar12;
        }
      }
    } while ((iVar19 == 0) && (this->fSmoothCount = this->fSmoothCount + 1, 1 < iVar18));
    bVar7 = iVar19 == 0;
  }
  return bVar7;
}

void SpacePartition::Init(RoutingParams *spp) {
	RectRef startRectNumber;
	PenaltyRect *j;
	POINT s;
	PenaltyRect exp;
	ASTNode startNode;
	ASTNode goalNode;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	RectRef rectNumber;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	NodeRef *thisPreGoal;
	NodeRef *thisPostStart;
	PenaltyRect *part;
	RectRef newNodeRect;
	ASTNode newPreGoalNode;
	ASTNode newPostStartNode;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	PenaltyRect dest;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	PenaltyRect dest;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	unsigned int n;
	RectRef rectNumber;
	Int penalty;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	RectRef rectNumber;
	Int penalty;
	
  tagPOINT *ptVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ASTNode *pAVar5;
  vector_PenaltyRect___malloc_alloc_template_0___ *pvVar6;
  ulong *puVar7;
  vector_PenaltyRect___malloc_alloc_template_0___ *v;
  bool bVar8;
  PenaltyRect *pPVar9;
  int iVar10;
  RoutingParams *pRVar11;
  vector_ASTNode___malloc_alloc_template_0___ *this_00;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  PenaltyRect *pPVar15;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  PenaltyRect dest;
  int iStack_13c;
  ulong uStack_138;
  float local_130;
  float fStack_12c;
  float local_128;
  ASTNode newPostStartNode;
  ASTNode goalNode;
  int local_c0;
  int local_bc;
  int *value;
  int *thisPreGoal;
  int *thisPostStart;
  int local_ac;
  ASTNode *local_a8;
  vector_PenaltyRect___malloc_alloc_template_0___ *local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  this->fParams = spp;
  this->fPartition1 = spp->partition1;
  uVar12 = (ulong)(int)spp->partition2;
  this->fPartition2 = spp->partition2;
  Clear__14SpacePartition(this);
  piVar14 = &dest.penalty;
  puVar2 = (undefined *)((int)&(this->fParams->begin).y + 3);
  uVar3 = (uint)puVar2 & 7;
  ptVar1 = &this->fParams->begin;
  uVar4 = (uint)ptVar1 & 7;
  dest.bounds._0_8_ =
       (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
       uVar12 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)((int)ptVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)&dest.bounds.top + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar7 = (ulong *)(puVar2 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | dest.bounds._0_8_ >> (7 - uVar3) * 8;
  dest.bounds.top = (int)(dest.bounds._0_8_ >> 0x20);
  __11PenaltyRectiiiii
            ((PenaltyRect *)piVar14,dest.bounds.left,dest.bounds.top,dest.bounds.left + 1,
             dest.bounds.top + 1,0);
  ExpandRect__14SpacePartitionP11PenaltyRect(this,(PenaltyRect *)piVar14);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pPVar15 = (this->fFree).finish;
  if (pPVar15 == (this->fFree).end_of_storage) {
    insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
              (&this->fFree,pPVar15,(PenaltyRect *)piVar14);
  }
  else {
    puVar2 = (undefined *)((int)&(pPVar15->bounds).top + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 |
              CONCAT44(iStack_13c,dest.penalty) >> (7 - uVar3) * 8;
    uVar3 = (uint)pPVar15 & 7;
    *(ulong *)((int)pPVar15 - uVar3) =
         CONCAT44(iStack_13c,dest.penalty) << uVar3 * 8 |
         *(ulong *)((int)pPVar15 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar2 = (undefined *)((int)&(pPVar15->bounds).bottom + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uStack_138 >> (7 - uVar3) * 8;
    piVar14 = &(pPVar15->bounds).right;
    uVar3 = (uint)piVar14 & 7;
    puVar7 = (ulong *)((int)piVar14 - uVar3);
    *puVar7 = uStack_138 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    pPVar15->penalty = (int)local_130;
    (this->fFree).finish = (this->fFree).finish + 1;
  }
                    /* end of inlined section */
  local_a4 = &this->fFree;
                    /* end of inlined section */
  StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(local_a4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  newPostStartNode.goalNumber = -1;
  this_00 = &this->fNodeList;
                    /* end of inlined section */
  newPostStartNode.rectNumber =
       (((int)(this->fFree).finish - (int)(this->fFree).start) * -0x33333333 >> 2) + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
  newPostStartNode.succTableIndex = -1;
  newPostStartNode.succCount = -1;
  newPostStartNode.penalty = 0;
  pAVar5 = (this->fNodeList).finish;
  if (pAVar5 == (this->fNodeList).end_of_storage) {
    insert_aux__t6vector2Z7ASTNodeZt23__malloc_alloc_template1i0P7ASTNodeRC7ASTNode
              (this_00,pAVar5,&newPostStartNode);
  }
  else {
    puVar2 = (undefined *)((int)&pAVar5->rectNumber + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 |
              CONCAT44(newPostStartNode.rectNumber,0xffffffff) >> (7 - uVar3) * 8;
    uVar3 = (uint)pAVar5 & 7;
    *(ulong *)((int)pAVar5 - uVar3) =
         CONCAT44(newPostStartNode.rectNumber,0xffffffff) << uVar3 * 8 |
         *(ulong *)((int)pAVar5 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar2 = (undefined *)((int)&pAVar5->succTableIndex + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | 0xffffffffffffffffU >> (7 - uVar3) * 8;
    uVar3 = (uint)&pAVar5->succCount & 7;
    puVar7 = (ulong *)((int)&pAVar5->succCount - uVar3);
    *puVar7 = -1L << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar2 = (undefined *)((int)&(pAVar5->entry).x + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 |
              ((ulong)(uint)newPostStartNode.entry.x << 0x20) >> (7 - uVar3) * 8;
    uVar3 = (uint)&pAVar5->penalty & 7;
    puVar7 = (ulong *)((int)&pAVar5->penalty - uVar3);
    *puVar7 = ((ulong)(uint)newPostStartNode.entry.x << 0x20) << uVar3 * 8 |
              *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar2 = (undefined *)((int)&pAVar5->parent + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | (ulong)newPostStartNode._24_8_ >> (7 - uVar3) * 8;
    piVar14 = &(pAVar5->entry).y;
    uVar3 = (uint)piVar14 & 7;
    puVar7 = (ulong *)((int)piVar14 - uVar3);
    *puVar7 = (long)newPostStartNode._24_8_ << uVar3 * 8 |
              *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar2 = (undefined *)((int)&pAVar5->g + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | newPostStartNode._32_8_ >> (7 - uVar3) * 8;
    uVar3 = (uint)&pAVar5->f & 7;
    puVar7 = (ulong *)((int)&pAVar5->f - uVar3);
    *puVar7 = newPostStartNode._32_8_ << uVar3 * 8 |
              *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    pAVar5->h = newPostStartNode.h;
    (this->fNodeList).finish = (this->fNodeList).finish + 1;
  }
                    /* end of inlined section */
  StressVector__H1Z7ASTNode_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(this_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pAVar5 = (this->fNodeList).finish;
  goalNode.goalNumber = -1;
  goalNode.succTableIndex = -1;
  goalNode.rectNumber = -1;
  goalNode.succCount = -1;
  goalNode.penalty = 0;
  if (pAVar5 == (this->fNodeList).end_of_storage) {
    insert_aux__t6vector2Z7ASTNodeZt23__malloc_alloc_template1i0P7ASTNodeRC7ASTNode
              (this_00,pAVar5,&goalNode);
  }
  else {
    puVar2 = (undefined *)((int)&pAVar5->rectNumber + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | 0xffffffffffffffffU >> (7 - uVar3) * 8;
    uVar3 = (uint)pAVar5 & 7;
    *(ulong *)((int)pAVar5 - uVar3) =
         -1L << uVar3 * 8 | *(ulong *)((int)pAVar5 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
    ;
    puVar2 = (undefined *)((int)&pAVar5->succTableIndex + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | 0xffffffffffffffffU >> (7 - uVar3) * 8;
    uVar3 = (uint)&pAVar5->succCount & 7;
    puVar7 = (ulong *)((int)&pAVar5->succCount - uVar3);
    *puVar7 = -1L << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar2 = (undefined *)((int)&(pAVar5->entry).x + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 |
              ((ulong)(uint)goalNode.entry.x << 0x20) >> (7 - uVar3) * 8;
    uVar3 = (uint)&pAVar5->penalty & 7;
    puVar7 = (ulong *)((int)&pAVar5->penalty - uVar3);
    *puVar7 = ((ulong)(uint)goalNode.entry.x << 0x20) << uVar3 * 8 |
              *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar2 = (undefined *)((int)&pAVar5->parent + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | (ulong)goalNode._24_8_ >> (7 - uVar3) * 8;
    piVar14 = &(pAVar5->entry).y;
    uVar3 = (uint)piVar14 & 7;
    puVar7 = (ulong *)((int)piVar14 - uVar3);
    *puVar7 = (long)goalNode._24_8_ << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar2 = (undefined *)((int)&pAVar5->g + 3);
    uVar3 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | goalNode._32_8_ >> (7 - uVar3) * 8;
    uVar3 = (uint)&pAVar5->f & 7;
    puVar7 = (ulong *)((int)&pAVar5->f - uVar3);
    *puVar7 = goalNode._32_8_ << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    pAVar5->h = goalNode.h;
    (this->fNodeList).finish = (this->fNodeList).finish + 1;
  }
                    /* end of inlined section */
  StressVector__H1Z7ASTNode_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(this_00);
  v = local_a4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pvVar6 = this->fParams->goalList;
  pPVar15 = pvVar6->start;
                    /* end of inlined section */
  value = &local_c0;
  if (pPVar15 == pvVar6->finish) {
    return;
  }
  local_a8 = &newPostStartNode;
  local_ac = -0x45d1745d;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  piVar14 = (this->fPreGoalNodes).field0_0x0.finish;
  do {
    local_c0 = -1;
    if (piVar14 == (this->fPreGoalNodes).field0_0x0.end_of_storage) {
      insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fPreGoalNodes,piVar14,
                 value);
    }
    else {
      *piVar14 = -1;
      (this->fPreGoalNodes).field0_0x0.finish = (this->fPreGoalNodes).field0_0x0.finish + 1;
    }
                    /* end of inlined section */
    StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
              (&(this->fPreGoalNodes).field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    piVar14 = (this->fPostStartNodes).field0_0x0.finish;
    thisPreGoal = (this->fPreGoalNodes).field0_0x0.finish + -1;
                    /* end of inlined section */
    uVar12 = (ulong)(int)thisPreGoal;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    local_bc = -1;
    if (piVar14 == (this->fPostStartNodes).field0_0x0.end_of_storage) {
      insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fPostStartNodes,piVar14,
                 &local_bc);
    }
    else {
      *piVar14 = -1;
      (this->fPostStartNodes).field0_0x0.finish = (this->fPostStartNodes).field0_0x0.finish + 1;
    }
                    /* end of inlined section */
    StressVector__H1Zi_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v
              (&(this->fPostStartNodes).field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    thisPostStart = (this->fPostStartNodes).field0_0x0.finish + -1;
    pPVar9 = GetIntersectingPartitionRect__14SpacePartitionPC7tagRECT(this,&pPVar15->bounds);
    if ((pPVar9 == (PenaltyRect *)0x0) || (uVar12 = (ulong)pPVar9->penalty, uVar12 != 0x7fffffff)) {
      uVar13 = (long)(int)this;
      iVar10 = GetIntersectingFreeRect__14SpacePartitionPC7tagRECT(this,&pPVar15->bounds);
      if (iVar10 == -1) {
        puVar2 = (undefined *)((int)&pPVar15->bounds + 3);
        uVar3 = (uint)puVar2 & 7;
        uVar4 = (uint)pPVar15 & 7;
        dest.bounds._0_8_ =
             (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
             uVar12 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)pPVar15 - uVar4) >> uVar4 * 8;
        puVar2 = (undefined *)((int)&pPVar15->bounds + 3);
        uVar3 = (uint)puVar2 & 7;
        uVar4 = (uint)&pPVar15->bounds & 7;
        dest.bounds._8_8_ =
             (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)&pPVar15->bounds - uVar4) >> uVar4 * 8;
        puVar2 = (undefined *)((int)&dest.bounds.top + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | dest.bounds._0_8_ >> (7 - uVar3) * 8;
        puVar2 = (undefined *)((int)&dest.bounds.bottom + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | dest.bounds._8_8_ >> (7 - uVar3) * 8;
        dest.penalty = 0;
        if (pPVar9 != (PenaltyRect *)0x0) {
          dest.penalty = pPVar9->penalty;
        }
        bVar8 = ExpandRect__14SpacePartitionP11PenaltyRect(this,&dest);
        if (!bVar8) {
          pRVar11 = this->fParams;
          goto LAB_0020db5c;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        pPVar9 = v->finish;
        if (pPVar9 == v->end_of_storage) {
          insert_aux__t6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0P11PenaltyRectRC11PenaltyRect
                    (local_a4,pPVar9,&dest);
        }
        else {
          puVar2 = (undefined *)((int)&(pPVar9->bounds).top + 3);
          uVar3 = (uint)puVar2 & 7;
          puVar7 = (ulong *)(puVar2 + -uVar3);
          *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | dest.bounds._0_8_ >> (7 - uVar3) * 8;
          uVar3 = (uint)pPVar9 & 7;
          *(ulong *)((int)pPVar9 - uVar3) =
               dest.bounds._0_8_ << uVar3 * 8 |
               *(ulong *)((int)pPVar9 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
          puVar2 = (undefined *)((int)&(pPVar9->bounds).bottom + 3);
          uVar3 = (uint)puVar2 & 7;
          puVar7 = (ulong *)(puVar2 + -uVar3);
          *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | dest.bounds._8_8_ >> (7 - uVar3) * 8;
          piVar14 = &(pPVar9->bounds).right;
          uVar3 = (uint)piVar14 & 7;
          puVar7 = (ulong *)((int)piVar14 - uVar3);
          *puVar7 = dest.bounds._8_8_ << uVar3 * 8 |
                    *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
          pPVar9->penalty = dest.penalty;
          local_a4->finish = local_a4->finish + 1;
        }
                    /* end of inlined section */
        StressVector__H1Z11PenaltyRect_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(v);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        iVar10 = (((int)v->finish - (int)(this->fFree).start) * -0x33333333 >> 2) + -1;
                    /* end of inlined section */
        pRVar11 = this->fParams;
      }
      else {
        pRVar11 = this->fParams;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
      dest.penalty = (this->fFree).start[iVar10].penalty;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
      dest.bounds._8_8_ = 0xffffffffffffffff;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
      dest.bounds._0_8_ =
           CONCAT44(iVar10,((int)pPVar15 - (int)pRVar11->goalList->start) * -0x33333333 >> 2);
      pAVar5 = (this->fNodeList).finish;
      if (pAVar5 == (this->fNodeList).end_of_storage) {
        insert_aux__t6vector2Z7ASTNodeZt23__malloc_alloc_template1i0P7ASTNodeRC7ASTNode
                  (this_00,pAVar5,(ASTNode *)&dest);
      }
      else {
        puVar2 = (undefined *)((int)&pAVar5->rectNumber + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | dest.bounds._0_8_ >> (7 - uVar3) * 8;
        uVar3 = (uint)pAVar5 & 7;
        *(ulong *)((int)pAVar5 - uVar3) =
             dest.bounds._0_8_ << uVar3 * 8 |
             *(ulong *)((int)pAVar5 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar2 = (undefined *)((int)&pAVar5->succTableIndex + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | 0xffffffffffffffffU >> (7 - uVar3) * 8;
        uVar3 = (uint)&pAVar5->succCount & 7;
        puVar7 = (ulong *)((int)&pAVar5->succCount - uVar3);
        *puVar7 = -1L << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar2 = (undefined *)((int)&(pAVar5->entry).x + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 |
                  CONCAT44(iStack_13c,dest.penalty) >> (7 - uVar3) * 8;
        uVar3 = (uint)&pAVar5->penalty & 7;
        puVar7 = (ulong *)((int)&pAVar5->penalty - uVar3);
        *puVar7 = CONCAT44(iStack_13c,dest.penalty) << uVar3 * 8 |
                  *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar2 = (undefined *)((int)&pAVar5->parent + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uStack_138 >> (7 - uVar3) * 8;
        piVar14 = &(pAVar5->entry).y;
        uVar3 = (uint)piVar14 & 7;
        puVar7 = (ulong *)((int)piVar14 - uVar3);
        *puVar7 = uStack_138 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar2 = (undefined *)((int)&pAVar5->g + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 |
                  CONCAT44(fStack_12c,local_130) >> (7 - uVar3) * 8;
        uVar3 = (uint)&pAVar5->f & 7;
        puVar7 = (ulong *)((int)&pAVar5->f - uVar3);
        *puVar7 = CONCAT44(fStack_12c,local_130) << uVar3 * 8 |
                  *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        pAVar5->h = local_128;
        (this->fNodeList).finish = (this->fNodeList).finish + 1;
      }
                    /* end of inlined section */
      StressVector__H1Z7ASTNode_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(this_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      *thisPreGoal = (((int)(this->fNodeList).finish - (int)(this->fNodeList).start) * local_ac >> 2
                     ) + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      newPostStartNode.rectNumber = ((this->fNodeList).start)->rectNumber;
      newPostStartNode.penalty = pPVar15->penalty;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
                    /* end of inlined section */
      newPostStartNode.goalNumber =
           ((int)pPVar15 - (int)this->fParams->goalList->start) * -0x33333333 >> 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.h */
      local_a8->succCount = -1;
      local_a8->succTableIndex = -1;
      pAVar5 = (this->fNodeList).finish;
      if (pAVar5 == (this->fNodeList).end_of_storage) {
        insert_aux__t6vector2Z7ASTNodeZt23__malloc_alloc_template1i0P7ASTNodeRC7ASTNode
                  (this_00,pAVar5,&newPostStartNode);
      }
      else {
        puVar2 = (undefined *)((int)&pAVar5->rectNumber + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 |
                  CONCAT44(newPostStartNode.rectNumber,newPostStartNode.goalNumber) >>
                  (7 - uVar3) * 8;
        uVar3 = (uint)pAVar5 & 7;
        *(ulong *)((int)pAVar5 - uVar3) =
             CONCAT44(newPostStartNode.rectNumber,newPostStartNode.goalNumber) << uVar3 * 8 |
             *(ulong *)((int)pAVar5 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar2 = (undefined *)((int)&pAVar5->succTableIndex + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 |
                  CONCAT44(newPostStartNode.succTableIndex,newPostStartNode.succCount) >>
                  (7 - uVar3) * 8;
        uVar3 = (uint)&pAVar5->succCount & 7;
        puVar7 = (ulong *)((int)&pAVar5->succCount - uVar3);
        *puVar7 = CONCAT44(newPostStartNode.succTableIndex,newPostStartNode.succCount) << uVar3 * 8
                  | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar2 = (undefined *)((int)&(pAVar5->entry).x + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 |
                  CONCAT44(newPostStartNode.entry.x,newPostStartNode.penalty) >> (7 - uVar3) * 8;
        uVar3 = (uint)&pAVar5->penalty & 7;
        puVar7 = (ulong *)((int)&pAVar5->penalty - uVar3);
        *puVar7 = CONCAT44(newPostStartNode.entry.x,newPostStartNode.penalty) << uVar3 * 8 |
                  *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar2 = (undefined *)((int)&pAVar5->parent + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 |
                  (ulong)newPostStartNode._24_8_ >> (7 - uVar3) * 8;
        piVar14 = &(pAVar5->entry).y;
        uVar3 = (uint)piVar14 & 7;
        puVar7 = (ulong *)((int)piVar14 - uVar3);
        *puVar7 = (long)newPostStartNode._24_8_ << uVar3 * 8 |
                  *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar2 = (undefined *)((int)&pAVar5->g + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar7 = (ulong *)(puVar2 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | newPostStartNode._32_8_ >> (7 - uVar3) * 8;
        uVar3 = (uint)&pAVar5->f & 7;
        puVar7 = (ulong *)((int)&pAVar5->f - uVar3);
        *puVar7 = newPostStartNode._32_8_ << uVar3 * 8 |
                  *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        pAVar5->h = newPostStartNode.h;
        (this->fNodeList).finish = (this->fNodeList).finish + 1;
      }
                    /* end of inlined section */
      StressVector__H1Z7ASTNode_Pt6vector2ZX01Zt23__malloc_alloc_template1i0_v(this_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      *thisPostStart =
           (((int)(this->fNodeList).finish - (int)(this->fNodeList).start) * local_ac >> 2) + -1;
      pRVar11 = this->fParams;
    }
    else {
      pRVar11 = this->fParams;
    }
LAB_0020db5c:
    pPVar15 = (PenaltyRect *)(&pPVar15->penalty + 1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if (pPVar15 == pRVar11->goalList->finish) {
      return;
    }
    piVar14 = (this->fPreGoalNodes).field0_0x0.finish;
  } while( true );
}

void Path::InitPath(RoutingParams *prs) {
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef *last;
	NodeRef *first;
	NodeRef *pointer;
	NodeRef *last;
	NodeRef *first;
	NodeRef *pointer;
	POINT *last;
	POINT *first;
	POINT *pointer;
	
  int *piVar1;
  tagPOINT *ptVar2;
  bool bVar3;
  int *piVar4;
  tagPOINT *ptVar5;
  
  this->fParams = prs;
  Init__14SpacePartitionPC13RoutingParams(&_4Path_fSpacePartition,prs);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  piVar1 = (this->fReverseNodePath).field0_0x0.start;
  for (piVar4 = piVar1; piVar4 != (this->fReverseNodePath).field0_0x0.finish; piVar4 = piVar4 + 1) {
  }
  (this->fReverseNodePath).field0_0x0.finish = piVar1;
  piVar1 = (this->fSpatialNodePath).field0_0x0.start;
  for (piVar4 = piVar1; piVar4 != (this->fSpatialNodePath).field0_0x0.finish; piVar4 = piVar4 + 1) {
  }
  (this->fSpatialNodePath).field0_0x0.finish = piVar1;
  ptVar2 = (this->fFinalPath).start;
  for (ptVar5 = ptVar2; ptVar5 != (this->fFinalPath).finish; ptVar5 = ptVar5 + 1) {
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fFinalPath).finish = ptVar2;
                    /* end of inlined section */
  this->fPathStage = 0;
  this->fSmoothCount = 0;
  this->fIterations = 0;
  this->fChosenGoal = -1;
  bVar3 = InitAST__4Path(this);
  if (bVar3) {
    this->fPathStage = 1;
  }
  return;
}

NodeRef Path::FindSmallestOpenNode() {
	Int smallest;
	float smallestf;
	NodeRef *i;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	unsigned int n;
	
  ASTNode *pAVar1;
  int *piVar2;
  int n;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  pAVar1 = GetNode__14SpacePartitioni(&_4Path_fSpacePartition,*(this->fOpenNodes).field0_0x0.start);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  piVar2 = (this->fOpenNodes).field0_0x0.start;
                    /* end of inlined section */
  piVar3 = piVar2 + 1;
  if (piVar3 != (this->fOpenNodes).field0_0x0.finish) {
    n = *piVar3;
    fVar6 = pAVar1->f;
    while( true ) {
      pAVar1 = GetNode__14SpacePartitioni(&_4Path_fSpacePartition,n);
      fVar5 = pAVar1->f;
      if (fVar5 < fVar6) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        iVar4 = (int)piVar3 - (int)(this->fOpenNodes).field0_0x0.start >> 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        piVar2 = (this->fOpenNodes).field0_0x0.finish;
      }
      else {
        piVar2 = (this->fOpenNodes).field0_0x0.finish;
        fVar5 = fVar6;
      }
                    /* end of inlined section */
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar2) break;
      n = *piVar3;
      fVar6 = fVar5;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    piVar2 = (this->fOpenNodes).field0_0x0.start;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return piVar2[iVar4];
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

NodeRef* int * copy_backward<int *, int *>(NodeRef *first, NodeRef *last, NodeRef *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

NodeRef* int * uninitialized_copy<int *, int *>(NodeRef *first, NodeRef *last, NodeRef *result) {
	NodeRef *p;
	int &value;
	void *pAddress;
	
  int iVar1;
  int *piVar2;
  
  piVar2 = result;
  if (first != last) {
    do {
      iVar1 = *first;
      first = first + 1;
      result = piVar2 + 1;
      *piVar2 = iVar1;
      piVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<int, __malloc_alloc_template<0> >::insert_aux(NodeRef *position, NodeRef &x) {
	NodeRef x_copy;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	void *result;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef *p;
	int &value;
	void *pAddress;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef *first;
	NodeRef *pointer;
	vector<int,__malloc_alloc_template<0> > *this;
	
  uint size;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = this->finish;
  if (piVar1 == this->end_of_storage) {
    iVar4 = (int)piVar1 - (int)this->start >> 2;
    iVar2 = 1;
    if (iVar4 != 0) {
      iVar2 = iVar4 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar2 << 2;
    if (iVar2 == 0) {
      piVar1 = (int *)0x0;
      size = 0;
    }
    else {
      piVar1 = (int *)malloc(size);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPiZPi_X01X01X11_X11(this->start,position,piVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(int *)((int)piVar1 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPiZPi_X01X01X11_X11
              (position,this->finish,(int *)((int)piVar1 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    piVar3 = this->start;
    if (piVar3 == this->finish) {
      piVar3 = this->start;
    }
    else {
      do {
        piVar3 = piVar3 + 1;
      } while (piVar3 != this->finish);
                    /* end of inlined section */
      piVar3 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((piVar3 != (int *)0x0) && ((int)this->end_of_storage - (int)piVar3 >> 2 != 0)) {
      free(piVar3);
                    /* end of inlined section */
    }
    piVar3 = piVar1 + iVar4;
    this->start = piVar1;
    this->end_of_storage = (int *)((int)piVar1 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *piVar1 = piVar1[-1];
                    /* end of inlined section */
    iVar2 = *x;
    copy_backward__H2ZPiZPi_X01X01X11_X11(position,this->finish + -1,this->finish);
    *position = iVar2;
    piVar3 = this->finish;
  }
  this->finish = piVar3 + 1;
  return;
}

void void StressVector<int>(vector<int,__malloc_alloc_template<0> > *v) {
  return;
}

PenaltyRect* PenaltyRect * copy_backward<PenaltyRect *, PenaltyRect *>(PenaltyRect *first, PenaltyRect *last, PenaltyRect *result) {
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  int iVar7;
  ulong in_v1;
  PenaltyRect *pPVar9;
  ulong uVar10;
  ulong uVar8;
  
  uVar8 = (ulong)(int)result;
  uVar10 = uVar8;
  if (first != last) {
    do {
      iVar7 = (int)uVar8;
      result = (PenaltyRect *)(iVar7 - 0x14);
      uVar8 = (ulong)(int)result;
      pPVar9 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].bounds.top + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)pPVar9 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)pPVar9 - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&last[-1].bounds.bottom + 3);
      uVar3 = (uint)puVar1 & 7;
      piVar2 = &last[-1].bounds.right;
      uVar4 = (uint)piVar2 & 7;
      uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
      iVar5 = last[-1].penalty;
      uVar3 = iVar7 - 0xdU & 7;
      puVar6 = (ulong *)((iVar7 - 0xdU) - uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_v1 >> (7 - uVar3) * 8;
      uVar3 = (uint)result & 7;
      *(ulong *)((int)result - uVar3) =
           in_v1 << uVar3 * 8 |
           *(ulong *)((int)result - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      uVar3 = iVar7 - 5U & 7;
      puVar6 = (ulong *)((iVar7 - 5U) - uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
      uVar3 = iVar7 - 0xcU & 7;
      puVar6 = (ulong *)((iVar7 - 0xcU) - uVar3);
      *puVar6 = uVar10 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      *(int *)(iVar7 + -4) = iVar5;
      last = pPVar9;
    } while (first != pPVar9);
  }
  return result;
}

PenaltyRect* PenaltyRect * uninitialized_copy<PenaltyRect *, PenaltyRect *>(PenaltyRect *first, PenaltyRect *last, PenaltyRect *result) {
	PenaltyRect *p;
	PenaltyRect &value;
	void *pAddress;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  PenaltyRect *pPVar7;
  ulong in_a3;
  ulong in_t0;
  
  pPVar7 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&(first->bounds).top + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)first - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(first->bounds).bottom + 3);
      uVar3 = (uint)puVar1 & 7;
      piVar2 = &(first->bounds).right;
      uVar4 = (uint)piVar2 & 7;
      in_t0 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
      iVar5 = first->penalty;
      puVar1 = (undefined *)((int)&(pPVar7->bounds).top + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
      uVar3 = (uint)pPVar7 & 7;
      *(ulong *)((int)pPVar7 - uVar3) =
           in_a3 << uVar3 * 8 |
           *(ulong *)((int)pPVar7 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(pPVar7->bounds).bottom + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_t0 >> (7 - uVar3) * 8;
      piVar2 = &(pPVar7->bounds).right;
      uVar3 = (uint)piVar2 & 7;
      puVar6 = (ulong *)((int)piVar2 - uVar3);
      *puVar6 = in_t0 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      first = first + 1;
      result = pPVar7 + 1;
      pPVar7->penalty = iVar5;
      pPVar7 = result;
    } while (first != last);
  }
  return result;
}

void vector<PenaltyRect, __malloc_alloc_template<0> >::insert_aux(PenaltyRect *position, PenaltyRect &x) {
	PenaltyRect x_copy;
	unsigned int old_size;
	unsigned int len;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	PenaltyRect *p;
	PenaltyRect &value;
	void *pAddress;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	PenaltyRect *first;
	PenaltyRect *pointer;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  ulong in_v1;
  ulong uVar10;
  PenaltyRect *pPVar11;
  PenaltyRect *result;
  ulong in_a3;
  int iVar12;
  int iVar13;
  PenaltyRect x_copy;
  
  uVar8 = (ulong)(int)position;
  pPVar11 = this->finish;
  if ((long)(int)pPVar11 == (long)(int)this->end_of_storage) {
    iVar12 = ((int)pPVar11 - (int)this->start) * -0x33333333 >> 2;
    iVar13 = 1;
    if (iVar12 != 0) {
      iVar13 = iVar12 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if (iVar13 == 0) {
      uVar10 = 0;
    }
    else {
      pvVar7 = malloc(iVar13 * 0x14);
      uVar10 = (ulong)(int)pvVar7;
      if (uVar10 == 0) {
        pvVar7 = oom_malloc__t23__malloc_alloc_template1i0Ui(iVar13 * 0x14);
        uVar10 = (ulong)(int)pvVar7;
      }
    }
                    /* end of inlined section */
    result = (PenaltyRect *)uVar10;
    uninitialized_copy__H2ZP11PenaltyRectZP11PenaltyRect_X01X01X11_X11(this->start,position,result);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar9 = (int)result + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&(x->bounds).top + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)x & 7;
    uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)x - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&(x->bounds).bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    piVar2 = &(x->bounds).right;
    uVar4 = (uint)piVar2 & 7;
    uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
    iVar5 = x->penalty;
    uVar3 = uVar9 + 7 & 7;
    puVar6 = (ulong *)((uVar9 + 7) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
    uVar3 = uVar9 & 7;
    *(ulong *)(uVar9 - uVar3) =
         uVar8 << uVar3 * 8 | *(ulong *)(uVar9 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = uVar9 + 0xf & 7;
    puVar6 = (ulong *)((uVar9 + 0xf) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
    uVar3 = uVar9 + 8 & 7;
    puVar6 = (ulong *)((uVar9 + 8) - uVar3);
    *puVar6 = uVar10 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    *(int *)(uVar9 + 0x10) = iVar5;
                    /* end of inlined section */
    uninitialized_copy__H2ZP11PenaltyRectZP11PenaltyRect_X01X01X11_X11
              (position,this->finish,
               (PenaltyRect *)((int)result + (int)position + (0x14 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pPVar11 = this->start;
    if (pPVar11 == this->finish) {
      pPVar11 = this->start;
    }
    else {
      do {
        pPVar11 = pPVar11 + 1;
      } while (pPVar11 != this->finish);
                    /* end of inlined section */
      pPVar11 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pPVar11 != (PenaltyRect *)0x0) &&
       (((int)this->end_of_storage - (int)pPVar11) * -0x33333333 >> 2 != 0)) {
      free(pPVar11);
                    /* end of inlined section */
    }
    this->start = result;
    this->finish = result + iVar12 + 1;
    this->end_of_storage = result + iVar13;
  }
  else {
    puVar1 = (undefined *)((int)&pPVar11[-1].bounds.top + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)(pPVar11 + -1) & 7;
    uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
            -1L << (8 - uVar4) * 8 | *(ulong *)((int)(pPVar11 + -1) - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&pPVar11[-1].bounds.bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    piVar2 = &pPVar11[-1].bounds.right;
    uVar4 = (uint)piVar2 & 7;
    uVar10 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
    iVar13 = pPVar11[-1].penalty;
    puVar1 = (undefined *)((int)&(pPVar11->bounds).top + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
    uVar3 = (uint)pPVar11 & 7;
    *(ulong *)((int)pPVar11 - uVar3) =
         uVar8 << uVar3 * 8 |
         *(ulong *)((int)pPVar11 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&(pPVar11->bounds).bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
    piVar2 = &(pPVar11->bounds).right;
    uVar3 = (uint)piVar2 & 7;
    puVar6 = (ulong *)((int)piVar2 - uVar3);
    *puVar6 = uVar10 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    pPVar11->penalty = iVar13;
    puVar1 = (undefined *)((int)&(x->bounds).top + 3);
                    /* end of inlined section */
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)x & 7;
    x_copy.bounds._0_8_ =
         (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
         in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)x - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&(x->bounds).bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    piVar2 = &(x->bounds).right;
    uVar4 = (uint)piVar2 & 7;
    x_copy.bounds._8_8_ =
         (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
         uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
    x_copy.penalty = x->penalty;
    puVar1 = (undefined *)((int)&x_copy.bounds.top + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy.bounds._0_8_ >> (7 - uVar3) * 8;
    puVar1 = (undefined *)((int)&x_copy.bounds.bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy.bounds._8_8_ >> (7 - uVar3) * 8;
    copy_backward__H2ZP11PenaltyRectZP11PenaltyRect_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    puVar1 = (undefined *)((int)&(position->bounds).top + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy.bounds._0_8_ >> (7 - uVar3) * 8;
    uVar3 = (uint)position & 7;
    *(ulong *)((int)position - uVar3) =
         x_copy.bounds._0_8_ << uVar3 * 8 |
         *(ulong *)((int)position - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&(position->bounds).bottom + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy.bounds._8_8_ >> (7 - uVar3) * 8;
    piVar2 = &(position->bounds).right;
    uVar3 = (uint)piVar2 & 7;
    puVar6 = (ulong *)((int)piVar2 - uVar3);
    *puVar6 = x_copy.bounds._8_8_ << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    position->penalty = x_copy.penalty;
    this->finish = this->finish + 1;
  }
  return;
}

void void StressVector<PenaltyRect>(vector<PenaltyRect,__malloc_alloc_template<0> > *v) {
  return;
}

ASTNode* ASTNode * copy_backward<ASTNode *, ASTNode *>(ASTNode *first, ASTNode *last, ASTNode *result) {
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  ulong *puVar6;
  int iVar7;
  ulong in_v1;
  ulong uVar9;
  ASTNode *pAVar10;
  ulong uVar11;
  ulong in_a3;
  ulong in_t0;
  ulong uVar8;
  
  uVar8 = (ulong)(int)result;
  uVar11 = uVar8;
  if (first != last) {
    do {
      iVar7 = (int)uVar8;
      result = (ASTNode *)(iVar7 - 0x2c);
      uVar8 = (ulong)(int)result;
      pAVar10 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].rectNumber + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)pAVar10 & 7;
      uVar9 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)pAVar10 - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&last[-1].succTableIndex + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&last[-1].succCount & 7;
      uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&last[-1].succCount - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&last[-1].entry.x + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&last[-1].penalty & 7;
      in_a3 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)&last[-1].penalty - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&last[-1].parent + 3);
      uVar3 = (uint)puVar1 & 7;
      piVar2 = &last[-1].entry.y;
      uVar4 = (uint)piVar2 & 7;
      in_t0 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
      uVar3 = iVar7 - 0x25U & 7;
      puVar6 = (ulong *)((iVar7 - 0x25U) - uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
      uVar3 = (uint)result & 7;
      *(ulong *)((int)result - uVar3) =
           uVar9 << uVar3 * 8 |
           *(ulong *)((int)result - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      uVar3 = iVar7 - 0x1dU & 7;
      puVar6 = (ulong *)((iVar7 - 0x1dU) - uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
      uVar3 = iVar7 - 0x24U & 7;
      puVar6 = (ulong *)((iVar7 - 0x24U) - uVar3);
      *puVar6 = uVar11 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      uVar3 = iVar7 - 0x15U & 7;
      puVar6 = (ulong *)((iVar7 - 0x15U) - uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
      uVar3 = iVar7 - 0x1cU & 7;
      puVar6 = (ulong *)((iVar7 - 0x1cU) - uVar3);
      *puVar6 = in_a3 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      uVar3 = iVar7 - 0xdU & 7;
      puVar6 = (ulong *)((iVar7 - 0xdU) - uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_t0 >> (7 - uVar3) * 8;
      uVar3 = iVar7 - 0x14U & 7;
      puVar6 = (ulong *)((iVar7 - 0x14U) - uVar3);
      *puVar6 = in_t0 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&last[-1].g + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&last[-1].f & 7;
      in_v1 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)&last[-1].f - uVar4) >> uVar4 * 8;
      fVar5 = last[-1].h;
      uVar11 = (ulong)(int)fVar5;
      uVar3 = iVar7 - 5U & 7;
      puVar6 = (ulong *)((iVar7 - 5U) - uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_v1 >> (7 - uVar3) * 8;
      uVar3 = iVar7 - 0xcU & 7;
      puVar6 = (ulong *)((iVar7 - 0xcU) - uVar3);
      *puVar6 = in_v1 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      *(float *)(iVar7 + -4) = fVar5;
      last = pAVar10;
    } while (first != pAVar10);
  }
  return result;
}

ASTNode* ASTNode * uninitialized_copy<ASTNode *, ASTNode *>(ASTNode *first, ASTNode *last, ASTNode *result) {
	ASTNode *p;
	ASTNode &value;
	void *pAddress;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  ulong *puVar6;
  ASTNode *pAVar7;
  ulong in_a3;
  ulong uVar8;
  ulong in_t0;
  ulong uVar9;
  ulong in_t1;
  ulong in_t2;
  
  pAVar7 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&first->rectNumber + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)first & 7;
      uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)first - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&first->succTableIndex + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&first->succCount & 7;
      uVar9 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)&first->succCount - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(first->entry).x + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&first->penalty & 7;
      in_t1 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_t1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)&first->penalty - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&first->parent + 3);
      uVar3 = (uint)puVar1 & 7;
      piVar2 = &(first->entry).y;
      uVar4 = (uint)piVar2 & 7;
      in_t2 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              in_t2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&pAVar7->rectNumber + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
      uVar3 = (uint)pAVar7 & 7;
      *(ulong *)((int)pAVar7 - uVar3) =
           uVar8 << uVar3 * 8 |
           *(ulong *)((int)pAVar7 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&pAVar7->succTableIndex + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
      uVar3 = (uint)&pAVar7->succCount & 7;
      puVar6 = (ulong *)((int)&pAVar7->succCount - uVar3);
      *puVar6 = uVar9 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(pAVar7->entry).x + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_t1 >> (7 - uVar3) * 8;
      uVar3 = (uint)&pAVar7->penalty & 7;
      puVar6 = (ulong *)((int)&pAVar7->penalty - uVar3);
      *puVar6 = in_t1 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&pAVar7->parent + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_t2 >> (7 - uVar3) * 8;
      piVar2 = &(pAVar7->entry).y;
      uVar3 = (uint)piVar2 & 7;
      puVar6 = (ulong *)((int)piVar2 - uVar3);
      *puVar6 = in_t2 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      puVar1 = (undefined *)((int)&first->g + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&first->f & 7;
      in_a3 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)&first->f - uVar4) >> uVar4 * 8;
      fVar5 = first->h;
      in_t0 = (ulong)(int)fVar5;
      puVar1 = (undefined *)((int)&pAVar7->g + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
      uVar3 = (uint)&pAVar7->f & 7;
      puVar6 = (ulong *)((int)&pAVar7->f - uVar3);
      *puVar6 = in_a3 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      first = first + 1;
      result = pAVar7 + 1;
      pAVar7->h = fVar5;
      pAVar7 = result;
    } while (first != last);
  }
  return result;
}

void vector<ASTNode, __malloc_alloc_template<0> >::insert_aux(ASTNode *position, ASTNode &x) {
	ASTNode x_copy;
	unsigned int old_size;
	unsigned int len;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	ASTNode *p;
	ASTNode &value;
	void *pAddress;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	ASTNode *first;
	ASTNode *pointer;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  ulong *puVar6;
  void *pvVar7;
  ASTNode *pAVar8;
  ulong uVar9;
  uint uVar10;
  ulong in_v1;
  ulong uVar11;
  ulong uVar12;
  ASTNode *result;
  ulong uVar13;
  ulong in_a3;
  int iVar14;
  int iVar15;
  ASTNode x_copy;
  
  uVar13 = (ulong)(int)position;
  pAVar8 = this->finish;
  if ((long)(int)pAVar8 == (long)(int)this->end_of_storage) {
    iVar14 = ((int)pAVar8 - (int)this->start) * -0x45d1745d >> 2;
    iVar15 = 1;
    if (iVar14 != 0) {
      iVar15 = iVar14 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if (iVar15 == 0) {
      uVar9 = 0;
    }
    else {
      pvVar7 = malloc(iVar15 * 0x2c);
      uVar9 = (ulong)(int)pvVar7;
      if (uVar9 == 0) {
        pvVar7 = oom_malloc__t23__malloc_alloc_template1i0Ui(iVar15 * 0x2c);
        uVar9 = (ulong)(int)pvVar7;
      }
    }
                    /* end of inlined section */
    result = (ASTNode *)uVar9;
    pAVar8 = uninitialized_copy__H2ZP7ASTNodeZP7ASTNode_X01X01X11_X11(this->start,position,result);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar10 = (int)result + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&x->rectNumber + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)x & 7;
    uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)x - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&x->succTableIndex + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&x->succCount & 7;
    uVar9 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)&x->succCount - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&(x->entry).x + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&x->penalty & 7;
    uVar12 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)&x->penalty - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&x->parent + 3);
    uVar3 = (uint)puVar1 & 7;
    piVar2 = &(x->entry).y;
    uVar4 = (uint)piVar2 & 7;
    uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             (long)(int)pAVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
    uVar3 = uVar10 + 7 & 7;
    puVar6 = (ulong *)((uVar10 + 7) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
    uVar3 = uVar10 & 7;
    *(ulong *)(uVar10 - uVar3) =
         uVar11 << uVar3 * 8 | *(ulong *)(uVar10 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = uVar10 + 0xf & 7;
    puVar6 = (ulong *)((uVar10 + 0xf) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
    uVar3 = uVar10 + 8 & 7;
    puVar6 = (ulong *)((uVar10 + 8) - uVar3);
    *puVar6 = uVar9 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = uVar10 + 0x17 & 7;
    puVar6 = (ulong *)((uVar10 + 0x17) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
    uVar3 = uVar10 + 0x10 & 7;
    puVar6 = (ulong *)((uVar10 + 0x10) - uVar3);
    *puVar6 = uVar12 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = uVar10 + 0x1f & 7;
    puVar6 = (ulong *)((uVar10 + 0x1f) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
    uVar3 = uVar10 + 0x18 & 7;
    puVar6 = (ulong *)((uVar10 + 0x18) - uVar3);
    *puVar6 = uVar13 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&x->g + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&x->f & 7;
    uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)&x->f - uVar4) >> uVar4 * 8;
    fVar5 = x->h;
    uVar3 = uVar10 + 0x27 & 7;
    puVar6 = (ulong *)((uVar10 + 0x27) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
    uVar3 = uVar10 + 0x20 & 7;
    puVar6 = (ulong *)((uVar10 + 0x20) - uVar3);
    *puVar6 = uVar13 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    *(float *)(uVar10 + 0x28) = fVar5;
                    /* end of inlined section */
    uninitialized_copy__H2ZP7ASTNodeZP7ASTNode_X01X01X11_X11
              (position,this->finish,
               (ASTNode *)((int)result + (int)position + (0x2c - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pAVar8 = this->start;
    if (pAVar8 == this->finish) {
      pAVar8 = this->start;
    }
    else {
      do {
        pAVar8 = pAVar8 + 1;
      } while (pAVar8 != this->finish);
                    /* end of inlined section */
      pAVar8 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pAVar8 != (ASTNode *)0x0) &&
       (((int)this->end_of_storage - (int)pAVar8) * -0x45d1745d >> 2 != 0)) {
      free(pAVar8);
                    /* end of inlined section */
    }
    this->start = result;
    this->finish = result + iVar14 + 1;
    this->end_of_storage = result + iVar15;
  }
  else {
    puVar1 = (undefined *)((int)&pAVar8[-1].rectNumber + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)(pAVar8 + -1) & 7;
    uVar9 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
            -1L << (8 - uVar4) * 8 | *(ulong *)((int)(pAVar8 + -1) - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&pAVar8[-1].succTableIndex + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&pAVar8[-1].succCount & 7;
    uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)&pAVar8[-1].succCount - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&pAVar8[-1].entry.x + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&pAVar8[-1].penalty & 7;
    uVar12 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)&pAVar8[-1].penalty - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&pAVar8[-1].parent + 3);
    uVar3 = (uint)puVar1 & 7;
    piVar2 = &pAVar8[-1].entry.y;
    uVar4 = (uint)piVar2 & 7;
    uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             (long)(int)x & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&pAVar8->rectNumber + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
    uVar3 = (uint)pAVar8 & 7;
    *(ulong *)((int)pAVar8 - uVar3) =
         uVar9 << uVar3 * 8 |
         *(ulong *)((int)pAVar8 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&pAVar8->succTableIndex + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
    uVar3 = (uint)&pAVar8->succCount & 7;
    puVar6 = (ulong *)((int)&pAVar8->succCount - uVar3);
    *puVar6 = uVar11 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&(pAVar8->entry).x + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
    uVar3 = (uint)&pAVar8->penalty & 7;
    puVar6 = (ulong *)((int)&pAVar8->penalty - uVar3);
    *puVar6 = uVar12 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&pAVar8->parent + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
    piVar2 = &(pAVar8->entry).y;
    uVar3 = (uint)piVar2 & 7;
    puVar6 = (ulong *)((int)piVar2 - uVar3);
    *puVar6 = uVar13 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&pAVar8[-1].g + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&pAVar8[-1].f & 7;
    uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)&pAVar8[-1].f - uVar4) >> uVar4 * 8;
    fVar5 = pAVar8[-1].h;
    puVar1 = (undefined *)((int)&pAVar8->g + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
    uVar3 = (uint)&pAVar8->f & 7;
    puVar6 = (ulong *)((int)&pAVar8->f - uVar3);
    *puVar6 = uVar13 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    pAVar8->h = fVar5;
    puVar1 = (undefined *)((int)&x->rectNumber + 3);
                    /* end of inlined section */
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)x & 7;
    x_copy._0_8_ = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                   in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                   *(ulong *)((int)x - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&x->succTableIndex + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&x->succCount & 7;
    x_copy._8_8_ = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                   uVar13 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                   *(ulong *)((int)&x->succCount - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&(x->entry).x + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&x->penalty & 7;
    x_copy._16_8_ =
         (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
         (long)(int)fVar5 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)&x->penalty - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&x->parent + 3);
    uVar3 = (uint)puVar1 & 7;
    piVar2 = &(x->entry).y;
    uVar4 = (uint)piVar2 & 7;
    x_copy._24_8_ =
         (tagPOINT)
         ((*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar12 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8);
    puVar1 = (undefined *)((int)&x_copy.rectNumber + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy._0_8_ >> (7 - uVar3) * 8;
    puVar1 = (undefined *)((int)&x_copy.succTableIndex + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy._8_8_ >> (7 - uVar3) * 8;
    puVar1 = (undefined *)((int)&x_copy.entry.x + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy._16_8_ >> (7 - uVar3) * 8;
    puVar1 = (undefined *)((int)&x_copy.parent + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | (ulong)x_copy._24_8_ >> (7 - uVar3) * 8;
    puVar1 = (undefined *)((int)&x->g + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&x->f & 7;
    x_copy._32_8_ =
         (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
         x_copy._0_8_ & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
         *(ulong *)((int)&x->f - uVar4) >> uVar4 * 8;
    x_copy.h = x->h;
    puVar1 = (undefined *)((int)&x_copy.g + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy._32_8_ >> (7 - uVar3) * 8;
    copy_backward__H2ZP7ASTNodeZP7ASTNode_X01X01X11_X11(position,this->finish + -1,this->finish);
    puVar1 = (undefined *)((int)&position->rectNumber + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy._0_8_ >> (7 - uVar3) * 8;
    uVar3 = (uint)position & 7;
    *(ulong *)((int)position - uVar3) =
         x_copy._0_8_ << uVar3 * 8 |
         *(ulong *)((int)position - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&position->succTableIndex + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy._8_8_ >> (7 - uVar3) * 8;
    uVar3 = (uint)&position->succCount & 7;
    puVar6 = (ulong *)((int)&position->succCount - uVar3);
    *puVar6 = x_copy._8_8_ << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&(position->entry).x + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy._16_8_ >> (7 - uVar3) * 8;
    uVar3 = (uint)&position->penalty & 7;
    puVar6 = (ulong *)((int)&position->penalty - uVar3);
    *puVar6 = x_copy._16_8_ << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&position->parent + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | (ulong)x_copy._24_8_ >> (7 - uVar3) * 8;
    piVar2 = &(position->entry).y;
    uVar3 = (uint)piVar2 & 7;
    puVar6 = (ulong *)((int)piVar2 - uVar3);
    *puVar6 = (long)x_copy._24_8_ << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&position->g + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | x_copy._32_8_ >> (7 - uVar3) * 8;
    uVar3 = (uint)&position->f & 7;
    puVar6 = (ulong *)((int)&position->f - uVar3);
    *puVar6 = x_copy._32_8_ << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    position->h = x_copy.h;
    this->finish = this->finish + 1;
  }
  return;
}

void void StressVector<ASTNode>(vector<ASTNode,__malloc_alloc_template<0> > *v) {
  return;
}

POINT* tagPOINT * copy_backward<tagPOINT *, tagPOINT *>(POINT *first, POINT *last, POINT *result) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  tagPOINT *ptVar5;
  ulong in_v1;
  tagPOINT *ptVar6;
  
  ptVar5 = result;
  if (first != last) {
    do {
      result = ptVar5 + -1;
      ptVar6 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].y + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)ptVar6 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)ptVar6 - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&ptVar5[-1].y + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_v1 >> (7 - uVar2) * 8;
      uVar2 = (uint)result & 7;
      *(ulong *)((int)result - uVar2) =
           in_v1 << uVar2 * 8 |
           *(ulong *)((int)result - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      last = ptVar6;
      ptVar5 = result;
    } while (first != ptVar6);
  }
  return result;
}

POINT* tagPOINT * uninitialized_copy<tagPOINT *, tagPOINT *>(POINT *first, POINT *last, POINT *result) {
	POINT *p;
	tagPOINT &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  tagPOINT *ptVar5;
  ulong in_a3;
  
  ptVar5 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&first->y + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)first - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&ptVar5->y + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      first = first + 1;
      result = ptVar5 + 1;
      uVar2 = (uint)ptVar5 & 7;
      *(ulong *)((int)ptVar5 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)ptVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      ptVar5 = result;
    } while (first != last);
  }
  return result;
}

void vector<tagPOINT, __malloc_alloc_template<0> >::insert_aux(POINT *position, POINT &x) {
	POINT x_copy;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	void *result;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	POINT *p;
	tagPOINT &value;
	void *pAddress;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	POINT *first;
	POINT *pointer;
	vector<tagPOINT,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  tagPOINT *ptVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  tagPOINT *ptVar10;
  ulong in_a3;
  int iVar11;
  tagPOINT x_copy;
  
  uVar7 = (ulong)(int)position;
  ptVar6 = this->finish;
  if ((long)(int)ptVar6 == (long)(int)this->end_of_storage) {
    iVar11 = (int)ptVar6 - (int)this->start >> 3;
    iVar9 = 1;
    if (iVar11 != 0) {
      iVar9 = iVar11 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    uVar5 = iVar9 << 3;
    if (iVar9 == 0) {
      ptVar6 = (tagPOINT *)0x0;
      uVar5 = 0;
    }
    else {
      ptVar6 = (tagPOINT *)malloc(uVar5);
      if (ptVar6 == (tagPOINT *)0x0) {
        ptVar6 = (tagPOINT *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar5);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZP8tagPOINTZP8tagPOINT_X01X01X11_X11(this->start,position,ptVar6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar8 = (int)ptVar6 + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&x->y + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)x & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)x - uVar3) >> uVar3 * 8;
    uVar2 = uVar8 + 7 & 7;
    puVar4 = (ulong *)((uVar8 + 7) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = uVar8 & 7;
    *(ulong *)(uVar8 - uVar2) =
         uVar7 << uVar2 * 8 | *(ulong *)(uVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
    uninitialized_copy__H2ZP8tagPOINTZP8tagPOINT_X01X01X11_X11
              (position,this->finish,
               (tagPOINT *)((int)ptVar6 + (int)position + (8 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    ptVar10 = this->start;
    if (ptVar10 == this->finish) {
      ptVar10 = this->start;
    }
    else {
      do {
        ptVar10 = ptVar10 + 1;
      } while (ptVar10 != this->finish);
                    /* end of inlined section */
      ptVar10 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((ptVar10 != (tagPOINT *)0x0) && ((int)this->end_of_storage - (int)ptVar10 >> 3 != 0)) {
      free(ptVar10);
                    /* end of inlined section */
    }
    ptVar10 = ptVar6 + iVar11;
    this->start = ptVar6;
    this->end_of_storage = (tagPOINT *)((int)&ptVar6->x + uVar5);
  }
  else {
    puVar1 = (undefined *)((int)&ptVar6[-1].y + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)(ptVar6 + -1) & 7;
    uVar7 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
            -1L << (8 - uVar2) * 8 | *(ulong *)((int)(ptVar6 + -1) - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&ptVar6->y + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)ptVar6 & 7;
    *(ulong *)((int)ptVar6 - uVar5) =
         uVar7 << uVar5 * 8 |
         *(ulong *)((int)ptVar6 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&x->y + 3);
                    /* end of inlined section */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)x & 7;
    x_copy = (tagPOINT)
             ((*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((int)x - uVar2) >> uVar2 * 8);
    puVar1 = (undefined *)((int)&x_copy.y + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy >> (7 - uVar5) * 8;
    copy_backward__H2ZP8tagPOINTZP8tagPOINT_X01X01X11_X11(position,this->finish + -1,this->finish);
    puVar1 = (undefined *)((int)&position->y + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy >> (7 - uVar5) * 8;
    uVar5 = (uint)position & 7;
    *(ulong *)((int)position - uVar5) =
         (long)x_copy << uVar5 * 8 |
         *(ulong *)((int)position - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    ptVar10 = this->finish;
  }
  this->finish = ptVar10 + 1;
  return;
}

void void StressVector<tagPOINT>(vector<tagPOINT,__malloc_alloc_template<0> > *v) {
  return;
}

void SpacePartition::~SpacePartition(int __in_chrg) {
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	ASTNode *last;
	ASTNode *first;
	ASTNode *pointer;
	vector<ASTNode,__malloc_alloc_template<0> > *this;
	void *pAddress;
	ASTNodeRefList *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	vector<int,__malloc_alloc_template<0> > *this;
	void *pAddress;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	NodeRef *first;
	NodeRef *last;
	NodeRef *pointer;
	PenaltyRect *last;
	PenaltyRect *first;
	PenaltyRect *pointer;
	void *pAddress;
	
  ASTNode *pAVar1;
  int *piVar2;
  PenaltyRect *pPVar3;
  int *piVar4;
  PenaltyRect *pPVar5;
  ASTNode *pAVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Routing.cpp */
  pAVar6 = (this->fNodeList).start;
  pAVar1 = (this->fNodeList).finish;
  if (pAVar6 == pAVar1) {
    pAVar6 = (this->fNodeList).start;
  }
  else {
    do {
      pAVar6 = pAVar6 + 1;
    } while (pAVar6 != pAVar1);
    pAVar6 = (this->fNodeList).start;
  }
  if ((pAVar6 != (ASTNode *)0x0) &&
     (((int)(this->fNodeList).end_of_storage - (int)pAVar6) * -0x45d1745d >> 2 != 0)) {
    free(pAVar6);
                    /* end of inlined section */
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  for (piVar4 = (this->fSuccessorTable).field0_0x0.start;
      piVar4 != (this->fSuccessorTable).field0_0x0.finish; piVar4 = piVar4 + 1) {
  }
  piVar4 = (this->fSuccessorTable).field0_0x0.start;
  if (piVar4 == (int *)0x0) {
    piVar4 = (this->fPostStartNodes).field0_0x0.start;
  }
  else if ((int)(this->fSuccessorTable).field0_0x0.end_of_storage - (int)piVar4 >> 2 == 0) {
    piVar4 = (this->fPostStartNodes).field0_0x0.start;
  }
  else {
    free(piVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    piVar4 = (this->fPostStartNodes).field0_0x0.start;
  }
  piVar2 = (this->fPostStartNodes).field0_0x0.finish;
  if (piVar4 == piVar2) {
    piVar4 = (this->fPostStartNodes).field0_0x0.start;
  }
  else {
    do {
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2);
    piVar4 = (this->fPostStartNodes).field0_0x0.start;
  }
  if (piVar4 == (int *)0x0) {
    piVar4 = (this->fPreGoalNodes).field0_0x0.start;
  }
  else if ((int)(this->fPostStartNodes).field0_0x0.end_of_storage - (int)piVar4 >> 2 == 0) {
    piVar4 = (this->fPreGoalNodes).field0_0x0.start;
  }
  else {
    free(piVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    piVar4 = (this->fPreGoalNodes).field0_0x0.start;
  }
  piVar2 = (this->fPreGoalNodes).field0_0x0.finish;
  if (piVar4 == piVar2) {
    piVar4 = (this->fPreGoalNodes).field0_0x0.start;
  }
  else {
    do {
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2);
    piVar4 = (this->fPreGoalNodes).field0_0x0.start;
  }
  if (piVar4 == (int *)0x0) {
    pPVar5 = (this->fFree).start;
  }
  else if ((int)(this->fPreGoalNodes).field0_0x0.end_of_storage - (int)piVar4 >> 2 == 0) {
    pPVar5 = (this->fFree).start;
  }
  else {
    free(piVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pPVar5 = (this->fFree).start;
  }
  pPVar3 = (this->fFree).finish;
  if (pPVar5 == pPVar3) {
    pPVar5 = (this->fFree).start;
  }
  else {
    do {
      pPVar5 = pPVar5 + 1;
    } while (pPVar5 != pPVar3);
    pPVar5 = (this->fFree).start;
  }
  if ((pPVar5 != (PenaltyRect *)0x0) &&
     (((int)(this->fFree).end_of_storage - (int)pPVar5) * -0x33333333 >> 2 != 0)) {
    free(pPVar5);
  }
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___14SpacePartition(&_4Path_fSpacePartition,2);
    }
    else {
      __14SpacePartition(&_4Path_fSpacePartition);
    }
  }
  return;
}

void global constructors keyed to Path::fSpacePartition() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to Path::fSpacePartition() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
