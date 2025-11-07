// STATUS: NOT STARTED

#include "e_water.h"

ETypeInfo *gpTypeInfo_EIWaterPatch = NULL;

__vtbl_ptr_type EIWaterPatch virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWaterPatch::SafeDelete,
		/* .__delta2 = */ -13056
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWaterPatch::GetTypeInfo,
		/* .__delta2 = */ -13000
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWaterPatch::GetTypeName,
		/* .__delta2 = */ -12984
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWaterPatch::GetTypeKey,
		/* .__delta2 = */ -12968
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWaterPatch::GetTypeVersion,
		/* .__delta2 = */ -12952
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWaterPatch::~EIWaterPatch,
		/* .__delta2 = */ -24152
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
		/* .__pfn = */ &EIWaterPatch::Update,
		/* .__delta2 = */ -22728
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWaterPatch::VisibilityTest,
		/* .__delta2 = */ -23928
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWaterPatch::Draw,
		/* .__delta2 = */ -18792
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
		/* .__pfn = */ &EIWaterPatch::ReadInstanceData,
		/* .__delta2 = */ -24024
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

ETypeInfo EIWaterPatch::m_typeInfo;

EStream& operator<<(EStream &s, EIWaterPatch *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIWaterPatch *&pD) {
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
  *pD = (EIWaterPatch *)pStorable;
  return s;
}

EIWaterPatch* EIWaterPatch::EIWaterPatch() {
	int i;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  uchar *puVar6;
  char *pcVar7;
  int iVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  __9EInstance(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_waves).m_pTail = (EWaterWave *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_waves).m_pHead = (EWaterWave *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_12EIWaterPatch;
                    /* end of inlined section */
  iVar5 = 2;
  do {
    bVar2 = iVar5 != -1;
    iVar5 = iVar5 + -1;
  } while (bVar2);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_48 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_4c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_50 = 0;
                    /* end of inlined section */
  SetPos__12EIWaterPatchRC5EVec3ff(this,(EVec3 *)&local_50,10.0,10.0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_4c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_50 = 0;
                    /* end of inlined section */
  this->m_pRShaderBase = (ERShader *)0x0;
  this->m_pRShaderReflect = (ERShader *)0x0;
  this->m_txtReps = 1.0;
  puVar1 = (undefined *)((int)&(this->m_vCurrentSpeed).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vCurrentSpeed & 7;
  puVar4 = (ulong *)((int)&this->m_vCurrentSpeed - uVar3);
  *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  SetFrequency__12EIWaterPatchf(this,1.0);
  SetRadius__12EIWaterPatchf(this,4.0);
  SetTxtReps__12EIWaterPatchf(this,1.0);
  SetPeakDistance__12EIWaterPatchf(this,1.0);
  SetRippleSpeed__12EIWaterPatchf(this,1.0);
  SetCurrentSpeed__12EIWaterPatchff(this,0.01,0.01);
  SetElasticity__12EIWaterPatchf(this,0.75);
  SetResolution__12EIWaterPatchf(this,25.0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  this->m_uvPhase = 0.0;
  puVar1 = (undefined *)((int)&(this->m_uvStart0).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_uvStart0 & 7;
  puVar4 = (ulong *)((int)&this->m_uvStart0 - uVar3);
  *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_4c = 0;
  local_50 = 0;
  puVar1 = (undefined *)((int)&(this->m_uvStart1).field0_0x0 + 7);
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_uvStart1 & 7;
  puVar4 = (ulong *)((int)&this->m_uvStart1 - uVar3);
  *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar6 = (uchar *)_memmanAlloc__FUiUi(0x10,0x10);
  this->m_pWhiteColors = puVar6;
  iVar5 = 0;
  do {
    puVar6 = this->m_pWhiteColors + iVar5;
    iVar5 = iVar5 + 1;
    *puVar6 = 0x80;
  } while (iVar5 < 0x10);
  pcVar7 = (char *)_memmanAlloc__FUiUi(0x10,0x10);
  this->m_pUpNormals = pcVar7;
  iVar5 = 0;
  do {
    iVar8 = iVar5 * 4;
    iVar5 = iVar5 + 1;
    this->m_pUpNormals[iVar8] = '\0';
    this->m_pUpNormals[iVar8 + 1] = '\0';
    this->m_pUpNormals[iVar8 + 2] = '\x7f';
    this->m_pUpNormals[iVar8 + 3] = '\0';
  } while (iVar5 < 4);
  uVar3 = (this->field0_0x0).m_instanceFlags;
  (this->m_orderTableData).pvPos = &this->m_vCenter;
  (this->m_orderTableData).callbackParam1 = (uint)this;
  (this->m_orderTableData).pShader = (EShader *)0x0;
  (this->m_orderTableData).pLights = (ELights *)0x0;
  (this->m_orderTableData).sortMode = 0;
  (this->field0_0x0).m_instanceFlags = uVar3 & 0xfffffdff;
  (this->m_orderTableData).pmOrient = &_mId;
  (this->m_orderTableData).pfnCallback = OrderTableCallback__12EIWaterPatchP3ERCUiUi;
  (this->m_orderTableData).renderFlags = 5;
  (this->m_orderTableData).sortValue = 5;
  SetOverlapReceiveFlags__9EInstanceUi(&this->field0_0x0,0x19);
  return this;
}

void EIWaterPatch::~EIWaterPatch(int __in_chrg) {
  ERShader *this_00;
  
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_12EIWaterPatch;
  _memmanFree__FPv(this->m_pWhiteColors);
  _memmanFree__FPv(this->m_pUpNormals);
  if (this->m_pRShaderBase == (ERShader *)0x0) {
    this_00 = this->m_pRShaderReflect;
  }
  else {
    DelRef__9EResource(&this->m_pRShaderBase->field0_0x0);
    this_00 = this->m_pRShaderReflect;
  }
  if (this_00 != (ERShader *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
  }
  ___9EInstance(&this->field0_0x0,__in_chrg);
  return;
}

void EIWaterPatch::ReadInstanceData(EStream &s) {
	EVec3 vPos;
	EVec3 vSize;
	int version;
	
  EStream *s_00;
  EVec3 vPos;
  EVec3 vSize;
  
                    /* inlined from c:/eor/src2/engine/effects/e_water.h */
                    /* end of inlined section */
  if (_12EIWaterPatch_m_typeInfo.m_readVersion == 0) {
    s_00 = __rs__FR7EStreamR5EVec3(s,&vPos);
    __rs__FR7EStreamR5EVec3(s_00,&vSize);
  }
                    /* end of inlined section */
  SetPos__12EIWaterPatchRC5EVec3ff(this,&vPos,vSize.field0_0x0.d[0],vSize.field0_0x0.d[1]);
  return;
}

void EIWaterPatch::SetFrequency(float frequency) {
  this->m_frequency = frequency;
  return;
}

u32 EIWaterPatch::VisibilityTest(EPortalWindow &win, u32 parentVis) {
	EBoundSphere bs;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong in_v1;
  EBoundSphere bs;
  
  bs.radius = this->m_radius;
  puVar1 = (undefined *)((int)&(this->m_vCenter).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vCenter & 7;
  bs.vCenter.field0_0x0._0_8_ =
       (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
       in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
       *(ulong *)((int)&this->m_vCenter - uVar2) >> uVar2 * 8;
  bs.vCenter.field0_0x0.d[2] = (this->m_vCenter).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&bs.vCenter.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar4);
  *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | (ulong)bs.vCenter.field0_0x0._0_8_ >> (7 - uVar4) * 8
  ;
  uVar4 = Test__13EPortalWindowRC12EBoundSphereUi(win,&bs,parentVis);
  return uVar4;
}

void EIWaterPatch::SetElasticity(float elasticity) {
  this->m_elasticity = elasticity;
  return;
}

void EIWaterPatch::SetRadius(float radius) {
  this->m_splashRad = radius;
  return;
}

void EIWaterPatch::SetTxtReps(float reps) {
  this->m_txtReps = reps;
  RecomputeTextureScroll__12EIWaterPatch(this);
  return;
}

void EIWaterPatch::SetPeakDistance(float dist) {
  this->m_peakDistance = dist;
  return;
}

void EIWaterPatch::SetRippleSpeed(float speed) {
  this->m_rippleSpeed = speed;
  return;
}

void EIWaterPatch::SetShaders(char *szNameBase, char *szNameReflect) {
	char *szName;
	char *szName;
	
  ERShader *pEVar1;
  
  if (*szNameBase != '\0') {
    if (this->m_pRShaderBase != (ERShader *)0x0) {
      DelRef__9EResource(&this->m_pRShaderBase->field0_0x0);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    }
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerPCcP5EFilei(&_shaderman.field0_0x0,szNameBase,(EFile *)0x0,0)
    ;
                    /* end of inlined section */
    this->m_pRShaderBase = pEVar1;
  }
  if (*szNameReflect != '\0') {
    if (this->m_pRShaderReflect != (ERShader *)0x0) {
      DelRef__9EResource(&this->m_pRShaderReflect->field0_0x0);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    }
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerPCcP5EFilei
                       (&_shaderman.field0_0x0,szNameReflect,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pRShaderReflect = pEVar1;
  }
  return;
}

void EIWaterPatch::SetShaders(u32 idBase, u32 idReflect) {
	u32 id;
	u32 id;
	
  ERShader *pEVar1;
  
  if (idBase != 0) {
    if (this->m_pRShaderBase != (ERShader *)0x0) {
      DelRef__9EResource(&this->m_pRShaderBase->field0_0x0);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    }
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,idBase,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pRShaderBase = pEVar1;
  }
  if (idReflect != 0) {
    if (this->m_pRShaderReflect != (ERShader *)0x0) {
      DelRef__9EResource(&this->m_pRShaderReflect->field0_0x0);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    }
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,idReflect,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pRShaderReflect = pEVar1;
  }
  return;
}

void EIWaterPatch::SetCurrentSpeed(float xSpeed, float ySpeed) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_vCurrentSpeed).field0_0x0.d[0] = xSpeed;
                    /* end of inlined section */
  (this->m_vCurrentSpeed).field0_0x0.d[1] = ySpeed;
  RecomputeTextureScroll__12EIWaterPatch(this);
  return;
}

void EIWaterPatch::RecomputeTextureScroll() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar4 = CONCAT44((-(this->m_vCurrentSpeed).field0_0x0.d[1] * this->m_txtReps) /
                   ((this->m_vMax).field0_0x0.d[1] - (this->m_vMin).field0_0x0.d[1]),
                   (-(this->m_vCurrentSpeed).field0_0x0.d[0] * this->m_txtReps) /
                   ((this->m_vMax).field0_0x0.d[0] - (this->m_vMin).field0_0x0.d[0]));
  puVar1 = (undefined *)((int)&(this->m_vUVSpeed).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vUVSpeed & 7;
  puVar3 = (ulong *)((int)&this->m_vUVSpeed - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return;
}

void EIWaterPatch::SetPos(EVec3 &vCenter, float xSize, float ySize) {
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong in_v0;
  ulong uVar5;
  float fVar6;
  
  puVar1 = (undefined *)((int)&vCenter->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vCenter & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vCenter - uVar3) >> uVar3 * 8;
  fVar6 = (vCenter->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vCenter).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vCenter & 7;
  puVar4 = (ulong *)((int)&this->m_vCenter - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vCenter).field0_0x0.d[2] = fVar6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar5 = CONCAT44((vCenter->field0_0x0).d[1] - ySize * 0.5,(vCenter->field0_0x0).d[0] - xSize * 0.5
                  );
  puVar1 = (undefined *)((int)&(this->m_vMin).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vMin & 7;
  puVar4 = (ulong *)((int)&this->m_vMin - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar5 = CONCAT44((vCenter->field0_0x0).d[1] + ySize * 0.5,(vCenter->field0_0x0).d[0] + xSize * 0.5
                  );
  puVar1 = (undefined *)((int)&(this->m_vMax).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vMax & 7;
  puVar4 = (ulong *)((int)&this->m_vMax - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  fVar6 = sqrtf(xSize * xSize * 0.25 + ySize * ySize * 0.25);
  this->m_radius = fVar6;
  return;
}

void EIWaterPatch::SetResolution(float resolution) {
  this->m_resolution = resolution;
  return;
}

EWaterWave* EIWaterPatch::StartWave(EVec2 vPos, float magnitude, float lifetime) {
	TLinkedList<EWaterWave,44,40> *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  EWaterWave *pEVar4;
  ulong *puVar5;
  EWaterWave *pEVar6;
  ulong uVar7;
  float fVar8;
  
  pEVar6 = (EWaterWave *)__builtin_new(0x30);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar6->pLast = (EWaterWave *)0x0;
                    /* end of inlined section */
  pEVar6->startMagnitude = magnitude;
  pEVar6->lifetime = lifetime;
                    /* inlined from c:/eor/src2/engine/effects/e_water.h */
  pEVar6->pNext = (EWaterWave *)0x0;
  pEVar6->bounceFlags = '\0';
                    /* end of inlined section */
  pEVar6->age = 0.0;
  pEVar6->distance = 0.0;
  pEVar6->period = 0.0;
  fVar8 = this->m_rippleSpeed;
  puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vPos & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          (long)(int)pEVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vPos - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(pEVar6->vCenter).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&pEVar6->vCenter & 7;
  puVar5 = (ulong *)((int)&pEVar6->vCenter - uVar2);
  *puVar5 = uVar7 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  pEVar6->speed = fVar8;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar6->pLast = (this->m_waves).m_pTail;
  pEVar4 = (this->m_waves).m_pTail;
  if (pEVar4 == (EWaterWave *)0x0) {
    (this->m_waves).m_pHead = pEVar6;
  }
  else {
    pEVar4->pNext = pEVar6;
  }
  pEVar6->pNext = (EWaterWave *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_waves).m_pTail = pEVar6;
                    /* end of inlined section */
  return pEVar6;
}

void EIWaterPatch::BounceWave(EWaterWave *pWave, EVec2 &vNewCenter, u8 bounceFlag) {
	TLinkedList<EWaterWave,44,40> *this;
	
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  EWaterWave *pEVar5;
  ulong *puVar6;
  EWaterWave *pEVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pWave->bounceFlags = pWave->bounceFlags | bounceFlag;
  pEVar7 = (EWaterWave *)__builtin_new(0x30);
  fVar12 = this->m_elasticity;
  fVar10 = pWave->startMagnitude;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  fVar9 = pWave->speed;
  bVar2 = pWave->bounceFlags;
  fVar11 = pWave->period;
  fVar13 = pWave->distance;
  fVar15 = pWave->lifetime;
  fVar14 = pWave->age;
                    /* inlined from c:/eor/src2/engine/effects/e_water.h */
  pEVar7->pLast = (EWaterWave *)0x0;
                    /* end of inlined section */
  pEVar7->period = fVar11;
  pEVar7->distance = fVar13;
  pEVar7->lifetime = fVar15;
  pEVar7->startMagnitude = fVar10 * fVar12;
  pEVar7->speed = fVar9 * fVar12;
  pEVar7->age = fVar14;
  pEVar7->bounceFlags = bVar2;
                    /* inlined from c:/eor/src2/engine/effects/e_water.h */
  pEVar7->pNext = (EWaterWave *)0x0;
  puVar1 = (undefined *)((int)&vNewCenter->field0_0x0 + 7);
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)vNewCenter & 7;
  uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          (ulong)bVar2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)vNewCenter - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&(pEVar7->vCenter).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar3);
  *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
  uVar3 = (uint)&pEVar7->vCenter & 7;
  puVar6 = (ulong *)((int)&pEVar7->vCenter - uVar3);
  *puVar6 = uVar8 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar7->pLast = (this->m_waves).m_pTail;
  pEVar5 = (this->m_waves).m_pTail;
  if (pEVar5 == (EWaterWave *)0x0) {
    (this->m_waves).m_pHead = pEVar7;
  }
  else {
    pEVar5->pNext = pEVar7;
  }
  pEVar7->pNext = (EWaterWave *)0x0;
  (this->m_waves).m_pTail = pEVar7;
  return;
}

void EIWaterPatch::Update() {
	EWaterWave *pFirst;
	EWaterWave *pWave;
	float angle;
	EWaterWave *pNext;
	float relativeAge;
	TLinkedList<EWaterWave,44,40> *this;
	EWaterWave *pNode;
	void *pNode;
	EWaterWave *pNode;
	void *pNode;
	void *pNode;
	EWaterWave *pNode;
	void *pNode;
	EWaterWave *pNode;
	EWaterWave *pNode;
	void *pAddress;
	float inc;
	float tessDist;
	float xMin;
	float xMax;
	float yMin;
	float yMax;
	float y;
	float y;
	float x;
	float x;
	EWaterStatic *ps;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	
  undefined *puVar1;
  EVec2 *pEVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  EWaterWave *pEVar6;
  ulong *puVar7;
  undefined4 uVar8;
  ulong in_v1;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  EWaterWave *pEVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  ulong uVar13;
  ulong uVar14;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_100;
  float local_fc;
  EVec2 *local_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
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
  
                    /* end of inlined section */
  uVar10 = (ulong)(int)this;
  local_d0 = (undefined4)unaff_s1;
  uStack_cc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_e0 = (undefined4)unaff_s0;
  uStack_dc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_50 = (undefined4)unaff_retaddr;
  uStack_4c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s8;
  uStack_5c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_70 = (undefined4)unaff_s7;
  uStack_6c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s6;
  uStack_7c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_90 = (undefined4)unaff_s5;
  uStack_8c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_a0 = (undefined4)unaff_s4;
  uStack_9c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_b0 = (undefined4)unaff_s3;
  uStack_ac = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_c0 = (undefined4)unaff_s2;
  uStack_bc = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar12 = (this->m_waves).m_pHead;
  uVar13 = (ulong)(int)pEVar12;
                    /* end of inlined section */
  uVar14 = uVar13;
  if (uVar13 != 0) {
    puVar1 = (undefined *)((int)&(this->m_vMax).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)&this->m_vMax & 7;
    uVar9 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
            *(ulong *)((int)&this->m_vMax - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&(this->m_vActiveMin).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar4);
    *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vActiveMin & 7;
    puVar7 = (ulong *)((int)&this->m_vActiveMin - uVar4);
    *puVar7 = uVar9 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar14 = 0;
    puVar1 = (undefined *)((int)&(this->m_vMin).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)&this->m_vMin & 7;
    uVar9 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            uVar9 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
            *(ulong *)((int)&this->m_vMin - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&(this->m_vActiveMax).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar4);
    *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vActiveMax & 7;
    puVar7 = (ulong *)((int)&this->m_vActiveMax - uVar4);
    *puVar7 = uVar9 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  }
  local_f0 = &this->m_uvStart1;
  uVar9 = uVar10;
  if (uVar13 != 0) {
    fVar16 = pEVar12->age;
    uVar11 = uVar10;
    uVar9 = uVar13;
    while( true ) {
      fVar17 = _dt;
      uVar13 = 0;
      pEVar12 = (EWaterWave *)uVar9;
      fVar15 = (fVar16 + _dt) / pEVar12->lifetime;
      pEVar12->age = fVar16 + _dt;
      if (1.0 <= fVar15) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
        pEVar6 = pEVar12->pNext;
        uVar13 = (ulong)(int)pEVar6;
        if ((long)(int)(this->m_waves).m_pHead == uVar9) {
          (this->m_waves).m_pHead = pEVar6;
        }
        else {
          pEVar12->pLast->pNext = pEVar6;
        }
        if ((long)(int)(this->m_waves).m_pTail == uVar9) {
          (this->m_waves).m_pTail = pEVar12->pLast;
        }
        else {
          pEVar12->pNext->pLast = pEVar12->pLast;
        }
        _memmanFree__FPv(pEVar12);
                    /* end of inlined section */
      }
      else {
        fVar15 = 1.0 - fVar15;
        if (uVar14 == 0) {
          uVar14 = uVar9;
        }
        pEVar12->magnitude = pEVar12->startMagnitude * fVar15 * fVar15;
        fVar16 = pEVar12->period + fVar17 * this->m_frequency;
        pEVar12->period = fVar16;
        if (1.0 < fVar16) {
          do {
            fVar16 = fVar16 - 1.0;
          } while (1.0 < fVar16);
          pEVar12->period = fVar16;
        }
        local_100 = _dt;
        pEVar12->distance = pEVar12->distance + _dt * pEVar12->speed;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_fc = local_100 * (this->m_vCurrentSpeed).field0_0x0.d[1];
        local_100 = local_100 * (this->m_vCurrentSpeed).field0_0x0.d[0];
        (pEVar12->vCenter).field0_0x0.d[0] = (pEVar12->vCenter).field0_0x0.d[0] + local_100;
        (pEVar12->vCenter).field0_0x0.d[1] = (pEVar12->vCenter).field0_0x0.d[1] + local_fc;
                    /* end of inlined section */
        if (this->m_elasticity == 0.0) {
          fVar16 = this->m_splashRad;
        }
        else {
          if (((pEVar12->bounceFlags ^ 1) & 1) == 0) {
            bVar3 = pEVar12->bounceFlags;
          }
          else {
                    /* end of inlined section */
            fVar17 = (pEVar12->vCenter).field0_0x0.d[0];
            fVar16 = (this->m_vMin).field0_0x0.d[0];
            uVar11 = uVar10;
            if (fVar17 - pEVar12->distance < fVar16) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              local_fc = (pEVar12->vCenter).field0_0x0.d[1];
                    /* end of inlined section */
              local_100 = (fVar16 + fVar16) - fVar17;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              BounceWave__12EIWaterPatchP10EWaterWaveRC5EVec2Uc
                        (this,pEVar12,(EVec2 *)&local_100,'\x01');
            }
            bVar3 = pEVar12->bounceFlags;
          }
          if ((bVar3 & 2) == 0) {
                    /* end of inlined section */
            fVar17 = (pEVar12->vCenter).field0_0x0.d[0];
            fVar16 = (this->m_vMax).field0_0x0.d[0];
            uVar11 = uVar10;
            if (fVar16 < fVar17 + pEVar12->distance) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              local_fc = (pEVar12->vCenter).field0_0x0.d[1];
                    /* end of inlined section */
              local_100 = (fVar16 + fVar16) - fVar17;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              BounceWave__12EIWaterPatchP10EWaterWaveRC5EVec2Uc
                        (this,pEVar12,(EVec2 *)&local_100,'\x02');
            }
            bVar3 = pEVar12->bounceFlags;
          }
          else {
            bVar3 = pEVar12->bounceFlags;
          }
          if ((bVar3 & 4) == 0) {
                    /* end of inlined section */
            fVar17 = (pEVar12->vCenter).field0_0x0.d[1];
            fVar16 = (this->m_vMin).field0_0x0.d[1];
            uVar11 = uVar10;
            if (fVar17 - pEVar12->distance < fVar16) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              local_100 = (pEVar12->vCenter).field0_0x0.d[0];
                    /* end of inlined section */
              local_fc = (fVar16 + fVar16) - fVar17;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              BounceWave__12EIWaterPatchP10EWaterWaveRC5EVec2Uc
                        (this,pEVar12,(EVec2 *)&local_100,'\x04');
            }
            bVar3 = pEVar12->bounceFlags;
          }
          else {
            bVar3 = pEVar12->bounceFlags;
          }
          if ((bVar3 & 8) == 0) {
                    /* end of inlined section */
            fVar17 = (pEVar12->vCenter).field0_0x0.d[1];
            fVar16 = (this->m_vMax).field0_0x0.d[1];
            uVar11 = uVar10;
            if (fVar16 < fVar17 + pEVar12->distance) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              local_100 = (pEVar12->vCenter).field0_0x0.d[0];
                    /* end of inlined section */
              local_fc = (fVar16 + fVar16) - fVar17;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              BounceWave__12EIWaterPatchP10EWaterWaveRC5EVec2Uc
                        (this,pEVar12,(EVec2 *)&local_100,'\b');
            }
            pEVar6 = pEVar12->pNext;
          }
          else {
            pEVar6 = pEVar12->pNext;
          }
          uVar13 = (ulong)(int)pEVar6;
          fVar16 = this->m_splashRad;
        }
        fVar15 = (pEVar12->vCenter).field0_0x0.d[0];
        fVar17 = (this->m_vMin).field0_0x0.d[0];
        fVar19 = fVar15 + fVar16;
        fVar18 = (pEVar12->vCenter).field0_0x0.d[1];
        fVar15 = fVar15 - fVar16;
        fVar20 = fVar18 + fVar16;
        fVar18 = fVar18 - fVar16;
        if (fVar17 <= fVar15) {
          fVar17 = fVar15;
        }
                    /* end of inlined section */
        fVar16 = (this->m_vMin).field0_0x0.d[1];
        if (fVar16 <= fVar18) {
          fVar16 = fVar18;
        }
                    /* end of inlined section */
        fVar15 = (this->m_vMax).field0_0x0.d[0];
        if (fVar19 <= fVar15) {
          fVar15 = fVar19;
        }
                    /* end of inlined section */
        fVar18 = (this->m_vMax).field0_0x0.d[1];
        if (fVar20 <= fVar18) {
          fVar18 = fVar20;
        }
                    /* end of inlined section */
        fVar19 = (this->m_vActiveMin).field0_0x0.d[0];
        if (fVar17 < fVar19) {
          fVar19 = fVar17;
        }
        (this->m_vActiveMin).field0_0x0.d[0] = fVar19;
        fVar17 = (this->m_vActiveMin).field0_0x0.d[1];
        if (fVar16 < fVar17) {
          fVar17 = fVar16;
        }
        (this->m_vActiveMin).field0_0x0.d[1] = fVar17;
        fVar16 = (this->m_vActiveMax).field0_0x0.d[0];
        if (fVar16 < fVar15) {
          fVar16 = fVar15;
        }
        (this->m_vActiveMax).field0_0x0.d[0] = fVar16;
        fVar16 = (this->m_vActiveMax).field0_0x0.d[1];
        if (fVar16 < fVar18) {
          fVar16 = fVar18;
        }
        (this->m_vActiveMax).field0_0x0.d[1] = fVar16;
        uVar9 = uVar11;
      }
      if (uVar13 == 0) break;
      fVar16 = *(float *)((int)uVar13 + 0x14);
      uVar11 = uVar9;
      uVar9 = uVar13;
    }
  }
  uVar8 = 0;
  if (uVar14 == 0) {
    puVar1 = (undefined *)((int)&(this->m_vMin).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)&this->m_vMin & 7;
    uVar14 = *(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar5) * 8 |
             *(ulong *)((int)&this->m_vMin - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&this->m_statics[0].vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar4);
    *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar14 >> (7 - uVar4) * 8;
    uVar4 = (uint)this->m_statics & 7;
    puVar7 = (ulong *)((int)this->m_statics - uVar4);
    *puVar7 = uVar14 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar1 = (undefined *)((int)&(this->m_vMax).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)&this->m_vMax & 7;
    uVar14 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             uVar14 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)((int)&this->m_vMax - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&this->m_statics[0].vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar4);
    *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar14 >> (7 - uVar4) * 8;
    pEVar2 = &this->m_statics[0].vMax;
    uVar4 = (uint)pEVar2 & 7;
    puVar7 = (ulong *)((int)pEVar2 - uVar4);
    *puVar7 = uVar14 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    *(undefined4 *)&this->m_statics[0].active = 1;
    *(undefined4 *)&this->m_statics[3].active = 0;
    *(undefined4 *)&this->m_statics[2].active = 0;
    *(undefined4 *)&this->m_statics[1].active = 0;
  }
  else {
    puVar1 = (undefined *)((int)&(this->m_vMin).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)&this->m_vMin & 7;
    uVar14 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             uVar9 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)((int)&this->m_vMin - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&this->m_statics[0].vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar4);
    *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar14 >> (7 - uVar4) * 8;
    uVar4 = (uint)this->m_statics & 7;
    puVar7 = (ulong *)((int)this->m_statics - uVar4);
    *puVar7 = uVar14 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    fVar17 = (this->m_vActiveMin).field0_0x0.d[0];
    fVar16 = this->m_statics[0].vMin.field0_0x0.d[0];
    fVar15 = (this->m_vMax).field0_0x0.d[1];
    this->m_statics[0].vMax.field0_0x0.d[0] = fVar17;
    this->m_statics[0].vMax.field0_0x0.d[1] = fVar15;
                    /* end of inlined section */
    if ((fVar17 != fVar16) && (this->m_statics[0].vMin.field0_0x0.d[1] != fVar15)) {
      uVar8 = 1;
    }
    *(undefined4 *)&this->m_statics[0].active = uVar8;
    puVar1 = (undefined *)((int)&(this->m_vMax).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)&this->m_vMax & 7;
    uVar14 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             uVar14 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)((int)&this->m_vMax - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&this->m_statics[1].vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar4);
    *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar14 >> (7 - uVar4) * 8;
    pEVar2 = &this->m_statics[1].vMax;
    uVar4 = (uint)pEVar2 & 7;
    puVar7 = (ulong *)((int)pEVar2 - uVar4);
    *puVar7 = uVar14 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar8 = 0;
    fVar17 = (this->m_vActiveMax).field0_0x0.d[0];
    fVar16 = this->m_statics[1].vMax.field0_0x0.d[0];
    fVar15 = (this->m_vMin).field0_0x0.d[1];
    this->m_statics[1].vMin.field0_0x0.d[0] = fVar17;
    this->m_statics[1].vMin.field0_0x0.d[1] = fVar15;
                    /* end of inlined section */
    if ((fVar16 != fVar17) && (fVar15 != this->m_statics[1].vMax.field0_0x0.d[1])) {
      uVar8 = 1;
    }
    *(undefined4 *)&this->m_statics[1].active = uVar8;
    uVar8 = 0;
    fVar17 = this->m_statics[0].vMax.field0_0x0.d[0];
    fVar16 = this->m_statics[1].vMin.field0_0x0.d[0];
    fVar15 = (this->m_vMin).field0_0x0.d[1];
    fVar18 = (this->m_vActiveMin).field0_0x0.d[1];
    this->m_statics[2].vMin.field0_0x0.d[0] = fVar17;
    this->m_statics[2].vMin.field0_0x0.d[1] = fVar15;
    this->m_statics[2].vMax.field0_0x0.d[0] = fVar16;
    this->m_statics[2].vMax.field0_0x0.d[1] = fVar18;
                    /* end of inlined section */
    if ((fVar16 != fVar17) && (fVar15 != fVar18)) {
      uVar8 = 1;
    }
    *(undefined4 *)&this->m_statics[2].active = uVar8;
    uVar8 = 0;
    fVar17 = this->m_statics[0].vMax.field0_0x0.d[0];
    fVar16 = this->m_statics[1].vMin.field0_0x0.d[0];
    fVar15 = (this->m_vActiveMax).field0_0x0.d[1];
    fVar18 = (this->m_vMax).field0_0x0.d[1];
    this->m_statics[3].vMin.field0_0x0.d[0] = fVar17;
    this->m_statics[3].vMin.field0_0x0.d[1] = fVar15;
    this->m_statics[3].vMax.field0_0x0.d[0] = fVar16;
    this->m_statics[3].vMax.field0_0x0.d[1] = fVar18;
                    /* end of inlined section */
    if ((fVar16 != fVar17) && (fVar15 != fVar18)) {
      uVar8 = 1;
    }
    *(undefined4 *)&this->m_statics[3].active = uVar8;
  }
  local_fc = _dt;
  fVar17 = this->m_uvPhase;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar16 = _dt * this->m_frequency * 0.25;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar15 = _dt * (this->m_vUVSpeed).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_uvStart0).field0_0x0.d[0] =
       (this->m_uvStart0).field0_0x0.d[0] + _dt * (this->m_vUVSpeed).field0_0x0.d[0];
                    /* end of inlined section */
  this->m_uvPhase = fVar17 + fVar16;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_uvStart0).field0_0x0.d[1] = (this->m_uvStart0).field0_0x0.d[1] + fVar15;
                    /* end of inlined section */
  local_100 = local_fc * (this->m_vUVSpeed).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_fc = local_fc * (this->m_vUVSpeed).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_uvStart1).field0_0x0.d[0] = (this->m_uvStart1).field0_0x0.d[0] + local_100;
  (local_f0->field0_0x0).d[1] = (local_f0->field0_0x0).d[1] + local_fc;
                    /* end of inlined section */
  fVar16 = (this->m_uvStart0).field0_0x0.d[0];
  if (1.0 < fVar16) {
    do {
                    /* end of inlined section */
      fVar16 = fVar16 - 1.0;
    } while (1.0 < fVar16);
    (this->m_uvStart0).field0_0x0.d[0] = fVar16;
  }
  fVar16 = (this->m_uvStart1).field0_0x0.d[0];
  if (1.0 < fVar16) {
    do {
                    /* end of inlined section */
      fVar16 = fVar16 - 1.0;
    } while (1.0 < fVar16);
    (this->m_uvStart1).field0_0x0.d[0] = fVar16;
    fVar16 = (this->m_uvStart0).field0_0x0.d[1];
  }
  else {
    fVar16 = (this->m_uvStart0).field0_0x0.d[1];
  }
  if (1.0 < fVar16) {
    do {
                    /* end of inlined section */
      fVar16 = fVar16 - 1.0;
    } while (1.0 < fVar16);
    (this->m_uvStart0).field0_0x0.d[1] = fVar16;
    fVar16 = (this->m_uvStart1).field0_0x0.d[1];
  }
  else {
    fVar16 = (this->m_uvStart1).field0_0x0.d[1];
  }
  if (1.0 < fVar16) {
    do {
                    /* end of inlined section */
      fVar16 = fVar16 - 1.0;
    } while (1.0 < fVar16);
    (this->m_uvStart1).field0_0x0.d[1] = fVar16;
    fVar16 = (this->m_uvStart0).field0_0x0.d[0];
  }
  else {
    fVar16 = (this->m_uvStart0).field0_0x0.d[0];
  }
  if (fVar16 < 0.0) {
    do {
      fVar16 = fVar16 + 1.0;
    } while (fVar16 < 0.0);
    (this->m_uvStart0).field0_0x0.d[0] = fVar16;
    fVar16 = (this->m_uvStart1).field0_0x0.d[0];
  }
  else {
    fVar16 = (this->m_uvStart1).field0_0x0.d[0];
  }
  if (fVar16 < 0.0) {
    do {
      fVar16 = fVar16 + 1.0;
    } while (fVar16 < 0.0);
    (this->m_uvStart1).field0_0x0.d[0] = fVar16;
    fVar16 = (this->m_uvStart0).field0_0x0.d[1];
  }
  else {
    fVar16 = (this->m_uvStart0).field0_0x0.d[1];
  }
  if (fVar16 < 0.0) {
    do {
      fVar16 = fVar16 + 1.0;
    } while (fVar16 < 0.0);
    (this->m_uvStart0).field0_0x0.d[1] = fVar16;
    fVar16 = (this->m_uvStart1).field0_0x0.d[1];
  }
  else {
    fVar16 = (this->m_uvStart1).field0_0x0.d[1];
  }
  if (fVar16 < 0.0) {
    do {
      fVar16 = fVar16 + 1.0;
    } while (fVar16 < 0.0);
    (this->m_uvStart1).field0_0x0.d[1] = fVar16;
    fVar16 = this->m_uvPhase;
  }
  else {
    fVar16 = this->m_uvPhase;
  }
  fVar16 = fVar16 * 6.283185;
  fVar17 = 0.007;
  fVar19 = fVar16 + 0.5;
  fVar15 = cosf(fVar19);
  fVar18 = (this->m_uvStart0).field0_0x0.d[0] + this->m_txtReps * (1.0 - fVar15 * 0.005);
  fVar15 = sinf(fVar19);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_fc = (this->m_uvStart0).field0_0x0.d[1] + this->m_txtReps * (1.0 - fVar15 * 0.005);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_uvEnd0).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | CONCAT44(local_fc,fVar18) >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_uvEnd0 & 7;
  puVar7 = (ulong *)((int)&this->m_uvEnd0 - uVar4);
  *puVar7 = CONCAT44(local_fc,fVar18) << uVar4 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  local_100 = fVar18;
  fVar18 = cosf(fVar16);
  fVar18 = fVar18 * fVar17;
  fVar15 = this->m_txtReps;
  fVar19 = (this->m_uvStart1).field0_0x0.d[0];
  fVar16 = sinf(fVar16);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar14 = CONCAT44((this->m_uvStart1).field0_0x0.d[1] + this->m_txtReps * (fVar16 * fVar17 + 2.0),
                    fVar19 + fVar15 * (fVar18 + 2.0));
  puVar1 = (undefined *)((int)&(this->m_uvEnd1).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar14 >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_uvEnd1 & 7;
  puVar7 = (ulong *)((int)&this->m_uvEnd1 - uVar4);
  *puVar7 = uVar14 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  return;
}

float EIWaterPatch::QuickSin(float angle) {
  float fVar1;
  
  fVar1 = sinf(angle);
  return fVar1;
}

float EIWaterPatch::GetHeight(float worldX, float worldY, EVec3 *pNrm) {
	float height;
	float nrmCnt;
	EWaterWave *pWave;
	EVec2 vFromCenter;
	float distFromCenterSq;
	float k;
	float closeEffect;
	float x;
	float y;
	float distFromCenter;
	float distFromRipple;
	float rippleMax;
	float rippleEffect;
	float phaseOffset;
	float period;
	float angle;
	float waveHeight;
	float cosAngle;
	float normalEffectXY;
	float normalEffectZ;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  EWaterWave *pEVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  EVec2 vFromCenter;
  
  fVar13 = 0.0;
  fVar16 = 0.0;
  puVar1 = (undefined *)((int)&pNrm->field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)pNrm & 7;
  *(ulong *)((int)pNrm - uVar2) =
       0L << uVar2 * 8 | *(ulong *)((int)pNrm - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pNrm->field0_0x0).d[2] = 0.0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (this->m_waves).m_pHead;
                    /* end of inlined section */
  if (pEVar4 != (EWaterWave *)0x0) {
    fVar9 = 1.0;
    fVar15 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    do {
                    /* end of inlined section */
      fVar14 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar6 = worldX - (pEVar4->vCenter).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar5 = worldY - (pEVar4->vCenter).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar11 = fVar6 * fVar6 + fVar5 * fVar5;
                    /* end of inlined section */
      fVar7 = fVar9 - fVar11 / (this->m_splashRad * this->m_splashRad);
      if (fVar15 <= fVar7) {
        fVar14 = (float)((int)fVar7 * (uint)(fVar7 < fVar9) | (int)fVar9 * (uint)(fVar7 >= fVar9));
      }
      if (0.0 < fVar14) {
        fVar8 = sqrtf(fVar11);
        fVar7 = this->m_peakDistance;
        fVar12 = (fVar7 - ABS(fVar8 - pEVar4->distance)) / fVar7;
        fVar11 = 0.0;
        if (0.0 <= fVar12) {
          fVar11 = (float)((int)fVar12 * (uint)(fVar12 < fVar9) |
                          (int)fVar9 * (uint)(fVar12 >= fVar9));
        }
        fVar11 = fVar11 * fVar11 * fVar11;
        if (fVar15 < fVar11) {
          fVar16 = fVar16 + fVar9;
          fVar12 = (pEVar4->period - (fVar8 / fVar7) * ABS(fVar8 / fVar7)) * 6.283185;
          fVar7 = sinf(fVar12);
          fVar13 = fVar13 + fVar14 * fVar11 * pEVar4->magnitude * fVar7;
          fVar12 = cosf(fVar12);
          fVar7 = pEVar4->magnitude;
          fVar10 = (pNrm->field0_0x0).d[0];
          fVar11 = fVar12 * (float)((int)fVar7 * (uint)(fVar7 < fVar9) |
                                   (int)fVar9 * (uint)(fVar7 >= fVar9)) * fVar14 * fVar11;
          (pNrm->field0_0x0).d[2] = (pNrm->field0_0x0).d[2] + (fVar9 - fVar11 * fVar11);
          (pNrm->field0_0x0).d[1] = (pNrm->field0_0x0).d[1] + (fVar12 * fVar11 * fVar5) / fVar8;
          (pNrm->field0_0x0).d[0] = fVar10 + (fVar12 * fVar11 * fVar6) / fVar8;
          pEVar4 = pEVar4->pNext;
        }
        else {
          pEVar4 = pEVar4->pNext;
        }
      }
      else {
        pEVar4 = pEVar4->pNext;
      }
    } while (pEVar4 != (EWaterWave *)0x0);
    if (fVar16 == 0.0) {
      (pNrm->field0_0x0).d[1] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      (pNrm->field0_0x0).d[2] = 1.0;
      (pNrm->field0_0x0).d[0] = 0.0;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar16 = sqrtf((pNrm->field0_0x0).d[0] * (pNrm->field0_0x0).d[0] +
                     (pNrm->field0_0x0).d[1] * (pNrm->field0_0x0).d[1] +
                     (pNrm->field0_0x0).d[2] * (pNrm->field0_0x0).d[2]);
      if (fVar16 != 0.0) {
        fVar16 = 1.0 / fVar16;
        fVar15 = (pNrm->field0_0x0).d[1];
        fVar9 = (pNrm->field0_0x0).d[2];
        (pNrm->field0_0x0).d[0] = (pNrm->field0_0x0).d[0] * fVar16;
        (pNrm->field0_0x0).d[2] = fVar9 * fVar16;
                    /* end of inlined section */
        (pNrm->field0_0x0).d[1] = fVar15 * fVar16;
      }
    }
  }
  return fVar13;
}

void EIWaterPatch::GetUV(float x, float y, float *u, float *v, int pass) {
	float kx;
	float ky;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (this->m_vMin).field0_0x0.d[0];
  fVar4 = (this->m_vMin).field0_0x0.d[1];
  fVar2 = (this->m_vMax).field0_0x0.d[1];
  fVar3 = (x - fVar3) / ((this->m_vMax).field0_0x0.d[0] - fVar3);
  if (pass == 0) {
                    /* end of inlined section */
    fVar1 = (this->m_uvStart0).field0_0x0.d[0];
    *u = fVar1 + fVar3 * ((this->m_uvEnd0).field0_0x0.d[0] - fVar1);
    fVar1 = (this->m_uvStart0).field0_0x0.d[1];
    fVar3 = (this->m_uvEnd0).field0_0x0.d[1];
  }
  else {
                    /* end of inlined section */
    fVar1 = (this->m_uvStart1).field0_0x0.d[0];
    *u = fVar1 + fVar3 * ((this->m_uvEnd1).field0_0x0.d[0] - fVar1);
    fVar1 = (this->m_uvStart1).field0_0x0.d[1];
    fVar3 = (this->m_uvEnd1).field0_0x0.d[1];
  }
  *v = fVar1 + ((y - fVar4) / (fVar2 - fVar4)) * (fVar3 - fVar1);
  return;
}

void EIWaterPatch::OrderTableCallback(ERC *pRC, u32 param1, u32 param2) {
	EIWaterPatch *pThis;
	u32 renderFlags;
	bool drawFirst[4];
	int i;
	EVec3 vEyeDir;
	
  uint uVar1;
  ulong *puVar2;
  int *piVar3;
  int *piVar4;
  EWaterStatic *pEVar5;
  int iVar6;
  bool drawFirst [4];
  undefined auStack_89 [8];
  undefined uStack_81;
  EVec3 vEyeDir;
  
  piVar3 = (int *)drawFirst;
  piVar4 = (int *)drawFirst;
  if ((*(ERShader **)(param1 + 0x1ac) == (ERShader *)0x0) || ((*(uint *)(param1 + 0x8c) & 4) == 0))
  {
    (*(code *)pRC->__vtable->Init)((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->LoadMPG,0,0);
    (*(code *)pRC->__vtable[1].RectList)
              ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable[1].Rect,0,0,0,0,0,0);
    (*(code *)pRC->__vtable[1].TriStrip)
              ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable[1].TriStrip,8,0);
  }
  else {
    Select__8ERShaderP3ERCi(*(ERShader **)(param1 + 0x1ac),pRC,0);
  }
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  uVar1 = (uint)auStack_89 & 7;
  puVar2 = (ulong *)(auStack_89 + -uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003c27a8 >> (7 - uVar1) * 8;
  _drawFirst = DAT_003c27a8;
  uVar1 = (uint)&uStack_81 & 7;
  puVar2 = (ulong *)(&uStack_81 + -uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003c27b0 >> (7 - uVar1) * 8;
  stack0xffffff78 = (undefined  [8])DAT_003c27b0;
  if (_7EWindow_m_pCurrent3DWindow != (E3DWindow *)0x0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    vEyeDir.field0_0x0.d[0] = -(_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[2][0];
    vEyeDir.field0_0x0.d[1] = -(_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[2][1];
    vEyeDir.field0_0x0.d[2] = -(_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[2][2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    if (0.0 < vEyeDir.field0_0x0.d[0]) {
      _drawFirst = DAT_003c27a8 & 0xffffffff00000000;
    }
    else {
      _drawFirst = DAT_003c27a8 & 0xffffffff;
    }
                    /* end of inlined section */
    if (0.0 < vEyeDir.field0_0x0.d[1]) {
      stack0xffffff78 = (undefined  [8])(DAT_003c27b0 & 0xffffffff00000000);
    }
    else {
      stack0xffffff78 = (undefined  [8])(DAT_003c27b0 & 0xffffffff);
    }
  }
  pEVar5 = (EWaterStatic *)(param1 + 0xec);
  iVar6 = 3;
  (*(code *)pRC->__vtable->ZTest)((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->RecalcMatrices);
  do {
    if (*piVar3 != 0) {
      DrawStatic__12EIWaterPatchP3ERCP12EWaterStatic((EIWaterPatch *)param1,pRC,pEVar5);
    }
    pEVar5 = pEVar5 + 1;
    iVar6 = iVar6 + -1;
    piVar3 = piVar3 + 1;
  } while (-1 < iVar6);
  DrawActiveGrid__12EIWaterPatchP3ERC((EIWaterPatch *)param1,pRC);
  pEVar5 = (EWaterStatic *)(param1 + 0xec);
  iVar6 = 3;
  do {
    if (*piVar4 == 0) {
      DrawStatic__12EIWaterPatchP3ERCP12EWaterStatic((EIWaterPatch *)param1,pRC,pEVar5);
    }
    pEVar5 = pEVar5 + 1;
    iVar6 = iVar6 + -1;
    piVar4 = piVar4 + 1;
  } while (-1 < iVar6);
  return;
}

void EIWaterPatch::Draw(ERC *pRC, u32 renderFlags) {
  ERLevel *this_00;
  
  this_00 = (this->field0_0x0).m_pLevel;
  if (this_00 == (ERLevel *)0x0) {
    OrderTableCallback__12EIWaterPatchP3ERCUiUi(pRC,(uint)this,0);
  }
  else if ((renderFlags & 8) == 0) {
    (this->m_orderTableData).renderFlags = renderFlags;
    InsertInOrderTable__7ERLevelR15EOrderTableData(this_00,&this->m_orderTableData);
  }
  return;
}

void EIWaterPatch::DrawStatic(ERC *pRC, EWaterStatic *pStatic) {
	ERC *this;
	ERC *this;
	ERC *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	
  float *pXYZ;
  float *u;
  float *u_00;
  float fVar1;
  
  if (*(int *)&pStatic->active != 0) {
                    /* inlined from e_rc.h */
    pXYZ = (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,0x40,0x10);
    u = (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,0x20,0x10);
    u_00 = (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,0x20,0x10);
                    /* end of inlined section */
                    /* inlined from e_dl.h */
                    /* end of inlined section */
    *pXYZ = (pStatic->vMin).field0_0x0.d[0];
    pXYZ[1] = (pStatic->vMin).field0_0x0.d[1];
    fVar1 = (this->m_vCenter).field0_0x0.d[2];
    pXYZ[3] = 0.0;
    pXYZ[2] = fVar1;
    pXYZ[4] = (pStatic->vMax).field0_0x0.d[0];
    pXYZ[5] = (pStatic->vMin).field0_0x0.d[1];
    fVar1 = (this->m_vCenter).field0_0x0.d[2];
    pXYZ[7] = 0.0;
    pXYZ[6] = fVar1;
    pXYZ[8] = (pStatic->vMin).field0_0x0.d[0];
    pXYZ[9] = (pStatic->vMax).field0_0x0.d[1];
    fVar1 = (this->m_vCenter).field0_0x0.d[2];
    pXYZ[0xb] = 0.0;
    pXYZ[10] = fVar1;
    pXYZ[0xc] = (pStatic->vMax).field0_0x0.d[0];
    pXYZ[0xd] = (pStatic->vMax).field0_0x0.d[1];
    fVar1 = (this->m_vCenter).field0_0x0.d[2];
    pXYZ[0xf] = 0.0;
    pXYZ[0xe] = fVar1;
    GetUV__12EIWaterPatchffPfT3i
              (this,(pStatic->vMin).field0_0x0.d[0],(pStatic->vMin).field0_0x0.d[1],u,u + 1,0);
    GetUV__12EIWaterPatchffPfT3i
              (this,(pStatic->vMax).field0_0x0.d[0],(pStatic->vMin).field0_0x0.d[1],u + 2,u + 3,0);
    GetUV__12EIWaterPatchffPfT3i
              (this,(pStatic->vMin).field0_0x0.d[0],(pStatic->vMax).field0_0x0.d[1],u + 4,u + 5,0);
    GetUV__12EIWaterPatchffPfT3i
              (this,(pStatic->vMax).field0_0x0.d[0],(pStatic->vMax).field0_0x0.d[1],u + 6,u + 7,0);
    GetUV__12EIWaterPatchffPfT3i
              (this,(pStatic->vMin).field0_0x0.d[0],(pStatic->vMin).field0_0x0.d[1],u_00,u_00 + 1,1)
    ;
    GetUV__12EIWaterPatchffPfT3i
              (this,(pStatic->vMax).field0_0x0.d[0],(pStatic->vMin).field0_0x0.d[1],u_00 + 2,
               u_00 + 3,1);
    GetUV__12EIWaterPatchffPfT3i
              (this,(pStatic->vMin).field0_0x0.d[0],(pStatic->vMax).field0_0x0.d[1],u_00 + 4,
               u_00 + 5,1);
    GetUV__12EIWaterPatchffPfT3i
              (this,(pStatic->vMax).field0_0x0.d[0],(pStatic->vMax).field0_0x0.d[1],u_00 + 6,
               u_00 + 7,1);
    DrawStrip__12EIWaterPatchP3ERCiPfN23PUcPSc
              (this,pRC,4,pXYZ,u,u_00,this->m_pWhiteColors,this->m_pUpNormals);
  }
  return;
}

void EIWaterPatch::DrawStrip(ERC *pRC, int nVtxs, float *pXYZ, float *pUV0, float *pUV1, u8 *pRGB, s8 *pIJK) {
  if (this->m_pRShaderBase != (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(this->m_pRShaderBase,pRC,0);
    (*(code *)pRC->__vtable->TriFan)
              ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->Vertex,nVtxs,pXYZ,pUV0,pRGB,pIJK,0)
    ;
    (*(code *)pRC->__vtable->TriFan)
              ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->Vertex,nVtxs,pXYZ,pUV1,pRGB,pIJK,0)
    ;
  }
  if (this->m_pRShaderReflect != (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(this->m_pRShaderReflect,pRC,0);
    (*(code *)pRC->__vtable->TriFan)
              ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->Vertex,nVtxs,pXYZ,pUV1,pRGB,pIJK,0)
    ;
  }
  return;
}

void EIWaterPatch::DrawActiveGrid(ERC *pRC) {
	int nx;
	int ny;
	int nVtxs;
	float *pPositions;
	float *pTexCoords0;
	float *pTexCoords1;
	u8 *pColors;
	s8 *pNormals;
	float *pXYZ;
	float *pUV0;
	float *pUV1;
	u8 *pRGB;
	s8 *pIJK;
	float xStart;
	float yStart;
	float xEnd;
	float yEnd;
	bool yFirst;
	EVec2 uvMin0;
	EVec2 uvMax0;
	EVec2 uvMin1;
	EVec2 uvMax1;
	float uStep0;
	float uStep1;
	float vStep0;
	float vStep1;
	float xStep;
	float yStep;
	ERC *this;
	ERC *this;
	ERC *this;
	ERC *this;
	ERC *this;
	EVec3 vEyeDir;
	float tmp;
	float tmp;
	float yPos;
	float vPos0;
	float vPos1;
	int y;
	float xPos;
	float uPos0;
	float uPos1;
	int x;
	EVec2 pos0;
	EVec2 pos1;
	EVec2 uv00;
	EVec2 uv01;
	EVec2 uv10;
	EVec2 uv11;
	float x;
	float y;
	float x;
	float x;
	float y;
	float x;
	float x;
	float y;
	float x;
	float xPos;
	float uPos0;
	float uPos1;
	int x;
	float yPos;
	float vPos0;
	float vPos1;
	int y;
	EVec2 pos0;
	EVec2 pos1;
	EVec2 uv00;
	EVec2 uv01;
	EVec2 uv10;
	EVec2 uv11;
	float x;
	float y;
	float y;
	float x;
	float y;
	float y;
	float x;
	float y;
	float y;
	
  bool bVar1;
  int iVar2;
  float *pXYZ;
  float *pUV0;
  float *pUV1;
  uchar *pRGB;
  char *pIJK;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uchar *puVar8;
  uchar *puVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float y;
  float fVar31;
  float x;
  EVec2 uvMin0;
  EVec2 uvMax0;
  EVec2 uvMin1;
  EVec2 uvMax1;
  EVec2 pos0;
  EVec2 pos1;
  EVec2 uv00;
  float local_1b0;
  float local_1ac;
  float local_1a0;
  float local_19c;
  float local_190;
  float local_18c;
  EVec2 uv01;
  EVec2 uv10;
  EVec2 uv11;
  int nx;
  int ny;
  uchar *pColors;
  char *pNormals;
  bool yFirst;
  float uStep0;
  float uStep1;
  float vStep0;
  float xStep;
  float yStep;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((this->m_waves).m_pHead != (EWaterWave *)0x0) {
                    /* inlined from e_dl.h */
                    /* end of inlined section */
    bVar1 = false;
    iVar2 = (int)this->m_resolution + ((int)this->m_resolution & 1U);
    iVar3 = iVar2 * (iVar2 + -1) * 2;
                    /* inlined from e_dl.h */
    pXYZ = (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,iVar3 * 0x10,0x10);
    pUV0 = (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,iVar3 * 8,0x10);
    pUV1 = (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,iVar3 * 8,0x10);
    pRGB = (uchar *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,iVar3 * 4,0x10);
    pIJK = (char *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,iVar3 * 4,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
    x = (this->m_vActiveMin).field0_0x0.d[0];
    y = (this->m_vActiveMin).field0_0x0.d[1];
    fVar24 = (this->m_vActiveMax).field0_0x0.d[0];
    fVar20 = (this->m_vActiveMax).field0_0x0.d[1];
    fVar17 = fVar20;
    fVar18 = fVar24;
    if (_7EWindow_m_pCurrent3DWindow != (E3DWindow *)0x0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      uvMin0.field0_0x0.d[0] = -(_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[2][0];
      uvMin0.field0_0x0.d[1] = -(_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[2][1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar18 = x;
      if (uvMin0.field0_0x0.d[0] <= 0.0) {
        fVar18 = fVar24;
        fVar24 = x;
      }
                    /* end of inlined section */
      fVar17 = y;
      if (uvMin0.field0_0x0.d[1] <= 0.0) {
        fVar17 = fVar20;
        fVar20 = y;
      }
                    /* end of inlined section */
      fVar16 = uvMin0.field0_0x0.d[1];
      if (uvMin0.field0_0x0.d[1] < 0.0) {
        fVar16 = -uvMin0.field0_0x0.d[1];
      }
                    /* end of inlined section */
      fVar19 = uvMin0.field0_0x0.d[0];
      if (uvMin0.field0_0x0.d[0] < 0.0) {
                    /* end of inlined section */
        fVar19 = -uvMin0.field0_0x0.d[0];
      }
                    /* end of inlined section */
      y = fVar20;
      x = fVar24;
      if (fVar19 < fVar16) {
        bVar1 = true;
      }
    }
    GetUV__12EIWaterPatchffPfT3i(this,x,y,(float *)&uvMin0,uvMin0.field0_0x0.d + 1,0);
    GetUV__12EIWaterPatchffPfT3i(this,x,y,(float *)&uvMin1,uvMin1.field0_0x0.d + 1,1);
    GetUV__12EIWaterPatchffPfT3i(this,fVar18,fVar17,(float *)&uvMax0,uvMax0.field0_0x0.d + 1,0);
    GetUV__12EIWaterPatchffPfT3i(this,fVar18,fVar17,(float *)&uvMax1,uvMax1.field0_0x0.d + 1,1);
    iVar4 = iVar2 + -1;
    fVar24 = (float)iVar4;
    iVar3 = iVar2 + -1;
    fVar20 = (float)iVar3;
    fVar16 = (fVar18 - x) / fVar24;
    fVar19 = (fVar17 - y) / fVar20;
    fVar18 = (uvMax0.field0_0x0.d[0] - uvMin0.field0_0x0.d[0]) / fVar24;
    fVar24 = (uvMax1.field0_0x0.d[0] - uvMin1.field0_0x0.d[0]) / fVar24;
    fVar17 = (uvMax0.field0_0x0.d[1] - uvMin0.field0_0x0.d[1]) / fVar20;
    fVar20 = (uvMax1.field0_0x0.d[1] - uvMin1.field0_0x0.d[1]) / fVar20;
    if (bVar1) {
      iVar4 = 0;
      if (0 < iVar3) {
        uVar23 = uvMin0.field0_0x0.d[1];
        do {
          iVar4 = iVar4 + 1;
          fVar30 = y + fVar19;
          fVar28 = uVar23 + fVar17;
          fVar31 = uvMin1.field0_0x0.d[1] + fVar20;
          uVar21 = uvMin0.field0_0x0.d[0];
          uVar25 = uvMin1.field0_0x0.d[0];
          fVar29 = x;
          pfVar14 = pXYZ;
          pfVar15 = pXYZ;
          pfVar12 = pUV0;
          pfVar13 = pUV0;
          pfVar10 = pUV1;
          pfVar11 = pUV1;
          pcVar6 = pIJK;
          pcVar7 = pIJK;
          puVar8 = pRGB;
          puVar9 = pRGB;
          iVar5 = iVar2;
          if (0 < iVar2) {
            do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              fVar22 = uVar21 + fVar18;
              pfVar15 = pfVar14 + 8;
              pfVar13 = pfVar12 + 4;
              pfVar11 = pfVar10 + 4;
              puVar9 = puVar8 + 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              pcVar7 = pcVar6 + 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              iVar5 = iVar5 + -1;
              pos0.field0_0x0.d[0] = fVar29;
              pos0.field0_0x0.d[1] = y;
              pos1.field0_0x0.d[0] = fVar29;
              pos1.field0_0x0.d[1] = fVar30;
              uv00.field0_0x0.d[0] = uVar21;
              uv00.field0_0x0.d[1] = uVar23;
              local_1b0 = uVar21;
              local_1ac = fVar28;
              local_1a0 = uVar25;
              local_19c = uvMin1.field0_0x0.d[1];
              local_190 = uVar25;
              local_18c = fVar31;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              ComputeVertex__12EIWaterPatchR5EVec2N51PfN27PUcPSc
                        (this,&pos0,&pos1,&uv00,(EVec2 *)&local_1b0,(EVec2 *)&local_1a0,
                         (EVec2 *)&local_190,pfVar14,pfVar12,pfVar10,puVar8,pcVar6);
              uVar21 = fVar22;
              uVar25 = uVar25 + fVar24;
              fVar29 = fVar29 + fVar16;
              pfVar14 = pfVar15;
              pfVar12 = pfVar13;
              pfVar10 = pfVar11;
              pcVar6 = pcVar7;
              puVar8 = puVar9;
            } while (iVar5 != 0);
          }
          uVar23 = fVar28;
          DrawStrip__12EIWaterPatchP3ERCiPfN23PUcPSc(this,pRC,iVar2 * 2,pXYZ,pUV0,pUV1,pRGB,pIJK);
          uvMin1.field0_0x0.d[1] = fVar31;
          y = fVar30;
          pXYZ = pfVar15;
          pUV0 = pfVar13;
          pUV1 = pfVar11;
          pIJK = pcVar7;
          pRGB = puVar9;
        } while (iVar4 < iVar3);
      }
    }
    else {
      iVar3 = 0;
      if (0 < iVar4) {
        uVar21 = uvMin0.field0_0x0.d[0];
        do {
          iVar3 = iVar3 + 1;
          fVar30 = x + fVar16;
          fVar29 = uVar21 + fVar18;
          fVar31 = uvMin1.field0_0x0.d[0] + fVar24;
          uVar23 = uvMin0.field0_0x0.d[1];
          uVar26 = uvMin1.field0_0x0.d[1];
          fVar28 = y;
          pfVar14 = pXYZ;
          pfVar15 = pXYZ;
          pfVar12 = pUV0;
          pfVar13 = pUV0;
          pfVar10 = pUV1;
          pfVar11 = pUV1;
          pcVar6 = pIJK;
          pcVar7 = pIJK;
          puVar8 = pRGB;
          puVar9 = pRGB;
          iVar5 = iVar2;
          if (0 < iVar2) {
            do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              fVar22 = uVar23 + fVar17;
              pfVar15 = pfVar14 + 8;
              pfVar13 = pfVar12 + 4;
              pfVar11 = pfVar10 + 4;
              puVar9 = puVar8 + 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              pcVar7 = pcVar6 + 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              fVar27 = uVar26 + fVar20;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              iVar5 = iVar5 + -1;
              pos0.field0_0x0.d[0] = x;
              pos0.field0_0x0.d[1] = y;
              pos1.field0_0x0.d[0] = fVar30;
              pos1.field0_0x0.d[1] = y;
              uv00.field0_0x0.d[0] = uVar21;
              uv00.field0_0x0.d[1] = uVar23;
              uv01.field0_0x0.d[0] = fVar29;
              uv01.field0_0x0.d[1] = uVar23;
              uv10.field0_0x0.d[0] = uvMin1.field0_0x0.d[0];
              uv10.field0_0x0.d[1] = uVar26;
              uv11.field0_0x0.d[0] = fVar31;
              uv11.field0_0x0.d[1] = uVar26;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              ComputeVertex__12EIWaterPatchR5EVec2N51PfN27PUcPSc
                        (this,&pos0,&pos1,&uv00,&uv01,&uv10,&uv11,pfVar14,pfVar12,pfVar10,puVar8,
                         pcVar6);
              uVar23 = fVar22;
              uVar26 = fVar27;
              y = y + fVar19;
              pfVar14 = pfVar15;
              pfVar12 = pfVar13;
              pfVar10 = pfVar11;
              pcVar6 = pcVar7;
              puVar8 = puVar9;
            } while (iVar5 != 0);
          }
          uVar21 = fVar29;
          DrawStrip__12EIWaterPatchP3ERCiPfN23PUcPSc(this,pRC,iVar2 * 2,pXYZ,pUV0,pUV1,pRGB,pIJK);
          uvMin1.field0_0x0.d[0] = fVar31;
          x = fVar30;
          y = fVar28;
          pXYZ = pfVar15;
          pUV0 = pfVar13;
          pUV1 = pfVar11;
          pIJK = pcVar7;
          pRGB = puVar9;
        } while (iVar3 < iVar4);
      }
    }
  }
  return;
}

void EIWaterPatch::DrawCircleWedge(ERC *pRC, EVec2 &vCenter, EVec2 &vCorner, float startRad, float radStep, float startAngle, float angleStep, int nRings, int nSlices) {
	int nSteps;
	int nVtxs;
	float *pPositions;
	float *pTexCoords0;
	float *pTexCoords1;
	u8 *pColors;
	s8 *pNormals;
	float *pXYZ;
	float *pUV0;
	float *pUV1;
	u8 *pRGB;
	s8 *pIJK;
	float rad;
	EVec2 uv00;
	EVec2 uv10;
	float angle;
	ERC *this;
	ERC *this;
	ERC *this;
	ERC *this;
	ERC *this;
	int cr;
	float angle;
	int cc;
	float unitX;
	float unitY;
	EVec2 pos0;
	EVec2 pos1;
	EVec2 uv00;
	EVec2 uv01;
	EVec2 uv10;
	EVec2 uv11;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	int cc;
	float unitX;
	EVec2 pos1;
	EVec2 uv01;
	EVec2 uv11;
	EVec2 *this;
	
  bool bVar1;
  float *pXYZ;
  float *pUV0;
  float *pUV1;
  uchar *pRGB;
  char *pIJK;
  int iVar2;
  int iVar3;
  uint size;
  int iVar4;
  uchar *pRGB_00;
  uchar *puVar5;
  char *pcVar6;
  float *pfVar7;
  float *pUV1_00;
  float *pfVar8;
  float *pUV0_00;
  float *pfVar9;
  float *pXYZ_00;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  EVec2 pos0;
  float local_1b0;
  float local_1ac [3];
  EVec2 pos1;
  undefined8 uStack_190;
  EVec2 uv10;
  undefined8 uStack_170;
  EVec2 uv01;
  EVec2 uv11;
  int nSteps;
  float *pPositions;
  float *pTexCoords0;
  float *pTexCoords1;
  uchar *pColors;
  char *pNormals;
  
  iVar3 = nSlices + 1;
  iVar2 = (nRings + 1) * iVar3 * 2;
                    /* inlined from e_rc.h */
                    /* end of inlined section */
                    /* inlined from e_dl.h */
                    /* end of inlined section */
                    /* inlined from e_dl.h */
                    /* end of inlined section */
                    /* inlined from e_dl.h */
  pXYZ = (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,iVar2 * 0x10,0x10);
  pUV0 = (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,iVar2 * 8,0x10);
                    /* end of inlined section */
                    /* inlined from e_dl.h */
  pUV1 = (float *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,iVar2 * 8,0x10);
                    /* end of inlined section */
                    /* inlined from e_rc.h */
  size = (iVar2 + (nRings + 1) * 2) * 4;
                    /* end of inlined section */
                    /* inlined from e_dl.h */
  pRGB = (uchar *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,size,0x10);
                    /* end of inlined section */
                    /* inlined from e_dl.h */
  pIJK = (char *)Alloc__11EAllocGroupUii(&pRC->m_pdl->m_allocGroup,size,0x10);
                    /* end of inlined section */
  if (0 < nRings) {
    iVar2 = 1;
    fVar14 = startRad;
    pfVar9 = pXYZ;
    pfVar8 = pUV0;
    pfVar7 = pUV1;
    pcVar6 = pIJK;
    puVar5 = pRGB;
    do {
      fVar15 = fVar14 + radStep;
      pXYZ = pfVar9;
      pUV0 = pfVar8;
      pUV1 = pfVar7;
      pIJK = pcVar6;
      pRGB = puVar5;
      if (0 < iVar3) {
        fVar12 = startAngle;
        fVar13 = fVar15;
        pXYZ_00 = pfVar9;
        pUV0_00 = pfVar8;
        pUV1_00 = pfVar7;
        pRGB_00 = puVar5;
        iVar4 = iVar3;
        do {
          iVar4 = iVar4 + -1;
          fVar10 = cosf(fVar12);
          fVar11 = sinf(fVar12);
          fVar12 = fVar12 + angleStep;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          pos1.field0_0x0.d[0] = fVar13 * fVar10;
          pos1.field0_0x0.d[1] = fVar13 * fVar11;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_1b0 = (vCenter->field0_0x0).d[0] + pos1.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_1ac[0] = (vCenter->field0_0x0).d[1] + pos1.field0_0x0.d[1];
          pos0.field0_0x0.d[0] = (vCenter->field0_0x0).d[0] + fVar14 * fVar10;
          pos0.field0_0x0.d[1] = (vCenter->field0_0x0).d[1] + fVar14 * fVar11;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          GetUV__12EIWaterPatchffPfT3i
                    (this,pos0.field0_0x0.d[0],pos0.field0_0x0.d[1],(float *)&pos1,
                     pos1.field0_0x0.d + 1,0);
          GetUV__12EIWaterPatchffPfT3i
                    (this,pos0.field0_0x0.d[0],pos0.field0_0x0.d[1],(float *)&uv10,
                     uv10.field0_0x0.d + 1,1);
          GetUV__12EIWaterPatchffPfT3i
                    (this,local_1b0,local_1ac[0],(float *)(EVec2 *)&uStack_190,
                     (float *)((int)&uStack_190 + 4),0);
          GetUV__12EIWaterPatchffPfT3i
                    (this,local_1b0,local_1ac[0],(float *)(EVec2 *)&uStack_170,
                     (float *)((int)&uStack_170 + 4),1);
          pXYZ = pXYZ_00 + 8;
          pUV0 = pUV0_00 + 4;
          pUV1 = pUV1_00 + 4;
          pRGB = pRGB_00 + 8;
          ComputeVertex__12EIWaterPatchR5EVec2N51PfN27PUcPSc
                    (this,&pos0,(EVec2 *)&local_1b0,&pos1,(EVec2 *)&uStack_190,&uv10,
                     (EVec2 *)&uStack_170,pXYZ_00,pUV0_00,pUV1_00,pRGB_00,pIJK);
          pIJK = pIJK + 8;
          pXYZ_00 = pXYZ;
          pUV0_00 = pUV0;
          pUV1_00 = pUV1;
          pRGB_00 = pRGB;
        } while (iVar4 != 0);
      }
      if (((uint)pRGB & 0xf) != 0) {
        pRGB = pRGB + 8;
        pIJK = pIJK + 8;
      }
      DrawStrip__12EIWaterPatchP3ERCiPfN23PUcPSc
                (this,pRC,iVar3 * 2,pfVar9,pfVar8,pfVar7,puVar5,pcVar6);
      bVar1 = iVar2 < nRings;
      iVar2 = iVar2 + 1;
      fVar14 = fVar15;
      pfVar9 = pXYZ;
      pfVar8 = pUV0;
      pfVar7 = pUV1;
      pcVar6 = pIJK;
      puVar5 = pRGB;
    } while (bVar1);
  }
                    /* end of inlined section */
  GetUV__12EIWaterPatchffPfT3i
            (this,(vCorner->field0_0x0).d[0],(vCorner->field0_0x0).d[1],(float *)&pos0,
             pos0.field0_0x0.d + 1,0);
  GetUV__12EIWaterPatchffPfT3i
            (this,(vCorner->field0_0x0).d[0],(vCorner->field0_0x0).d[1],(float *)(EVec2 *)&local_1b0
             ,local_1ac,1);
  iVar2 = iVar3 * 2;
  fVar14 = (float)nRings * radStep;
  fVar14 = (float)((int)fVar14 * (uint)(startRad < fVar14) |
                  (int)startRad * (uint)(startRad >= fVar14));
  if (0 < iVar3) {
    pfVar9 = pXYZ;
    pfVar8 = pUV0;
    pfVar7 = pUV1;
    pcVar6 = pIJK;
    puVar5 = pRGB;
    do {
      iVar3 = iVar3 + -1;
      fVar15 = cosf(startAngle);
      fVar12 = sinf(startAngle);
      startAngle = startAngle + angleStep;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      uv01.field0_0x0.d[1] = fVar14 * fVar12;
      uv01.field0_0x0.d[0] = fVar14 * fVar15;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      pos1.field0_0x0.d[0] = (vCenter->field0_0x0).d[0] + uv01.field0_0x0.d[0];
      pos1.field0_0x0.d[1] = (vCenter->field0_0x0).d[1] + uv01.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
      GetUV__12EIWaterPatchffPfT3i
                (this,pos1.field0_0x0.d[0],pos1.field0_0x0.d[1],(float *)&uv01,uv01.field0_0x0.d + 1
                 ,0);
      GetUV__12EIWaterPatchffPfT3i
                (this,pos1.field0_0x0.d[0],pos1.field0_0x0.d[1],(float *)&uv11,uv11.field0_0x0.d + 1
                 ,1);
      ComputeVertex__12EIWaterPatchR5EVec2N51PfN27PUcPSc
                (this,vCorner,&pos1,&pos0,&uv01,(EVec2 *)&local_1b0,&uv11,pfVar9,pfVar8,pfVar7,
                 puVar5,pcVar6);
      pfVar7 = pfVar7 + 4;
      puVar5 = puVar5 + 8;
      pcVar6 = pcVar6 + 8;
      pfVar9 = pfVar9 + 8;
      pfVar8 = pfVar8 + 4;
    } while (iVar3 != 0);
  }
  DrawStrip__12EIWaterPatchP3ERCiPfN23PUcPSc(this,pRC,iVar2,pXYZ,pUV0,pUV1,pRGB,pIJK);
  return;
}

void EIWaterPatch::DrawActiveCircle(ERC *pRC) {
	int nRings;
	int nSlices;
	float xDist;
	float yDist;
	EVec2 vCenter;
	float maxRad;
	EVec2 vCorners[4];
	int startCorner;
	float angleStepDir;
	float startAngle;
	float radStep;
	float angleStep;
	int cornerStep;
	EVec3 vEyeDir;
	
  int iVar1;
  int iVar2;
  int iVar3;
  uint nSlices;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  uint nRings;
  float fVar8;
  float fVar9;
  float fVar10;
  float startRad;
  EVec2 vCenter;
  EVec2 vCorners [4];
  EVec3 vEyeDir;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((this->m_waves).m_pHead == (EWaterWave *)0x0) {
    return;
  }
  nRings = (uint)this->m_resolution;
  nSlices = (uint)(this->m_resolution * 1.570796);
  if ((nRings & 1) != 0) {
    nRings = ((int)nRings / 2) * 2 + 2;
  }
  if ((nSlices & 1) != 0) {
    nSlices = ((int)nSlices / 2) * 2 + 2;
  }
                    /* end of inlined section */
  vCorners[1].field0_0x0._0_4_ = (this->m_vActiveMin).field0_0x0.d[0];
  vCorners[2].field0_0x0._4_4_ = (this->m_vActiveMin).field0_0x0.d[1];
  vCorners[0].field0_0x0._0_4_ = (this->m_vActiveMax).field0_0x0.d[0];
  iVar3 = 0;
  vCorners[0].field0_0x0._4_4_ = (this->m_vActiveMax).field0_0x0.d[1];
  fVar8 = vCorners[0].field0_0x0._0_4_ - vCorners[1].field0_0x0._0_4_;
  fVar6 = vCorners[0].field0_0x0._4_4_ - vCorners[2].field0_0x0._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar10 = 1.0;
  vCenter.field0_0x0.d[0] = vCorners[1].field0_0x0._0_4_ + fVar8 * 0.5;
  vCenter.field0_0x0.d[1] = vCorners[2].field0_0x0._4_4_ + fVar6 * 0.5;
  startRad = (float)((int)fVar6 * (uint)(fVar8 < fVar6) | (int)fVar8 * (uint)(fVar8 >= fVar6)) * 0.5
  ;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar6 = 1.0;
  fVar8 = 0.0;
  if (_7EWindow_m_pCurrent3DWindow == (E3DWindow *)0x0) goto LAB_0029c7c8;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar9 = (_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[2][0];
  fVar7 = -fVar9;
  fVar4 = -(_7EWindow_m_pCurrent3DWindow->m_mLookAtPos).field0_0x0.d[2][1];
                    /* end of inlined section */
  fVar8 = fVar4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (fVar4 < 0.0) {
                    /* end of inlined section */
    fVar8 = -fVar4;
  }
                    /* end of inlined section */
  fVar6 = fVar10;
  if (0.0 <= fVar7) {
                    /* end of inlined section */
    if (fVar8 <= fVar7) goto LAB_0029c75c;
LAB_0029c6f4:
                    /* end of inlined section */
    if (0.0 < fVar4) {
      fVar8 = 1.570796;
      iVar3 = 1;
      if (0.0 < fVar7) {
        iVar3 = 0;
        fVar6 = -1.0;
      }
      goto LAB_0029c7c8;
    }
    fVar8 = -1.570796;
    iVar3 = 2;
    fVar6 = -1.570796;
    if (fVar7 < 0.0) {
      fVar6 = -1.0;
      goto LAB_0029c7c8;
    }
  }
  else {
                    /* end of inlined section */
    if (fVar9 < fVar8) goto LAB_0029c6f4;
LAB_0029c75c:
                    /* end of inlined section */
    if (fVar7 <= 0.0) {
      fVar8 = 3.141593;
      iVar3 = 1;
      if (0.0 < fVar4) {
        fVar6 = -1.0;
      }
      else {
        iVar3 = 2;
        fVar8 = 3.141593;
      }
      goto LAB_0029c7c8;
    }
    fVar8 = 0.0;
    iVar3 = 0;
    if (0.0 <= fVar4) goto LAB_0029c7c8;
    fVar10 = -1.0;
    fVar6 = fVar8;
  }
  fVar8 = fVar6;
  iVar3 = 3;
  fVar6 = fVar10;
LAB_0029c7c8:
  fVar4 = startRad / (float)nRings;
  iVar5 = (int)fVar6;
  fVar6 = (fVar6 * 1.570796) / (float)nSlices;
  vCorners[1].field0_0x0._4_4_ = vCorners[0].field0_0x0._4_4_;
  vCorners[2].field0_0x0._0_4_ = vCorners[1].field0_0x0._0_4_;
  vCorners[3].field0_0x0._0_4_ = vCorners[0].field0_0x0._0_4_;
  vCorners[3].field0_0x0._4_4_ = vCorners[2].field0_0x0._4_4_;
  DrawCircleWedge__12EIWaterPatchP3ERCR5EVec2T2ffffii
            (this,pRC,&vCenter,vCorners + ((iVar3 + 4U) - (iVar3 + 4U & 0xc)),startRad,-fVar4,fVar8,
             fVar6,nRings,nSlices);
  fVar10 = -fVar6;
  iVar2 = iVar3 + iVar5 * 3 + 4;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  DrawCircleWedge__12EIWaterPatchP3ERCR5EVec2T2ffffii
            (this,pRC,&vCenter,vCorners + iVar2 + (iVar1 >> 2) * -4,startRad,-fVar4,fVar8,fVar10,
             nRings,nSlices);
  iVar2 = iVar3 + iVar5 + 4;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  DrawCircleWedge__12EIWaterPatchP3ERCR5EVec2T2ffffii
            (this,pRC,&vCenter,vCorners + iVar2 + (iVar1 >> 2) * -4,0.0,fVar4,fVar8 + 3.141593,
             fVar10,nRings,nSlices);
  iVar3 = iVar3 + iVar5 * 2 + 4;
  iVar1 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  DrawCircleWedge__12EIWaterPatchP3ERCR5EVec2T2ffffii
            (this,pRC,&vCenter,vCorners + iVar3 + (iVar1 >> 2) * -4,0.0,fVar4,fVar8 + 3.141593,fVar6
             ,nRings,nSlices);
  return;
}

void EIWaterPatch::ComputeVertex(EVec2 &pos0, EVec2 &pos1, EVec2 &uv00, EVec2 &uv01, EVec2 &uv10, EVec2 &uv11, float *pXYZ, float *pUV0, float *pUV1, u8 *pRGB, s8 *pIJK) {
	float *pUV0;
	float *pUV1;
	u8 *pRGB;
	s8 *pIJK;
	EVec3 vNormal0;
	EVec3 vNormal1;
	float height0;
	float height1;
	float fcolor;
	u8 color;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	
  uchar uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EVec3 vNormal0;
  EVec3 vNormal1;
  
  fVar2 = GetHeight__12EIWaterPatchffP5EVec3
                    (this,(pos0->field0_0x0).d[0],(pos0->field0_0x0).d[1],&vNormal0);
  fVar3 = GetHeight__12EIWaterPatchffP5EVec3
                    (this,(pos1->field0_0x0).d[0],(pos1->field0_0x0).d[1],&vNormal1);
  *pIJK = (char)(int)(vNormal0.field0_0x0.d[0] * 127.0);
  pIJK[1] = (char)(int)(vNormal0.field0_0x0.d[1] * 127.0);
  pIJK[2] = (char)(int)(vNormal0.field0_0x0.d[2] * 127.0);
  pIJK[3] = '\0';
  pIJK[4] = (char)(int)(vNormal1.field0_0x0.d[0] * 127.0);
  fVar4 = fVar2 * 64.0 + 128.0;
  pIJK[5] = (char)(int)(vNormal1.field0_0x0.d[1] * 127.0);
  pIJK[6] = (char)(int)(vNormal1.field0_0x0.d[2] * 127.0);
  pIJK[7] = '\0';
  *pXYZ = (pos0->field0_0x0).d[0];
  pXYZ[1] = (pos0->field0_0x0).d[1];
  pXYZ[2] = (this->m_vCenter).field0_0x0.d[2] + fVar2;
  pXYZ[3] = 0.0;
  pXYZ[4] = (pos1->field0_0x0).d[0];
  pXYZ[5] = (pos1->field0_0x0).d[1];
  fVar2 = (this->m_vCenter).field0_0x0.d[2];
  pXYZ[7] = 0.0;
  pXYZ[6] = fVar2 + fVar3;
  *pUV0 = (uv00->field0_0x0).d[0];
  pUV0[1] = (uv00->field0_0x0).d[1];
  pUV0[2] = (uv01->field0_0x0).d[0];
  pUV0[3] = (uv01->field0_0x0).d[1];
  *pUV1 = (uv10->field0_0x0).d[0];
  pUV1[1] = (uv10->field0_0x0).d[1];
  pUV1[2] = (uv11->field0_0x0).d[0];
  pUV1[3] = (uv11->field0_0x0).d[1];
  if (0.0 <= fVar4) {
    fVar2 = (float)((int)fVar4 * (uint)(fVar4 < 255.0) | (uint)(fVar4 >= 255.0) * 0x437f0000);
  }
  else {
    fVar2 = 0.0;
  }
  uVar1 = (uchar)(int)fVar2;
  *pRGB = uVar1;
  pRGB[1] = uVar1;
  fVar2 = fVar3 * 64.0 + 128.0;
  pRGB[2] = uVar1;
  pRGB[3] = 0x80;
  if (0.0 <= fVar2) {
    fVar2 = (float)((int)fVar2 * (uint)(fVar2 < 255.0) | (uint)(fVar2 >= 255.0) * 0x437f0000);
  }
  else {
    fVar2 = 0.0;
  }
  uVar1 = (uchar)(int)fVar2;
  pRGB[4] = uVar1;
  pRGB[5] = uVar1;
  pRGB[7] = 0x80;
  pRGB[6] = uVar1;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/effects/e_water.h */
    gpTypeInfo_EIWaterPatch =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_12EIWaterPatch_m_typeInfo,New__12EIWaterPatch,0,"EIWaterPatch",
                    &_9EInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

EIWaterPatch* EIWaterPatch::New() {
  EIWaterPatch *pEVar1;
  
  pEVar1 = (EIWaterPatch *)__builtin_new(0x1b4);
  pEVar1 = __12EIWaterPatch(pEVar1);
  return pEVar1;
}

void EIWaterPatch::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIWaterPatch *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar1[1].GetTypeName
               ,3);
  }
  return;
}

ETypeInfo* EIWaterPatch::GetTypeInfo() {
  return &_12EIWaterPatch_m_typeInfo;
}

char* EIWaterPatch::GetTypeName() {
  return _12EIWaterPatch_m_typeInfo.m_name;
}

u32 EIWaterPatch::GetTypeKey() {
  return _12EIWaterPatch_m_typeInfo.m_key;
}

u16 EIWaterPatch::GetTypeVersion() {
  return _12EIWaterPatch_m_typeInfo.m_version;
}

u16 EIWaterPatch::GetReadVersion() {
  return _12EIWaterPatch_m_typeInfo.m_readVersion;
}

ETypeInfo* EIWaterPatch::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_12EIWaterPatch_m_typeInfo,New__12EIWaterPatch,version,"EIWaterPatch",
                      &_9EInstance_m_typeInfo);
  return pEVar1;
}

EIWaterPatch* EIWaterPatch::CreateCopy() {
  EIWaterPatch *pEVar1;
  
  pEVar1 = (EIWaterPatch *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_EIWaterPatch() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
