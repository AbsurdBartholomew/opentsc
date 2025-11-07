// STATUS: NOT STARTED

#include "e_ps2shader.h"

__vtbl_ptr_type EPs2Shader virtual table[9] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Shader::~EPs2Shader,
		/* .__delta2 = */ -12824
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Shader::Select,
		/* .__delta2 = */ -10888
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Shader::SelectForShadowMask,
		/* .__delta2 = */ -9824
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Shader::Create,
		/* .__delta2 = */ -12408
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Shader::ChangeMaterial,
		/* .__delta2 = */ -11768
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

EPs2Shader* EPs2Shader::EPs2Shader() {
	int i;
	
  void **ppvVar1;
  int iVar2;
  
  __7EShader(&this->field0_0x0);
  this->m_mipMapVerts = (EGEVert *)0x0;
  this->m_pSelectDL = (EDL *)0x0;
  (this->field0_0x0).__vtable = (EShader__vtable *)_vt_10EPs2Shader;
  ppvVar1 = this->m_pTextureSelectDLs;
  this->m_txtPatches = (EPs2TexturePatch *)0x0;
  iVar2 = 1;
  do {
    ppvVar1[2] = (void *)0x0;
    iVar2 = iVar2 + -1;
    *ppvVar1 = (void *)0x0;
    ppvVar1 = ppvVar1 + 1;
  } while (-1 < iVar2);
  return this;
}

void EPs2Shader::~EPs2Shader(int __in_chrg) {
  EGEVert *pAddress;
  
  pAddress = this->m_mipMapVerts;
  (this->field0_0x0).__vtable = (EShader__vtable *)_vt_10EPs2Shader;
  _memmanFree__FPv(pAddress);
  ___7EShader(&this->field0_0x0,__in_chrg);
  return;
}

void EPs2Shader::AboutToDestroy() {
	int i;
	EPs2Texture *pTexture;
	
  EPs2Texture *this_00;
  EShaderRenderPassDef *pEVar1;
  void **ppvVar2;
  int renderPass;
  
  renderPass = 0;
  ppvVar2 = this->m_pTextureSelectDLs;
  pEVar1 = (this->field0_0x0).m_sd.rp;
  DestroySelectDL__10EPs2Shader(this);
  do {
    this_00 = (EPs2Texture *)pEVar1->pTexture;
    if (this_00 != (EPs2Texture *)0x0) {
      _memmanFree__FPv(*ppvVar2);
      RemoveParentShader__11EPs2TextureP10EPs2Shaderi(this_00,this,renderPass);
    }
    renderPass = renderPass + 1;
    ppvVar2 = ppvVar2 + 1;
    pEVar1 = pEVar1 + 1;
  } while (renderPass < 2);
  _memmanFree__FPv(this->m_txtPatches);
  this->m_txtPatches = (EPs2TexturePatch *)0x0;
  return;
}

void EPs2Shader::DestroySelectDL() {
  EGlobalManagerClient__vtable *pEVar1;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[7].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),this->m_pSelectDL);
  this->m_pSelectDL = (EDL *)0x0;
  return;
}

void EPs2Shader::Init() {
  return;
}

void EPs2Shader::SetMipMapVerts(EGEVert *verts) {
  bool bVar1;
  EGEVert *pEVar2;
  
  bVar1 = UsesMipMapping__7EShader(&this->field0_0x0);
  if (bVar1) {
    if (this->m_mipMapVerts == (EGEVert *)0x0) {
      pEVar2 = (EGEVert *)_memmanAlloc__FUiUi(0xf0,4);
      this->m_mipMapVerts = pEVar2;
      if (pEVar2 == (EGEVert *)0x0) {
        return;
      }
      pEVar2 = this->m_mipMapVerts;
    }
    else {
      pEVar2 = this->m_mipMapVerts;
    }
    memcpy(pEVar2,verts,0xf0);
  }
  return;
}

bool EPs2Shader::Create(EShaderDef &sd) {
	ERC *prc;
	u32 crp;
	int i;
	EPs2Texture *pTexture;
	
  uchar uVar1;
  EPs2Texture *this_00;
  EGlobalManagerClient__vtable *pEVar2;
  bool bVar3;
  EPs2TexturePatch *pEVar4;
  int iVar5;
  void *pDest;
  EDL *pEVar6;
  undefined8 uVar7;
  EShaderRenderPassDef *pEVar8;
  uint uVar9;
  void **ppvVar10;
  int *piVar11;
  int curPass;
  EShaderRenderPassDef *pEVar12;
  int iVar13;
  
  Deallocate__10EPs2Shader(this);
  bVar3 = Create__7EShaderR10EShaderDef(&this->field0_0x0,sd);
  if (bVar3) {
    uVar1 = (this->field0_0x0).m_sd.nRenderPasses;
    uVar9 = 0;
    (this->field0_0x0).m_sd.geometryModes = (this->field0_0x0).m_sd.geometryModes & 0xffffde1e;
    pEVar12 = (this->field0_0x0).m_sd.rp;
    piVar11 = this->m_textureSelectDLSize;
    ppvVar10 = this->m_pTextureSelectDLs;
    pEVar8 = pEVar12;
    if (uVar1 != '\0') {
      do {
        if (pEVar8->pTexture == (ETexture *)0x0) {
          pEVar8->pTexture = (ETexture *)0x0;
        }
        uVar9 = uVar9 + 1;
        pEVar8 = pEVar8 + 1;
      } while (uVar9 < (this->field0_0x0).m_sd.nRenderPasses);
    }
    pEVar4 = (EPs2TexturePatch *)_memmanAlloc__FUiUi(0x20,0x10);
    this->m_txtPatches = pEVar4;
    pEVar4->pThis = pEVar4;
    curPass = 0;
    iVar13 = 0;
    this->m_txtPatches[1].pThis = this->m_txtPatches + 1;
    this->m_txtPatches->nLocks = 0;
    this->m_txtPatches[1].nLocks = 0;
    do {
      this_00 = (EPs2Texture *)pEVar12->pTexture;
      if (this_00 == (EPs2Texture *)0x0) {
        *ppvVar10 = (void *)0x0;
        *piVar11 = 0;
      }
      else {
        iVar5 = (ushort)this_00->m_dlSize + 2;
        uVar9 = iVar5 * 0x10;
        *piVar11 = iVar5;
        pDest = _memmanAlloc__FUiUi(uVar9,0x10);
        *ppvVar10 = pDest;
        memcpy(pDest,*(void **)((int)this_00->m_pDlists + iVar13),
               (uint)(ushort)this_00->m_dlSize << 4);
        PatchCombineAndBlendModes__10EPs2ShaderPvi(this,*ppvVar10,curPass);
        PatchAlphaAndZModes__10EPs2ShaderPvi(this,*ppvVar10,curPass);
        SyncDCache(*ppvVar10,(int)*ppvVar10 + (uVar9 - 1));
        AddParentShader__11EPs2TextureP10EPs2Shaderi(this_00,this,curPass);
      }
      curPass = curPass + 1;
      piVar11 = piVar11 + 1;
      iVar13 = iVar13 + 4;
      ppvVar10 = ppvVar10 + 1;
      pEVar12 = pEVar12 + 1;
    } while (curPass < 2);
    SyncDCache(this->m_txtPatches,(undefined *)((int)&this->m_txtPatches[1].nLocks + 3));
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    uVar7 = (*(code *)pEVar2[6].EGlobalManagerClient)
                      ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 6),1);
    BuildSelectDL__10EPs2ShaderP3ERCi(this,(ERC *)uVar7,0);
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    pEVar6 = (EDL *)(*(code *)pEVar2[6].ManagedShutdown)
                              ((int)&(_pGfx->field0_0x0).__vtable +
                               (int)*(short *)&pEVar2[6].ManagedStartup,uVar7);
    this->m_pSelectDL = pEVar6;
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

void EPs2Shader::Deallocate() {
  AboutToDestroy__10EPs2Shader(this);
  _memmanFree__FPv(this->m_mipMapVerts);
  this->m_mipMapVerts = (EGEVert *)0x0;
  return;
}

void EPs2Shader::TextureChanged() {
  EShader__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].EShader)
            ((int)(this->field0_0x0).m_sd.rp + *(short *)(pEVar1 + 1) + -0x10,this);
  return;
}

void EPs2Shader::ChangeMaterial(EMaterial &mat) {
  ChangeMaterial__7EShaderR9EMaterial(&this->field0_0x0,mat);
  return;
}

void EPs2Shader::SelectTexture(ERC *pRC, ETexture *pTexture, int renderPass) {
  TextureDone__6EPs2RCi((EPs2RC *)pRC,renderPass);
  TextureWait__6EPs2RCP8ETextureP16EPs2TexturePatchi
            ((EPs2RC *)pRC,pTexture,this->m_txtPatches + renderPass,renderPass);
  if ((pTexture->m_textureDef).mipMapLevels != 0) {
    FlushDmaFifo__6EPs2RC((EPs2RC *)pRC);
  }
  ShaderDL__6EPs2RCPvUs
            ((EPs2RC *)pRC,this->m_pTextureSelectDLs[renderPass],
             *(short *)(this->m_textureSelectDLSize + renderPass));
  return;
}

void EPs2Shader::SetupRenderPass(ERC *pRC, EShaderRenderPassDef *pPass, int renderPass) {
	EPs2Texture *pTexture;
	u32 rasterModes;
	EGraphics *this;
	
  ETexture *pTexture;
  ERC__vtable *pEVar1;
  uint uVar2;
  undefined8 uVar3;
  
  pTexture = pPass->pTexture;
  if (pTexture == (ETexture *)0x0) {
    (*(code *)pRC->__vtable->Init)((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->LoadMPG,0,0);
    (*(code *)pRC->__vtable[1].DisableGeometryModes)
              ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable[1].EnableGeometryModes,
               (int)pPass->flags >> 3 & 1,2,((int)pPass->flags >> 4 ^ 1U) & 1,renderPass);
    (*(code *)pRC->__vtable[1].EnableRasterModes)
              (pPass->alphaTestThreshold,
               (int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable[1].SetGeometryModes,
               (int)pPass->flags >> 2 & 1,5,renderPass);
  }
  else {
    SelectTexture__10EPs2ShaderP3ERCP8ETexturei(this,pRC,pTexture,renderPass);
    if (pPass->textureGen < 3) {
      if (pPass->textureGen != 0) {
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
        (*(code *)pRC->__vtable->MovieFrame)
                  ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->ZClear,&_pGfx->m_mNormalMap,4,1
                   ,0,renderPass);
        goto LAB_002fd3ec;
      }
      pEVar1 = pRC->__vtable;
    }
    else {
      pEVar1 = pRC->__vtable;
    }
    uVar3 = 0x100;
    if (renderPass == 0) {
      uVar3 = 0x80;
    }
    (*(code *)pEVar1->EndCommand)((int)&pRC->m_pdl + (int)*(short *)&pEVar1->BeginCommand,uVar3);
  }
LAB_002fd3ec:
  if (pTexture == (ETexture *)0x0) {
    uVar2 = pPass->rasterModes & 0xffffffef;
  }
  else {
    uVar2 = pPass->rasterModes | 0x10;
  }
  (*(code *)pRC->__vtable[1].TriStrip)
            ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable[1].TriStrip,uVar2,renderPass);
  return;
}

void EPs2Shader::BuildSelectDL(ERC *prc, int geometryPass) {
	unsigned int secondPass;
	EShaderRenderPassDef *passes;
	u32 geometryModes;
	int nPasses;
	
  ERC__vtable *pEVar1;
  int iVar2;
  uint uVar3;
  EShaderRenderPassDef *pPass;
  
  pPass = (this->field0_0x0).m_sd.rp + geometryPass * 2;
  uVar3 = (this->field0_0x0).m_sd.geometryModes;
  if ((geometryPass == 0) && ((uVar3 & 8) != 0)) {
    (*(code *)prc->__vtable[1].SpriteList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].PointList,
               &(this->field0_0x0).m_sd.mat);
  }
  iVar2 = 1;
  if (geometryPass * 2 + 1U < (uint)(this->field0_0x0).m_sd.nRenderPasses) {
    iVar2 = 2;
  }
  SetupRenderPass__10EPs2ShaderP3ERCP20EShaderRenderPassDefi(this,prc,pPass,0);
  if (iVar2 == 2) {
    SetupRenderPass__10EPs2ShaderP3ERCP20EShaderRenderPassDefi(this,prc,pPass + 1,1);
    uVar3 = uVar3 | 0x20;
    pEVar1 = prc->__vtable;
  }
  else {
    pEVar1 = prc->__vtable;
  }
  (*(code *)pEVar1->EndCommand)
            ((int)&prc->m_pdl + (int)*(short *)&pEVar1->BeginCommand,0xffffffffffffd83e);
  (*(code *)prc->__vtable->NewEntry)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,uVar3);
  if (this->m_mipMapVerts != (EGEVert *)0x0) {
    (*(code *)prc->__vtable[1].ProjectionMatrix)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ViewMatrix,this->m_mipMapVerts,1,
               0);
  }
  return;
}

void EPs2Shader::Select(ERC *prc, int geometryPass) {
  EShader *pEVar1;
  
  pEVar1 = (this->field0_0x0).m_pAlternate;
  if (pEVar1 == (EShader *)0x0) {
    if (geometryPass == 0) {
      (*(code *)prc->__vtable->DisableRasterModes)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->EnableRasterModes,
                 this->m_pSelectDL);
    }
    else {
      BuildSelectDL__10EPs2ShaderP3ERCi(this,prc,geometryPass);
    }
  }
  else {
    (*(code *)pEVar1->__vtable->ChangeMaterial)
              ((int)(pEVar1->m_sd).rp + *(short *)&pEVar1->__vtable->Create + -0x10);
  }
  return;
}

void EPs2Shader::PatchAlphaAndZModes(void *pDL, int curPass) {
	EShaderRenderPassDef *pPass;
	int dlSize;
	u64 *pRegs;
	int zWrite;
	int zTest;
	float alphaThreshold;
	int alphaTest;
	
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  float fVar4;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = this->m_textureSelectDLSize[curPass];
  *(ulong *)pDL = *pDL & 0xffffffffffff8000 | (long)(iVar1 + -1) & 0x7fffU;
  puVar3 = (ulong *)((int)pDL + (iVar1 + -3) * 0x10);
  puVar3[2] = 0;
  *puVar3 = 0;
  uVar2 = (((long)((int)(this->field0_0x0).m_sd.rp[curPass].flags >> 4) ^ 1U) & 1) << 0x20;
  puVar3[2] = uVar2;
  uVar2 = uVar2 | ZEXT48(_ps2gfx.m_pLastZbuffer) & 0x1ff;
  puVar3[2] = uVar2;
  puVar3[2] = uVar2 | ((long)_ps2gfx.m_lastZbufFormat & 0xfU) << 0x18;
  *puVar3 = ((long)((int)(this->field0_0x0).m_sd.rp[curPass].flags >> 3) & 1U) << 0x10 | 0x40000;
  fVar4 = (float)this->m_pTextureSelectDLs[curPass * 6 + -0x20] * 64.0;
  if (0.0 <= fVar4) {
    fVar4 = (float)((int)fVar4 * (uint)(fVar4 < 255.0) | (uint)(fVar4 >= 255.0) * 0x437f0000);
  }
  else {
    fVar4 = 0.0;
  }
  *puVar3 = *puVar3 & 0xffffffffffff8000 | ((long)(int)fVar4 & 0xffU) << 4 | 10 |
            (long)((int)(this->field0_0x0).m_sd.rp[curPass].flags >> 2) & 1U;
  puVar3[5] = 0x60;
  puVar3[1] = (long)curPass + 0x47;
  puVar3[3] = (long)curPass + 0x4e;
  puVar3[4] = 0;
  return;
}

void EPs2Shader::PatchCombineAndBlendModes(void *pDL, int curPass) {
	EShaderRenderPassDef *pPass;
	
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar1 = curPass * 0x18;
  *(ulong *)((int)pDL + 0x20) =
       *(ulong *)((int)pDL + 0x20) & 0xffffffe7ffffffff |
       ((ulong)*(byte *)((int)this->m_pTextureSelectDLs + iVar1 + -0x77) & 3) << 0x23;
  UpdatePatch__10EPs2ShaderP9sceGsTex0i(this,(sceGsTex0__92_1018 *)((int)pDL + 0x20),curPass);
  uVar5 = *(ulong *)((int)pDL + 0x50);
  uVar2 = (ulong)*(byte *)(this->m_pTextureSelectDLs + curPass * 6 + -0x1f) & 3;
  *(ulong *)((int)pDL + 0x50) = uVar5 & 0xfffffffffffffffc | uVar2;
  uVar3 = ((ulong)*(byte *)((int)this->m_pTextureSelectDLs + iVar1 + -0x7b) & 3) << 2;
  *(ulong *)((int)pDL + 0x50) = uVar5 & 0xfffffffffffffff0 | uVar2 | uVar3;
  uVar4 = ((ulong)*(byte *)((int)this->m_pTextureSelectDLs + iVar1 + -0x7a) & 3) << 4;
  *(ulong *)((int)pDL + 0x50) = uVar5 & 0xffffffffffffffc0 | uVar2 | uVar3 | uVar4;
  *(ulong *)((int)pDL + 0x50) =
       uVar5 & 0xffffffffffffff00 | uVar2 | uVar3 | uVar4 |
       ((ulong)*(byte *)((int)this->m_pTextureSelectDLs + iVar1 + -0x79) & 3) << 6;
  *(undefined *)((int)pDL + 0x54) = *(undefined *)(this->m_pTextureSelectDLs + curPass * 6 + -0x1e);
  return;
}

void EPs2Shader::DisplayListCallback(u32 param32, u16 param16, u8 param8) {
	EShaderRenderPassDef *passes;
	int cPass;
	EPs2Texture *pTexture;
	u64 *pRegs;
	
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int renderPass;
  long lVar8;
  
  lVar8 = 0;
  piVar2 = (int *)(param32 + ((int)param16 & 0xffffU) * 0x18 + 0x10);
  if (((long)(char)param8 & 0xffU) != 0) {
    iVar3 = *piVar2;
    while( true ) {
      renderPass = (int)lVar8;
      iVar3 = *(int *)(iVar3 + renderPass * 4 + 0x48);
      lVar8 = (long)(renderPass + 1);
      *(ulong *)(iVar3 + 0x20) =
           *(ulong *)(iVar3 + 0x20) & 0xffffffe7ffffffff |
           ((ulong)*(byte *)((int)piVar2 + 0x15) & 3) << 0x23;
      UpdatePatch__10EPs2ShaderP9sceGsTex0i
                ((EPs2Shader *)param32,(sceGsTex0__92_1018 *)(iVar3 + 0x20),renderPass);
      uVar7 = *(ulong *)(iVar3 + 0x50);
      uVar4 = (ulong)*(byte *)(piVar2 + 4) & 3;
      *(ulong *)(iVar3 + 0x50) = uVar7 & 0xfffffffffffffffc | uVar4;
      uVar5 = ((ulong)*(byte *)((int)piVar2 + 0x11) & 3) << 2;
      *(ulong *)(iVar3 + 0x50) = uVar7 & 0xfffffffffffffff0 | uVar4 | uVar5;
      uVar6 = ((ulong)*(byte *)((int)piVar2 + 0x12) & 3) << 4;
      *(ulong *)(iVar3 + 0x50) = uVar7 & 0xffffffffffffffc0 | uVar4 | uVar5 | uVar6;
      *(ulong *)(iVar3 + 0x50) =
           uVar7 & 0xffffffffffffff00 | uVar4 | uVar5 | uVar6 |
           ((ulong)*(byte *)((int)piVar2 + 0x13) & 3) << 6;
      piVar1 = piVar2 + 5;
      piVar2 = piVar2 + 6;
      *(undefined *)(iVar3 + 0x54) = *(undefined *)piVar1;
      SyncDCache(iVar3 + 0x10,iVar3 + 0x57);
      if ((long)((long)(char)param8 & 0xffU) <= lVar8) break;
      iVar3 = *piVar2;
    }
  }
  return;
}

void EPs2Shader::SelectForShadowMask(ERC *prc) {
	ETexture *pTexture1;
	EShaderRenderPassDef *pPass;
	
  ETexture *pEVar1;
  EGEVert *pEVar2;
  
  (*(code *)prc->__vtable[1].DisableGeometryModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,0,2,0,0);
  (*(code *)prc->__vtable[1].EnableRasterModes)
            (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,0,5,0);
  (*(code *)prc->__vtable->EndCommand)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,0xffffffffffffdfbe);
  (*(code *)prc->__vtable->NewEntry)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,8);
  (*(code *)prc->__vtable[1].TriStrip)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriStrip,0xc0,0);
  (*(code *)prc->__vtable[1].LineList)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0,0);
  pEVar1 = (this->field0_0x0).m_sd.rp[0].pTexture;
  if (pEVar1 == (ETexture *)0x0) {
    (*(code *)prc->__vtable[1].Callback)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Material,
               (this->field0_0x0).m_sd.rp[0].combine,0);
    (*(code *)prc->__vtable[1].RectList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Rect,
               (this->field0_0x0).m_sd.rp[0].blendA,(this->field0_0x0).m_sd.rp[0].blendB,
               (this->field0_0x0).m_sd.rp[0].blendC,(this->field0_0x0).m_sd.rp[0].blendD,
               (this->field0_0x0).m_sd.rp[0].blendFix,0);
    pEVar2 = this->m_mipMapVerts;
  }
  else {
    (*(code *)prc->__vtable[1].ParticleListRot)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ParticleList,0x2fdb50,this,0,0);
    (*(code *)prc->__vtable->Init)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->LoadMPG,pEVar1,0);
    pEVar2 = this->m_mipMapVerts;
  }
  if (pEVar2 != (EGEVert *)0x0) {
    (*(code *)prc->__vtable[1].ProjectionMatrix)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ViewMatrix,pEVar2,1,0);
  }
  return;
}

void EPs2Shader::DisplayListCallbackShadowMask(u32 param32, u16 param16, u8 param8) {
	EPs2Texture *pTexture;
	u64 *pRegs;
	
  EPs2Texture *this;
  void *pvVar1;
  
  this = *(EPs2Texture **)(param32 + 0x10);
  pvVar1 = this->m_pDlists[0];
  *(ulong *)((int)pvVar1 + 0x20) = *(ulong *)((int)pvVar1 + 0x20) & 0xffffffe7ffffffff;
  UpdatePatch__11EPs2TextureP9sceGsTex0(this,(sceGsTex0__258_939 *)((int)pvVar1 + 0x20));
  *(ulong *)((int)pvVar1 + 0x50) = *(ulong *)((int)pvVar1 + 0x50) & 0xffffffffffffff00 | 0x44;
  *(undefined *)((int)pvVar1 + 0x54) = 0;
  SyncDCache((int)pvVar1 + 0x10,(int)pvVar1 + 0x57);
  return;
}

void EPs2Shader::UpdatePatch(sceGsTex0 *pTex0, int renderPass) {
	EPs2TexturePatch *pPatch;
	
  EPs2TexturePatch *pEVar1;
  
  pEVar1 = this->m_txtPatches;
  pEVar1[renderPass].tex0 = (sceGsTex0__208_2889)*pTex0;
  FlushPatch__10EPs2ShaderP16EPs2TexturePatch(this,pEVar1 + renderPass);
  return;
}

void EPs2Shader::UpdateLocks(int newLocks, int renderPass) {
	EPs2TexturePatch *pPatch;
	
  EPs2TexturePatch *pEVar1;
  
  pEVar1 = this->m_txtPatches;
  pEVar1[renderPass].nLocks = newLocks;
  FlushPatch__10EPs2ShaderP16EPs2TexturePatch(this,pEVar1 + renderPass);
  return;
}

void EPs2Shader::FlushPatch(EPs2TexturePatch *pPatch) {
	EPs2TexturePatch *pUncached;
	
  *(sceGsTex0__208_2889 *)((uint)pPatch | 0x20000000) = pPatch->tex0;
  ((sceGsTex0__208_2889 *)((uint)pPatch | 0x20000000))[1] = *(sceGsTex0__208_2889 *)&pPatch->pThis;
  return;
}

void* EPs2Shader::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,0x10);
  return pvVar1;
}
