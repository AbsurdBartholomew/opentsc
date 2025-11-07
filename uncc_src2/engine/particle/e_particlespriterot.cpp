// STATUS: NOT STARTED

#include "e_particlespriterot.h"

ETypeInfo *gpTypeInfo_EParticleSpriteRot = NULL;

__vtbl_ptr_type EParticleSpriteRot virtual table[37] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSpriteRot::SafeDelete,
		/* .__delta2 = */ 30024
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSpriteRot::GetTypeInfo,
		/* .__delta2 = */ 30080
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSpriteRot::GetTypeName,
		/* .__delta2 = */ 30096
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSpriteRot::GetTypeKey,
		/* .__delta2 = */ 30112
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSpriteRot::GetTypeVersion,
		/* .__delta2 = */ 30128
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSpriteRot::~EParticleSpriteRot,
		/* .__delta2 = */ 29888
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
		/* .__pfn = */ &EParticleSpriteRot::Create,
		/* .__delta2 = */ 29536
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSpriteRot::Update,
		/* .__delta2 = */ 29632
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
		/* .__pfn = */ &EParticleSpriteRot::DrawFlush,
		/* .__delta2 = */ 29400
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSpriteRot::FillPacked,
		/* .__delta2 = */ 29744
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleSpriteRot::Rotate,
		/* .__delta2 = */ 29528
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EParticleSpriteRot::m_typeInfo;

EStream& operator<<(EStream &s, EParticleSpriteRot *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EParticleSpriteRot *&pD) {
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
  *pD = (EParticleSpriteRot *)pStorable;
  return s;
}

void EParticleSpriteRot::DrawFlush(ERC *pRC) {
  if (_15EParticleSprite_m_nDrawQueued != 0) {
    (*(code *)pRC->__vtable->EnableGeometryModes)
              ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->Texture,
               _15EParticleSprite_m_nDrawQueued,
               _15EParticleSprite_m_pPacked + _15EParticleSprite_m_nDrawOffset);
    _15EParticleSprite_m_nDrawOffset =
         _15EParticleSprite_m_nDrawOffset + _15EParticleSprite_m_nDrawQueued;
  }
  _15EParticleSprite_m_nDrawQueued = 0;
  return;
}

void EParticleSpriteRot::Rotate(float dt) {
  return;
}

void EParticleSpriteRot::Create(EIParticleEmit *pEmit, float dt) {
  float fVar1;
  
  Create__15EParticleSpriteP14EIParticleEmitf(&this->field0_0x0,pEmit,dt);
  *(undefined4 *)&this->m_rot180 = 0;
  fVar1 = Rndf__Fv();
  fVar1 = AngleRange90__FfPb(fVar1 * 6.2831,&this->m_rot180);
  this->m_rot = fVar1;
  fVar1 = Rndf__Fv();
  this->m_rotSpeed = (0.5 - fVar1) + (0.5 - fVar1);
  return;
}

bool EParticleSpriteRot::Update(float dt) {
  bool bVar1;
  float fVar2;
  
  bVar1 = Update__15EParticleSpritef(&this->field0_0x0,dt);
  if (bVar1) {
    fVar2 = this->m_rot +
            dt * this->m_rotSpeed *
            (((this->field0_0x0).field0_0x0.m_pType)->m_vRotVel).field0_0x0.d[1];
    this->m_rot = fVar2;
    fVar2 = AngleRange90__FfPb(fVar2,&this->m_rot180);
    this->m_rot = fVar2;
  }
  return bVar1;
}

void EParticleSpriteRot::FillPacked(EGEPackedParticle *pPacked) {
  FillPacked__15EParticleSpriteP17EGEPackedParticle(&this->field0_0x0,pPacked);
  pPacked->rot = this->m_rot;
  pPacked->rot180 = *(uint *)&this->m_rot180;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/particle/e_particlespriterot.h */
    gpTypeInfo_EParticleSpriteRot =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_18EParticleSpriteRot_m_typeInfo,New__18EParticleSpriteRot,0,
                    "EParticleSpriteRot",&_15EParticleSprite_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EParticleSpriteRot::~EParticleSpriteRot(int __in_chrg) {
	EParticleSprite *this;
	
                    /* inlined from c:/eor/src2/engine/particle/e_particlesprite.h */
  ___9EParticle((EParticle *)this,0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
    __dl__18EParticleSpriteRotPv(this);
  }
  return;
}

EParticleSpriteRot* EParticleSpriteRot::New() {
  EParticleSpriteRot *this;
  
  this = (EParticleSpriteRot *)__nw__18EParticleSpriteRotUi(0xe0);
                    /* inlined from c:/eor/src2/engine/particle/e_particlesprite.h */
  __9EParticle((EParticle *)this);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_18EParticleSpriteRot;
  return this;
}

void EParticleSpriteRot::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EParticleSpriteRot *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EParticleSpriteRot::GetTypeInfo() {
  return &_18EParticleSpriteRot_m_typeInfo;
}

char* EParticleSpriteRot::GetTypeName() {
  return _18EParticleSpriteRot_m_typeInfo.m_name;
}

u32 EParticleSpriteRot::GetTypeKey() {
  return _18EParticleSpriteRot_m_typeInfo.m_key;
}

u16 EParticleSpriteRot::GetTypeVersion() {
  return _18EParticleSpriteRot_m_typeInfo.m_version;
}

u16 EParticleSpriteRot::GetReadVersion() {
  return _18EParticleSpriteRot_m_typeInfo.m_readVersion;
}

ETypeInfo* EParticleSpriteRot::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_18EParticleSpriteRot_m_typeInfo,New__18EParticleSpriteRot,version,
                      "EParticleSpriteRot",&_15EParticleSprite_m_typeInfo);
  return pEVar1;
}

EParticleSpriteRot* EParticleSpriteRot::CreateCopy() {
  EParticleSpriteRot *pEVar1;
  
  pEVar1 = (EParticleSpriteRot *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EParticleSpriteRot::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0xe0,0xc);
  return pvVar1;
}

void* EParticleSpriteRot::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EParticleSpriteRot::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0xe0,0xc);
  return;
}

void global constructors keyed to gpTypeInfo_EParticleSpriteRot() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
