// STATUS: NOT STARTED

#include "e_shader.h"

__vtbl_ptr_type EShader virtual table[9] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EShader::~EShader,
		/* .__delta2 = */ 5576
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EShader::Select,
		/* .__delta2 = */ 5992
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EShader::SelectForShadowMask,
		/* .__delta2 = */ 6000
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EShader::Create,
		/* .__delta2 = */ 5640
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EShader::ChangeMaterial,
		/* .__delta2 = */ 5752
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EShader::Validate,
		/* .__delta2 = */ 5872
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EShader::SetAlternateShader,
		/* .__delta2 = */ 6120
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EShader* EShader::EShader() {
	EShaderDef *this;
	EVec4 *this;
	
  EShaderRenderPassDef *pEVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* inlined from c:/eor/src2/engine/shader/e_shaderdef.h */
                    /* end of inlined section */
  this->__vtable = (EShader__vtable *)_vt_7EShader;
                    /* inlined from c:/eor/src2/engine/shader/e_shaderdef.h */
  iVar2 = 1;
  pEVar1 = (this->m_sd).rp;
  do {
    pEVar1->pTexture = (ETexture *)0x0;
    iVar2 = iVar2 + -1;
    pEVar1->rasterModes = 8;
    pEVar1->flags = 0x18;
    pEVar1->blendA = '\0';
    pEVar1->blendB = '\x01';
    pEVar1->blendC = '\0';
    pEVar1->blendD = '\x01';
    pEVar1->blendFix = 0x80;
    pEVar1->combine = '\0';
    pEVar1->textureGen = '\0';
    pEVar1->alphaTestThreshold = 0.5;
    pEVar1 = pEVar1 + 1;
  } while (iVar2 != -1);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/shader/e_shaderdef.h */
  (this->m_sd).mat.vAmbientColor.field0_0x0.d[0] = 1.0;
  (this->m_sd).mat.vAmbientColor.field0_0x0.d[3] = 1.0;
  (this->m_sd).mat.vAmbientColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_sd).mat.vAmbientColor.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/shader/e_shaderdef.h */
  (this->m_sd).flags = 0x817;
  fVar3 = (this->m_sd).mat.vAmbientColor.field0_0x0.d[0];
  fVar4 = (this->m_sd).mat.vAmbientColor.field0_0x0.d[1];
  fVar5 = (this->m_sd).mat.vAmbientColor.field0_0x0.d[2];
  fVar6 = (this->m_sd).mat.vAmbientColor.field0_0x0.d[3];
  (this->m_sd).geometryModes = 8;
  (this->m_sd).mat.vDiffuseColor.field0_0x0.d[0] = fVar3;
  (this->m_sd).mat.vDiffuseColor.field0_0x0.d[1] = fVar4;
  (this->m_sd).mat.vDiffuseColor.field0_0x0.d[2] = fVar5;
  (this->m_sd).mat.vDiffuseColor.field0_0x0.d[3] = fVar6;
  (this->m_sd).nRenderPasses = '\x01';
                    /* end of inlined section */
  this->m_validsig = 0x900dbeef;
                    /* inlined from c:/eor/src2/engine/shader/e_shaderdef.h */
  (this->m_sd).sortMode = '\0';
  (this->m_sd).sortValue = 0;
                    /* end of inlined section */
  this->m_ORedRenderPassFlags = 0;
  this->m_pClippedOTDataHead = (EOrderTableData *)0x0;
  this->m_pUnclippedOTDataHead = (EOrderTableData *)0x0;
  this->m_pOrderTableNext = (EShader *)0x0;
  this->m_pAlternate = (EShader *)0x0;
  *(undefined4 *)&this->m_inOTList = 0;
  return this;
}

void EShader::~EShader(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EShader__vtable *)_vt_7EShader;
  this->m_validsig = 0xdeadbeef;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

bool EShader::Create(EShaderDef &sd) {
	u32 crp;
	
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ETexture *pEVar4;
  EShaderDef *pEVar5;
  EShaderDef *pEVar6;
  EShader *pEVar7;
  EShader *pEVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  
  pEVar8 = this;
  pEVar6 = sd;
  do {
    pEVar5 = pEVar6;
    pEVar7 = pEVar8;
    uVar2 = *(undefined8 *)pEVar5;
    uVar11 = *(undefined4 *)&pEVar5->nRenderPasses;
    iVar12 = pEVar5->sortValue;
    uVar3 = *(undefined8 *)pEVar5->rp;
    uVar13 = pEVar5->rp[0].flags;
    fVar14 = pEVar5->rp[0].alphaTestThreshold;
    (pEVar7->m_sd).geometryModes = (uint)uVar2;
    (pEVar7->m_sd).flags = (uint)((ulong)uVar2 >> 0x20);
    *(undefined4 *)&(pEVar7->m_sd).nRenderPasses = uVar11;
    (pEVar7->m_sd).sortValue = iVar12;
    (pEVar7->m_sd).rp[0].pTexture = (ETexture *)uVar3;
    (pEVar7->m_sd).rp[0].rasterModes = (uint)((ulong)uVar3 >> 0x20);
    (pEVar7->m_sd).rp[0].flags = uVar13;
    (pEVar7->m_sd).rp[0].alphaTestThreshold = fVar14;
    pEVar6 = (EShaderDef *)&pEVar5->rp[0].blendA;
    pEVar8 = (EShader *)&(pEVar7->m_sd).rp[0].blendA;
  } while (pEVar6 != (EShaderDef *)&sd->surfaceType);
  uVar2 = *(undefined8 *)pEVar6;
  pEVar4 = pEVar5->rp[1].pTexture;
  uVar13 = pEVar5->rp[1].rasterModes;
  *(int *)pEVar8 = (int)uVar2;
  *(int *)&(pEVar7->m_sd).rp[0].blendFix = (int)((ulong)uVar2 >> 0x20);
  (pEVar7->m_sd).rp[1].pTexture = pEVar4;
  (pEVar7->m_sd).rp[1].rasterModes = uVar13;
  uVar13 = (uint)(this->m_sd).nRenderPasses;
  uVar10 = 0;
  if (uVar13 != 0) {
    puVar9 = &sd->rp[0].flags;
    do {
      uVar1 = *puVar9;
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 6;
      this->m_ORedRenderPassFlags = this->m_ORedRenderPassFlags | uVar1;
    } while (uVar10 < uVar13);
  }
  return true;
}

void EShader::ChangeMaterial(EMaterial &mat) {
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (mat->vDiffuseColor).field0_0x0.d[1];
  fVar2 = (mat->vDiffuseColor).field0_0x0.d[2];
  fVar3 = (mat->vDiffuseColor).field0_0x0.d[3];
  (this->m_sd).mat.vDiffuseColor.field0_0x0.d[0] = (mat->vDiffuseColor).field0_0x0.d[0];
  (this->m_sd).mat.vDiffuseColor.field0_0x0.d[1] = fVar1;
  (this->m_sd).mat.vDiffuseColor.field0_0x0.d[2] = fVar2;
  (this->m_sd).mat.vDiffuseColor.field0_0x0.d[3] = fVar3;
  fVar1 = (mat->vAmbientColor).field0_0x0.d[1];
  fVar2 = (mat->vAmbientColor).field0_0x0.d[2];
  fVar3 = (mat->vAmbientColor).field0_0x0.d[3];
  (this->m_sd).mat.vAmbientColor.field0_0x0.d[0] = (mat->vAmbientColor).field0_0x0.d[0];
  (this->m_sd).mat.vAmbientColor.field0_0x0.d[1] = fVar1;
  (this->m_sd).mat.vAmbientColor.field0_0x0.d[2] = fVar2;
  (this->m_sd).mat.vAmbientColor.field0_0x0.d[3] = fVar3;
  return;
}

bool EShader::UsesMipMapping() {
	u32 crp;
	
  uint uVar1;
  uint uVar2;
  EShaderRenderPassDef *pEVar3;
  
  uVar1 = (uint)(this->m_sd).nRenderPasses;
  uVar2 = 0;
  if (uVar1 != 0) {
    pEVar3 = (this->m_sd).rp;
    do {
      uVar2 = uVar2 + 1;
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
      if ((pEVar3->pTexture != (ETexture *)0x0) &&
         (((pEVar3->pTexture->m_textureDef).flags & 0x20) != 0)) {
        return true;
      }
      pEVar3 = pEVar3 + 1;
    } while (uVar2 < uVar1);
  }
  return false;
}

int EShader::GetGeometryPassCount() {
  return (this->m_sd).nRenderPasses + 1 >> 1;
}

void EShader::Validate() {
	int i;
	
  byte bVar1;
  ETexture *pEVar2;
  EShaderRenderPassDef *pEVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((this->m_sd).nRenderPasses != '\0') {
    pEVar3 = (this->m_sd).rp;
    do {
      pEVar2 = pEVar3->pTexture;
      if (pEVar2 == (ETexture *)0x0) {
        bVar1 = (this->m_sd).nRenderPasses;
      }
      else {
        (*(code *)pEVar2->__vtable[1].Test1)
                  ((int)&(pEVar2->m_textureDef).pfnAllocAlign +
                   (int)*(short *)&pEVar2->__vtable[1].Create);
        bVar1 = (this->m_sd).nRenderPasses;
      }
      iVar4 = iVar4 + 1;
      pEVar3 = pEVar3 + 1;
    } while (iVar4 < (int)(uint)bVar1);
  }
  return;
}

void EShader::Select(ERC *prc, int geometryPass) {
  return;
}

void EShader::SelectForShadowMask(ERC *prc) {
  return;
}

EMaterial* EShader::GetMaterial() {
  return &(this->m_sd).mat;
}

void EShader::SetSurfaceProperty(u32 property) {
  (this->m_sd).flags = (this->m_sd).flags | property;
  return;
}

void EShader::ClearSurfaceProperty(u32 property) {
  (this->m_sd).flags = (this->m_sd).flags & ~property;
  return;
}

bool EShader::IsSurface(u32 property) {
  return ((this->m_sd).flags & property) != 0;
}

u32 EShader::GetSurfaceProperties() {
  return (this->m_sd).flags;
}

ESurfaceType EShader::GetSurfaceType() {
  return (this->m_sd).surfaceType;
}

void EShader::SetSurfaceType(ESurfaceType surfaceType) {
  (this->m_sd).surfaceType = surfaceType;
  return;
}

ETexture* EShader::GetTexture(u8 nRenderPassIndex) {
  return (this->m_sd).rp[(int)(char)nRenderPassIndex & 0xff].pTexture;
}

void EShader::SetAlternateShader(EShader *pAlternate) {
  this->m_pAlternate = pAlternate;
  return;
}

EShaderDef* EShader::GetShaderDef() {
  return &this->m_sd;
}
