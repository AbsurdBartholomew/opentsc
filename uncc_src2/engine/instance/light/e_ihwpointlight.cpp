// STATUS: NOT STARTED

#include "e_ihwpointlight.h"

ETypeInfo *gpTypeInfo_EIHWPointLight = NULL;

__vtbl_ptr_type EIHWPointLight virtual table[32] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIHWPointLight::SafeDelete,
		/* .__delta2 = */ -9288
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIHWPointLight::GetTypeInfo,
		/* .__delta2 = */ -9232
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIHWPointLight::GetTypeName,
		/* .__delta2 = */ -9216
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIHWPointLight::GetTypeKey,
		/* .__delta2 = */ -9200
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIHWPointLight::GetTypeVersion,
		/* .__delta2 = */ -9184
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIHWPointLight::~EIHWPointLight,
		/* .__delta2 = */ -9360
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::Read,
		/* .__delta2 = */ -15656
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::Write,
		/* .__delta2 = */ -15832
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::Init,
		/* .__delta2 = */ 7432
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
		/* .__pfn = */ &EIPointLight::CalcLightOnSurface,
		/* .__delta2 = */ -15480
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::CalcLightOnPoint,
		/* .__delta2 = */ -14168
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::AddLightingToLightmapRow,
		/* .__delta2 = */ -14928
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIHWPointLight::Setup,
		/* .__delta2 = */ -9608
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::BackCullTest,
		/* .__delta2 = */ -13320
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::CanCastShadows,
		/* .__delta2 = */ -12808
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::GetShadowSourcePos,
		/* .__delta2 = */ -12800
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EIHWPointLight::m_typeInfo;

EStream& operator<<(EStream &s, EIHWPointLight *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIHWPointLight *&pD) {
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
  *pD = (EIHWPointLight *)pStorable;
  return s;
}

EIHWPointLight* EIHWPointLight::EIHWPointLight() {
	EInstance *this;
	
  uint uVar1;
  
  __12EIPointLight(&this->field0_0x0);
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
  uVar1 = (this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_causeFlags;
                    /* end of inlined section */
  *(undefined4 *)&this->m_receiversFlagged = 0;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_14EIHWPointLight;
  SetOverlapCauseFlags__9EInstanceUi((EInstance *)this,uVar1 | 0x4000);
  Setup__14EIHWPointLight(this);
  return this;
}

void EIHWPointLight::RemovePointLightReceiverFlags() {
	OTIterator i;
	EInstance *pInstance;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	EInstance *pInstance;
	
  int iVar1;
  undefined1 *puVar2;
  ERedBlackTreeNode *i;
  
  if (((this->field0_0x0).field0_0x0.field0_0x0.m_pLevel != (ERLevel *)0x0) &&
     (*(int *)&this->m_receiversFlagged != 0)) {
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
    i = (this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_overlaps.field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
                    /* end of inlined section */
    while (puVar2 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                              ((undefined1 *)i,&(this->field0_0x0).field0_0x0.field0_0x0.m_otd,
                               0x4000), puVar2 != (undefined1 *)0x0) {
                    /* end of inlined section */
      iVar1 = *(int *)(*(int *)(puVar2 + 0x18) + 0x18);
      if (0 < iVar1) {
        *(int *)(*(int *)(puVar2 + 0x18) + 0x18) = iVar1 + -1;
      }
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
      i = *(ERedBlackTreeNode **)(puVar2 + 0x10);
    }
    *(undefined4 *)&this->m_receiversFlagged = 0;
  }
  return;
}

void EIHWPointLight::AddPointLightReceiverFlags() {
	OTIterator i;
	EInstance *pInstance;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	EInstance *pInstance;
	
  undefined1 *puVar1;
  ERedBlackTreeNode *i;
  
  if ((((this->field0_0x0).field0_0x0.field0_0x0.m_pLevel != (ERLevel *)0x0) &&
      (*(int *)&this->m_receiversFlagged == 0)) &&
     (*(int *)&(this->field0_0x0).field0_0x0.m_on != 0)) {
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
    i = (this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_overlaps.field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
                    /* end of inlined section */
    while (puVar1 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                              ((undefined1 *)i,&(this->field0_0x0).field0_0x0.field0_0x0.m_otd,
                               0x4000), puVar1 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
                    /* end of inlined section */
      *(int *)(*(int *)(puVar1 + 0x18) + 0x18) = *(int *)(*(int *)(puVar1 + 0x18) + 0x18) + 1;
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
      i = *(ERedBlackTreeNode **)(puVar1 + 0x10);
    }
    *(undefined4 *)&this->m_receiversFlagged = 1;
  }
  return;
}

void EIHWPointLight::Setup() {
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  EPointLight *pEVar6;
  ulong uVar7;
  float fVar8;
  
  RemovePointLightReceiverFlags__14EIHWPointLight(this);
  Setup__12EIPointLight(&this->field0_0x0);
  AddPointLightReceiverFlags__14EIHWPointLight(this);
                    /* inlined from e_frag.h */
  uVar7 = 0xc;
  pEVar6 = (EPointLight *)Alloc__11EAllocGroupUii(_frag.m_ag + _frag.m_evenodd,0x1c,0x10);
                    /* end of inlined section */
  this->m_pGfxPointLight = pEVar6;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.m_vColor.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  pEVar2 = &(this->field0_0x0).field0_0x0.m_vColor;
  uVar4 = (uint)pEVar2 & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)pEVar2 - uVar4) >> uVar4 * 8;
  fVar8 = (this->field0_0x0).field0_0x0.m_vColor.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(pEVar6->vColor).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)pEVar6 & 7;
  *(ulong *)((int)pEVar6 - uVar3) =
       uVar7 << uVar3 * 8 | *(ulong *)((int)pEVar6 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
  ;
  (pEVar6->vColor).field0_0x0.d[2] = fVar8;
  pEVar6 = this->m_pGfxPointLight;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_vPos.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  pEVar2 = &(this->field0_0x0).m_vPos;
  uVar4 = (uint)pEVar2 & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)pEVar2 - uVar4) >> uVar4 * 8;
  fVar8 = (this->field0_0x0).m_vPos.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(pEVar6->vPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)&pEVar6->vPos & 7;
  puVar5 = (ulong *)((int)&pEVar6->vPos - uVar3);
  *puVar5 = uVar7 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (pEVar6->vPos).field0_0x0.d[2] = fVar8;
  fVar8 = (this->field0_0x0).m_falloffEndDistance;
  this->m_pGfxPointLight->radSq = fVar8 * fVar8;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ihwpointlight.h */
    gpTypeInfo_EIHWPointLight =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_14EIHWPointLight_m_typeInfo,New__14EIHWPointLight,0,"EIHWPointLight",
                    &_12EIPointLight_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EIHWPointLight::~EIHWPointLight(int __in_chrg) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilight.h */
  ___9EInstance((EInstance *)this,__in_chrg);
  return;
}

EIHWPointLight* EIHWPointLight::New() {
  EIHWPointLight *pEVar1;
  
  pEVar1 = (EIHWPointLight *)__builtin_new(0xc4);
  pEVar1 = __14EIHWPointLight(pEVar1);
  return pEVar1;
}

void EIHWPointLight::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIHWPointLight *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EIHWPointLight::GetTypeInfo() {
  return &_14EIHWPointLight_m_typeInfo;
}

char* EIHWPointLight::GetTypeName() {
  return _14EIHWPointLight_m_typeInfo.m_name;
}

u32 EIHWPointLight::GetTypeKey() {
  return _14EIHWPointLight_m_typeInfo.m_key;
}

u16 EIHWPointLight::GetTypeVersion() {
  return _14EIHWPointLight_m_typeInfo.m_version;
}

u16 EIHWPointLight::GetReadVersion() {
  return _14EIHWPointLight_m_typeInfo.m_readVersion;
}

ETypeInfo* EIHWPointLight::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_14EIHWPointLight_m_typeInfo,New__14EIHWPointLight,version,"EIHWPointLight",
                      &_12EIPointLight_m_typeInfo);
  return pEVar1;
}

EIHWPointLight* EIHWPointLight::CreateCopy() {
  EIHWPointLight *pEVar1;
  
  pEVar1 = (EIHWPointLight *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_EIHWPointLight() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
