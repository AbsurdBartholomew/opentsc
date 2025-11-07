// STATUS: NOT STARTED

#include "e_rparticletype.h"

ETypeInfo *gpTypeInfo_ERParticleType = NULL;

__vtbl_ptr_type ERParticleType virtual table[16] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERParticleType::SafeDelete,
		/* .__delta2 = */ -32608
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERParticleType::GetTypeInfo,
		/* .__delta2 = */ -32552
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERParticleType::GetTypeName,
		/* .__delta2 = */ -32536
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERParticleType::GetTypeKey,
		/* .__delta2 = */ -32520
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERParticleType::GetTypeVersion,
		/* .__delta2 = */ -32504
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERParticleType::~ERParticleType,
		/* .__delta2 = */ 29184
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Read,
		/* .__delta2 = */ 9848
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Write,
		/* .__delta2 = */ 9808
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Init,
		/* .__delta2 = */ 10728
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERParticleType::Reload,
		/* .__delta2 = */ 29592
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
		/* .__pfn = */ &ERParticleType::Shaders,
		/* .__delta2 = */ 31864
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERParticleType::Emit,
		/* .__delta2 = */ 32048
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERParticleType::ProcessEvents,
		/* .__delta2 = */ 32560
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ERParticleType::m_typeInfo;

EStream& operator<<(EStream &s, ERParticleType *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERParticleType *&pD) {
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
  *pD = (ERParticleType *)pStorable;
  return s;
}

ERParticleType* ERParticleType::ERParticleType() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
  __9EResource(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_14ERParticleType;
  __14EIParticleEmit(&this->m_emit);
  puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDir & 7;
  puVar3 = (ulong *)((int)&this->m_vDir - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vDir).field0_0x0.d[2] = 1.0;
  puVar1 = (undefined *)((int)&(this->m_vPclAcc).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPclAcc & 7;
  puVar3 = (ulong *)((int)&this->m_vPclAcc - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPclAcc).field0_0x0.d[2] = -9.8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  this->m_dirSpread = 0.15;
  this->m_velGain = 0.5;
  this->m_interval = 0.025;
  this->m_lifeTime = 3.5;
  this->m_speed = 13.0;
  this->m_speedSpread = 4.0;
  this->m_intervalSpread = 0.0;
  this->m_lifeTimeSpread = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vPosSpread).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPosSpread & 7;
  puVar3 = (ulong *)((int)&this->m_vPosSpread - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPosSpread).field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  this->m_class = '\0';
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  (this->m_vStartColor).field0_0x0.d[0] = 1.0;
  (this->m_vStartColor).field0_0x0.d[1] = 1.0;
  (this->m_vStartColor).field0_0x0.d[2] = 1.0;
  (this->m_vStartColor).field0_0x0.d[3] = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->m_vEndColor).field0_0x0.d[0] = 1.0;
  (this->m_vEndColor).field0_0x0.d[1] = 1.0;
  (this->m_vEndColor).field0_0x0.d[2] = 1.0;
  (this->m_vEndColor).field0_0x0.d[3] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vSize).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vSize & 7;
  puVar3 = (ulong *)((int)&this->m_vSize - uVar2);
  *puVar3 = 0x3f8000003f800000 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vSize).field0_0x0.d[2] = 1.0;
  puVar1 = (undefined *)((int)&(this->m_vGrowthVel).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vGrowthVel & 7;
  puVar3 = (ulong *)((int)&this->m_vGrowthVel - uVar2);
  *puVar3 = 0x3f8000003f800000 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vGrowthVel).field0_0x0.d[2] = 1.0;
  puVar1 = (undefined *)((int)&(this->m_vGrowthAcc).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vGrowthAcc & 7;
  puVar3 = (ulong *)((int)&this->m_vGrowthAcc - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vGrowthAcc).field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  this->m_shaderLoopTime = 1.0;
  this->m_pShaders = (ERShader **)0x0;
  this->m_nShaders = 0;
  this->m_flags = 0;
  puVar1 = (undefined *)((int)&(this->m_vRotVel).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vRotVel & 7;
  puVar3 = (ulong *)((int)&this->m_vRotVel - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vRotVel).field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vSizeSpread).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vSizeSpread & 7;
  puVar3 = (ulong *)((int)&this->m_vSizeSpread - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vSizeSpread).field0_0x0.d[2] = 0.0;
  this->m_version = 6;
  this->m_nEvents = 0;
  this->m_events = (EParticleEvent *)0x0;
  this->m_nScripts = 0;
  this->m_pImpactScript = (ERScript *)0x0;
  this->m_pDieScript = (ERScript *)0x0;
  this->m_pUpdateScript = (ERScript *)0x0;
  this->m_pCreateScript = (ERScript *)0x0;
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  *(undefined4 *)&(this->m_emit).m_active = 0;
  return this;
}

void ERParticleType::~ERParticleType(int __in_chrg) {
	void *p;
	
  (this->m_emit).m_pType = (ERParticleType *)0x0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_14ERParticleType;
  Deallocate__14ERParticleType(this);
  ___14EIParticleEmit(&this->m_emit,2);
  ___9EResource(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/particle/e_rparticletype.h */
    _allocBucketFree__FPvUiUi(this,0x230,0x1e);
  }
                    /* end of inlined section */
  return;
}

void ERParticleType::Deallocate() {
  DeallocateShaders__14ERParticleType(this);
  DeallocateEvents__14ERParticleType(this);
  return;
}

void ERParticleType::DeallocateShaders() {
	int i;
	
  ERShader **ppEVar1;
  int iVar2;
  
  if (this->m_nShaders != 0) {
    if (0 < this->m_nShaders) {
      ppEVar1 = this->m_pShaders;
      iVar2 = 0;
      while( true ) {
        DelRef__9EResource(&ppEVar1[iVar2]->field0_0x0);
        if (this->m_nShaders <= iVar2 + 1) break;
        ppEVar1 = this->m_pShaders;
        iVar2 = iVar2 + 1;
      }
    }
    _memmanFree__FPv(this->m_pShaders);
    this->m_nShaders = 0;
  }
  return;
}

void ERParticleType::DeallocateEvents() {
	int i;
	
  EResource **ppEVar1;
  EParticleEvent *pEVar2;
  int iVar3;
  int iVar4;
  
  if (this->m_nEvents != 0) {
    iVar3 = 0;
    if (0 < this->m_nEvents) {
      iVar4 = 0;
      pEVar2 = this->m_events;
      while( true ) {
        iVar3 = iVar3 + 1;
        ppEVar1 = (EResource **)((int)&pEVar2->pScript + iVar4);
        iVar4 = iVar4 + 0xc;
        DelRef__9EResource(*ppEVar1);
        if (this->m_nEvents <= iVar3) break;
        pEVar2 = this->m_events;
      }
    }
    _memmanFree__FPv(this->m_events);
    this->m_nEvents = 0;
  }
  return;
}

void ERParticleType::Reload(EStream &s) {
  Deallocate__14ERParticleType(this);
  Load__14ERParticleTypeR7EStream(this,s);
  return;
}

void ERParticleType::Load(EStream &s) {
	int nShaders;
	unsigned int shaderChecksums[64];
	int i;
	u32 createScriptId;
	u32 updateScriptId;
	u32 dieScriptId;
	u32 impactScriptId;
	EVec3 vMin;
	EVec3 vMax;
	float maxSpeed;
	float maxTime;
	float maxSize;
	EVec3 vHalfDiag;
	EStream &s;
	EStream &s;
	EStream &s;
	EStream &s;
	EStream &s;
	EStream &s;
	u32 scriptID;
	EStream &s;
	EStream &s;
	EStream &s;
	int &d;
	EVec3 vDirMin;
	EVec3 vDirMax;
	float dotMin;
	float distAlongMin;
	float acc;
	float min;
	float dotMax;
	float distAlongMax;
	float max;
	int value;
	int value;
	EVec3 *this;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	
  undefined *puVar1;
  EStorable__vtable *pEVar2;
  uint uVar3;
  ulong *puVar4;
  EStream *pEVar5;
  ERScript *pEVar6;
  EParticleEvent *pEVar7;
  EResource *pEVar8;
  EStream__vtable *pEVar9;
  EVec3 *pEVar10;
  EVec3 *pEVar11;
  EVec3 *pEVar12;
  EVec3 *pEVar13;
  EVec3 *pEVar14;
  EVec3 *pEVar15;
  EString *d;
  uint *puVar16;
  int iVar17;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar18;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint shaderChecksums [64];
  EVec3 vMin;
  EVec3 vMax;
  EVec3 vDirMin;
  EVec3 vDirMax;
  int nShaders;
  uint createScriptId;
  uint updateScriptId;
  uint dieScriptId;
  uint impactScriptId;
  uint scriptID;
  EVec3 *local_f8;
  EVec3 *local_f4;
  EVec3 *local_f0;
  EVec3 *local_ec;
  EVec3 *local_e8;
  EVec3 *local_e4;
  EVec3 *local_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
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
  
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  d = &(this->field0_0x0).m_name;
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar18 = 0;
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  __rs__FR7EStreamR7EString(s,d);
  Empty__7EString(d);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_version,4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_flags,4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_class,1);
                    /* end of inlined section */
  pEVar5 = __rs__FR7EStreamR5EVec3(s,&this->m_vDir);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)pEVar5->__vtable[1].GetPos)
            (&pEVar5->m_streamingStructure + *(short *)&pEVar5->__vtable[1].EStream,
             &this->m_dirSpread,4);
  (*(code *)pEVar5->__vtable[1].GetPos)
            (&pEVar5->m_streamingStructure + *(short *)&pEVar5->__vtable[1].EStream,&this->m_speed,4
            );
  (*(code *)pEVar5->__vtable[1].GetPos)
            (&pEVar5->m_streamingStructure + *(short *)&pEVar5->__vtable[1].EStream,&this->m_velGain
             ,4);
  (*(code *)pEVar5->__vtable[1].GetPos)
            (&pEVar5->m_streamingStructure + *(short *)&pEVar5->__vtable[1].EStream,
             &this->m_interval,4);
  (*(code *)pEVar5->__vtable[1].GetPos)
            (&pEVar5->m_streamingStructure + *(short *)&pEVar5->__vtable[1].EStream,
             &this->m_intervalSpread,4);
                    /* end of inlined section */
  pEVar5 = __rs__FR7EStreamR5EVec3(pEVar5,&this->m_vPosSpread);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)pEVar5->__vtable[1].GetPos)
            (&pEVar5->m_streamingStructure + *(short *)&pEVar5->__vtable[1].EStream,
             &this->m_lifeTime,4);
                    /* end of inlined section */
  pEVar5 = __rs__FR7EStreamR5EVec3(pEVar5,&this->m_vPclAcc);
  pEVar5 = __rs__FR7EStreamR5EVec3(pEVar5,&this->m_vGrowthAcc);
  pEVar5 = __rs__FR7EStreamR5EVec3(pEVar5,&this->m_vGrowthVel);
  pEVar5 = __rs__FR7EStreamR5EVec3(pEVar5,&this->m_vSize);
  pEVar5 = __rs__FR7EStreamR5EVec4(pEVar5,&this->m_vStartColor);
  pEVar5 = __rs__FR7EStreamR5EVec4(pEVar5,&this->m_vEndColor);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)pEVar5->__vtable[1].GetPos)
            (&pEVar5->m_streamingStructure + *(short *)&pEVar5->__vtable[1].EStream,
             &this->m_shaderLoopTime,4);
  (*(code *)pEVar5->__vtable[1].GetPos)
            (&pEVar5->m_streamingStructure + *(short *)&pEVar5->__vtable[1].EStream,
             &this->m_lifeTimeSpread,4);
  (*(code *)pEVar5->__vtable[1].GetPos)
            (&pEVar5->m_streamingStructure + *(short *)&pEVar5->__vtable[1].EStream,
             &this->m_speedSpread,4);
                    /* end of inlined section */
  pEVar5 = __rs__FR7EStreamR5EVec3(pEVar5,&this->m_vRotVel);
  pEVar5 = __rs__FR7EStreamR5EVec3(pEVar5,&this->m_vRotStart);
  __rs__FR7EStreamR5EVec3(pEVar5,&this->m_vSizeSpread);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&nShaders,4);
                    /* end of inlined section */
  local_f8 = &vDirMin;
  local_f4 = &vDirMax;
  local_e4 = &vMin;
  local_e0 = &vMax;
  if (0 < nShaders) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    pEVar9 = s->__vtable;
    puVar16 = shaderChecksums;
    while( true ) {
                    /* end of inlined section */
      iVar18 = iVar18 + 1;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)pEVar9[1].GetPos)(&s->m_streamingStructure + *(short *)&pEVar9[1].EStream,puVar16,4)
      ;
                    /* end of inlined section */
      if (nShaders <= iVar18) break;
      pEVar9 = s->__vtable;
      puVar16 = (uint *)((int)puVar16 + 4);
    }
  }
  if (nShaders != 0) {
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[2].Read)
              (this->m_shaderLoopTime,
               (int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar2[2].EStorable,
               nShaders,shaderChecksums);
  }
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&createScriptId,4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&updateScriptId,4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&dieScriptId,4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&impactScriptId,4);
                    /* end of inlined section */
  if (createScriptId != 0) {
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
    pEVar6 = (ERScript *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_scriptman.field0_0x0,createScriptId,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pCreateScript = pEVar6;
  }
  if (updateScriptId != 0) {
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
    pEVar6 = (ERScript *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_scriptman.field0_0x0,updateScriptId,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pUpdateScript = pEVar6;
  }
  if (dieScriptId != 0) {
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
    pEVar6 = (ERScript *)
             AddRef__16EResourceManagerUiP5EFilei(&_scriptman.field0_0x0,dieScriptId,(EFile *)0x0,0)
    ;
                    /* end of inlined section */
    this->m_pDieScript = pEVar6;
  }
  if (impactScriptId != 0) {
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
    pEVar6 = (ERScript *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_scriptman.field0_0x0,impactScriptId,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pImpactScript = pEVar6;
  }
  local_f0 = &this->m_vPosSpread;
  local_ec = &this->m_vPclAcc;
  fVar19 = (this->m_vRotVel).field0_0x0.d[1];
  local_e8 = &this->m_vGrowthAcc;
  fVar20 = (this->m_vRotVel).field0_0x0.d[2];
  (this->m_vRotVel).field0_0x0.d[0] = (this->m_vRotVel).field0_0x0.d[0] * 6.283185;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
  (this->m_vRotVel).field0_0x0.d[1] = fVar19 * 6.283185;
  (this->m_vRotVel).field0_0x0.d[2] = fVar20 * 6.283185;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_nEvents,4);
                    /* end of inlined section */
  if (this->m_nEvents != 0) {
    iVar18 = 0;
    pEVar7 = (EParticleEvent *)_memmanAlloc__FUiUi(this->m_nEvents * 0xc,4);
    this->m_events = pEVar7;
    if (0 < this->m_nEvents) {
      iVar17 = 0;
      do {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
        iVar18 = iVar18 + 1;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
        (*(code *)s->__vtable[1].GetPos)
                  (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                   (int)&this->m_events->time + iVar17,4);
        (*(code *)s->__vtable[1].GetPos)
                  (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&scriptID,4);
        (*(code *)s->__vtable[1].GetPos)
                  (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
                   (int)&this->m_events->perParticle + iVar17,4);
        pEVar8 = AddRef__16EResourceManagerUiP5EFilei
                           (&_scriptman.field0_0x0,scriptID,(EFile *)0x0,0);
                    /* end of inlined section */
        *(EResource **)((int)&this->m_events->pScript + iVar17) = pEVar8;
        iVar17 = iVar17 + 0xc;
      } while (iVar18 < this->m_nEvents);
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar22 = (this->m_vSize).field0_0x0.d[0];
                    /* end of inlined section */
  iVar18 = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = (this->m_vSize).field0_0x0.d[1];
  fVar19 = (this->m_vSize).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar26 = this->m_speed + this->m_speedSpread;
  fVar25 = this->m_lifeTime + this->m_lifeTimeSpread;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = sqrtf(fVar22 * fVar22 + fVar20 * fVar20 + fVar19 * fVar19);
  fVar19 = (this->m_vSizeSpread).field0_0x0.d[0];
  fVar22 = (this->m_vSizeSpread).field0_0x0.d[1];
  fVar23 = (this->m_vSizeSpread).field0_0x0.d[2];
  fVar22 = sqrtf(fVar19 * fVar19 + fVar22 * fVar22 + fVar23 * fVar23);
  fVar19 = (this->m_vGrowthVel).field0_0x0.d[0];
  fVar23 = (this->m_vGrowthVel).field0_0x0.d[1];
  fVar24 = (this->m_vGrowthVel).field0_0x0.d[2];
  fVar23 = sqrtf(fVar19 * fVar19 + fVar23 * fVar23 + fVar24 * fVar24);
  fVar19 = (this->m_vGrowthAcc).field0_0x0.d[0];
  fVar19 = sqrtf(fVar19 * fVar19 + (local_e8->field0_0x0).d[1] * (local_e8->field0_0x0).d[1] +
                 (local_e8->field0_0x0).d[2] * (local_e8->field0_0x0).d[2]);
  pEVar12 = local_e0;
  pEVar11 = local_e4;
  pEVar10 = local_f0;
                    /* end of inlined section */
  fVar21 = (this->m_vDir).field0_0x0.d[0];
  fVar24 = this->m_dirSpread;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vDirMin.field0_0x0.d[2] = 0.0;
  vDirMin.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vDirMin.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  vMin.field0_0x0._0_8_ = 0;
  puVar1 = (undefined *)((int)&vMin.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  pEVar15 = local_ec;
  pEVar14 = local_f4;
  vMin.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vDirMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vDirMin.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  fVar19 = (fVar20 + fVar22 + fVar23 * fVar25 + fVar19 * fVar25 * fVar25 * 0.5) * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vDirMin.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  vMax.field0_0x0._0_8_ = 0;
  puVar1 = (undefined *)((int)&vMax.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  vMax.field0_0x0.d[2] = 0.0;
  pEVar13 = local_f8;
  do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vDirMax.field0_0x0.d[2] = 0.0;
    vDirMax.field0_0x0.d[1] = 0.0;
    vDirMax.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    (pEVar13->field0_0x0).d[0] = -1.0;
    (pEVar14->field0_0x0).d[0] = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar20 = fVar21 * 0.0 + (this->m_vDir).field0_0x0.d[1] * 0.0 +
             (this->m_vDir).field0_0x0.d[2] * 0.0 + fVar24;
    if (1.0 < fVar20) {
      fVar20 = 1.0;
    }
    fVar22 = (pEVar15->field0_0x0).d[0] * fVar25 * fVar25 * 0.5;
    fVar20 = ((-(pEVar10->field0_0x0).d[0] - fVar20 * fVar26 * fVar25) + fVar22) - fVar19;
    if (fVar20 < (pEVar11->field0_0x0).d[0]) {
      (pEVar11->field0_0x0).d[0] = fVar20;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar20 = (this->m_vDir).field0_0x0.d[0] * 0.0 + (this->m_vDir).field0_0x0.d[1] * 0.0 +
             (this->m_vDir).field0_0x0.d[2] * 0.0 + this->m_dirSpread;
    if (1.0 < fVar20) {
      fVar20 = 1.0;
    }
    fVar20 = (pEVar10->field0_0x0).d[0] + fVar20 * fVar26 * fVar25 + fVar22 + fVar19;
    if ((pEVar12->field0_0x0).d[0] < fVar20) {
      (pEVar12->field0_0x0).d[0] = fVar20;
    }
                    /* end of inlined section */
    iVar18 = iVar18 + 1;
    pEVar12 = (EVec3 *)((int)&pEVar12->field0_0x0 + 4);
    pEVar11 = (EVec3 *)((int)&pEVar11->field0_0x0 + 4);
    pEVar10 = (EVec3 *)((int)&pEVar10->field0_0x0 + 4);
    pEVar15 = (EVec3 *)((int)&pEVar15->field0_0x0 + 4);
    pEVar14 = (EVec3 *)((int)&pEVar14->field0_0x0 + 4);
    pEVar13 = (EVec3 *)((int)&pEVar13->field0_0x0 + 4);
  } while (iVar18 < 3);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vDirMin.field0_0x0.d[0] = 0.0;
  vDirMin.field0_0x0.d[1] = 0.0;
  vDirMin.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_bs).vCenter.field0_0x0 + 7);
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)(0 >> (7 - uVar3) * 8);
  uVar3 = (uint)&this->m_bs & 7;
  puVar4 = (ulong *)((int)&this->m_bs - uVar3);
  *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_bs).vCenter.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar19 = sqrtf(0.0);
                    /* end of inlined section */
  (this->m_bs).radius = fVar19;
  (this->m_emit).m_pType = this;
  return;
}

void ERParticleType::Shaders(int nShaders, float loopTime, u32 *shaderIDs) {
	int i;
	
  ERShader **ppEVar1;
  ERShader *pEVar2;
  int iVar3;
  int iVar4;
  
  DeallocateShaders__14ERParticleType(this);
  this->m_shaderLoopTime = loopTime;
  this->m_nShaders = nShaders;
  if (nShaders != 0) {
    ppEVar1 = (ERShader **)_memmanAlloc__FUiUi(nShaders << 2,4);
    this->m_pShaders = ppEVar1;
  }
  iVar3 = 0;
  if (0 < nShaders) {
    do {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
      pEVar2 = (ERShader *)
               AddRef__16EResourceManagerUiP5EFilei
                         (&_shaderman.field0_0x0,*shaderIDs,(EFile *)0x0,0);
                    /* end of inlined section */
      shaderIDs = shaderIDs + 1;
      iVar4 = iVar3 + 1;
      this->m_pShaders[iVar3] = pEVar2;
      iVar3 = iVar4;
    } while (iVar4 < nShaders);
  }
  return;
}

void ERParticleType::Emit(EVec3 &vPos, EVec3 &vVel, ERLevel *pLevel) {
	EParticle *pPcl;
	EVec3 vOldDir;
	float speed;
	EIParticleEmit *this;
	EVec3 &vPos;
	EVec3 &vVel;
	EVec3 *this;
	EVec3 *this;
	float scaler;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  EParticle *pPcl;
  ulong uVar6;
  EStorable__vtable *pEVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  EVec3 vOldDir;
  
  uVar9 = (ulong)(int)vVel;
  uVar8 = (ulong)this->m_class;
  pPcl = Get__12EParticleMani(&_pclman,(uint)this->m_class);
  uVar6 = (ulong)(int)pPcl;
  if (uVar6 != 0) {
    if (pLevel != (ERLevel *)0x0) {
      uVar9 = 0;
      (pPcl->field0_0x0).m_instanceFlags = (pPcl->field0_0x0).m_instanceFlags | 0x100;
      InsertInstance__7ERLevelP9EInstanceT1(pLevel,&pPcl->field0_0x0,(EInstance *)0x0);
      uVar8 = uVar6;
    }
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
                    /* end of inlined section */
    fVar13 = 0.0;
    uVar6 = (ulong)(ushort)pPcl->m_flags | 1;
    pPcl->m_flags = (short)uVar6;
    puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)vPos & 7;
    uVar6 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar6 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)vPos - uVar4) >> uVar4 * 8;
    fVar10 = (vPos->field0_0x0).d[2];
    puVar1 = (undefined *)((int)&(this->m_emit).m_vPos.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar3);
    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
    pEVar2 = &(this->m_emit).m_vPos;
    uVar3 = (uint)pEVar2 & 7;
    puVar5 = (ulong *)((int)pEVar2 - uVar3);
    *puVar5 = uVar6 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (this->m_emit).m_vPos.field0_0x0.d[2] = fVar10;
    puVar1 = (undefined *)((int)&vVel->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)vVel & 7;
    uVar6 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)vVel - uVar4) >> uVar4 * 8;
    fVar10 = (vVel->field0_0x0).d[2];
    puVar1 = (undefined *)((int)&(this->m_emit).m_vVel.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar3);
    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
    pEVar2 = &(this->m_emit).m_vVel;
    uVar3 = (uint)pEVar2 & 7;
    puVar5 = (ulong *)((int)pEVar2 - uVar3);
    *puVar5 = uVar6 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (this->m_emit).m_vVel.field0_0x0.d[2] = fVar10;
    vOldDir.field0_0x0.d[2] = 0.0;
    vOldDir.field0_0x0._0_8_ = 0;
    fVar10 = sqrtf((vVel->field0_0x0).d[0] * (vVel->field0_0x0).d[0] +
                   (vVel->field0_0x0).d[1] * (vVel->field0_0x0).d[1] +
                   (vVel->field0_0x0).d[2] * (vVel->field0_0x0).d[2]);
                    /* end of inlined section */
    if (fVar10 == fVar13) {
      pEVar7 = (pPcl->field0_0x0).field0_0x0.__vtable;
    }
    else {
      puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_vDir & 7;
      vOldDir.field0_0x0._0_8_ =
           (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)((int)&this->m_vDir - uVar4) >> uVar4 * 8;
      vOldDir.field0_0x0.d[2] = (this->m_vDir).field0_0x0.d[2];
      puVar1 = (undefined *)((int)&vOldDir.field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                (ulong)vOldDir.field0_0x0._0_8_ >> (7 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar12 = 1.0 / fVar10;
      puVar1 = (undefined *)((int)&vVel->field0_0x0 + 7);
                    /* end of inlined section */
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)vVel & 7;
      uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              vOldDir.field0_0x0._0_8_ & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
              -1L << (8 - uVar4) * 8 | *(ulong *)((int)vVel - uVar4) >> uVar4 * 8;
      fVar11 = (vVel->field0_0x0).d[2];
      puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
      uVar3 = (uint)&this->m_vDir & 7;
      puVar5 = (ulong *)((int)&this->m_vDir - uVar3);
      *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      (this->m_vDir).field0_0x0.d[2] = fVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      (this->m_vDir).field0_0x0.d[0] = (this->m_vDir).field0_0x0.d[0] * fVar12;
      fVar11 = (this->m_vDir).field0_0x0.d[2];
      (this->m_vDir).field0_0x0.d[1] = (this->m_vDir).field0_0x0.d[1] * fVar12;
      (this->m_vDir).field0_0x0.d[2] = fVar11 * fVar12;
                    /* end of inlined section */
      pEVar7 = (pPcl->field0_0x0).field0_0x0.__vtable;
    }
                    /* inlined from c:/eor/src2/engine/particle/e_particleman.h */
                    /* end of inlined section */
    (*(code *)pEVar7[5].EStorable)
              (_dt * _pclman.m_timeScale,
               (int)((pPcl->field0_0x0).m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar7[5].GetTypeVersion);
    if (fVar10 != fVar13) {
      puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar3);
      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                (ulong)vOldDir.field0_0x0._0_8_ >> (7 - uVar3) * 8;
      uVar3 = (uint)&this->m_vDir & 7;
      puVar5 = (ulong *)((int)&this->m_vDir - uVar3);
      *puVar5 = vOldDir.field0_0x0._0_8_ << uVar3 * 8 |
                *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      (this->m_vDir).field0_0x0.d[2] = vOldDir.field0_0x0.d[2];
    }
    if (pLevel == (ERLevel *)0x0) {
      AddOrphan__12EParticleManP9EParticle(&_pclman,pPcl);
    }
  }
  return;
}

void ERParticleType::ProcessEvents(EInstance *pInstance, float dt, float age, bool perParticle) {
	float lastAge;
	int i;
	EParticleEvent *pe;
	
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if (this->m_nEvents != 0) {
    iVar3 = 0;
    fVar5 = (age - dt) - 0.0001;
    if (0 < this->m_nEvents) {
      iVar4 = 0;
      do {
        pfVar2 = (float *)((int)&this->m_events->time + iVar4);
        if ((ulong)(pfVar2[2] != 0.0) == (long)perParticle) {
          if (*pfVar2 <= age) {
            if (fVar5 < *pfVar2) {
              Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
                        (&_scriptEngine,(ERScript *)pfVar2[1],pInstance,(EScriptParams *)0x0);
            }
            iVar1 = this->m_nEvents;
          }
          else {
            iVar1 = this->m_nEvents;
          }
        }
        else {
          iVar1 = this->m_nEvents;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar3 < iVar1);
    }
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/particle/e_rparticletype.h */
    gpTypeInfo_ERParticleType =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_14ERParticleType_m_typeInfo,New__14ERParticleType,0,"ERParticleType",
                    &_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERParticleType* ERParticleType::New() {
  ERParticleType *pEVar1;
  
  pEVar1 = (ERParticleType *)__nw__14ERParticleTypeUi(0x230);
  pEVar1 = __14ERParticleType(pEVar1);
  return pEVar1;
}

void ERParticleType::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERParticleType *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERParticleType::GetTypeInfo() {
  return &_14ERParticleType_m_typeInfo;
}

char* ERParticleType::GetTypeName() {
  return _14ERParticleType_m_typeInfo.m_name;
}

u32 ERParticleType::GetTypeKey() {
  return _14ERParticleType_m_typeInfo.m_key;
}

u16 ERParticleType::GetTypeVersion() {
  return _14ERParticleType_m_typeInfo.m_version;
}

u16 ERParticleType::GetReadVersion() {
  return _14ERParticleType_m_typeInfo.m_readVersion;
}

ETypeInfo* ERParticleType::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_14ERParticleType_m_typeInfo,New__14ERParticleType,version,"ERParticleType",
                      &_9EResource_m_typeInfo);
  return pEVar1;
}

ERParticleType* ERParticleType::CreateCopy() {
  ERParticleType *pEVar1;
  
  pEVar1 = (ERParticleType *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ERParticleType::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x230,0x1e);
  return pvVar1;
}

void* ERParticleType::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ERParticleType::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x230,0x1e);
  return;
}

int ERParticleType::GetNShaders() {
  return this->m_nShaders;
}

ERShader** ERParticleType::GetShaders() {
  return this->m_pShaders;
}

void global constructors keyed to gpTypeInfo_ERParticleType() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
