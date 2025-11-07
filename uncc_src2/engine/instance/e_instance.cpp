// STATUS: NOT STARTED

#include "e_instance.h"

ETypeInfo *gpTypeInfo_EInstance = NULL;

__vtbl_ptr_type EInstance virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SafeDelete,
		/* .__delta2 = */ -5440
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTypeInfo,
		/* .__delta2 = */ -5384
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTypeName,
		/* .__delta2 = */ -5368
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTypeKey,
		/* .__delta2 = */ -5352
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTypeVersion,
		/* .__delta2 = */ -5336
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::~EInstance,
		/* .__delta2 = */ -8904
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Read,
		/* .__delta2 = */ -8544
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Write,
		/* .__delta2 = */ -8776
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Update,
		/* .__delta2 = */ -5200
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::VisibilityTest,
		/* .__delta2 = */ -5192
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Draw,
		/* .__delta2 = */ -5184
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetOrient,
		/* .__delta2 = */ -5168
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollidePointWithInstance,
		/* .__delta2 = */ -5152
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideSphereWithInstance,
		/* .__delta2 = */ -5144
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CalcLights3,
		/* .__delta2 = */ -7600
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetBoundSphere,
		/* .__delta2 = */ -8224
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EStorable virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::SafeDelete,
		/* .__delta2 = */ 10264
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeInfo,
		/* .__delta2 = */ 10320
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeName,
		/* .__delta2 = */ 10336
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeKey,
		/* .__delta2 = */ 10352
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeVersion,
		/* .__delta2 = */ 10368
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::~EStorable,
		/* .__delta2 = */ 10384
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::Read,
		/* .__delta2 = */ 10432
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::Write,
		/* .__delta2 = */ 10440
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EInstance::m_typeInfo;

EStream& operator<<(EStream &s, EInstance *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,&pD->field0_0x0);
  return pEVar1;
}

EStream& operator>>(EStream &s, EInstance *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (EInstance *)pStorable;
  return s;
}

EInstance* EInstance::EInstance() {
	EStorable *this;
	int d;
	
  EOTBound *pEVar1;
  int iVar2;
  
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EInstance;
  __7EOTData(&this->m_otd);
  this->m_pLevel = (ERLevel *)0x0;
  this->m_instanceFlags = 0xf;
  pEVar1 = (this->m_otd).m_maxPos;
  this->m_iAlwaysUpdate = (undefined1 *)0x0;
  iVar2 = 1;
  this->m_iLevelList = (undefined1 *)0x0;
  this->m_pIGroup = (ERIGroup *)0x0;
  this->m_iIGroup = (undefined1 *)0x0;
  this->m_pSphereTreeParent = (ESphereTreeNode *)0x0;
  this->m_instanceId = 0;
  this->m_nReceivingPointLights = 0;
  do {
    pEVar1[-2].pInstance = this;
    iVar2 = iVar2 + -1;
    pEVar1->pInstance = this;
    pEVar1 = pEVar1 + 1;
  } while (-1 < iVar2);
  return this;
}

void EInstance::~EInstance(int __in_chrg) {
	EStorable *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EInstance;
  InstanceDestructing__13EScriptEngineP9EInstance(&_scriptEngine,this);
  RemoveFromLevel__9EInstance(this);
  RemoveFromInstanceGroup__9EInstance(this);
  ___7EOTData(&this->m_otd,2);
                    /* inlined from /eor/src2/common/storage/e_storable.h */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EInstance::Write(EStream &s) {
	EStorable *this;
	EStream &s;
	EStream &s;
	unsigned int d;
	unsigned int d;
	unsigned int d;
	unsigned int d;
	
  EStream *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint d;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_40 = this->m_instanceId;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
                    /* end of inlined section */
  pEVar1 = __ls__FR7EStreamP7ERLevel(s,this->m_pLevel);
  pEVar1 = __ls__FR7EStreamP15ESphereTreeNode(pEVar1,this->m_pSphereTreeParent);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_3c = this->m_instanceFlags;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,(uint)&local_40 | 4
             ,4);
                    /* end of inlined section */
  pEVar1 = __ls__FR7EStreamRC7EBound3(pEVar1,&(this->m_otd).m_bPos);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_38 = (this->m_otd).m_causeFlags;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,(uint)&local_40 | 8
             ,4);
  d = (this->m_otd).m_receiveFlags;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,
             (uint)&local_40 | 0xc,4);
  return;
}

void EInstance::Read(EStream &s) {
	EStorable *this;
	EStream &s;
	EStream &s;
	
  EStream *pEVar1;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/instance/e_instance.h */
                    /* end of inlined section */
  if (_9EInstance_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_instanceId,4);
                    /* end of inlined section */
    pEVar1 = __rs__FR7EStreamRP7ERLevel(s,&this->m_pLevel);
    pEVar1 = __rs__FR7EStreamRP15ESphereTreeNode(pEVar1,&this->m_pSphereTreeParent);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_instanceFlags,4);
                    /* end of inlined section */
    pEVar1 = __rs__FR7EStreamR7EBound3(pEVar1,&(this->m_otd).m_bPos);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &(this->m_otd).m_causeFlags,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &(this->m_otd).m_receiveFlags,4);
  }
                    /* end of inlined section */
  return;
}

void EInstance::SetBounds(EBound3 &b) {
	EBound3 &b;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  ulong *puVar6;
  ulong in_v1;
  ulong uVar7;
  
  if (this->m_pLevel == (ERLevel *)0x0) {
    puVar1 = (undefined *)((int)&(b->vMin).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)b & 7;
    uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)b - uVar4) >> uVar4 * 8;
    fVar5 = (b->vMin).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(this->m_otd).m_bPos.vMin.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
    uVar3 = (uint)&this->m_otd & 7;
    puVar6 = (ulong *)((int)&this->m_otd - uVar3);
    *puVar6 = uVar7 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (this->m_otd).m_bPos.vMin.field0_0x0.d[2] = fVar5;
    puVar1 = (undefined *)((int)&(b->vMax).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&b->vMax & 7;
    uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)&b->vMax - uVar4) >> uVar4 * 8;
    fVar5 = (b->vMax).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(this->m_otd).m_bPos.vMax.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
    pEVar2 = &(this->m_otd).m_bPos.vMax;
    uVar3 = (uint)pEVar2 & 7;
    puVar6 = (ulong *)((int)pEVar2 - uVar3);
    *puVar6 = uVar7 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (this->m_otd).m_bPos.vMax.field0_0x0.d[2] = fVar5;
                    /* end of inlined section */
  }
  else {
    SetBounds__7ERLevelP9EInstanceRC7EBound3(this->m_pLevel,this,b);
  }
  return;
}

void EInstance::GetBoundSphere(EBoundSphere &boundSphereOut) {
  CalcBoundSphere__7EBound3R12EBoundSphere(&(this->m_otd).m_bPos,boundSphereOut);
  return;
}

void EInstance::SetOverlapCauseFlags(u32 flags) {
	bool change;
	
  bool bVar1;
  ERLevel *pEVar2;
  
  pEVar2 = this->m_pLevel;
  bVar1 = (this->m_otd).m_causeFlags != flags;
  if (pEVar2 != (ERLevel *)0x0) {
    if (bVar1) {
      Remove__15EOverlapTrackerP9EInstance(&pEVar2->m_ot,this);
    }
    pEVar2 = this->m_pLevel;
  }
  (this->m_otd).m_causeFlags = flags;
  if ((pEVar2 != (ERLevel *)0x0) && (bVar1)) {
    Insert__15EOverlapTrackerP9EInstanceT1(&pEVar2->m_ot,this,(EInstance *)0x0);
  }
  return;
}

void EInstance::SetOverlapReceiveFlags(u32 flags) {
	bool change;
	
  bool bVar1;
  ERLevel *pEVar2;
  
  pEVar2 = this->m_pLevel;
  bVar1 = (this->m_otd).m_receiveFlags != flags;
  if (pEVar2 != (ERLevel *)0x0) {
    if (bVar1) {
      Remove__15EOverlapTrackerP9EInstance(&pEVar2->m_ot,this);
    }
    pEVar2 = this->m_pLevel;
  }
  (this->m_otd).m_receiveFlags = flags;
  if ((pEVar2 != (ERLevel *)0x0) && (bVar1)) {
    Insert__15EOverlapTrackerP9EInstanceT1(&pEVar2->m_ot,this,(EInstance *)0x0);
  }
  return;
}

void EInstance::RemoveFromLevel() {
  if (this->m_pLevel != (ERLevel *)0x0) {
    RemoveInstance__7ERLevelP9EInstance(this->m_pLevel,this);
  }
  return;
}

void EInstance::RemoveFromInstanceGroup() {
  if (this->m_pIGroup != (ERIGroup *)0x0) {
    RemoveInstance__8ERIGroupP9EInstance(this->m_pIGroup,this);
  }
  return;
}

bool EInstance::GetOverlapList(EBound3 &bBox, u32 type, TNodeList<EInstance *> &instancesOut) {
	bool anyFound;
	EBound3 bPrev;
	OTIterator i;
	EInstance *this;
	EOTData *this;
	EInstance *pInstance;
	u32 typeFlags;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	TNodeList<EInstance *> *this;
	EInstance *pInstance;
	u32 typeFlags;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong uVar8;
  EBound3 bPrev;
  
  if ((long)(int)this->m_pLevel == 0) {
    bVar5 = false;
  }
  else {
    puVar1 = (undefined *)((int)&(this->m_otd).m_bPos.vMin.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    uVar7 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_otd & 7;
    bPrev.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
         (long)(int)this->m_pLevel & 0xffffffffffffffffU >> (uVar7 + 1) * 8) &
         -1L << (8 - uVar3) * 8 | *(ulong *)((int)&this->m_otd - uVar3) >> uVar3 * 8;
    bPrev.vMin.field0_0x0.d[2] = (this->m_otd).m_bPos.vMin.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&bPrev.vMin.field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar7);
    *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 |
              (ulong)bPrev.vMin.field0_0x0._0_8_ >> (7 - uVar7) * 8;
                    /* end of inlined section */
    bVar5 = false;
    puVar1 = (undefined *)((int)&(this->m_otd).m_bPos.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    uVar7 = (uint)puVar1 & 7;
    pEVar2 = &(this->m_otd).m_bPos.vMax;
    uVar3 = (uint)pEVar2 & 7;
    uVar8 = (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
            (long)(int)instancesOut & 0xffffffffffffffffU >> (uVar7 + 1) * 8) &
            -1L << (8 - uVar3) * 8 | *(ulong *)((int)pEVar2 - uVar3) >> uVar3 * 8;
    bPrev.vMax.field0_0x0.d[2] = (this->m_otd).m_bPos.vMax.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&bPrev.vMax.field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar7);
    *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | uVar8 >> (7 - uVar7) * 8;
    uVar7 = (uint)&bPrev.vMax & 7;
    puVar4 = (ulong *)((int)&bPrev.vMax - uVar7);
    *puVar4 = uVar8 << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
                    /* end of inlined section */
    SetBounds__9EInstanceRC7EBound3(this,bBox);
                    /* inlined from /eor/src2/engine/collision/e_overlaptrackertypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
    puVar6 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                       ((undefined1 *)(this->m_otd).m_overlaps.field0_0x0.m_list.m_pHead,
                        &this->m_otd,type);
                    /* end of inlined section */
    if (puVar6 != (undefined1 *)0x0) {
      bVar5 = true;
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
      uVar7 = *(uint *)(puVar6 + 0x18);
      while( true ) {
        AddTail__9ENodeListUi(&instancesOut->field0_0x0,uVar7);
        puVar6 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                           (*(undefined1 **)(puVar6 + 0x10),&this->m_otd,type);
                    /* end of inlined section */
        if (puVar6 == (undefined1 *)0x0) break;
        uVar7 = *(uint *)(puVar6 + 0x18);
      }
    }
    SetBounds__9EInstanceRC7EBound3(this,&bPrev);
  }
  return bVar5;
}

static __Q39EInstance43CalcLights3__9EInstanceRC5EVec3R8ELights3.0_12EBrightLight.1743() {}

EBrightLight* EInstance::CalcLights3__9EInstanceRC5EVec3R8ELights3.0::EBrightLight::EBrightLight() {
  return param_1;
}

void EInstance::CalcLights3(EVec3 &vPos, ELights3 &lights3Out) {
	u32 flags;
	EVec3 vTotalDir;
	EVec3 vTotalColor;
	float totalColorMag;
	EBrightLight b[2];
	int nBrightest;
	OTIterator oti;
	EInstance *this;
	EInstance *pInstance;
	u32 typeFlags;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	EVec3 vColor;
	EVec3 vDir;
	float dirMag;
	float colorMag;
	float scaler;
	int pos;
	EInstance *pInstance;
	u32 typeFlags;
	int cb;
	float directionality;
	float ambient;
	float scaler;
	float scaler;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong *puVar4;
  EVec3 *pEVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  EStorable *pEVar10;
  uint uVar11;
  ulong uVar12;
  EBrightLight *pEVar13;
  long lVar14;
  ulong in_a3;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  EVec3 vTotalDir;
  EVec3 vTotalColor;
  float local_114;
  EBrightLight b [2];
  EVec3 vColor;
  EVec3 vDir;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vTotalDir.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  fVar20 = 0.0;
                    /* inlined from c:/eor/src2/engine/instance/e_instance.h */
  vTotalDir.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  uVar15 = (this->m_otd).m_receiveFlags & 0x18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vTotalDir.field0_0x0.d[0] = 0.0;
  vTotalColor.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vTotalColor.field0_0x0.d[1] = 0.0;
  vTotalColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  iVar8 = 0;
  do {
    bVar2 = iVar8 != -1;
    iVar8 = iVar8 + -1;
  } while (bVar2);
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
  puVar9 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                     ((undefined1 *)(this->m_otd).m_overlaps.field0_0x0.m_list.m_pHead,&this->m_otd,
                      uVar15);
                    /* end of inlined section */
  uVar11 = 0;
  if (puVar9 != (undefined1 *)0x0) {
    fVar18 = 3.141593;
                    /* end of inlined section */
    pEVar10 = *(EStorable **)(puVar9 + 0x18);
    while( true ) {
      pEVar10 = DynamicCast__9EStorableP9ETypeInfo(pEVar10,&_7EILight_m_typeInfo);
      if (pEVar10 != (EStorable *)0x0) {
                    /* end of inlined section */
        in_a3 = (ulong)(int)&vDir;
        fVar19 = 0.0;
        (*(code *)pEVar10->__vtable[5].EStorable)();
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar16 = sqrtf(vDir.field0_0x0.d[0] * vDir.field0_0x0.d[0] +
                       vDir.field0_0x0.d[1] * vDir.field0_0x0.d[1] +
                       vDir.field0_0x0.d[2] * vDir.field0_0x0.d[2]);
                    /* end of inlined section */
        if (fVar16 == fVar19) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vColor.field0_0x0.d[0] = vColor.field0_0x0.d[0] * fVar18;
          vColor.field0_0x0.d[1] = vColor.field0_0x0.d[1] * fVar18;
          vColor.field0_0x0.d[2] = vColor.field0_0x0.d[2] * fVar18;
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar17 = sqrtf(vColor.field0_0x0.d[0] * vColor.field0_0x0.d[0] +
                       vColor.field0_0x0.d[1] * vColor.field0_0x0.d[1] +
                       vColor.field0_0x0.d[2] * vColor.field0_0x0.d[2]);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vTotalDir.field0_0x0.d[0] = vTotalDir.field0_0x0.d[0] + vDir.field0_0x0.d[0] * fVar17;
        vTotalDir.field0_0x0.d[1] = vTotalDir.field0_0x0.d[1] + vDir.field0_0x0.d[1] * fVar17;
        vTotalDir.field0_0x0.d[2] = vTotalDir.field0_0x0.d[2] + vDir.field0_0x0.d[2] * fVar17;
                    /* end of inlined section */
        fVar20 = fVar20 + fVar17;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vTotalColor.field0_0x0.d[0] = vTotalColor.field0_0x0.d[0] + vColor.field0_0x0.d[0];
        vTotalColor.field0_0x0.d[1] = vTotalColor.field0_0x0.d[1] + vColor.field0_0x0.d[1];
        vTotalColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] + vColor.field0_0x0.d[2];
                    /* end of inlined section */
        if (fVar16 != fVar19) {
          lVar14 = -1;
          if (uVar11 == 1) {
            lVar14 = 0;
            if (b[0].colorMag < fVar17) {
              b[1]._8_8_ = CONCAT44(b[0].vDir.field0_0x0._0_4_,b[0].vColor.field0_0x0._8_4_);
              b[1].vDir.field0_0x0._4_8_ =
                   CONCAT44(b[0].vDir.field0_0x0._8_4_,b[0].vDir.field0_0x0._4_4_);
              b[1]._24_8_ = CONCAT44(b[0].colorMag,b[0].dirMag);
              puVar1 = (undefined *)((int)&b[1].vColor.field0_0x0 + 7);
              uVar11 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar11);
              *puVar4 = *puVar4 & -1L << (uVar11 + 1) * 8 |
                        b[0].vColor.field0_0x0._0_8_ >> (7 - uVar11) * 8;
              b[1].vColor.field0_0x0._0_8_ = b[0].vColor.field0_0x0._0_8_;
              puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 3);
              uVar11 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar11);
              *puVar4 = *puVar4 & -1L << (uVar11 + 1) * 8 | b[1]._8_8_ >> (7 - uVar11) * 8;
              puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 0xb);
              uVar11 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar11);
              *puVar4 = *puVar4 & -1L << (uVar11 + 1) * 8 |
                        b[1].vDir.field0_0x0._4_8_ >> (7 - uVar11) * 8;
              puVar1 = (undefined *)((int)&b[1].colorMag + 3);
              uVar11 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar11);
              *puVar4 = *puVar4 & -1L << (uVar11 + 1) * 8 | b[1]._24_8_ >> (7 - uVar11) * 8;
              uVar11 = 2;
            }
            else {
              lVar14 = 1;
              uVar11 = 2;
            }
          }
          else if (uVar11 < 2) {
            if (uVar11 == 0) {
              lVar14 = 0;
              uVar11 = 1;
            }
          }
          else if ((uVar11 == 2) && (b[1].colorMag < fVar17)) {
            lVar14 = 0;
            if (b[0].colorMag < fVar17) {
              b[1]._8_8_ = CONCAT44(b[0].vDir.field0_0x0._0_4_,b[0].vColor.field0_0x0._8_4_);
              b[1].vDir.field0_0x0._4_8_ =
                   CONCAT44(b[0].vDir.field0_0x0._8_4_,b[0].vDir.field0_0x0._4_4_);
              b[1]._24_8_ = CONCAT44(b[0].colorMag,b[0].dirMag);
              puVar1 = (undefined *)((int)&b[1].vColor.field0_0x0 + 7);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
                        b[0].vColor.field0_0x0._0_8_ >> (7 - uVar3) * 8;
              b[1].vColor.field0_0x0._0_8_ = b[0].vColor.field0_0x0._0_8_;
              puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 3);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | b[1]._8_8_ >> (7 - uVar3) * 8;
              puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 0xb);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
                        b[1].vDir.field0_0x0._4_8_ >> (7 - uVar3) * 8;
              puVar1 = (undefined *)((int)&b[1].colorMag + 3);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | b[1]._24_8_ >> (7 - uVar3) * 8;
              in_a3 = b[0].vColor.field0_0x0._0_8_;
            }
            else {
              lVar14 = 1;
            }
          }
          uVar6 = vColor.field0_0x0.d[2];
          iVar8 = (int)lVar14;
          if (lVar14 != -1) {
            uVar12 = CONCAT44(vColor.field0_0x0.d[1],vColor.field0_0x0.d[0]);
            puVar1 = (undefined *)((int)&b[iVar8].vColor.field0_0x0 + 7);
            uVar3 = (uint)puVar1 & 7;
            puVar4 = (ulong *)(puVar1 + -uVar3);
            *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
            *(ulong *)&b[iVar8].vColor.field0_0x0 = uVar12;
            uVar7 = vDir.field0_0x0.d[2];
            b[iVar8].vColor.field0_0x0.d[2] = uVar6;
            uVar12 = CONCAT44(vDir.field0_0x0.d[1],vDir.field0_0x0.d[0]);
            in_a3 = (ulong)(int)vDir.field0_0x0.d[2];
            puVar1 = (undefined *)((int)&b[iVar8].vDir.field0_0x0 + 7);
            uVar3 = (uint)puVar1 & 7;
            puVar4 = (ulong *)(puVar1 + -uVar3);
            *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
            uVar3 = (uint)&b[iVar8].vDir & 7;
            puVar4 = (ulong *)((int)&b[iVar8].vDir - uVar3);
            *puVar4 = uVar12 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            b[iVar8].vDir.field0_0x0.d[2] = uVar7;
            b[iVar8].colorMag = fVar17;
            b[iVar8].dirMag = fVar16;
          }
        }
      }
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
      puVar9 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                         (*(undefined1 **)(puVar9 + 0x10),&this->m_otd,uVar15);
                    /* end of inlined section */
      if (puVar9 == (undefined1 *)0x0) break;
      pEVar10 = *(EStorable **)(puVar9 + 0x18);
    }
  }
  if (uVar11 == 0) {
    puVar1 = (undefined *)((int)&lights3Out->d[0].vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | 0UL >> (7 - uVar15) * 8;
    uVar15 = (uint)lights3Out->d & 7;
    puVar4 = (ulong *)((int)lights3Out->d - uVar15);
    *puVar4 = 0L << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[0].vColor.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&lights3Out->d[0].vDir.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | 0UL >> (7 - uVar15) * 8;
    pEVar5 = &lights3Out->d[0].vDir;
    uVar15 = (uint)pEVar5 & 7;
    puVar4 = (ulong *)((int)pEVar5 - uVar15);
    *puVar4 = 0L << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[0].vDir.field0_0x0.d[2] = 0.0;
  }
  else {
    puVar1 = (undefined *)((int)&lights3Out->d[0].vColor.field0_0x0 + 7);
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | b[0].vColor.field0_0x0._0_8_ >> (7 - uVar15) * 8;
    uVar15 = (uint)lights3Out->d & 7;
    puVar4 = (ulong *)((int)lights3Out->d - uVar15);
    *puVar4 = b[0].vColor.field0_0x0._0_8_ << uVar15 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[0].vColor.field0_0x0.d[2] = b[0].vColor.field0_0x0._8_4_;
    puVar1 = (undefined *)((int)&b[0].vDir.field0_0x0 + 7);
    uVar15 = (uint)puVar1 & 7;
    uVar3 = (uint)&b[0].vDir & 7;
    uVar12 = (*(long *)(puVar1 + -uVar15) << (7 - uVar15) * 8 |
             in_a3 & 0xffffffffffffffffU >> (uVar15 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&b[0].vDir - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&lights3Out->d[0].vDir.field0_0x0 + 7);
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | uVar12 >> (7 - uVar15) * 8;
    pEVar5 = &lights3Out->d[0].vDir;
    uVar15 = (uint)pEVar5 & 7;
    puVar4 = (ulong *)((int)pEVar5 - uVar15);
    *puVar4 = uVar12 << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[0].vDir.field0_0x0.d[2] = b[0].vDir.field0_0x0._8_4_;
  }
  if (uVar11 < 2) {
    puVar1 = (undefined *)((int)&lights3Out->d[1].vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | 0UL >> (7 - uVar15) * 8;
    uVar15 = (uint)(lights3Out->d + 1) & 7;
    puVar4 = (ulong *)((int)(lights3Out->d + 1) - uVar15);
    *puVar4 = 0L << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[1].vColor.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&lights3Out->d[1].vDir.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | 0UL >> (7 - uVar15) * 8;
    pEVar5 = &lights3Out->d[1].vDir;
    uVar15 = (uint)pEVar5 & 7;
    puVar4 = (ulong *)((int)pEVar5 - uVar15);
    *puVar4 = 0L << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[1].vDir.field0_0x0.d[2] = 0.0;
  }
  else {
    puVar1 = (undefined *)((int)&lights3Out->d[1].vColor.field0_0x0 + 7);
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | b[1].vColor.field0_0x0._0_8_ >> (7 - uVar15) * 8;
    uVar15 = (uint)(lights3Out->d + 1) & 7;
    puVar4 = (ulong *)((int)(lights3Out->d + 1) - uVar15);
    *puVar4 = b[1].vColor.field0_0x0._0_8_ << uVar15 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[1].vColor.field0_0x0.d[2] = b[1].vColor.field0_0x0._8_4_;
    puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 7);
    uVar15 = (uint)puVar1 & 7;
    uVar3 = (uint)&b[1].vDir & 7;
    uVar12 = *(long *)(puVar1 + -uVar15) << (7 - uVar15) * 8 & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&b[1].vDir - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&lights3Out->d[1].vDir.field0_0x0 + 7);
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | uVar12 >> (7 - uVar15) * 8;
    pEVar5 = &lights3Out->d[1].vDir;
    uVar15 = (uint)pEVar5 & 7;
    puVar4 = (ulong *)((int)pEVar5 - uVar15);
    *puVar4 = uVar12 << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[1].vDir.field0_0x0.d[2] = b[1].vDir.field0_0x0._8_4_;
  }
  if (uVar11 != 0) {
    pEVar13 = b;
    do {
      fVar18 = pEVar13->colorMag;
      uVar11 = uVar11 - 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar20 = fVar20 - fVar18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vTotalDir.field0_0x0.d[0] =
           vTotalDir.field0_0x0.d[0] - (pEVar13->vDir).field0_0x0.d[0] * fVar18;
      vTotalDir.field0_0x0.d[1] =
           vTotalDir.field0_0x0.d[1] - (pEVar13->vDir).field0_0x0.d[1] * fVar18;
      vTotalDir.field0_0x0.d[2] =
           vTotalDir.field0_0x0.d[2] - (pEVar13->vDir).field0_0x0.d[2] * fVar18;
      vTotalColor.field0_0x0.d[0] = vTotalColor.field0_0x0.d[0] - (pEVar13->vColor).field0_0x0.d[0];
      vTotalColor.field0_0x0.d[1] = vTotalColor.field0_0x0.d[1] - (pEVar13->vColor).field0_0x0.d[1];
      pEVar5 = &pEVar13->vColor;
                    /* end of inlined section */
      pEVar13 = pEVar13 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vTotalColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] - (pEVar5->field0_0x0).d[2];
                    /* end of inlined section */
    } while (uVar11 != 0);
  }
  if (fVar20 == 0.0) {
    puVar1 = (undefined *)((int)&lights3Out->d[2].vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | 0UL >> (7 - uVar15) * 8;
    uVar15 = (uint)(lights3Out->d + 2) & 7;
    puVar4 = (ulong *)((int)(lights3Out->d + 2) - uVar15);
    *puVar4 = 0L << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[2].vColor.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&lights3Out->d[2].vDir.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | 0UL >> (7 - uVar15) * 8;
    pEVar5 = &lights3Out->d[2].vDir;
    uVar15 = (uint)pEVar5 & 7;
    puVar4 = (ulong *)((int)pEVar5 - uVar15);
    *puVar4 = 0L << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[2].vDir.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&(lights3Out->field0_0x0).a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | 0UL >> (7 - uVar15) * 8;
    uVar15 = (uint)lights3Out & 7;
    *(ulong *)((int)lights3Out - uVar15) =
         0L << uVar15 * 8 |
         *(ulong *)((int)lights3Out - uVar15) & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    (lights3Out->field0_0x0).a.vColor.field0_0x0.d[2] = 0.0;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar18 = sqrtf(vTotalDir.field0_0x0.d[0] * vTotalDir.field0_0x0.d[0] +
                   vTotalDir.field0_0x0.d[1] * vTotalDir.field0_0x0.d[1] +
                   vTotalDir.field0_0x0.d[2] * vTotalDir.field0_0x0.d[2]);
                    /* end of inlined section */
    fVar18 = fVar18 / fVar20;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar12 = CONCAT44(vTotalColor.field0_0x0.d[1] * fVar18,vTotalColor.field0_0x0.d[0] * fVar18);
    puVar1 = (undefined *)((int)&lights3Out->d[2].vColor.field0_0x0 + 7);
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | uVar12 >> (7 - uVar15) * 8;
    uVar15 = (uint)(lights3Out->d + 2) & 7;
    puVar4 = (ulong *)((int)(lights3Out->d + 2) - uVar15);
    *puVar4 = uVar12 << uVar15 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[2].vColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] * fVar18;
    puVar1 = (undefined *)((int)&lights3Out->d[2].vDir.field0_0x0 + 7);
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 |
              CONCAT44(vTotalDir.field0_0x0.d[1],vTotalDir.field0_0x0.d[0]) >> (7 - uVar15) * 8;
    pEVar5 = &lights3Out->d[2].vDir;
    uVar15 = (uint)pEVar5 & 7;
    puVar4 = (ulong *)((int)pEVar5 - uVar15);
    *puVar4 = CONCAT44(vTotalDir.field0_0x0.d[1],vTotalDir.field0_0x0.d[0]) << uVar15 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    lights3Out->d[2].vDir.field0_0x0.d[2] = vTotalDir.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar16 = lights3Out->d[2].vDir.field0_0x0.d[0];
    fVar20 = lights3Out->d[2].vDir.field0_0x0.d[1];
    fVar19 = lights3Out->d[2].vDir.field0_0x0.d[2];
    fVar20 = sqrtf(fVar16 * fVar16 + fVar20 * fVar20 + fVar19 * fVar19);
    if (fVar20 != 0.0) {
      fVar20 = 1.0 / fVar20;
      lights3Out->d[2].vDir.field0_0x0.d[0] = lights3Out->d[2].vDir.field0_0x0.d[0] * fVar20;
      fVar16 = lights3Out->d[2].vDir.field0_0x0.d[2];
      lights3Out->d[2].vDir.field0_0x0.d[1] = lights3Out->d[2].vDir.field0_0x0.d[1] * fVar20;
      lights3Out->d[2].vDir.field0_0x0.d[2] = fVar16 * fVar20;
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar18 = 1.0 - fVar18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar12 = CONCAT44(vTotalColor.field0_0x0.d[1] * fVar18 * 0.3183099,
                      vTotalColor.field0_0x0.d[0] * fVar18 * 0.3183099);
    puVar1 = (undefined *)((int)&(lights3Out->field0_0x0).a.vColor.field0_0x0 + 7);
    uVar15 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar15);
    *puVar4 = *puVar4 & -1L << (uVar15 + 1) * 8 | uVar12 >> (7 - uVar15) * 8;
    uVar15 = (uint)lights3Out & 7;
    *(ulong *)((int)lights3Out - uVar15) =
         uVar12 << uVar15 * 8 |
         *(ulong *)((int)lights3Out - uVar15) & 0xffffffffffffffffU >> (8 - uVar15) * 8;
    (lights3Out->field0_0x0).a.vColor.field0_0x0.d[2] =
         vTotalColor.field0_0x0.d[2] * fVar18 * 0.3183099;
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/e_instance.h */
    gpTypeInfo_EInstance =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9EInstance_m_typeInfo,New__9EInstance,0,"EInstance",&_9EStorable_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EStorable::SafeDelete() {
  if (this != (EStorable *)0x0) {
    (*(code *)this->__vtable[1].GetTypeKey)
              ((int)&this->__vtable + (int)*(short *)&this->__vtable[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EStorable::GetTypeInfo() {
  return &_9EStorable_m_typeInfo;
}

char* EStorable::GetTypeName() {
  return _9EStorable_m_typeInfo.m_name;
}

u32 EStorable::GetTypeKey() {
  return _9EStorable_m_typeInfo.m_key;
}

u16 EStorable::GetTypeVersion() {
  return _9EStorable_m_typeInfo.m_version;
}

void EStorable::~EStorable(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EStorable::Read(EStream &s) {
  return;
}

void EStorable::Write(EStream &s) {
  return;
}

EInstance* EInstance::New() {
  EInstance *pEVar1;
  
  pEVar1 = (EInstance *)__builtin_new(0x84);
  pEVar1 = __9EInstance(pEVar1);
  return pEVar1;
}

void EInstance::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EInstance *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->m_otd).m_minPos + -7) + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EInstance::GetTypeInfo() {
  return &_9EInstance_m_typeInfo;
}

char* EInstance::GetTypeName() {
  return _9EInstance_m_typeInfo.m_name;
}

u32 EInstance::GetTypeKey() {
  return _9EInstance_m_typeInfo.m_key;
}

u16 EInstance::GetTypeVersion() {
  return _9EInstance_m_typeInfo.m_version;
}

u16 EInstance::GetReadVersion() {
  return _9EInstance_m_typeInfo.m_readVersion;
}

ETypeInfo* EInstance::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_9EInstance_m_typeInfo,New__9EInstance,version,"EInstance",
                      &_9EStorable_m_typeInfo);
  return pEVar1;
}

EInstance* EInstance::CreateCopy() {
  EInstance *pEVar1;
  
  pEVar1 = (EInstance *)CreateCopy__9EStorable(&this->field0_0x0);
  return pEVar1;
}

void EInstance::Init() {
  return;
}

void EInstance::Update() {
  return;
}

u32 EInstance::VisibilityTest(EPortalWindow &win, u32 parentVis) {
  return 0;
}

void EInstance::Draw(ERC *prc, u32 renderFlags) {
  return;
}

void EInstance::DrawWireFrame(ERC *prc, u32 renderFlags) {
  return;
}

void EInstance::SetOrient(EMat4 &mOrient) {
  return;
}

u32 EInstance::GetUpdatePriority() {
  return 0x32;
}

bool EInstance::CollidePointWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, u32 type, bool testOnly, EInstance *pInst) {
  return false;
}

bool EInstance::CollideSphereWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius, u32 type, EInstance *pInst) {
  return false;
}

int EInstance::CollideTest(EBound3 &b, u32 type) {
  return 0;
}

u32 EInstance::GetOverlapCauseFlags() {
  return (this->m_otd).m_causeFlags;
}

u32 EInstance::GetOverlapReceiveFlags() {
  return (this->m_otd).m_receiveFlags;
}

EBound3& EInstance::GetBounds() {
  return &(this->m_otd).m_bPos;
}

ETriggerList* EInstance::GetTriggerList() {
  return (TNodeList_ETrigger___ *)0x0;
}

void EInstance::ReadInstanceData(EStream &s) {
  return;
}

void EInstance::SetLevel(ERLevel *pLevel) {
  this->m_pLevel = pLevel;
  return;
}

void global constructors keyed to gpTypeInfo_EInstance() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
