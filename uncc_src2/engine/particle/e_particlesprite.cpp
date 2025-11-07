// STATUS: NOT STARTED

#include "e_particlesprite.h"

ETypeInfo *gpTypeInfo_EParticleSprite = NULL;
bool EParticleSprite::m_inBegin = false;

__vtbl_ptr_type EParticleSprite virtual table[36] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::SafeDelete,
		/* .__delta2 = */ 31816
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::GetTypeInfo,
		/* .__delta2 = */ 31872
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::GetTypeName,
		/* .__delta2 = */ 31888
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::GetTypeKey,
		/* .__delta2 = */ 31904
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::GetTypeVersion,
		/* .__delta2 = */ 31920
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::~EParticleSprite,
		/* .__delta2 = */ 31680
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
		/* .__pfn = */ &EParticleSprite::Create,
		/* .__delta2 = */ 31448
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::Update,
		/* .__delta2 = */ 31304
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
		/* .__pfn = */ &EParticleSprite::DrawBegin,
		/* .__delta2 = */ 31048
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::DrawSingle,
		/* .__delta2 = */ 30456
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::DrawEnd,
		/* .__delta2 = */ 31256
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::CreateOrderTable,
		/* .__delta2 = */ 31552
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
		/* .__pfn = */ &EParticleSprite::DrawFlush,
		/* .__delta2 = */ 31128
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSprite::FillPacked,
		/* .__delta2 = */ 30752
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EParticleSprite::m_typeInfo;
EGEPackedParticle *EParticleSprite::m_pPacked;
int EParticleSprite::m_nDrawQueued;
int EParticleSprite::m_nDrawOffset;

EStream& operator<<(EStream &s, EParticleSprite *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EParticleSprite *&pD) {
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
  *pD = (EParticleSprite *)pStorable;
  return s;
}

void EParticleSprite::DrawSingle(ERC *pRC) {
	bool forcedBegin;
	
  EStorable__vtable *pEVar1;
  EShader *pEVar2;
  EShader__vtable *pEVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = __15EParticleSprite_m_inBegin ^ 1;
  if (uVar5 != 0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[6].GetTypeName)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[6].GetTypeInfo,pRC,1);
  }
  if ((_12EParticleMan_m_pLastRShader != (this->field0_0x0).m_pRShader) &&
     ((this->field0_0x0).m_pOT == (EOrderTableData *)0x0)) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[7].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[7].GetTypeName,pRC);
    pEVar2 = ((this->field0_0x0).m_pRShader)->m_pShader;
    pEVar3 = pEVar2->__vtable;
    (*(code *)pEVar3->ChangeMaterial)
              ((int)(pEVar2->m_sd).rp + *(short *)&pEVar3->Create + -0x10,pRC,0);
    _12EParticleMan_m_pLastRShader = (this->field0_0x0).m_pRShader;
  }
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  iVar4 = _15EParticleSprite_m_nDrawOffset + _15EParticleSprite_m_nDrawQueued;
  _15EParticleSprite_m_nDrawQueued = _15EParticleSprite_m_nDrawQueued + 1;
  (*(code *)pEVar1[7].EStorable)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[7].GetTypeVersion,_15EParticleSprite_m_pPacked + iVar4);
  if (uVar5 != 0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[6].Read)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[6].EStorable,pRC);
  }
  return;
}

void EParticleSprite::FillPacked(EGEPackedParticle *pPacked) {
	float done;
	EVec4 vColor;
	float scaler;
	
  ERParticleType *pEVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EVec4 vColor;
  
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pEVar1 = (this->field0_0x0).m_pType;
                    /* end of inlined section */
  fVar3 = (this->field0_0x0).m_lifeTime / (this->field0_0x0).m_totalTime;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar8 = (pEVar1->m_vStartColor).field0_0x0.d[0];
  fVar7 = (pEVar1->m_vStartColor).field0_0x0.d[1];
  fVar9 = (pEVar1->m_vStartColor).field0_0x0.d[2];
  fVar11 = (pEVar1->m_vStartColor).field0_0x0.d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  fVar2 = 1.0 - fVar3;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar5 = (pEVar1->m_vEndColor).field0_0x0.d[3];
  fVar4 = (pEVar1->m_vEndColor).field0_0x0.d[0];
  fVar6 = (pEVar1->m_vEndColor).field0_0x0.d[1];
  fVar10 = (pEVar1->m_vEndColor).field0_0x0.d[2];
                    /* end of inlined section */
  pPacked->x = (this->field0_0x0).m_vPos.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  pPacked->y = (this->field0_0x0).m_vPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  pPacked->z = (this->field0_0x0).m_vPos.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  pPacked->width = this->m_xSize;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  pPacked->height = this->m_ySize;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  pPacked->r = (int)((fVar3 * fVar8 + fVar2 * fVar4) * 127.0) & 0xff;
  pPacked->a = (int)((fVar3 * fVar11 + fVar2 * fVar5) * 127.0) & 0xff;
  pPacked->g = (int)((fVar3 * fVar7 + fVar2 * fVar6) * 127.0) & 0xff;
  pPacked->b = (int)((fVar3 * fVar9 + fVar2 * fVar10) * 127.0) & 0xff;
  return;
}

void EParticleSprite::DrawBegin(ERC *pRC, int num) {
                    /* inlined from e_dl.h */
                    /* end of inlined section */
  _15EParticleSprite_m_nDrawQueued = 0;
                    /* inlined from e_dl.h */
                    /* end of inlined section */
  _15EParticleSprite_m_nDrawOffset = 0;
                    /* inlined from e_dl.h */
  _15EParticleSprite_m_pPacked =
       (EGEPackedParticle *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,num * 0x30,0x10);
                    /* end of inlined section */
  __15EParticleSprite_m_inBegin = 1;
  return;
}

void EParticleSprite::DrawFlush(ERC *pRC) {
  if (_15EParticleSprite_m_nDrawQueued != 0) {
    (*(code *)pRC->__vtable->TextureMatrix)
              ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->EnvironmentMap,
               _15EParticleSprite_m_nDrawQueued,
               _15EParticleSprite_m_pPacked + _15EParticleSprite_m_nDrawOffset);
    _15EParticleSprite_m_nDrawOffset =
         _15EParticleSprite_m_nDrawOffset + _15EParticleSprite_m_nDrawQueued;
  }
  _15EParticleSprite_m_nDrawQueued = 0;
  return;
}

void EParticleSprite::DrawEnd(ERC *pRC) {
  EStorable__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[7].GetTypeKey)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[7].GetTypeName,pRC);
  __15EParticleSprite_m_inBegin = 0;
  return;
}

bool EParticleSprite::Update(float dt) {
  ERParticleType *pEVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  bVar2 = Update__9EParticlef(&this->field0_0x0,dt);
  if (bVar2) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    pEVar1 = (this->field0_0x0).m_pType;
                    /* end of inlined section */
    fVar3 = this->m_xVel + (pEVar1->m_vGrowthAcc).field0_0x0.d[0] * dt;
    this->m_xVel = fVar3;
    fVar4 = this->m_yVel + (pEVar1->m_vGrowthAcc).field0_0x0.d[1] * dt;
    this->m_xSize = this->m_xSize + fVar3 * dt;
    this->m_yVel = fVar4;
    this->m_ySize = this->m_ySize + fVar4 * dt;
  }
  return bVar2;
}

void EParticleSprite::Create(EIParticleEmit *pEmit, float dt) {
	ERParticleType *pt;
	EIParticleEmit *this;
	
  ERParticleType *pEVar1;
  float fVar2;
  
  Create__9EParticleP14EIParticleEmitf(&this->field0_0x0,pEmit,dt);
  pEVar1 = pEmit->m_pType;
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  fVar2 = pEmit->m_scale;
                    /* end of inlined section */
  this->m_xSize = fVar2 * (pEVar1->m_vSize).field0_0x0.d[0];
  this->m_ySize = fVar2 * (pEVar1->m_vSize).field0_0x0.d[1];
  this->m_xVel = fVar2 * (pEVar1->m_vGrowthVel).field0_0x0.d[0];
  this->m_yVel = fVar2 * (pEVar1->m_vGrowthVel).field0_0x0.d[1];
  return;
}

EOrderTableData* EParticleSprite::CreateOrderTable() {
	EOrderTableData *pOT;
	
  EOrderTableData *pEVar1;
  
  pEVar1 = CreateOrderTable__9EParticle(&this->field0_0x0);
  pEVar1->pmOrient = &_mId;
  return pEVar1;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/particle/e_particlesprite.h */
    gpTypeInfo_EParticleSprite =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_15EParticleSprite_m_typeInfo,New__15EParticleSprite,0,"EParticleSprite",
                    &_9EParticle_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EParticleSprite::~EParticleSprite(int __in_chrg) {
  ___9EParticle(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__15EParticleSpritePv(this);
  }
  return;
}

EParticleSprite* EParticleSprite::New() {
  EParticleSprite *this;
  
  this = (EParticleSprite *)__nw__15EParticleSpriteUi(0xd4);
  __9EParticle((EParticle *)this);
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_15EParticleSprite;
  return this;
}

void EParticleSprite::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EParticleSprite *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EParticleSprite::GetTypeInfo() {
  return &_15EParticleSprite_m_typeInfo;
}

char* EParticleSprite::GetTypeName() {
  return _15EParticleSprite_m_typeInfo.m_name;
}

u32 EParticleSprite::GetTypeKey() {
  return _15EParticleSprite_m_typeInfo.m_key;
}

u16 EParticleSprite::GetTypeVersion() {
  return _15EParticleSprite_m_typeInfo.m_version;
}

u16 EParticleSprite::GetReadVersion() {
  return _15EParticleSprite_m_typeInfo.m_readVersion;
}

ETypeInfo* EParticleSprite::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_15EParticleSprite_m_typeInfo,New__15EParticleSprite,version,
                      "EParticleSprite",&_9EParticle_m_typeInfo);
  return pEVar1;
}

EParticleSprite* EParticleSprite::CreateCopy() {
  EParticleSprite *pEVar1;
  
  pEVar1 = (EParticleSprite *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EParticleSprite::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0xd4,0);
  return pvVar1;
}

void* EParticleSprite::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EParticleSprite::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0xd4,0);
  return;
}

void global constructors keyed to gpTypeInfo_EParticleSprite() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
