// STATUS: NOT STARTED

#include "e_particlepoint.h"

ETypeInfo *gpTypeInfo_EParticlePoint = NULL;
bool EParticlePoint::m_inBegin = false;

__vtbl_ptr_type EParticlePoint virtual table[34] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::SafeDelete,
		/* .__delta2 = */ -29816
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::GetTypeInfo,
		/* .__delta2 = */ -29760
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::GetTypeName,
		/* .__delta2 = */ -29744
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::GetTypeKey,
		/* .__delta2 = */ -29728
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::GetTypeVersion,
		/* .__delta2 = */ -29712
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::~EParticlePoint,
		/* .__delta2 = */ -29952
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
		/* .__pfn = */ &EParticle::Update,
		/* .__delta2 = */ 21728
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::VisibilityTest,
		/* .__delta2 = */ 24360
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::Draw,
		/* .__delta2 = */ 23160
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
		/* .__pfn = */ &EParticle::SetLevel,
		/* .__delta2 = */ 23856
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::Die,
		/* .__delta2 = */ 22992
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::Create,
		/* .__delta2 = */ -30872
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::Update,
		/* .__delta2 = */ 21792
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::Impact,
		/* .__delta2 = */ 22936
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::DrawBegin,
		/* .__delta2 = */ -30376
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::DrawSingle,
		/* .__delta2 = */ -30824
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::DrawEnd,
		/* .__delta2 = */ -30112
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticlePoint::CreateOrderTable,
		/* .__delta2 = */ -30080
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::GetDir,
		/* .__delta2 = */ 23344
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EParticlePoint::m_typeInfo;
float *EParticlePoint::m_positions;
float *EParticlePoint::m_texCoords;
u8 *EParticlePoint::m_colors;
int EParticlePoint::m_nDrawQueued;
int EParticlePoint::m_nDrawOffset;

EStream& operator<<(EStream &s, EParticlePoint *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EParticlePoint *&pD) {
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
  *pD = (EParticlePoint *)pStorable;
  return s;
}

void EParticlePoint::Create(EIParticleEmit *pEmit, float dt) {
  float fVar1;
  
  Create__9EParticleP14EIParticleEmitf(&this->field0_0x0,pEmit,dt);
  fVar1 = Rndf__Fv();
  this->m_v = fVar1;
  return;
}

void EParticlePoint::DrawSingle(ERC *pRC) {
	bool forcedBegin;
	int idx;
	
  EStorable__vtable *pEVar1;
  EShader *pEVar2;
  EShader__vtable *pEVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = __14EParticlePoint_m_inBegin ^ 1;
  if (uVar7 != 0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[6].GetTypeName)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[6].GetTypeInfo,pRC,1);
  }
  if ((_12EParticleMan_m_pLastRShader != (this->field0_0x0).m_pRShader) &&
     ((this->field0_0x0).m_pOT == (EOrderTableData *)0x0)) {
    DrawFlush__14EParticlePointP3ERC(this,pRC);
    pEVar2 = ((this->field0_0x0).m_pRShader)->m_pShader;
    pEVar3 = pEVar2->__vtable;
    (*(code *)pEVar3->ChangeMaterial)
              ((int)(pEVar2->m_sd).rp + *(short *)&pEVar3->Create + -0x10,pRC,0);
    _12EParticleMan_m_pLastRShader = (this->field0_0x0).m_pRShader;
  }
  iVar5 = _14EParticlePoint_m_nDrawQueued;
  iVar4 = _14EParticlePoint_m_nDrawQueued * 4;
  iVar6 = _14EParticlePoint_m_nDrawQueued * 4;
  _14EParticlePoint_m_nDrawQueued = _14EParticlePoint_m_nDrawQueued + 1;
  _14EParticlePoint_m_positions[iVar4] = (this->field0_0x0).m_vPos.field0_0x0.d[0];
  _14EParticlePoint_m_positions[iVar5 * 4 + 1] = (this->field0_0x0).m_vPos.field0_0x0.d[1];
  _14EParticlePoint_m_positions[iVar5 * 4 + 2] = (this->field0_0x0).m_vPos.field0_0x0.d[2];
  _14EParticlePoint_m_positions[iVar5 * 4 + 3] = 0.0;
  _14EParticlePoint_m_texCoords[iVar5 * 2] =
       1.0 - (this->field0_0x0).m_lifeTime / (this->field0_0x0).m_totalTime;
  _14EParticlePoint_m_texCoords[iVar5 * 2 + 1] = this->m_v;
  _14EParticlePoint_m_colors[iVar6] = 0xff;
  _14EParticlePoint_m_colors[iVar6 + 1] = 0xff;
  _14EParticlePoint_m_colors[iVar6 + 2] = 0xff;
  _14EParticlePoint_m_colors[iVar6 + 3] = '\x7f';
  if (uVar7 != 0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[6].Read)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[6].EStorable,pRC);
  }
  return;
}

void EParticlePoint::DrawBegin(ERC *pRC, int num) {
	ERC *this;
	ERC *this;
	ERC *this;
	
  if ((this->field0_0x0).m_pOT == (EOrderTableData *)0x0) {
    (*(code *)pRC->__vtable->ZTest)
              ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->RecalcMatrices);
  }
                    /* inlined from e_dl.h */
                    /* end of inlined section */
  _14EParticlePoint_m_nDrawQueued = 0;
                    /* inlined from e_dl.h */
  _14EParticlePoint_m_positions =
       (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,num << 4,0x10);
                    /* end of inlined section */
                    /* inlined from e_dl.h */
  _14EParticlePoint_m_texCoords =
       (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,num << 3,0x10);
                    /* end of inlined section */
                    /* inlined from e_dl.h */
  _14EParticlePoint_m_colors =
       (uchar *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,num << 2,0x10);
                    /* end of inlined section */
  __14EParticlePoint_m_inBegin = 1;
  return;
}

void EParticlePoint::DrawFlush(ERC *pRC) {
  if (_14EParticlePoint_m_nDrawQueued != 0) {
    (*(code *)pRC->__vtable->ViewMatrix)
              ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->ModelMatrixId,
               _14EParticlePoint_m_nDrawQueued,_14EParticlePoint_m_positions,
               _14EParticlePoint_m_texCoords,_14EParticlePoint_m_colors,0,0);
  }
  _14EParticlePoint_m_nDrawQueued = 0;
  return;
}

void EParticlePoint::DrawEnd(ERC *pRC) {
  DrawFlush__14EParticlePointP3ERC(this,pRC);
  __14EParticlePoint_m_inBegin = 0;
  return;
}

EOrderTableData* EParticlePoint::CreateOrderTable() {
	EOrderTableData *pOT;
	
  EOrderTableData *pEVar1;
  
  pEVar1 = CreateOrderTable__9EParticle(&this->field0_0x0);
  pEVar1->pmOrient = &_mId;
  return pEVar1;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/particle/e_particlepoint.h */
    gpTypeInfo_EParticlePoint =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_14EParticlePoint_m_typeInfo,New__14EParticlePoint,0,"EParticlePoint",
                    &_9EInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EParticlePoint::~EParticlePoint(int __in_chrg) {
  ___9EParticle(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__14EParticlePointPv(this);
  }
  return;
}

EParticlePoint* EParticlePoint::New() {
  EParticlePoint *this;
  
  this = (EParticlePoint *)__nw__14EParticlePointUi(200);
  __9EParticle((EParticle *)this);
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_14EParticlePoint;
  return this;
}

void EParticlePoint::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EParticlePoint *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EParticlePoint::GetTypeInfo() {
  return &_14EParticlePoint_m_typeInfo;
}

char* EParticlePoint::GetTypeName() {
  return _14EParticlePoint_m_typeInfo.m_name;
}

u32 EParticlePoint::GetTypeKey() {
  return _14EParticlePoint_m_typeInfo.m_key;
}

u16 EParticlePoint::GetTypeVersion() {
  return _14EParticlePoint_m_typeInfo.m_version;
}

u16 EParticlePoint::GetReadVersion() {
  return _14EParticlePoint_m_typeInfo.m_readVersion;
}

ETypeInfo* EParticlePoint::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_14EParticlePoint_m_typeInfo,New__14EParticlePoint,version,"EParticlePoint",
                      &_9EInstance_m_typeInfo);
  return pEVar1;
}

EParticlePoint* EParticlePoint::CreateCopy() {
  EParticlePoint *pEVar1;
  
  pEVar1 = (EParticlePoint *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EParticlePoint::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(200,0x29);
  return pvVar1;
}

void* EParticlePoint::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EParticlePoint::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,200,0x29);
  return;
}

void global constructors keyed to gpTypeInfo_EParticlePoint() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
