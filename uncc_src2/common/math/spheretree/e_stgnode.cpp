// STATUS: NOT STARTED

#include "e_stgnode.h"

ESTGNode* ESTGNode::ESTGNode() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  __13ERedBlackTree(&(this->m_desiredBy).field0_0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  this->m_pObj = (void *)0x0;
  this->m_pBest = (ESTGNode *)0x0;
  this->m_pParent = (ESTGNode *)0x0;
  this->m_pChildren[1] = (ESTGNode *)0x0;
  this->m_pChildren[0] = (ESTGNode *)0x0;
  puVar1 = (undefined *)((int)&(this->m_boundSphere).vCenter.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_boundsphere.h */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_boundSphere & 7;
  puVar3 = (ulong *)((int)&this->m_boundSphere - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_boundSphere).vCenter.field0_0x0.d[2] = 0.0;
  (this->m_boundSphere).radius = 0.0;
                    /* end of inlined section */
  this->m_iNode = (undefined1 *)0x0;
  this->m_iRadius = (undefined1 *)0x0;
  this->m_iMaxExt = (undefined1 *)0x0;
  this->m_iMinExt = (undefined1 *)0x0;
  return this;
}

void ESTGNode::~ESTGNode(int __in_chrg) {
	void *p;
	
  if (this->m_pChildren[0] != (ESTGNode *)0x0) {
    ___8ESTGNode(this->m_pChildren[0],3);
  }
  if (this->m_pChildren[1] != (ESTGNode *)0x0) {
    ___8ESTGNode(this->m_pChildren[1],3);
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  RemoveAll__13ERedBlackTree(&(this->m_desiredBy).field0_0x0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/common/math/spheretree/e_stgnode.h */
    _allocBucketFree__FPvUiUi(this,0x40,0xb);
  }
                    /* end of inlined section */
  return;
}
