// STATUS: NOT STARTED

#include "e_particlequad.h"

ETypeInfo *gpTypeInfo_EParticleQuad = NULL;

static float _positions[16] = {
	/* [0] = */ -1.f,
	/* [1] = */ -1.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f,
	/* [4] = */ 1.f,
	/* [5] = */ -1.f,
	/* [6] = */ 0.f,
	/* [7] = */ 0.f,
	/* [8] = */ -1.f,
	/* [9] = */ 1.f,
	/* [10] = */ 0.f,
	/* [11] = */ 0.f,
	/* [12] = */ 1.f,
	/* [13] = */ 1.f,
	/* [14] = */ 0.f,
	/* [15] = */ 0.f
};

static float _texCoords[8] = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 1.f,
	/* [3] = */ 0.f,
	/* [4] = */ 0.f,
	/* [5] = */ 1.f,
	/* [6] = */ 1.f,
	/* [7] = */ 1.f
};

__vtbl_ptr_type EParticleQuad virtual table[35] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleQuad::SafeDelete,
		/* .__delta2 = */ -31304
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleQuad::GetTypeInfo,
		/* .__delta2 = */ -31248
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleQuad::GetTypeName,
		/* .__delta2 = */ -31232
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleQuad::GetTypeKey,
		/* .__delta2 = */ -31216
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleQuad::GetTypeVersion,
		/* .__delta2 = */ -31200
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleQuad::~EParticleQuad,
		/* .__delta2 = */ -31440
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
		/* .__pfn = */ &EParticleQuad::Create,
		/* .__delta2 = */ -32256
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleQuad::Update,
		/* .__delta2 = */ -32488
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
		/* .__pfn = */ &EParticleQuad::DrawBegin,
		/* .__delta2 = */ -32568
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleQuad::DrawSingle,
		/* .__delta2 = */ 32248
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleQuad::DrawEnd,
		/* .__delta2 = */ -32560
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
		/* .__pfn = */ &EParticleQuad::Rotate,
		/* .__delta2 = */ -32552
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EParticleQuad::m_typeInfo;

EStream& operator<<(EStream &s, EParticleQuad *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EParticleQuad *&pD) {
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
  *pD = (EParticleQuad *)pStorable;
  return s;
}

void EParticleQuad::DrawSingle(ERC *pRC) {
	float done;
	EVec4 vColor;
	unsigned char colors[4];
	ERC *this;
	ERC *this;
	float scaler;
	
  EStorable__vtable *pEVar1;
  EShader *pEVar2;
  EShader__vtable *pEVar3;
  ERParticleType *pEVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  EDL *this_00;
  float fVar8;
  float fVar9;
  EVec4 vColor;
  uchar colors [4];
  
  if (_12EParticleMan_m_pLastRShader != (this->field0_0x0).m_pRShader) {
    if ((this->field0_0x0).m_pOT != (EOrderTableData *)0x0) {
      this_00 = pRC->m_pdl;
      goto LAB_00307e7c;
    }
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[6].Read)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[6].EStorable);
    pEVar2 = ((this->field0_0x0).m_pRShader)->m_pShader;
    pEVar3 = pEVar2->__vtable;
    (*(code *)pEVar3->ChangeMaterial)
              ((int)(pEVar2->m_sd).rp + *(short *)&pEVar3->Create + -0x10,pRC,0);
    _12EParticleMan_m_pLastRShader = (this->field0_0x0).m_pRShader;
  }
                    /* inlined from e_rc.h */
  this_00 = pRC->m_pdl;
LAB_00307e7c:
  pfVar6 = (float *)Alloc__11EAllocGroupUii(&this_00->m_allocGroup,0x40,0x10);
  puVar7 = (undefined4 *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,0x10,0x10);
                    /* end of inlined section */
                    /* inlined from e_dl.h */
                    /* end of inlined section */
  *pfVar6 = (this->m_mPos).field0_0x0.d[0] * (this->m_vSize).field0_0x0.d[0];
  pfVar6[1] = (this->m_mPos).field0_0x0.d[1] * (this->m_vSize).field0_0x0.d[0];
  fVar9 = (this->m_vSize).field0_0x0.d[0];
  fVar8 = (this->m_mPos).field0_0x0.d[2];
  pfVar6[3] = 0.0;
  pfVar6[2] = fVar8 * fVar9;
  pfVar6[4] = (this->m_mPos).field0_0x0.d[1][0] * (this->m_vSize).field0_0x0.d[1];
  pfVar6[5] = (this->m_mPos).field0_0x0.d[1][1] * (this->m_vSize).field0_0x0.d[1];
  fVar8 = (this->m_vSize).field0_0x0.d[1];
  fVar9 = (this->m_mPos).field0_0x0.d[1][2];
  pfVar6[7] = 0.0;
  pfVar6[6] = fVar9 * fVar8;
  pfVar6[8] = (this->m_mPos).field0_0x0.d[2][0] * (this->m_vSize).field0_0x0.d[2];
  pfVar6[9] = (this->m_mPos).field0_0x0.d[2][1] * (this->m_vSize).field0_0x0.d[2];
  fVar8 = (this->m_vSize).field0_0x0.d[2];
  fVar9 = (this->m_mPos).field0_0x0.d[2][2];
  pfVar6[0xb] = 0.0;
  pfVar6[10] = fVar9 * fVar8;
  pfVar6[0xc] = (this->field0_0x0).m_vPos.field0_0x0.d[0];
  pfVar6[0xd] = (this->field0_0x0).m_vPos.field0_0x0.d[1];
  fVar8 = (this->field0_0x0).m_vPos.field0_0x0.d[2];
  pfVar6[0xf] = 1.0;
  pfVar6[0xe] = fVar8;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pEVar4 = (this->field0_0x0).m_pType;
                    /* end of inlined section */
  fVar8 = (this->field0_0x0).m_lifeTime / (this->field0_0x0).m_totalTime;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  fVar9 = 1.0 - fVar8;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  uVar5 = CONCAT13((char)(int)((fVar8 * (pEVar4->m_vStartColor).field0_0x0.d[3] +
                               fVar9 * (pEVar4->m_vEndColor).field0_0x0.d[3]) * 127.0),
                   CONCAT12((char)(int)((fVar8 * (pEVar4->m_vStartColor).field0_0x0.d[2] +
                                        fVar9 * (pEVar4->m_vEndColor).field0_0x0.d[2]) * 127.0),
                            CONCAT11((char)(int)((fVar8 * (pEVar4->m_vStartColor).field0_0x0.d[1] +
                                                 fVar9 * (pEVar4->m_vEndColor).field0_0x0.d[1]) *
                                                127.0),
                                     (char)(int)((fVar8 * (pEVar4->m_vStartColor).field0_0x0.d[0] +
                                                 fVar9 * (pEVar4->m_vEndColor).field0_0x0.d[0]) *
                                                127.0))));
  *puVar7 = uVar5;
  puVar7[1] = uVar5;
  puVar7[2] = uVar5;
  puVar7[3] = uVar5;
  (*(code *)pRC->__vtable->SetMipMap)
            ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->MipMapSetup,pfVar6);
  (*(code *)pRC->__vtable->TriFan)
            ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->Vertex,4,0x3a1080,0x3a10c0,puVar7,0,0
            );
  return;
}

void EParticleQuad::DrawBegin(ERC *pRC, int num) {
  return;
}

void EParticleQuad::DrawEnd(ERC *pRC) {
  return;
}

void EParticleQuad::Rotate(float dt) {
  float fVar1;
  
  fVar1 = (((this->field0_0x0).m_pType)->m_vRotVel).field0_0x0.d[2];
  if (fVar1 != 0.0) {
    PreRotateZ__5EMat4f(&this->m_mPos,dt * fVar1);
  }
  return;
}

bool EParticleQuad::Update(float dt) {
	EVec3 *this;
	float scaler;
	EVec3 *this;
	
  EStorable__vtable *pEVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar2 = Update__9EParticlef(&this->field0_0x0,dt);
  if (bVar2) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar3 = (((this->field0_0x0).m_pType)->m_vPclAcc).field0_0x0.d[0] * dt;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    (this->m_vGrowthVel).field0_0x0.d[0] = (this->m_vGrowthVel).field0_0x0.d[0] + fVar3;
    fVar5 = (this->m_vGrowthVel).field0_0x0.d[2];
    fVar4 = (this->m_vGrowthVel).field0_0x0.d[1] + fVar3;
    (this->m_vGrowthVel).field0_0x0.d[1] = fVar4;
    fVar5 = fVar5 + fVar3;
    (this->m_vGrowthVel).field0_0x0.d[2] = fVar5;
    (this->m_vSize).field0_0x0.d[0] =
         (this->m_vSize).field0_0x0.d[0] + (this->m_vGrowthVel).field0_0x0.d[0] * dt;
    fVar3 = (this->m_vSize).field0_0x0.d[2];
    (this->m_vSize).field0_0x0.d[1] = (this->m_vSize).field0_0x0.d[1] + fVar4 * dt;
    (this->m_vSize).field0_0x0.d[2] = fVar3 + fVar5 * dt;
                    /* end of inlined section */
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[7].GetTypeKey)
              (dt,(int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                  (int)*(short *)&pEVar1[7].GetTypeName);
  }
  return bVar2;
}

void EParticleQuad::Create(EIParticleEmit *pEmit, float dt) {
	ERParticleType *pt;
	EVec3 vX;
	EVec3 vY;
	EVec3 vZ;
	EVec3 &v;
	EIParticleEmit *this;
	float x;
	float y;
	float z;
	float x;
	float y;
	float z;
	float x;
	float y;
	float z;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ERParticleType *pEVar4;
  ulong *puVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  EVec3 vX;
  EVec3 vY;
  EVec3 vZ;
  
  uVar6 = (ulong)(int)this;
  Create__9EParticleP14EIParticleEmitf(&this->field0_0x0,pEmit,dt);
  pEVar4 = pEmit->m_pType;
  puVar1 = (undefined *)((int)&(pEVar4->m_vSize).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&pEVar4->m_vSize & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&pEVar4->m_vSize - uVar3) >> uVar3 * 8;
  fVar7 = (pEVar4->m_vSize).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vSize).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vSize & 7;
  puVar5 = (ulong *)((int)&this->m_vSize - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vSize).field0_0x0.d[2] = fVar7;
  puVar1 = (undefined *)((int)&(pEVar4->m_vGrowthVel).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&pEVar4->m_vGrowthVel & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&pEVar4->m_vGrowthVel - uVar3) >> uVar3 * 8;
  fVar7 = (pEVar4->m_vGrowthVel).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vGrowthVel).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vGrowthVel & 7;
  puVar5 = (ulong *)((int)&this->m_vGrowthVel - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vGrowthVel).field0_0x0.d[2] = fVar7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vZ.field0_0x0.d[0] = (pEmit->m_vDir).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vZ.field0_0x0.d[1] = (pEmit->m_vDir).field0_0x0.d[1];
  vZ.field0_0x0.d[2] = (pEmit->m_vDir).field0_0x0.d[2];
                    /* end of inlined section */
  if (vZ.field0_0x0.d[0] == 1.0) {
    vX.field0_0x0.d[0] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vX.field0_0x0.d[0] = 1.0;
  }
  vX.field0_0x0.d[2] = 1.0;
  vX.field0_0x0._0_8_ = ZEXT48((uint)vX.field0_0x0.d[0]);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = vZ.field0_0x0.d[1] * 1.0 - vZ.field0_0x0.d[2] * 0.0;
  vY.field0_0x0.d[2] = vZ.field0_0x0.d[0] * 0.0 - vZ.field0_0x0.d[1] * vX.field0_0x0.d[0];
  fVar7 = vZ.field0_0x0.d[2] * vX.field0_0x0.d[0] - vZ.field0_0x0.d[0] * 1.0;
                    /* end of inlined section */
  vY.field0_0x0._0_8_ = CONCAT44(fVar7,fVar8);
  puVar1 = (undefined *)((int)&vY.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | (ulong)vY.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar7 = sqrtf(fVar8 * fVar8 + fVar7 * fVar7 + vY.field0_0x0.d[2] * vY.field0_0x0.d[2]);
  if (fVar7 != 0.0) {
    fVar7 = 1.0 / fVar7;
    vY.field0_0x0.d[2] = vY.field0_0x0.d[2] * fVar7;
    vY.field0_0x0._0_8_ = CONCAT44(vY.field0_0x0.d[1] * fVar7,vY.field0_0x0.d[0] * fVar7);
  }
  fVar9 = pEmit->m_scale;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = vY.field0_0x0.d[1] * vZ.field0_0x0.d[2] - vY.field0_0x0.d[2] * vZ.field0_0x0.d[1];
  vX.field0_0x0.d[2] =
       vY.field0_0x0.d[0] * vZ.field0_0x0.d[1] - vY.field0_0x0.d[1] * vZ.field0_0x0.d[0];
  fVar7 = vY.field0_0x0.d[2] * vZ.field0_0x0.d[0] - vY.field0_0x0.d[0] * vZ.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  vX.field0_0x0._0_8_ = CONCAT44(fVar7,fVar8);
  puVar1 = (undefined *)((int)&vX.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | (ulong)vX.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  if (fVar9 != 1.0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vX.field0_0x0.d[2] = vX.field0_0x0.d[2] * fVar9;
    vY.field0_0x0.d[0] = vY.field0_0x0.d[0] * fVar9;
    vY.field0_0x0.d[2] = vY.field0_0x0.d[2] * fVar9;
    vZ.field0_0x0.d[0] = vZ.field0_0x0.d[0] * fVar9;
    vZ.field0_0x0.d[1] = vZ.field0_0x0.d[1] * fVar9;
    vZ.field0_0x0.d[2] = vZ.field0_0x0.d[2] * fVar9;
    vX.field0_0x0._0_8_ = CONCAT44(fVar7 * fVar9,fVar8 * fVar9);
    vY.field0_0x0._0_8_ = CONCAT44(vY.field0_0x0.d[1] * fVar9,vY.field0_0x0.d[0]);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  (this->m_mPos).field0_0x0.d[1][0] = vY.field0_0x0.d[0];
  (this->m_mPos).field0_0x0.d[1][1] = vY.field0_0x0.d[1];
  (this->m_mPos).field0_0x0.d[1][2] = vY.field0_0x0.d[2];
  (this->m_mPos).field0_0x0.d[1][3] = 0.0;
  (this->m_mPos).field0_0x0.d[0] = vX.field0_0x0.d[0];
  (this->m_mPos).field0_0x0.d[1] = vX.field0_0x0.d[1];
  (this->m_mPos).field0_0x0.d[2] = vX.field0_0x0.d[2];
  (this->m_mPos).field0_0x0.d[3] = 0.0;
  (this->m_mPos).field0_0x0.d[2][0] = vZ.field0_0x0.d[0];
  (this->m_mPos).field0_0x0.d[2][1] = vZ.field0_0x0.d[1];
  (this->m_mPos).field0_0x0.d[2][2] = vZ.field0_0x0.d[2];
  (this->m_mPos).field0_0x0.d[2][3] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_mPos).field0_0x0.d[3][0] = (pEmit->m_vPos).field0_0x0.d[0];
  (this->m_mPos).field0_0x0.d[3][1] = (pEmit->m_vPos).field0_0x0.d[1];
  (this->m_mPos).field0_0x0.d[3][2] = (pEmit->m_vPos).field0_0x0.d[2];
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/particle/e_particlequad.h */
    gpTypeInfo_EParticleQuad =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_13EParticleQuad_m_typeInfo,New__13EParticleQuad,0,"EParticleQuad",
                    &_9EParticle_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EParticleQuad::~EParticleQuad(int __in_chrg) {
  ___9EParticle(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__13EParticleQuadPv(this);
  }
  return;
}

EParticleQuad* EParticleQuad::New() {
  EParticleQuad *this;
  
  this = (EParticleQuad *)__nw__13EParticleQuadUi(0x120);
  __9EParticle((EParticle *)this);
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_13EParticleQuad;
  return this;
}

void EParticleQuad::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EParticleQuad *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EParticleQuad::GetTypeInfo() {
  return &_13EParticleQuad_m_typeInfo;
}

char* EParticleQuad::GetTypeName() {
  return _13EParticleQuad_m_typeInfo.m_name;
}

u32 EParticleQuad::GetTypeKey() {
  return _13EParticleQuad_m_typeInfo.m_key;
}

u16 EParticleQuad::GetTypeVersion() {
  return _13EParticleQuad_m_typeInfo.m_version;
}

u16 EParticleQuad::GetReadVersion() {
  return _13EParticleQuad_m_typeInfo.m_readVersion;
}

ETypeInfo* EParticleQuad::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_13EParticleQuad_m_typeInfo,New__13EParticleQuad,version,"EParticleQuad",
                      &_9EParticle_m_typeInfo);
  return pEVar1;
}

EParticleQuad* EParticleQuad::CreateCopy() {
  EParticleQuad *pEVar1;
  
  pEVar1 = (EParticleQuad *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EParticleQuad::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x120,0x17);
  return pvVar1;
}

void* EParticleQuad::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EParticleQuad::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x120,0x17);
  return;
}

void global constructors keyed to gpTypeInfo_EParticleQuad() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
