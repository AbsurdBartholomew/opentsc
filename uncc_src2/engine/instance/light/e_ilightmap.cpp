// STATUS: NOT STARTED

#include "e_ilightmap.h"

int _quantk = 256;
float _lmoff2x = -1.f;
float _lmoff2y = 0.f;
FnAllocAlign EILightmap::m_pfnAllocAlign = NULL;
FnFree EILightmap::m_pfnFree = NULL;
ETypeInfo *gpTypeInfo_EILightmap = NULL;

__vtbl_ptr_type EILightmap virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILightmap::SafeDelete,
		/* .__delta2 = */ 6232
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILightmap::GetTypeInfo,
		/* .__delta2 = */ 6288
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILightmap::GetTypeName,
		/* .__delta2 = */ 6304
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILightmap::GetTypeKey,
		/* .__delta2 = */ 6320
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILightmap::GetTypeVersion,
		/* .__delta2 = */ 6336
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILightmap::~EILightmap,
		/* .__delta2 = */ -4712
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
		/* .__pfn = */ &EInstance::Update,
		/* .__delta2 = */ -5200
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILightmap::VisibilityTest,
		/* .__delta2 = */ -728
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILightmap::Draw,
		/* .__delta2 = */ -320
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
		/* .__pfn = */ &EILightmap::GetBoundSphere,
		/* .__delta2 = */ -1536
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EILightmap::m_typeInfo;

EStream& operator<<(EStream &s, EILightmap *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EILightmap *&pD) {
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
  *pD = (EILightmap__0_4024 *)pStorable;
  return s;
}

EILightmap* EILightmap::EILightmap() {
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __9EInstance(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_10EILightmap;
  __13ERedBlackTree(&(this->m_receivers).field0_0x0);
                    /* end of inlined section */
  __11EAllocGroup(&this->m_ag);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_4c = 0xc0a00000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_50 = 0xc0a00000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_48 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_40 = 0x41200000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0x41200000;
                    /* end of inlined section */
  *(undefined4 *)&this->m_blur = 1;
  this->m_yRes = 0;
  this->m_xRes = 0;
  this->m_pTexture = (ETexture *)0x0;
  this->m_pShader = (EShader *)0x0;
  this->m_image = (uchar **)0x0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_28 = 0;
                    /* end of inlined section */
  this->m_nSupersample = 1;
  SetPosition__10EILightmapRC5EVec3N21
            (this,(EVec3 *)&local_50,(EVec3 *)&local_40,(EVec3 *)&local_30);
  SetOverlapReceiveFlags__9EInstanceUi(&this->field0_0x0,8);
  (this->m_orderTableData).pvPos = &this->m_vPos;
  (this->m_orderTableData).pfnCallback = OrderTableCallback__10EILightmapP3ERCUiUi;
  (this->m_orderTableData).sortValue = 2;
  (this->m_orderTableData).pmOrient = (EMat4 *)0x0;
  (this->m_orderTableData).callbackParam1 = (uint)this;
  (this->m_orderTableData).pShader = (EShader *)0x0;
  (this->m_orderTableData).pLights = (ELights *)0x0;
  (this->m_orderTableData).sortMode = 0;
  return this;
}

void EILightmap::~EILightmap(int __in_chrg) {
	EAllocGroup *this;
	TNodeList<void *> *this;
	ENodeList *this;
	void *pAddress;
	void *pAddress;
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_10EILightmap;
                    /* end of inlined section */
  Destroy__10EILightmap(this);
                    /* inlined from /eor/src2/common/datastruc/e_allocgroup.h */
  DeallocateAll__11EAllocGroup(&this->m_ag);
  RemoveAll__9ENodeList((ENodeList *)&this->m_ag);
  RemoveAll__13ERedBlackTree(&(this->m_receivers).field0_0x0);
                    /* end of inlined section */
  ___9EInstance(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilightmap.h */
    _allocBucketFree__FPvUiUi(this,0x170,0x32);
  }
                    /* end of inlined section */
  return;
}

bool EILightmap::Create(int xRes, int yRes) {
	ETextureDef td;
	EShaderDef sd;
	
  EGlobalManagerClient__vtable *pEVar1;
  EShaderRenderPassDef *pEVar2;
  long lVar3;
  int iVar4;
  ETextureDef td;
  EShaderDef sd;
  
  Destroy__10EILightmap(this);
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilightmap.h */
                    /* end of inlined section */
  td.bitsPerPaletteEntry = ' ';
  td.bitsPerImagePixel = '\b';
  td.paletteFormat = '\x02';
  td.paletteSize = 0x100;
  td.pfnAllocAlign = _10EILightmap_m_pfnAllocAlign;
  td.pfnFree = _10EILightmap_m_pfnFree;
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.flags = 0;
  td.mipMapLevels = 0;
  td.mipMapShift = 0.0;
                    /* end of inlined section */
  td.xsize = (short)xRes;
  td.ysize = (short)yRes;
  td.imageFormat = '\0';
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[7].ManagedShutdown)
                    ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[7].ManagedStartup,
                     &td);
  this->m_pTexture = (ETexture *)lVar3;
  if (lVar3 != 0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
    pEVar2 = sd.rp;
    iVar4 = 1;
    do {
      pEVar2->pTexture = (ETexture *)0x0;
      iVar4 = iVar4 + -1;
      pEVar2->rasterModes = 8;
      pEVar2->flags = 0x18;
      pEVar2->blendA = '\0';
      pEVar2->blendB = '\x01';
      pEVar2->blendC = '\0';
      pEVar2->blendD = '\x01';
      pEVar2->blendFix = 0x80;
      pEVar2->combine = '\0';
      pEVar2->textureGen = '\0';
      pEVar2->alphaTestThreshold = 0.5;
      pEVar2 = pEVar2 + 1;
    } while (iVar4 != -1);
                    /* end of inlined section */
    sd.rp[0].pTexture = this->m_pTexture;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
    sd.mat.vAmbientColor.field0_0x0.d[0] = 1.0;
    sd.mat.vAmbientColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    sd.mat.vAmbientColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    sd.mat.vAmbientColor.field0_0x0.d[2] = 1.0;
    sd.mat.vDiffuseColor.field0_0x0.d[0] = 1.0;
    sd.mat.vDiffuseColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from e_material.h */
    sd.mat.vDiffuseColor.field0_0x0.d[2] = 1.0;
    sd.mat.vDiffuseColor.field0_0x0.d[3] = 1.0;
    sd.flags = 0x817;
                    /* end of inlined section */
    sd.rp[0].combine = '\x01';
    sd.nRenderPasses = '\x01';
    sd.rp[0].rasterModes = 0x48;
    sd.rp[0].blendD = '\x02';
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
    sd.sortMode = '\0';
                    /* end of inlined section */
    sd.geometryModes = 0;
    sd.sortValue = 1;
    sd.rp[0].blendA = '\x01';
    sd.rp[0].blendB = '\0';
    sd.rp[0].blendC = '\0';
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    lVar3 = (*(code *)pEVar1[0xb].EGlobalManagerClient)
                      ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0xb),&sd);
    this->m_pShader = (EShader *)lVar3;
    if (lVar3 != 0) {
      this->m_xRes = xRes;
      this->m_yRes = yRes;
      CalcPosition__10EILightmap(this);
      return true;
    }
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[8].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 8),this->m_pTexture);
    this->m_pTexture = (ETexture *)0x0;
  }
  return false;
}

void EILightmap::Destroy() {
  EGlobalManagerClient__vtable *pEVar1;
  
  if ((this->m_pTexture != (ETexture *)0x0) || (this->m_pShader != (EShader *)0x0)) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[0xb].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[0xb].ManagedStartup,
               this->m_pShader);
    this->m_pShader = (EShader *)0x0;
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[8].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 8),this->m_pTexture);
    this->m_pTexture = (ETexture *)0x0;
  }
  DeallocateImage__10EILightmap(this);
  this->m_xRes = 0;
  this->m_yRes = 0;
  return;
}

void EILightmap::SetPosition(EVec3 &vPos, EVec3 &vXDelta, EVec3 &vYDelta) {
	EVec3 *this;
	EVec3 &v;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong in_v0;
  ulong uVar5;
  ulong in_t0;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = (undefined *)((int)&vPos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vPos & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vPos - uVar3) >> uVar3 * 8;
  fVar6 = (vPos->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPos & 7;
  puVar4 = (ulong *)((int)&this->m_vPos - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPos).field0_0x0.d[2] = fVar6;
  puVar1 = (undefined *)((int)&vXDelta->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vXDelta & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vXDelta - uVar3) >> uVar3 * 8;
  fVar6 = (vXDelta->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vXDelta).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vXDelta & 7;
  puVar4 = (ulong *)((int)&this->m_vXDelta - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vXDelta).field0_0x0.d[2] = fVar6;
  puVar1 = (undefined *)((int)&vYDelta->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vYDelta & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vYDelta - uVar3) >> uVar3 * 8;
  fVar6 = (vYDelta->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vYDelta).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vYDelta & 7;
  puVar4 = (ulong *)((int)&this->m_vYDelta - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vYDelta).field0_0x0.d[2] = fVar6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar7 = (vXDelta->field0_0x0).d[1];
  fVar6 = (vYDelta->field0_0x0).d[0];
  fVar8 = (vXDelta->field0_0x0).d[0];
  fVar9 = (vYDelta->field0_0x0).d[1];
                    /* end of inlined section */
  uVar5 = CONCAT44((vXDelta->field0_0x0).d[2] * fVar6 - fVar8 * (vYDelta->field0_0x0).d[2],
                   fVar7 * (vYDelta->field0_0x0).d[2] - (vXDelta->field0_0x0).d[2] * fVar9);
  puVar1 = (undefined *)((int)&(this->m_vNormal).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vNormal & 7;
  puVar4 = (ulong *)((int)&this->m_vNormal - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vNormal).field0_0x0.d[2] = fVar8 * fVar9 - fVar7 * fVar6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar7 = (this->m_vNormal).field0_0x0.d[0];
  fVar6 = (this->m_vNormal).field0_0x0.d[1];
  fVar8 = (this->m_vNormal).field0_0x0.d[2];
  fVar6 = sqrtf(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
  if (fVar6 != 0.0) {
    fVar6 = 1.0 / fVar6;
    (this->m_vNormal).field0_0x0.d[0] = (this->m_vNormal).field0_0x0.d[0] * fVar6;
    fVar7 = (this->m_vNormal).field0_0x0.d[2];
    (this->m_vNormal).field0_0x0.d[1] = (this->m_vNormal).field0_0x0.d[1] * fVar6;
    (this->m_vNormal).field0_0x0.d[2] = fVar7 * fVar6;
  }
                    /* end of inlined section */
  CalcPosition__10EILightmap(this);
  return;
}

void EILightmap::DrawPosition(ERC *prc) {
	float vecmag;
	EVec3 vStart;
	EVec3 vEnd;
	ERC *this;
	int cv;
	EVec4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 &v;
	EVec4 *this;
	EVec3 &v;
	EVec4 *this;
	EVec4 *this;
	float scaler;
	EVec3 &vVec;
	
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  EVec3 vStart;
  EVec3 vEnd;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  (*(code *)prc->__vtable->ZTest)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
  (*(code *)prc->__vtable->Init)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->LoadMPG,0,0);
  (*(code *)prc->__vtable[1].Callback)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Material,0,0);
  (*(code *)prc->__vtable[1].TriStrip)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriStrip,0,0);
  (*(code *)prc->__vtable->FlushQueuedMatrices)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->GeometrySetup,1);
                    /* inlined from e_dl.h */
  puVar1 = (undefined4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,400,0x10);
                    /* end of inlined section */
  iVar3 = 4;
  puVar2 = puVar1;
  do {
    puVar2[0xc] = 0xff;
    iVar3 = iVar3 + -1;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0xff;
    puVar2 = puVar2 + 0x14;
  } while (-1 < iVar3);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  puVar1[0x50] = (this->m_vPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  puVar1[0x51] = (this->m_vPos).field0_0x0.d[1];
  puVar1[0x52] = (this->m_vPos).field0_0x0.d[2];
                    /* end of inlined section */
  *puVar1 = (int)*(undefined8 *)(puVar1 + 0x50);
  puVar1[1] = (int)((ulong)*(undefined8 *)(puVar1 + 0x50) >> 0x20);
  puVar1[2] = puVar1[0x52];
  puVar1[3] = puVar1[0x53];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar5 = (this->m_vYDelta).field0_0x0.d[1];
  fVar4 = (this->m_vPos).field0_0x0.d[1];
  fVar7 = (this->m_vYDelta).field0_0x0.d[2];
  fVar6 = (this->m_vPos).field0_0x0.d[2];
  puVar1[0x14] = (this->m_vPos).field0_0x0.d[0] + (this->m_vYDelta).field0_0x0.d[0];
  puVar1[0x15] = fVar4 + fVar5;
  puVar1[0x16] = fVar6 + fVar7;
  fVar4 = (this->m_vYDelta).field0_0x0.d[1];
  fVar6 = (this->m_vPos).field0_0x0.d[1];
  fVar8 = (this->m_vYDelta).field0_0x0.d[2];
  fVar7 = (this->m_vPos).field0_0x0.d[2];
  fVar5 = (this->m_vXDelta).field0_0x0.d[1];
  fVar9 = (this->m_vXDelta).field0_0x0.d[2];
  puVar1[0x28] = (this->m_vPos).field0_0x0.d[0] + (this->m_vYDelta).field0_0x0.d[0] +
                 (this->m_vXDelta).field0_0x0.d[0];
  puVar1[0x29] = fVar6 + fVar4 + fVar5;
  puVar1[0x2a] = fVar7 + fVar8 + fVar9;
  fVar5 = (this->m_vXDelta).field0_0x0.d[1];
  fVar4 = (this->m_vPos).field0_0x0.d[1];
  fVar7 = (this->m_vXDelta).field0_0x0.d[2];
  fVar6 = (this->m_vPos).field0_0x0.d[2];
  puVar1[0x3c] = (this->m_vPos).field0_0x0.d[0] + (this->m_vXDelta).field0_0x0.d[0];
  puVar1[0x3d] = fVar4 + fVar5;
  puVar1[0x3e] = fVar6 + fVar7;
                    /* end of inlined section */
  (*(code *)prc->__vtable->Scissor)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ClipRect,puVar1,5);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar5 = (this->m_vXDelta).field0_0x0.d[0];
  fVar4 = (this->m_vXDelta).field0_0x0.d[1];
  fVar6 = (this->m_vXDelta).field0_0x0.d[2];
  fVar5 = sqrtf(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
  fVar4 = (this->m_vYDelta).field0_0x0.d[0];
  fVar6 = (this->m_vYDelta).field0_0x0.d[1];
  fVar7 = (this->m_vYDelta).field0_0x0.d[2];
  fVar4 = sqrtf(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar4 = (fVar5 + fVar4) * 0.15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_d0 = (this->m_vPos).field0_0x0.d[0] +
             ((this->m_vXDelta).field0_0x0.d[0] + (this->m_vYDelta).field0_0x0.d[0]) * 0.5;
  local_c8 = (this->m_vPos).field0_0x0.d[2] +
             ((this->m_vXDelta).field0_0x0.d[2] + (this->m_vYDelta).field0_0x0.d[2]) * 0.5;
  local_cc = (this->m_vPos).field0_0x0.d[1] +
             ((this->m_vXDelta).field0_0x0.d[1] + (this->m_vYDelta).field0_0x0.d[1]) * 0.5;
  local_c0 = local_d0 + fVar4 * (this->m_vNormal).field0_0x0.d[0];
  local_b8 = local_c8 + fVar4 * (this->m_vNormal).field0_0x0.d[2];
  local_bc = local_cc + fVar4 * (this->m_vNormal).field0_0x0.d[1];
  local_b0 = 0x3f800000;
  local_ac = 0;
  local_a8 = 0;
                    /* end of inlined section */
  local_a4 = 0x3f800000;
  Vector__10EPrimitiveP3ERCG5EVec3T2G5EVec4
            (prc,(EVec3 *)&local_d0,(EVec3 *)&local_c0,(EVec4 *)&local_b0);
  return;
}

void EILightmap::CalcPosition() {
	float width;
	float height;
	float xScale;
	float yScale;
	EVec3 vUsePos;
	EVec3 vUp;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 &v;
	EVec3 &v;
	
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec3 vUsePos;
  EVec3 vUp;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  fVar3 = (this->m_vXDelta).field0_0x0.d[0];
  fVar2 = (this->m_vXDelta).field0_0x0.d[1];
  fVar7 = (this->m_vXDelta).field0_0x0.d[2];
  fVar3 = sqrtf(fVar3 * fVar3 + fVar2 * fVar2 + fVar7 * fVar7);
  fVar2 = (this->m_vYDelta).field0_0x0.d[0];
  fVar7 = (this->m_vYDelta).field0_0x0.d[1];
  fVar8 = (this->m_vYDelta).field0_0x0.d[2];
  fVar7 = sqrtf(fVar2 * fVar2 + fVar7 * fVar7 + fVar8 * fVar8);
  fVar2 = _lmoff2x;
  fVar4 = (this->m_vPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar6 = (float)this->m_xRes;
  this->m_area = fVar3 * fVar7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar2 = fVar2 / fVar6;
  iVar1 = this->m_yRes;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar5 = (float)iVar1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUp.field0_0x0.d[0] = (this->m_vYDelta).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar8 = _lmoff2y / fVar5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar3 = fVar3 * (fVar6 / (float)(this->m_xRes + -1));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUsePos.field0_0x0.d[0] =
       fVar4 + fVar2 * (this->m_vXDelta).field0_0x0.d[0] + fVar8 * vUp.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUsePos.field0_0x0.d[1] =
       (this->m_vPos).field0_0x0.d[1] + fVar2 * (this->m_vXDelta).field0_0x0.d[1] +
       fVar8 * (this->m_vYDelta).field0_0x0.d[1];
  vUsePos.field0_0x0.d[2] =
       (this->m_vPos).field0_0x0.d[2] + fVar2 * (this->m_vXDelta).field0_0x0.d[2] +
       fVar8 * (this->m_vYDelta).field0_0x0.d[2];
  vUp.field0_0x0.d[1] = (this->m_vYDelta).field0_0x0.d[1];
  vUp.field0_0x0.d[2] = (this->m_vYDelta).field0_0x0.d[2];
  fVar2 = sqrtf(vUp.field0_0x0.d[0] * vUp.field0_0x0.d[0] +
                vUp.field0_0x0.d[1] * vUp.field0_0x0.d[1] +
                vUp.field0_0x0.d[2] * vUp.field0_0x0.d[2]);
  if (fVar2 != 0.0) {
    fVar2 = 1.0 / fVar2;
    vUp.field0_0x0.d[2] = vUp.field0_0x0.d[2] * fVar2;
    vUp.field0_0x0.d[0] = vUp.field0_0x0.d[0] * fVar2;
    vUp.field0_0x0.d[1] = vUp.field0_0x0.d[1] * fVar2;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_60 = vUsePos.field0_0x0.d[0] + (this->m_vNormal).field0_0x0.d[0];
  local_5c = vUsePos.field0_0x0.d[1] + (this->m_vNormal).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_58 = vUsePos.field0_0x0.d[2] + (this->m_vNormal).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
  TexturePlanarProjection__5EMat4RC5EVec3N21ffff
            (&this->m_mTexture,(EVec3 *)&local_60,&vUsePos,&vUp,fVar3,
             fVar7 * (fVar5 / (float)(iVar1 + -1)),1.0,1.0);
  CalcBounds__10EILightmap(this);
  return;
}

void EILightmap::Select(ERC *prc) {
  EShader__vtable *pEVar1;
  
  pEVar1 = this->m_pShader->__vtable;
  (*(code *)pEVar1->ChangeMaterial)
            ((int)(this->m_pShader->m_sd).rp + *(short *)&pEVar1->Create + -0x10,prc,0);
  (*(code *)prc->__vtable->MovieFrame)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ZClear,&this->m_mTexture,0,0,0,0);
  return;
}

void EILightmap::AddReceiver(EInstance *pInstance) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  Insert__13ERedBlackTreeUiUib(&(this->m_receivers).field0_0x0,(uint)pInstance,0,false);
                    /* end of inlined section */
  CalcBounds__10EILightmap(this);
  return;
}

void EILightmap::RemoveReceiver(EInstance *pInstance) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  Remove__13ERedBlackTreeUi(&(this->m_receivers).field0_0x0,(uint)pInstance);
                    /* end of inlined section */
  CalcBounds__10EILightmap(this);
  return;
}

bool EILightmap::AllocateImage() {
	int y;
	
  bool bVar1;
  uchar **ppuVar2;
  int iVar3;
  uchar *puVar4;
  int iVar5;
  
  DeallocateImage__10EILightmap(this);
  ppuVar2 = (uchar **)Alloc__11EAllocGroupUii(&this->m_ag,this->m_yRes << 2,0x10);
  this->m_image = ppuVar2;
  if (ppuVar2 == (uchar **)0x0) {
    bVar1 = false;
  }
  else {
    iVar5 = 0;
    if (this->m_yRes < 1) {
LAB_002cf9b8:
      bVar1 = true;
    }
    else {
      iVar3 = this->m_xRes;
      while( true ) {
        puVar4 = (uchar *)Alloc__11EAllocGroupUii(&this->m_ag,iVar3 * 3,0x10);
        this->m_image[iVar5] = puVar4;
        ppuVar2 = this->m_image + iVar5;
        iVar5 = iVar5 + 1;
        if (*ppuVar2 == (uchar *)0x0) break;
        if (this->m_yRes <= iVar5) goto LAB_002cf9b8;
        iVar3 = this->m_xRes;
      }
      DeallocateImage__10EILightmap(this);
      bVar1 = false;
    }
  }
  return bVar1;
}

void EILightmap::DeallocateImage() {
  DeallocateAll__11EAllocGroup(&this->m_ag);
  this->m_image = (uchar **)0x0;
  return;
}

void EILightmap::GetBoundSphere(EBoundSphere &boundSphereOut) {
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

void EILightmap::CalcBounds() {
	EBound3 b;
	RBIterator i;
	EVec3 &v;
	EVec3 &v;
	int i;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	EVec3 *this;
	EVec3 &v;
	RBIterator i;
	RBIterator i;
	EBound3 *this;
	int i;
	int value;
	EVec3 *this;
	int value;
	EVec3 *this;
	int value;
	int value;
	EVec3 *this;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  float *pfVar7;
  EVec3 *pEVar8;
  float *pfVar9;
  float *pfVar10;
  ERedBlackTreeNode *pEVar11;
  int iVar12;
  ulong in_a3;
  ulong uVar13;
  ulong in_t1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float fVar14;
  EBound3 b;
  float local_40 [3];
  undefined auStack_34 [4];
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  local_40[2] = 0.0;
  local_40[1] = 0.0;
  local_40[0] = 0.0;
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  local_20 = (int)unaff_s0;
  uStack_1c = (int)((ulong)unaff_s0 >> 0x20);
  puVar2 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar6 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar6);
  *puVar5 = *puVar5 & -1L << (uVar6 + 1) * 8 | 0UL >> (7 - uVar6) * 8;
  uVar6 = (uint)&b.vMax & 7;
  puVar5 = (ulong *)((int)&b.vMax - uVar6);
  *puVar5 = 0L << uVar6 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  b.vMax.field0_0x0.d[2] = 0.0;
  puVar2 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar6 = (uint)puVar2 & 7;
  uVar3 = (uint)&b.vMax & 7;
  puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
            ((*(long *)(puVar2 + -uVar6) << (7 - uVar6) * 8 |
             in_t1 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&b.vMax - uVar3) >> uVar3 * 8) >> (7 - uVar4) * 8;
  b.vMin.field0_0x0.d[2] = 0.0;
  pfVar10 = local_40;
  puVar2 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar6 = (uint)puVar2 & 7;
  uVar3 = (uint)&this->m_vPos & 7;
  uVar13 = (*(long *)(puVar2 + -uVar6) << (7 - uVar6) * 8 |
           in_a3 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
  b.vMin.field0_0x0.d[2] = (this->m_vPos).field0_0x0.d[2];
  puVar2 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar6 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar6);
  *puVar5 = *puVar5 & -1L << (uVar6 + 1) * 8 | uVar13 >> (7 - uVar6) * 8;
  uVar6 = (uint)&b.vMax & 7;
  puVar5 = (ulong *)((int)&b.vMax - uVar6);
  *puVar5 = uVar13 << uVar6 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  b.vMax.field0_0x0.d[2] = b.vMin.field0_0x0.d[2];
  puVar2 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar6 = (uint)puVar2 & 7;
  uVar3 = (uint)&b.vMax & 7;
  b.vMin.field0_0x0._0_8_ =
       (*(long *)(puVar2 + -uVar6) << (7 - uVar6) * 8 |
       uVar13 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar3) * 8 |
       *(ulong *)((int)&b.vMax - uVar3) >> uVar3 * 8;
  puVar2 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
  uVar6 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar6);
  *puVar5 = *puVar5 & -1L << (uVar6 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar6) * 8;
  pfVar9 = (float *)((uint)&b | 0xc);
  iVar12 = 2;
  local_40[2] = (this->m_vPos).field0_0x0.d[2] + (this->m_vXDelta).field0_0x0.d[2];
  local_40[1] = (this->m_vPos).field0_0x0.d[1] + (this->m_vXDelta).field0_0x0.d[1];
  local_40[0] = (this->m_vPos).field0_0x0.d[0] + (this->m_vXDelta).field0_0x0.d[0];
  pfVar7 = pfVar10;
  do {
    fVar14 = pfVar9[-3];
    if (*pfVar7 <= fVar14) {
      fVar14 = *pfVar7;
    }
    pfVar9[-3] = fVar14;
    fVar14 = *pfVar7;
    if (*pfVar7 < *pfVar9) {
      fVar14 = *pfVar9;
    }
    *pfVar9 = fVar14;
    pfVar7 = pfVar7 + 1;
    iVar12 = iVar12 + -1;
    pfVar9 = pfVar9 + 1;
  } while (-1 < iVar12);
  local_40[1] = (this->m_vPos).field0_0x0.d[1] + (this->m_vYDelta).field0_0x0.d[1];
  pfVar9 = (float *)((uint)&b | 0xc);
  local_40[2] = (this->m_vPos).field0_0x0.d[2] + (this->m_vYDelta).field0_0x0.d[2];
  local_40[0] = (this->m_vPos).field0_0x0.d[0] + (this->m_vYDelta).field0_0x0.d[0];
  pfVar7 = pfVar10;
  do {
    fVar14 = pfVar9[-3];
    if (*pfVar7 <= fVar14) {
      fVar14 = *pfVar7;
    }
    pfVar9[-3] = fVar14;
    fVar14 = *pfVar7;
    if (*pfVar7 < *pfVar9) {
      fVar14 = *pfVar9;
    }
    *pfVar9 = fVar14;
    pfVar7 = pfVar7 + 1;
    pfVar9 = pfVar9 + 1;
  } while ((int)pfVar7 < (int)auStack_34);
  pfVar7 = (float *)((uint)&b | 0xc);
  local_28 = (this->m_vPos).field0_0x0.d[2] + (this->m_vXDelta).field0_0x0.d[2];
  local_30 = (this->m_vPos).field0_0x0.d[0] + (this->m_vXDelta).field0_0x0.d[0];
  local_2c = (this->m_vPos).field0_0x0.d[1] + (this->m_vXDelta).field0_0x0.d[1];
  local_40[2] = local_28 + (this->m_vYDelta).field0_0x0.d[2];
  local_40[0] = local_30 + (this->m_vYDelta).field0_0x0.d[0];
  local_40[1] = local_2c + (this->m_vYDelta).field0_0x0.d[1];
  do {
    fVar14 = pfVar7[-3];
    if (*pfVar10 <= fVar14) {
      fVar14 = *pfVar10;
    }
    pfVar7[-3] = fVar14;
    fVar14 = *pfVar10;
    if (*pfVar10 < *pfVar7) {
      fVar14 = *pfVar7;
    }
    *pfVar7 = fVar14;
    pfVar10 = pfVar10 + 1;
    pfVar7 = pfVar7 + 1;
  } while ((int)pfVar10 < (int)auStack_34);
  pEVar11 = (this->m_receivers).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar11 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    uVar6 = pEVar11->key;
    while( true ) {
      pEVar8 = &b.vMax;
      iVar12 = 2;
      pfVar7 = (float *)(uVar6 + 0x28);
      do {
        fVar14 = (((EBound3 *)(pEVar8 + -1))->vMin).field0_0x0.d[0];
        if (*pfVar7 <= fVar14) {
          fVar14 = *pfVar7;
        }
        (((EBound3 *)(pEVar8 + -1))->vMin).field0_0x0.d[0] = fVar14;
        fVar14 = pfVar7[3];
        if (pfVar7[3] < (pEVar8->field0_0x0).d[0]) {
          fVar14 = (pEVar8->field0_0x0).d[0];
        }
        (pEVar8->field0_0x0).d[0] = fVar14;
        pfVar7 = pfVar7 + 1;
        iVar12 = iVar12 + -1;
        pEVar8 = (EVec3 *)((int)&pEVar8->field0_0x0 + 4);
      } while (-1 < iVar12);
      pEVar11 = pEVar11->pNext;
                    /* end of inlined section */
      if (pEVar11 == (ERedBlackTreeNode *)0x0) break;
      uVar6 = pEVar11->key;
    }
  }
  SetBounds__9EInstanceRC7EBound3(&this->field0_0x0,&b);
  CalcBoundSphere__7EBound3R12EBoundSphere(&b,&this->m_boundSphere);
  return;
}

u32 EILightmap::VisibilityTest(EPortalWindow &win, u32 parentVis) {
	EVec3 vCorners[3];
	u32 visFlags;
	EVec3 &v;
	EVec3 &v;
	EVec3 vCorners[8];
	EInstance *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined auStack_e0 [8];
  float local_d8;
  undefined auStack_d4 [8];
  float local_cc;
  undefined auStack_c8 [8];
  float local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  EVec3 vCorners [8];
  
                    /* end of inlined section */
  uVar6 = 1;
  do {
    bVar4 = uVar6 != 0xffffffffffffffff;
    uVar6 = (ulong)((int)uVar6 + -1);
  } while (bVar4);
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vPos & 7;
  auStack_e0 = (undefined  [8])
               ((*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                uVar6 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
               *(ulong *)((int)&this->m_vPos - uVar2) >> uVar2 * 8);
  local_d8 = (this->m_vPos).field0_0x0.d[2];
  puVar1 = auStack_e0 + 7;
  uVar5 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar5) =
       *(ulong *)(puVar1 + -uVar5) & -1L << (uVar5 + 1) * 8 | (ulong)auStack_e0 >> (7 - uVar5) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_c0 = (this->m_vPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (this->m_vPos).field0_0x0.d[0];
  fVar9 = (this->m_vPos).field0_0x0.d[1];
  local_cc = local_c0 + (this->m_vXDelta).field0_0x0.d[2];
  local_ac = fVar9 + (this->m_vXDelta).field0_0x0.d[1];
  local_a8 = local_cc;
  local_b0 = fVar8 + (this->m_vXDelta).field0_0x0.d[0];
  fVar8 = fVar8 + (this->m_vYDelta).field0_0x0.d[0];
                    /* end of inlined section */
  uVar6 = CONCAT44(local_ac,local_b0);
  puVar1 = auStack_d4 + 7;
  uVar5 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar5) =
       *(ulong *)(puVar1 + -uVar5) & -1L << (uVar5 + 1) * 8 | uVar6 >> (7 - uVar5) * 8;
  uVar5 = (uint)auStack_d4 & 7;
  puVar3 = (ulong *)(auStack_d4 + -uVar5);
  *puVar3 = uVar6 << uVar5 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_c0 = local_c0 + (this->m_vYDelta).field0_0x0.d[2];
  local_b0 = fVar8;
  local_ac = fVar9 + (this->m_vYDelta).field0_0x0.d[1];
  local_a8 = local_c0;
                    /* end of inlined section */
  auStack_c8 = (undefined  [8])CONCAT44(local_ac,fVar8);
  puVar1 = auStack_c8 + 7;
  uVar5 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar5) =
       *(ulong *)(puVar1 + -uVar5) & -1L << (uVar5 + 1) * 8 | (ulong)auStack_c8 >> (7 - uVar5) * 8;
  bVar4 = BackCullTest__9E3DWindowP5EVec3(&win->field0_0x0,(EVec3 *)auStack_e0);
  if (bVar4) {
    uVar5 = Test__13EPortalWindowRC12EBoundSphereUi(win,&this->m_boundSphere,parentVis);
    if ((uVar5 & 0x15) != 0) {
                    /* end of inlined section */
      iVar7 = 6;
      do {
        bVar4 = iVar7 != -1;
        iVar7 = iVar7 + -1;
      } while (bVar4);
                    /* end of inlined section */
      GetCorners__C7EBound3P5EVec3(&(this->field0_0x0).m_otd.m_bPos,vCorners);
      uVar5 = Test__13EPortalWindowPC5EVec3iUi(win,vCorners,8,uVar5);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

void EILightmap::Draw(ERC *prc, u32 renderFlags) {
  ERLevel *this_00;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
  if (((renderFlags & 0xc) == 4) &&
     ((this->m_receivers).field0_0x0.m_list.m_pHead != (ERedBlackTreeNode *)0x0)) {
    this_00 = (this->field0_0x0).m_pLevel;
    if (this_00 == (ERLevel *)0x0) {
      if ((renderFlags & 1) == 0) {
        (*(code *)prc->__vtable->EndCommand)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
      }
      else {
        (*(code *)prc->__vtable->NewEntry)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate);
      }
      DoDraw__10EILightmapP3ERCUi(this,prc,renderFlags & 0xfffffffb);
    }
    else {
      (this->m_orderTableData).renderFlags = renderFlags & 0xfffffffb;
      InsertInOrderTable__7ERLevelR15EOrderTableData(this_00,&this->m_orderTableData);
    }
  }
  return;
}

void EILightmap::OrderTableCallback(ERC *prc, u32 param1, u32 param2) {
  DoDraw__10EILightmapP3ERCUi((EILightmap__0_4024 *)param1,prc,*(uint *)(param1 + 0x8c));
  return;
}

void EILightmap::DoDraw(ERC *prc, u32 renderFlags) {
	RBIterator i;
	u32 originalRenderFlags;
	EPortalWindow *pWin;
	u32 parentClipFlags;
	u32 noClipRenderFlags;
	u32 instVisFlags;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  short sVar1;
  EStorable__vtable *pEVar2;
  EPortalWindow *pEVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  uint uVar7;
  int *piVar8;
  ERedBlackTreeNode *pEVar9;
  uint uVar10;
  uint uVar11;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar9 = (this->m_receivers).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar9 != (ERedBlackTreeNode *)0x0) {
    uVar10 = renderFlags & 0xfffffffb;
    Select__10EILightmapP3ERC(this,prc);
    pEVar3 = _7EWindow_m_pCurrentPortalWindow;
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
    uVar11 = uVar10;
    if (((renderFlags & 1) != 0) && (_7EWindow_m_pCurrentPortalWindow != (EPortalWindow *)0x0)) {
      pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
      uVar4 = (*(code *)pEVar2[2].GetTypeVersion)
                        ((int)((this->field0_0x0).m_otd.m_minPos + -7) +
                         (int)*(short *)&pEVar2[2].GetTypeKey,_7EWindow_m_pCurrentPortalWindow,0x15)
      ;
      uVar11 = renderFlags & 0xfffffffa;
      if ((uVar4 & 1) != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        piVar8 = (int *)pEVar9->key;
        while( true ) {
                    /* end of inlined section */
          uVar5 = (**(code **)(*piVar8 + 0x5c))
                            ((int)piVar8 + (int)*(short *)(*piVar8 + 0x58),pEVar3,uVar4);
          if (uVar5 != 0) {
            uVar7 = uVar11;
            if ((uVar5 & 1) != 0) {
              uVar7 = uVar10;
            }
            (**(code **)(*piVar8 + 100))((int)piVar8 + (int)*(short *)(*piVar8 + 0x60),prc,uVar7);
          }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
          pEVar9 = pEVar9->pNext;
                    /* end of inlined section */
          if (pEVar9 == (ERedBlackTreeNode *)0x0) break;
          piVar8 = (int *)pEVar9->key;
        }
        if ((renderFlags & 1) == 0) {
          sVar1 = *(short *)&prc->__vtable->BeginCommand;
          pcVar6 = (code *)prc->__vtable->EndCommand;
        }
        else {
          sVar1 = *(short *)&prc->__vtable->Terminate;
          pcVar6 = (code *)prc->__vtable->NewEntry;
        }
        (*pcVar6)((int)&prc->m_pdl + (int)sVar1,1);
        return;
      }
    }
    if (pEVar9 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      piVar8 = (int *)pEVar9->key;
      while( true ) {
                    /* end of inlined section */
        (**(code **)(*piVar8 + 100))((int)piVar8 + (int)*(short *)(*piVar8 + 0x60),prc,uVar11 | 2);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        pEVar9 = pEVar9->pNext;
                    /* end of inlined section */
        if (pEVar9 == (ERedBlackTreeNode *)0x0) break;
        piVar8 = (int *)pEVar9->key;
      }
    }
  }
  return;
}

void EILightmap::Compute() {
	OTIterator oti;
	EInstance *pInstance;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	EInstance *pInstance;
	
  EStorable__vtable *pEVar1;
  bool bVar2;
  undefined1 *puVar3;
  EILight *pLight;
  long lVar4;
  EStorable *this_00;
  EOTData *otd;
  
  bVar2 = AllocateImage__10EILightmap(this);
  if (bVar2) {
    otd = &(this->field0_0x0).m_otd;
                    /* end of inlined section */
    ZeroImage__10EILightmap(this);
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
    puVar3 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                       ((undefined1 *)(this->field0_0x0).m_otd.m_overlaps.field0_0x0.m_list.m_pHead,
                        otd,8);
                    /* end of inlined section */
    if (puVar3 != (undefined1 *)0x0) {
                    /* end of inlined section */
      this_00 = *(EStorable **)(puVar3 + 0x18);
      while( true ) {
        pLight = (EILight *)DynamicCast__9EStorableP9ETypeInfo(this_00,&_7EILight_m_typeInfo);
        if (pLight == (EILight *)0x0) {
          puVar3 = *(undefined1 **)(puVar3 + 0x10);
        }
        else if (*(int *)&pLight->m_on == 0) {
          puVar3 = *(undefined1 **)(puVar3 + 0x10);
        }
        else {
          if ((0.0 < pLight->m_intensity) &&
             (pEVar1 = (pLight->field0_0x0).field0_0x0.__vtable,
             lVar4 = (*(code *)pEVar1[6].GetTypeName)
                               ((int)((pLight->field0_0x0).m_otd.m_minPos + -7) +
                                (int)*(short *)&pEVar1[6].GetTypeInfo,&this->m_vPos,&this->m_vNormal
                               ), lVar4 != 0)) {
            AddLighting__10EILightmapP7EILight(this,pLight);
          }
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
          puVar3 = *(undefined1 **)(puVar3 + 0x10);
        }
        puVar3 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi(puVar3,otd,8);
                    /* end of inlined section */
        if (puVar3 == (undefined1 *)0x0) break;
        this_00 = *(EStorable **)(puVar3 + 0x18);
      }
    }
    WriteImage__10EILightmap(this);
    DeallocateImage__10EILightmap(this);
  }
  return;
}

void EILightmap::ZeroImage() {
	int y;
	
  uchar **ppuVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this->m_yRes) {
    ppuVar1 = this->m_image;
    while( true ) {
      ppuVar1 = ppuVar1 + iVar2;
      iVar2 = iVar2 + 1;
      memset(*ppuVar1,0,(long)(this->m_xRes * 3));
      if (this->m_yRes <= iVar2) break;
      ppuVar1 = this->m_image;
    }
  }
  return;
}

void EILightmap::WriteImage() {
	int padX;
	int padY;
	void *pImage;
	void *pPal;
	int bytesPerRow;
	ERTQuantize rtq;
	int y;
	int nColors;
	u8 *pos;
	u8 *lastRowCopy;
	u8 *currentRowCopy;
	int lastx;
	int lasty;
	int y;
	u8 *currentRow;
	u8 *toprow;
	u8 *bottomrow;
	u8 *fastpixel;
	u8 *fasttop;
	u8 *fastmid;
	u8 *fastbot;
	int count;
	u8 *tempRow;
	int clr;
	int l3;
	int r3;
	int x3;
	u8 *pixel;
	int cc;
	u8 *color;
	int x;
	int cc;
	unsigned char color[3];
	u8 *pal;
	int maxChannel;
	u32 maxVal;
	int c;
	u8 *color;
	int x;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ETexture__vtable *pEVar6;
  byte *pbVar7;
  uchar **ppuVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  int iVar20;
  byte *pbVar21;
  uchar *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined8 unaff_s0;
  int iVar26;
  byte *pbVar27;
  undefined8 unaff_s1;
  byte *pbVar28;
  void *pvVar29;
  undefined8 unaff_s2;
  int iVar30;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  byte *pDest;
  void *pvVar31;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  ERTQuantize rtq;
  uchar color [3];
  int padX;
  int padY;
  void *pImage;
  void *pPal;
  int bytesPerRow;
  uchar *lastRowCopy;
  int lastx;
  int lasty;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  uchar *local_b0;
  int local_ac;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pEVar6 = this->m_pTexture->__vtable;
  (*(code *)pEVar6->Validate)
            ((int)&(this->m_pTexture->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar6->Test1,2)
  ;
  pEVar6 = this->m_pTexture->__vtable;
  pImage = (void *)(**(code **)(pEVar6 + 1))
                             ((int)&(this->m_pTexture->m_textureDef).pfnAllocAlign +
                              (int)*(short *)&pEVar6->Select,0,&padX,&padY);
  pEVar6 = this->m_pTexture->__vtable;
  pPal = (void *)(*(code *)pEVar6[1].Lock)
                           ((int)&(this->m_pTexture->m_textureDef).pfnAllocAlign +
                            (int)*(short *)&pEVar6[1].ETexture);
  bytesPerRow = padX;
  if (*(int *)&this->m_blur != 0) {
    iVar26 = 0;
    lastRowCopy = (uchar *)Alloc__11EAllocGroupUii(&this->m_ag,this->m_xRes * 3,0x10);
    pbVar7 = (byte *)Alloc__11EAllocGroupUii(&this->m_ag,this->m_xRes * 3,0x10);
    lastx = this->m_xRes + -1;
    lasty = this->m_yRes + -1;
    if (0 < this->m_yRes) {
      do {
        pDest = pbVar7;
        puVar22 = this->m_image[iVar26];
        memcpy(pDest,puVar22,this->m_xRes * 3);
        pbVar7 = lastRowCopy;
        if (iVar26 == 0) {
          pbVar7 = pDest;
        }
        pbVar17 = pDest;
        if (iVar26 != lasty) {
          pbVar17 = this->m_image[iVar26 + 1];
        }
        iVar26 = iVar26 + 1;
        local_b0 = puVar22 + 3;
        local_c0 = lastx + -1;
        local_bc = local_c0 * 2;
        local_b8 = lastx * 2;
        local_ac = 0;
        do {
          if (local_ac == 0) {
            iVar9 = 0;
            iVar20 = 0;
            iVar11 = 3;
          }
          else {
            iVar20 = lastx * 3;
            iVar9 = local_c0 * 3;
            iVar11 = iVar20;
          }
          local_ac = local_ac + 1;
          pbVar28 = pbVar7 + iVar11;
          pbVar27 = pbVar7 + iVar20;
          pbVar25 = pbVar7 + iVar9;
          iVar30 = 0;
          pbVar24 = pbVar17 + iVar11;
          pbVar23 = pbVar17 + iVar20;
          pbVar21 = pbVar17 + iVar9;
          pbVar19 = pDest + iVar11;
          pbVar18 = pDest + iVar20;
          pbVar16 = pDest + iVar9;
          do {
            iVar9 = iVar30 + iVar20;
            iVar30 = iVar30 + 1;
            bVar1 = *pbVar21;
            bVar2 = *pbVar18;
            bVar3 = *pbVar19;
            bVar4 = *pbVar24;
            bVar5 = *pbVar23;
            pbVar24 = pbVar24 + 1;
            pbVar23 = pbVar23 + 1;
            pbVar21 = pbVar21 + 1;
            pbVar19 = pbVar19 + 1;
            pbVar18 = pbVar18 + 1;
            puVar22[iVar9] =
                 (uchar)((uint)*pbVar25 * 0x18 + (uint)*pbVar27 * 0x20 + (uint)*pbVar28 * 0x18 +
                         (uint)*pbVar16 * 0x20 + (uint)bVar2 * 0x20 + (uint)bVar3 * 0x20 +
                         (uint)bVar1 * 0x18 + (uint)bVar5 * 0x20 + (uint)bVar4 * 0x18 >> 8);
            pbVar16 = pbVar16 + 1;
            pbVar28 = pbVar28 + 1;
            pbVar27 = pbVar27 + 1;
            pbVar25 = pbVar25 + 1;
          } while (iVar30 < 3);
        } while (local_ac < 2);
        iVar20 = (this->m_xRes + -2) * 3;
        pbVar16 = pDest;
        puVar22 = local_b0;
        do {
          bVar1 = *pbVar7;
          iVar20 = iVar20 + -1;
          pbVar18 = pbVar7 + 6;
          pbVar19 = pbVar7 + 3;
          bVar2 = *pbVar16;
          bVar3 = *pbVar17;
          pbVar21 = pbVar16 + 3;
          pbVar23 = pbVar16 + 6;
          pbVar24 = pbVar17 + 6;
          pbVar25 = pbVar17 + 3;
          pbVar7 = pbVar7 + 1;
          pbVar16 = pbVar16 + 1;
          pbVar17 = pbVar17 + 1;
          *puVar22 = (uchar)((uint)bVar1 * 0x18 + (uint)*pbVar19 * 0x20 + (uint)*pbVar18 * 0x18 +
                             (uint)bVar2 * 0x20 + (uint)*pbVar21 * 0x20 + (uint)*pbVar23 * 0x20 +
                             (uint)bVar3 * 0x18 + (uint)*pbVar25 * 0x20 + (uint)*pbVar24 * 0x18 >> 8
                            );
          puVar22 = puVar22 + 1;
        } while (iVar20 != 0);
        pbVar7 = lastRowCopy;
        lastRowCopy = pDest;
        local_b4 = iVar26;
      } while (iVar26 < this->m_yRes);
    }
  }
  __11ERTQuantize(&rtq);
  Init__11ERTQuantizeUiUiPFUi_PvPFPv_vb
            (&rtq,0x100,_quantk << 10,(undefined1 *)0x0,(undefined1 *)0x0,false);
  if (0 < this->m_yRes) {
    ppuVar8 = this->m_image;
    iVar26 = 0;
    while( true ) {
      iVar20 = 0;
      puVar22 = ppuVar8[iVar26];
      if (0 < this->m_xRes) {
        do {
          AddPixel__11ERTQuantizePUc(&rtq,puVar22);
          iVar20 = iVar20 + 1;
          puVar22 = puVar22 + 3;
        } while (iVar20 < this->m_xRes);
      }
      if (this->m_yRes <= iVar26 + 1) break;
      ppuVar8 = this->m_image;
      iVar26 = iVar26 + 1;
    }
  }
  iVar20 = 0;
  Compute__11ERTQuantize(&rtq);
  iVar26 = GetPaletteSize__11ERTQuantize(&rtq);
  if (0 < iVar26) {
    do {
      GetPaletteEntry__11ERTQuantizeiPUc(&rtq,iVar20,color);
      iVar9 = iVar20 * 4;
      iVar20 = iVar20 + 1;
      pcVar12 = (char *)((int)pPal + iVar9);
      pbVar7 = color + 1;
      iVar9 = 1;
      iVar11 = 0;
      uVar15 = (uint)color[0];
      do {
        uVar10 = (uint)*pbVar7;
        iVar30 = iVar9;
        if (uVar10 <= uVar15) {
          iVar30 = iVar11;
          uVar10 = uVar15;
        }
        iVar13 = iVar9 + 1;
        pbVar7 = color + iVar9 + 1;
        iVar9 = iVar13;
        iVar11 = iVar30;
        uVar15 = uVar10;
      } while (iVar13 < 3);
      iVar9 = 0;
      pcVar14 = pcVar12;
      do {
        if (iVar9 == iVar30) {
          *pcVar14 = '\0';
        }
        else {
          if (uVar10 == 0) {
            trap(7);
          }
          *pcVar14 = -1 - (char)(((uint)color[iVar9] * 0xff) / uVar10);
        }
        iVar9 = iVar9 + 1;
        pcVar14 = pcVar14 + 1;
      } while (iVar9 < 3);
      pcVar12[3] = (char)uVar10;
    } while (iVar20 < iVar26);
  }
  pvVar29 = pImage;
  iVar26 = 0;
  if (0 < this->m_yRes) {
    do {
      iVar9 = iVar26 + 1;
      iVar20 = 0;
      puVar22 = this->m_image[iVar26];
      pvVar31 = (void *)((int)pvVar29 + bytesPerRow);
      if (0 < this->m_xRes) {
        do {
          iVar26 = GetClosestColor__11ERTQuantizePUc(&rtq,puVar22);
          *(char *)((int)pvVar29 + iVar20) = (char)iVar26;
          iVar20 = iVar20 + 1;
          puVar22 = puVar22 + 3;
        } while (iVar20 < this->m_xRes);
      }
      pvVar29 = pvVar31;
      iVar26 = iVar9;
    } while (iVar9 < this->m_yRes);
  }
  Deallocate__11ERTQuantize(&rtq);
  pEVar6 = this->m_pTexture->__vtable;
  (*(code *)pEVar6[1].Invalidate)
            ((int)&(this->m_pTexture->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar6[1].Unlock
            );
  ___11ERTQuantize(&rtq,2);
  return;
}

void EILightmap::AddLighting(EILight *pLight) {
	bool shadows;
	ERenderSurface *pRS;
	u8 *rsdata;
	EVec3 vXDelta;
	EVec3 vYDelta;
	EVec3 vLineStart;
	u8 *shadowMaskPixels;
	EVec3 vLightPos;
	EVec3 vPointOnPlane;
	EVec3 vDeltaPointOnPlane;
	float distance;
	EVec3 &v;
	ERenderSurfaceDef rsd;
	EVec3 *this;
	EVec3 vClosestPointOnPlane;
	EVec3 vUp;
	EVec3 vLL;
	EVec3 vLR;
	EVec3 vUR;
	EVec3 vUL;
	EVec3 vUnitX;
	EVec3 vXDeltaOffset;
	EVec3 vPointOnTop;
	EVec3 vPointOnBottom;
	EVec3 vPointOnTopDelta;
	float topAngle;
	EVec3 vPointOnBottomDelta;
	float bottomAngle;
	float fovy;
	EVec3 vUnitY;
	EVec3 vYDeltaOffset;
	EVec3 vPointOnLeft;
	EVec3 vPointOnRight;
	EVec3 vPointOnLeftDelta;
	float leftAngle;
	EVec3 vPointOnRightDelta;
	float rightAngle;
	float fovx;
	float nearPlane;
	float widthFactor;
	float heightFactor;
	float aspect;
	EWindow *prevWindow;
	EPortalWindow rswin;
	EVec2 vULScreen;
	EVec2 vLRScreen;
	float screenWidth;
	float screenHeight;
	float newWidth;
	float newHeight;
	EFloatRect vp;
	EPortalDef pd;
	ERC *prc;
	EFloatRect clipRect;
	TNodeList<unsigned int> prevVisibleList;
	RBIterator ri;
	bool hideSource;
	u32 prevSourceVisFlags;
	NLIterator vi;
	float scaler;
	float rad;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	NLIterator i;
	NLIterator i;
	int y;
	int offset;
	
  undefined *puVar1;
  bool bVar2;
  EStorable__vtable *pEVar3;
  EGlobalManagerClient__vtable *pEVar4;
  EInstance *pEVar5;
  ulong *puVar6;
  ENodeListNode *pEVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  ERedBlackTreeNode *pEVar14;
  uchar *puVar15;
  ERC *prc;
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
  float fVar26;
  float fVar27;
  float fVar28;
  EVec3 vLightPos;
  EVec3 vYDelta;
  EVec3 vDeltaPointOnPlane;
  ERenderSurfaceDef rsd;
  EVec3 vClosestPointOnPlane;
  EVec3 vUp;
  EVec3 vLL;
  EVec3 vLR;
  EVec3 vUR;
  EVec3 vUL;
  EVec3 vUnitX;
  EVec3 vXDeltaOffset;
  EVec3 vPointOnTop;
  EVec3 vPointOnBottom;
  EVec3 vPointOnTopDelta;
  EVec3 vPointOnBottomDelta;
  EVec3 vUnitY;
  EVec3 vYDeltaOffset;
  EVec3 vPointOnLeft;
  EVec3 vPointOnRight;
  EVec3 vPointOnLeftDelta;
  EVec3 vPointOnRightDelta;
  EPortalWindow rswin;
  EVec2 vULScreen;
  EVec2 vLRScreen;
  TRect_float_ vp;
  EPortalDef pd;
  TRect_float_ clipRect;
  TNodeList_unsigned_int_ prevVisibleList;
  ERenderSurface *pRS;
  uchar *rsdata;
  EWindow *prevWindow;
  
  bVar2 = false;
  pEVar3 = (pLight->field0_0x0).field0_0x0.__vtable;
  lVar10 = (*(code *)pEVar3[6].GetTypeVersion)
                     ((int)((pLight->field0_0x0).m_otd.m_minPos + -7) +
                      (int)*(short *)&pEVar3[6].GetTypeKey);
  if ((lVar10 != 0) && (*(int *)&pLight->m_shadows != 0)) {
    bVar2 = (this->field0_0x0).m_pLevel != (ERLevel *)0x0;
  }
  pRS = (ERenderSurface *)0x0;
  rsdata = (uchar *)0x0;
  if (bVar2) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    pEVar4 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar4[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar4[3].ManagedStartup);
    pEVar4 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar4[0xf].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xf));
    pEVar3 = (pLight->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar3[6].Read)
              (&vLightPos,
               (int)((pLight->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar3[6].EStorable
              );
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vDeltaPointOnPlane.field0_0x0.d[0] = vLightPos.field0_0x0.d[0] - (this->m_vPos).field0_0x0.d[0];
    vDeltaPointOnPlane.field0_0x0.d[1] = vLightPos.field0_0x0.d[1] - (this->m_vPos).field0_0x0.d[1];
    vDeltaPointOnPlane.field0_0x0.d[2] = vLightPos.field0_0x0.d[2] - (this->m_vPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar28 = vDeltaPointOnPlane.field0_0x0.d[0] * (this->m_vNormal).field0_0x0.d[0] +
             vDeltaPointOnPlane.field0_0x0.d[1] * (this->m_vNormal).field0_0x0.d[1] +
             vDeltaPointOnPlane.field0_0x0.d[2] * (this->m_vNormal).field0_0x0.d[2];
                    /* end of inlined section */
    if (0.005 < fVar28) {
                    /* inlined from e_rendersurface.h */
      rsd.format = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vClosestPointOnPlane.field0_0x0.d[0] = 0.0;
      vClosestPointOnPlane.field0_0x0.d[2] = 0.0;
      vClosestPointOnPlane.field0_0x0.d[1] = 0.0;
      fVar19 = 1.0;
                    /* end of inlined section */
      rsd.xsize = this->m_xRes;
      rsd.ysize = this->m_yRes;
      puVar1 = (undefined *)((int)&rsd.bgColor.field0_0x0 + 7);
                    /* inlined from e_rendersurface.h */
      uVar12 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar12);
      *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 | 0UL >> (7 - uVar12) * 8;
      uVar12 = (uint)&rsd.bgColor & 7;
      puVar6 = (ulong *)((int)&rsd.bgColor - uVar12);
      *puVar6 = 0L << uVar12 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      rsd.bgColor.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vClosestPointOnPlane.field0_0x0.d[2] = 1.0;
      vClosestPointOnPlane.field0_0x0.d[1] = 1.0;
      vClosestPointOnPlane.field0_0x0.d[0] = 1.0;
      puVar1 = (undefined *)((int)&rsd.bgColor.field0_0x0 + 7);
                    /* end of inlined section */
      uVar12 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar12);
      *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar12) * 8;
      uVar12 = (uint)&rsd.bgColor & 7;
      puVar6 = (ulong *)((int)&rsd.bgColor - uVar12);
      *puVar6 = 0x3f8000003f800000 << uVar12 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar12) * 8
      ;
      rsd.bgColor.field0_0x0.d[2] = 1.0;
      rsd.flags = 2;
      pEVar4 = (_pGfx->field0_0x0).__vtable;
      lVar10 = (*(code *)pEVar4[8].ManagedShutdown)
                         ((int)&(_pGfx->field0_0x0).__vtable +
                          (int)*(short *)&pEVar4[8].ManagedStartup);
      pRS = (ERenderSurface *)lVar10;
      if ((lVar10 != 0) &&
         (rsdata = (uchar *)_memmanAlloc__FUiUi(this->m_xRes * this->m_yRes * 4,0x10),
         rsdata != (uchar *)0x0)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vUp.field0_0x0.d[0] = (this->m_vYDelta).field0_0x0.d[0];
        vUp.field0_0x0.d[1] = (this->m_vYDelta).field0_0x0.d[1];
        vUp.field0_0x0.d[2] = (this->m_vYDelta).field0_0x0.d[2];
        vClosestPointOnPlane.field0_0x0.d[1] =
             vLightPos.field0_0x0.d[1] - (this->m_vNormal).field0_0x0.d[1] * fVar28;
        vClosestPointOnPlane.field0_0x0.d[0] =
             vLightPos.field0_0x0.d[0] - (this->m_vNormal).field0_0x0.d[0] * fVar28;
        vClosestPointOnPlane.field0_0x0.d[2] =
             vLightPos.field0_0x0.d[2] - (this->m_vNormal).field0_0x0.d[2] * fVar28;
        fVar23 = sqrtf(vUp.field0_0x0.d[0] * vUp.field0_0x0.d[0] +
                       vUp.field0_0x0.d[1] * vUp.field0_0x0.d[1] +
                       vUp.field0_0x0.d[2] * vUp.field0_0x0.d[2]);
        if (fVar23 == 0.0) {
          fVar23 = (this->m_vPos).field0_0x0.d[0];
        }
        else {
          fVar23 = fVar19 / fVar23;
          vUp.field0_0x0.d[0] = vUp.field0_0x0.d[0] * fVar23;
          vUp.field0_0x0.d[2] = vUp.field0_0x0.d[2] * fVar23;
          vUp.field0_0x0.d[1] = vUp.field0_0x0.d[1] * fVar23;
          fVar23 = (this->m_vPos).field0_0x0.d[0];
        }
        vUnitX.field0_0x0.d[0] = (this->m_vXDelta).field0_0x0.d[0];
        fVar25 = (this->m_vXDelta).field0_0x0.d[1];
        fVar27 = (this->m_vXDelta).field0_0x0.d[2];
        vLR.field0_0x0.d[0] = fVar23 + vUnitX.field0_0x0.d[0];
        fVar26 = (this->m_vYDelta).field0_0x0.d[0];
        vLR.field0_0x0.d[1] = (this->m_vPos).field0_0x0.d[1] + fVar25;
        vLR.field0_0x0.d[2] = (this->m_vPos).field0_0x0.d[2] + fVar27;
        vUL.field0_0x0.d[0] = fVar23 + fVar26;
        fVar26 = vLR.field0_0x0.d[0] + fVar26;
        fVar22 = (this->m_vPos).field0_0x0.d[1] + fVar25 + (this->m_vYDelta).field0_0x0.d[1];
        fVar20 = (this->m_vPos).field0_0x0.d[2] + fVar27 + (this->m_vYDelta).field0_0x0.d[2];
        vUL.field0_0x0.d[1] = (this->m_vPos).field0_0x0.d[1] + (this->m_vYDelta).field0_0x0.d[1];
        fVar24 = (this->m_vPos).field0_0x0.d[1];
        fVar25 = (this->m_vPos).field0_0x0.d[2];
        vUL.field0_0x0.d[2] = (this->m_vPos).field0_0x0.d[2] + (this->m_vYDelta).field0_0x0.d[2];
        vUnitX.field0_0x0.d[1] = (this->m_vXDelta).field0_0x0.d[1];
        vUnitX.field0_0x0.d[2] = (this->m_vXDelta).field0_0x0.d[2];
        fVar27 = sqrtf(vUnitX.field0_0x0.d[0] * vUnitX.field0_0x0.d[0] +
                       vUnitX.field0_0x0.d[1] * vUnitX.field0_0x0.d[1] +
                       vUnitX.field0_0x0.d[2] * vUnitX.field0_0x0.d[2]);
        if (fVar27 != 0.0) {
          fVar27 = fVar19 / fVar27;
          vUnitX.field0_0x0.d[0] = vUnitX.field0_0x0.d[0] * fVar27;
          vUnitX.field0_0x0.d[2] = vUnitX.field0_0x0.d[2] * fVar27;
          vUnitX.field0_0x0.d[1] = vUnitX.field0_0x0.d[1] * fVar27;
        }
        fVar16 = vUnitX.field0_0x0.d[0] *
                 (vClosestPointOnPlane.field0_0x0.d[0] - vUL.field0_0x0.d[0]) +
                 vUnitX.field0_0x0.d[1] *
                 (vClosestPointOnPlane.field0_0x0.d[1] - vUL.field0_0x0.d[1]) +
                 vUnitX.field0_0x0.d[2] *
                 (vClosestPointOnPlane.field0_0x0.d[2] - vUL.field0_0x0.d[2]);
        fVar21 = vLightPos.field0_0x0.d[0] - (vUL.field0_0x0.d[0] + fVar16 * vUnitX.field0_0x0.d[0])
        ;
        vPointOnTopDelta.field0_0x0.d[1] =
             vLightPos.field0_0x0.d[1] - (vUL.field0_0x0.d[1] + fVar16 * vUnitX.field0_0x0.d[1]);
        vPointOnTopDelta.field0_0x0.d[2] =
             vLightPos.field0_0x0.d[2] - (vUL.field0_0x0.d[2] + fVar16 * vUnitX.field0_0x0.d[2]);
        fVar27 = sqrtf(fVar21 * fVar21 +
                       vPointOnTopDelta.field0_0x0.d[1] * vPointOnTopDelta.field0_0x0.d[1] +
                       vPointOnTopDelta.field0_0x0.d[2] * vPointOnTopDelta.field0_0x0.d[2]);
        if (fVar27 != 0.0) {
          fVar27 = fVar19 / fVar27;
          fVar21 = fVar21 * fVar27;
          vPointOnTopDelta.field0_0x0.d[2] = vPointOnTopDelta.field0_0x0.d[2] * fVar27;
          vPointOnTopDelta.field0_0x0.d[1] = vPointOnTopDelta.field0_0x0.d[1] * fVar27;
        }
                    /* end of inlined section */
        fVar17 = acosf(fVar21 * (this->m_vNormal).field0_0x0.d[0] +
                       vPointOnTopDelta.field0_0x0.d[1] * (this->m_vNormal).field0_0x0.d[1] +
                       vPointOnTopDelta.field0_0x0.d[2] * (this->m_vNormal).field0_0x0.d[2]);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar21 = vLightPos.field0_0x0.d[0] - (fVar23 + fVar16 * vUnitX.field0_0x0.d[0]);
        vPointOnBottomDelta.field0_0x0.d[1] =
             vLightPos.field0_0x0.d[1] - (fVar24 + fVar16 * vUnitX.field0_0x0.d[1]);
        vPointOnBottomDelta.field0_0x0.d[2] =
             vLightPos.field0_0x0.d[2] - (fVar25 + fVar16 * vUnitX.field0_0x0.d[2]);
        fVar27 = sqrtf(fVar21 * fVar21 +
                       vPointOnBottomDelta.field0_0x0.d[1] * vPointOnBottomDelta.field0_0x0.d[1] +
                       vPointOnBottomDelta.field0_0x0.d[2] * vPointOnBottomDelta.field0_0x0.d[2]);
        if (fVar27 != 0.0) {
          fVar27 = fVar19 / fVar27;
          fVar21 = fVar21 * fVar27;
          vPointOnBottomDelta.field0_0x0.d[2] = vPointOnBottomDelta.field0_0x0.d[2] * fVar27;
          vPointOnBottomDelta.field0_0x0.d[1] = vPointOnBottomDelta.field0_0x0.d[1] * fVar27;
        }
                    /* end of inlined section */
        fVar27 = acosf(fVar21 * (this->m_vNormal).field0_0x0.d[0] +
                       vPointOnBottomDelta.field0_0x0.d[1] * (this->m_vNormal).field0_0x0.d[1] +
                       vPointOnBottomDelta.field0_0x0.d[2] * (this->m_vNormal).field0_0x0.d[2]);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vUnitY.field0_0x0.d[0] = (this->m_vYDelta).field0_0x0.d[0];
                    /* end of inlined section */
        fVar21 = (float)((int)fVar27 * (uint)(fVar17 < fVar27) |
                        (int)fVar17 * (uint)(fVar17 >= fVar27));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vUnitY.field0_0x0.d[1] = (this->m_vYDelta).field0_0x0.d[1];
                    /* end of inlined section */
        fVar21 = fVar21 + fVar21;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vUnitY.field0_0x0.d[2] = (this->m_vYDelta).field0_0x0.d[2];
        fVar27 = sqrtf(vUnitY.field0_0x0.d[0] * vUnitY.field0_0x0.d[0] +
                       vUnitY.field0_0x0.d[1] * vUnitY.field0_0x0.d[1] +
                       vUnitY.field0_0x0.d[2] * vUnitY.field0_0x0.d[2]);
        if (fVar27 != 0.0) {
          fVar27 = fVar19 / fVar27;
          vUnitY.field0_0x0.d[0] = vUnitY.field0_0x0.d[0] * fVar27;
          vUnitY.field0_0x0.d[2] = vUnitY.field0_0x0.d[2] * fVar27;
          vUnitY.field0_0x0.d[1] = vUnitY.field0_0x0.d[1] * fVar27;
        }
        fVar17 = vUnitY.field0_0x0.d[0] *
                 (vClosestPointOnPlane.field0_0x0.d[0] - vUL.field0_0x0.d[0]) +
                 vUnitY.field0_0x0.d[1] *
                 (vClosestPointOnPlane.field0_0x0.d[1] - vUL.field0_0x0.d[1]) +
                 vUnitY.field0_0x0.d[2] *
                 (vClosestPointOnPlane.field0_0x0.d[2] - vUL.field0_0x0.d[2]);
        fVar16 = vLightPos.field0_0x0.d[0] - (vUL.field0_0x0.d[0] + fVar17 * vUnitY.field0_0x0.d[0])
        ;
        vPointOnLeftDelta.field0_0x0.d[1] =
             vLightPos.field0_0x0.d[1] - (vUL.field0_0x0.d[1] + fVar17 * vUnitY.field0_0x0.d[1]);
        vPointOnLeftDelta.field0_0x0.d[2] =
             vLightPos.field0_0x0.d[2] - (vUL.field0_0x0.d[2] + fVar17 * vUnitY.field0_0x0.d[2]);
        fVar27 = sqrtf(fVar16 * fVar16 +
                       vPointOnLeftDelta.field0_0x0.d[1] * vPointOnLeftDelta.field0_0x0.d[1] +
                       vPointOnLeftDelta.field0_0x0.d[2] * vPointOnLeftDelta.field0_0x0.d[2]);
        if (fVar27 != 0.0) {
          fVar27 = fVar19 / fVar27;
          fVar16 = fVar16 * fVar27;
          vPointOnLeftDelta.field0_0x0.d[2] = vPointOnLeftDelta.field0_0x0.d[2] * fVar27;
          vPointOnLeftDelta.field0_0x0.d[1] = vPointOnLeftDelta.field0_0x0.d[1] * fVar27;
        }
                    /* end of inlined section */
        fVar16 = acosf(fVar16 * (this->m_vNormal).field0_0x0.d[0] +
                       vPointOnLeftDelta.field0_0x0.d[1] * (this->m_vNormal).field0_0x0.d[1] +
                       vPointOnLeftDelta.field0_0x0.d[2] * (this->m_vNormal).field0_0x0.d[2]);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar18 = vLightPos.field0_0x0.d[0] - (fVar26 + fVar17 * vUnitY.field0_0x0.d[0]);
        vPointOnRightDelta.field0_0x0.d[1] =
             vLightPos.field0_0x0.d[1] - (fVar22 + fVar17 * vUnitY.field0_0x0.d[1]);
        vPointOnRightDelta.field0_0x0.d[2] =
             vLightPos.field0_0x0.d[2] - (fVar20 + fVar17 * vUnitY.field0_0x0.d[2]);
        fVar27 = sqrtf(fVar18 * fVar18 +
                       vPointOnRightDelta.field0_0x0.d[1] * vPointOnRightDelta.field0_0x0.d[1] +
                       vPointOnRightDelta.field0_0x0.d[2] * vPointOnRightDelta.field0_0x0.d[2]);
        if (fVar27 != 0.0) {
          fVar27 = fVar19 / fVar27;
          fVar18 = fVar18 * fVar27;
          vPointOnRightDelta.field0_0x0.d[2] = vPointOnRightDelta.field0_0x0.d[2] * fVar27;
          vPointOnRightDelta.field0_0x0.d[1] = vPointOnRightDelta.field0_0x0.d[1] * fVar27;
        }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        fVar27 = acosf(fVar18 * (this->m_vNormal).field0_0x0.d[0] +
                       vPointOnRightDelta.field0_0x0.d[1] * (this->m_vNormal).field0_0x0.d[1] +
                       vPointOnRightDelta.field0_0x0.d[2] * (this->m_vNormal).field0_0x0.d[2]);
        fVar27 = (float)((int)fVar27 * (uint)(fVar16 < fVar27) |
                        (int)fVar16 * (uint)(fVar16 >= fVar27));
        fVar27 = tanf((fVar27 + fVar27) * 0.5);
        fVar27 = fVar27 + fVar27;
        fVar16 = tanf(fVar21 * 0.5);
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/window/e_window.h */
        prevWindow = _7EWindow_m_pCurrentWindow;
                    /* end of inlined section */
        fVar27 = fVar27 / (fVar16 + fVar16);
                    /* end of inlined section */
        __13EPortalWindow(&rswin);
        SetRenderSurface__7EWindowP14ERenderSurface((EWindow *)&rswin,pRS);
        SetProjection__13EPortalWindowffff(&rswin,fVar21 * 57.29578,fVar27,fVar28 * 0.001,fVar28);
        SetLookAt__13EPortalWindowRC5EVec3N21(&rswin,&vLightPos,&vClosestPointOnPlane,&vUp);
        TransformToScreen__9E3DWindowRC5EVec3R5EVec2(&rswin.field0_0x0,&vUL,&vULScreen);
        TransformToScreen__9E3DWindowRC5EVec3R5EVec2(&rswin.field0_0x0,&vLR,&vLRScreen);
        fVar28 = fVar19 / (vLRScreen.field0_0x0.d[0] - vULScreen.field0_0x0.d[0]);
        fVar27 = fVar19 / (vLRScreen.field0_0x0.d[1] - vULScreen.field0_0x0.d[1]);
        vp.left = -vULScreen.field0_0x0.d[0] * fVar28;
        vp.top = -vULScreen.field0_0x0.d[1] * fVar27;
        vp.right = vp.left + fVar28;
        vp.bottom = vp.top + fVar27;
        SetViewport__9E3DWindowRCt5TRect1Zf(&rswin.field0_0x0,&vp);
        SetClipRatio__13EPortalWindowf(&rswin,fVar19);
                    /* inlined from /eor/src2/engine/window/e_portalwindow.h */
                    /* end of inlined section */
        iVar9 = 4;
        do {
          bVar2 = iVar9 != -1;
          iVar9 = iVar9 + -1;
        } while (bVar2);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        prevVisibleList.field0_0x0.m_l.m_pHead =
             (ENodeListNode *)((fVar23 - vLightPos.field0_0x0.d[0]) * 0.001);
                    /* end of inlined section */
        pd.nCorners = 4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        prevVisibleList.field0_0x0.m_l.m_pTail =
             (ENodeListNode *)((fVar24 - vLightPos.field0_0x0.d[1]) * 0.001);
        clipRect.left = vLightPos.field0_0x0.d[0] + (float)prevVisibleList.field0_0x0.m_l.m_pHead;
        clipRect.top = vLightPos.field0_0x0.d[1] + (float)prevVisibleList.field0_0x0.m_l.m_pTail;
        pd.vCorners[0].field0_0x0._8_4_ =
             vLightPos.field0_0x0.d[2] + (fVar25 - vLightPos.field0_0x0.d[2]) * 0.001;
        clipRect.right = pd.vCorners[0].field0_0x0._8_4_;
                    /* end of inlined section */
        pd.flags = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pd.vCorners[0].field0_0x0._0_8_ = CONCAT44(clipRect.top,clipRect.left);
        puVar1 = (undefined *)((int)&pd.vCorners[0].field0_0x0 + 7);
        uVar12 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar12);
        *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 |
                  pd.vCorners[0].field0_0x0._0_8_ >> (7 - uVar12) * 8;
        prevVisibleList.field0_0x0.m_l.m_pHead =
             (ENodeListNode *)((vLR.field0_0x0.d[0] - vLightPos.field0_0x0.d[0]) * 0.001);
        prevVisibleList.field0_0x0.m_l.m_pTail =
             (ENodeListNode *)((vLR.field0_0x0.d[1] - vLightPos.field0_0x0.d[1]) * 0.001);
        clipRect.left = vLightPos.field0_0x0.d[0] + (float)prevVisibleList.field0_0x0.m_l.m_pHead;
        clipRect.top = vLightPos.field0_0x0.d[1] + (float)prevVisibleList.field0_0x0.m_l.m_pTail;
        pd.vCorners[1].field0_0x0._8_4_ =
             vLightPos.field0_0x0.d[2] + (vLR.field0_0x0.d[2] - vLightPos.field0_0x0.d[2]) * 0.001;
        clipRect.right = pd.vCorners[1].field0_0x0._8_4_;
        uVar8 = CONCAT44(clipRect.top,clipRect.left);
        puVar1 = (undefined *)((int)&pd.vCorners[1].field0_0x0 + 7);
        uVar12 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar12);
        *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 | uVar8 >> (7 - uVar12) * 8;
        uVar12 = (uint)(pd.vCorners + 1) & 7;
        puVar6 = (ulong *)((int)(pd.vCorners + 1) - uVar12);
        *puVar6 = uVar8 << uVar12 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
        prevVisibleList.field0_0x0.m_l.m_pHead =
             (ENodeListNode *)((fVar26 - vLightPos.field0_0x0.d[0]) * 0.001);
        prevVisibleList.field0_0x0.m_l.m_pTail =
             (ENodeListNode *)((fVar22 - vLightPos.field0_0x0.d[1]) * 0.001);
        clipRect.left = vLightPos.field0_0x0.d[0] + (float)prevVisibleList.field0_0x0.m_l.m_pHead;
        clipRect.top = vLightPos.field0_0x0.d[1] + (float)prevVisibleList.field0_0x0.m_l.m_pTail;
        pd.vCorners[2].field0_0x0._8_4_ =
             vLightPos.field0_0x0.d[2] + (fVar20 - vLightPos.field0_0x0.d[2]) * 0.001;
        clipRect.right = pd.vCorners[2].field0_0x0._8_4_;
        pd.vCorners[2].field0_0x0._0_8_ = CONCAT44(clipRect.top,clipRect.left);
        puVar1 = (undefined *)((int)&pd.vCorners[2].field0_0x0 + 7);
        uVar12 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar12);
        *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 |
                  pd.vCorners[2].field0_0x0._0_8_ >> (7 - uVar12) * 8;
        prevVisibleList.field0_0x0.m_l.m_pHead =
             (ENodeListNode *)((vUL.field0_0x0.d[0] - vLightPos.field0_0x0.d[0]) * 0.001);
        prevVisibleList.field0_0x0.m_l.m_pTail =
             (ENodeListNode *)((vUL.field0_0x0.d[1] - vLightPos.field0_0x0.d[1]) * 0.001);
        clipRect.left = vLightPos.field0_0x0.d[0] + (float)prevVisibleList.field0_0x0.m_l.m_pHead;
        clipRect.top = vLightPos.field0_0x0.d[1] + (float)prevVisibleList.field0_0x0.m_l.m_pTail;
        pd.vCorners[3].field0_0x0._8_4_ =
             vLightPos.field0_0x0.d[2] + (vUL.field0_0x0.d[2] - vLightPos.field0_0x0.d[2]) * 0.001;
        clipRect.right = pd.vCorners[3].field0_0x0._8_4_;
        uVar8 = CONCAT44(clipRect.top,clipRect.left);
        puVar1 = (undefined *)((int)&pd.vCorners[3].field0_0x0 + 7);
        uVar12 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar12);
        *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 | uVar8 >> (7 - uVar12) * 8;
        uVar12 = (uint)(pd.vCorners + 3) & 7;
        puVar6 = (ulong *)((int)(pd.vCorners + 3) - uVar12);
        *puVar6 = uVar8 << uVar12 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
                    /* end of inlined section */
        PushPortal__13EPortalWindowRC10EPortalDefbUi(&rswin,&pd,true,0x15);
        pEVar4 = (_pGfx->field0_0x0).__vtable;
        uVar11 = (*(code *)pEVar4[6].EGlobalManagerClient)
                           ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 6),0);
        prc = (ERC *)uVar11;
        (*(code *)prc->__vtable[1].SetRasterModes)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].DisableRasterModes,pRS,5);
        Select__13EPortalWindowP3ERC(&rswin,prc);
        clipRect.left = vULScreen.field0_0x0.d[0];
        clipRect.top = vULScreen.field0_0x0.d[1];
        clipRect.right = vLRScreen.field0_0x0.d[0];
        clipRect.bottom = vLRScreen.field0_0x0.d[1];
        (*(code *)prc->__vtable->Rect)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Callback,&clipRect);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
        pEVar14 = (this->m_receivers).field0_0x0.m_list.m_pHead;
        prevVisibleList.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
        prevVisibleList.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
        if (pEVar14 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
          uVar12 = pEVar14->key;
          while( true ) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
            AddTail__9ENodeListUi(&prevVisibleList.field0_0x0,*(uint *)(uVar12 + 0x14) & 0xf);
                    /* end of inlined section */
            *(uint *)(uVar12 + 0x14) = *(uint *)(uVar12 + 0x14) & 0xfffffff0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
            pEVar14 = pEVar14->pNext;
                    /* end of inlined section */
            if (pEVar14 == (ERedBlackTreeNode *)0x0) break;
            uVar12 = pEVar14->key;
          }
        }
        pEVar5 = pLight->m_pSource;
        bVar2 = false;
        if (pEVar5 != (EInstance *)0x0) {
          bVar2 = *(int *)&pLight->m_sourceCastsShadows == 0;
        }
        uVar12 = 0;
        if (bVar2) {
          uVar12 = pEVar5->m_instanceFlags & 0xf;
          pEVar5->m_instanceFlags = pEVar5->m_instanceFlags & 0xfffffff0;
        }
        Draw__7ERLevelP3ERCUii((this->field0_0x0).m_pLevel,prc,0xc,0);
        pEVar7 = prevVisibleList.field0_0x0.m_l.m_pHead;
        if (bVar2) {
          pLight->m_pSource->m_instanceFlags = pLight->m_pSource->m_instanceFlags | uVar12;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
          pEVar14 = (this->m_receivers).field0_0x0.m_list.m_pHead;
        }
        else {
          pEVar14 = (this->m_receivers).field0_0x0.m_list.m_pHead;
        }
                    /* end of inlined section */
        for (; pEVar14 != (ERedBlackTreeNode *)0x0; pEVar14 = pEVar14->pNext) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
          *(uint *)(pEVar14->key + 0x14) = *(uint *)(pEVar14->key + 0x14) | pEVar7->data;
                    /* end of inlined section */
          pEVar7 = pEVar7->pNext;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        }
        (*(code *)prc->__vtable[1].SetRasterModes)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].DisableRasterModes,0,5);
        if (prevWindow != (EWindow *)0x0) {
          (*(code *)prevWindow->__vtable->OutputCoordinatesChanged)
                    ((int)&(prevWindow->m_mWindow).field0_0x0 +
                     (int)*(short *)&prevWindow->__vtable->InputCoordinatesChanged,uVar11);
        }
        pEVar4 = (_pGfx->field0_0x0).__vtable;
        (*(code *)pEVar4[6].ManagedShutdown)
                  ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar4[6].ManagedStartup,
                   uVar11);
        pEVar4 = (_pGfx->field0_0x0).__vtable;
        (*(code *)pEVar4[3].ManagedShutdown)
                  ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar4[3].ManagedStartup);
        (*(code *)pRS->__vtable[1].SetBackgroundColor)
                  ((int)&pRS->m_xsize + (int)*(short *)&pRS->__vtable[1].GetOutputRect,rsdata);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        RemoveAll__9ENodeList(&prevVisibleList.field0_0x0);
                    /* end of inlined section */
        ___13EPortalWindow(&rswin,2);
      }
    }
  }
  puVar15 = (uchar *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar27 = (this->m_vYDelta).field0_0x0.d[2];
  fVar19 = 1.0 / (float)(this->m_xRes + -1);
  fVar28 = 1.0 / (float)(this->m_yRes + -1);
  fVar25 = (this->m_vYDelta).field0_0x0.d[0];
  fVar23 = (this->m_vYDelta).field0_0x0.d[1];
  vDeltaPointOnPlane.field0_0x0.d[2] = (this->m_vPos).field0_0x0.d[2];
  vDeltaPointOnPlane.field0_0x0.d[0] = (this->m_vPos).field0_0x0.d[0];
  vLightPos.field0_0x0.d[2] = (this->m_vXDelta).field0_0x0.d[2] * fVar19;
  vDeltaPointOnPlane.field0_0x0.d[1] = (this->m_vPos).field0_0x0.d[1];
  vLightPos.field0_0x0.d[0] = (this->m_vXDelta).field0_0x0.d[0] * fVar19;
  vLightPos.field0_0x0.d[1] = (this->m_vXDelta).field0_0x0.d[1] * fVar19;
                    /* end of inlined section */
  iVar9 = 0;
  if (0 < this->m_yRes) {
    do {
      iVar13 = iVar9 + 1;
      if (rsdata != (uchar *)0x0) {
        puVar15 = rsdata + (this->m_yRes - iVar13) * this->m_xRes * 4 + 1;
      }
      pEVar3 = (pLight->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar3[5].Write)
                ((int)((pLight->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar3[5].Read,
                 &vDeltaPointOnPlane,&vLightPos,&this->m_vNormal,this->m_xRes,this->m_image[iVar9],
                 puVar15);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vDeltaPointOnPlane.field0_0x0.d[0] = vDeltaPointOnPlane.field0_0x0.d[0] + fVar25 * fVar28;
      vDeltaPointOnPlane.field0_0x0.d[1] = vDeltaPointOnPlane.field0_0x0.d[1] + fVar23 * fVar28;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vDeltaPointOnPlane.field0_0x0.d[2] = vDeltaPointOnPlane.field0_0x0.d[2] + fVar27 * fVar28;
                    /* end of inlined section */
      iVar9 = iVar13;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    } while (iVar13 < this->m_yRes);
  }
  if (pRS != (ERenderSurface *)0x0) {
    pEVar4 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar4[9].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 9),pRS);
  }
  _memmanFree__FPv(rsdata);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilightmap.h */
    gpTypeInfo_EILightmap =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_10EILightmap_m_typeInfo,New__10EILightmap,0,"EILightmap",
                    &_9EInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

EILightmap* EILightmap::New() {
  EILightmap__0_4024 *pEVar1;
  
  pEVar1 = (EILightmap__0_4024 *)__nw__10EILightmapUi(0x170);
  pEVar1 = __10EILightmap(pEVar1);
  return pEVar1;
}

void EILightmap::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EILightmap__0_4024 *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar1[1].GetTypeName
               ,3);
  }
  return;
}

ETypeInfo* EILightmap::GetTypeInfo() {
  return &_10EILightmap_m_typeInfo;
}

char* EILightmap::GetTypeName() {
  return _10EILightmap_m_typeInfo.m_name;
}

u32 EILightmap::GetTypeKey() {
  return _10EILightmap_m_typeInfo.m_key;
}

u16 EILightmap::GetTypeVersion() {
  return _10EILightmap_m_typeInfo.m_version;
}

u16 EILightmap::GetReadVersion() {
  return _10EILightmap_m_typeInfo.m_readVersion;
}

ETypeInfo* EILightmap::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_10EILightmap_m_typeInfo,New__10EILightmap,version,"EILightmap",
                      &_9EInstance_m_typeInfo);
  return pEVar1;
}

EILightmap* EILightmap::CreateCopy() {
  EILightmap__0_4024 *pEVar1;
  
  pEVar1 = (EILightmap__0_4024 *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EILightmap::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x170,0x32);
  return pvVar1;
}

void* EILightmap::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EILightmap::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x170,0x32);
  return;
}

void EILightmap::SetSupersampling(int nSupersample) {
  this->m_nSupersample = nSupersample;
  return;
}

void EILightmap::SetBlur(bool blur) {
  *(int *)&this->m_blur = (int)blur;
  return;
}

float EILightmap::GetArea() {
  return this->m_area;
}

EMat4& EILightmap::GetTextureMatrix() {
  return &this->m_mTexture;
}

void EILightmap::SetAllocAlignFn(FnAllocAlign fn) {
  _10EILightmap_m_pfnAllocAlign = fn;
  return;
}

void EILightmap::SetFreeFn(FnFree fn) {
  _10EILightmap_m_pfnFree = fn;
  return;
}

FnAllocAlign EILightmap::GetAllocAlignFn() {
  return _10EILightmap_m_pfnAllocAlign;
}

FnFree EILightmap::GetFreeFn() {
  return _10EILightmap_m_pfnFree;
}

int EILightmap::GetXRes() {
  return this->m_xRes;
}

int EILightmap::GetYRes() {
  return this->m_xRes;
}

EVec3& EILightmap::GetPos() {
  return &this->m_vPos;
}

EVec3& EILightmap::GetNormal() {
  return &this->m_vNormal;
}

EVec3& EILightmap::GetXDelta() {
  return &this->m_vXDelta;
}

EVec3& EILightmap::GetYDelta() {
  return &this->m_vYDelta;
}

void global constructors keyed to _quantk() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
