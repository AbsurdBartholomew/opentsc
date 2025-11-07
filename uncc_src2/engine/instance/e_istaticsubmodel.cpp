// STATUS: NOT STARTED

#include "e_istaticsubmodel.h"

ETypeInfo *gpTypeInfo_EIStaticSubModel = NULL;

__vtbl_ptr_type EIStaticSubModel virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::SafeDelete,
		/* .__delta2 = */ -23240
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::GetTypeInfo,
		/* .__delta2 = */ -23184
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::GetTypeName,
		/* .__delta2 = */ -23168
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::GetTypeKey,
		/* .__delta2 = */ -23152
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::GetTypeVersion,
		/* .__delta2 = */ -23136
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::~EIStaticSubModel,
		/* .__delta2 = */ -26536
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::Read,
		/* .__delta2 = */ -26128
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::Write,
		/* .__delta2 = */ -26360
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
		/* .__pfn = */ &EIStaticSubModel::VisibilityTest,
		/* .__delta2 = */ -25512
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::Draw,
		/* .__delta2 = */ -25352
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::DrawWireFrame,
		/* .__delta2 = */ -25112
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
		/* .__pfn = */ &EIStaticSubModel::CollidePointWithInstance,
		/* .__delta2 = */ -24800
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::CollideSphereWithInstance,
		/* .__delta2 = */ -24328
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::CollideTest,
		/* .__delta2 = */ -23864
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
		/* .__pfn = */ &EIStaticSubModel::GetBoundSphere,
		/* .__delta2 = */ -25904
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticSubModel::GetTriggerList,
		/* .__delta2 = */ -22936
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

ETypeInfo EIStaticSubModel::m_typeInfo;

EStream& operator<<(EStream &s, EIStaticSubModel *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIStaticSubModel *&pD) {
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
  *pD = (EIStaticSubModel *)pStorable;
  return s;
}

EIStaticSubModel* EIStaticSubModel::EIStaticSubModel() {
	EInstance *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
  __9EInstance(&this->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_16EIStaticSubModel;
  this->m_modelId = 0;
  this->m_nSubModel = 0;
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
  uVar2 = (this->field0_0x0).m_otd.m_receiveFlags;
                    /* end of inlined section */
  this->m_pTriggerList = (TNodeList_ETrigger___ *)0x0;
  this->m_pModel = (ERModel *)0x0;
  this->m_otds = (EOrderTableData *)0x0;
  SetOverlapReceiveFlags__9EInstanceUi(&this->field0_0x0,uVar2 | 0x4000);
  return this;
}

void EIStaticSubModel::~EIStaticSubModel(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_16EIStaticSubModel;
  Deallocate__16EIStaticSubModel(this);
  ___9EInstance(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/instance/e_istaticsubmodel.h */
    _allocBucketFree__FPvUiUi(this,0xa8,9);
  }
                    /* end of inlined section */
  return;
}

void EIStaticSubModel::Deallocate() {
  TNodeList_ETrigger___ *this_00;
  
  this_00 = this->m_pTriggerList;
  if (this_00 != (TNodeList_ETrigger___ *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    RemoveAll__9ENodeList(&this_00->field0_0x0);
    _memmanFree__FPv(this_00);
                    /* end of inlined section */
    this->m_pTriggerList = (TNodeList_ETrigger___ *)0x0;
  }
  DeallocateModel__16EIStaticSubModel(this);
  return;
}

void EIStaticSubModel::Write(EStream &s) {
	EStream &s;
	unsigned int d;
	unsigned int d;
	EStream &s;
	u8 v;
	EStream &s;
	u8 v;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uchar v;
  uint local_40;
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
  Write__9EInstanceR7EStream(&this->field0_0x0,s);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_40 = this->m_modelId;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
  d = this->m_nSubModel;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&d,4);
                    /* end of inlined section */
  __ls__FR7EStreamRC12EBoundSphere(s,&this->m_boundSphere);
  if (this->m_pTriggerList == (TNodeList_ETrigger___ *)0x0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    v = '\0';
    (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&v,1);
                    /* end of inlined section */
  }
  else {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    v = '\x01';
    (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&v,1);
                    /* end of inlined section */
    __ls__H1ZP8ETrigger_R7EStreamRCt9TNodeList1ZX01_R7EStream(s,this->m_pTriggerList);
  }
  return;
}

void EIStaticSubModel::Read(EStream &s) {
	EStream &s;
	EStream &s;
	u8 v;
	
  TNodeList_ETrigger___ *d;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uchar v;
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
  Deallocate__16EIStaticSubModel(this);
  Read__9EInstanceR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/instance/e_istaticsubmodel.h */
                    /* end of inlined section */
  if (_16EIStaticSubModel_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_modelId,4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_nSubModel,4);
                    /* end of inlined section */
    __rs__FR7EStreamR12EBoundSphere(s,&this->m_boundSphere);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&v,1);
                    /* end of inlined section */
    if (v != '\0') {
      d = (TNodeList_ETrigger___ *)__builtin_new(8);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      (d->field0_0x0).m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      (d->field0_0x0).m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
      this->m_pTriggerList = d;
      __rs__H1ZP8ETrigger_R7EStreamRt9TNodeList1ZX01_R7EStream(s,d);
    }
  }
  SetupModel__16EIStaticSubModel(this);
  return;
}

void EIStaticSubModel::GetBoundSphere(EBoundSphere &boundSphereOut) {
	EBoundSphere *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&(this->m_boundSphere).vCenter.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_boundsphere.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_boundSphere & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_boundSphere - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_boundSphere).vCenter.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(boundSphereOut->vCenter).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)boundSphereOut & 7;
  *(ulong *)((int)boundSphereOut - uVar2) =
       uVar6 << uVar2 * 8 |
       *(ulong *)((int)boundSphereOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (boundSphereOut->vCenter).field0_0x0.d[2] = fVar4;
  boundSphereOut->radius = (this->m_boundSphere).radius;
  return;
}

void EIStaticSubModel::DeallocateModel() {
  EOrderTableData *pAddress;
  
  if (this->m_pModel == (ERModel *)0x0) {
    pAddress = this->m_otds;
  }
  else {
    DelRef__9EResource(&this->m_pModel->field0_0x0);
    this->m_pModel = (ERModel *)0x0;
    pAddress = this->m_otds;
  }
  if (pAddress != (EOrderTableData *)0x0) {
    _memmanFree__FPv(pAddress);
    this->m_otds = (EOrderTableData *)0x0;
  }
  return;
}

void EIStaticSubModel::SetupModel() {
	ESubModel *pSubModel;
	unsigned int index;
	TArray<ESubModelShader> *this;
	EArray *this;
	int cShader;
	EOrderTableData *potd;
	TArray<ESubModelShader> *this;
	int index;
	
  ERModel *pEVar1;
  EOrderTableData *pEVar2;
  EMat4 *pEVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  DeallocateModel__16EIStaticSubModel(this);
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar1 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei
                     (&_modelman.field0_0x0,this->m_modelId,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pModel = pEVar1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  piVar8 = (int *)((int)(pEVar1->m_subModels).field0_0x0.m_p + this->m_nSubModel * 0x18);
  iVar5 = piVar8[1];
                    /* end of inlined section */
  pEVar2 = (EOrderTableData *)_memmanAlloc__FUiUi(iVar5 * 0x30,4);
  this->m_otds = pEVar2;
  if (0 < iVar5) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      pEVar2 = this->m_otds;
      iVar5 = iVar5 + -1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      iVar4 = *piVar8 + iVar7;
                    /* end of inlined section */
      *(EBoundSphere **)((int)&pEVar2->pvPos + iVar6) = &this->m_boundSphere;
      *(code **)((int)&pEVar2->pfnCallback + iVar6) =
           OrderTableCallback__16EIStaticSubModelP3ERCUiUi;
      iVar7 = iVar7 + 0x4c;
      *(int *)((int)&pEVar2->callbackParam1 + iVar6) = iVar4;
      *(undefined4 *)((int)&pEVar2->pShader + iVar6) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x14);
      pEVar3 = GetScaleMatrix__7ERModel(this->m_pModel);
      *(EMat4 **)((int)&pEVar2->pmOrient + iVar6) = pEVar3;
      *(undefined4 *)((int)&pEVar2->pLights + iVar6) = 0;
      iVar6 = iVar6 + 0x30;
    } while (iVar5 != 0);
  }
  return;
}

u32 EIStaticSubModel::VisibilityTest(EPortalWindow &win, u32 parentVis) {
	u32 visFlags;
	EVec3 vCorners[8];
	EInstance *this;
	
  bool bVar1;
  uint parentVis_00;
  int iVar2;
  EVec3 vCorners [8];
  
  parentVis_00 = Test__13EPortalWindowRC12EBoundSphereUi(win,&this->m_boundSphere,parentVis);
  if ((parentVis_00 & 0x15) != 0) {
                    /* end of inlined section */
    iVar2 = 6;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
                    /* end of inlined section */
    GetCorners__C7EBound3P5EVec3(&(this->field0_0x0).m_otd.m_bPos,vCorners);
    parentVis_00 = Test__13EPortalWindowPC5EVec3iUi(win,vCorners,8,parentVis_00);
  }
  return parentVis_00;
}

void EIStaticSubModel::Draw(ERC *prc, u32 renderFlags) {
	EIHWPointLight *pHwPointLight;
	ESubModel *pSubModel;
	EInstance *pInstance;
	unsigned int index;
	TArray<ESubModelShader> *this;
	EArray *this;
	int cShader;
	
  undefined1 *puVar1;
  EStorable *pEVar2;
  EOrderTableData *pEVar3;
  ESubModel *this_00;
  int iVar4;
  int iVar5;
  
  pEVar2 = (EStorable *)0x0;
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
                    /* end of inlined section */
  if (((this->field0_0x0).m_nReceivingPointLights != 0) &&
     (puVar1 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                         ((undefined1 *)
                          (this->field0_0x0).m_otd.m_overlaps.field0_0x0.m_list.m_pHead,
                          &(this->field0_0x0).m_otd,0x4000), puVar1 != (undefined1 *)0x0)) {
                    /* end of inlined section */
    pEVar2 = DynamicCast__9EStorableP9ETypeInfo
                       (*(EStorable **)(puVar1 + 0x18),&_14EIHWPointLight_m_typeInfo);
  }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  this_00 = (ESubModel *)
            ((int)(this->m_pModel->m_subModels).field0_0x0.m_p + this->m_nSubModel * 0x18);
  if ((renderFlags & 4) == 0) {
    Draw__9ESubModelP3ERCUi(this_00,prc,renderFlags);
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    iVar4 = (this_00->m_subModelShaders).field0_0x0.m_size;
                    /* end of inlined section */
    if (0 < iVar4) {
      iVar5 = 0;
      pEVar3 = this->m_otds;
      while( true ) {
        iVar4 = iVar4 + -1;
        pEVar3 = (EOrderTableData *)((int)&pEVar3->sortMode + iVar5);
        pEVar3->renderFlags = renderFlags;
        pEVar3->callbackParam2 = (uint)pEVar2;
        iVar5 = iVar5 + 0x30;
        InsertInOrderTable__7ERLevelR15EOrderTableData((this->field0_0x0).m_pLevel,pEVar3);
        if (iVar4 == 0) break;
        pEVar3 = this->m_otds;
      }
    }
  }
  return;
}

void EIStaticSubModel::DrawWireFrame(ERC *prc, u32 renderFlags) {
	unsigned int index;
	
  ERC__vtable *pEVar1;
  
  if ((renderFlags & 1) == 0) {
    (*(code *)prc->__vtable->EndCommand)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
    pEVar1 = prc->__vtable;
  }
  else {
    (*(code *)prc->__vtable->NewEntry)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,1);
    pEVar1 = prc->__vtable;
  }
  (*(code *)pEVar1->ZTest)((int)&prc->m_pdl + (int)*(short *)&pEVar1->RecalcMatrices);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  DrawWireFrame__9ESubModelP3ERC
            ((ESubModel *)
             ((int)(this->m_pModel->m_subModels).field0_0x0.m_p + this->m_nSubModel * 0x18),prc);
  return;
}

void EIStaticSubModel::OrderTableCallback(ERC *prc, u32 param1, u32 param2) {
  if (param2 != 0) {
    (*(code *)prc->__vtable->NewEntry)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,0x10);
    (*(code *)prc->__vtable[1].PointList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].LineStrip,
               *(undefined4 *)(param2 + 0xc0));
  }
  DrawGeometry__15ESubModelShaderP3ERC((ESubModelShader *)param1,prc);
  if (param2 != 0) {
    (*(code *)prc->__vtable->EndCommand)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,0x10);
  }
  return;
}

bool EIStaticSubModel::CollidePointWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, u32 type, bool testOnly, EInstance *pInst) {
	float scaler;
	EVec3 vModelStart;
	EVec3 vModelEnd;
	float tmult;
	bool collided;
	EVec3 vUseEnd;
	ESubModel *pSubModel;
	EVec3 *this;
	EVec3 *this;
	unsigned int index;
	int cShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	ESubModelShader *pSubModelShader;
	TArray<ESubModelShader> *this;
	int index;
	EVec3 *this;
	float scaler;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  EVec3 vModelStart;
  EVec3 vModelEnd;
  EVec3 vUseEnd;
  uint local_c0;
  
  fVar13 = 1.0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar11 = 0;
  bVar5 = false;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar14 = this->m_pModel->m_scaler;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar12 = 1.0 / fVar14;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUseEnd.field0_0x0.d[2] = (vEnd->field0_0x0).d[2] * fVar12;
  vModelStart.field0_0x0.d[0] = (vStart->field0_0x0).d[0] * fVar12;
  vModelStart.field0_0x0.d[1] = (vStart->field0_0x0).d[1] * fVar12;
  vModelStart.field0_0x0.d[2] = (vStart->field0_0x0).d[2] * fVar12;
  vUseEnd.field0_0x0._0_8_ =
       CONCAT44((vEnd->field0_0x0).d[1] * fVar12,(vEnd->field0_0x0).d[0] * fVar12);
  piVar9 = (int *)((int)(this->m_pModel->m_subModels).field0_0x0.m_p + this->m_nSubModel * 0x18);
  uVar8 = (ulong)piVar9[1];
                    /* end of inlined section */
  if (0 < (long)uVar8) {
    iVar10 = 0;
    local_c0 = type;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      iVar7 = *piVar9;
                    /* end of inlined section */
      if ((local_c0 != 0x20) ||
         (bVar6 = IsCollideable__15ESubModelShader((ESubModelShader *)(iVar7 + iVar10)), bVar6)) {
        bVar6 = CollidePoint__15ESubModelShaderR14ECollisionInfoRC5EVec3T2b
                          ((ESubModelShader *)(iVar7 + iVar10),ciOut,&vModelStart,&vUseEnd,testOnly)
        ;
        if (bVar6) {
          if (testOnly) {
            return true;
          }
          fVar12 = ciOut->t;
          bVar5 = true;
          puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)&ciOut->vPos & 7;
          uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                  uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                  *(ulong *)((int)&ciOut->vPos - uVar3) >> uVar3 * 8;
          vUseEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
          puVar1 = (undefined *)((int)&vUseEnd.field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar2);
          *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
          fVar13 = fVar13 * fVar12;
          vUseEnd.field0_0x0._0_8_ = uVar8;
          goto LAB_0030a06c;
        }
        iVar7 = piVar9[1];
      }
      else {
LAB_0030a06c:
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        iVar7 = piVar9[1];
      }
                    /* end of inlined section */
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x4c;
    } while (iVar11 < iVar7);
  }
  if (bVar5) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    ciOut->t = ciOut->t * fVar13;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    (ciOut->vPos).field0_0x0.d[0] = (ciOut->vPos).field0_0x0.d[0] * fVar14;
    fVar13 = (ciOut->vPos).field0_0x0.d[2];
    (ciOut->vPos).field0_0x0.d[1] = (ciOut->vPos).field0_0x0.d[1] * fVar14;
    (ciOut->vPos).field0_0x0.d[2] = fVar13 * fVar14;
                    /* end of inlined section */
    ciOut->pInst = &this->field0_0x0;
  }
  return bVar5;
}

bool EIStaticSubModel::CollideSphereWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius, u32 type, EInstance *pInst) {
	float scaler;
	EVec3 vModelStart;
	EVec3 vModelEnd;
	float modelRadius;
	float tmult;
	bool collided;
	EVec3 vUseEnd;
	ESubModel *pSubModel;
	EVec3 *this;
	EVec3 *this;
	unsigned int index;
	int cShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	ESubModelShader *pSubModelShader;
	TArray<ESubModelShader> *this;
	int index;
	EVec3 *this;
	float scaler;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  EVec3 vModelStart;
  EVec3 vModelEnd;
  EVec3 vUseEnd;
  
  fVar13 = 1.0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar10 = 0;
  bVar5 = false;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar14 = this->m_pModel->m_scaler;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar11 = 1.0 / fVar14;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUseEnd.field0_0x0.d[2] = (vEnd->field0_0x0).d[2] * fVar11;
  vModelStart.field0_0x0.d[0] = (vStart->field0_0x0).d[0] * fVar11;
  vModelStart.field0_0x0.d[1] = (vStart->field0_0x0).d[1] * fVar11;
  vUseEnd.field0_0x0._0_8_ =
       CONCAT44((vEnd->field0_0x0).d[1] * fVar11,(vEnd->field0_0x0).d[0] * fVar11);
  vModelStart.field0_0x0.d[2] = (vStart->field0_0x0).d[2] * fVar11;
  piVar8 = (int *)((int)(this->m_pModel->m_subModels).field0_0x0.m_p + this->m_nSubModel * 0x18);
                    /* end of inlined section */
  if (0 < piVar8[1]) {
    iVar9 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      iVar7 = *piVar8;
                    /* end of inlined section */
      if ((type != 0x20) ||
         (bVar6 = IsCollideable__15ESubModelShader((ESubModelShader *)(iVar7 + iVar9)), bVar6)) {
        bVar6 = CollideSphere__15ESubModelShaderR14ECollisionInfoRC5EVec3T2f
                          ((ESubModelShader *)(iVar7 + iVar9),ciOut,&vModelStart,&vUseEnd,
                           radius * fVar11);
        if ((long)bVar6 == 0) {
          iVar7 = piVar8[1];
        }
        else {
          fVar12 = ciOut->t;
          bVar5 = true;
          puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)&ciOut->vPos & 7;
          vUseEnd.field0_0x0._0_8_ =
               (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
               (long)bVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)&ciOut->vPos - uVar3) >> uVar3 * 8;
          vUseEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
          puVar1 = (undefined *)((int)&vUseEnd.field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar2);
          *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 |
                    (ulong)vUseEnd.field0_0x0._0_8_ >> (7 - uVar2) * 8;
          fVar13 = fVar13 * fVar12;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
          iVar7 = piVar8[1];
        }
      }
      else {
        iVar7 = piVar8[1];
      }
                    /* end of inlined section */
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x4c;
    } while (iVar10 < iVar7);
  }
  if (bVar5) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    ciOut->t = ciOut->t * fVar13;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    (ciOut->vPos).field0_0x0.d[0] = (ciOut->vPos).field0_0x0.d[0] * fVar14;
    fVar13 = (ciOut->vPos).field0_0x0.d[2];
    (ciOut->vPos).field0_0x0.d[1] = (ciOut->vPos).field0_0x0.d[1] * fVar14;
    (ciOut->vPos).field0_0x0.d[2] = fVar13 * fVar14;
                    /* end of inlined section */
    ciOut->pInst = &this->field0_0x0;
  }
  return bVar5;
}

int EIStaticSubModel::CollideTest(EBound3 &b, u32 type) {
	int count;
	ESubModel *pSubModel;
	unsigned int index;
	int cShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	ESubModelShader *pSubModelShader;
	TArray<ESubModelShader> *this;
	int index;
	
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar6 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  piVar3 = (int *)((int)(this->m_pModel->m_subModels).field0_0x0.m_p + this->m_nSubModel * 0x18);
                    /* end of inlined section */
  iVar4 = 0;
  if (0 < piVar3[1]) {
    iVar5 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      iVar2 = *piVar3;
                    /* end of inlined section */
      if ((type != 0x20) ||
         (bVar1 = IsCollideable__15ESubModelShader((ESubModelShader *)(iVar2 + iVar5)), bVar1)) {
        iVar2 = CollideTest__15ESubModelShaderRC7EBound3((ESubModelShader *)(iVar2 + iVar5),b);
        iVar4 = iVar4 + iVar2;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        iVar2 = piVar3[1];
      }
      else {
        iVar2 = piVar3[1];
      }
                    /* end of inlined section */
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x4c;
    } while (iVar6 < iVar2);
  }
  return iVar4;
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
                    /* inlined from c:/eor/src2/engine/instance/e_istaticsubmodel.h */
    gpTypeInfo_EIStaticSubModel =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_16EIStaticSubModel_m_typeInfo,New__16EIStaticSubModel,0,"EIStaticSubModel",
                    &_9EInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

EIStaticSubModel* EIStaticSubModel::New() {
  EIStaticSubModel *pEVar1;
  
  pEVar1 = (EIStaticSubModel *)__nw__16EIStaticSubModelUi(0xa8);
  pEVar1 = __16EIStaticSubModel(pEVar1);
  return pEVar1;
}

void EIStaticSubModel::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIStaticSubModel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar1[1].GetTypeName
               ,3);
  }
  return;
}

ETypeInfo* EIStaticSubModel::GetTypeInfo() {
  return &_16EIStaticSubModel_m_typeInfo;
}

char* EIStaticSubModel::GetTypeName() {
  return _16EIStaticSubModel_m_typeInfo.m_name;
}

u32 EIStaticSubModel::GetTypeKey() {
  return _16EIStaticSubModel_m_typeInfo.m_key;
}

u16 EIStaticSubModel::GetTypeVersion() {
  return _16EIStaticSubModel_m_typeInfo.m_version;
}

u16 EIStaticSubModel::GetReadVersion() {
  return _16EIStaticSubModel_m_typeInfo.m_readVersion;
}

ETypeInfo* EIStaticSubModel::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_16EIStaticSubModel_m_typeInfo,New__16EIStaticSubModel,version,
                      "EIStaticSubModel",&_9EInstance_m_typeInfo);
  return pEVar1;
}

EIStaticSubModel* EIStaticSubModel::CreateCopy() {
  EIStaticSubModel *pEVar1;
  
  pEVar1 = (EIStaticSubModel *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EIStaticSubModel::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0xa8,9);
  return pvVar1;
}

void* EIStaticSubModel::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EIStaticSubModel::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0xa8,9);
  return;
}

ETriggerList* EIStaticSubModel::GetTriggerList() {
  return this->m_pTriggerList;
}

void global constructors keyed to gpTypeInfo_EIStaticSubModel() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
