// STATUS: NOT STARTED

#include "e_particleemit.h"

ETypeInfo *gpTypeInfo_EIParticleEmit = NULL;
bool EIParticleEmit::m_allEnabled = true;

__vtbl_ptr_type EIParticleEmit virtual table[30] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::SafeDelete,
		/* .__delta2 = */ 20760
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::GetTypeInfo,
		/* .__delta2 = */ 20816
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::GetTypeName,
		/* .__delta2 = */ 20832
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::GetTypeKey,
		/* .__delta2 = */ 20848
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::GetTypeVersion,
		/* .__delta2 = */ 20864
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::~EIParticleEmit,
		/* .__delta2 = */ 18184
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::Read,
		/* .__delta2 = */ 17664
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::Write,
		/* .__delta2 = */ 17776
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::Init,
		/* .__delta2 = */ 17264
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::Update,
		/* .__delta2 = */ 19392
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::VisibilityTest,
		/* .__delta2 = */ 19112
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::Draw,
		/* .__delta2 = */ 18744
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
		/* .__pfn = */ &EIParticleEmit::GetBoundSphere,
		/* .__delta2 = */ 19200
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
		/* .__pfn = */ &EIParticleEmit::ReadInstanceData,
		/* .__delta2 = */ 17848
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIParticleEmit::SetLevel,
		/* .__delta2 = */ 17552
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::Damage,
		/* .__delta2 = */ 9184
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::PlatformOrient,
		/* .__delta2 = */ 9192
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::GetAbsolutePosition,
		/* .__delta2 = */ 9200
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::UserFunc,
		/* .__delta2 = */ 8776
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::ExecScript,
		/* .__delta2 = */ 8784
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EIParticleEmit::m_typeInfo;

EStream& operator<<(EStream &s, EIParticleEmit *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIParticleEmit *&pD) {
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
  *pD = (EIParticleEmit *)pStorable;
  return s;
}

void EIParticleEmit::DoSetup() {
	EInstance *this;
	EIParticleEmit *this;
	EIParticleEmit *this;
	EIParticleEmit *this;
	EIParticleEmit *this;
	EIParticleEmit *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
                    /* end of inlined section */
  SetOverlapReceiveFlags__9EInstanceUi
            ((EInstance *)this,(this->field0_0x0).field0_0x0.m_otd.m_receiveFlags | 1);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_instanceFlags = 0xf;
  puVar1 = (undefined *)((int)&(this->m_vVel).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vVel & 7;
  puVar3 = (ulong *)((int)&this->m_vVel - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vVel).field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  puVar1 = (undefined *)((int)&(this->m_vAcc).field0_0x0 + 7);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vAcc & 7;
  puVar3 = (ulong *)((int)&this->m_vAcc - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vAcc).field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)&this->m_active = 1;
                    /* end of inlined section */
  this->m_lastEmit = 0.0;
  this->m_shaderTime = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPos & 7;
  puVar3 = (ulong *)((int)&this->m_vPos - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPos).field0_0x0.d[2] = 0.0;
  this->m_scale = 1.0;
  puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDir & 7;
  puVar3 = (ulong *)((int)&this->m_vDir - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vDir).field0_0x0.d[2] = 1.0;
  this->m_lifeTime = 1e+10;
                    /* end of inlined section */
  (this->m_otd).pfnCallback = DrawCallback__14EIParticleEmitP3ERCUiUi;
  this->m_age = 0.0;
  this->m_pType = (ERParticleType *)0x0;
  (this->field0_0x0).field0_0x0.m_pLevel = (ERLevel *)0x0;
  (this->m_otd).callbackParam1 = (uint)this;
  (this->m_otd).nLights = 0;
  (this->m_otd).pLights = (ELights *)0x0;
  (this->m_otd).pShader = (EShader *)0x0;
  (this->m_otd).pvPos = &this->m_vPos;
  (this->m_otd).pmOrient = &_mId;
  (this->m_otd).sortValue = 1;
  (this->m_otd).sortMode = 1;
  AddEmit__12EParticleManP14EIParticleEmit(&_pclman,this);
  return;
}

EIParticleEmit* EIParticleEmit::EIParticleEmit() {
  __14EIGameInstance(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_particles).m_pTail = (EParticle *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_particles).m_pHead = (EParticle *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_14EIParticleEmit;
  DoSetup__14EIParticleEmit(this);
  return this;
}

void EIParticleEmit::Init() {
	EMat4 mDir;
	
  undefined *puVar1;
  ulong *puVar2;
  ERParticleType *pEVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EMat4 mDir;
  
  this->m_age = 0.0;
  ToMat4__C5EQuatR5EMat4(&this->m_qOrient,&mDir);
  puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar4);
  *puVar2 = *puVar2 & -1L << (uVar4 + 1) * 8 | (ulong)mDir.field0_0x0._32_8_ >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_vDir & 7;
  puVar2 = (ulong *)((int)&this->m_vDir - uVar4);
  *puVar2 = mDir.field0_0x0._32_8_ << uVar4 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_vDir).field0_0x0.d[2] = mDir.field0_0x0.d[2][2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar6 = (this->m_vDir).field0_0x0.d[0];
  fVar5 = (this->m_vDir).field0_0x0.d[1];
  fVar7 = (this->m_vDir).field0_0x0.d[2];
  fVar5 = sqrtf(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
  if (fVar5 == 0.0) {
    uVar4 = this->m_particleTypeId;
  }
  else {
    fVar5 = 1.0 / fVar5;
    (this->m_vDir).field0_0x0.d[0] = (this->m_vDir).field0_0x0.d[0] * fVar5;
    fVar6 = (this->m_vDir).field0_0x0.d[2];
    (this->m_vDir).field0_0x0.d[1] = (this->m_vDir).field0_0x0.d[1] * fVar5;
    (this->m_vDir).field0_0x0.d[2] = fVar6 * fVar5;
    uVar4 = this->m_particleTypeId;
  }
  pEVar3 = (ERParticleType *)
           AddRef__16EResourceManagerUiP5EFilei(&_particletypeman.field0_0x0,uVar4,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pType = pEVar3;
  (this->m_otd).sortValue = 2;
  (this->m_otd).pfnCallback = DrawCallback__14EIParticleEmitP3ERCUiUi;
  (this->m_otd).pvPos = &this->m_vPos;
  (this->m_otd).sortMode = 1;
  (this->m_otd).pmOrient = &_mId;
  (this->m_otd).callbackParam1 = (uint)this;
  (this->m_otd).nLights = 0;
  (this->m_otd).pLights = (ELights *)0x0;
  (this->m_otd).pShader = (EShader *)0x0;
  return;
}

void EIParticleEmit::SetLevel(ERLevel *pLevel) {
	EInstance *this;
	ERLevel *pLevel;
	
  if (pLevel == (ERLevel *)0x0) {
    if ((this->field0_0x0).field0_0x0.m_pLevel != (ERLevel *)0x0) {
      AddEmit__12EParticleManP14EIParticleEmit(&_pclman,this);
    }
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
    (this->field0_0x0).field0_0x0.m_pLevel = (ERLevel *)0x0;
  }
  else if ((this->field0_0x0).field0_0x0.m_pLevel == (ERLevel *)0x0) {
    RemoveEmit__12EParticleManP14EIParticleEmit(&_pclman,this);
    (this->field0_0x0).field0_0x0.m_pLevel = pLevel;
  }
  else {
    (this->field0_0x0).field0_0x0.m_pLevel = pLevel;
  }
  return;
}

void EIParticleEmit::Read(EStream &s) {
  EStream *s_00;
  EStorable__vtable *pEVar1;
  
                    /* end of inlined section */
  Read__9EInstanceR7EStream((EInstance *)this,s);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
                    /* end of inlined section */
  if (_14EIParticleEmit_m_typeInfo.m_readVersion == 0) {
    s_00 = __rs__FR7EStreamR5EVec3(s,&this->m_vPos);
    __rs__FR7EStreamR5EVec3(s_00,&this->m_vDir);
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  }
  else {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  }
  (*(code *)pEVar1[2].SafeDelete)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) + (int)*(short *)(pEVar1 + 2))
  ;
  return;
}

void EIParticleEmit::Write(EStream &s) {
  EStream *s_00;
  
  Write__9EInstanceR7EStream((EInstance *)this,s);
  s_00 = __ls__FR7EStreamRC5EVec3(s,&this->m_vPos);
  __ls__FR7EStreamRC5EVec3(s_00,&this->m_vDir);
  return;
}

void EIParticleEmit::ReadInstanceData(EStream &s) {
	u8 v;
	
  EStream *pEVar1;
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
  
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (_14EIParticleEmit_m_typeInfo.m_readVersion == 0) {
    pEVar1 = __rs__FR7EStreamR5EVec3(s,&this->m_vPos);
    pEVar1 = __rs__FR7EStreamR5EQuat(pEVar1,&this->m_qOrient);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_particleTypeId,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,&v,1);
    *(uint *)&this->m_active = (uint)(v != '\0');
  }
                    /* end of inlined section */
  return;
}

void EIParticleEmit::AddParticlesToOrphanList() {
	EParticle *pPcl;
	EParticle *pNext;
	TLinkedList<EParticle,184,188> *this;
	EParticle *pNode;
	void *pNode;
	EParticle *pNode;
	void *pNode;
	void *pNode;
	EParticle *pNode;
	void *pNode;
	EParticle *pNode;
	EParticle *pNode;
	
  EParticle *pEVar1;
  ERLevel *this_00;
  EParticle *pEVar2;
  EParticle *pPcl;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pPcl = (this->m_particles).m_pHead;
                    /* end of inlined section */
  if (pPcl != (EParticle *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar2 = (this->m_particles).m_pHead;
    while( true ) {
      pEVar1 = pPcl->m_pNext;
      if (pEVar2 == pPcl) {
        (this->m_particles).m_pHead = pEVar1;
      }
      else {
        pPcl->m_pLast->m_pNext = pEVar1;
      }
      if ((this->m_particles).m_pTail == pPcl) {
        (this->m_particles).m_pTail = pPcl->m_pLast;
      }
      else {
        pPcl->m_pNext->m_pLast = pPcl->m_pLast;
      }
                    /* end of inlined section */
      pPcl->m_pOwnerList = (void *)0x0;
      this_00 = (this->field0_0x0).field0_0x0.m_pLevel;
      if (this_00 == (ERLevel *)0x0) {
        AddOrphan__12EParticleManP9EParticle(&_pclman,pPcl);
      }
      else {
        InsertInstance__7ERLevelP9EInstanceT1(this_00,&pPcl->field0_0x0,(EInstance *)this);
      }
      if (pEVar1 == (EParticle *)0x0) break;
      pEVar2 = (this->m_particles).m_pHead;
      pPcl = pEVar1;
    }
  }
  return;
}

void EIParticleEmit::~EIParticleEmit(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_14EIParticleEmit;
  if ((this->field0_0x0).field0_0x0.m_pLevel == (ERLevel *)0x0) {
    RemoveEmit__12EParticleManP14EIParticleEmit(&_pclman,this);
  }
  AddParticlesToOrphanList__14EIParticleEmit(this);
  if (this->m_pType != (ERParticleType *)0x0) {
    DelRef__9EResource(&this->m_pType->field0_0x0);
  }
  ___14EIGameInstance(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
    _allocBucketFree__FPvUiUi(this,0x124,0x1b);
  }
                    /* end of inlined section */
  return;
}

EIParticleEmit* EIParticleEmit::EIParticleEmit(char *szType, EVec3 &vPos, EVec3 &vDir, ERLevel *pLevel, EInstance *pRefInstance) {
	EIParticleEmit *this;
	EVec3 &vPos;
	EIParticleEmit *this;
	EVec3 &vDir;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  EIGameInstance *pEVar6;
  ulong uVar7;
  
  pEVar6 = __14EIGameInstance(&this->field0_0x0);
  uVar7 = (ulong)(int)pEVar6;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_particles).m_pTail = (EParticle *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_particles).m_pHead = (EParticle *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_14EIParticleEmit;
  DoSetup__14EIParticleEmit(this);
  Type__14EIParticleEmitPCc(this,szType);
  puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vPos & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vPos - uVar3) >> uVar3 * 8;
  fVar4 = (vPos->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPos & 7;
  puVar5 = (ulong *)((int)&this->m_vPos - uVar2);
  *puVar5 = uVar7 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPos).field0_0x0.d[2] = fVar4;
  puVar1 = (undefined *)((int)&vDir->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vDir & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vDir - uVar3) >> uVar3 * 8;
  fVar4 = (vDir->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDir & 7;
  puVar5 = (ulong *)((int)&this->m_vDir - uVar2);
  *puVar5 = uVar7 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vDir).field0_0x0.d[2] = fVar4;
                    /* end of inlined section */
  if (pLevel != (ERLevel *)0x0) {
    InsertInstance__7ERLevelP9EInstanceT1(pLevel,(EInstance *)this,pRefInstance);
  }
  return this;
}

EIParticleEmit* EIParticleEmit::EIParticleEmit(u32 type, EVec3 &vPos, EVec3 &vDir, ERLevel *pLevel, EInstance *pRefInstance) {
	EIParticleEmit *this;
	EVec3 &vPos;
	EIParticleEmit *this;
	EVec3 &vDir;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  EIGameInstance *pEVar6;
  ulong uVar7;
  
  pEVar6 = __14EIGameInstance(&this->field0_0x0);
  uVar7 = (ulong)(int)pEVar6;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_particles).m_pTail = (EParticle *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_particles).m_pHead = (EParticle *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_14EIParticleEmit;
  DoSetup__14EIParticleEmit(this);
  Type__14EIParticleEmiti(this,type);
  puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vPos & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vPos - uVar3) >> uVar3 * 8;
  fVar4 = (vPos->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPos & 7;
  puVar5 = (ulong *)((int)&this->m_vPos - uVar2);
  *puVar5 = uVar7 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPos).field0_0x0.d[2] = fVar4;
  puVar1 = (undefined *)((int)&vDir->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vDir & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vDir - uVar3) >> uVar3 * 8;
  fVar4 = (vDir->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDir & 7;
  puVar5 = (ulong *)((int)&this->m_vDir - uVar2);
  *puVar5 = uVar7 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vDir).field0_0x0.d[2] = fVar4;
                    /* end of inlined section */
  if (pLevel != (ERLevel *)0x0) {
    InsertInstance__7ERLevelP9EInstanceT1(pLevel,(EInstance *)this,pRefInstance);
  }
  return this;
}

void EIParticleEmit::Draw(ERC *pRC, u32 renderFlags) {
  ERLevel *this_00;
  
  if (__14EIParticleEmit_m_allEnabled != 0) {
    this_00 = (this->field0_0x0).field0_0x0.m_pLevel;
    if (this_00 == (ERLevel *)0x0) {
      if ((renderFlags & 1) == 0) {
        (*(code *)pRC->__vtable->EndCommand)
                  ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->BeginCommand,1);
      }
      else {
        (*(code *)pRC->__vtable->NewEntry)
                  ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->Terminate);
      }
      DrawCallback__14EIParticleEmitP3ERCUiUi(pRC,(uint)this,0);
    }
    else {
      (this->m_otd).renderFlags = renderFlags;
      InsertInOrderTable__7ERLevelR15EOrderTableData(this_00,&this->m_otd);
    }
  }
  return;
}

void EIParticleEmit::DrawCallback(ERC *pRC, u32 user1, u32 user2) {
	EIParticleEmit *pThis;
	EParticle *pFirst;
	EParticle *pPcl;
	EParticle *p;
	int count;
	void *pNode;
	
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  piVar1 = *(int **)(user1 + 0xdc);
                    /* end of inlined section */
  if (piVar1 != (int *)0x0) {
    if (*(int *)(user1 + 4) == 0) {
      iVar2 = *piVar1;
    }
    else {
      _12EParticleMan_m_pLastRShader = (ERShader *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      iVar2 = *piVar1;
    }
    iVar3 = 0;
    piVar4 = piVar1;
    do {
      piVar4 = (int *)piVar4[0x2f];
      iVar3 = iVar3 + 1;
    } while (piVar4 != (int *)0x0);
                    /* end of inlined section */
    (**(code **)(iVar2 + 0xe4))((int)piVar1 + (int)*(short *)(iVar2 + 0xe0),pRC,iVar3);
    iVar2 = _pGifTag0;
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      piVar4 = piVar1;
      while( true ) {
        (**(code **)(iVar2 + 0xec))((int)piVar4 + (int)*(short *)(iVar2 + 0xe8),pRC);
        piVar4 = (int *)piVar4[0x2f];
        if (piVar4 == (int *)0x0) break;
        iVar2 = *piVar4;
      }
      iVar2 = *piVar1;
    }
    (**(code **)(iVar2 + 0xf4))((int)piVar1 + (int)*(short *)(iVar2 + 0xf0),pRC);
  }
  return;
}

u32 EIParticleEmit::VisibilityTest(EPortalWindow &win, u32 parentVis) {
	EBoundSphere bs;
	
  EStorable__vtable *pEVar1;
  uint uVar2;
  EBoundSphere bs;
  
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[4].GetTypeVersion)
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[4].GetTypeKey,&bs);
  uVar2 = Test__13EPortalWindowRC12EBoundSphereUi(win,&bs,parentVis);
  return uVar2;
}

void EIParticleEmit::GetBoundSphere(EBoundSphere &boundSphereOut) {
	EVec3 &vVec;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ERParticleType *pEVar3;
  uint uVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pEVar3 = this->m_pType;
  if (pEVar3 == (ERParticleType *)0x0) {
    fVar8 = 10000.0;
    puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar2 = (uint)&this->m_vPos & 7;
    uVar6 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            in_v0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)&this->m_vPos - uVar2) >> uVar2 * 8;
    fVar7 = (this->m_vPos).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(boundSphereOut->vCenter).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
    uVar4 = (uint)boundSphereOut & 7;
    *(ulong *)((int)boundSphereOut - uVar4) =
         uVar6 << uVar4 * 8 |
         *(ulong *)((int)boundSphereOut - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (boundSphereOut->vCenter).field0_0x0.d[2] = fVar7;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar8 = this->m_scale;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar9 = (pEVar3->m_bs).vCenter.field0_0x0.d[2];
    fVar7 = (this->m_vPos).field0_0x0.d[2];
                    /* end of inlined section */
    uVar6 = CONCAT44((this->m_vPos).field0_0x0.d[1] + fVar8 * (pEVar3->m_bs).vCenter.field0_0x0.d[1]
                     ,(this->m_vPos).field0_0x0.d[0] +
                      fVar8 * (pEVar3->m_bs).vCenter.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&(boundSphereOut->vCenter).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
    uVar4 = (uint)boundSphereOut & 7;
    *(ulong *)((int)boundSphereOut - uVar4) =
         uVar6 << uVar4 * 8 |
         *(ulong *)((int)boundSphereOut - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (boundSphereOut->vCenter).field0_0x0.d[2] = fVar7 + fVar8 * fVar9;
    fVar8 = this->m_scale * (this->m_pType->m_bs).radius;
  }
  boundSphereOut->radius = fVar8;
  return;
}

void EIParticleEmit::Update() {
	float dt;
	bool die;
	EParticle *pPcl;
	EParticle *pNext;
	float lastEmitTime;
	EParticle *pNewPcl;
	
  ERParticleType *pEVar1;
  EParticle *pEVar2;
  int iVar3;
  EParticle *pEVar4;
  EStorable__vtable *pEVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (__14EIParticleEmit_m_allEnabled != 0) {
                    /* inlined from c:/eor/src2/engine/particle/e_particleman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/particle/e_particleman.h */
                    /* end of inlined section */
    fVar9 = _dt * _pclman.m_timeScale;
    fVar8 = this->m_lifeTime;
    fVar7 = this->m_age + fVar9;
    this->m_age = fVar7;
    if (fVar8 <= fVar7) {
      fVar9 = fVar9 - (fVar7 - fVar8);
    }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar4 = (this->m_particles).m_pHead;
                    /* end of inlined section */
    if (pEVar4 == (EParticle *)0x0) {
      pEVar1 = this->m_pType;
    }
    else {
      pEVar5 = (pEVar4->field0_0x0).field0_0x0.__vtable;
      while( true ) {
        pEVar2 = pEVar4->m_pNext;
        (*(code *)pEVar5[5].Write)
                  (fVar9,(int)((pEVar4->field0_0x0).m_otd.m_minPos + -7) +
                         (int)*(short *)&pEVar5[5].Read);
        if (pEVar2 == (EParticle *)0x0) break;
        pEVar5 = (pEVar2->field0_0x0).field0_0x0.__vtable;
        pEVar4 = pEVar2;
      }
      pEVar1 = this->m_pType;
    }
    if (pEVar1 != (ERParticleType *)0x0) {
      if (pEVar1->m_nShaders == 0) {
        iVar3 = *(int *)&this->m_active;
      }
      else {
        fVar6 = this->m_shaderTime + fVar9;
        this->m_shaderTime = fVar6;
        if (pEVar1->m_shaderLoopTime <= fVar6) {
          fVar6 = pEVar1->m_shaderLoopTime;
          fVar10 = this->m_shaderTime;
          while( true ) {
            fVar10 = fVar10 - fVar6;
            this->m_shaderTime = fVar10;
            fVar6 = pEVar1->m_shaderLoopTime;
            if (fVar10 < fVar6) break;
            fVar10 = this->m_shaderTime;
          }
        }
        iVar3 = *(int *)&this->m_active;
      }
      if (iVar3 != 0) {
        fVar6 = this->m_pType->m_interval;
        if (0.0 < fVar6) {
          fVar10 = this->m_lastEmit + fVar9;
          if (fVar6 <= fVar10) {
            fVar6 = this->m_pType->m_interval;
            while( true ) {
              fVar10 = fVar10 - fVar6;
              Move__14EIParticleEmitf(this,fVar6);
              pEVar4 = Emit__14EIParticleEmitf(this,fVar10);
              if (pEVar4 != (EParticle *)0x0) {
                pEVar5 = (pEVar4->field0_0x0).field0_0x0.__vtable;
                (*(code *)pEVar5[5].Write)
                          (fVar9,(int)((pEVar4->field0_0x0).m_otd.m_minPos + -7) +
                                 (int)*(short *)&pEVar5[5].Read);
              }
              if (fVar10 < this->m_pType->m_interval) break;
              fVar6 = this->m_pType->m_interval;
            }
          }
          this->m_lastEmit = fVar10;
          if (0.0 < fVar10) {
            Move__14EIParticleEmitf(this,fVar10);
          }
          pEVar1 = this->m_pType;
        }
        else {
          pEVar1 = this->m_pType;
        }
        pEVar5 = (pEVar1->field0_0x0).field0_0x0.__vtable;
        (*(code *)pEVar5[3].GetTypeInfo)
                  (fVar9,this->m_age,
                   (int)&(pEVar1->field0_0x0).field0_0x0.__vtable +
                   (int)*(short *)&pEVar5[3].SafeDelete,this,0);
      }
    }
    if (fVar8 <= fVar7) {
      Die__14EIParticleEmit(this);
    }
  }
  return;
}

void EIParticleEmit::Die() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIParticleEmit *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

EParticle* EIParticleEmit::Emit(float dt) {
	EParticle *pPcl;
	EParticle *pNewNode;
	EParticle *pNode;
	void *pNode;
	
  EParticle *pEVar1;
  EStorable__vtable *pEVar2;
  EParticle *pEVar3;
  
  pEVar3 = Get__12EParticleMani(&_pclman,(uint)this->m_pType->m_class);
  pEVar3->m_pOwnerList = &this->m_particles;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3->m_pLast = (this->m_particles).m_pTail;
  pEVar1 = (this->m_particles).m_pTail;
  if (pEVar1 == (EParticle *)0x0) {
    (this->m_particles).m_pHead = pEVar3;
  }
  else {
    pEVar1->m_pNext = pEVar3;
  }
  pEVar3->m_pNext = (EParticle *)0x0;
                    /* end of inlined section */
  (this->m_particles).m_pTail = pEVar3;
  if (pEVar3 == (EParticle *)0x0) {
    pEVar3 = (EParticle *)0x0;
  }
  else {
    pEVar2 = (pEVar3->field0_0x0).field0_0x0.__vtable;
    pEVar3->m_flags = pEVar3->m_flags & 0xfffe;
    (*(code *)pEVar2[5].EStorable)
              (dt,(int)((pEVar3->field0_0x0).m_otd.m_minPos + -7) +
                  (int)*(short *)&pEVar2[5].GetTypeVersion,this);
  }
  return pEVar3;
}

void EIParticleEmit::Move(float dt) {
  return;
}

ERShader* EIParticleEmit::GetShader() {
	ERParticleType *pType;
	int curShader;
	
  ERParticleType *pEVar1;
  ERShader **ppEVar2;
  ERShader *pEVar3;
  float fVar4;
  
  pEVar1 = this->m_pType;
  pEVar3 = (ERShader *)0x0;
  if (pEVar1->m_nShaders != 0) {
    if ((pEVar1->m_flags & 1) == 0) {
      fVar4 = (float)pEVar1->m_nShaders * (this->m_shaderTime / pEVar1->m_shaderLoopTime);
      ppEVar2 = pEVar1->m_pShaders;
    }
    else {
      fVar4 = Rndf__Fv();
      ppEVar2 = pEVar1->m_pShaders;
      fVar4 = fVar4 * (float)pEVar1->m_nShaders;
    }
    pEVar3 = ppEVar2[(int)fVar4];
  }
  return pEVar3;
}

void EIParticleEmit::Type(int type) {
  ERParticleType *pType;
  
                    /* inlined from c:/eor/src2/engine/particle/e_particletypeman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/particle/e_particletypeman.h */
  pType = (ERParticleType *)
          AddRef__16EResourceManagerUiP5EFilei(&_particletypeman.field0_0x0,type,(EFile *)0x0,0);
                    /* end of inlined section */
  if (pType != (ERParticleType *)0x0) {
    Type__14EIParticleEmitP14ERParticleType(this,pType);
    DelRef__9EResource((EResource *)pType);
  }
  return;
}

void EIParticleEmit::Type(char *szType) {
  ERParticleType *pType;
  
                    /* inlined from c:/eor/src2/engine/particle/e_particletypeman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/particle/e_particletypeman.h */
  pType = (ERParticleType *)
          AddRef__16EResourceManagerPCcP5EFilei(&_particletypeman.field0_0x0,szType,(EFile *)0x0,0);
                    /* end of inlined section */
  if (pType != (ERParticleType *)0x0) {
    Type__14EIParticleEmitP14ERParticleType(this,pType);
    DelRef__9EResource((EResource *)pType);
  }
  return;
}

void EIParticleEmit::Type(ERParticleType *pType) {
	EIParticleEmit *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = (ulong)(int)this->m_pType;
  if ((long)(int)pType != uVar6) {
    AddParticlesToOrphanList__14EIParticleEmit(this);
    if (this->m_pType != (ERParticleType *)0x0) {
      DelRef__9EResource(&this->m_pType->field0_0x0);
    }
    this->m_pType = pType;
    if ((long)(int)pType != 0) {
      AddRef__9EResource(&pType->field0_0x0);
      puVar1 = (undefined *)((int)&(pType->m_vDir).field0_0x0 + 7);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)&pType->m_vDir & 7;
      uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)&pType->m_vDir - uVar3) >> uVar3 * 8;
      fVar4 = (pType->m_vDir).field0_0x0.d[2];
      puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
      uVar2 = (uint)&this->m_vDir & 7;
      puVar5 = (ulong *)((int)&this->m_vDir - uVar2);
      *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (this->m_vDir).field0_0x0.d[2] = fVar4;
                    /* end of inlined section */
      this->m_lastEmit = pType->m_interval;
    }
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
    gpTypeInfo_EIParticleEmit =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_14EIParticleEmit_m_typeInfo,New__14EIParticleEmit,0,"EIParticleEmit",
                    &_14EIGameInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

EIParticleEmit* EIParticleEmit::New() {
  EIParticleEmit *pEVar1;
  
  pEVar1 = (EIParticleEmit *)__nw__14EIParticleEmitUi(0x124);
  pEVar1 = __14EIParticleEmit(pEVar1);
  return pEVar1;
}

void EIParticleEmit::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIParticleEmit *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EIParticleEmit::GetTypeInfo() {
  return &_14EIParticleEmit_m_typeInfo;
}

char* EIParticleEmit::GetTypeName() {
  return _14EIParticleEmit_m_typeInfo.m_name;
}

u32 EIParticleEmit::GetTypeKey() {
  return _14EIParticleEmit_m_typeInfo.m_key;
}

u16 EIParticleEmit::GetTypeVersion() {
  return _14EIParticleEmit_m_typeInfo.m_version;
}

u16 EIParticleEmit::GetReadVersion() {
  return _14EIParticleEmit_m_typeInfo.m_readVersion;
}

ETypeInfo* EIParticleEmit::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_14EIParticleEmit_m_typeInfo,New__14EIParticleEmit,version,"EIParticleEmit",
                      &_14EIGameInstance_m_typeInfo);
  return pEVar1;
}

EIParticleEmit* EIParticleEmit::CreateCopy() {
  EIParticleEmit *pEVar1;
  
  pEVar1 = (EIParticleEmit *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EIParticleEmit::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x124,0x1b);
  return pvVar1;
}

void* EIParticleEmit::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EIParticleEmit::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x124,0x1b);
  return;
}

void EIParticleEmit::Active(bool on) {
  *(int *)&this->m_active = (int)on;
  return;
}

void EIParticleEmit::SetDir(EVec3 &vDir) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&vDir->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vDir & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vDir - uVar3) >> uVar3 * 8;
  fVar4 = (vDir->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDir & 7;
  puVar5 = (ulong *)((int)&this->m_vDir - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vDir).field0_0x0.d[2] = fVar4;
  return;
}

void EIParticleEmit::GetDir(EVec3 &vDir) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vDir & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vDir - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vDir).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vDir->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vDir & 7;
  *(ulong *)((int)vDir - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)vDir - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vDir->field0_0x0).d[2] = fVar4;
  return;
}

void EIParticleEmit::SetPos(EVec3 &vPos) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vPos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vPos - uVar3) >> uVar3 * 8;
  fVar4 = (vPos->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPos & 7;
  puVar5 = (ulong *)((int)&this->m_vPos - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPos).field0_0x0.d[2] = fVar4;
  return;
}

void EIParticleEmit::GetPos(EVec3 &vPos) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vPos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vPos & 7;
  *(ulong *)((int)vPos - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)vPos - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vPos->field0_0x0).d[2] = fVar4;
  return;
}

void EIParticleEmit::GetVel(EVec3 &vVel) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&(this->m_vVel).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vVel & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vVel - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vVel).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vVel->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vVel & 7;
  *(ulong *)((int)vVel - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)vVel - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vVel->field0_0x0).d[2] = fVar4;
  return;
}

void EIParticleEmit::SetVel(EVec3 &vVel) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&vVel->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vVel & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vVel - uVar3) >> uVar3 * 8;
  fVar4 = (vVel->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vVel).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vVel & 7;
  puVar5 = (ulong *)((int)&this->m_vVel - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vVel).field0_0x0.d[2] = fVar4;
  return;
}

void EIParticleEmit::SetAcc(EVec3 &vAcc) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&vAcc->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vAcc & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vAcc - uVar3) >> uVar3 * 8;
  fVar4 = (vAcc->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vAcc).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vAcc & 7;
  puVar5 = (ulong *)((int)&this->m_vAcc - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vAcc).field0_0x0.d[2] = fVar4;
  return;
}

void EIParticleEmit::SetScale(float scale) {
  this->m_scale = scale;
  return;
}

void EIParticleEmit::SetLifetime(float lifeTime) {
  this->m_lifeTime = lifeTime;
  return;
}

float EIParticleEmit::GetScale() {
  return this->m_scale;
}

bool EIParticleEmit::EnableAll(bool enable) {
	bool prevState;
	
  __14EIParticleEmit_m_allEnabled = (int)enable;
  return _14EIParticleEmit_m_allEnabled;
}

void global constructors keyed to gpTypeInfo_EIParticleEmit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
