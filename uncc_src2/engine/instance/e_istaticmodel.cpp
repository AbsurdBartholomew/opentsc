// STATUS: NOT STARTED

#include "e_istaticmodel.h"

ETypeInfo *gpTypeInfo_EIStaticModel = NULL;

__vtbl_ptr_type EIStaticModel virtual table[26] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::SafeDelete,
		/* .__delta2 = */ -20928
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetTypeInfo,
		/* .__delta2 = */ -20872
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetTypeName,
		/* .__delta2 = */ -20856
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetTypeKey,
		/* .__delta2 = */ -20840
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetTypeVersion,
		/* .__delta2 = */ -20824
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::~EIStaticModel,
		/* .__delta2 = */ -25304
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Read,
		/* .__delta2 = */ -25112
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Write,
		/* .__delta2 = */ -25208
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
		/* .__pfn = */ &EIStaticModel::VisibilityTest,
		/* .__delta2 = */ -23936
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Draw,
		/* .__delta2 = */ -23776
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
		/* .__pfn = */ &EIStaticModel::SetOrient,
		/* .__delta2 = */ -24728
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
		/* .__pfn = */ &EIStaticModel::CollidePointWithInstance,
		/* .__delta2 = */ -23320
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollideSphereWithInstance,
		/* .__delta2 = */ -22192
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
		/* .__pfn = */ &EIStaticModel::GetBoundSphere,
		/* .__delta2 = */ -25000
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
		/* .__pfn = */ &EIStaticModel::GetDrawMatrix,
		/* .__delta2 = */ -23368
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EIStaticModel::m_typeInfo;

EStream& operator<<(EStream &s, EIStaticModel *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIStaticModel *&pD) {
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
  *pD = (EIStaticModel *)pStorable;
  return s;
}

EIStaticModel* EIStaticModel::EIStaticModel() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
  __9EInstance(&this->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_13EIStaticModel;
  this->m_modelId = 0;
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
  uVar2 = (this->field0_0x0).m_instanceFlags;
  this->m_pModel = (ERModel *)0x0;
  this->m_otds = (EOrderTableData *)0x0;
  *(undefined4 *)&this->m_dynamiclyLit = 0;
  (this->field0_0x0).m_instanceFlags = uVar2 | 0x200;
  Id__5EMat4(&this->m_mOrient);
  Id__5EMat4(&this->m_mInvOrient);
  SetOverlapReceiveFlags__9EInstanceUi(&this->field0_0x0,0x118);
  return this;
}

void EIStaticModel::~EIStaticModel(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_13EIStaticModel;
  DeallocateModel__13EIStaticModel(this);
  ___9EInstance(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/instance/e_istaticmodel.h */
    _allocBucketFree__FPvUiUi(this,0x130,0x27);
  }
                    /* end of inlined section */
  return;
}

void EIStaticModel::Write(EStream &s) {
	EStream &s;
	unsigned int d;
	
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
  Write__9EInstanceR7EStream(&this->field0_0x0,s);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  d = this->m_modelId;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&d,4);
                    /* end of inlined section */
  __ls__FR7EStreamRC5EMat4(s,&this->m_mOrient);
  return;
}

void EIStaticModel::Read(EStream &s) {
	EStream &s;
	
  Read__9EInstanceR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/instance/e_istaticmodel.h */
                    /* end of inlined section */
  if (_13EIStaticModel_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_modelId,4);
                    /* end of inlined section */
    __rs__FR7EStreamR5EMat4(s,&this->m_mOrient);
  }
  Setup__13EIStaticModel(this);
  return;
}

void EIStaticModel::GetBoundSphere(EBoundSphere &boundSphereOut) {
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

void EIStaticModel::Setup() {
  Invert__5EMat4RC5EMat4(&this->m_mInvOrient,&this->m_mOrient);
  SetupModel__13EIStaticModel(this);
  SetupBounds__13EIStaticModel(this);
  return;
}

void EIStaticModel::DeallocateModel() {
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

void EIStaticModel::SetModel(u32 modelId) {
  this->m_modelId = modelId;
  Setup__13EIStaticModel(this);
  return;
}

void EIStaticModel::SetModel(char *szName) {
  uint modelId;
  
  modelId = CalcId__16EResourceManagerPCc(szName);
  SetModel__13EIStaticModelUi(this,modelId);
  return;
}

void EIStaticModel::SetOrient(EMat4 &mOrient) {
  EMat4 *this_00;
  float scale;
  
  this_00 = &this->m_mOrient;
  __as__5EMat4RC5EMat4(this_00,mOrient);
  scale = 1.0;
  if (this->m_pModel != (ERModel *)0x0) {
    scale = this->m_pModel->m_scaler;
  }
  if (scale != 1.0) {
    PreScale__5EMat4f(this_00,scale);
  }
  Invert__5EMat4RC5EMat4(&this->m_mInvOrient,this_00);
  SetupBounds__13EIStaticModel(this);
  return;
}

void EIStaticModel::GetOrient(EMat4 &mOrientOut) {
  float fVar1;
  
  __as__5EMat4RC5EMat4(mOrientOut,&this->m_mOrient);
  fVar1 = 1.0;
  if (this->m_pModel != (ERModel *)0x0) {
    fVar1 = this->m_pModel->m_scaler;
  }
  if (fVar1 != 1.0) {
    PreScale__5EMat4f(mOrientOut,1.0 / fVar1);
  }
  return;
}

void EIStaticModel::SetupModel() {
	EOrderTableData *potd;
	int cSubModel;
	int index;
	int cSubModelShader;
	int index;
	
  int iVar1;
  ERModel *pEVar2;
  int iVar3;
  EOrderTableData *pEVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  pEVar2 = this->m_pModel;
  if (pEVar2 == (ERModel *)0x0) {
    fVar10 = 1.0;
  }
  else {
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
                    /* end of inlined section */
    if ((pEVar2->field0_0x0).m_resId == this->m_modelId) {
      return;
    }
    fVar10 = pEVar2->m_scaler;
  }
  DeallocateModel__13EIStaticModel(this);
  if (this->m_modelId != 0) {
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar2 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_modelman.field0_0x0,this->m_modelId,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pModel = pEVar2;
    iVar3 = GetShaderCount__7ERModel(pEVar2);
    pEVar4 = (EOrderTableData *)_memmanAlloc__FUiUi(iVar3 * 0x30,4);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
    this->m_otds = pEVar4;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
    iVar3 = 0;
    if (0 < (this->m_pModel->m_subModels).field0_0x0.m_size) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      pEVar2 = this->m_pModel;
      iVar7 = 0;
      do {
        iVar3 = iVar3 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        piVar6 = (int *)((int)(pEVar2->m_subModels).field0_0x0.m_p + iVar7);
                    /* end of inlined section */
        iVar7 = 0;
        if (0 < piVar6[1]) {
          iVar8 = 0;
          do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
            iVar1 = *piVar6;
                    /* end of inlined section */
            iVar7 = iVar7 + 1;
            pEVar4->pvPos = &(this->m_boundSphere).vCenter;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
            uVar5 = iVar1 + iVar8;
                    /* end of inlined section */
            pEVar4->pfnCallback = OrderTableCallback__13EIStaticModelP3ERCUiUi;
            pEVar4->callbackParam1 = uVar5;
            iVar8 = iVar8 + 0x4c;
            pEVar4->pShader = *(EShader **)(*(int *)(uVar5 + 4) + 0x14);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
            pEVar4 = pEVar4 + 1;
          } while (iVar7 < piVar6[1]);
        }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        pEVar2 = this->m_pModel;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
        iVar7 = iVar3 * 0x18;
      } while (iVar3 < (pEVar2->m_subModels).field0_0x0.m_size);
    }
  }
  fVar9 = 1.0;
  if (this->m_pModel != (ERModel *)0x0) {
    fVar9 = this->m_pModel->m_scaler;
  }
  if (fVar9 != fVar10) {
    PreScale__5EMat4f(&this->m_mOrient,fVar9 / fVar10);
    Invert__5EMat4RC5EMat4(&this->m_mInvOrient,&this->m_mOrient);
  }
  return;
}

void EIStaticModel::SetupBounds() {
	EBound3 b;
	ERModel *this;
	
  undefined *puVar1;
  uint uVar2;
  ERModel *pEVar3;
  uint uVar4;
  ulong *puVar5;
  EBound3 b;
  
  if (this->m_pModel != (ERModel *)0x0) {
    CalcOrientedBoundSphere__7ERModelRC5EMat4R12EBoundSphere
              (this->m_pModel,&this->m_mOrient,&this->m_boundSphere);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    pEVar3 = this->m_pModel;
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
    uVar4 = (uint)&b.vMax & 7;
    puVar5 = (ulong *)((int)&b.vMax - uVar4);
    *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    b.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar2 = (uint)&b.vMax & 7;
    b.vMin.field0_0x0._0_8_ =
         *(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar2) * 8 |
         *(ulong *)((int)&b.vMax - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
    b.vMin.field0_0x0.d[2] = 0.0;
    Compute__7EBound3RC7EBound3RC5EMat4(&b,&pEVar3->m_boundBox,&this->m_mOrient);
                    /* end of inlined section */
    SetBounds__9EInstanceRC7EBound3(&this->field0_0x0,&b);
  }
  return;
}

u32 EIStaticModel::VisibilityTest(EPortalWindow &win, u32 parentVis) {
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

void EIStaticModel::Draw(ERC *prc, u32 renderFlags) {
	EMat4 *pmOrient;
	ELights *pLights;
	int nLights;
	EOrderTableData *potd;
	ERC *this;
	int cSubModel;
	int index;
	int cSubModelShader;
	
  EStorable__vtable *pEVar1;
  int iVar2;
  ELights *pEVar3;
  ERModel *pEVar4;
  undefined8 uVar5;
  EOrderTableData *pEVar6;
  EOrderTableData *otd;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (this->m_pModel != (ERModel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    uVar5 = (*(code *)pEVar1[5].GetTypeKey)
                      ((int)((this->field0_0x0).m_otd.m_minPos + -7) +
                       (int)*(short *)&pEVar1[5].GetTypeName);
    if ((renderFlags & 4) == 0) {
      (*(code *)prc->__vtable->SetMipMap)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,uVar5);
      Draw__7ERModelP3ERCUi(this->m_pModel,prc,renderFlags);
    }
    else {
      if ((*(int *)&this->m_dynamiclyLit == 0) || ((renderFlags & 8) != 0)) {
        pEVar3 = (ELights *)0x0;
        iVar9 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        pEVar4 = this->m_pModel;
      }
      else {
                    /* inlined from e_rc.h */
        iVar9 = 3;
        pEVar3 = (ELights *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x70,0x10);
                    /* end of inlined section */
        pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from e_dl.h */
                    /* end of inlined section */
        (*(code *)pEVar1[4].GetTypeName)
                  ((int)((this->field0_0x0).m_otd.m_minPos + -7) +
                   (int)*(short *)&pEVar1[4].GetTypeInfo,&this->m_boundSphere,pEVar3);
        pEVar4 = this->m_pModel;
      }
                    /* end of inlined section */
      iVar8 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      iVar2 = (pEVar4->m_subModels).field0_0x0.m_size;
                    /* end of inlined section */
      pEVar6 = this->m_otds;
      if (0 < iVar2) {
        do {
          iVar7 = *(int *)((int)(this->m_pModel->m_subModels).field0_0x0.m_p + iVar8 * 0x18 + 4);
                    /* end of inlined section */
          iVar8 = iVar8 + 1;
          if (0 < iVar7) {
            pEVar6->renderFlags = renderFlags;
            otd = pEVar6;
            while( true ) {
              otd->pmOrient = (EMat4 *)uVar5;
              iVar7 = iVar7 + -1;
              otd->pLights = pEVar3;
              otd->nLights = iVar9;
              pEVar6 = otd + 1;
              InsertInOrderTable__7ERLevelR15EOrderTableData((this->field0_0x0).m_pLevel,otd);
              if (iVar7 == 0) break;
              otd[1].renderFlags = renderFlags;
              otd = pEVar6;
            }
          }
        } while (iVar8 < iVar2);
      }
    }
  }
  return;
}

EMat4* EIStaticModel::GetDrawMatrix(ERC *prc) {
  return &this->m_mOrient;
}

void EIStaticModel::OrderTableCallback(ERC *prc, u32 param1, u32 param2) {
  DrawGeometry__15ESubModelShaderP3ERC((ESubModelShader *)param1,prc);
  return;
}

bool EIStaticModel::CollidePointWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, u32 type, bool testOnly, EInstance *pInst) {
	EVec3 vModelStart;
	EVec3 vModelEnd;
	float tmult;
	bool collided;
	EVec3 vUseEnd;
	EVec3 &vLeft;
	EMat4 &mRight;
	EVec3 &vLeft;
	int cSubModel;
	ESubModel *pSubModel;
	int index;
	int cShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	ESubModelShader *pSubModelShader;
	TArray<ESubModelShader> *this;
	int index;
	EVec3 &vLeft;
	EMat4 &mRight;
	EVec3 &v;
	EVec3 vR;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  int iVar6;
  ESubModelShader *this_00;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  EVec3 vModelStart;
  EVec3 vModelEnd;
  EVec3 vUseEnd;
  EVec3 vR;
  uint local_c0;
  bool collided;
  int index;
  ulong uVar7;
  
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
  fVar13 = 1.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar15 = (vStart->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar12 = (vStart->field0_0x0).d[1];
  fVar17 = (this->m_mInvOrient).field0_0x0.d[0];
                    /* end of inlined section */
  index = 0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar16 = (vStart->field0_0x0).d[2];
  fVar14 = (vEnd->field0_0x0).d[0];
  fVar18 = (vEnd->field0_0x0).d[1];
  fVar19 = (vEnd->field0_0x0).d[2];
                    /* end of inlined section */
  _collided = 0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  vModelStart.field0_0x0.d[2] =
       fVar15 * (this->m_mInvOrient).field0_0x0.d[2] +
       fVar12 * (this->m_mInvOrient).field0_0x0.d[1][2] +
       fVar16 * (this->m_mInvOrient).field0_0x0.d[2][2] + (this->m_mInvOrient).field0_0x0.d[3][2];
  vModelStart.field0_0x0.d[0] =
       fVar15 * fVar17 + fVar12 * (this->m_mInvOrient).field0_0x0.d[1][0] +
       fVar16 * (this->m_mInvOrient).field0_0x0.d[2][0] + (this->m_mInvOrient).field0_0x0.d[3][0];
  vModelStart.field0_0x0.d[1] =
       fVar15 * (this->m_mInvOrient).field0_0x0.d[1] +
       fVar12 * (this->m_mInvOrient).field0_0x0.d[1][1] +
       fVar16 * (this->m_mInvOrient).field0_0x0.d[2][1] + (this->m_mInvOrient).field0_0x0.d[3][1];
  vUseEnd.field0_0x0.d[2] =
       fVar14 * (this->m_mInvOrient).field0_0x0.d[2] +
       fVar18 * (this->m_mInvOrient).field0_0x0.d[1][2] +
       fVar19 * (this->m_mInvOrient).field0_0x0.d[2][2] + (this->m_mInvOrient).field0_0x0.d[3][2];
  vUseEnd.field0_0x0._0_8_ =
       CONCAT44(fVar14 * (this->m_mInvOrient).field0_0x0.d[1] +
                fVar18 * (this->m_mInvOrient).field0_0x0.d[1][1] +
                fVar19 * (this->m_mInvOrient).field0_0x0.d[2][1] +
                (this->m_mInvOrient).field0_0x0.d[3][1],
                fVar14 * fVar17 + fVar18 * (this->m_mInvOrient).field0_0x0.d[1][0] +
                fVar19 * (this->m_mInvOrient).field0_0x0.d[2][0] +
                (this->m_mInvOrient).field0_0x0.d[3][0]);
                    /* end of inlined section */
  if (0 < (this->m_pModel->m_subModels).field0_0x0.m_size) {
    iVar11 = 0;
    local_c0 = type;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      piVar9 = (int *)((int)(this->m_pModel->m_subModels).field0_0x0.m_p + iVar11);
                    /* end of inlined section */
      iVar8 = 0;
      if (0 < piVar9[1]) {
        iVar10 = 0;
        do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
          this_00 = (ESubModelShader *)(*piVar9 + iVar10);
          uVar7 = (ulong)(int)this_00;
                    /* end of inlined section */
          if ((local_c0 != 0x20) || (bVar5 = IsCollideable__15ESubModelShader(this_00), bVar5)) {
            bVar5 = CollidePoint__15ESubModelShaderR14ECollisionInfoRC5EVec3T2b
                              (this_00,ciOut,&vModelStart,&vUseEnd,testOnly);
            if (bVar5) {
              if (testOnly) {
                return true;
              }
              _collided = 1;
              fVar13 = fVar13 * ciOut->t;
              puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
              uVar3 = (uint)puVar1 & 7;
              uVar2 = (uint)&ciOut->vPos & 7;
              vUseEnd.field0_0x0._0_8_ =
                   (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                   uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((int)&ciOut->vPos - uVar2) >> uVar2 * 8;
              vUseEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
              puVar1 = (undefined *)((int)&vUseEnd.field0_0x0 + 7);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
                        (ulong)vUseEnd.field0_0x0._0_8_ >> (7 - uVar3) * 8;
              goto LAB_002ca708;
            }
            iVar6 = piVar9[1];
          }
          else {
LAB_002ca708:
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
            iVar6 = piVar9[1];
          }
                    /* end of inlined section */
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 0x4c;
        } while (iVar8 < iVar6);
      }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      index = index + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar11 = iVar11 + 0x18;
    } while (index < (this->m_pModel->m_subModels).field0_0x0.m_size);
  }
  if (_collided != 0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar12 = (ciOut->vPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    ciOut->t = ciOut->t * fVar13;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar16 = (ciOut->vPos).field0_0x0.d[1];
    fVar14 = (this->m_mOrient).field0_0x0.d[1][2];
    fVar13 = (this->m_mOrient).field0_0x0.d[2];
    fVar18 = (ciOut->vPos).field0_0x0.d[2];
    fVar15 = (this->m_mOrient).field0_0x0.d[2][2];
    fVar17 = (this->m_mOrient).field0_0x0.d[3][2];
                    /* end of inlined section */
    uVar7 = CONCAT44(fVar12 * (this->m_mOrient).field0_0x0.d[1] +
                     fVar16 * (this->m_mOrient).field0_0x0.d[1][1] +
                     fVar18 * (this->m_mOrient).field0_0x0.d[2][1] +
                     (this->m_mOrient).field0_0x0.d[3][1],
                     fVar12 * (this->m_mOrient).field0_0x0.d[0] +
                     fVar16 * (this->m_mOrient).field0_0x0.d[1][0] +
                     fVar18 * (this->m_mOrient).field0_0x0.d[2][0] +
                     (this->m_mOrient).field0_0x0.d[3][0]);
    puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
    uVar3 = (uint)&ciOut->vPos & 7;
    puVar4 = (ulong *)((int)&ciOut->vPos - uVar3);
    *puVar4 = uVar7 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (ciOut->vPos).field0_0x0.d[2] = fVar12 * fVar13 + fVar16 * fVar14 + fVar18 * fVar15 + fVar17;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar13 = (ciOut->vNormal).field0_0x0.d[0];
    fVar17 = (ciOut->vNormal).field0_0x0.d[1];
    fVar16 = (this->m_mOrient).field0_0x0.d[2];
    fVar14 = (this->m_mOrient).field0_0x0.d[1][2];
    fVar12 = (ciOut->vNormal).field0_0x0.d[2];
    fVar15 = (this->m_mOrient).field0_0x0.d[2][2];
                    /* end of inlined section */
    uVar7 = CONCAT44(fVar13 * (this->m_mOrient).field0_0x0.d[1] +
                     fVar17 * (this->m_mOrient).field0_0x0.d[1][1] +
                     fVar12 * (this->m_mOrient).field0_0x0.d[2][1],
                     fVar13 * (this->m_mOrient).field0_0x0.d[0] +
                     fVar17 * (this->m_mOrient).field0_0x0.d[1][0] +
                     fVar12 * (this->m_mOrient).field0_0x0.d[2][0]);
    puVar1 = (undefined *)((int)&(ciOut->vNormal).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
    uVar3 = (uint)&ciOut->vNormal & 7;
    puVar4 = (ulong *)((int)&ciOut->vNormal - uVar3);
    *puVar4 = uVar7 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (ciOut->vNormal).field0_0x0.d[2] = fVar13 * fVar16 + fVar17 * fVar14 + fVar12 * fVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar12 = (ciOut->vNormal).field0_0x0.d[0];
    fVar13 = (ciOut->vNormal).field0_0x0.d[1];
    fVar14 = (ciOut->vNormal).field0_0x0.d[2];
    fVar13 = sqrtf(fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14);
    if (fVar13 == 0.0) {
      ciOut->pInst = &this->field0_0x0;
    }
    else {
      fVar13 = 1.0 / fVar13;
      (ciOut->vNormal).field0_0x0.d[0] = (ciOut->vNormal).field0_0x0.d[0] * fVar13;
      fVar12 = (ciOut->vNormal).field0_0x0.d[2];
      (ciOut->vNormal).field0_0x0.d[1] = (ciOut->vNormal).field0_0x0.d[1] * fVar13;
      (ciOut->vNormal).field0_0x0.d[2] = fVar12 * fVar13;
                    /* end of inlined section */
      ciOut->pInst = &this->field0_0x0;
    }
  }
  return (bool)(char)_collided;
}

bool EIStaticModel::CollideSphereWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius, u32 type, EInstance *pInst) {
	EVec3 vModelStart;
	EVec3 vModelEnd;
	float modelRadius;
	float tmult;
	bool collided;
	EVec3 vUseEnd;
	EVec3 &vLeft;
	EMat4 &mRight;
	EVec3 &vLeft;
	int cSubModel;
	ESubModel *pSubModel;
	int index;
	int cShader;
	TArray<ESubModelShader> *this;
	EArray *this;
	ESubModelShader *pSubModelShader;
	TArray<ESubModelShader> *this;
	int index;
	EVec3 &vLeft;
	EMat4 &mRight;
	EVec3 &v;
	EVec3 vR;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  int iVar6;
  ERModel *pEVar7;
  ESubModelShader *this_00;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  EVec3 vModelStart;
  EVec3 vModelEnd;
  EVec3 vUseEnd;
  EVec3 vR;
  bool collided;
  ulong uVar8;
  
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
  fVar14 = 1.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar16 = (vStart->field0_0x0).d[0];
  fVar13 = (vStart->field0_0x0).d[1];
  fVar21 = (this->m_mInvOrient).field0_0x0.d[0];
  fVar20 = (vStart->field0_0x0).d[2];
  fVar15 = (vEnd->field0_0x0).d[0];
  fVar22 = (vEnd->field0_0x0).d[1];
  fVar25 = (vEnd->field0_0x0).d[2];
                    /* end of inlined section */
  _collided = 0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  vModelStart.field0_0x0.d[2] =
       fVar16 * (this->m_mInvOrient).field0_0x0.d[2] +
       fVar13 * (this->m_mInvOrient).field0_0x0.d[1][2] +
       fVar20 * (this->m_mInvOrient).field0_0x0.d[2][2] + (this->m_mInvOrient).field0_0x0.d[3][2];
  vModelStart.field0_0x0.d[0] =
       fVar16 * fVar21 + fVar13 * (this->m_mInvOrient).field0_0x0.d[1][0] +
       fVar20 * (this->m_mInvOrient).field0_0x0.d[2][0] + (this->m_mInvOrient).field0_0x0.d[3][0];
  vModelStart.field0_0x0.d[1] =
       fVar16 * (this->m_mInvOrient).field0_0x0.d[1] +
       fVar13 * (this->m_mInvOrient).field0_0x0.d[1][1] +
       fVar20 * (this->m_mInvOrient).field0_0x0.d[2][1] + (this->m_mInvOrient).field0_0x0.d[3][1];
  fVar13 = (this->m_mInvOrient).field0_0x0.d[1][0];
  fVar16 = (this->m_mInvOrient).field0_0x0.d[1];
  fVar19 = (this->m_mInvOrient).field0_0x0.d[1][1];
  fVar18 = (this->m_mInvOrient).field0_0x0.d[2][0];
  fVar17 = (this->m_mInvOrient).field0_0x0.d[2][1];
  fVar24 = (this->m_mInvOrient).field0_0x0.d[3][0];
  fVar23 = (this->m_mInvOrient).field0_0x0.d[3][1];
  vUseEnd.field0_0x0.d[2] =
       fVar15 * (this->m_mInvOrient).field0_0x0.d[2] +
       fVar22 * (this->m_mInvOrient).field0_0x0.d[1][2] +
       fVar25 * (this->m_mInvOrient).field0_0x0.d[2][2] + (this->m_mInvOrient).field0_0x0.d[3][2];
                    /* end of inlined section */
  fVar20 = GetMaxScale__C5EMat4(&this->m_mInvOrient);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUseEnd.field0_0x0._0_8_ =
       CONCAT44(fVar15 * fVar16 + fVar22 * fVar19 + fVar25 * fVar17 + fVar23,
                fVar15 * fVar21 + fVar22 * fVar13 + fVar25 * fVar18 + fVar24);
                    /* end of inlined section */
  iVar12 = 0;
  if (0 < (this->m_pModel->m_subModels).field0_0x0.m_size) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    pEVar7 = this->m_pModel;
    do {
      iVar9 = iVar12 * 0x18;
                    /* end of inlined section */
      iVar12 = iVar12 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      piVar10 = (int *)((int)(pEVar7->m_subModels).field0_0x0.m_p + iVar9);
                    /* end of inlined section */
      iVar9 = 0;
      if (0 < piVar10[1]) {
        iVar11 = 0;
        do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
          this_00 = (ESubModelShader *)(*piVar10 + iVar11);
          uVar8 = (ulong)(int)this_00;
          if ((type != 0x20) || (bVar5 = IsCollideable__15ESubModelShader(this_00), bVar5)) {
            bVar5 = CollideSphere__15ESubModelShaderR14ECollisionInfoRC5EVec3T2f
                              (this_00,ciOut,&vModelStart,&vUseEnd,radius * fVar20);
            if (bVar5) {
              _collided = 1;
              fVar14 = fVar14 * ciOut->t;
              puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
              uVar3 = (uint)puVar1 & 7;
              uVar2 = (uint)&ciOut->vPos & 7;
              vUseEnd.field0_0x0._0_8_ =
                   (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                   uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((int)&ciOut->vPos - uVar2) >> uVar2 * 8;
              vUseEnd.field0_0x0.d[2] = (ciOut->vPos).field0_0x0.d[2];
              puVar1 = (undefined *)((int)&vUseEnd.field0_0x0 + 7);
              uVar3 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar3);
              *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
                        (ulong)vUseEnd.field0_0x0._0_8_ >> (7 - uVar3) * 8;
            }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
            iVar6 = piVar10[1];
          }
          else {
            iVar6 = piVar10[1];
          }
                    /* end of inlined section */
          iVar9 = iVar9 + 1;
          iVar11 = iVar11 + 0x4c;
        } while (iVar9 < iVar6);
      }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      pEVar7 = this->m_pModel;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
    } while (iVar12 < (pEVar7->m_subModels).field0_0x0.m_size);
  }
  if (_collided != 0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar13 = (ciOut->vPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    ciOut->t = ciOut->t * fVar14;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar15 = (ciOut->vPos).field0_0x0.d[1];
    fVar16 = (this->m_mOrient).field0_0x0.d[1][2];
    fVar14 = (this->m_mOrient).field0_0x0.d[2];
    fVar18 = (ciOut->vPos).field0_0x0.d[2];
    fVar20 = (this->m_mOrient).field0_0x0.d[2][2];
    fVar17 = (this->m_mOrient).field0_0x0.d[3][2];
                    /* end of inlined section */
    uVar8 = CONCAT44(fVar13 * (this->m_mOrient).field0_0x0.d[1] +
                     fVar15 * (this->m_mOrient).field0_0x0.d[1][1] +
                     fVar18 * (this->m_mOrient).field0_0x0.d[2][1] +
                     (this->m_mOrient).field0_0x0.d[3][1],
                     fVar13 * (this->m_mOrient).field0_0x0.d[0] +
                     fVar15 * (this->m_mOrient).field0_0x0.d[1][0] +
                     fVar18 * (this->m_mOrient).field0_0x0.d[2][0] +
                     (this->m_mOrient).field0_0x0.d[3][0]);
    puVar1 = (undefined *)((int)&(ciOut->vPos).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
    uVar3 = (uint)&ciOut->vPos & 7;
    puVar4 = (ulong *)((int)&ciOut->vPos - uVar3);
    *puVar4 = uVar8 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (ciOut->vPos).field0_0x0.d[2] = fVar13 * fVar14 + fVar15 * fVar16 + fVar18 * fVar20 + fVar17;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar14 = (ciOut->vNormal).field0_0x0.d[0];
    fVar17 = (ciOut->vNormal).field0_0x0.d[1];
    fVar15 = (this->m_mOrient).field0_0x0.d[2];
    fVar16 = (this->m_mOrient).field0_0x0.d[1][2];
    fVar13 = (ciOut->vNormal).field0_0x0.d[2];
    fVar20 = (this->m_mOrient).field0_0x0.d[2][2];
                    /* end of inlined section */
    uVar8 = CONCAT44(fVar14 * (this->m_mOrient).field0_0x0.d[1] +
                     fVar17 * (this->m_mOrient).field0_0x0.d[1][1] +
                     fVar13 * (this->m_mOrient).field0_0x0.d[2][1],
                     fVar14 * (this->m_mOrient).field0_0x0.d[0] +
                     fVar17 * (this->m_mOrient).field0_0x0.d[1][0] +
                     fVar13 * (this->m_mOrient).field0_0x0.d[2][0]);
    puVar1 = (undefined *)((int)&(ciOut->vNormal).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
    uVar3 = (uint)&ciOut->vNormal & 7;
    puVar4 = (ulong *)((int)&ciOut->vNormal - uVar3);
    *puVar4 = uVar8 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (ciOut->vNormal).field0_0x0.d[2] = fVar14 * fVar15 + fVar17 * fVar16 + fVar13 * fVar20;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar13 = (ciOut->vNormal).field0_0x0.d[0];
    fVar14 = (ciOut->vNormal).field0_0x0.d[1];
    fVar16 = (ciOut->vNormal).field0_0x0.d[2];
    fVar14 = sqrtf(fVar13 * fVar13 + fVar14 * fVar14 + fVar16 * fVar16);
    if (fVar14 == 0.0) {
      ciOut->pInst = &this->field0_0x0;
    }
    else {
      fVar14 = 1.0 / fVar14;
      (ciOut->vNormal).field0_0x0.d[0] = (ciOut->vNormal).field0_0x0.d[0] * fVar14;
      fVar13 = (ciOut->vNormal).field0_0x0.d[2];
      (ciOut->vNormal).field0_0x0.d[1] = (ciOut->vNormal).field0_0x0.d[1] * fVar14;
      (ciOut->vNormal).field0_0x0.d[2] = fVar13 * fVar14;
                    /* end of inlined section */
      ciOut->pInst = &this->field0_0x0;
    }
  }
  return SUB41(_collided,0);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/e_istaticmodel.h */
    gpTypeInfo_EIStaticModel =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_13EIStaticModel_m_typeInfo,New__13EIStaticModel,0,"EIStaticModel",
                    &_9EInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

EIStaticModel* EIStaticModel::New() {
  EIStaticModel *pEVar1;
  
  pEVar1 = (EIStaticModel *)__nw__13EIStaticModelUi(0x130);
  pEVar1 = __13EIStaticModel(pEVar1);
  return pEVar1;
}

void EIStaticModel::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIStaticModel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar1[1].GetTypeName
               ,3);
  }
  return;
}

ETypeInfo* EIStaticModel::GetTypeInfo() {
  return &_13EIStaticModel_m_typeInfo;
}

char* EIStaticModel::GetTypeName() {
  return _13EIStaticModel_m_typeInfo.m_name;
}

u32 EIStaticModel::GetTypeKey() {
  return _13EIStaticModel_m_typeInfo.m_key;
}

u16 EIStaticModel::GetTypeVersion() {
  return _13EIStaticModel_m_typeInfo.m_version;
}

u16 EIStaticModel::GetReadVersion() {
  return _13EIStaticModel_m_typeInfo.m_readVersion;
}

ETypeInfo* EIStaticModel::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_13EIStaticModel_m_typeInfo,New__13EIStaticModel,version,"EIStaticModel",
                      &_9EInstance_m_typeInfo);
  return pEVar1;
}

EIStaticModel* EIStaticModel::CreateCopy() {
  EIStaticModel *pEVar1;
  
  pEVar1 = (EIStaticModel *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EIStaticModel::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x130,0x27);
  return pvVar1;
}

void* EIStaticModel::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EIStaticModel::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x130,0x27);
  return;
}

u32 EIStaticModel::GetModelId() {
  return this->m_modelId;
}

bool EIStaticModel::GetDynamiclyLit() {
  return SUB41(*(undefined4 *)&this->m_dynamiclyLit,0);
}

void EIStaticModel::SetDynamiclyLit(bool dynamiclyLit) {
  *(int *)&this->m_dynamiclyLit = (int)dynamiclyLit;
  return;
}

void global constructors keyed to gpTypeInfo_EIStaticModel() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
