// STATUS: NOT STARTED

#include "e_rlevel.h"

struct TFloatTree<EInstance *> : EFloatTree {
	TFloatTree<EInstance *>& operator=();
	TFloatTree();
	TFloatTree();
	TFloatTree(TFloatTree<EInstance *>*, int, void);
	EInstance* operator[]();
	EInstance*& operator[]();
	FTIterator Insert();
	FTIterator Find();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	FTIterator SetValue();
	static void SetValue(/* parameters unknown */);
	void SetValues();
	static EInstance* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

ETypeInfo *gpTypeInfo_ERLevel = NULL;
bool ERLevel::m_drawingOrderTable = false;

__vtbl_ptr_type ERLevel virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERLevel::SafeDelete,
		/* .__delta2 = */ 2264
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERLevel::GetTypeInfo,
		/* .__delta2 = */ 2320
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERLevel::GetTypeName,
		/* .__delta2 = */ 2336
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERLevel::GetTypeKey,
		/* .__delta2 = */ 2352
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERLevel::GetTypeVersion,
		/* .__delta2 = */ 2368
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERLevel::~ERLevel,
		/* .__delta2 = */ -15848
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERLevel::Read,
		/* .__delta2 = */ -15344
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERLevel::Write,
		/* .__delta2 = */ -15504
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERLevel::Init,
		/* .__delta2 = */ -12912
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10736
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10048
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ERLevel::m_typeInfo;

EOrderTableEntry* EOrderTableEntry::EOrderTableEntry() {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
  __10EFloatTree(&(this->sortedSet).field0_0x0);
                    /* end of inlined section */
  *(undefined4 *)this = 0;
  this->pUnsortedHead = (EOrderTableData *)0x0;
  return this;
}

EStream& operator<<(EStream &s, ERLevel *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERLevel *&pD) {
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
  *pD = (ERLevel *)pStorable;
  return s;
}

ERLevel* ERLevel::ERLevel() {
	EBound3 maxBounds;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  EOrderTableEntry *this_00;
  EInstance *this_01;
  undefined8 unaff_s0;
  int iVar6;
  EInstance *this_02;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EBound3 maxBounds;
  undefined local_a0 [8];
  float local_98;
  undefined auStack_94 [8];
  float local_8c;
  float local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
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
  
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar6 = 0x2f;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this_00 = this->m_orderTable;
  __9EResource(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_7ERLevel;
  __15EOverlapTracker(&this->m_ot);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_triggerList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_triggerList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  do {
    iVar6 = iVar6 + -1;
    __16EOrderTableEntry(this_00);
    this_00 = this_00 + 1;
  } while (iVar6 != -1);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  this_01 = &this->m_updateRegionInstance;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  __13ERedBlackTree(&(this->m_activeOTEntries).field0_0x0);
                    /* end of inlined section */
  this_02 = &this->m_globalLightReceiveInstance;
  __9EInstance(this_01);
  __9EInstance(this_02);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  __13ERedBlackTree(&(this->m_idMap).field0_0x0);
  __13ERedBlackTree(&(this->m_alwaysUpdatePriorityQueue).field0_0x0);
  maxBounds.vMin.field0_0x0.d[2] = DAT_003c3d84;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_98 = DAT_003c3d84;
  local_a0 = (undefined  [8])CONCAT44(DAT_003c3d84,DAT_003c3d84);
  maxBounds.vMin.field0_0x0._0_8_ = local_a0;
  local_8c = DAT_003c3d88;
  local_88 = DAT_003c3d88;
  auStack_94._4_4_ = DAT_003c3d88;
  (this->m_dynamicList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_dynamicList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_dynamicOptimizeList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_dynamicOptimizeList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pDynamicSphereTreeRoot = (EStorable *)0x0;
  this->m_pStaticSphereTreeRoot = (EStorable *)0x0;
  *(undefined4 *)&this->m_reverseShaderOrder = 0;
  this->m_instanceGroupId = 0;
  this->m_pRInstanceGroup = (ERIGroup *)0x0;
  puVar1 = (undefined *)((int)&maxBounds.vMin.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)local_a0 >> (7 - uVar3) * 8;
  maxBounds.vMax.field0_0x0.d[2] = local_88;
  uVar5 = CONCAT44(local_8c,auStack_94._4_4_);
  puVar1 = (undefined *)((int)&maxBounds.vMax.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  uVar3 = (uint)&maxBounds.vMax & 7;
  puVar4 = (ulong *)((int)&maxBounds.vMax - uVar3);
  *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
  SetOverlapCauseFlags__9EInstanceUi(this_01,1);
  SetOverlapReceiveFlags__9EInstanceUi(this_01,0);
  SetBounds__9EInstanceRC7EBound3(this_01,&maxBounds);
  Insert__15EOverlapTrackerP9EInstanceT1(&this->m_ot,this_01,(EInstance *)0x0);
  SetOverlapCauseFlags__9EInstanceUi(this_02,0);
  SetOverlapReceiveFlags__9EInstanceUi(this_02,0x18);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_78 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_7c = 0;
  local_80 = 0;
  puVar1 = auStack_94 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  uVar3 = (uint)auStack_94 & 7;
  puVar4 = (ulong *)(auStack_94 + -uVar3);
  *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  local_8c = 0.0;
  uVar3 = (uint)(auStack_94 + 7) & 7;
  uVar2 = (uint)auStack_94 & 7;
  local_a0 = (undefined  [8])
             (*(long *)(auStack_94 + 7 + -uVar3) << (7 - uVar3) * 8 & -1L << (8 - uVar2) * 8 |
             *(ulong *)(auStack_94 + -uVar2) >> uVar2 * 8);
  puVar1 = local_a0 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | (ulong)local_a0 >> (7 - uVar3) * 8;
  local_98 = 0.0;
                    /* end of inlined section */
  SetBounds__9EInstanceRC7EBound3(this_02,(EBound3 *)local_a0);
  Insert__15EOverlapTrackerP9EInstanceT1(&this->m_ot,this_02,(EInstance *)0x0);
  this->m_pLights = (ELights *)0x0;
  this->m_nDirLights = 0;
  *(undefined4 *)&this->m_depthComp = 0;
  this->m_pDepthShader = (ERShader *)0x0;
  this->m_pHavokWorld = (EHavokWorld *)0x0;
  return this;
}

void ERLevel::~ERLevel(int __in_chrg) {
	TRedBlackTree<int,EOrderTableEntry *> *this;
	ERedBlackTree *this;
	void *pAddress;
	EOrderTableEntry *this;
	void *pAddress;
	
  EHavokWorld *pEVar1;
  EStorable__vtable *pEVar2;
  EOrderTableEntry *pEVar3;
  EOrderTableEntry *pEVar4;
  EOrderTableEntry *pEVar5;
  EOverlapTracker *this_00;
  
  this_00 = &this->m_ot;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_7ERLevel;
  Deallocate__7ERLevel(this);
  Remove__15EOverlapTrackerP9EInstance(this_00,&this->m_updateRegionInstance);
  Remove__15EOverlapTrackerP9EInstance(this_00,&this->m_globalLightReceiveInstance);
  pEVar1 = this->m_pHavokWorld;
  if (pEVar1 != (EHavokWorld *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar2[1].GetTypeKey)
              ((int)&(pEVar1->field0_0x0).__vtable + (int)*(short *)&pEVar2[1].GetTypeName,3);
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_dynamicOptimizeList).field0_0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_dynamicList).field0_0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  RemoveAll__13ERedBlackTree(&(this->m_alwaysUpdatePriorityQueue).field0_0x0);
  RemoveAll__13ERedBlackTree(&(this->m_idMap).field0_0x0);
                    /* end of inlined section */
  ___9EInstance(&this->m_globalLightReceiveInstance,2);
  ___9EInstance(&this->m_updateRegionInstance,2);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  RemoveAll__13ERedBlackTree(&(this->m_activeOTEntries).field0_0x0);
                    /* end of inlined section */
  if (this != (ERLevel *)0xffffffc8) {
    pEVar5 = this->m_orderTable + 0x2f;
    pEVar4 = (EOrderTableEntry *)&this->m_activeOTEntries;
    while (pEVar3 = pEVar5, this->m_orderTable != pEVar4) {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
      RemoveAll__10EFloatTree(&(pEVar3->sortedSet).field0_0x0);
                    /* end of inlined section */
      pEVar5 = pEVar3 + -1;
      pEVar4 = pEVar3;
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_triggerList).field0_0x0);
                    /* end of inlined section */
  ___15EOverlapTracker(this_00,2);
  ___9EResource(&this->field0_0x0,__in_chrg);
  return;
}

void ERLevel::Write(EStream &s) {
	unsigned int d;
	
  EStream *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint d;
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
  Write__9EResourceR7EStream(&this->field0_0x0,s);
  pEVar1 = __ls__FR7EStreamP9EStorable(s,this->m_pStaticSphereTreeRoot);
  pEVar1 = __ls__H1ZP9EInstance_R7EStreamRCt9TNodeList1ZX01_R7EStream(pEVar1,&this->m_dynamicList);
  pEVar1 = __ls__H1ZP9EInstance_R7EStreamRCt9TNodeList1ZX01_R7EStream
                     (pEVar1,&this->m_dynamicOptimizeList);
  pEVar1 = __ls__H2ZUiZP9EInstance_R7EStreamRCt13TRedBlackTree2ZX01ZX11_R7EStream
                     (pEVar1,&this->m_alwaysUpdatePriorityQueue);
  pEVar1 = __ls__H1ZP8ETrigger_R7EStreamRCt9TNodeList1ZX01_R7EStream(pEVar1,&this->m_triggerList);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  d = this->m_instanceGroupId;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&d,4);
                    /* end of inlined section */
  __ls__FR7EStreamP11EHavokWorld(pEVar1,this->m_pHavokWorld);
  return;
}

void ERLevel::Read(EStream &s) {
  EStream *pEVar1;
  
  Read__9EResourceR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/level/e_rlevel.h */
                    /* end of inlined section */
  if (_7ERLevel_m_typeInfo.m_readVersion == 0) {
    pEVar1 = __rs__FR7EStreamRP9EStorable(s,&this->m_pStaticSphereTreeRoot);
    pEVar1 = __rs__H1ZP9EInstance_R7EStreamRt9TNodeList1ZX01_R7EStream(pEVar1,&this->m_dynamicList);
    pEVar1 = __rs__H1ZP9EInstance_R7EStreamRt9TNodeList1ZX01_R7EStream
                       (pEVar1,&this->m_dynamicOptimizeList);
    pEVar1 = __rs__H2ZUiZP9EInstance_R7EStreamRt13TRedBlackTree2ZX01ZX11_R7EStream
                       (pEVar1,&this->m_alwaysUpdatePriorityQueue);
    pEVar1 = __rs__H1ZP8ETrigger_R7EStreamRt9TNodeList1ZX01_R7EStream(pEVar1,&this->m_triggerList);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_instanceGroupId,4);
                    /* end of inlined section */
    __rs__FR7EStreamRP11EHavokWorld(pEVar1,&this->m_pHavokWorld);
  }
  return;
}

void ERLevel::Deallocate() {
	TNodeList<EInstance *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  int *piVar1;
  ENodeListNode *pEVar2;
  
  if (this->m_pRInstanceGroup != (ERIGroup *)0x0) {
    RemoveFromLevel__8ERIGroupP7ERLevel(this->m_pRInstanceGroup,this);
    DelRef__9EResource(&this->m_pRInstanceGroup->field0_0x0);
    this->m_pRInstanceGroup = (ERIGroup *)0x0;
  }
  DeallocateSphereTree__7ERLevelRP9EStorable(this,&this->m_pStaticSphereTreeRoot);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  DeallocateSphereTree__7ERLevelRP9EStorable(this,&this->m_pDynamicSphereTreeRoot);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pEVar2 = (this->m_dynamicList).field0_0x0.m_l.m_pHead;
  if (pEVar2 != (ENodeListNode *)0x0) {
    piVar1 = (int *)pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
      if (pEVar2 == (ENodeListNode *)0x0) break;
      piVar1 = (int *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_dynamicList).field0_0x0);
  pEVar2 = (this->m_dynamicOptimizeList).field0_0x0.m_l.m_pHead;
  if (pEVar2 != (ENodeListNode *)0x0) {
    piVar1 = (int *)pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
      if (pEVar2 == (ENodeListNode *)0x0) break;
      piVar1 = (int *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_dynamicOptimizeList).field0_0x0);
  pEVar2 = (this->m_triggerList).field0_0x0.m_l.m_pHead;
  if (pEVar2 != (ENodeListNode *)0x0) {
    piVar1 = (int *)pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
      if (pEVar2 == (ENodeListNode *)0x0) break;
      piVar1 = (int *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_triggerList).field0_0x0);
                    /* end of inlined section */
  RemoveAll__13ERedBlackTree(&(this->m_alwaysUpdatePriorityQueue).field0_0x0);
  RemoveAll__13ERedBlackTree(&(this->m_idMap).field0_0x0);
  return;
}

void ERLevel::DeallocateSphereTree(EStorable *&pRoot) {
  EStorable__vtable *pEVar1;
  bool bVar2;
  
  if (*pRoot != (EStorable *)0x0) {
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
    bVar2 = IsExactType__9EStorableP9ETypeInfo(*pRoot,&_15ESphereTreeNode_m_typeInfo);
                    /* end of inlined section */
    if (bVar2) {
      Deallocate__15ESphereTreeNode((ESphereTreeNode *)*pRoot);
      *pRoot = (EStorable *)0x0;
    }
    else {
      pEVar1 = (*pRoot)->__vtable;
      (*(code *)pEVar1->GetTypeName)((int)&(*pRoot)->__vtable + (int)*(short *)&pEVar1->GetTypeInfo)
      ;
      *pRoot = (EStorable *)0x0;
    }
  }
  return;
}

void ERLevel::InsertInstance(EInstance *pInstance, EInstance *pRefInstance) {
	EInstance *data;
	EInstance *data;
	
  EStorable__vtable *pEVar1;
  undefined1 *puVar2;
  uint key;
  TNodeList_EInstance___ *this_00;
  
  this_00 = &this->m_dynamicOptimizeList;
  if ((pInstance->m_instanceFlags & 0x200) == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = &this->m_dynamicList;
  }
  puVar2 = AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pInstance);
                    /* end of inlined section */
  pInstance->m_iLevelList = puVar2;
  if ((pInstance->m_instanceFlags & 0x100) != 0) {
    pEVar1 = (pInstance->field0_0x0).__vtable;
    key = (*(code *)pEVar1[3].GetTypeKey)
                    ((int)((pInstance->m_otd).m_minPos + -7) + (int)*(short *)&pEVar1[3].GetTypeName
                    );
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    puVar2 = Insert__13ERedBlackTreeUiUib
                       (&(this->m_alwaysUpdatePriorityQueue).field0_0x0,key,(uint)pInstance,true);
                    /* end of inlined section */
    pInstance->m_iAlwaysUpdate = puVar2;
  }
  Insert__15EOverlapTrackerP9EInstanceT1(&this->m_ot,pInstance,pRefInstance);
  AddInstanceToIdMap__7ERLevelP9EInstance(this,pInstance);
  pEVar1 = (pInstance->field0_0x0).__vtable;
  (*(code *)pEVar1[5].GetTypeInfo)
            ((int)((pInstance->m_otd).m_minPos + -7) + (int)*(short *)&pEVar1[5].SafeDelete,this);
  return;
}

void ERLevel::AddInstanceToIdMap(EInstance *pInstance) {
  if (pInstance->m_instanceId != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Insert__13ERedBlackTreeUiUib
              (&(this->m_idMap).field0_0x0,pInstance->m_instanceId,(uint)pInstance,true);
  }
                    /* end of inlined section */
  return;
}

void ERLevel::RemoveInstanceFromIdMap(EInstance *pInstance) {
	EInstance *pMapInstance;
	RBIterator i;
	TRedBlackTree<unsigned int,EInstance *> *this;
	RBIterator i;
	
  undefined1 *i;
  TRedBlackTree_unsigned_int_EInstance___ *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EInstance *pMapInstance;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  this_00 = &this->m_idMap;
  if (pInstance->m_instanceId != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* end of inlined section */
    for (i = FindFirst__C13ERedBlackTreeUiPUi
                       (&this_00->field0_0x0,pInstance->m_instanceId,(uint *)&pMapInstance);
        i != (undefined1 *)0x0;
        i = FindNext__C13ERedBlackTreeP17RBIteratorPtrTypePUi
                      (&this_00->field0_0x0,i,(uint *)&pMapInstance)) {
      if (pMapInstance == pInstance) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        Remove__13ERedBlackTreeP17RBIteratorPtrType(&this_00->field0_0x0,i);
        return;
      }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    }
  }
                    /* end of inlined section */
  return;
}

EInstance* ERLevel::FindInstance(char *szName) {
  uint id;
  EInstance *pEVar1;
  
  id = ComputeSymbol__9EChecksumPCc(szName);
  pEVar1 = FindInstance__7ERLevelUi(this,id);
  return pEVar1;
}

EInstance* ERLevel::FindInstance(u32 id) {
	EInstance *pInstance;
	
  undefined1 *puVar1;
  undefined8 unaff_retaddr;
  EInstance *pInstance;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  puVar1 = Find__C13ERedBlackTreeUiPUi(&(this->m_idMap).field0_0x0,id,(uint *)&pInstance);
                    /* end of inlined section */
  if (puVar1 == (undefined1 *)0x0) {
    pInstance = (EInstance *)0x0;
  }
  return pInstance;
}

void ERLevel::Optimize() {
	ESphereTreeGen stg;
	NLIterator i;
	ESTGNode *pSTGHead;
	EBoundSphere bs;
	NLIterator i;
	NLIterator i;
	
  int *pObject;
  ESTGNode *pSTGNode;
  ENodeListNode *pEVar1;
  ESphereTreeGen stg;
  EBoundSphere bs;
  
  DoMoveFromDynamicSphereTreeToOptimizeList__7ERLevelP9EStorable
            (this,this->m_pDynamicSphereTreeRoot);
  this->m_pDynamicSphereTreeRoot = (EStorable *)0x0;
  __14ESphereTreeGen(&stg);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_dynamicOptimizeList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pObject = (int *)pEVar1->data;
    while( true ) {
                    /* end of inlined section */
      (**(code **)(*pObject + 0xa4))((int)pObject + (int)*(short *)(*pObject + 0xa0),&bs);
      AddObject__14ESphereTreeGenPvRC12EBoundSphere(&stg,pObject,&bs);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pObject = (int *)pEVar1->data;
    }
  }
  Build__14ESphereTreeGen(&stg);
  pSTGNode = GetHead__14ESphereTreeGen(&stg);
  if (pSTGNode != (ESTGNode *)0x0) {
    DoBuildSphereTree__7ERLevelP8ESTGNodeRP9EStorableP9EStorable
              (this,pSTGNode,&this->m_pDynamicSphereTreeRoot,(EStorable *)0x0);
  }
  RemoveAll__9ENodeList(&(this->m_dynamicOptimizeList).field0_0x0);
  ___14ESphereTreeGen(&stg,2);
  return;
}

void ERLevel::DoBuildSphereTree(ESTGNode *pSTGNode, EStorable *&pONode, EStorable *pParent) {
	ESphereTreeNode *pSphereTreeNode;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  EStorable *pEVar4;
  ulong *puVar5;
  ESphereTreeNode *pEVar6;
  ulong uVar7;
  float fVar8;
  
  pEVar4 = (EStorable *)pSTGNode->m_pObj;
  if (pEVar4 == (EStorable *)0x0) {
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
    pEVar6 = (ESphereTreeNode *)_allocBucketAlloc__FUiUi(0x20,0x20);
                    /* end of inlined section */
    pEVar6 = __15ESphereTreeNode(pEVar6);
    *pONode = &pEVar6->field0_0x0;
    puVar1 = (undefined *)((int)&(pSTGNode->m_boundSphere).vCenter.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_boundsphere.h */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&pSTGNode->m_boundSphere & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            (long)(int)pEVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&pSTGNode->m_boundSphere - uVar3) >> uVar3 * 8;
    fVar8 = (pSTGNode->m_boundSphere).vCenter.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(pEVar6->m_boundSphere).vCenter.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = (uint)&pEVar6->m_boundSphere & 7;
    puVar5 = (ulong *)((int)&pEVar6->m_boundSphere - uVar2);
    *puVar5 = uVar7 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (pEVar6->m_boundSphere).vCenter.field0_0x0.d[2] = fVar8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_boundsphere.h */
    fVar8 = (pSTGNode->m_boundSphere).radius;
                    /* end of inlined section */
    pEVar6->m_pParent = (ESphereTreeNode *)pParent;
                    /* inlined from /eor/src2/common/math/e_boundsphere.h */
    (pEVar6->m_boundSphere).radius = fVar8;
                    /* end of inlined section */
    DoBuildSphereTree__7ERLevelP8ESTGNodeRP9EStorableP9EStorable
              (this,pSTGNode->m_pChildren[0],pEVar6->m_pChildren,&pEVar6->field0_0x0);
    DoBuildSphereTree__7ERLevelP8ESTGNodeRP9EStorableP9EStorable
              (this,pSTGNode->m_pChildren[1],pEVar6->m_pChildren + 1,&pEVar6->field0_0x0);
  }
  else {
    pEVar4[9].__vtable = (EStorable__vtable *)pParent;
    pEVar4[8].__vtable = (EStorable__vtable *)0x0;
    pEVar4[5].__vtable = (EStorable__vtable *)((uint)pEVar4[5].__vtable | 0x80);
    *pONode = pEVar4;
  }
  return;
}

void ERLevel::DoMoveFromDynamicSphereTreeToOptimizeList(EStorable *pNode) {
	EStorable *pStorable;
	
  bool bVar1;
  EStorable__vtable *pEVar2;
  
  if (pNode != (EStorable *)0x0) {
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
    bVar1 = IsExactType__9EStorableP9ETypeInfo(pNode,&_15ESphereTreeNode_m_typeInfo);
                    /* end of inlined section */
    if (bVar1) {
      DoMoveFromDynamicSphereTreeToOptimizeList__7ERLevelP9EStorable
                (this,(EStorable *)pNode[6].__vtable);
      DoMoveFromDynamicSphereTreeToOptimizeList__7ERLevelP9EStorable
                (this,(EStorable *)pNode[7].__vtable);
      (*(code *)pNode->__vtable->GetTypeName)
                ((int)&pNode->__vtable + (int)*(short *)&pNode->__vtable->GetTypeInfo);
    }
    else {
      pNode[9].__vtable = (EStorable__vtable *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      pNode[5].__vtable = (EStorable__vtable *)((uint)pNode[5].__vtable & 0xffffff7f);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = (EStorable__vtable *)
               AddTail__9ENodeListUi(&(this->m_dynamicOptimizeList).field0_0x0,(uint)pNode);
                    /* end of inlined section */
      pNode[8].__vtable = pEVar2;
    }
  }
  return;
}

void ERLevel::SelectLights(ERC *prc) {
  (*(code *)prc->__vtable[1].LineList)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,this->m_pLights,
             this->m_nDirLights);
  return;
}

void ERLevel::AddInstancesToOverlapTrackerAndIdMap() {
	EInstance *pPrevInstance;
	bool prevWarn;
	
  bool enable;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EInstance *pPrevInstance;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  pPrevInstance = (EInstance *)0x0;
  enable = WarnOnBadReference__15EOverlapTrackerb(&this->m_ot,false);
  AddListToOverlapTrackerAndIdMap__7ERLevelRt9TNodeList1ZP9EInstanceRP9EInstance
            (this,&this->m_dynamicList,&pPrevInstance);
  AddListToOverlapTrackerAndIdMap__7ERLevelRt9TNodeList1ZP9EInstanceRP9EInstance
            (this,&this->m_dynamicOptimizeList,&pPrevInstance);
  DoAddSphereTreeToOverlapTrackerAndIdMap__7ERLevelP9EStorableRP9EInstance
            (this,this->m_pStaticSphereTreeRoot,&pPrevInstance);
  DoAddSphereTreeToOverlapTrackerAndIdMap__7ERLevelP9EStorableRP9EInstance
            (this,this->m_pDynamicSphereTreeRoot,&pPrevInstance);
  WarnOnBadReference__15EOverlapTrackerb(&this->m_ot,enable);
  return;
}

void ERLevel::AddListToOverlapTrackerAndIdMap(TNodeList<EInstance *> &list, EInstance *&pPrevInstance) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EInstance *pInstance;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (list->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pInstance = (EInstance *)pEVar1->data;
    while( true ) {
      Insert__15EOverlapTrackerP9EInstanceT1(&this->m_ot,pInstance,*pPrevInstance);
      AddInstanceToIdMap__7ERLevelP9EInstance(this,pInstance);
      *pPrevInstance = pInstance;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pInstance = (EInstance *)pEVar1->data;
    }
  }
  return;
}

void ERLevel::InitializeInstances() {
  InitList__7ERLevelRt9TNodeList1ZP9EInstance(this,&this->m_dynamicList);
  InitList__7ERLevelRt9TNodeList1ZP9EInstance(this,&this->m_dynamicOptimizeList);
  DoInitSphereTree__7ERLevelP9EStorable(this,this->m_pStaticSphereTreeRoot);
  DoInitSphereTree__7ERLevelP9EStorable(this,this->m_pDynamicSphereTreeRoot);
  return;
}

void ERLevel::InitializeHavokWorld() {
  return;
}

void ERLevel::InitList(TNodeList<EInstance *> &list) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  int *piVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (list->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    piVar1 = (int *)pEVar2->data;
    while( true ) {
      (**(code **)(*piVar1 + 0x4c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x48));
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      piVar1 = (int *)pEVar2->data;
    }
  }
  return;
}

void ERLevel::DoAddSphereTreeToOverlapTrackerAndIdMap(EStorable *pNode, EInstance *&pPrevInstance) {
	EStorable *pStorable;
	
  bool bVar1;
  
  if (pNode != (EStorable *)0x0) {
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
    bVar1 = IsExactType__9EStorableP9ETypeInfo(pNode,&_15ESphereTreeNode_m_typeInfo);
                    /* end of inlined section */
    if (bVar1) {
      DoAddSphereTreeToOverlapTrackerAndIdMap__7ERLevelP9EStorableRP9EInstance
                (this,(EStorable *)pNode[6].__vtable,pPrevInstance);
      DoAddSphereTreeToOverlapTrackerAndIdMap__7ERLevelP9EStorableRP9EInstance
                (this,(EStorable *)pNode[7].__vtable,pPrevInstance);
    }
    else {
      Insert__15EOverlapTrackerP9EInstanceT1(&this->m_ot,(EInstance *)pNode,*pPrevInstance);
      AddInstanceToIdMap__7ERLevelP9EInstance(this,(EInstance *)pNode);
      *pPrevInstance = (EInstance *)pNode;
    }
  }
  return;
}

void ERLevel::DoInitSphereTree(EStorable *pNode) {
	EStorable *pStorable;
	
  bool bVar1;
  
  if (pNode != (EStorable *)0x0) {
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
    bVar1 = IsExactType__9EStorableP9ETypeInfo(pNode,&_15ESphereTreeNode_m_typeInfo);
                    /* end of inlined section */
    if (bVar1) {
      DoInitSphereTree__7ERLevelP9EStorable(this,(EStorable *)pNode[6].__vtable);
      DoInitSphereTree__7ERLevelP9EStorable(this,(EStorable *)pNode[7].__vtable);
    }
    else {
      (*(code *)pNode->__vtable[2].SafeDelete)
                ((int)&pNode->__vtable + (int)*(short *)(pNode->__vtable + 2));
    }
  }
  return;
}

void ERLevel::Init() {
  ERIGroup *pEVar1;
  
  AddInstancesToOverlapTrackerAndIdMap__7ERLevel(this);
  InitializeHavokWorld__7ERLevel(this);
  if (this->m_instanceGroupId != 0) {
                    /* inlined from /eor/src2/engine/igroup/e_igroupman.h */
    pEVar1 = (ERIGroup *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_igroupman.field0_0x0,this->m_instanceGroupId,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pRInstanceGroup = pEVar1;
  }
  if (this->m_pRInstanceGroup != (ERIGroup *)0x0) {
    AddToLevel__8ERIGroupP7ERLevel(this->m_pRInstanceGroup,this);
  }
  InitializeInstances__7ERLevel(this);
  Optimize__7ERLevel(this);
  return;
}

void ERLevel::RemoveInstance(EInstance *pInstance) {
  undefined1 *i;
  EStorable__vtable *pEVar1;
  uint uVar2;
  uint uVar3;
  
  if (pInstance->m_iAlwaysUpdate != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Remove__13ERedBlackTreeP17RBIteratorPtrType
              (&(this->m_alwaysUpdatePriorityQueue).field0_0x0,pInstance->m_iAlwaysUpdate);
                    /* end of inlined section */
    pInstance->m_iAlwaysUpdate = (undefined1 *)0x0;
  }
  i = pInstance->m_iLevelList;
  if (i == (undefined1 *)0x0) {
    if ((pInstance->m_instanceFlags & 0x40) == 0) {
      if ((pInstance->m_instanceFlags & 0x80) == 0) goto LAB_002acebc;
      RemoveFromSphereTree__7ERLevelRP9EStorableP9EInstance
                (this,&this->m_pDynamicSphereTreeRoot,pInstance);
      uVar3 = pInstance->m_instanceFlags;
      uVar2 = 0xffffff7f;
    }
    else {
      RemoveFromSphereTree__7ERLevelRP9EStorableP9EInstance
                (this,&this->m_pStaticSphereTreeRoot,pInstance);
      uVar3 = pInstance->m_instanceFlags;
      uVar2 = 0xffffffbf;
    }
    pInstance->m_instanceFlags = uVar3 & uVar2;
  }
  else if ((pInstance->m_instanceFlags & 0x200) == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    Remove__9ENodeListP17NLIteratorPtrType(&(this->m_dynamicList).field0_0x0,i);
                    /* end of inlined section */
    pInstance->m_iLevelList = (undefined1 *)0x0;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    Remove__9ENodeListP17NLIteratorPtrType(&(this->m_dynamicOptimizeList).field0_0x0,i);
                    /* end of inlined section */
    pInstance->m_iLevelList = (undefined1 *)0x0;
  }
LAB_002acebc:
  Remove__15EOverlapTrackerP9EInstance(&this->m_ot,pInstance);
  RemoveInstanceFromIdMap__7ERLevelP9EInstance(this,pInstance);
  pEVar1 = (pInstance->field0_0x0).__vtable;
  (*(code *)pEVar1[5].GetTypeInfo)
            ((int)((pInstance->m_otd).m_minPos + -7) + (int)*(short *)&pEVar1[5].SafeDelete,0);
  return;
}

void ERLevel::RemoveFromSphereTree(EStorable *&pRoot, EInstance *pInstance) {
	ESphereTreeNode *&pParent;
	EStorable *pOtherChild;
	ESphereTreeNode **ppOtherParent;
	EStorable *pStorable;
	EStorable **ppParentParentChild;
	
  ESphereTreeNode *pEVar1;
  EInstance *this_00;
  EStorable__vtable *pEVar2;
  bool bVar3;
  EStorable **ppEVar4;
  ESphereTreeNode **ppEVar5;
  
  pEVar1 = pInstance->m_pSphereTreeParent;
  if (pEVar1 == (ESphereTreeNode *)0x0) {
    *pRoot = (EStorable *)0x0;
    pInstance->m_pSphereTreeParent = (ESphereTreeNode *)0x0;
    pInstance->m_pSphereTreeParent = (ESphereTreeNode *)0x0;
  }
  else {
    this_00 = (EInstance *)pEVar1->m_pChildren[0];
    if (this_00 == pInstance) {
      this_00 = (EInstance *)pEVar1->m_pChildren[1];
    }
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
    bVar3 = IsExactType__9EStorableP9ETypeInfo(&this_00->field0_0x0,&_15ESphereTreeNode_m_typeInfo);
                    /* end of inlined section */
    ppEVar5 = &this_00->m_pSphereTreeParent;
    if (bVar3) {
      ppEVar5 = (ESphereTreeNode **)&this_00->m_instanceFlags;
    }
    pEVar1 = pInstance->m_pSphereTreeParent->m_pParent;
    if (pEVar1 == (ESphereTreeNode *)0x0) {
      *pRoot = &this_00->field0_0x0;
    }
    else {
      ppEVar4 = pEVar1->m_pChildren + 1;
      if ((ESphereTreeNode *)pEVar1->m_pChildren[0] == pInstance->m_pSphereTreeParent) {
        ppEVar4 = pEVar1->m_pChildren;
      }
      *ppEVar4 = &this_00->field0_0x0;
    }
    *ppEVar5 = pInstance->m_pSphereTreeParent->m_pParent;
    pEVar1 = pInstance->m_pSphereTreeParent;
    pEVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar2->GetTypeName)
              ((int)pEVar1->m_pChildren + *(short *)&pEVar2->GetTypeInfo + -0x18);
    RecomputeBoundsUpSphereTree__7ERLevelP15ESphereTreeNode(this,*ppEVar5);
    pInstance->m_pSphereTreeParent = (ESphereTreeNode *)0x0;
  }
  return;
}

void ERLevel::RecomputeBoundsUpSphereTree(ESphereTreeNode *pNode) {
	EBoundSphere bs[2];
	EBoundSphere bsNew;
	int i;
	EStorable *pChild;
	EStorable *pStorable;
	
  undefined *puVar1;
  uint uVar2;
  EStorable *this_00;
  EStorable__vtable *pEVar3;
  code *pcVar4;
  uint uVar5;
  ulong *puVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  ulong uVar10;
  EBoundSphere *pEVar11;
  ulong uVar12;
  EBoundSphere bs [2];
  EBoundSphere bsNew;
  EBoundSphere *local_b0;
  
  if (pNode != (ESphereTreeNode *)0x0) {
    local_b0 = &bsNew;
    do {
      uVar10 = (ulong)(int)pNode->m_pChildren;
                    /* end of inlined section */
      iVar8 = 0;
      do {
        bVar7 = iVar8 != -1;
        iVar8 = iVar8 + -1;
      } while (bVar7);
      iVar8 = 1;
      uVar12 = uVar10;
      pEVar11 = bs;
      do {
        this_00 = *(EStorable **)uVar12;
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
        bVar7 = IsExactType__9EStorableP9ETypeInfo(this_00,&_15ESphereTreeNode_m_typeInfo);
                    /* end of inlined section */
        if (bVar7) {
          puVar1 = (undefined *)((int)&this_00[2].__vtable + 3);
                    /* inlined from /eor/src2/common/math/e_boundsphere.h */
          uVar5 = (uint)puVar1 & 7;
          uVar2 = (uint)(this_00 + 1) & 7;
          uVar10 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                   uVar10 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((int)(this_00 + 1) - uVar2) >> uVar2 * 8;
          pEVar3 = this_00[3].__vtable;
          uVar5 = (int)pEVar11 + 7U & 7;
          puVar6 = (ulong *)(((int)pEVar11 + 7U) - uVar5);
          *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar10 >> (7 - uVar5) * 8;
          *(ulong *)pEVar11 = uVar10;
          *(EStorable__vtable **)((int)pEVar11 + 8) = pEVar3;
                    /* end of inlined section */
          *(EStorable__vtable **)((int)pEVar11 + 0xc) = this_00[4].__vtable;
        }
        else {
          pcVar4 = (code *)this_00->__vtable[4].GetTypeVersion;
          uVar10 = (ulong)(int)pcVar4;
          (*pcVar4)((int)&this_00->__vtable + (int)*(short *)&this_00->__vtable[4].GetTypeKey,
                    pEVar11);
        }
        pEVar11 = (EBoundSphere *)((int)pEVar11 + 0x10);
        iVar8 = iVar8 + -1;
        uVar12 = (ulong)(int)((EStorable **)uVar12 + 1);
      } while (-1 < iVar8);
                    /* end of inlined section */
      Combine__12EBoundSphereRC12EBoundSphereT1(local_b0,bs,bs + 1);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      bVar9 = false;
      bVar7 = false;
      if (((bsNew.vCenter.field0_0x0.d[0] == (pNode->m_boundSphere).vCenter.field0_0x0.d[0]) &&
          (bsNew.vCenter.field0_0x0.d[1] == (pNode->m_boundSphere).vCenter.field0_0x0.d[1])) &&
         (bsNew.vCenter.field0_0x0.d[2] == (pNode->m_boundSphere).vCenter.field0_0x0.d[2])) {
        bVar7 = true;
      }
      if ((bVar7) && (bsNew.radius == (pNode->m_boundSphere).radius)) {
        bVar9 = true;
      }
                    /* end of inlined section */
      if (bVar9) {
        return;
      }
                    /* inlined from /eor/src2/common/math/e_boundsphere.h */
      puVar1 = (undefined *)((int)&(pNode->m_boundSphere).vCenter.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
                CONCAT44(bsNew.vCenter.field0_0x0.d[1],bsNew.vCenter.field0_0x0.d[0]) >>
                (7 - uVar5) * 8;
      uVar5 = (uint)&pNode->m_boundSphere & 7;
      puVar6 = (ulong *)((int)&pNode->m_boundSphere - uVar5);
      *puVar6 = CONCAT44(bsNew.vCenter.field0_0x0.d[1],bsNew.vCenter.field0_0x0.d[0]) << uVar5 * 8 |
                *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      (pNode->m_boundSphere).vCenter.field0_0x0.d[2] = bsNew.vCenter.field0_0x0.d[2];
      (pNode->m_boundSphere).radius = bsNew.radius;
                    /* end of inlined section */
      pNode = pNode->m_pParent;
    } while (pNode != (ESphereTreeNode *)0x0);
  }
  return;
}

void ERLevel::SetBounds(EInstance *pInstance, EBound3 &b) {
	EInstance *this;
	EOTData *this;
	EBound3 *this;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	
  bool bVar1;
  bool bVar2;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  bVar1 = false;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/collision/e_overlaptrackertypes.h */
  bVar2 = false;
  if ((b->vMin).field0_0x0.d[0] == (pInstance->m_otd).m_bPos.vMin.field0_0x0.d[0]) {
    if ((b->vMin).field0_0x0.d[1] == (pInstance->m_otd).m_bPos.vMin.field0_0x0.d[1]) {
      if ((b->vMin).field0_0x0.d[2] != (pInstance->m_otd).m_bPos.vMin.field0_0x0.d[2])
      goto LAB_002ad220;
    }
    else {
      bVar1 = true;
    }
  }
  else {
LAB_002ad220:
    bVar1 = true;
  }
  if (bVar1) {
    bVar2 = true;
    goto LAB_002ad288;
  }
  bVar1 = false;
  if ((b->vMax).field0_0x0.d[0] == (pInstance->m_otd).m_bPos.vMax.field0_0x0.d[0]) {
    if ((b->vMax).field0_0x0.d[1] == (pInstance->m_otd).m_bPos.vMax.field0_0x0.d[1]) {
      if ((b->vMax).field0_0x0.d[2] != (pInstance->m_otd).m_bPos.vMax.field0_0x0.d[2])
      goto LAB_002ad27c;
    }
    else {
      bVar1 = true;
    }
  }
  else {
LAB_002ad27c:
    bVar1 = true;
  }
  if (bVar1) {
    bVar2 = true;
  }
LAB_002ad288:
                    /* end of inlined section */
  if (bVar2) {
    UpdatePosition__15EOverlapTrackerP9EInstanceRC7EBound3(&this->m_ot,pInstance,b);
    RecomputeBoundsUpSphereTree__7ERLevelP15ESphereTreeNode(this,pInstance->m_pSphereTreeParent);
  }
  return;
}

void ERLevel::SetUpdateRegion(EBound3 &region) {
  UpdatePosition__15EOverlapTrackerP9EInstanceRC7EBound3
            (&this->m_ot,&this->m_updateRegionInstance,region);
  return;
}

void ERLevel::SetUpdateRegionToEntireLevel() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 unaff_retaddr;
  undefined auStack_50 [8];
  undefined4 local_48;
  undefined auStack_44 [8];
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  local_2c = DAT_003c3d8c;
  local_28 = DAT_003c3d8c;
  local_30 = DAT_003c3d8c;
  local_1c = DAT_003c3d90;
  local_18 = DAT_003c3d90;
  local_20 = DAT_003c3d90;
  auStack_50 = (undefined  [8])CONCAT44(DAT_003c3d8c,DAT_003c3d8c);
  puVar1 = auStack_50 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)auStack_50 >> (7 - uVar2) * 8;
  local_3c = local_18;
  local_48 = DAT_003c3d8c;
  uVar4 = CONCAT44(local_1c,local_20);
  puVar1 = auStack_44 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)auStack_44 & 7;
  puVar3 = (ulong *)(auStack_44 + -uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
  SetUpdateRegion__7ERLevelRC7EBound3(this,(EBound3 *)auStack_50);
  return;
}

void ERLevel::CalcRegionFromPortalWindow(EPortalWindow &win, EBound3 &regionOut) {
	EVec3 vEye;
	float fovYDegrees;
	float aspect;
	float nearPlane;
	float farPlane;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float radius;
  EVec3 vEye;
  float fovYDegrees;
  float aspect;
  float nearPlane;
  float farPlane;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  GetViewParams__C13EPortalWindowR5EVec3RfN32(win,&vEye,&fovYDegrees,&aspect,&nearPlane,&farPlane);
  radius = CalcRadiusFromViewParams__7ERLevelfff(fovYDegrees,farPlane,aspect);
  Compute__7EBound3RC5EVec3f(regionOut,&vEye,radius);
  return;
}

void ERLevel::AddBounds(EBound3 &bOut, EBound3 &bIn, bool &firstInOut) {
	EBound3 *this;
	EBound3 &b;
	EBound3 *this;
	EBound3 &b;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  EVec3 *pEVar10;
  float fVar11;
  float fVar12;
  
  lVar9 = (long)(int)bOut;
  uVar5 = (ulong)(int)&bOut->vMax;
  if (*(int *)firstInOut == 0) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    pEVar10 = &bIn->vMax;
    uVar7 = uVar5;
    do {
      fVar12 = (bIn->vMin).field0_0x0.d[0];
      pfVar8 = (float *)lVar9;
      fVar11 = *pfVar8;
      if (fVar12 <= fVar11) {
        fVar11 = fVar12;
      }
      *pfVar8 = fVar11;
      pfVar6 = (float *)uVar7;
      fVar11 = (pEVar10->field0_0x0).d[0];
      if ((pEVar10->field0_0x0).d[0] < *pfVar6) {
        fVar11 = *pfVar6;
      }
      *pfVar6 = fVar11;
      lVar9 = (long)(int)(pfVar8 + 1);
      pEVar10 = (EVec3 *)((int)&pEVar10->field0_0x0 + 4);
      uVar7 = (ulong)(int)(pfVar6 + 1);
      bIn = (EBound3 *)((int)&(bIn->vMin).field0_0x0 + 4);
    } while (lVar9 < (long)uVar5);
                    /* end of inlined section */
    return;
  }
  *(undefined4 *)firstInOut = 0;
  puVar1 = (undefined *)((int)&(bIn->vMin).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)bIn & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)bIn - uVar3) >> uVar3 * 8;
  fVar11 = (bIn->vMin).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(bOut->vMin).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)bOut & 7;
  *(ulong *)((int)bOut - uVar2) =
       uVar5 << uVar2 * 8 | *(ulong *)((int)bOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (bOut->vMin).field0_0x0.d[2] = fVar11;
  puVar1 = (undefined *)((int)&(bIn->vMax).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&bIn->vMax & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&bIn->vMax - uVar3) >> uVar3 * 8;
  fVar11 = (bIn->vMax).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(bOut->vMax).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&bOut->vMax & 7;
  puVar4 = (ulong *)((int)&bOut->vMax - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (bOut->vMax).field0_0x0.d[2] = fVar11;
                    /* end of inlined section */
  return;
}

EBound3 ERLevel::CalcBounds() {
	EBound3 b;
	bool first;
	EBound3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong in_a2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EBound3 b;
  bool first;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (int)unaff_s2;
  uStack_1c = (int)((ulong)unaff_s2 >> 0x20);
  local_40 = (int)unaff_s0;
  uStack_3c = (int)((ulong)unaff_s0 >> 0x20);
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  local_30 = (int)unaff_s1;
  uStack_2c = (int)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  uVar3 = (uint)&b.vMax & 7;
  puVar4 = (ulong *)((int)&b.vMax - uVar3);
  *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  b.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar2 = (uint)&b.vMax & 7;
  b.vMin.field0_0x0._0_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
       *(ulong *)((int)&b.vMax - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
  b.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  _first = 1;
  CalcListBounds__7ERLevelRt9TNodeList1ZP9EInstanceR7EBound3Rb(this,&this->m_dynamicList,&b,&first);
  CalcListBounds__7ERLevelRt9TNodeList1ZP9EInstanceR7EBound3Rb
            (this,&this->m_dynamicOptimizeList,&b,&first);
  DoCalcSphereTreeBounds__7ERLevelP9EStorableR7EBound3Rb
            (this,this->m_pStaticSphereTreeRoot,&b,&first);
  uVar5 = (ulong)(int)this->m_pDynamicSphereTreeRoot;
  DoCalcSphereTreeBounds__7ERLevelP9EStorableR7EBound3Rb
            (this,this->m_pDynamicSphereTreeRoot,&b,&first);
  puVar1 = (undefined *)((int)&(__return_storage_ptr__->vMin).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
  uVar3 = (uint)__return_storage_ptr__ & 7;
  *(ulong *)((int)__return_storage_ptr__ - uVar3) =
       b.vMin.field0_0x0._0_8_ << uVar3 * 8 |
       *(ulong *)((int)__return_storage_ptr__ - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (__return_storage_ptr__->vMin).field0_0x0.d[2] = b.vMin.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  uVar3 = (uint)puVar1 & 7;
  uVar2 = (uint)&b.vMax & 7;
  uVar5 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar5 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)&b.vMax - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&(__return_storage_ptr__->vMax).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  uVar3 = (uint)&__return_storage_ptr__->vMax & 7;
  puVar4 = (ulong *)((int)&__return_storage_ptr__->vMax - uVar3);
  *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (__return_storage_ptr__->vMax).field0_0x0.d[2] = b.vMax.field0_0x0.d[2];
  return __return_storage_ptr__;
}

void ERLevel::CalcListBounds(TNodeList<EInstance *> &list, EBound3 &b, bool &first) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (list->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = pEVar2->data;
    while( true ) {
                    /* end of inlined section */
      AddBounds__7ERLevelR7EBound3RC7EBound3Rb(this,b,(EBound3 *)(uVar1 + 0x28),first);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
    }
  }
  return;
}

void ERLevel::DoCalcSphereTreeBounds(EStorable *pNode, EBound3 &b, bool &first) {
	EStorable *pStorable;
	
  bool bVar1;
  
  if (pNode != (EStorable *)0x0) {
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
    bVar1 = IsExactType__9EStorableP9ETypeInfo(pNode,&_15ESphereTreeNode_m_typeInfo);
                    /* end of inlined section */
    if (bVar1) {
      DoCalcSphereTreeBounds__7ERLevelP9EStorableR7EBound3Rb
                (this,(EStorable *)pNode[6].__vtable,b,first);
      DoCalcSphereTreeBounds__7ERLevelP9EStorableR7EBound3Rb
                (this,(EStorable *)pNode[7].__vtable,b,first);
    }
    else {
                    /* end of inlined section */
      AddBounds__7ERLevelR7EBound3RC7EBound3Rb(this,b,(EBound3 *)(pNode + 10),first);
    }
  }
  return;
}

void ERLevel::Update() {
	TRedBlackTree<unsigned int,EInstance *> regionPriorityQueue;
	OTIterator oti;
	u32 currentPri;
	RBIterator iRegion;
	RBIterator iAlways;
	OTIterator next;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	OTIterator i;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	RBIterator iNext;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *i;
  ERedBlackTreeNode *pEVar6;
  TRedBlackTree_unsigned_int_EInstance___ regionPriorityQueue;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  __13ERedBlackTree((ERedBlackTree *)&regionPriorityQueue);
  puVar4 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                     ((undefined1 *)
                      (this->m_updateRegionInstance).m_otd.m_overlaps.field0_0x0.m_list.m_pHead,
                      &(this->m_updateRegionInstance).m_otd,0xffffffff);
                    /* end of inlined section */
  if (puVar4 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
    i = *(undefined1 **)(puVar4 + 0x10);
    while( true ) {
      piVar1 = *(int **)(puVar4 + 0x18);
      puVar4 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                         (i,&(this->m_updateRegionInstance).m_otd,0xffffffff);
                    /* end of inlined section */
      if ((piVar1[5] & 0x10U) == 0) {
        uVar5 = (**(code **)(*piVar1 + 0x7c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x78));
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        Insert__13ERedBlackTreeUiUib((ERedBlackTree *)&regionPriorityQueue,uVar5,(uint)piVar1,true);
                    /* end of inlined section */
      }
      if (puVar4 == (undefined1 *)0x0) break;
      i = *(undefined1 **)(puVar4 + 0x10);
    }
  }
                    /* end of inlined section */
                    /* end of inlined section */
  pEVar6 = (this->m_alwaysUpdatePriorityQueue).field0_0x0.m_list.m_pHead;
  uVar5 = 0;
  while( true ) {
    while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
      while ((pEVar6 != (ERedBlackTreeNode *)0x0 && (pEVar6->key == uVar5))) {
        piVar1 = (int *)pEVar6->value;
                    /* end of inlined section */
        pEVar6 = pEVar6->pNext;
        if ((piVar1[5] & 0x10U) == 0) {
          (**(code **)(*piVar1 + 0x54))((int)piVar1 + (int)*(short *)(*piVar1 + 0x50));
        }
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
      for (; (regionPriorityQueue.field0_0x0.m_list.m_pHead != (ERedBlackTreeNode *)0x0 &&
             ((regionPriorityQueue.field0_0x0.m_list.m_pHead)->key == uVar5));
          regionPriorityQueue.field0_0x0.m_list.m_pHead =
               (regionPriorityQueue.field0_0x0.m_list.m_pHead)->pNext) {
                    /* end of inlined section */
        iVar2 = *(int *)(regionPriorityQueue.field0_0x0.m_list.m_pHead)->value;
        (**(code **)(iVar2 + 0x54))
                  ((int)(int *)(regionPriorityQueue.field0_0x0.m_list.m_pHead)->value +
                   (int)*(short *)(iVar2 + 0x50));
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      }
      if (pEVar6 == (ERedBlackTreeNode *)0x0) break;
                    /* end of inlined section */
      uVar3 = pEVar6->key;
      uVar5 = uVar3;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
      if ((regionPriorityQueue.field0_0x0.m_list.m_pHead != (ERedBlackTreeNode *)0x0) &&
         (uVar5 = (regionPriorityQueue.field0_0x0.m_list.m_pHead)->key,
         uVar3 < (regionPriorityQueue.field0_0x0.m_list.m_pHead)->key)) {
        uVar5 = uVar3;
      }
    }
    if (regionPriorityQueue.field0_0x0.m_list.m_pHead == (ERedBlackTreeNode *)0x0) break;
                    /* end of inlined section */
    uVar5 = (regionPriorityQueue.field0_0x0.m_list.m_pHead)->key;
  }
  UpdateHavok__7ERLevel(this);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  RemoveAll__13ERedBlackTree((ERedBlackTree *)&regionPriorityQueue);
  return;
}

void ERLevel::UpdateHavok() {
  return;
}

float ERLevel::CalcRadiusFromViewParams(float fovYDegrees, float farPlane, float aspect) {
	EVec3 vCorner;
	
  float fVar1;
  EVec3 vCorner;
  
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
  fVar1 = tanf(fovYDegrees * 0.5 * 0.01745329);
  fVar1 = fVar1 * farPlane;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar1 = sqrtf(fVar1 * aspect * fVar1 * aspect + fVar1 * fVar1 + farPlane * farPlane);
                    /* end of inlined section */
  return fVar1;
}

static __Q37ERLevel33CalcGlobalLights__7ERLevelP3ERC.0_12EBrightLight.2595() {}

EBrightLight* ERLevel::CalcGlobalLights__7ERLevelP3ERC.0::EBrightLight::EBrightLight() {
  return param_1;
}

void ERLevel::CalcGlobalLights(ERC *prc) {
	ELights3 *pLights3;
	EVec3 vTotalDir;
	EVec3 vTotalColor;
	EVec3 vAmbientColor;
	float totalColorMag;
	EBrightLight b[2];
	int nBrightest;
	OTIterator oti;
	EILight *pLight;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	EVec3 &vVec;
	EVec3 vColor;
	EVec3 vDir;
	float dirMag;
	float colorMag;
	EVec3 &vVec;
	EVec3 &v;
	float scaler;
	int pos;
	int cb;
	float directionality;
	float ambient;
	float scaler;
	float scaler;
	EVec3 *this;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  EVec3 *pEVar6;
  ELights *pEVar7;
  int iVar8;
  undefined1 *puVar9;
  EStorable *pEVar10;
  EStorable *pEVar11;
  uint uVar12;
  ulong uVar13;
  EBrightLight *pEVar14;
  long lVar15;
  ulong in_a3;
  EOTData *otd;
  EStorable__vtable *pEVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  EVec3 vTotalDir;
  EVec3 vTotalColor;
  EVec3 vAmbientColor;
  float local_134;
  EBrightLight b [2];
  EVec3 vColor;
  EVec3 vDir;
  
                    /* inlined from e_dl.h */
                    /* end of inlined section */
                    /* inlined from e_dl.h */
  pEVar7 = (ELights *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x70,0x10);
                    /* end of inlined section */
  if (pEVar7 != (ELights *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTotalDir.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTotalDir.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
    otd = &(this->m_globalLightReceiveInstance).m_otd;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTotalDir.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTotalColor.field0_0x0.d[2] = 0.0;
    vTotalColor.field0_0x0.d[1] = 0.0;
    vTotalColor.field0_0x0.d[0] = 0.0;
    vAmbientColor.field0_0x0.d[2] = 0.0;
    vAmbientColor.field0_0x0.d[1] = 0.0;
    vAmbientColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    fVar21 = 0.0;
                    /* end of inlined section */
    iVar8 = 0;
    do {
      bVar2 = iVar8 != -1;
      iVar8 = iVar8 + -1;
    } while (bVar2);
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
    uVar12 = 0;
    puVar9 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                       ((undefined1 *)
                        (this->m_globalLightReceiveInstance).m_otd.m_overlaps.field0_0x0.m_list.
                        m_pHead,otd,0x18);
                    /* end of inlined section */
    if (puVar9 != (undefined1 *)0x0) {
      fVar18 = 3.141593;
                    /* end of inlined section */
      pEVar10 = *(EStorable **)(puVar9 + 0x18);
      while( true ) {
        pEVar10 = DynamicCast__9EStorableP9ETypeInfo(pEVar10,&_7EILight_m_typeInfo);
        if (pEVar10 == (EStorable *)0x0) {
          puVar9 = *(undefined1 **)(puVar9 + 0x10);
        }
        else {
          if (pEVar10[0x21].__vtable != (EStorable__vtable *)0x0) {
            pEVar11 = DynamicCast__9EStorableP9ETypeInfo(pEVar10,&_10EIAmbLight_m_typeInfo);
            if (pEVar11 == (EStorable *)0x0) {
              pEVar10 = DynamicCast__9EStorableP9ETypeInfo(pEVar10,&_10EIDirLight_m_typeInfo);
              if (pEVar10 != (EStorable *)0x0) {
                    /* end of inlined section */
                pEVar16 = pEVar10[0x25].__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                vColor.field0_0x0.d[2] = (float)pEVar16 * (float)pEVar10[0x28].__vtable;
                vColor.field0_0x0.d[0] = (float)pEVar16 * (float)pEVar10[0x26].__vtable;
                vColor.field0_0x0.d[1] = (float)pEVar16 * (float)pEVar10[0x27].__vtable;
                    /* end of inlined section */
                fVar20 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                vDir.field0_0x0.d[0] = (float)pEVar10[0x29].__vtable;
                vDir.field0_0x0.d[1] = (float)pEVar10[0x2a].__vtable;
                vDir.field0_0x0.d[2] = (float)pEVar10[0x2b].__vtable;
                fVar19 = sqrtf(vDir.field0_0x0.d[0] * vDir.field0_0x0.d[0] +
                               vDir.field0_0x0.d[1] * vDir.field0_0x0.d[1] +
                               vDir.field0_0x0.d[2] * vDir.field0_0x0.d[2]);
                    /* end of inlined section */
                if (fVar19 == fVar20) {
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
                vTotalDir.field0_0x0.d[0] =
                     vTotalDir.field0_0x0.d[0] + vDir.field0_0x0.d[0] * fVar17;
                vTotalDir.field0_0x0.d[1] =
                     vTotalDir.field0_0x0.d[1] + vDir.field0_0x0.d[1] * fVar17;
                vTotalDir.field0_0x0.d[2] =
                     vTotalDir.field0_0x0.d[2] + vDir.field0_0x0.d[2] * fVar17;
                    /* end of inlined section */
                fVar21 = fVar21 + fVar17;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                vTotalColor.field0_0x0.d[0] = vTotalColor.field0_0x0.d[0] + vColor.field0_0x0.d[0];
                vTotalColor.field0_0x0.d[1] = vTotalColor.field0_0x0.d[1] + vColor.field0_0x0.d[1];
                vTotalColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] + vColor.field0_0x0.d[2];
                    /* end of inlined section */
                if (fVar19 != fVar20) {
                  lVar15 = -1;
                  if (uVar12 == 1) {
                    lVar15 = 0;
                    if (b[0].colorMag < fVar17) {
                      b[1]._8_8_ = CONCAT44(b[0].vDir.field0_0x0._0_4_,b[0].vColor.field0_0x0._8_4_)
                      ;
                      b[1].vDir.field0_0x0._4_8_ =
                           CONCAT44(b[0].vDir.field0_0x0._8_4_,b[0].vDir.field0_0x0._4_4_);
                      b[1]._24_8_ = CONCAT44(b[0].colorMag,b[0].dirMag);
                      puVar1 = (undefined *)((int)&b[1].vColor.field0_0x0 + 7);
                      uVar12 = (uint)puVar1 & 7;
                      puVar5 = (ulong *)(puVar1 + -uVar12);
                      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 |
                                b[0].vColor.field0_0x0._0_8_ >> (7 - uVar12) * 8;
                      b[1].vColor.field0_0x0._0_8_ = b[0].vColor.field0_0x0._0_8_;
                      puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 3);
                      uVar12 = (uint)puVar1 & 7;
                      puVar5 = (ulong *)(puVar1 + -uVar12);
                      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | b[1]._8_8_ >> (7 - uVar12) * 8;
                      puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 0xb);
                      uVar12 = (uint)puVar1 & 7;
                      puVar5 = (ulong *)(puVar1 + -uVar12);
                      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 |
                                b[1].vDir.field0_0x0._4_8_ >> (7 - uVar12) * 8;
                      puVar1 = (undefined *)((int)&b[1].colorMag + 3);
                      uVar12 = (uint)puVar1 & 7;
                      puVar5 = (ulong *)(puVar1 + -uVar12);
                      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | b[1]._24_8_ >> (7 - uVar12) * 8;
                      uVar12 = 2;
                    }
                    else {
                      lVar15 = 1;
                      uVar12 = 2;
                    }
                  }
                  else if (uVar12 < 2) {
                    if (uVar12 == 0) {
                      lVar15 = 0;
                      uVar12 = 1;
                    }
                  }
                  else if ((uVar12 == 2) && (b[1].colorMag < fVar17)) {
                    lVar15 = 0;
                    if (b[0].colorMag < fVar17) {
                      b[1]._8_8_ = CONCAT44(b[0].vDir.field0_0x0._0_4_,b[0].vColor.field0_0x0._8_4_)
                      ;
                      b[1].vDir.field0_0x0._4_8_ =
                           CONCAT44(b[0].vDir.field0_0x0._8_4_,b[0].vDir.field0_0x0._4_4_);
                      b[1]._24_8_ = CONCAT44(b[0].colorMag,b[0].dirMag);
                      puVar1 = (undefined *)((int)&b[1].vColor.field0_0x0 + 7);
                      uVar4 = (uint)puVar1 & 7;
                      puVar5 = (ulong *)(puVar1 + -uVar4);
                      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                                b[0].vColor.field0_0x0._0_8_ >> (7 - uVar4) * 8;
                      b[1].vColor.field0_0x0._0_8_ = b[0].vColor.field0_0x0._0_8_;
                      puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 3);
                      uVar4 = (uint)puVar1 & 7;
                      puVar5 = (ulong *)(puVar1 + -uVar4);
                      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | b[1]._8_8_ >> (7 - uVar4) * 8;
                      puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 0xb);
                      uVar4 = (uint)puVar1 & 7;
                      puVar5 = (ulong *)(puVar1 + -uVar4);
                      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                                b[1].vDir.field0_0x0._4_8_ >> (7 - uVar4) * 8;
                      puVar1 = (undefined *)((int)&b[1].colorMag + 3);
                      uVar4 = (uint)puVar1 & 7;
                      puVar5 = (ulong *)(puVar1 + -uVar4);
                      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | b[1]._24_8_ >> (7 - uVar4) * 8;
                      in_a3 = b[0].vColor.field0_0x0._0_8_;
                    }
                    else {
                      lVar15 = 1;
                    }
                  }
                  iVar8 = (int)lVar15;
                  if (lVar15 != -1) {
                    puVar1 = (undefined *)((int)&b[iVar8].vColor.field0_0x0 + 7);
                    uVar4 = (uint)puVar1 & 7;
                    puVar5 = (ulong *)(puVar1 + -uVar4);
                    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                              CONCAT44(vColor.field0_0x0.d[1],vColor.field0_0x0.d[0]) >>
                              (7 - uVar4) * 8;
                    *(ulong *)&b[iVar8].vColor.field0_0x0 =
                         CONCAT44(vColor.field0_0x0.d[1],vColor.field0_0x0.d[0]);
                    b[iVar8].vColor.field0_0x0.d[2] = vColor.field0_0x0.d[2];
                    in_a3 = (ulong)(int)vDir.field0_0x0.d[2];
                    puVar1 = (undefined *)((int)&b[iVar8].vDir.field0_0x0 + 7);
                    uVar4 = (uint)puVar1 & 7;
                    puVar5 = (ulong *)(puVar1 + -uVar4);
                    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                              CONCAT44(vDir.field0_0x0.d[1],vDir.field0_0x0.d[0]) >> (7 - uVar4) * 8
                    ;
                    uVar4 = (uint)&b[iVar8].vDir & 7;
                    puVar5 = (ulong *)((int)&b[iVar8].vDir - uVar4);
                    *puVar5 = CONCAT44(vDir.field0_0x0.d[1],vDir.field0_0x0.d[0]) << uVar4 * 8 |
                              *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
                    b[iVar8].vDir.field0_0x0.d[2] = vDir.field0_0x0.d[2];
                    b[iVar8].colorMag = fVar17;
                    b[iVar8].dirMag = fVar19;
                  }
                }
              }
            }
            else {
                    /* end of inlined section */
              pEVar16 = pEVar11[0x25].__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              vAmbientColor.field0_0x0.d[0] =
                   vAmbientColor.field0_0x0.d[0] + (float)pEVar16 * (float)pEVar11[0x26].__vtable;
              vAmbientColor.field0_0x0.d[1] =
                   vAmbientColor.field0_0x0.d[1] + (float)pEVar16 * (float)pEVar11[0x27].__vtable;
              vAmbientColor.field0_0x0.d[2] =
                   vAmbientColor.field0_0x0.d[2] + (float)pEVar16 * (float)pEVar11[0x28].__vtable;
                    /* end of inlined section */
            }
          }
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
          puVar9 = *(undefined1 **)(puVar9 + 0x10);
        }
        puVar9 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi(puVar9,otd,0x18);
                    /* end of inlined section */
        if (puVar9 == (undefined1 *)0x0) break;
        pEVar10 = *(EStorable **)(puVar9 + 0x18);
      }
    }
    if (uVar12 == 0) {
      puVar1 = (undefined *)((int)&pEVar7[1].a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
      uVar4 = (uint)(pEVar7 + 1) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 1) - uVar4);
      *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      pEVar7[1].a.vColor.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&pEVar7[2].a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
      uVar4 = (uint)(pEVar7 + 2) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 2) - uVar4);
      *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      pEVar7[2].a.vColor.field0_0x0.d[2] = 0.0;
    }
    else {
      puVar1 = (undefined *)((int)&pEVar7[1].a.vColor.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | b[0].vColor.field0_0x0._0_8_ >> (7 - uVar4) * 8;
      uVar4 = (uint)(pEVar7 + 1) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 1) - uVar4);
      *puVar5 = b[0].vColor.field0_0x0._0_8_ << uVar4 * 8 |
                *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      pEVar7[1].a.vColor.field0_0x0.d[2] = b[0].vColor.field0_0x0._8_4_;
      puVar1 = (undefined *)((int)&b[0].vDir.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      uVar3 = (uint)&b[0].vDir & 7;
      uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
               in_a3 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)&b[0].vDir - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&pEVar7[2].a.vColor.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
      uVar4 = (uint)(pEVar7 + 2) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 2) - uVar4);
      *puVar5 = uVar13 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      pEVar7[2].a.vColor.field0_0x0.d[2] = b[0].vDir.field0_0x0._8_4_;
    }
    if (uVar12 < 2) {
      puVar1 = (undefined *)((int)&pEVar7[3].a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
      uVar4 = (uint)(pEVar7 + 3) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 3) - uVar4);
      *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      pEVar7[3].a.vColor.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&pEVar7[4].a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
      uVar4 = (uint)(pEVar7 + 4) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 4) - uVar4);
      *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      pEVar7[4].a.vColor.field0_0x0.d[2] = 0.0;
    }
    else {
      puVar1 = (undefined *)((int)&pEVar7[3].a.vColor.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | b[1].vColor.field0_0x0._0_8_ >> (7 - uVar4) * 8;
      uVar4 = (uint)(pEVar7 + 3) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 3) - uVar4);
      *puVar5 = b[1].vColor.field0_0x0._0_8_ << uVar4 * 8 |
                *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      pEVar7[3].a.vColor.field0_0x0.d[2] = b[1].vColor.field0_0x0._8_4_;
      puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      uVar3 = (uint)&b[1].vDir & 7;
      uVar13 = *(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)&b[1].vDir - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&pEVar7[4].a.vColor.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
      uVar4 = (uint)(pEVar7 + 4) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 4) - uVar4);
      *puVar5 = uVar13 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      pEVar7[4].a.vColor.field0_0x0.d[2] = b[1].vDir.field0_0x0._8_4_;
    }
    if (uVar12 != 0) {
      pEVar14 = b;
      do {
        fVar18 = pEVar14->colorMag;
        uVar12 = uVar12 - 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        fVar21 = fVar21 - fVar18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vTotalDir.field0_0x0.d[0] =
             vTotalDir.field0_0x0.d[0] - (pEVar14->vDir).field0_0x0.d[0] * fVar18;
        vTotalDir.field0_0x0.d[1] =
             vTotalDir.field0_0x0.d[1] - (pEVar14->vDir).field0_0x0.d[1] * fVar18;
        vTotalDir.field0_0x0.d[2] =
             vTotalDir.field0_0x0.d[2] - (pEVar14->vDir).field0_0x0.d[2] * fVar18;
        vTotalColor.field0_0x0.d[0] =
             vTotalColor.field0_0x0.d[0] - (pEVar14->vColor).field0_0x0.d[0];
        vTotalColor.field0_0x0.d[1] =
             vTotalColor.field0_0x0.d[1] - (pEVar14->vColor).field0_0x0.d[1];
        pEVar6 = &pEVar14->vColor;
                    /* end of inlined section */
        pEVar14 = pEVar14 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vTotalColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] - (pEVar6->field0_0x0).d[2];
                    /* end of inlined section */
      } while (uVar12 != 0);
    }
    if (fVar21 == 0.0) {
      puVar1 = (undefined *)((int)&pEVar7[5].a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar12 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar12);
      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | 0UL >> (7 - uVar12) * 8;
      uVar12 = (uint)(pEVar7 + 5) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 5) - uVar12);
      *puVar5 = 0L << uVar12 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      pEVar7[5].a.vColor.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&pEVar7[6].a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar12 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar12);
      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | 0UL >> (7 - uVar12) * 8;
      uVar12 = (uint)(pEVar7 + 6) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 6) - uVar12);
      *puVar5 = 0L << uVar12 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      pEVar7[6].a.vColor.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&(pEVar7->a).vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar12 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar12);
      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | 0UL >> (7 - uVar12) * 8;
      uVar12 = (uint)pEVar7 & 7;
      *(ulong *)((int)pEVar7 - uVar12) =
           0L << uVar12 * 8 |
           *(ulong *)((int)pEVar7 - uVar12) & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      (pEVar7->a).vColor.field0_0x0.d[2] = 0.0;
    }
    else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar18 = sqrtf(vTotalDir.field0_0x0.d[0] * vTotalDir.field0_0x0.d[0] +
                     vTotalDir.field0_0x0.d[1] * vTotalDir.field0_0x0.d[1] +
                     vTotalDir.field0_0x0.d[2] * vTotalDir.field0_0x0.d[2]);
                    /* end of inlined section */
      fVar18 = fVar18 / fVar21;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar13 = CONCAT44(vTotalColor.field0_0x0.d[1] * fVar18,vTotalColor.field0_0x0.d[0] * fVar18);
      puVar1 = (undefined *)((int)&pEVar7[5].a.vColor.field0_0x0 + 7);
      uVar12 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar12);
      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
      uVar12 = (uint)(pEVar7 + 5) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 5) - uVar12);
      *puVar5 = uVar13 << uVar12 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      pEVar7[5].a.vColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] * fVar18;
      puVar1 = (undefined *)((int)&pEVar7[6].a.vColor.field0_0x0 + 7);
      uVar12 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar12);
      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 |
                CONCAT44(vTotalDir.field0_0x0.d[1],vTotalDir.field0_0x0.d[0]) >> (7 - uVar12) * 8;
      uVar12 = (uint)(pEVar7 + 6) & 7;
      puVar5 = (ulong *)((int)(pEVar7 + 6) - uVar12);
      *puVar5 = CONCAT44(vTotalDir.field0_0x0.d[1],vTotalDir.field0_0x0.d[0]) << uVar12 * 8 |
                *puVar5 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      pEVar7[6].a.vColor.field0_0x0.d[2] = vTotalDir.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar19 = pEVar7[6].a.vColor.field0_0x0.d[0];
      fVar21 = pEVar7[6].a.vColor.field0_0x0.d[1];
      fVar20 = pEVar7[6].a.vColor.field0_0x0.d[2];
      fVar21 = sqrtf(fVar19 * fVar19 + fVar21 * fVar21 + fVar20 * fVar20);
      if (fVar21 != 0.0) {
        fVar21 = 1.0 / fVar21;
        pEVar7[6].a.vColor.field0_0x0.d[0] = pEVar7[6].a.vColor.field0_0x0.d[0] * fVar21;
        fVar19 = pEVar7[6].a.vColor.field0_0x0.d[2];
        pEVar7[6].a.vColor.field0_0x0.d[1] = pEVar7[6].a.vColor.field0_0x0.d[1] * fVar21;
        pEVar7[6].a.vColor.field0_0x0.d[2] = fVar19 * fVar21;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar18 = 1.0 - fVar18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar13 = CONCAT44(vTotalColor.field0_0x0.d[1] * fVar18 * 0.3183099,
                        vTotalColor.field0_0x0.d[0] * fVar18 * 0.3183099);
      puVar1 = (undefined *)((int)&(pEVar7->a).vColor.field0_0x0 + 7);
      uVar12 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar12);
      *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
      uVar12 = (uint)pEVar7 & 7;
      *(ulong *)((int)pEVar7 - uVar12) =
           uVar13 << uVar12 * 8 |
           *(ulong *)((int)pEVar7 - uVar12) & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      (pEVar7->a).vColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] * fVar18 * 0.3183099;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar18 = (pEVar7->a).vColor.field0_0x0.d[1];
    fVar21 = (pEVar7->a).vColor.field0_0x0.d[2];
    (pEVar7->a).vColor.field0_0x0.d[0] =
         (pEVar7->a).vColor.field0_0x0.d[0] + vAmbientColor.field0_0x0.d[0];
    (pEVar7->a).vColor.field0_0x0.d[1] = fVar18 + vAmbientColor.field0_0x0.d[1];
    (pEVar7->a).vColor.field0_0x0.d[2] = fVar21 + vAmbientColor.field0_0x0.d[2];
                    /* end of inlined section */
    this->m_nDirLights = 3;
    this->m_pLights = pEVar7;
  }
  return;
}

void ERLevel::Draw(ERC *prc, u32 renderFlags, int nCamera) {
	EPortalWindow *pWin;
	float fovYDegrees;
	float aspect;
	float nearPlane;
	float farPlane;
	u32 rf;
	u32 rootVis;
	
  int iVar1;
  EShader *pEVar2;
  EShader__vtable *pEVar3;
  EPortalWindow *this_00;
  uint uVar4;
  uint uVar5;
  EStorable *pNode;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float fVar6;
  float fovYDegrees;
  float aspect;
  float nearPlane;
  float farPlane;
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
  
  this_00 = _7EWindow_m_pCurrentPortalWindow;
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  GetViewParams__C13EPortalWindowR5EVec3RfN32
            (_7EWindow_m_pCurrentPortalWindow,&(this->m_dd).vEyePos,&fovYDegrees,
             (float *)((uint)&fovYDegrees | 4),(float *)((uint)&fovYDegrees | 8),
             (float *)((uint)&fovYDegrees | 0xc));
  fVar6 = CalcRadiusFromViewParams__7ERLevelfff(fovYDegrees,farPlane,aspect);
  iVar1 = *(int *)&this->m_depthComp;
  (this->m_dd).cameraBit = 1 << (nCamera & 0x1fU);
  uVar4 = 3;
  (this->m_dd).radius = fVar6;
  (this->m_dd).prc = prc;
  (this->m_dd).pWin = this_00;
  (this->m_dd).invRadius = 1.0 / fVar6;
  if ((iVar1 != 0) && (this->m_pDepthShader != (ERShader *)0x0)) {
    pEVar2 = this->m_pDepthShader->m_pShader;
    pEVar3 = pEVar2->__vtable;
    (*(code *)pEVar3->ChangeMaterial)
              ((int)(pEVar2->m_sd).rp + *(short *)&pEVar3->Create + -0x10,prc,0);
    uVar4 = 7;
  }
  (this->m_dd).renderFlags = renderFlags & ~uVar4;
  uVar4 = GetRootVisFlags__13EPortalWindow(this_00);
  if (this->m_pLights == (ELights *)0x0) {
    CalcGlobalLights__7ERLevelP3ERC(this,prc);
    uVar5 = (this->m_dd).renderFlags;
  }
  else {
    uVar5 = (this->m_dd).renderFlags;
  }
  if ((uVar5 & 8) == 0) {
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,this->m_pLights,
               this->m_nDirLights);
    pNode = this->m_pStaticSphereTreeRoot;
  }
  else {
    pNode = this->m_pStaticSphereTreeRoot;
  }
  if (pNode != (EStorable *)0x0) {
    DoDrawSphereTree__7ERLevelP9EStorableUi(this,pNode,uVar4);
  }
  if (this->m_pDynamicSphereTreeRoot != (EStorable *)0x0) {
    DoDrawSphereTree__7ERLevelP9EStorableUi(this,this->m_pDynamicSphereTreeRoot,uVar4);
  }
  DrawList__7ERLevelRt9TNodeList1ZP9EInstanceUi(this,&this->m_dynamicList,uVar4);
  DrawList__7ERLevelRt9TNodeList1ZP9EInstanceUi(this,&this->m_dynamicOptimizeList,uVar4);
  DrawOrderTable__7ERLevel(this);
  this->m_pLights = (ELights *)0x0;
  return;
}

void ERLevel::DrawList(TNodeList<EInstance *> &list, u32 parentVis) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	u32 useRenderFlags;
	
  uint uVar1;
  int *piVar2;
  ENodeListNode *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (list->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar3 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    piVar2 = (int *)pEVar3->data;
    while( true ) {
      if ((piVar2[5] & (this->m_dd).cameraBit) != 0) {
        uVar1 = (**(code **)(*piVar2 + 0x5c))
                          ((int)piVar2 + (int)*(short *)(*piVar2 + 0x58),(this->m_dd).pWin,parentVis
                          );
        if (uVar1 != 0) {
          (**(code **)(*piVar2 + 100))
                    ((int)piVar2 + (int)*(short *)(*piVar2 + 0x60),(this->m_dd).prc,
                     (this->m_dd).renderFlags | uVar1 & 1);
        }
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar3 = pEVar3->pNext;
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) break;
      piVar2 = (int *)pEVar3->data;
    }
  }
  return;
}

void ERLevel::DoDrawSphereTree(EStorable *pNode, u32 parentVis) {
	EStorable *pStorable;
	u32 visFlags;
	u32 useRenderFlags;
	
  bool bVar1;
  uint uVar2;
  
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
  bVar1 = IsExactType__9EStorableP9ETypeInfo(pNode,&_15ESphereTreeNode_m_typeInfo);
                    /* end of inlined section */
  if (bVar1) {
    uVar2 = Test__13EPortalWindowRC12EBoundSphereUi
                      ((this->m_dd).pWin,(EBoundSphere *)(pNode + 1),parentVis);
    if (uVar2 != 0) {
      if (uVar2 == 0x2a) {
        DoDrawSphereTreeVisible__7ERLevelP9EStorable(this,(EStorable *)pNode[6].__vtable);
        DoDrawSphereTreeVisible__7ERLevelP9EStorable(this,(EStorable *)pNode[7].__vtable);
      }
      else {
        DoDrawSphereTree__7ERLevelP9EStorableUi(this,(EStorable *)pNode[6].__vtable,uVar2);
        DoDrawSphereTree__7ERLevelP9EStorableUi(this,(EStorable *)pNode[7].__vtable,uVar2);
      }
    }
  }
  else if (((uint)pNode[5].__vtable & (this->m_dd).cameraBit) != 0) {
    uVar2 = (*(code *)pNode->__vtable[2].GetTypeVersion)
                      ((int)&pNode->__vtable + (int)*(short *)&pNode->__vtable[2].GetTypeKey,
                       (this->m_dd).pWin);
    if (uVar2 != 0) {
      (*(code *)pNode->__vtable[2].Read)
                ((int)&pNode->__vtable + (int)*(short *)&pNode->__vtable[2].EStorable,
                 (this->m_dd).prc,(this->m_dd).renderFlags | uVar2 & 1);
    }
  }
  return;
}

void ERLevel::DoDrawSphereTreeVisible(EStorable *pNode) {
	EStorable *pStorable;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
  bVar1 = IsExactType__9EStorableP9ETypeInfo(pNode,&_15ESphereTreeNode_m_typeInfo);
                    /* end of inlined section */
  if (bVar1) {
    DoDrawSphereTreeVisible__7ERLevelP9EStorable(this,(EStorable *)pNode[6].__vtable);
    DoDrawSphereTreeVisible__7ERLevelP9EStorable(this,(EStorable *)pNode[7].__vtable);
  }
  else if (((uint)pNode[5].__vtable & (this->m_dd).cameraBit) != 0) {
    (*(code *)pNode->__vtable[2].Read)
              ((int)&pNode->__vtable + (int)*(short *)&pNode->__vtable[2].EStorable,(this->m_dd).prc
               ,(this->m_dd).renderFlags);
  }
  return;
}

void ERLevel::InsertInOrderTable(EOrderTableData &otd) {
	float fpos;
	int sortMode;
	int nEntry;
	EOrderTableEntry *pEntry;
	EVec3 &v;
	s32 key;
	float key;
	
  EShader *pEVar1;
  EVec3 *pEVar2;
  EOrderTableEntry *value;
  uint uVar3;
  float fVar4;
  uint key;
  float fVar5;
  float fVar6;
  int iVar7;
  float key_00;
  
  pEVar1 = otd->pShader;
  if (pEVar1 == (EShader *)0x0) {
    iVar7 = otd->sortValue;
    uVar3 = otd->sortMode;
  }
  else {
    iVar7 = (pEVar1->m_sd).sortValue;
    uVar3 = (uint)(pEVar1->m_sd).sortMode;
  }
  key_00 = (float)iVar7;
  if (uVar3 != 0) {
    pEVar2 = otd->pvPos;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar4 = (pEVar2->field0_0x0).d[1] - (this->m_dd).vEyePos.field0_0x0.d[1];
    fVar5 = (pEVar2->field0_0x0).d[0] - (this->m_dd).vEyePos.field0_0x0.d[0];
    fVar6 = (pEVar2->field0_0x0).d[2] - (this->m_dd).vEyePos.field0_0x0.d[2];
    fVar4 = sqrtf(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
                    /* end of inlined section */
    key_00 = key_00 + ((this->m_dd).radius - fVar4) * (this->m_dd).invRadius * 35.0 + 12.0;
  }
  key = 0;
  if (0.0 <= key_00) {
    key = (uint)(float)((int)key_00 * (uint)(key_00 < 47.0) | (uint)(key_00 >= 47.0) * 0x423c0000);
  }
  value = this->m_orderTable + key;
  if (*(int *)value == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    *(int *)value = 1;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Insert__13ERedBlackTreeUiUib(&(this->m_activeOTEntries).field0_0x0,key,(uint)value,false);
                    /* end of inlined section */
  }
  if (uVar3 == 2) {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    Insert__10EFloatTreefUib(&(value->sortedSet).field0_0x0,key_00,(uint)otd,true);
                    /* end of inlined section */
  }
  else {
    otd->pNext = value->pUnsortedHead;
    value->pUnsortedHead = otd;
  }
  return;
}

void ERLevel::DrawOrderTable() {
	ERC *prc;
	bool polyClip;
	EMat4 *pmCurrent;
	EShader *psCurrent;
	ELights *plCurrent;
	RBIterator i;
	EShader *pShaderHead;
	EShader *pShaderTail;
	EOrderTableData *pDrawNode;
	EShader *pDrawShader;
	FTIterator fi;
	RBIterator i;
	RBIterator i;
	EShader *pShader;
	EOrderTableData *pNext;
	EOrderTableData *pDrawNode;
	EOrderTableData *pDrawNode;
	EShader *pShader;
	FTIterator i;
	FTIterator i;
	
  ERC *pEVar1;
  ERedBlackTreeNode *pEVar2;
  undefined4 *puVar3;
  EShader *pEVar4;
  EOrderTableData *pEVar5;
  ERC__vtable *pEVar6;
  bool bVar7;
  uint uVar8;
  EMat4 *pEVar9;
  code *pcVar10;
  EMat4 *pEVar11;
  undefined4 uVar12;
  EOrderTableData *pEVar13;
  int iVar14;
  EShader *pEVar15;
  EShader *pEVar16;
  int iVar17;
  ELights *pEVar18;
  ELights *pEVar19;
  EShader *pEVar20;
  EShader *pEVar21;
  EShader *psCurrent;
  undefined1 *i;
  
  bVar7 = false;
  pEVar9 = (EMat4 *)0x0;
  pEVar19 = (ELights *)0x0;
  pEVar1 = (this->m_dd).prc;
  psCurrent = (EShader *)0x0;
  (*(code *)pEVar1->__vtable->EndCommand)
            ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->BeginCommand,1);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_activeOTEntries).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  *(uint *)&this->m_reverseShaderOrder = *(uint *)&this->m_reverseShaderOrder ^ 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  while( true ) {
                    /* end of inlined section */
    if (pEVar2 == (ERedBlackTreeNode *)0x0) {
      RemoveAll__13ERedBlackTree(&(this->m_activeOTEntries).field0_0x0);
      return;
    }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    pEVar16 = (EShader *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    puVar3 = (undefined4 *)pEVar2->value;
                    /* end of inlined section */
    pEVar13 = (EOrderTableData *)puVar3[1];
    pEVar21 = (EShader *)0x0;
    if (pEVar13 != (EOrderTableData *)0x0) {
      pEVar4 = pEVar13->pShader;
      pEVar11 = pEVar9;
      pEVar18 = pEVar19;
      while( true ) {
        pEVar5 = pEVar13->pNext;
        pEVar9 = pEVar11;
        pEVar19 = pEVar18;
        if (pEVar4 == (EShader *)0x0) {
          if ((pEVar13->renderFlags & 1) == 0) {
            if (bVar7) {
              bVar7 = false;
              (*(code *)pEVar1->__vtable->EndCommand)
                        ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->BeginCommand,1);
            }
            pEVar9 = pEVar13->pmOrient;
          }
          else if (bVar7) {
            pEVar9 = pEVar13->pmOrient;
          }
          else {
            bVar7 = true;
            (*(code *)pEVar1->__vtable->NewEntry)
                      ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->Terminate,1);
            pEVar9 = pEVar13->pmOrient;
          }
          if (pEVar11 == pEVar9) {
            pEVar19 = pEVar13->pLights;
            pEVar9 = pEVar11;
          }
          else {
            if (pEVar9 != (EMat4 *)0x0) {
              (*(code *)pEVar1->__vtable->SetMipMap)
                        ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->MipMapSetup,pEVar9)
              ;
            }
            pEVar19 = pEVar13->pLights;
          }
          if (pEVar18 == pEVar19) {
            uVar8 = pEVar13->callbackParam2;
            pEVar19 = pEVar18;
          }
          else if (((this->m_dd).renderFlags & 8) == 0) {
            pEVar6 = pEVar1->__vtable;
            if (pEVar19 == (ELights *)0x0) {
              (*(code *)pEVar6[1].LineList)
                        ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar6[1].QuadList,this->m_pLights,
                         this->m_nDirLights);
              uVar8 = pEVar13->callbackParam2;
            }
            else {
              (*(code *)pEVar6[1].LineList)
                        ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar6[1].QuadList,pEVar19,
                         pEVar13->nLights);
              uVar8 = pEVar13->callbackParam2;
            }
          }
          else {
            uVar8 = pEVar13->callbackParam2;
            pEVar19 = pEVar18;
          }
          psCurrent = (EShader *)0x0;
          (*(code *)pEVar13->pfnCallback)(pEVar1,pEVar13->callbackParam1,uVar8);
        }
        else {
          pEVar20 = pEVar21;
          if (*(int *)&pEVar4->m_inOTList == 0) {
            *(undefined4 *)&pEVar4->m_inOTList = 1;
            pEVar15 = pEVar4;
            if (*(int *)&this->m_reverseShaderOrder == 0) {
              pEVar4->m_pOrderTableNext = (EShader *)0x0;
              pEVar20 = pEVar4;
              if (pEVar16 != (EShader *)0x0) {
                pEVar21->m_pOrderTableNext = pEVar4;
                pEVar15 = pEVar16;
              }
            }
            else {
              pEVar4->m_pOrderTableNext = pEVar16;
            }
            uVar8 = pEVar13->renderFlags;
          }
          else {
            uVar8 = pEVar13->renderFlags;
            pEVar15 = pEVar16;
          }
          pEVar16 = pEVar15;
          pEVar21 = pEVar20;
          if ((uVar8 & 1) == 0) {
            pEVar13->pNext = pEVar4->m_pUnclippedOTDataHead;
            pEVar4->m_pUnclippedOTDataHead = pEVar13;
          }
          else {
            pEVar13->pNext = pEVar4->m_pClippedOTDataHead;
            pEVar4->m_pClippedOTDataHead = pEVar13;
          }
        }
        if (pEVar5 == (EOrderTableData *)0x0) break;
        pEVar4 = pEVar5->pShader;
        pEVar13 = pEVar5;
        pEVar11 = pEVar9;
        pEVar18 = pEVar19;
      }
    }
    for (; pEVar16 != (EShader *)0x0; pEVar16 = pEVar16->m_pOrderTableNext) {
      if (pEVar16 == psCurrent) {
        pEVar13 = pEVar16->m_pUnclippedOTDataHead;
      }
      else {
        psCurrent = pEVar16;
        if (((this->m_dd).renderFlags & 8) == 0) {
          (*(code *)pEVar16->__vtable->ChangeMaterial)
                    ((int)(pEVar16->m_sd).rp + *(short *)&pEVar16->__vtable->Create + -0x10,pEVar1,0
                    );
          pEVar13 = pEVar16->m_pUnclippedOTDataHead;
        }
        else {
          (*(code *)pEVar16->__vtable->SetAlternateShader)
                    ((int)(pEVar16->m_sd).rp + *(short *)&pEVar16->__vtable->Validate + -0x10,pEVar1
                    );
          pEVar13 = pEVar16->m_pUnclippedOTDataHead;
        }
      }
      if (pEVar13 == (EOrderTableData *)0x0) {
        pEVar13 = pEVar16->m_pClippedOTDataHead;
      }
      else {
        if (bVar7) {
          bVar7 = false;
          (*(code *)pEVar1->__vtable->EndCommand)
                    ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->BeginCommand,1);
        }
        pEVar13 = pEVar16->m_pUnclippedOTDataHead;
        if (pEVar13 == (EOrderTableData *)0x0) {
          pEVar13 = pEVar16->m_pClippedOTDataHead;
        }
        else {
          pEVar11 = pEVar13->pmOrient;
          while( true ) {
            if (pEVar9 == pEVar11) {
              pEVar18 = pEVar13->pLights;
            }
            else {
              if (pEVar11 != (EMat4 *)0x0) {
                (*(code *)pEVar1->__vtable->SetMipMap)
                          ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->MipMapSetup,
                           pEVar11);
              }
              pEVar18 = pEVar13->pLights;
              pEVar9 = pEVar11;
            }
            if (pEVar19 == pEVar18) {
              pcVar10 = (code *)pEVar13->pfnCallback;
            }
            else if (((this->m_dd).renderFlags & 8) == 0) {
              pEVar19 = pEVar18;
              if (pEVar18 == (ELights *)0x0) {
                (*(code *)pEVar1->__vtable[1].LineList)
                          ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable[1].QuadList,
                           this->m_pLights,this->m_nDirLights);
                pcVar10 = (code *)pEVar13->pfnCallback;
              }
              else {
                (*(code *)pEVar1->__vtable[1].LineList)
                          ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable[1].QuadList,
                           pEVar18,pEVar13->nLights);
                pcVar10 = (code *)pEVar13->pfnCallback;
              }
            }
            else {
              pcVar10 = (code *)pEVar13->pfnCallback;
            }
            (*pcVar10)(pEVar1,pEVar13->callbackParam1,pEVar13->callbackParam2);
            pEVar13 = pEVar13->pNext;
            if (pEVar13 == (EOrderTableData *)0x0) break;
            pEVar11 = pEVar13->pmOrient;
          }
          pEVar13 = pEVar16->m_pClippedOTDataHead;
        }
      }
      if (pEVar13 == (EOrderTableData *)0x0) {
        pEVar16->m_pClippedOTDataHead = (EOrderTableData *)0x0;
      }
      else {
        if (bVar7) {
          pEVar13 = pEVar16->m_pClippedOTDataHead;
        }
        else {
          bVar7 = true;
          (*(code *)pEVar1->__vtable->NewEntry)
                    ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->Terminate,1);
          pEVar13 = pEVar16->m_pClippedOTDataHead;
        }
        if (pEVar13 == (EOrderTableData *)0x0) {
          pEVar16->m_pClippedOTDataHead = (EOrderTableData *)0x0;
        }
        else {
          pEVar11 = pEVar13->pmOrient;
          while( true ) {
            if (pEVar9 == pEVar11) {
              pEVar18 = pEVar13->pLights;
            }
            else {
              if (pEVar11 != (EMat4 *)0x0) {
                (*(code *)pEVar1->__vtable->SetMipMap)
                          ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->MipMapSetup,
                           pEVar11);
              }
              pEVar18 = pEVar13->pLights;
              pEVar9 = pEVar11;
            }
            if (pEVar19 == pEVar18) {
              pcVar10 = (code *)pEVar13->pfnCallback;
            }
            else if (((this->m_dd).renderFlags & 8) == 0) {
              pEVar19 = pEVar18;
              if (pEVar18 == (ELights *)0x0) {
                (*(code *)pEVar1->__vtable[1].LineList)
                          ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable[1].QuadList,
                           this->m_pLights,this->m_nDirLights);
                pcVar10 = (code *)pEVar13->pfnCallback;
              }
              else {
                (*(code *)pEVar1->__vtable[1].LineList)
                          ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable[1].QuadList,
                           pEVar18,pEVar13->nLights);
                pcVar10 = (code *)pEVar13->pfnCallback;
              }
            }
            else {
              pcVar10 = (code *)pEVar13->pfnCallback;
            }
            (*pcVar10)(pEVar1,pEVar13->callbackParam1,pEVar13->callbackParam2);
            pEVar13 = pEVar13->pNext;
            if (pEVar13 == (EOrderTableData *)0x0) break;
            pEVar11 = pEVar13->pmOrient;
          }
          pEVar16->m_pClippedOTDataHead = (EOrderTableData *)0x0;
        }
      }
      pEVar16->m_pUnclippedOTDataHead = (EOrderTableData *)0x0;
      *(undefined4 *)&pEVar16->m_inOTList = 0;
    }
    iVar17 = puVar3[2];
                    /* end of inlined section */
    if (iVar17 != 0) break;
LAB_002aec50:
    puVar3[1] = 0;
    *puVar3 = 0;
    RemoveAll__10EFloatTree((EFloatTree *)(puVar3 + 2));
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
  }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
  iVar14 = *(int *)(iVar17 + 0x18);
  do {
                    /* end of inlined section */
    pEVar16 = *(EShader **)(iVar14 + 0x10);
    if (pEVar16 == psCurrent) {
      uVar8 = *(uint *)(iVar14 + 8);
    }
    else {
      psCurrent = pEVar16;
      if (pEVar16 != (EShader *)0x0) {
        if (((this->m_dd).renderFlags & 8) != 0) {
          (*(code *)pEVar16->__vtable->SetAlternateShader)
                    ((int)(pEVar16->m_sd).rp + *(short *)&pEVar16->__vtable->Validate + -0x10);
          uVar8 = *(uint *)(iVar14 + 8);
          goto LAB_002aeb48;
        }
        (*(code *)pEVar16->__vtable->ChangeMaterial)
                  ((int)(pEVar16->m_sd).rp + *(short *)&pEVar16->__vtable->Create + -0x10,pEVar1,0);
      }
      uVar8 = *(uint *)(iVar14 + 8);
    }
LAB_002aeb48:
    if ((uVar8 & 1) == 0) {
      if (bVar7) {
        bVar7 = false;
        (*(code *)pEVar1->__vtable->EndCommand)
                  ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->BeginCommand,1);
      }
      pEVar11 = *(EMat4 **)(iVar14 + 0x14);
    }
    else if (bVar7) {
      pEVar11 = *(EMat4 **)(iVar14 + 0x14);
    }
    else {
      bVar7 = true;
      (*(code *)pEVar1->__vtable->NewEntry)
                ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->Terminate,1);
      pEVar11 = *(EMat4 **)(iVar14 + 0x14);
    }
    if (pEVar9 == pEVar11) {
      pEVar18 = *(ELights **)(iVar14 + 0x18);
    }
    else {
      if (pEVar11 != (EMat4 *)0x0) {
        (*(code *)pEVar1->__vtable->SetMipMap)
                  ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable->MipMapSetup);
      }
      pEVar18 = *(ELights **)(iVar14 + 0x18);
      pEVar9 = pEVar11;
    }
    if (pEVar19 == pEVar18) {
      uVar12 = *(undefined4 *)(iVar14 + 0x28);
    }
    else if (((this->m_dd).renderFlags & 8) == 0) {
      pEVar19 = pEVar18;
      if (pEVar18 == (ELights *)0x0) {
        (*(code *)pEVar1->__vtable[1].LineList)
                  ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable[1].QuadList,
                   this->m_pLights,this->m_nDirLights);
        uVar12 = *(undefined4 *)(iVar14 + 0x28);
      }
      else {
        (*(code *)pEVar1->__vtable[1].LineList)
                  ((int)&pEVar1->m_pdl + (int)*(short *)&pEVar1->__vtable[1].QuadList,pEVar18,
                   *(undefined4 *)(iVar14 + 0x1c));
        uVar12 = *(undefined4 *)(iVar14 + 0x28);
      }
    }
    else {
      uVar12 = *(undefined4 *)(iVar14 + 0x28);
    }
    (**(code **)(iVar14 + 0x20))(pEVar1,*(undefined4 *)(iVar14 + 0x24),uVar12);
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    iVar17 = *(int *)(iVar17 + 0x10);
                    /* end of inlined section */
    if (iVar17 == 0) goto LAB_002aec50;
    iVar14 = *(int *)(iVar17 + 0x18);
  } while( true );
}

bool ERLevel::CollidePoint(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, u32 type, bool testOnly, EInstance *pRef, bool resetPrevious) {
	EVec3 vDelta;
	float deltaMagSquared;
	float invDeltaMagSquared;
	int longestAxis;
	float longestDistance;
	EInstance collInst;
	EInstance *pCollInst;
	EBound3 bPrevious;
	bool useRef;
	EBound3 moveBounds;
	TFloatTree<EInstance *> instances;
	bool negativeDir;
	OTIterator oti;
	bool collided;
	EVec3 *this;
	EVec3 &v;
	int d;
	float distance;
	int value;
	EInstance *this;
	EInstance *this;
	EVec3 &v;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	int value;
	EInstance *pInstance;
	u32 typeFlags;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	EBoundSphere sphere;
	float t;
	EVec3 vClosest;
	float radiusSquared;
	EVec3 &v;
	float scaler;
	EVec3 *this;
	EOTData *this;
	int value;
	EInstance *pInstance;
	u32 typeFlags;
	EVec3 vCurrentEnd;
	float tout;
	EVec3 &v;
	FTIterator fti;
	FTIterator i;
	int value;
	FTIterator i;
	FTIterator i;
	FTIterator fti;
	FTIterator i;
	int value;
	FTIterator i;
	FTIterator i;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  bool bVar7;
  bool bVar8;
  int *piVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  EBound3 *pEVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  ERedBlackTreeNode *i;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  EVec3 *pEVar20;
  EInstance *this_00;
  int *piVar21;
  int iVar22;
  EFloatTreeNode *pEVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  EVec3 vDelta;
  EInstance collInst;
  EBound3 bPrevious;
  TFloatTree_EInstance___ instances;
  EBound3 moveBounds;
  EVec3 vCurrentEnd;
  float local_104;
  EVec3 vClosest;
  ERLevel *local_e0;
  int local_dc;
  bool useRef;
  bool negativeDir;
  bool collided;
  EOTData *local_cc;
  EBound3 *local_c8;
  EInstance *local_c4;
  EVec3 *local_c0;
  
  uVar19 = (ulong)testOnly;
  uVar17 = (ulong)(int)vEnd;
  pEVar20 = &vDelta;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vDelta.field0_0x0.d[0] = (vEnd->field0_0x0).d[0] - (vStart->field0_0x0).d[0];
  vDelta.field0_0x0.d[1] = (vEnd->field0_0x0).d[1] - (vStart->field0_0x0).d[1];
  vDelta.field0_0x0.d[2] = (vEnd->field0_0x0).d[2] - (vStart->field0_0x0).d[2];
                    /* end of inlined section */
  local_dc = (int)resetPrevious;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar28 = vDelta.field0_0x0.d[0] * vDelta.field0_0x0.d[0] +
           vDelta.field0_0x0.d[1] * vDelta.field0_0x0.d[1] +
           vDelta.field0_0x0.d[2] * vDelta.field0_0x0.d[2];
                    /* end of inlined section */
  if (fVar28 == 0.0) {
    collided = false;
  }
  else {
    local_c4 = &collInst;
    local_c8 = &moveBounds;
    uVar15 = (ulong)(int)local_c8;
    local_c0 = &moveBounds.vMax;
    fVar28 = 1.0 / fVar28;
    iVar22 = 0;
    uVar16 = uVar17;
    uVar11 = uVar19;
    fVar26 = -1.0;
    iVar24 = 0;
    do {
                    /* end of inlined section */
      fVar27 = fabsf(*(float *)pEVar20);
      iVar25 = iVar22;
      if (fVar27 <= fVar26) {
        fVar27 = fVar26;
        iVar25 = iVar24;
      }
      iVar22 = iVar22 + 1;
      pEVar20 = (EVec3 *)((int)pEVar20 + 4);
      fVar26 = fVar27;
      iVar24 = iVar25;
    } while (iVar22 < 3);
    _useRef = 0;
    __9EInstance(local_c4);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    instances.field0_0x0.m_pRoot = (EFloatTreeNode *)0x0;
    instances.field0_0x0.m_list.m_pTail = (EFloatTreeNode *)0x0;
    instances.field0_0x0.m_list.m_pHead = (EFloatTreeNode *)0x0;
    puVar2 = (undefined *)((int)&bPrevious.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    puVar6 = (ulong *)(puVar2 + -uVar4);
    local_e0 = this;
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
    uVar4 = (uint)&bPrevious.vMax & 7;
    puVar6 = (ulong *)((int)&bPrevious.vMax - uVar4);
    *puVar6 = 0L << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    bPrevious.vMax.field0_0x0.d[2] = 0.0;
    puVar2 = (undefined *)((int)&bPrevious.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    uVar3 = (uint)&bPrevious.vMax & 7;
    bPrevious.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
         uVar11 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)&bPrevious.vMax - uVar3) >> uVar3 * 8;
    uVar11 = 0;
    puVar2 = (undefined *)((int)&bPrevious.vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    puVar6 = (ulong *)(puVar2 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 |
              (ulong)bPrevious.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
    bPrevious.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    uVar18 = (ulong)(int)_useRef;
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
                    /* end of inlined section */
    if ((pRef != (EInstance *)0x0) &&
       (uVar11 = (ulong)(int)((pRef->m_otd).m_causeFlags & type), uVar11 != 0)) {
      bVar8 = pRef->m_pLevel == local_e0;
      uVar11 = (ulong)bVar8;
      _useRef = (uint)bVar8;
      uVar18 = (ulong)(int)_useRef;
    }
    if (uVar18 == 0) {
      SetOverlapCauseFlags__9EInstanceUi(local_c4,type);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
      local_cc = &local_c4->m_otd;
      this_00 = local_c4;
    }
    else {
      puVar2 = (undefined *)((int)&(pRef->m_otd).m_bPos.vMin.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
      uVar4 = (uint)puVar2 & 7;
      uVar3 = (uint)&pRef->m_otd & 7;
      bPrevious.vMin.field0_0x0._0_8_ =
           (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
           uVar16 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&pRef->m_otd - uVar3) >> uVar3 * 8;
      bPrevious.vMin.field0_0x0.d[2] = (pRef->m_otd).m_bPos.vMin.field0_0x0.d[2];
      puVar2 = (undefined *)((int)&bPrevious.vMin.field0_0x0 + 7);
      uVar4 = (uint)puVar2 & 7;
      puVar6 = (ulong *)(puVar2 + -uVar4);
      *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 |
                (ulong)bPrevious.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
      puVar2 = (undefined *)((int)&(pRef->m_otd).m_bPos.vMax.field0_0x0 + 7);
      uVar4 = (uint)puVar2 & 7;
      pEVar20 = &(pRef->m_otd).m_bPos.vMax;
      uVar3 = (uint)pEVar20 & 7;
      uVar16 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
               uVar15 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)pEVar20 - uVar3) >> uVar3 * 8;
      bPrevious.vMax.field0_0x0.d[2] = (pRef->m_otd).m_bPos.vMax.field0_0x0.d[2];
      puVar2 = (undefined *)((int)&bPrevious.vMax.field0_0x0 + 7);
      uVar4 = (uint)puVar2 & 7;
      puVar6 = (ulong *)(puVar2 + -uVar4);
      *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar16 >> (7 - uVar4) * 8;
      uVar4 = (uint)&bPrevious.vMax & 7;
      puVar6 = (ulong *)((int)&bPrevious.vMax - uVar4);
      *puVar6 = uVar16 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      local_cc = &pRef->m_otd;
      this_00 = pRef;
                    /* end of inlined section */
    }
    instances.field0_0x0.m_pRoot = (EFloatTreeNode *)0x0;
    instances.field0_0x0.m_list.m_pTail = (EFloatTreeNode *)0x0;
    instances.field0_0x0.m_list.m_pHead = (EFloatTreeNode *)0x0;
    puVar2 = (undefined *)((int)&moveBounds.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    puVar6 = (ulong *)(puVar2 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
    uVar4 = (uint)&moveBounds.vMax & 7;
    puVar6 = (ulong *)((int)&moveBounds.vMax - uVar4);
    *puVar6 = 0L << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    moveBounds.vMax.field0_0x0.d[2] = 0.0;
    puVar2 = (undefined *)((int)&moveBounds.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    uVar3 = (uint)&moveBounds.vMax & 7;
    puVar1 = (undefined *)((int)&moveBounds.vMin.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
              ((*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
               uVar18 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)&moveBounds.vMax - uVar3) >> uVar3 * 8) >> (7 - uVar5) * 8;
    pEVar13 = local_c8;
    moveBounds.vMin.field0_0x0.d[2] = 0.0;
    puVar2 = (undefined *)((int)&vStart->field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    uVar3 = (uint)vStart & 7;
    uVar16 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)vStart - uVar3) >> uVar3 * 8;
    moveBounds.vMin.field0_0x0.d[2] = (vStart->field0_0x0).d[2];
    puVar2 = (undefined *)((int)&moveBounds.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    puVar6 = (ulong *)(puVar2 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar16 >> (7 - uVar4) * 8;
    uVar4 = (uint)&moveBounds.vMax & 7;
    puVar6 = (ulong *)((int)&moveBounds.vMax - uVar4);
    *puVar6 = uVar16 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    moveBounds.vMax.field0_0x0.d[2] = moveBounds.vMin.field0_0x0.d[2];
    puVar2 = (undefined *)((int)&moveBounds.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    uVar3 = (uint)&moveBounds.vMax & 7;
    moveBounds.vMin.field0_0x0._0_8_ =
         *(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)&moveBounds.vMax - uVar3) >> uVar3 * 8;
    puVar2 = (undefined *)((int)&moveBounds.vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    puVar6 = (ulong *)(puVar2 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 |
              (ulong)moveBounds.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
    do {
      fVar27 = *(float *)uVar17;
      fVar26 = (pEVar13->vMin).field0_0x0.d[0];
      if (fVar27 <= fVar26) {
        fVar26 = fVar27;
      }
      (pEVar13->vMin).field0_0x0.d[0] = fVar26;
      fVar26 = (local_c0->field0_0x0).d[0];
      if (fVar26 <= fVar27) {
        fVar26 = fVar27;
      }
      (local_c0->field0_0x0).d[0] = fVar26;
      uVar17 = (ulong)(int)((float *)uVar17 + 1);
      local_c0 = (EVec3 *)((int)&local_c0->field0_0x0 + 4);
      pEVar13 = (EBound3 *)((int)&(pEVar13->vMin).field0_0x0 + 4);
    } while ((long)uVar17 < (long)(int)(vEnd + 1));
                    /* end of inlined section */
    SetBounds__9EInstanceRC7EBound3(this_00,local_c8);
    if (_useRef == 0) {
      Insert__15EOverlapTrackerP9EInstanceT1(&local_e0->m_ot,this_00,pRef);
                    /* end of inlined section */
    }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    __10EFloatTree((EFloatTree *)&instances);
                    /* end of inlined section */
    bVar8 = 0.0 <= vDelta.field0_0x0.d[iVar25];
                    /* end of inlined section */
    i = (this_00->m_otd).m_overlaps.field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
    while (puVar10 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                               ((undefined1 *)i,local_cc,type), puVar10 != (undefined1 *)0x0) {
      piVar21 = *(int **)(puVar10 + 0x18);
                    /* end of inlined section */
      if ((piVar21[5] & 0x400U) == 0) {
                    /* end of inlined section */
        (**(code **)(*piVar21 + 0xa4))((int)piVar21 + (int)*(short *)(*piVar21 + 0xa0),&vCurrentEnd)
        ;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        fVar26 = ((vCurrentEnd.field0_0x0.d[0] - (vStart->field0_0x0).d[0]) * vDelta.field0_0x0.d[0]
                  + (vCurrentEnd.field0_0x0.d[1] - (vStart->field0_0x0).d[1]) *
                    vDelta.field0_0x0.d[1] +
                 (vCurrentEnd.field0_0x0.d[2] - (vStart->field0_0x0).d[2]) * vDelta.field0_0x0.d[2])
                 * fVar28;
        if (0.0 <= fVar26) {
          fVar26 = (float)((int)fVar26 * (uint)(fVar26 < 1.0) | (uint)(fVar26 >= 1.0) * 0x3f800000);
        }
        else {
          fVar26 = 0.0;
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar29 = ((vStart->field0_0x0).d[1] + fVar26 * vDelta.field0_0x0.d[1]) -
                 vCurrentEnd.field0_0x0.d[1];
        fVar27 = ((vStart->field0_0x0).d[0] + fVar26 * vDelta.field0_0x0.d[0]) -
                 vCurrentEnd.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar26 = ((vStart->field0_0x0).d[2] + fVar26 * vDelta.field0_0x0.d[2]) -
                 vCurrentEnd.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        if (fVar27 * fVar27 + fVar29 * fVar29 + fVar26 * fVar26 < local_104 * local_104) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/collision/e_overlaptrackertypes.h */
                    /* end of inlined section */
          piVar9 = piVar21 + 0xd;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
          if (bVar8) {
            piVar9 = piVar21 + 10;
          }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
          Insert__10EFloatTreefUib
                    ((EFloatTree *)&instances,(float)piVar9[iVar25],(uint)piVar21,true);
        }
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
        i = *(ERedBlackTreeNode **)(puVar10 + 0x10);
      }
      else {
        i = *(ERedBlackTreeNode **)(puVar10 + 0x10);
      }
    }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    _collided = 0;
    collided = false;
    bVar7 = collided;
    collided = false;
    if (instances.field0_0x0.m_list.m_pHead != (EFloatTreeNode *)0x0) {
      ciOut->t = 0.0;
      fVar26 = 1.0;
      fVar27 = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vCurrentEnd.field0_0x0._0_8_ = *(undefined8 *)&vEnd->field0_0x0;
                    /* end of inlined section */
      vCurrentEnd.field0_0x0.d[2] = (vEnd->field0_0x0).d[2];
      fVar28 = fVar27;
      collided = bVar7;
      if (bVar8) {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        if ((instances.field0_0x0.m_list.m_pHead != (EFloatTreeNode *)0x0) &&
           (pfVar14 = vCurrentEnd.field0_0x0.d + iVar25,
           (instances.field0_0x0.m_list.m_pHead)->key <= *pfVar14)) {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
          piVar21 = (int *)(instances.field0_0x0.m_list.m_pHead)->value;
          pEVar23 = instances.field0_0x0.m_list.m_pHead;
          do {
                    /* end of inlined section */
            bVar8 = IntersectBoundBox__7ERLevelRC7EBound3RC5EVec3T2
                              ((EBound3 *)(piVar21 + 10),vStart,&vCurrentEnd);
            if (bVar8) {
              uVar17 = (ulong)((int)piVar21 + (int)*(short *)(*piVar21 + 0x80));
              lVar12 = (**(code **)(*piVar21 + 0x84))
                                 (uVar17,ciOut,vStart,&vCurrentEnd,type,uVar19,pRef);
              if (lVar12 != 0) {
                _collided = 1;
                collided = true;
                if (uVar19 == 0) {
                  fVar28 = ciOut->t;
                  puVar2 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
                  uVar4 = (uint)puVar2 & 7;
                  uVar3 = (uint)&ciOut->vPos & 7;
                  vCurrentEnd.field0_0x0._0_8_ =
                       (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
                       uVar17 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                       *(ulong *)((int)&ciOut->vPos - uVar3) >> uVar3 * 8;
                  vCurrentEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
                  puVar2 = (undefined *)((int)&vCurrentEnd.field0_0x0 + 7);
                  uVar4 = (uint)puVar2 & 7;
                  puVar6 = (ulong *)(puVar2 + -uVar4);
                  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 |
                            (ulong)vCurrentEnd.field0_0x0._0_8_ >> (7 - uVar4) * 8;
                  fVar26 = fVar26 * fVar28;
                  goto LAB_002af2dc;
                }
                goto LAB_002af308;
              }
              pEVar23 = pEVar23->pNext;
            }
            else {
LAB_002af2dc:
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
              pEVar23 = pEVar23->pNext;
            }
                    /* end of inlined section */
            fVar28 = fVar26;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
            if ((pEVar23 == (EFloatTreeNode *)0x0) || (*pfVar14 < pEVar23->key)) break;
            piVar21 = (int *)pEVar23->value;
          } while( true );
        }
      }
      else {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
        pEVar20 = &vCurrentEnd;
        fVar28 = fVar26;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        if ((instances.field0_0x0.m_list.m_pTail != (EFloatTreeNode *)0x0) &&
           (fVar28 = fVar27,
           (pEVar20->field0_0x0).d[iVar25] <= (instances.field0_0x0.m_list.m_pTail)->key)) {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
          piVar21 = (int *)(instances.field0_0x0.m_list.m_pTail)->value;
          pEVar23 = instances.field0_0x0.m_list.m_pTail;
          do {
                    /* end of inlined section */
            bVar8 = IntersectBoundBox__7ERLevelRC7EBound3RC5EVec3T2
                              ((EBound3 *)(piVar21 + 10),vStart,pEVar20);
            if (bVar8) {
              uVar17 = (long)(int)pEVar20;
              lVar12 = (**(code **)(*piVar21 + 0x84))
                                 ((int)piVar21 + (int)*(short *)(*piVar21 + 0x80),ciOut,vStart,
                                  (long)(int)pEVar20,type,uVar19,pRef);
              if (lVar12 != 0) {
                _collided = 1;
                collided = true;
                if (uVar19 == 0) {
                  fVar28 = ciOut->t;
                  puVar2 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
                  uVar4 = (uint)puVar2 & 7;
                  uVar3 = (uint)&ciOut->vPos & 7;
                  vCurrentEnd.field0_0x0._0_8_ =
                       (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
                       uVar17 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                       *(ulong *)((int)&ciOut->vPos - uVar3) >> uVar3 * 8;
                  vCurrentEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
                  puVar2 = (undefined *)((int)&vCurrentEnd.field0_0x0 + 7);
                  uVar4 = (uint)puVar2 & 7;
                  puVar6 = (ulong *)(puVar2 + -uVar4);
                  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 |
                            (ulong)vCurrentEnd.field0_0x0._0_8_ >> (7 - uVar4) * 8;
                  fVar26 = fVar26 * fVar28;
                  goto LAB_002af20c;
                }
                goto LAB_002af308;
              }
              pEVar23 = pEVar23->pLast;
            }
            else {
LAB_002af20c:
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
              pEVar23 = pEVar23->pLast;
            }
                    /* end of inlined section */
            fVar28 = fVar26;
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
            if ((pEVar23 == (EFloatTreeNode *)0x0) ||
               (pEVar23->key < (pEVar20->field0_0x0).d[iVar25])) break;
            piVar21 = (int *)pEVar23->value;
          } while( true );
        }
      }
      if (uVar19 == 0) {
        ciOut->t = fVar28;
      }
    }
LAB_002af308:
    if (_useRef == 0) {
      Remove__15EOverlapTrackerP9EInstance(&local_e0->m_ot,local_c4);
    }
    else if (local_dc != 0) {
      SetBounds__9EInstanceRC7EBound3(pRef,&bPrevious);
    }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    RemoveAll__10EFloatTree((EFloatTree *)&instances);
                    /* end of inlined section */
    ___9EInstance(local_c4,2);
  }
  return collided;
}

bool ERLevel::CollideSphere(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius, u32 type, EInstance *pRef, bool resetPrevious) {
	EVec3 vDelta;
	float deltaMagSquared;
	float invDeltaMagSquared;
	int longestAxis;
	float longestDistance;
	EInstance collInst;
	EInstance *pCollInst;
	EBound3 bPrevious;
	bool useRef;
	EBound3 moveBounds;
	EVec3 vExpandRadius;
	TFloatTree<EInstance *> instances;
	bool negativeDir;
	OTIterator oti;
	bool collided;
	EVec3 *this;
	EVec3 &v;
	int d;
	float distance;
	int value;
	EInstance *this;
	EInstance *this;
	EVec3 &v;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	float v;
	int value;
	EInstance *pInstance;
	u32 typeFlags;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	EBoundSphere sphere;
	float t;
	EVec3 vClosest;
	float radiusSquared;
	EVec3 &v;
	float scaler;
	EVec3 *this;
	EOTData *this;
	int value;
	EInstance *pInstance;
	u32 typeFlags;
	EVec3 vCurrentEnd;
	float tout;
	EVec3 &v;
	FTIterator fti;
	EBound3 ib;
	FTIterator i;
	int value;
	FTIterator i;
	FTIterator i;
	FTIterator fti;
	EBound3 ib;
	FTIterator i;
	int value;
	FTIterator i;
	FTIterator i;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  bool bVar7;
  EInstance *pEVar8;
  int *piVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  EBound3 *pEVar13;
  float *pfVar14;
  ERedBlackTreeNode *i;
  EVec3 *pEVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  EVec3 *pEVar21;
  int *piVar22;
  undefined8 unaff_s0;
  int iVar23;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  int iVar24;
  int iVar25;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  bool bVar26;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  EVec3 vDelta;
  EInstance collInst;
  EBound3 bPrevious;
  EVec3 vExpandRadius;
  EBound3 moveBounds;
  TFloatTree_EInstance___ instances;
  EVec3 vCurrentEnd;
  float local_104;
  EVec3 vClosest;
  undefined local_f4 [8];
  float local_ec;
  float local_e8;
  ERLevel *local_e0;
  int local_dc;
  bool useRef;
  bool negativeDir;
  EBound3 *local_d0;
  EInstance *local_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
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
  
  uVar20 = (ulong)(int)pRef;
  uVar17 = (ulong)(int)type;
  uVar16 = (ulong)(int)vStart;
  pEVar21 = &vDelta;
  local_50 = (int)unaff_s7;
  uStack_4c = (int)((ulong)unaff_s7 >> 0x20);
  local_70 = (int)unaff_s5;
  uStack_6c = (int)((ulong)unaff_s5 >> 0x20);
  local_80 = (int)unaff_s4;
  uStack_7c = (int)((ulong)unaff_s4 >> 0x20);
  local_90 = (int)unaff_s3;
  uStack_8c = (int)((ulong)unaff_s3 >> 0x20);
  local_a0 = (int)unaff_s2;
  uStack_9c = (int)((ulong)unaff_s2 >> 0x20);
  local_30 = (int)unaff_retaddr;
  uStack_2c = (int)((ulong)unaff_retaddr >> 0x20);
  local_40 = (int)unaff_s8;
  uStack_3c = (int)((ulong)unaff_s8 >> 0x20);
  local_60 = (int)unaff_s6;
  uStack_5c = (int)((ulong)unaff_s6 >> 0x20);
  local_b0 = (int)unaff_s1;
  uStack_ac = (int)((ulong)unaff_s1 >> 0x20);
  local_c0 = (int)unaff_s0;
  uStack_bc = (int)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_e0 = this;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vDelta.field0_0x0.d[0] = (vEnd->field0_0x0).d[0] - (vStart->field0_0x0).d[0];
  vDelta.field0_0x0.d[1] = (vEnd->field0_0x0).d[1] - (vStart->field0_0x0).d[1];
  vDelta.field0_0x0.d[2] = (vEnd->field0_0x0).d[2] - (vStart->field0_0x0).d[2];
                    /* end of inlined section */
  local_dc = (int)resetPrevious;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar29 = vDelta.field0_0x0.d[0] * vDelta.field0_0x0.d[0] +
           vDelta.field0_0x0.d[1] * vDelta.field0_0x0.d[1] +
           vDelta.field0_0x0.d[2] * vDelta.field0_0x0.d[2];
                    /* end of inlined section */
  if (fVar29 == 0.0) {
    return false;
  }
  local_cc = &collInst;
  local_d0 = &moveBounds;
  iVar23 = 0;
  pEVar15 = &moveBounds.vMax;
  uVar19 = uVar16;
  uVar18 = uVar17;
  fVar30 = -1.0;
  iVar24 = 0;
  do {
                    /* end of inlined section */
    fVar27 = fabsf(*(float *)pEVar21);
    iVar25 = iVar23;
    if (fVar27 <= fVar30) {
      fVar27 = fVar30;
      iVar25 = iVar24;
    }
    iVar23 = iVar23 + 1;
    pEVar21 = (EVec3 *)((int)pEVar21 + 4);
    fVar30 = fVar27;
    iVar24 = iVar25;
  } while (iVar23 < 3);
  _useRef = 0;
  pEVar8 = __9EInstance(local_cc);
  uVar11 = (ulong)(int)pEVar8;
  puVar2 = (undefined *)((int)&bPrevious.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  uVar4 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
  uVar4 = (uint)&bPrevious.vMax & 7;
  puVar6 = (ulong *)((int)&bPrevious.vMax - uVar4);
  *puVar6 = 0L << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  bPrevious.vMax.field0_0x0.d[2] = 0.0;
  puVar2 = (undefined *)((int)&bPrevious.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  uVar3 = (uint)&bPrevious.vMax & 7;
  uVar18 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
           uVar18 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&bPrevious.vMax - uVar3) >> uVar3 * 8;
  puVar2 = (undefined *)((int)&bPrevious.vMin.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar18 >> (7 - uVar4) * 8;
  pEVar8 = local_cc;
  bPrevious.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
                    /* end of inlined section */
  if ((uVar20 != 0) && (uVar11 = (ulong)(int)((pRef->m_otd).m_causeFlags & type), uVar11 != 0)) {
    bVar26 = pRef->m_pLevel == local_e0;
    uVar11 = (ulong)bVar26;
    _useRef = (uint)bVar26;
  }
  if (_useRef == 0) {
    bPrevious.vMin.field0_0x0._0_8_ = uVar18;
    SetOverlapCauseFlags__9EInstanceUi(local_cc,type);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  }
  else {
    puVar2 = (undefined *)((int)&(pRef->m_otd).m_bPos.vMin.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    uVar4 = (uint)puVar2 & 7;
    uVar3 = (uint)&pRef->m_otd & 7;
    bPrevious.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
         uVar19 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)&pRef->m_otd - uVar3) >> uVar3 * 8;
    bPrevious.vMin.field0_0x0.d[2] = (pRef->m_otd).m_bPos.vMin.field0_0x0.d[2];
    puVar2 = (undefined *)((int)&bPrevious.vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    puVar6 = (ulong *)(puVar2 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 |
              (ulong)bPrevious.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
    puVar2 = (undefined *)((int)&(pRef->m_otd).m_bPos.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    pEVar21 = &(pRef->m_otd).m_bPos.vMax;
    uVar3 = (uint)pEVar21 & 7;
    uVar11 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)pEVar21 - uVar3) >> uVar3 * 8;
    bPrevious.vMax.field0_0x0.d[2] = (pRef->m_otd).m_bPos.vMax.field0_0x0.d[2];
    puVar2 = (undefined *)((int)&bPrevious.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar2 & 7;
    puVar6 = (ulong *)(puVar2 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar11 >> (7 - uVar4) * 8;
    uVar4 = (uint)&bPrevious.vMax & 7;
    puVar6 = (ulong *)((int)&bPrevious.vMax - uVar4);
    *puVar6 = uVar11 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    pEVar8 = pRef;
                    /* end of inlined section */
  }
  puVar2 = (undefined *)((int)&moveBounds.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
  uVar4 = (uint)&moveBounds.vMax & 7;
  puVar6 = (ulong *)((int)&moveBounds.vMax - uVar4);
  *puVar6 = 0L << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  moveBounds.vMax.field0_0x0.d[2] = 0.0;
  puVar2 = (undefined *)((int)&moveBounds.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  uVar3 = (uint)&moveBounds.vMax & 7;
  puVar1 = (undefined *)((int)&moveBounds.vMin.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            ((*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&moveBounds.vMax - uVar3) >> uVar3 * 8) >> (7 - uVar5) * 8;
  pEVar13 = local_d0;
  moveBounds.vMin.field0_0x0.d[2] = 0.0;
  puVar2 = (undefined *)((int)&vStart->field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  uVar3 = (uint)vStart & 7;
  uVar19 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
           uVar18 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)vStart - uVar3) >> uVar3 * 8;
  fVar30 = (vStart->field0_0x0).d[2];
  uVar18 = (ulong)(int)fVar30;
  puVar2 = (undefined *)((int)&moveBounds.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar19 >> (7 - uVar4) * 8;
  uVar4 = (uint)&moveBounds.vMax & 7;
  puVar6 = (ulong *)((int)&moveBounds.vMax - uVar4);
  *puVar6 = uVar19 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  moveBounds.vMax.field0_0x0.d[2] = fVar30;
  puVar2 = (undefined *)((int)&moveBounds.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  uVar3 = (uint)&moveBounds.vMax & 7;
  uVar19 = *(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&moveBounds.vMax - uVar3) >> uVar3 * 8;
  puVar2 = (undefined *)((int)&moveBounds.vMin.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar19 >> (7 - uVar4) * 8;
  pEVar21 = vEnd;
  do {
    fVar28 = (pEVar21->field0_0x0).d[0];
    fVar27 = (pEVar13->vMin).field0_0x0.d[0];
    if (fVar28 <= fVar27) {
      fVar27 = fVar28;
    }
    (pEVar13->vMin).field0_0x0.d[0] = fVar27;
    fVar27 = (pEVar15->field0_0x0).d[0];
    if (fVar27 <= fVar28) {
      fVar27 = fVar28;
    }
    (pEVar15->field0_0x0).d[0] = fVar27;
    pEVar21 = (EVec3 *)((int)&pEVar21->field0_0x0 + 4);
    pEVar15 = (EVec3 *)((int)&pEVar15->field0_0x0 + 4);
    pEVar13 = (EBound3 *)((int)&(pEVar13->vMin).field0_0x0 + 4);
  } while ((int)pEVar21 < (int)(vEnd + 1));
  moveBounds.vMin.field0_0x0.d[0] = (float)uVar19;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  moveBounds.vMin.field0_0x0.d[1] = (float)(uVar19 >> 0x20);
  moveBounds.vMin.field0_0x0.d[2] = fVar30 - radius;
  moveBounds.vMax.field0_0x0.d[0] = moveBounds.vMax.field0_0x0.d[0] + radius;
  moveBounds.vMax.field0_0x0.d[1] = moveBounds.vMax.field0_0x0.d[1] + radius;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  moveBounds.vMax.field0_0x0.d[2] = moveBounds.vMax.field0_0x0.d[2] + radius;
  moveBounds.vMin.field0_0x0._0_8_ =
       CONCAT44(moveBounds.vMin.field0_0x0.d[1] - radius,moveBounds.vMin.field0_0x0.d[0] - radius);
  fVar30 = radius;
                    /* end of inlined section */
  SetBounds__9EInstanceRC7EBound3(pEVar8,local_d0);
  if (_useRef == 0) {
    Insert__15EOverlapTrackerP9EInstanceT1(&local_e0->m_ot,pEVar8,pRef);
                    /* end of inlined section */
  }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
  _negativeDir = 1;
  __10EFloatTree((EFloatTree *)&instances);
                    /* end of inlined section */
  if (0.0 <= vDelta.field0_0x0.d[iVar25]) {
    _negativeDir = 0;
  }
                    /* end of inlined section */
  i = (pEVar8->m_otd).m_overlaps.field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  while (puVar10 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                             ((undefined1 *)i,&pEVar8->m_otd,type), puVar10 != (undefined1 *)0x0) {
    piVar22 = *(int **)(puVar10 + 0x18);
                    /* end of inlined section */
    if ((piVar22[5] & 0x400U) == 0) {
                    /* end of inlined section */
      (**(code **)(*piVar22 + 0xa4))((int)piVar22 + (int)*(short *)(*piVar22 + 0xa0),&vCurrentEnd);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      local_104 = local_104 + fVar30;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar27 = ((vCurrentEnd.field0_0x0.d[0] - (vStart->field0_0x0).d[0]) * vDelta.field0_0x0.d[0] +
                (vCurrentEnd.field0_0x0.d[1] - (vStart->field0_0x0).d[1]) * vDelta.field0_0x0.d[1] +
               (vCurrentEnd.field0_0x0.d[2] - (vStart->field0_0x0).d[2]) * vDelta.field0_0x0.d[2]) *
               (1.0 / fVar29);
      if (0.0 <= fVar27) {
        fVar27 = (float)((int)fVar27 * (uint)(fVar27 < 1.0) | (uint)(fVar27 >= 1.0) * 0x3f800000);
      }
      else {
        fVar27 = 0.0;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_f4._4_4_ = (vStart->field0_0x0).d[0] + fVar27 * vDelta.field0_0x0.d[0];
      fVar28 = (vStart->field0_0x0).d[1] + fVar27 * vDelta.field0_0x0.d[1];
      local_ec = fVar28 - vCurrentEnd.field0_0x0.d[1];
      vClosest.field0_0x0.d[2] = (vStart->field0_0x0).d[2] + fVar27 * vDelta.field0_0x0.d[2];
      vClosest.field0_0x0._0_8_ = CONCAT44(fVar28,local_f4._4_4_);
      local_f4._4_4_ = local_f4._4_4_ - vCurrentEnd.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_e8 = vClosest.field0_0x0.d[2] - vCurrentEnd.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      if (local_f4._4_4_ * local_f4._4_4_ + local_ec * local_ec + local_e8 * local_e8 <
          local_104 * local_104) {
                    /* end of inlined section */
        uVar19 = (ulong)_negativeDir;
                    /* inlined from /eor/src2/engine/collision/e_overlaptrackertypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
        piVar9 = piVar22 + 0xd;
        if (uVar19 == 0) {
          piVar9 = piVar22 + 10;
        }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
        Insert__10EFloatTreefUib((EFloatTree *)&instances,(float)piVar9[iVar25],(uint)piVar22,true);
      }
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
      i = *(ERedBlackTreeNode **)(puVar10 + 0x10);
    }
    else {
      i = *(ERedBlackTreeNode **)(puVar10 + 0x10);
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  bVar26 = false;
  if (instances.field0_0x0.m_list.m_pHead != (EFloatTreeNode *)0x0) {
    ciOut->t = 0.0;
    fVar27 = 1.0;
    fVar28 = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar11 = (ulong)_negativeDir;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vCurrentEnd.field0_0x0._0_8_ = *(undefined8 *)&vEnd->field0_0x0;
                    /* end of inlined section */
    vCurrentEnd.field0_0x0.d[2] = (vEnd->field0_0x0).d[2];
    fVar29 = fVar28;
    if (uVar11 == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
      pEVar21 = &vCurrentEnd;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      if ((instances.field0_0x0.m_list.m_pHead != (EFloatTreeNode *)0x0) &&
         ((instances.field0_0x0.m_list.m_pHead)->key <= (pEVar21->field0_0x0).d[iVar25] + fVar30)) {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
        piVar22 = (int *)(instances.field0_0x0.m_list.m_pHead)->value;
        do {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
          uVar4 = (int)piVar22 + 0x2fU & 7;
          uVar3 = (uint)(piVar22 + 10) & 7;
          uVar18 = (*(long *)(((int)piVar22 + 0x2fU) - uVar4) << (7 - uVar4) * 8 |
                   uVar11 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)(piVar22 + 10) - uVar3) >> uVar3 * 8;
          fVar29 = (float)piVar22[0xc];
          puVar2 = (undefined *)((int)&vClosest.field0_0x0 + 7);
          uVar4 = (uint)puVar2 & 7;
          puVar6 = (ulong *)(puVar2 + -uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar18 >> (7 - uVar4) * 8;
          uVar4 = (int)piVar22 + 0x3bU & 7;
          uVar3 = (uint)(piVar22 + 0xd) & 7;
          uVar19 = (*(long *)(((int)piVar22 + 0x3bU) - uVar4) << (7 - uVar4) * 8 |
                   uVar19 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)(piVar22 + 0xd) - uVar3) >> uVar3 * 8;
          local_ec = (float)piVar22[0xf];
          uVar11 = (ulong)(int)local_ec;
          uVar4 = (int)local_f4 + 7 & 7;
          puVar6 = (ulong *)(((int)local_f4 + 7) - uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar19 >> (7 - uVar4) * 8;
          uVar4 = (uint)local_f4 & 7;
          puVar6 = (ulong *)((int)local_f4 - uVar4);
          *puVar6 = uVar19 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          vClosest.field0_0x0.d[0] = (float)uVar18;
          vClosest.field0_0x0.d[1] = (float)(uVar18 >> 0x20);
          vClosest.field0_0x0.d[2] = fVar29 - radius;
          local_f4._0_4_ = local_f4._0_4_ + radius;
          local_f4._4_4_ = local_f4._4_4_ + radius;
          local_ec = local_ec + radius;
          vClosest.field0_0x0._0_8_ =
               CONCAT44(vClosest.field0_0x0.d[1] - radius,vClosest.field0_0x0.d[0] - radius);
                    /* end of inlined section */
          bVar7 = IntersectBoundBox__7ERLevelRC7EBound3RC5EVec3T2
                            ((EBound3 *)&vClosest,vStart,pEVar21);
          if (bVar7) {
            iVar24 = *piVar22;
            uVar18 = (ulong)iVar24;
            uVar19 = (long)(int)pEVar21;
            uVar11 = uVar17;
            lVar12 = (**(code **)(iVar24 + 0x8c))
                               (fVar30,(int)piVar22 + (int)*(short *)(iVar24 + 0x88),ciOut,uVar16,
                                (long)(int)pEVar21,uVar17,uVar20);
            if (lVar12 != 0) {
              fVar29 = ciOut->t;
              bVar26 = true;
              puVar2 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
              uVar4 = (uint)puVar2 & 7;
              uVar3 = (uint)&ciOut->vPos & 7;
              vCurrentEnd.field0_0x0._0_8_ =
                   (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
                   uVar18 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)&ciOut->vPos - uVar3) >> uVar3 * 8;
              vCurrentEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
              puVar2 = (undefined *)((int)&vCurrentEnd.field0_0x0 + 7);
              uVar4 = (uint)puVar2 & 7;
              puVar6 = (ulong *)(puVar2 + -uVar4);
              *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 |
                        (ulong)vCurrentEnd.field0_0x0._0_8_ >> (7 - uVar4) * 8;
              fVar27 = fVar27 * fVar29;
              goto LAB_002afb28;
            }
            instances.field0_0x0.m_list.m_pHead = (instances.field0_0x0.m_list.m_pHead)->pNext;
          }
          else {
LAB_002afb28:
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
            instances.field0_0x0.m_list.m_pHead = (instances.field0_0x0.m_list.m_pHead)->pNext;
          }
                    /* end of inlined section */
          if (instances.field0_0x0.m_list.m_pHead == (EFloatTreeNode *)0x0) {
            ciOut->t = fVar27;
            goto LAB_002afb54;
          }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
          fVar29 = fVar27;
          if ((pEVar21->field0_0x0).d[iVar25] + fVar30 < (instances.field0_0x0.m_list.m_pHead)->key)
          break;
          piVar22 = (int *)(instances.field0_0x0.m_list.m_pHead)->value;
        } while( true );
      }
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
      fVar29 = fVar27;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      if ((instances.field0_0x0.m_list.m_pTail != (EFloatTreeNode *)0x0) &&
         (pfVar14 = vCurrentEnd.field0_0x0.d + iVar25, fVar29 = fVar28,
         *pfVar14 - fVar30 <= (instances.field0_0x0.m_list.m_pTail)->key)) {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
        piVar22 = (int *)(instances.field0_0x0.m_list.m_pTail)->value;
        do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
          uVar4 = (int)piVar22 + 0x2fU & 7;
          uVar3 = (uint)(piVar22 + 10) & 7;
          uVar19 = (*(long *)(((int)piVar22 + 0x2fU) - uVar4) << (7 - uVar4) * 8 |
                   uVar18 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)(piVar22 + 10) - uVar3) >> uVar3 * 8;
          fVar29 = (float)piVar22[0xc];
          puVar2 = (undefined *)((int)&vClosest.field0_0x0 + 7);
          uVar4 = (uint)puVar2 & 7;
          puVar6 = (ulong *)(puVar2 + -uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar19 >> (7 - uVar4) * 8;
          uVar4 = (int)piVar22 + 0x3bU & 7;
          uVar3 = (uint)(piVar22 + 0xd) & 7;
          uVar11 = (*(long *)(((int)piVar22 + 0x3bU) - uVar4) << (7 - uVar4) * 8 |
                   uVar11 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)(piVar22 + 0xd) - uVar3) >> uVar3 * 8;
          local_ec = (float)piVar22[0xf];
          uVar18 = (ulong)(int)local_ec;
          uVar4 = (int)local_f4 + 7 & 7;
          puVar6 = (ulong *)(((int)local_f4 + 7) - uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar11 >> (7 - uVar4) * 8;
          uVar4 = (uint)local_f4 & 7;
          puVar6 = (ulong *)((int)local_f4 - uVar4);
          *puVar6 = uVar11 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          vClosest.field0_0x0.d[0] = (float)uVar19;
          vClosest.field0_0x0.d[1] = (float)(uVar19 >> 0x20);
          vClosest.field0_0x0.d[2] = fVar29 - radius;
          local_f4._0_4_ = local_f4._0_4_ + radius;
          local_f4._4_4_ = local_f4._4_4_ + radius;
          local_ec = local_ec + radius;
          vClosest.field0_0x0._0_8_ =
               CONCAT44(vClosest.field0_0x0.d[1] - radius,vClosest.field0_0x0.d[0] - radius);
                    /* end of inlined section */
          bVar7 = IntersectBoundBox__7ERLevelRC7EBound3RC5EVec3T2
                            ((EBound3 *)&vClosest,vStart,&vCurrentEnd);
          if (bVar7) {
            uVar19 = (ulong)((int)piVar22 + (int)*(short *)(*piVar22 + 0x88));
            uVar11 = uVar17;
            uVar18 = uVar20;
            lVar12 = (**(code **)(*piVar22 + 0x8c))(fVar30,uVar19,ciOut,uVar16,&vCurrentEnd);
            if (lVar12 != 0) {
              fVar29 = ciOut->t;
              bVar26 = true;
              puVar2 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
              uVar4 = (uint)puVar2 & 7;
              uVar3 = (uint)&ciOut->vPos & 7;
              vCurrentEnd.field0_0x0._0_8_ =
                   (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
                   uVar19 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)&ciOut->vPos - uVar3) >> uVar3 * 8;
              vCurrentEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
              puVar2 = (undefined *)((int)&vCurrentEnd.field0_0x0 + 7);
              uVar4 = (uint)puVar2 & 7;
              puVar6 = (ulong *)(puVar2 + -uVar4);
              *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 |
                        (ulong)vCurrentEnd.field0_0x0._0_8_ >> (7 - uVar4) * 8;
              fVar27 = fVar27 * fVar29;
              goto LAB_002af9d0;
            }
            instances.field0_0x0.m_list.m_pTail = (instances.field0_0x0.m_list.m_pTail)->pLast;
          }
          else {
LAB_002af9d0:
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
            instances.field0_0x0.m_list.m_pTail = (instances.field0_0x0.m_list.m_pTail)->pLast;
          }
                    /* end of inlined section */
          if (instances.field0_0x0.m_list.m_pTail == (EFloatTreeNode *)0x0) {
            ciOut->t = fVar27;
            goto LAB_002afb54;
          }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
          if ((instances.field0_0x0.m_list.m_pTail)->key < *pfVar14 - fVar30) goto code_r0x002af9f8;
          piVar22 = (int *)(instances.field0_0x0.m_list.m_pTail)->value;
        } while( true );
      }
    }
    ciOut->t = fVar29;
  }
LAB_002afb54:
  if (_useRef == 0) {
    Remove__15EOverlapTrackerP9EInstance(&local_e0->m_ot,local_cc);
  }
  else if (local_dc != 0) {
    SetBounds__9EInstanceRC7EBound3(pRef,&bPrevious);
  }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
  RemoveAll__10EFloatTree((EFloatTree *)&instances);
                    /* end of inlined section */
  ___9EInstance(local_cc,2);
  return bVar26;
code_r0x002af9f8:
  ciOut->t = fVar27;
  goto LAB_002afb54;
}

int ERLevel::CollideTest(EBound3 &bBox, u32 type) {
	int count;
	EInstance collInst;
	OTIterator oti;
	u32 typeFlags;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	u32 typeFlags;
	
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  EInstance collInst;
  
  iVar4 = 0;
  __9EInstance(&collInst);
  SetOverlapCauseFlags__9EInstanceUi(&collInst,type);
  SetBounds__9EInstanceRC7EBound3(&collInst,bBox);
  Insert__15EOverlapTrackerP9EInstanceT1(&this->m_ot,&collInst,(EInstance *)0x0);
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
                    /* end of inlined section */
                    /* end of inlined section */
  while (puVar3 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                            ((undefined1 *)collInst.m_otd.m_overlaps.field0_0x0.m_list.m_pHead,
                             &collInst.m_otd,type), puVar3 != (undefined1 *)0x0) {
    piVar1 = *(int **)(puVar3 + 0x18);
                    /* end of inlined section */
    if ((piVar1[5] & 0x400U) == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x94))((int)piVar1 + (int)*(short *)(*piVar1 + 0x90),bBox,0x20)
      ;
      iVar4 = iVar4 + iVar2;
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
      collInst.m_otd.m_overlaps.field0_0x0.m_list.m_pHead = *(ERedBlackTreeNode **)(puVar3 + 0x10);
    }
    else {
      collInst.m_otd.m_overlaps.field0_0x0.m_list.m_pHead = *(ERedBlackTreeNode **)(puVar3 + 0x10);
    }
  }
  Remove__15EOverlapTrackerP9EInstance(&this->m_ot,&collInst);
  ___9EInstance(&collInst,2);
  return iVar4;
}

bool ERLevel::IntersectBoundBox(EBound3 &b, EVec3 &vStart, EVec3 &vEnd) {
	EVec3 vDelta;
	EBound3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EBound3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 &v;
	int d;
	int value;
	float invDelta;
	int value;
	int value;
	float tmin;
	EVec3 *this;
	int value;
	EVec3 *this;
	int value;
	float imindp1;
	float imindp2;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	float tmax;
	EVec3 *this;
	int value;
	EVec3 *this;
	int value;
	float imaxdp1;
	float imaxdp2;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  EVec3 vDelta;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  bVar2 = false;
  if (((((b->vMin).field0_0x0.d[0] <= (vStart->field0_0x0).d[0]) &&
       ((vStart->field0_0x0).d[0] <= (b->vMax).field0_0x0.d[0])) &&
      ((b->vMin).field0_0x0.d[1] <= (vStart->field0_0x0).d[1])) &&
     ((((vStart->field0_0x0).d[1] <= (b->vMax).field0_0x0.d[1] &&
       ((b->vMin).field0_0x0.d[2] <= (vStart->field0_0x0).d[2])) &&
      ((vStart->field0_0x0).d[2] <= (b->vMax).field0_0x0.d[2])))) {
    bVar2 = true;
  }
  bVar3 = true;
                    /* end of inlined section */
  if (!bVar2) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    fVar7 = (vEnd->field0_0x0).d[0];
    bVar2 = false;
    if ((((b->vMin).field0_0x0.d[0] <= fVar7) && (fVar7 <= (b->vMax).field0_0x0.d[0])) &&
       (((b->vMin).field0_0x0.d[1] <= (vEnd->field0_0x0).d[1] &&
        ((((vEnd->field0_0x0).d[1] <= (b->vMax).field0_0x0.d[1] &&
          ((b->vMin).field0_0x0.d[2] <= (vEnd->field0_0x0).d[2])) &&
         ((vEnd->field0_0x0).d[2] <= (b->vMax).field0_0x0.d[2])))))) {
      bVar2 = true;
    }
    bVar3 = true;
                    /* end of inlined section */
    if (!bVar2) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vDelta.field0_0x0.d[0] = fVar7 - (vStart->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vDelta.field0_0x0.d[1] = (vEnd->field0_0x0).d[1] - (vStart->field0_0x0).d[1];
      vDelta.field0_0x0.d[2] = (vEnd->field0_0x0).d[2] - (vStart->field0_0x0).d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      iVar5 = 0;
      iVar4 = 0;
      do {
                    /* end of inlined section */
        fVar7 = *(float *)((int)&vDelta.field0_0x0 + iVar5);
        iVar6 = iVar4 + 1;
        if (fVar7 != 0.0) {
                    /* end of inlined section */
          iVar4 = (iVar4 + 2) % 3;
          iVar1 = iVar6 % 3;
          if (0.0 < fVar7) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
            fVar7 = (*(float *)((int)&(b->vMin).field0_0x0 + iVar5) -
                    *(float *)((int)&vStart->field0_0x0 + iVar5)) * (1.0 / fVar7);
            if ((0.0 <= fVar7) && (fVar7 <= 1.0)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
              fVar8 = (vStart->field0_0x0).d[iVar1] + fVar7 * vDelta.field0_0x0.d[iVar1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
              fVar7 = (vStart->field0_0x0).d[iVar4] + fVar7 * vDelta.field0_0x0.d[iVar4];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
              if (((b->vMin).field0_0x0.d[iVar1] <= fVar8) &&
                 ((fVar8 <= (b->vMax).field0_0x0.d[iVar1] &&
                  ((b->vMin).field0_0x0.d[iVar4] <= fVar7)))) goto LAB_002aff48;
            }
          }
          else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
            fVar7 = (*(float *)((int)&(b->vMax).field0_0x0 + iVar5) -
                    *(float *)((int)&vStart->field0_0x0 + iVar5)) * (1.0 / fVar7);
            if ((0.0 <= fVar7) && (fVar7 <= 1.0)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
              fVar8 = (vStart->field0_0x0).d[iVar1] + fVar7 * vDelta.field0_0x0.d[iVar1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
              fVar7 = (vStart->field0_0x0).d[iVar4] + fVar7 * vDelta.field0_0x0.d[iVar4];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
              if ((((b->vMin).field0_0x0.d[iVar1] <= fVar8) &&
                  (fVar8 <= (b->vMax).field0_0x0.d[iVar1])) &&
                 ((b->vMin).field0_0x0.d[iVar4] <= fVar7)) {
LAB_002aff48:
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                if (fVar7 <= (b->vMax).field0_0x0.d[iVar4]) {
                  return true;
                }
              }
            }
          }
        }
        iVar5 = iVar6 * 4;
        iVar4 = iVar6;
      } while (iVar6 < 3);
      bVar3 = false;
    }
  }
  return bVar3;
}

bool ERLevel::SetTriggers(EInstance *pInstance, EVec3 &vStart, EVec3 &vEnd) {
	u32 type;
	int collisionsLeft;
	EVec3 vCurrent;
	bool anyTriggersSet;
	EInstance *this;
	EVec3 &v;
	ECollisionInfo ci;
	EScriptParams sp;
	ETriggerList *pTList;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	ERScript *pScript;
	
  undefined *puVar1;
  uint uVar2;
  EStorable__vtable *pEVar3;
  uint uVar4;
  ulong *puVar5;
  bool bVar6;
  bool bVar7;
  TNodeList_EInstance___ *pTVar8;
  ulong uVar9;
  int iVar10;
  int *piVar11;
  uint type;
  int iVar12;
  EVec3 vCurrent;
  ECollisionInfo ci;
  EScriptParams sp;
  ERLevel *local_b0;
  EVec3 *local_ac;
  
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
                    /* end of inlined section */
  type = (pInstance->m_otd).m_causeFlags & 0x3c00;
  bVar6 = false;
  if (type != 0) {
                    /* inlined from /eor/src2/engine/collision/e_collision.h */
                    /* end of inlined section */
    iVar12 = 0x10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vCurrent.field0_0x0.d[2] = (vStart->field0_0x0).d[2];
                    /* end of inlined section */
    bVar6 = false;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vCurrent.field0_0x0._0_8_ = *(undefined8 *)&vStart->field0_0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/collision/e_collision.h */
    _10ECollision_m_skipPlanesToggle = (int)(_10ECollision_m_skipPlanesToggle == 0);
                    /* end of inlined section */
    local_b0 = this;
    local_ac = vEnd;
    do {
      bVar7 = CollidePoint__7ERLevelR14ECollisionInfoRC5EVec3T2UibP9EInstanceT5
                        (local_b0,&ci,&vCurrent,local_ac,type,false,pInstance,true);
      iVar12 = iVar12 + -1;
      if (!bVar7) break;
                    /* inlined from /eor/src2/engine/script/e_scriptparams.h */
      sp.pReceiverList = (TNodeList_EInstance___ *)0x0;
      puVar1 = (undefined *)((int)&sp.vPos.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
      sp.vPos.field0_0x0._0_8_ = 0;
      sp.vPos.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&sp.vNormal.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
      uVar4 = (uint)&sp.vNormal & 7;
      puVar5 = (ulong *)((int)&sp.vNormal - uVar4);
      *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      sp.vNormal.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
      sp.pCauseInst = ci.pInst;
      puVar1 = (undefined *)((int)&ci.vPos.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      uVar2 = (uint)&ci.vPos & 7;
      sp.vPos.field0_0x0._0_8_ =
           (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
           (long)(int)ci.pInst & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)&ci.vPos - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&sp.vPos.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                (ulong)sp.vPos.field0_0x0._0_8_ >> (7 - uVar4) * 8;
      sp.vPos.field0_0x0.d[2] = ci.vPos.field0_0x0.d[2];
      puVar1 = (undefined *)((int)&sp.vNormal.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                (ulong)ci.vNormal.field0_0x0._0_8_ >> (7 - uVar4) * 8;
      uVar4 = (uint)&sp.vNormal & 7;
      puVar5 = (ulong *)((int)&sp.vNormal - uVar4);
      *puVar5 = ci.vNormal.field0_0x0._0_8_ << uVar4 * 8 |
                *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      sp.vNormal.field0_0x0.d[2] = ci.vNormal.field0_0x0.d[2];
      pEVar3 = ((ci.pInst)->field0_0x0).__vtable;
      uVar9 = (*(code *)pEVar3[4].Read)
                        ((int)(((ci.pInst)->m_otd).m_minPos + -7) +
                         (int)*(short *)&pEVar3[4].EStorable);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      if ((uVar9 != 0) && (piVar11 = *(int **)uVar9, piVar11 != (int *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        iVar10 = *piVar11;
        while( true ) {
                    /* end of inlined section */
          pTVar8 = (TNodeList_EInstance___ *)(iVar10 + 0xc);
          uVar9 = (ulong)(int)pTVar8;
          if ((*(uint *)(iVar10 + 0x14) & type) != 0) {
            bVar6 = true;
            sp.pReceiverList = pTVar8;
            if (*(ERScript **)(iVar10 + 4) != (ERScript *)0x0) {
              Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
                        (&_scriptEngine,*(ERScript **)(iVar10 + 4),pInstance,&sp);
            }
          }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          piVar11 = (int *)piVar11[2];
                    /* end of inlined section */
          if (piVar11 == (int *)0x0) break;
          iVar10 = *piVar11;
        }
      }
      AddSkipPlane__10ECollisionRC5EVec3T1(&ci.vPos,&ci.vNormal);
      vCurrent.field0_0x0.d[2] = ci.vPos.field0_0x0.d[2];
      puVar1 = (undefined *)((int)&ci.vPos.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      uVar2 = (uint)&ci.vPos & 7;
      vCurrent.field0_0x0._0_8_ =
           (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
           uVar9 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)&ci.vPos - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&vCurrent.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                (ulong)vCurrent.field0_0x0._0_8_ >> (7 - uVar4) * 8;
    } while (iVar12 != 0);
                    /* inlined from /eor/src2/engine/collision/e_collision.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/collision/e_collision.h */
    piVar11 = _10ECollision_m_nSkipPlanes + _10ECollision_m_skipPlanesToggle;
    _10ECollision_m_skipPlanesToggle = (int)(_10ECollision_m_skipPlanesToggle == 0);
    *piVar11 = 0;
  }
                    /* end of inlined section */
  return bVar6;
}

void ERLevel::DepthCompMode(bool mode) {
	char *szName;
	char *szName;
	
  EGlobalManagerClient__vtable *pEVar1;
  bool bVar2;
  ERShader *pEVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (mode) {
    if (*(int *)&this->m_depthComp != 0) {
      *(int *)&this->m_depthComp = (int)mode;
      return;
    }
    if ((this->m_pDepthShader == (ERShader *)0x0) &&
       (bVar2 = IsValid__16EResourceManagerPCc(&_shaderman.field0_0x0,"systemdepth"), bVar2)) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
      pEVar3 = (ERShader *)
               AddRef__16EResourceManagerPCcP5EFilei
                         (&_shaderman.field0_0x0,"systemdepth",(EFile *)0x0,0);
                    /* end of inlined section */
      this->m_pDepthShader = pEVar3;
    }
    pEVar1 = (_pGfx->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_58 = 0;
    local_5c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_60 = 0;
                    /* end of inlined section */
    (*(code *)pEVar1[4].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 4),&local_60,1);
  }
  *(int *)&this->m_depthComp = (int)mode;
  return;
}

void ERLevel::DrawWireFrame(ERC *prc) {
  EPortalWindow *this_00;
  uint parentVis;
  
  this_00 = _7EWindow_m_pCurrentPortalWindow;
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  (this->m_dd).prc = prc;
  (this->m_dd).renderFlags = 0;
  (this->m_dd).pWin = this_00;
  parentVis = GetRootVisFlags__13EPortalWindow(this_00);
  (*(code *)prc->__vtable->Init)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->LoadMPG,0,0);
  (*(code *)prc->__vtable->EndCommand)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,8);
  DoDrawSphereTreeWireFrame__7ERLevelP9EStorableUi(this,this->m_pStaticSphereTreeRoot,parentVis);
  return;
}

void ERLevel::DoDrawSphereTreeWireFrame(EStorable *pNode, u32 parentVis) {
	EStorable *pStorable;
	u32 visFlags;
	u32 visFlags;
	u32 useRenderFlags;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/spheretree/e_spheretreenode.h */
  bVar1 = IsExactType__9EStorableP9ETypeInfo(pNode,&_15ESphereTreeNode_m_typeInfo);
                    /* end of inlined section */
  if (bVar1) {
    if ((parentVis & 0x15) != 0) {
      parentVis = Test__13EPortalWindowRC12EBoundSphereUi
                            ((this->m_dd).pWin,(EBoundSphere *)(pNode + 1),parentVis);
    }
    if (parentVis != 0) {
      DoDrawSphereTreeWireFrame__7ERLevelP9EStorableUi
                (this,(EStorable *)pNode[6].__vtable,parentVis);
      DoDrawSphereTreeWireFrame__7ERLevelP9EStorableUi
                (this,(EStorable *)pNode[7].__vtable,parentVis);
    }
  }
  else {
    if ((parentVis & 0x15) != 0) {
      parentVis = (*(code *)pNode->__vtable[2].GetTypeVersion)
                            ((int)&pNode->__vtable + (int)*(short *)&pNode->__vtable[2].GetTypeKey,
                             (this->m_dd).pWin);
    }
    if (parentVis != 0) {
      (**(code **)(pNode->__vtable + 3))
                ((int)&pNode->__vtable + (int)*(short *)&pNode->__vtable[2].Write,(this->m_dd).prc,
                 (this->m_dd).renderFlags | parentVis & 1);
    }
  }
  return;
}

EHavokWorld* ERLevel::GetHavokWorld() {
  return (EHavokWorld *)0x0;
}

EStream& EStream & operator<<<EInstance *>(EStream &s, TNodeList<EInstance *> &d) {
	NLIterator i;
	EStream &s;
	int d;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EInstance *pD;
  ENodeListNode *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int local_40 [4];
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
  local_40[0] = GetSize__C9ENodeList(&d->field0_0x0);
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,local_40,4);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (d->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    pD = (EInstance *)pEVar1->data;
    while( true ) {
      __ls__FR7EStreamP9EInstance(s,pD);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pD = (EInstance *)pEVar1->data;
    }
  }
  return s;
}

EStream& EStream & operator<<<unsigned int, EInstance *>(EStream &s, TRedBlackTree<unsigned int,EInstance *> &d) {
	RBIterator i;
	EStream &s;
	int d;
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	EStream &s;
	unsigned int d;
	RBIterator i;
	RBIterator i;
	
  EStream__vtable *pEVar1;
  ERedBlackTreeNode *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int local_40;
  uint local_3c [3];
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
  local_40 = GetSize__C13ERedBlackTree(&d->field0_0x0);
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (d->field0_0x0).m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ERedBlackTreeNode *)0x0) {
                    /* end of inlined section */
    pEVar1 = s->__vtable;
    while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      local_3c[0] = pEVar2->key;
                    /* end of inlined section */
      (*(code *)pEVar1[1].Write)(&s->m_streamingStructure + *(short *)&pEVar1[1].Read,local_3c,4);
      __ls__FR7EStreamP9EInstance(s,(EInstance *)pEVar2->value);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      pEVar1 = s->__vtable;
    }
  }
  return s;
}

EStream& EStream & operator<<<ETrigger *>(EStream &s, TNodeList<ETrigger *> &d) {
	NLIterator i;
	EStream &s;
	int d;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ETrigger *pD;
  ENodeListNode *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int local_40 [4];
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
  local_40[0] = GetSize__C9ENodeList(&d->field0_0x0);
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,local_40,4);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (d->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    pD = (ETrigger *)pEVar1->data;
    while( true ) {
      __ls__FR7EStreamP8ETrigger(s,pD);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pD = (ETrigger *)pEVar1->data;
    }
  }
  return s;
}

EStream& EStream & operator>><EInstance *>(EStream &s, TNodeList<EInstance *> &d) {
	s32 count;
	EStream &s;
	EInstance *p;
	TNodeList<EInstance *> *this;
	EInstance *data;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int count;
  EInstance *p;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  RemoveAll__9ENodeList(&d->field0_0x0);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&count,4);
  while (count = count + -1, count != -1) {
    __rs__FR7EStreamRP9EInstance(s,&p);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&d->field0_0x0,(uint)p);
                    /* end of inlined section */
  }
  return s;
}

EStream& EStream & operator>><unsigned int, EInstance *>(EStream &s, TRedBlackTree<unsigned int,EInstance *> &d) {
	s32 count;
	EStream &s;
	u32 key;
	EInstance *val;
	EStream &s;
	TRedBlackTree<unsigned int,EInstance *> *this;
	u32 key;
	
  EInstance **ppEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int count;
  uint key;
  EInstance *val;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  RemoveAll__13ERedBlackTree(&d->field0_0x0);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&count,4);
  while (count = count + -1, count != -1) {
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&key,4);
    __rs__FR7EStreamRP9EInstance(s,&val);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    ppEVar1 = (EInstance **)__vc__13ERedBlackTreeUi(&d->field0_0x0,key);
                    /* end of inlined section */
    *ppEVar1 = val;
  }
  return s;
}

EStream& EStream & operator>><ETrigger *>(EStream &s, TNodeList<ETrigger *> &d) {
	s32 count;
	EStream &s;
	ETrigger *p;
	TNodeList<ETrigger *> *this;
	ETrigger *data;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int count;
  ETrigger *p;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  RemoveAll__9ENodeList(&d->field0_0x0);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&count,4);
  while (count = count + -1, count != -1) {
    __rs__FR7EStreamRP8ETrigger(s,&p);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&d->field0_0x0,(uint)p);
                    /* end of inlined section */
  }
  return s;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/level/e_rlevel.h */
    gpTypeInfo_ERLevel =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_7ERLevel_m_typeInfo,New__7ERLevel,0,"ERLevel",&_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERLevel* ERLevel::New() {
  ERLevel *pEVar1;
  
  pEVar1 = (ERLevel *)__builtin_new(0x578);
  pEVar1 = __7ERLevel(pEVar1);
  return pEVar1;
}

void ERLevel::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERLevel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)this->m_orderTable + *(short *)&pEVar1[1].GetTypeName + -0x38,3);
  }
  return;
}

ETypeInfo* ERLevel::GetTypeInfo() {
  return &_7ERLevel_m_typeInfo;
}

char* ERLevel::GetTypeName() {
  return _7ERLevel_m_typeInfo.m_name;
}

u32 ERLevel::GetTypeKey() {
  return _7ERLevel_m_typeInfo.m_key;
}

u16 ERLevel::GetTypeVersion() {
  return _7ERLevel_m_typeInfo.m_version;
}

u16 ERLevel::GetReadVersion() {
  return _7ERLevel_m_typeInfo.m_readVersion;
}

ETypeInfo* ERLevel::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_7ERLevel_m_typeInfo,New__7ERLevel,version,"ERLevel",&_9EResource_m_typeInfo)
  ;
  return pEVar1;
}

ERLevel* ERLevel::CreateCopy() {
  ERLevel *pEVar1;
  
  pEVar1 = (ERLevel *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void ERLevel::SetLights(ELights *pLights, int nDirectionalLights) {
  this->m_nDirLights = nDirectionalLights;
  this->m_pLights = pLights;
  return;
}

void ERLevel::SetHavokWorld(EHavokWorld *pHavokWorld) {
  this->m_pHavokWorld = pHavokWorld;
  return;
}

bool ERLevel::IsDrawingOrderTable() {
  return SUB41(__7ERLevel_m_drawingOrderTable,0);
}

bool ERLevel::IsHavokScene() {
  return this->m_pHavokWorld != (EHavokWorld *)0x0;
}

void global constructors keyed to EOrderTableEntry::EOrderTableEntry() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
