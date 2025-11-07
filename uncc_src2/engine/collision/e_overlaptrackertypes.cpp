// STATUS: NOT STARTED

#include "e_overlaptrackertypes.h"

EOTData* EOTData::EOTData() {
	EBound3 *this;
	EVec3 *this;
	int d;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ulong *puVar6;
  EOTBound *pEVar7;
  ulong uVar8;
  int iVar9;
  
  puVar1 = (undefined *)((int)&(this->m_bPos).vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  pEVar2 = &(this->m_bPos).vMax;
  uVar5 = (uint)pEVar2 & 7;
  puVar6 = (ulong *)((int)pEVar2 - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_bPos).vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_bPos).vMax.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  pEVar2 = &(this->m_bPos).vMax;
  uVar3 = (uint)pEVar2 & 7;
  uVar8 = *(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)pEVar2 - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_bPos).vMax.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_bPos).vMin.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar8 >> (7 - uVar5) * 8;
  uVar5 = (uint)this & 7;
  *(ulong *)((int)this - uVar5) =
       uVar8 << uVar5 * 8 | *(ulong *)((int)this - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_bPos).vMin.field0_0x0.d[2] = fVar4;
  __13ERedBlackTree(&(this->m_overlaps).field0_0x0);
                    /* end of inlined section */
  this->m_receiveFlags = 0;
  pEVar7 = this->m_maxPos;
  this->m_causeFlags = 0;
  iVar9 = 1;
  do {
    pEVar7[-2].pLast = (EOTBound *)0x0;
    iVar9 = iVar9 + -1;
    pEVar7[-2].pNext = (EOTBound *)0x0;
    pEVar7[-2].pInstance = (EInstance *)0x0;
    pEVar7->pLast = (EOTBound *)0x0;
    pEVar7->pNext = (EOTBound *)0x0;
    pEVar7->pInstance = (EInstance *)0x0;
    pEVar7 = pEVar7 + 1;
  } while (-1 < iVar9);
  return this;
}

void EOTData::~EOTData(int __in_chrg) {
	void *pAddress;
	
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  RemoveAll__13ERedBlackTree(&(this->m_overlaps).field0_0x0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}
