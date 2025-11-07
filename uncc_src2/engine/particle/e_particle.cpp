// STATUS: NOT STARTED

#include "e_particle.h"

ETypeInfo *gpTypeInfo_EParticle = NULL;

__vtbl_ptr_type EParticle virtual table[34] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::SafeDelete,
		/* .__delta2 = */ 24056
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::GetTypeInfo,
		/* .__delta2 = */ 24112
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::GetTypeName,
		/* .__delta2 = */ 24128
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::GetTypeKey,
		/* .__delta2 = */ 24144
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::GetTypeVersion,
		/* .__delta2 = */ 24160
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::~EParticle,
		/* .__delta2 = */ 21584
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
		/* .__pfn = */ &EParticle::Create,
		/* .__delta2 = */ 22336
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
		/* .__pfn = */ &EParticle::DrawBegin,
		/* .__delta2 = */ 23136
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::DrawSingle,
		/* .__delta2 = */ 23152
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::DrawEnd,
		/* .__delta2 = */ 23144
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticle::CreateOrderTable,
		/* .__delta2 = */ 22240
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

ETypeInfo EParticle::m_typeInfo;

EStream& operator<<(EStream &s, EParticle *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EParticle *&pD) {
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
  *pD = (EParticle *)pStorable;
  return s;
}

EParticle* EParticle::EParticle() {
  __9EInstance(&this->field0_0x0);
  this->m_pOT = (EOrderTableData *)0x0;
  this->m_pType = (ERParticleType *)0x0;
  this->m_pRShader = (ERShader *)0x0;
  this->m_flags = 0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9EParticle;
  this->m_radius = 1e+07;
  SetOverlapCauseFlags__9EInstanceUi(&this->field0_0x0,0);
  SetOverlapReceiveFlags__9EInstanceUi(&this->field0_0x0,0);
  (this->field0_0x0).m_instanceFlags = (this->field0_0x0).m_instanceFlags | 0x100;
  return this;
}

void EParticle::~EParticle(int __in_chrg) {
	void *p;
	
  EOrderTableData *pAddress;
  
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9EParticle;
  if (this->m_pRShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pRShader->field0_0x0);
  }
  if (this->m_pType == (ERParticleType *)0x0) {
    pAddress = this->m_pOT;
  }
  else {
    DelRef__9EResource(&this->m_pType->field0_0x0);
                    /* inlined from /eor/src2/engine/level/e_ordertabledata.h */
    pAddress = this->m_pOT;
  }
  _allocBucketFree__FPvUiUi(pAddress,0x30,0x30);
                    /* end of inlined section */
  ___9EInstance(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/particle/e_particle.h */
    _allocBucketFree__FPvUiUi(this,0xc4,0x25);
  }
                    /* end of inlined section */
  return;
}

void EParticle::Update() {
  EStorable__vtable *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/particle/e_particleman.h */
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[5].Write)
            (_dt * _pclman.m_timeScale,
             (int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar1[5].Read);
  return;
}

bool EParticle::Update(float dt) {
	float scaler;
	EVec3 &vVec;
	EVec3 &vVec;
	EVec3 *this;
	float scaler;
	EVec3 &vVec;
	
  ERParticleType *pEVar1;
  ERScript *pScript;
  EStorable__vtable *pEVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = this->m_lifeTime - dt;
  this->m_lifeTime = fVar4;
  if (fVar4 <= 0.0) {
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[5].GetTypeKey)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar2[5].GetTypeName
              );
    bVar3 = false;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar8 = (this->m_vVel).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar9 = (this->m_vVel).field0_0x0.d[2];
    pEVar1 = this->m_pType;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar6 = dt * dt * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar4 = (pEVar1->m_vPclAcc).field0_0x0.d[2];
    fVar5 = (pEVar1->m_vPclAcc).field0_0x0.d[1];
    (this->m_vPos).field0_0x0.d[0] =
         (this->m_vPos).field0_0x0.d[0] +
         dt * (this->m_vVel).field0_0x0.d[0] + fVar6 * (pEVar1->m_vPclAcc).field0_0x0.d[0];
    fVar7 = (this->m_vPos).field0_0x0.d[2];
    (this->m_vPos).field0_0x0.d[1] = (this->m_vPos).field0_0x0.d[1] + dt * fVar8 + fVar6 * fVar5;
    (this->m_vPos).field0_0x0.d[2] = fVar7 + dt * fVar9 + fVar6 * fVar4;
    pEVar1 = this->m_pType;
    fVar4 = (pEVar1->m_vPclAcc).field0_0x0.d[2];
    fVar5 = (pEVar1->m_vPclAcc).field0_0x0.d[1];
    (this->m_vVel).field0_0x0.d[0] =
         (this->m_vVel).field0_0x0.d[0] + dt * (pEVar1->m_vPclAcc).field0_0x0.d[0];
    (this->m_vVel).field0_0x0.d[1] = (this->m_vVel).field0_0x0.d[1] + dt * fVar5;
    (this->m_vVel).field0_0x0.d[2] = (this->m_vVel).field0_0x0.d[2] + dt * fVar4;
                    /* end of inlined section */
    pScript = this->m_pType->m_pUpdateScript;
    if (pScript != (ERScript *)0x0) {
      Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
                (&_scriptEngine,pScript,&this->field0_0x0,(EScriptParams *)0x0);
    }
    pEVar1 = this->m_pType;
    if (pEVar1->m_nEvents != 0) {
      pEVar2 = (pEVar1->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar2[3].GetTypeInfo)
                (dt,this->m_totalTime - this->m_lifeTime,
                 (int)&(pEVar1->field0_0x0).field0_0x0.__vtable +
                 (int)*(short *)&pEVar2[3].SafeDelete,this,1);
    }
    bVar3 = this->m_dead == '\0';
  }
  return bVar3;
}

EOrderTableData* EParticle::CreateOrderTable() {
  EShader *pEVar1;
  EOrderTableData *pEVar2;
  
                    /* inlined from /eor/src2/engine/level/e_ordertabledata.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/level/e_ordertabledata.h */
  pEVar2 = (EOrderTableData *)_allocBucketAlloc__FUiUi(0x30,0x30);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/level/e_ordertabledata.h */
                    /* end of inlined section */
  pEVar2->callbackParam1 = (uint)this;
  pEVar2->pfnCallback = OrderTableCallback__9EParticleP3ERCUiUi;
  pEVar2->pvPos = &this->m_vPos;
  pEVar2->nLights = 0;
  pEVar2->pmOrient = (EMat4 *)0x0;
  pEVar1 = this->m_pRShader->m_pShader;
  pEVar2->pLights = (ELights *)0x0;
  pEVar2->pShader = pEVar1;
  return pEVar2;
}

void EParticle::Create(EIParticleEmit *pEmit, float dt) {
	ERParticleType *pt;
	EVec3 vDir;
	EVec3 vEmit;
	float speed;
	EVec3 &vVec;
	EIParticleEmit *this;
	float scaler;
	
  undefined *puVar1;
  EStorable__vtable *pEVar2;
  ERScript *pScript;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ERShader *this_00;
  EOrderTableData *pEVar6;
  ERParticleType *pEVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EVec3 vDir;
  EVec3 vEmit;
  
  this->m_dead = '\0';
  pEVar7 = pEmit->m_pType;
  fVar8 = SignedRndf__Fv();
  vDir.field0_0x0.d[0] =
       (pEmit->m_vPos).field0_0x0.d[0] + fVar8 * (pEVar7->m_vPosSpread).field0_0x0.d[0];
  fVar8 = SignedRndf__Fv();
  vDir.field0_0x0.d[1] =
       (pEmit->m_vPos).field0_0x0.d[1] + fVar8 * (pEVar7->m_vPosSpread).field0_0x0.d[1];
  fVar8 = SignedRndf__Fv();
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  vDir.field0_0x0.d[2] =
       (pEmit->m_vPos).field0_0x0.d[2] + fVar8 * (pEVar7->m_vPosSpread).field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(vDir.field0_0x0.d[1],vDir.field0_0x0.d[0]) >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vPos & 7;
  puVar4 = (ulong *)((int)&this->m_vPos - uVar3);
  *puVar4 = CONCAT44(vDir.field0_0x0.d[1],vDir.field0_0x0.d[0]) << uVar3 * 8 |
            *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vPos).field0_0x0.d[2] = vDir.field0_0x0.d[2];
  fVar9 = Rndf__Fv();
  fVar11 = pEVar7->m_lifeTimeSpread;
  fVar8 = pEVar7->m_lifeTime;
  this->m_pType = pEVar7;
  fVar8 = fVar8 + fVar9 * fVar11;
  this->m_totalTime = fVar8;
  this->m_lifeTime = fVar8 - dt;
  AddRef__9EResource(&pEVar7->field0_0x0);
  if (this->m_pRShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pRShader->field0_0x0);
  }
  this_00 = GetShader__14EIParticleEmit(pEmit);
  this->m_pRShader = this_00;
  if (this_00 != (ERShader *)0x0) {
    AddRef__9EResource(&this_00->field0_0x0);
  }
                    /* end of inlined section */
  if ((this->m_flags & 1U) == 0) {
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[7].GetTypeInfo)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar2[7].SafeDelete,
               &vDir,&pEmit->m_vDir);
    pEVar7 = this->m_pType;
  }
  else {
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[7].GetTypeInfo)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar2[7].SafeDelete,
               &vDir,&this->m_pType->m_vDir);
    pEVar7 = this->m_pType;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar12 = (pEmit->m_vVel).field0_0x0.d[2];
                    /* end of inlined section */
  fVar11 = pEVar7->m_velGain;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (pEmit->m_vVel).field0_0x0.d[1];
  fVar10 = (pEmit->m_vVel).field0_0x0.d[0];
                    /* end of inlined section */
  fVar9 = Rndf__Fv();
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar9 = (this->m_pType->m_speed + fVar9 * this->m_pType->m_speedSpread) * pEmit->m_scale;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar5 = CONCAT44(fVar11 * fVar8 + fVar9 * vDir.field0_0x0.d[1],
                   fVar11 * fVar10 + fVar9 * vDir.field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&(this->m_vVel).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vVel & 7;
  puVar4 = (ulong *)((int)&this->m_vVel - uVar3);
  *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_vVel).field0_0x0.d[2] = fVar11 * fVar12 + fVar9 * vDir.field0_0x0.d[2];
  if ((this->field0_0x0).m_pLevel == (ERLevel *)0x0) {
    this->m_pOT = (EOrderTableData *)0x0;
  }
  else {
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    pEVar6 = (EOrderTableData *)
             (**(code **)(pEVar2 + 7))
                       ((int)((this->field0_0x0).m_otd.m_minPos + -7) +
                        (int)*(short *)&pEVar2[6].Write);
    this->m_pOT = pEVar6;
  }
  pScript = this->m_pType->m_pCreateScript;
  if (pScript != (ERScript *)0x0) {
    Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
              (&_scriptEngine,pScript,&this->field0_0x0,(EScriptParams *)0x0);
  }
  return;
}

void EParticle::Impact() {
  ERScript *pScript;
  
  pScript = this->m_pType->m_pImpactScript;
  if (pScript != (ERScript *)0x0) {
    Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
              (&_scriptEngine,pScript,&this->field0_0x0,(EScriptParams *)0x0);
  }
  return;
}

void EParticle::Die() {
  ushort uVar1;
  ERScript *pScript;
  ERLevel *this_00;
  
  this->m_dead = '\x01';
  pScript = this->m_pType->m_pDieScript;
  if (pScript != (ERScript *)0x0) {
    Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
              (&_scriptEngine,pScript,&this->field0_0x0,(EScriptParams *)0x0);
  }
  this_00 = (this->field0_0x0).m_pLevel;
  if (this_00 == (ERLevel *)0x0) {
    uVar1 = this->m_flags;
  }
  else {
    RemoveInstance__7ERLevelP9EInstance(this_00,&this->field0_0x0);
    uVar1 = this->m_flags;
  }
  if ((uVar1 & 1) != 0) {
    DelRef__9EResource(&this->m_pType->field0_0x0);
    this->m_pType = (ERParticleType *)0x0;
  }
  Free__12EParticleManP9EParticlei(&_pclman,this,(int)this->m_type);
  return;
}

void EParticle::DrawBegin(ERC *pRC, int num) {
  return;
}

void EParticle::DrawEnd(ERC *pRC) {
  return;
}

void EParticle::DrawSingle(ERC *pRC) {
  return;
}

void EParticle::Draw(ERC *prc, u32 renderFlags) {
  this->m_pOT->renderFlags = renderFlags;
  InsertInOrderTable__7ERLevelR15EOrderTableData((this->field0_0x0).m_pLevel,this->m_pOT);
  return;
}

void EParticle::OrderTableCallback(ERC *pRC, u32 param1, u32 param2) {
  (*(code *)pRC->__vtable->NewEntry)
            ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->Terminate,1,param2);
  (**(code **)(*(int *)param1 + 0xe4))(param1 + (int)*(short *)(*(int *)param1 + 0xe0),pRC,1);
  (**(code **)(*(int *)param1 + 0xec))(param1 + (int)*(short *)(*(int *)param1 + 0xe8),pRC);
  (**(code **)(*(int *)param1 + 0xf4))(param1 + (int)*(short *)(*(int *)param1 + 0xf0),pRC);
  return;
}

void EParticle::GetDir(EVec3 &vDir, EVec3 &vEmitDir) {
	float spread;
	EVec3 vRndDir;
	EVec3 &vVec;
	float scaler;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec3 vRndDir;
  
  fVar8 = this->m_pType->m_dirSpread;
  if (fVar8 == 0.0) {
    puVar1 = (undefined *)((int)&vEmitDir->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar2 = (uint)vEmitDir & 7;
    uVar5 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            (long)(int)this->m_pType & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
            -1L << (8 - uVar2) * 8 | *(ulong *)((int)vEmitDir - uVar2) >> uVar2 * 8;
    fVar8 = (vEmitDir->field0_0x0).d[2];
    puVar1 = (undefined *)((int)&vDir->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)vDir & 7;
    *(ulong *)((int)vDir - uVar3) =
         uVar5 << uVar3 * 8 | *(ulong *)((int)vDir - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
    ;
    (vDir->field0_0x0).d[2] = fVar8;
  }
  else {
    fVar6 = Rndf__Fv();
    vRndDir.field0_0x0.d[0] = (fVar6 - 0.5) + (fVar6 - 0.5);
    fVar6 = Rndf__Fv();
    vRndDir.field0_0x0.d[1] = (fVar6 - 0.5) + (fVar6 - 0.5);
    fVar6 = Rndf__Fv();
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    vRndDir.field0_0x0.d[2] = (fVar6 - 0.5) + (fVar6 - 0.5);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar6 = sqrtf(vRndDir.field0_0x0.d[0] * vRndDir.field0_0x0.d[0] +
                  vRndDir.field0_0x0.d[1] * vRndDir.field0_0x0.d[1] +
                  vRndDir.field0_0x0.d[2] * vRndDir.field0_0x0.d[2]);
    if (fVar6 != 0.0) {
      fVar6 = 1.0 / fVar6;
      vRndDir.field0_0x0.d[0] = vRndDir.field0_0x0.d[0] * fVar6;
      vRndDir.field0_0x0.d[2] = vRndDir.field0_0x0.d[2] * fVar6;
      vRndDir.field0_0x0.d[1] = vRndDir.field0_0x0.d[1] * fVar6;
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar7 = (vEmitDir->field0_0x0).d[2];
                    /* end of inlined section */
    fVar6 = 1.0 - fVar8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar5 = CONCAT44(fVar6 * (vEmitDir->field0_0x0).d[1] + fVar8 * vRndDir.field0_0x0.d[1],
                     fVar6 * (vEmitDir->field0_0x0).d[0] + fVar8 * vRndDir.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&vDir->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)vDir & 7;
    *(ulong *)((int)vDir - uVar3) =
         uVar5 << uVar3 * 8 | *(ulong *)((int)vDir - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
    ;
    (vDir->field0_0x0).d[2] = fVar6 * fVar7 + fVar8 * vRndDir.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar8 = sqrtf((vDir->field0_0x0).d[0] * (vDir->field0_0x0).d[0] +
                  (vDir->field0_0x0).d[1] * (vDir->field0_0x0).d[1] +
                  (vDir->field0_0x0).d[2] * (vDir->field0_0x0).d[2]);
    if (fVar8 != 0.0) {
      fVar8 = 1.0 / fVar8;
      fVar7 = (vDir->field0_0x0).d[1];
      fVar6 = (vDir->field0_0x0).d[2];
      (vDir->field0_0x0).d[0] = (vDir->field0_0x0).d[0] * fVar8;
      (vDir->field0_0x0).d[2] = fVar6 * fVar8;
      (vDir->field0_0x0).d[1] = fVar7 * fVar8;
    }
  }
  return;
}

void EParticle::SetLevel(ERLevel *pLevel) {
	EInstance *this;
	ERLevel *pLevel;
	
  EStorable__vtable *pEVar1;
  EOrderTableData *pEVar2;
  
  if (this->m_pOT == (EOrderTableData *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    pEVar2 = (EOrderTableData *)
             (**(code **)(pEVar1 + 7))
                       ((int)((this->field0_0x0).m_otd.m_minPos + -7) +
                        (int)*(short *)&pEVar1[6].Write);
    this->m_pOT = pEVar2;
  }
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
  (this->field0_0x0).m_pLevel = pLevel;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* end of inlined section */
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/particle/e_particle.h */
    gpTypeInfo_EParticle =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9EParticle_m_typeInfo,New__9EParticle,0,"EParticle",&_9EInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

EParticle* EParticle::New() {
  EParticle *pEVar1;
  
  pEVar1 = (EParticle *)__nw__9EParticleUi(0xc4);
  pEVar1 = __9EParticle(pEVar1);
  return pEVar1;
}

void EParticle::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EParticle *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar1[1].GetTypeName
               ,3);
  }
  return;
}

ETypeInfo* EParticle::GetTypeInfo() {
  return &_9EParticle_m_typeInfo;
}

char* EParticle::GetTypeName() {
  return _9EParticle_m_typeInfo.m_name;
}

u32 EParticle::GetTypeKey() {
  return _9EParticle_m_typeInfo.m_key;
}

u16 EParticle::GetTypeVersion() {
  return _9EParticle_m_typeInfo.m_version;
}

u16 EParticle::GetReadVersion() {
  return _9EParticle_m_typeInfo.m_readVersion;
}

ETypeInfo* EParticle::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_9EParticle_m_typeInfo,New__9EParticle,version,"EParticle",
                      &_9EInstance_m_typeInfo);
  return pEVar1;
}

EParticle* EParticle::CreateCopy() {
  EParticle *pEVar1;
  
  pEVar1 = (EParticle *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EParticle::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0xc4,0x25);
  return pvVar1;
}

void* EParticle::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EParticle::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0xc4,0x25);
  return;
}

u32 EParticle::VisibilityTest(EPortalWindow &win, u32 parentVis) {
  return 0x15;
}

void global constructors keyed to gpTypeInfo_EParticle() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
