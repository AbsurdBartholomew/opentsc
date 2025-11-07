// STATUS: NOT STARTED

#include "charedsim.h"

void ECharedSim::Init(bool bMale, bool bAdult, ECharedSkin *pSkin) {
	ETextureDef td;
	ETexture *pPalTexture;
	EShaderDef sd;
	int i;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	
  undefined *puVar1;
  EGlobalManagerClient__vtable *pEVar2;
  ulong *puVar3;
  ERModel **ppEVar4;
  uint uVar5;
  ERShader *pEVar6;
  EShaderRenderPassDef *pEVar7;
  EShader *pEVar8;
  ETexture *pEVar9;
  int iVar10;
  uint uVar11;
  Table *pTVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ETextureDef td;
  EShaderDef sd;
  
  iVar10 = 4;
  pEVar7 = sd.rp;
  *(undefined4 *)&this->m_bPlayAllAnims = 1;
  *(undefined4 *)&this->m_bInStoryMode = 0;
  ppEVar4 = this->m_pModels + 4;
  do {
    *ppEVar4 = (ERModel *)0x0;
    iVar10 = iVar10 + -1;
    ppEVar4 = ppEVar4 + -1;
  } while (-1 < iVar10);
  this->m_customSkin = pSkin;
  ResetColors__11ECharedSkin(pSkin);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  *(int *)&this->m_character = (int)bMale;
  *(int *)&(this->m_character).m_bAdult = (int)bAdult;
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar5);
  *puVar3 = *puVar3 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_vPos & 7;
  puVar3 = (ulong *)((int)&this->m_vPos - uVar5);
  *puVar3 = 0L << uVar5 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_vPos).field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vScale).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar5);
  *puVar3 = *puVar3 & -1L << (uVar5 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_vScale & 7;
  puVar3 = (ulong *)((int)&this->m_vScale - uVar5);
  *puVar3 = 0x3f8000003f800000 << uVar5 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_vScale).field0_0x0.d[2] = 1.0;
  (this->m_character).m_nShoesColor = '\x01';
  (this->m_character).m_nUpperBodyIndex = '\0';
  (this->m_character).m_nLowerBodyIndex = '\0';
  (this->m_character).m_nShoesIndex = '\0';
  (this->m_character).m_nFacialHairIndex = '\0';
  (this->m_character).m_nHairHatIndex = '\0';
  (this->m_character).m_nGlassesIndex = '\0';
  (this->m_character).m_nUpperBodyColor = '\x01';
  (this->m_character).m_nLowerBodyColor = '\x01';
  (this->m_character).m_nFaceIndex = '\0';
  (this->m_character).m_nFacialHairColor = '\0';
  (this->m_character).m_nHairHatColor = '\0';
  (this->m_character).m_nSkinColor = '\0';
  this->m_pCreateSimData = (ERQuickdata *)0x0;
  this->m_pBodyData = (Table *)0x0;
  if (bAdult) {
    uVar5 = 0x4356d2d4;
    uVar11 = 0xda5f836e;
    uVar13 = 0xad58b3f8;
    uVar14 = 0x333c265b;
    uVar15 = 0x443b16cd;
    uVar16 = 0xaa3577e1;
    uVar17 = 0x3a8a6a70;
    uVar18 = 0x4d8d5ae6;
    uVar19 = 0x75269f3e;
  }
  else {
    uVar5 = 0x6da0fa52;
    uVar11 = 0xf4a9abe8;
    uVar13 = 0x83ae9b7e;
    uVar14 = 0x1dca0edd;
    uVar15 = 0x6acd3e4b;
    uVar16 = 0xf3c46ff1;
    uVar17 = 0x84c35f67;
    uVar18 = 0x147c42f6;
    uVar19 = 0x637b7260;
  }
  this->m_nIdleAnimationID[0] = uVar5;
  this->m_nIdleAnimationID[1] = uVar11;
  this->m_nIdleAnimationID[2] = uVar13;
  this->m_nIdleAnimationID[3] = uVar14;
  this->m_nIdleAnimationID[4] = uVar15;
  this->m_nIdleAnimationID[5] = uVar16;
  this->m_nIdleAnimationID[6] = uVar17;
  this->m_nIdleAnimationID[7] = uVar18;
  this->m_nIdleAnimationID[8] = uVar19;
  if (bMale) {
    if (bAdult) {
      InitMaleAdult__10ECharedSim(this);
      pTVar12 = this->m_pBodyData;
    }
    else {
      InitMaleChild__10ECharedSim(this);
      pTVar12 = this->m_pBodyData;
    }
  }
  else if (bAdult) {
    InitFemaleAdult__10ECharedSim(this);
    pTVar12 = this->m_pBodyData;
  }
  else {
    InitFemaleChild__10ECharedSim(this);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pTVar12 = this->m_pBodyData;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi(this,'\x05',((pTVar12->shoe).pData)->model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi(this->m_customSkin,'\x06',((this->m_pBodyData->shoe).pData)->layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi(this,'\x04',((this->m_pBodyData->lowerBody).pData)->model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\x04',((this->m_pBodyData->lowerBody).pData)->layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\x05',((this->m_pBodyData->lowerBody).pData)->layer2);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi(this,'\x03',((this->m_pBodyData->upperBody).pData)->model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\x02',((this->m_pBodyData->upperBody).pData)->layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\x03',((this->m_pBodyData->upperBody).pData)->layer2);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi(this,'\x01',((this->m_pBodyData->face).pData)->model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi(this->m_customSkin,'\a',((this->m_pBodyData->face).pData)->layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi(this,'\x02',((this->m_pBodyData->hair).pData)->model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi(this->m_customSkin,'\n',((this->m_pBodyData->hair).pData)->layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi(this->m_customSkin,'\v',((this->m_pBodyData->hair).pData)->layer2);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\t',((this->m_pBodyData->facialHair).pData)->layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\r',((this->m_pBodyData->facialHair).pData)->layer2);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\f',((this->m_pBodyData->facialHair).pData)->layer3);
  Update__11ECharedSkin(this->m_customSkin);
  this->m_pGlassesModel = (ERModel *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bUsePalettizedSkin = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar6 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
  this->m_pBlankShdr = pEVar6;
  pEVar6 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf46aedcb,(EFile *)0x0,0);
  td.pfnAllocAlign = (undefined1 *)0x0;
  td.pfnFree = (undefined1 *)0x0;
  td.flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
  this->m_pShadow = pEVar6;
  td.paletteFormat = '\x02';
  td.bitsPerPaletteEntry = ' ';
  td.bitsPerImagePixel = '\b';
  td.paletteSize = 0x100;
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.mipMapLevels = 0;
  td.mipMapShift = 0.0;
                    /* end of inlined section */
  td.ysize = 0x100;
  td.xsize = 0x100;
  td.imageFormat = '\0';
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  sd.rp[0].pTexture =
       (ETexture *)
       (*(code *)pEVar2[7].ManagedShutdown)
                 ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[7].ManagedStartup,&td)
  ;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
  iVar10 = 1;
  do {
    pEVar7->pTexture = (ETexture *)0x0;
    iVar10 = iVar10 + -1;
    pEVar7->rasterModes = 8;
    pEVar7->flags = 0x18;
    pEVar7->blendA = '\0';
    pEVar7->blendB = '\x01';
    pEVar7->blendC = '\0';
    pEVar7->blendD = '\x01';
    pEVar7->blendFix = 0x80;
    pEVar7->combine = '\0';
    pEVar7->textureGen = '\0';
    pEVar7->alphaTestThreshold = 0.5;
    pEVar7 = pEVar7 + 1;
  } while (iVar10 != -1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
  sd.mat.vAmbientColor.field0_0x0.d[0] = 1.0;
  sd.mat.vAmbientColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[1] = 1.0;
  sd.mat.vAmbientColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[0] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[1] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[3] = 1.0;
  sd.nRenderPasses = '\x01';
  sd.flags = 0x817;
  sd.geometryModes = 8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
  sd.sortMode = '\0';
  sd.sortValue = 0;
                    /* end of inlined section */
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  pEVar8 = (EShader *)
           (*(code *)pEVar2[0xb].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 0xb),&sd);
  this->m_pPaletteSkin = pEVar8;
  td.flags = td.flags | 3;
  td.xsize = 0x20;
  td.ysize = 0x20;
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  pEVar9 = (ETexture *)
           (*(code *)pEVar2[7].ManagedShutdown)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[7].ManagedStartup,
                      &td);
  this->m_pFaceImage = pEVar9;
  StoreOldIndexes__10ECharedSim(this);
  return;
}

void ECharedSim::Init(ENeighborhoodCustomChar *pDescription, ECharedSkin *pSkin) {
	ETextureDef td;
	ETexture *pPalTexture;
	EShaderDef sd;
	int i;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	
  undefined *puVar1;
  char *pcVar2;
  EGlobalManagerClient__vtable *pEVar3;
  ulong *puVar4;
  char *pcVar5;
  ERModel **ppEVar6;
  uint uVar7;
  ERShader *pEVar8;
  EShaderRenderPassDef *pEVar9;
  EShader *pEVar10;
  ETexture *pEVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  Table *pTVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ETextureDef td;
  EShaderDef sd;
  
  uVar17 = (ulong)(int)pSkin;
  iVar13 = 4;
  pEVar9 = sd.rp;
  *(undefined4 *)&this->m_bPlayAllAnims = 1;
  *(undefined4 *)&this->m_bInStoryMode = 0;
  ppEVar6 = this->m_pModels + 4;
  do {
    *ppEVar6 = (ERModel *)0x0;
    iVar13 = iVar13 + -1;
    ppEVar6 = ppEVar6 + -1;
  } while (-1 < iVar13);
  this->m_customSkin = pSkin;
  ResetColors__11ECharedSkin(pSkin);
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar7 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar7);
  *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | 0UL >> (7 - uVar7) * 8;
  uVar7 = (uint)&this->m_vPos & 7;
  puVar4 = (ulong *)((int)&this->m_vPos - uVar7);
  *puVar4 = 0L << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_vPos).field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vScale).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar7 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar7);
  *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar7) * 8;
  uVar7 = (uint)&this->m_vScale & 7;
  puVar4 = (ulong *)((int)&this->m_vScale - uVar7);
  *puVar4 = 0x3f8000003f800000 << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_vScale).field0_0x0.d[2] = 1.0;
  puVar1 = &(pDescription->c).field_0x7;
  uVar7 = (uint)puVar1 & 7;
  uVar14 = (uint)&pDescription->c & 7;
  uVar12 = (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
           0xffffffffffffffffU >> (uVar7 + 1) * 8 & 0x3f8000003f800000) & -1L << (8 - uVar14) * 8 |
           *(ulong *)((int)&pDescription->c - uVar14) >> uVar14 * 8;
  pcVar5 = &(pDescription->c).m_nFacialHairIndex;
  uVar7 = (uint)pcVar5 & 7;
  pcVar2 = &(pDescription->c).m_nBodyType;
  uVar14 = (uint)pcVar2 & 7;
  uVar15 = (*(long *)(pcVar5 + -uVar7) << (7 - uVar7) * 8 |
           0xffffffffffffffffU >> (uVar7 + 1) * 8 & 0x3f800000) & -1L << (8 - uVar14) * 8 |
           *(ulong *)(pcVar2 + -uVar14) >> uVar14 * 8;
  puVar1 = &(pDescription->c).field_0x17;
  uVar7 = (uint)puVar1 & 7;
  pcVar5 = &(pDescription->c).m_nSkinColor;
  uVar14 = (uint)pcVar5 & 7;
  uVar17 = (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
           uVar17 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar14) * 8 |
           *(ulong *)(pcVar5 + -uVar14) >> uVar14 * 8;
  puVar1 = &(this->m_character).field_0x7;
  uVar7 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar7);
  *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | uVar12 >> (7 - uVar7) * 8;
  uVar7 = (uint)&this->m_character & 7;
  puVar4 = (ulong *)((int)&this->m_character - uVar7);
  *puVar4 = uVar12 << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  pcVar5 = &(this->m_character).m_nFacialHairIndex;
  uVar7 = (uint)pcVar5 & 7;
  pcVar5 = pcVar5 + -uVar7;
  *(ulong *)pcVar5 = *(ulong *)pcVar5 & -1L << (uVar7 + 1) * 8 | uVar15 >> (7 - uVar7) * 8;
  pcVar5 = &(this->m_character).m_nBodyType;
  uVar7 = (uint)pcVar5 & 7;
  pcVar5 = pcVar5 + -uVar7;
  *(ulong *)pcVar5 = uVar15 << uVar7 * 8 | *(ulong *)pcVar5 & 0xffffffffffffffffU >> (8 - uVar7) * 8
  ;
  puVar1 = &(this->m_character).field_0x17;
  uVar7 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar7);
  *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | uVar17 >> (7 - uVar7) * 8;
  pcVar5 = &(this->m_character).m_nSkinColor;
  uVar7 = (uint)pcVar5 & 7;
  pcVar5 = pcVar5 + -uVar7;
  *(ulong *)pcVar5 = uVar17 << uVar7 * 8 | *(ulong *)pcVar5 & 0xffffffffffffffffU >> (8 - uVar7) * 8
  ;
  this->m_pCreateSimData = (ERQuickdata *)0x0;
  iVar13 = *(int *)&(this->m_character).m_bAdult;
  this->m_pBodyData = (Table *)0x0;
  if (iVar13 == 0) {
    uVar7 = 0x6da0fa52;
    uVar14 = 0xf4a9abe8;
    uVar16 = 0x83ae9b7e;
    uVar18 = 0x1dca0edd;
    uVar19 = 0x6acd3e4b;
    uVar21 = 0xf3c46ff1;
    uVar22 = 0x84c35f67;
    uVar23 = 0x147c42f6;
    uVar24 = 0x637b7260;
  }
  else {
    uVar7 = 0x4356d2d4;
    uVar14 = 0xda5f836e;
    uVar16 = 0xad58b3f8;
    uVar18 = 0x333c265b;
    uVar19 = 0x443b16cd;
    uVar21 = 0xaa3577e1;
    uVar22 = 0x3a8a6a70;
    uVar23 = 0x4d8d5ae6;
    uVar24 = 0x75269f3e;
  }
  this->m_nIdleAnimationID[0] = uVar7;
  this->m_nIdleAnimationID[1] = uVar14;
  this->m_nIdleAnimationID[2] = uVar16;
  this->m_nIdleAnimationID[3] = uVar18;
  this->m_nIdleAnimationID[4] = uVar19;
  this->m_nIdleAnimationID[5] = uVar21;
  this->m_nIdleAnimationID[6] = uVar22;
  this->m_nIdleAnimationID[7] = uVar23;
  this->m_nIdleAnimationID[8] = uVar24;
  iVar13 = *(int *)&(this->m_character).m_bAdult;
  if (*(int *)&this->m_character == 0) {
    if (iVar13 == 0) {
      InitFemaleChild__10ECharedSim(this);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pTVar20 = this->m_pBodyData;
    }
    else {
      InitFemaleAdult__10ECharedSim(this);
      pTVar20 = this->m_pBodyData;
    }
  }
  else if (iVar13 == 0) {
    InitMaleChild__10ECharedSim(this);
    pTVar20 = this->m_pBodyData;
  }
  else {
    InitMaleAdult__10ECharedSim(this);
    pTVar20 = this->m_pBodyData;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi
            (this,'\x05',(pTVar20->shoe).pData[(this->m_character).m_nShoesIndex].model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\x06',
             (this->m_pBodyData->shoe).pData[(this->m_character).m_nShoesIndex].layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi
            (this,'\x04',
             (this->m_pBodyData->lowerBody).pData[(this->m_character).m_nLowerBodyIndex].model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\x04',
             (this->m_pBodyData->lowerBody).pData[(this->m_character).m_nLowerBodyIndex].layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\x05',
             (this->m_pBodyData->lowerBody).pData[(this->m_character).m_nLowerBodyIndex].layer2);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi
            (this,'\x03',
             (this->m_pBodyData->upperBody).pData[(this->m_character).m_nUpperBodyIndex].model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\x02',
             (this->m_pBodyData->upperBody).pData[(this->m_character).m_nUpperBodyIndex].layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\x03',
             (this->m_pBodyData->upperBody).pData[(this->m_character).m_nUpperBodyIndex].layer2);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi
            (this,'\x01',(this->m_pBodyData->face).pData[(this->m_character).m_nFaceIndex].model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\a',
             (this->m_pBodyData->face).pData[(this->m_character).m_nFaceIndex].layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi
            (this,'\x02',(this->m_pBodyData->hair).pData[(this->m_character).m_nHairHatIndex].model)
  ;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\n',
             (this->m_pBodyData->hair).pData[(this->m_character).m_nHairHatIndex].layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\v',
             (this->m_pBodyData->hair).pData[(this->m_character).m_nHairHatIndex].layer2);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\t',
             (this->m_pBodyData->facialHair).pData[(this->m_character).m_nFacialHairIndex].layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\r',
             (this->m_pBodyData->facialHair).pData[(this->m_character).m_nFacialHairIndex].layer2);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi
            (this->m_customSkin,'\f',
             (this->m_pBodyData->facialHair).pData[(this->m_character).m_nFacialHairIndex].layer3);
  SetColorOffsets__11ECharedSkinP15CustomCharacter(this->m_customSkin,&this->m_character);
  ApplyColorOffsets__11ECharedSkinbT1
            (this->m_customSkin,SUB41(*(undefined4 *)&(this->m_character).m_bAdult,0),
             SUB41(*(undefined4 *)&this->m_character,0));
  Update__11ECharedSkin(this->m_customSkin);
  this->m_pGlassesModel = (ERModel *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  SetModel__10ECharedSimScUi
            (this,'\0',(this->m_pBodyData->glasses).pData[(this->m_character).m_nGlassesIndex]);
  *(undefined4 *)&this->m_bUsePalettizedSkin = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar8 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
  this->m_pBlankShdr = pEVar8;
  pEVar8 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf46aedcb,(EFile *)0x0,0);
  td.pfnAllocAlign = (undefined1 *)0x0;
  td.pfnFree = (undefined1 *)0x0;
  td.flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
  this->m_pShadow = pEVar8;
  td.paletteFormat = '\x02';
  td.bitsPerPaletteEntry = ' ';
  td.bitsPerImagePixel = '\b';
  td.paletteSize = 0x100;
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.mipMapLevels = 0;
  td.mipMapShift = 0.0;
                    /* end of inlined section */
  td.ysize = 0x100;
  td.xsize = 0x100;
  td.imageFormat = '\0';
  pEVar3 = (_pGfx->field0_0x0).__vtable;
  sd.rp[0].pTexture =
       (ETexture *)
       (*(code *)pEVar3[7].ManagedShutdown)
                 ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar3[7].ManagedStartup,&td)
  ;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
  iVar13 = 1;
  do {
    pEVar9->pTexture = (ETexture *)0x0;
    iVar13 = iVar13 + -1;
    pEVar9->rasterModes = 8;
    pEVar9->flags = 0x18;
    pEVar9->blendA = '\0';
    pEVar9->blendB = '\x01';
    pEVar9->blendC = '\0';
    pEVar9->blendD = '\x01';
    pEVar9->blendFix = 0x80;
    pEVar9->combine = '\0';
    pEVar9->textureGen = '\0';
    pEVar9->alphaTestThreshold = 0.5;
    pEVar9 = pEVar9 + 1;
  } while (iVar13 != -1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
  sd.mat.vAmbientColor.field0_0x0.d[0] = 1.0;
  sd.mat.vAmbientColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[1] = 1.0;
  sd.mat.vAmbientColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[0] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[1] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[3] = 1.0;
  sd.nRenderPasses = '\x01';
  sd.flags = 0x817;
  sd.geometryModes = 8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
  sd.sortMode = '\0';
  sd.sortValue = 0;
                    /* end of inlined section */
  pEVar3 = (_pGfx->field0_0x0).__vtable;
  pEVar10 = (EShader *)
            (*(code *)pEVar3[0xb].EGlobalManagerClient)
                      ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar3 + 0xb),&sd);
  this->m_pPaletteSkin = pEVar10;
  td.flags = td.flags | 3;
  td.xsize = 0x20;
  td.ysize = 0x20;
  pEVar3 = (_pGfx->field0_0x0).__vtable;
  pEVar11 = (ETexture *)
            (*(code *)pEVar3[7].ManagedShutdown)
                      ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar3[7].ManagedStartup
                       ,&td);
  this->m_pFaceImage = pEVar11;
  StoreOldIndexes__10ECharedSim(this);
  return;
}

void ECharedSim::InitMaleAdult() {
	int nTrack;
	u32 userParam;
	Table **ppData;
	Table *pData;
	
  int iVar1;
  int iVar2;
  ERQuickdata *this_00;
  void *_pTable;
  Table *pTVar3;
  ERModel *pEVar4;
  int iVar5;
  EAnimController *this_01;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
  this_01 = &this->m_ac;
  *(undefined4 *)&this->m_bMiddleAnim = 0;
  iVar1 = rand();
  iVar5 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  iVar2 = rand();
  this->m_nRepeatIdleCount = iVar2 % 5 + 3;
  Init__15EAnimControllerUi(this_01,0xffa60350);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_modelScaler = 0.0002441406;
                    /* end of inlined section */
  SetTrackAnim__15EAnimControlleriUi
            (this_01,1,*(uint *)((int)this + (iVar1 + (iVar5 >> 3) * -8) * 4 + 0x18));
  SetGlobalSpeed__15EAnimControllerf(this_01,1.18);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_postComputeUserParam = (uint)this;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_pfnPostComputeCallback = ScaleBones__10ECharedSimUiRC5EMat4P11ERCharacterP5EMat4;
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi(this->m_customSkin,'\x01',0x29f28d35);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0x2a2af469,(EFile *)0x0,0);
  this->m_pCreateSimData = this_00;
  _pTable = getTable__11ERQuickdataPCc(this_00,"Sim::Table");
  pTVar3 = (Table *)getRow__11ERQuickdataPCvPCc(this->m_pCreateSimData,_pTable,"AdultMale");
  if (this != (ECharedSim *)0xffffff04) {
    this->m_pBodyData = pTVar3;
  }
  pEVar4 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x6ef2f2da,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_plowResShadowModel = pEVar4;
  return;
}

void ECharedSim::InitFemaleAdult() {
	int nTrack;
	u32 userParam;
	Table **ppData;
	Table *pData;
	
  int iVar1;
  int iVar2;
  ERQuickdata *this_00;
  void *_pTable;
  Table *pTVar3;
  ERModel *pEVar4;
  int iVar5;
  EAnimController *this_01;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
  this_01 = &this->m_ac;
  *(undefined4 *)&this->m_bMiddleAnim = 0;
  iVar1 = rand();
  iVar5 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  iVar2 = rand();
  this->m_nRepeatIdleCount = iVar2 % 5 + 3;
  Init__15EAnimControllerUi(this_01,0x1fb80af4);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_modelScaler = 0.0002441406;
                    /* end of inlined section */
  SetTrackAnim__15EAnimControlleriUi
            (this_01,1,*(uint *)((int)this + (iVar1 + (iVar5 >> 3) * -8) * 4 + 0x18));
  SetGlobalSpeed__15EAnimControllerf(this_01,1.13);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_postComputeUserParam = (uint)this;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_pfnPostComputeCallback = ScaleBones__10ECharedSimUiRC5EMat4P11ERCharacterP5EMat4;
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi(this->m_customSkin,'\x01',0x5e63299a);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0x2a2af469,(EFile *)0x0,0);
  this->m_pCreateSimData = this_00;
  _pTable = getTable__11ERQuickdataPCc(this_00,"Sim::Table");
  pTVar3 = (Table *)getRow__11ERQuickdataPCvPCc(this->m_pCreateSimData,_pTable,"AdultFemale");
  if (this != (ECharedSim *)0xffffff04) {
    this->m_pBodyData = pTVar3;
  }
  pEVar4 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x6ef2f2da,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_plowResShadowModel = pEVar4;
  return;
}

void ECharedSim::InitMaleChild() {
	int nTrack;
	u32 userParam;
	Table **ppData;
	Table *pData;
	
  int iVar1;
  int iVar2;
  ERQuickdata *this_00;
  void *_pTable;
  Table *pTVar3;
  ERModel *pEVar4;
  int iVar5;
  EAnimController *this_01;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
  this_01 = &this->m_ac;
  *(undefined4 *)&this->m_bMiddleAnim = 0;
  iVar1 = rand();
  iVar5 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  iVar2 = rand();
  this->m_nRepeatIdleCount = iVar2 % 5 + 3;
  Init__15EAnimControllerUi(this_01,0xd5e79699);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_modelScaler = 0.0002441406;
                    /* end of inlined section */
  SetTrackAnim__15EAnimControlleriUi
            (this_01,1,*(uint *)((int)this + (iVar1 + (iVar5 >> 3) * -8) * 4 + 0x18));
  SetGlobalSpeed__15EAnimControllerf(this_01,1.18);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_postComputeUserParam = (uint)this;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_pfnPostComputeCallback = ScaleBones__10ECharedSimUiRC5EMat4P11ERCharacterP5EMat4;
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi(this->m_customSkin,'\x01',0xc73ba5f8);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0x2a2af469,(EFile *)0x0,0);
  this->m_pCreateSimData = this_00;
  _pTable = getTable__11ERQuickdataPCc(this_00,"Sim::Table");
  pTVar3 = (Table *)getRow__11ERQuickdataPCvPCc(this->m_pCreateSimData,_pTable,"ChildMale");
  if (this != (ECharedSim *)0xffffff04) {
    this->m_pBodyData = pTVar3;
  }
  pEVar4 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x566f5472,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_plowResShadowModel = pEVar4;
  return;
}

void ECharedSim::InitFemaleChild() {
	int nTrack;
	u32 userParam;
	Table **ppData;
	Table *pData;
	
  int iVar1;
  int iVar2;
  ERQuickdata *this_00;
  void *_pTable;
  Table *pTVar3;
  ERModel *pEVar4;
  int iVar5;
  EAnimController *this_01;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
  this_01 = &this->m_ac;
  *(undefined4 *)&this->m_bMiddleAnim = 0;
  iVar1 = rand();
  iVar5 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  iVar2 = rand();
  this->m_nRepeatIdleCount = iVar2 % 5 + 3;
  Init__15EAnimControllerUi(this_01,0xd5e79699);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_modelScaler = 0.0002441406;
                    /* end of inlined section */
  SetTrackAnim__15EAnimControlleriUi
            (this_01,1,*(uint *)((int)this + (iVar1 + (iVar5 >> 3) * -8) * 4 + 0x18));
  SetGlobalSpeed__15EAnimControllerf(this_01,1.13);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_postComputeUserParam = (uint)this;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_pfnPostComputeCallback = ScaleBones__10ECharedSimUiRC5EMat4P11ERCharacterP5EMat4;
                    /* end of inlined section */
  SetShader__11ECharedSkinUcUi(this->m_customSkin,'\x01',0x98edfae4);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0x2a2af469,(EFile *)0x0,0);
  this->m_pCreateSimData = this_00;
  _pTable = getTable__11ERQuickdataPCc(this_00,"Sim::Table");
  pTVar3 = (Table *)getRow__11ERQuickdataPCvPCc(this->m_pCreateSimData,_pTable,"ChildFemale");
  if (this != (ECharedSim *)0xffffff04) {
    this->m_pBodyData = pTVar3;
  }
  pEVar4 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x566f5472,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_plowResShadowModel = pEVar4;
  return;
}

void ECharedSim::CleanUp() {
	ETexture *pTexture;
	int i;
	EShader *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  ETexture *pEVar2;
  ERShader *pEVar3;
  ERModel *this_00;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar5 = iVar5 + 1;
    RemoveModel__10ECharedSimSc(this,(char)((uint)iVar4 >> 0x18));
    iVar4 = iVar5 * 0x1000000;
  } while (iVar5 < 6);
  DelRef__9EResource(&this->m_pCreateSimData->field0_0x0);
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
  pEVar2 = (this->m_pPaletteSkin->m_sd).rp[0].pTexture;
  while (this->m_pPaletteSkin != (EShader *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[0xb].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[0xb].ManagedStartup,
               this->m_pPaletteSkin);
    this->m_pPaletteSkin = (EShader *)0x0;
  }
  while (pEVar2 != (ETexture *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[8].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 8),pEVar2);
    pEVar2 = (ETexture *)0x0;
  }
  pEVar2 = this->m_pFaceImage;
  while (pEVar2 != (ETexture *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[8].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 8),this->m_pFaceImage);
    this->m_pFaceImage = (ETexture *)0x0;
    pEVar2 = this->m_pFaceImage;
  }
  pEVar3 = this->m_pBlankShdr;
  while (pEVar3 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar3->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
    pEVar3 = this->m_pBlankShdr;
  }
  pEVar3 = this->m_pShadow;
  while (pEVar3 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar3->field0_0x0);
    this->m_pShadow = (ERShader *)0x0;
    pEVar3 = this->m_pShadow;
  }
  this_00 = this->m_plowResShadowModel;
  while (this_00 != (ERModel *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_plowResShadowModel = (ERModel *)0x0;
    this_00 = this->m_plowResShadowModel;
  }
  return;
}

void ECharedSim::Draw(ERC *prc, float fRotation) {
	EVec3 mRot;
	EMat4 mSimOrient;
	ECharedSkin *this;
	ERC *this;
	float z;
	int i;
	
  EShader__vtable *pEVar1;
  EShader *pEVar2;
  uint uVar3;
  ulong *puVar4;
  void *pvVar5;
  ERC__vtable *pEVar6;
  EDL *this_00;
  ERModel **ppEVar7;
  int iVar8;
  float fVar9;
  EVec3 mRot;
  EMat4 mSimOrient;
  
  if (*(int *)&this->m_bUsePalettizedSkin == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedskin.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedskin.h */
    pEVar2 = this->m_customSkin->m_pCustomShdr;
                    /* end of inlined section */
    pEVar1 = pEVar2->__vtable;
    (*(code *)pEVar1->ChangeMaterial)
              ((int)(pEVar2->m_sd).rp + *(short *)&pEVar1->Create + -0x10,prc,0);
                    /* inlined from /eor/src2/engine/e_rc.h */
    this_00 = prc->m_pdl;
  }
  else {
    pEVar1 = this->m_pPaletteSkin->__vtable;
    (*(code *)pEVar1->ChangeMaterial)
              ((int)(this->m_pPaletteSkin->m_sd).rp + *(short *)&pEVar1->Create + -0x10,prc,0);
    this_00 = prc->m_pdl;
  }
  pvVar5 = Alloc__11EAllocGroupUii(&this_00->m_allocGroup,0x50,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar3 = (int)pvVar5 + 7U & 7;
  puVar4 = (ulong *)(((int)pvVar5 + 7U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3f19999a3f19999aU >> (7 - uVar3) * 8;
  uVar3 = (uint)pvVar5 & 7;
  *(ulong *)((int)pvVar5 - uVar3) =
       0x3f19999a3f19999a << uVar3 * 8 |
       *(ulong *)((int)pvVar5 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  *(undefined4 *)((int)pvVar5 + 8) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar3 = (int)pvVar5 + 0x17U & 7;
  puVar4 = (ulong *)(((int)pvVar5 + 0x17U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3ecccccd3ecccccdU >> (7 - uVar3) * 8;
  uVar3 = (int)pvVar5 + 0x10U & 7;
  puVar4 = (ulong *)(((int)pvVar5 + 0x10U) - uVar3);
  *puVar4 = 0x3ecccccd3ecccccd << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  *(undefined4 *)((int)pvVar5 + 0x18) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar3 = (int)pvVar5 + 0x37U & 7;
  puVar4 = (ulong *)(((int)pvVar5 + 0x37U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3f19999a3f19999aU >> (7 - uVar3) * 8;
  uVar3 = (int)pvVar5 + 0x30U & 7;
  puVar4 = (ulong *)(((int)pvVar5 + 0x30U) - uVar3);
  *puVar4 = 0x3f19999a3f19999a << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  *(undefined4 *)((int)pvVar5 + 0x38) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar3 = (int)pvVar5 + 0x27U & 7;
  puVar4 = (ulong *)(((int)pvVar5 + 0x27U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0xc1200000c1200000U >> (7 - uVar3) * 8;
  uVar3 = (int)pvVar5 + 0x20U & 7;
  puVar4 = (ulong *)(((int)pvVar5 + 0x20U) - uVar3);
  *puVar4 = -0x3edfffff3ee00000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  *(undefined4 *)((int)pvVar5 + 0x28) = 0xc1300000;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mRot.field0_0x0.d[1] = 10.0;
  mRot.field0_0x0.d[2] = -11.0;
  mRot.field0_0x0.d[0] = 10.0;
                    /* end of inlined section */
  uVar3 = (int)pvVar5 + 0x47U & 7;
  puVar4 = (ulong *)(((int)pvVar5 + 0x47U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x4120000041200000U >> (7 - uVar3) * 8;
  uVar3 = (int)pvVar5 + 0x40U & 7;
  puVar4 = (ulong *)(((int)pvVar5 + 0x40U) - uVar3);
  *puVar4 = 0x4120000041200000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  *(undefined4 *)((int)pvVar5 + 0x48) = 0xc1300000;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar9 = sqrtf(*(float *)((int)pvVar5 + 0x20) * *(float *)((int)pvVar5 + 0x20) +
                *(float *)((int)pvVar5 + 0x24) * *(float *)((int)pvVar5 + 0x24) +
                *(float *)((int)pvVar5 + 0x28) * *(float *)((int)pvVar5 + 0x28));
  if (fVar9 == 0.0) {
    fVar9 = *(float *)((int)pvVar5 + 0x40);
  }
  else {
    fVar9 = 1.0 / fVar9;
    *(float *)((int)pvVar5 + 0x20) = *(float *)((int)pvVar5 + 0x20) * fVar9;
    *(float *)((int)pvVar5 + 0x24) = *(float *)((int)pvVar5 + 0x24) * fVar9;
    *(float *)((int)pvVar5 + 0x28) = *(float *)((int)pvVar5 + 0x28) * fVar9;
    fVar9 = *(float *)((int)pvVar5 + 0x40);
  }
  fVar9 = sqrtf(fVar9 * fVar9 + *(float *)((int)pvVar5 + 0x44) * *(float *)((int)pvVar5 + 0x44) +
                *(float *)((int)pvVar5 + 0x48) * *(float *)((int)pvVar5 + 0x48));
  if (fVar9 == 0.0) {
    pEVar6 = prc->__vtable;
  }
  else {
    fVar9 = 1.0 / fVar9;
    *(float *)((int)pvVar5 + 0x40) = *(float *)((int)pvVar5 + 0x40) * fVar9;
    *(float *)((int)pvVar5 + 0x44) = *(float *)((int)pvVar5 + 0x44) * fVar9;
    *(float *)((int)pvVar5 + 0x48) = *(float *)((int)pvVar5 + 0x48) * fVar9;
                    /* end of inlined section */
    pEVar6 = prc->__vtable;
  }
  ppEVar7 = this->m_pModels;
  iVar8 = 4;
  (*(code *)pEVar6[1].LineList)((int)&prc->m_pdl + (int)*(short *)&pEVar6[1].QuadList,pvVar5,2);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mRot.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mRot.field0_0x0.d[0] = 0.0;
  mRot.field0_0x0.d[2] = fRotation;
                    /* end of inlined section */
  CalcOrientMatrix__15EAnimControllerRC5EVec3N21R5EMat4
            (&this->m_vPos,&mRot,&this->m_vScale,&mSimOrient);
  Compute__15EAnimControllerRC5EMat4(&this->m_ac,&mSimOrient);
                    /* inlined from /eor/src2/engine/e_rptr.h */
                    /* end of inlined section */
  CopyMatrices__7ERModelP3ERCP5EMat4i
            (prc,(this->m_ac).m_mNodes,(((this->m_ac).m_pRCharacter.m_p)->m_nodes).field0_0x0.m_size
            );
  do {
    if (*ppEVar7 != (ERModel *)0x0) {
      Draw__7ERModelP3ERCUi(*ppEVar7,prc,1);
    }
    iVar8 = iVar8 + -1;
    ppEVar7 = ppEVar7 + 1;
  } while (-1 < iVar8);
  if (this->m_pGlassesModel != (ERModel *)0x0) {
    Draw__7ERModelP3ERCUi(this->m_pGlassesModel,prc,5);
  }
  DrawShadow__10ECharedSimP3ERC(this,prc);
  return;
}

void ECharedSim::Update() {
  uint animId;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_s0;
  EAnimController *this_00;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  this_00 = &this->m_ac;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  bVar1 = IsTrackAnimComplete__15EAnimControlleri(this_00,1);
  if (bVar1) {
    if (*(int *)&this->m_bMiddleAnim == 0) {
      animId = this->m_nIdleAnimationID[8];
      *(undefined4 *)&this->m_bMiddleAnim = 1;
      SetTrackAnim__15EAnimControlleriUi(this_00,1,animId);
    }
    else if (this->m_nRepeatIdleCount == 0) {
      *(undefined4 *)&this->m_bMiddleAnim = 0;
      iVar2 = rand();
      iVar3 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar3 = iVar2;
      }
      SetTrackAnim__15EAnimControlleriUi
                (this_00,1,*(uint *)((int)this + (iVar2 + (iVar3 >> 3) * -8) * 4 + 0x18));
      iVar3 = rand();
      this->m_nRepeatIdleCount = iVar3 % 5 + 3;
    }
    else {
      this->m_nRepeatIdleCount = this->m_nRepeatIdleCount - 1;
      RestartTrack__15EAnimControlleri(this_00,1);
    }
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_40 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_38 = 0x3f800000;
                    /* end of inlined section */
    local_3c = 0x3f800000;
    Update__15EAnimControllerP5EVec3T1G5EVec3(this_00,(EVec3 *)0x0,(EVec3 *)0x0,(EVec3 *)&local_40);
  }
  return;
}

void ECharedSim::SetModel(s8 nIndex, u32 nNewModel) {
	u32 id;
	u32 id;
	
  ERModel *pEVar1;
  EResource *pEVar2;
  int iVar3;
  ERModel *pOther;
  
  iVar3 = (int)nIndex;
  if (iVar3 == 0) {
    if (this->m_pGlassesModel != (ERModel *)0x0) {
      RemoveModel__10ECharedSimSc(this,'\0');
    }
    if (nNewModel == 0) {
      return;
    }
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar1 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,nNewModel,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pGlassesModel = pEVar1;
    return;
  }
  if ((EResource *)this->m_nIdleAnimationID[iVar3 + 8] != (EResource *)0x0) {
    RemoveModel__10ECharedSimSc(this,nIndex);
  }
  if (nNewModel != 0) {
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar2 = AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,nNewModel,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_nIdleAnimationID[iVar3 + 8] = (uint)pEVar2;
  }
  switch((iVar3 + -1) * 0x1000000 >> 0x18) {
  case 0:
    if (this->m_pModels[2] == (ERModel *)0x0) {
      pOther = this->m_pModels[1];
    }
    else {
      WeldSharedVerts__7ERModelP7ERModelf(this->m_pModels[2],this->m_pModels[0],0.0001);
      pOther = this->m_pModels[1];
    }
    if (pOther == (ERModel *)0x0) {
      return;
    }
    pEVar1 = this->m_pModels[0];
    break;
  case 1:
    pEVar1 = this->m_pModels[0];
    if (pEVar1 == (ERModel *)0x0) {
      return;
    }
    pOther = this->m_pModels[1];
    break;
  case 2:
    if (this->m_pModels[3] == (ERModel *)0x0) {
      pEVar1 = this->m_pModels[0];
    }
    else {
      WeldSharedVerts__7ERModelP7ERModelf(this->m_pModels[3],this->m_pModels[2],0.0001);
      pEVar1 = this->m_pModels[0];
    }
    if (pEVar1 == (ERModel *)0x0) {
      return;
    }
    WeldSharedVerts__7ERModelP7ERModelf(this->m_pModels[2],pEVar1,0.0001);
    return;
  case 3:
    if (this->m_pModels[2] != (ERModel *)0x0) {
      WeldSharedVerts__7ERModelP7ERModelf(this->m_pModels[3],this->m_pModels[2],0.0001);
      goto switchD_001113d4_caseD_4;
    }
    pEVar1 = this->m_pModels[3];
    goto LAB_001114a8;
  case 4:
switchD_001113d4_caseD_4:
    pEVar1 = this->m_pModels[3];
LAB_001114a8:
    if (pEVar1 != (ERModel *)0x0) {
      WeldSharedVerts__7ERModelP7ERModelf(this->m_pModels[4],pEVar1,0.0001);
    }
  default:
    goto switchD_001113d4_caseD_5;
  }
  WeldSharedVerts__7ERModelP7ERModelf(pEVar1,pOther,1e-05);
switchD_001113d4_caseD_5:
  return;
}

void ECharedSim::RemoveModel(s8 nIndex) {
  EResource *this_00;
  
  if (nIndex == 0) {
    if (this->m_pGlassesModel != (ERModel *)0x0) {
      DelRef__9EResource(&this->m_pGlassesModel->field0_0x0);
      this->m_pGlassesModel = (ERModel *)0x0;
    }
  }
  else {
    this_00 = (EResource *)this->m_nIdleAnimationID[nIndex + 8];
    if (this_00 != (EResource *)0x0) {
      DelRef__9EResource(this_00);
      this->m_nIdleAnimationID[nIndex + 8] = 0;
    }
  }
  return;
}

void ECharedSim::Next(int nBodyPart) {
	u32 nDataID;
	u32 nLockType;
	bool bIsLockable;
	bool bIsItemUnlocked;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	
  uint nDataID;
  
  if ((uint)nBodyPart < 8) {
                    /* WARNING: Could not recover jumptable at 0x00111594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003a9320)[nBodyPart])();
    return;
  }
  Update__11ECharedSkin(this->m_customSkin);
  return;
}

void ECharedSim::Previous(int nBodyPart) {
	u32 nDataID;
	u32 nLockType;
	bool bIsLockable;
	bool bIsItemUnlocked;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	
  uint nDataID;
  
  if ((uint)nBodyPart < 8) {
                    /* WARNING: Could not recover jumptable at 0x00111ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003a9340)[nBodyPart])();
    return;
  }
  Update__11ECharedSkin(this->m_customSkin);
  return;
}

void ECharedSim::StoreOldIndexes() {
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  char *pcVar6;
  ulong in_v0;
  ulong uVar7;
  ulong in_v1;
  ulong uVar8;
  ulong in_a1;
  ulong uVar9;
  
  puVar1 = &(this->m_character).field_0x7;
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&this->m_character & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)&this->m_character - uVar4) >> uVar4 * 8;
  pcVar6 = &(this->m_character).m_nFacialHairIndex;
  uVar3 = (uint)pcVar6 & 7;
  pcVar2 = &(this->m_character).m_nBodyType;
  uVar4 = (uint)pcVar2 & 7;
  uVar8 = (*(long *)(pcVar6 + -uVar3) << (7 - uVar3) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)(pcVar2 + -uVar4) >> uVar4 * 8;
  puVar1 = &(this->m_character).field_0x17;
  uVar3 = (uint)puVar1 & 7;
  pcVar6 = &(this->m_character).m_nSkinColor;
  uVar4 = (uint)pcVar6 & 7;
  uVar9 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_a1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)(pcVar6 + -uVar4) >> uVar4 * 8;
  puVar1 = &(this->m_oldCharacter).field_0x7;
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_oldCharacter & 7;
  puVar5 = (ulong *)((int)&this->m_oldCharacter - uVar3);
  *puVar5 = uVar7 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  pcVar6 = &(this->m_oldCharacter).m_nFacialHairIndex;
  uVar3 = (uint)pcVar6 & 7;
  pcVar6 = pcVar6 + -uVar3;
  *(ulong *)pcVar6 = *(ulong *)pcVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
  pcVar6 = &(this->m_oldCharacter).m_nBodyType;
  uVar3 = (uint)pcVar6 & 7;
  pcVar6 = pcVar6 + -uVar3;
  *(ulong *)pcVar6 = uVar8 << uVar3 * 8 | *(ulong *)pcVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = &(this->m_oldCharacter).field_0x17;
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
  pcVar6 = &(this->m_oldCharacter).m_nSkinColor;
  uVar3 = (uint)pcVar6 & 7;
  pcVar6 = pcVar6 + -uVar3;
  *(ulong *)pcVar6 = uVar9 << uVar3 * 8 | *(ulong *)pcVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  StoreColorOffsets__11ECharedSkin(this->m_customSkin);
  return;
}

void ECharedSim::ApplyOldIndexes() {
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	VECTOR<Sim::LayeredPart> *this;
	ECharedSim *this;
	ECharedSim *this;
	
  char cVar1;
  
  cVar1 = (this->m_oldCharacter).m_nUpperBodyIndex;
  if ((this->m_character).m_nUpperBodyIndex != cVar1) {
                    /* end of inlined section */
    (this->m_character).m_nUpperBodyIndex = (this->m_oldCharacter).m_nUpperBodyIndex;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetModel__10ECharedSimScUi(this,'\x03',(this->m_pBodyData->upperBody).pData[cVar1].model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\x02',
               (this->m_pBodyData->upperBody).pData[(this->m_character).m_nUpperBodyIndex].layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\x03',
               (this->m_pBodyData->upperBody).pData[(this->m_character).m_nUpperBodyIndex].layer2);
  }
  cVar1 = (this->m_oldCharacter).m_nLowerBodyIndex;
  if ((this->m_character).m_nLowerBodyIndex != cVar1) {
                    /* end of inlined section */
    (this->m_character).m_nLowerBodyIndex = (this->m_oldCharacter).m_nLowerBodyIndex;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetModel__10ECharedSimScUi(this,'\x04',(this->m_pBodyData->lowerBody).pData[cVar1].model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\x04',
               (this->m_pBodyData->lowerBody).pData[(this->m_character).m_nLowerBodyIndex].layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\x05',
               (this->m_pBodyData->lowerBody).pData[(this->m_character).m_nLowerBodyIndex].layer2);
  }
  cVar1 = (this->m_oldCharacter).m_nShoesIndex;
  if ((this->m_character).m_nShoesIndex != cVar1) {
    (this->m_character).m_nShoesIndex = (this->m_oldCharacter).m_nShoesIndex;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetModel__10ECharedSimScUi(this,'\x05',(this->m_pBodyData->shoe).pData[cVar1].model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\x06',
               (this->m_pBodyData->shoe).pData[(this->m_character).m_nShoesIndex].layer1);
  }
  cVar1 = (this->m_oldCharacter).m_nFaceIndex;
  if ((this->m_character).m_nFaceIndex != cVar1) {
    (this->m_character).m_nFaceIndex = (this->m_oldCharacter).m_nFaceIndex;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetModel__10ECharedSimScUi(this,'\x01',(this->m_pBodyData->face).pData[cVar1].model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\a',
               (this->m_pBodyData->face).pData[(this->m_character).m_nFaceIndex].layer1);
  }
  cVar1 = (this->m_oldCharacter).m_nFacialHairIndex;
  if ((this->m_character).m_nFacialHairIndex != cVar1) {
                    /* end of inlined section */
    (this->m_character).m_nFacialHairIndex = (this->m_oldCharacter).m_nFacialHairIndex;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\t',(this->m_pBodyData->facialHair).pData[cVar1].layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\r',
               (this->m_pBodyData->facialHair).pData[(this->m_character).m_nFacialHairIndex].layer2)
    ;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\f',
               (this->m_pBodyData->facialHair).pData[(this->m_character).m_nFacialHairIndex].layer3)
    ;
  }
  cVar1 = (this->m_oldCharacter).m_nHairHatIndex;
  if ((this->m_character).m_nHairHatIndex != cVar1) {
                    /* end of inlined section */
    (this->m_character).m_nHairHatIndex = (this->m_oldCharacter).m_nHairHatIndex;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetModel__10ECharedSimScUi(this,'\x02',(this->m_pBodyData->hair).pData[cVar1].model);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\n',
               (this->m_pBodyData->hair).pData[(this->m_character).m_nHairHatIndex].layer1);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetShader__11ECharedSkinUcUi
              (this->m_customSkin,'\v',
               (this->m_pBodyData->hair).pData[(this->m_character).m_nHairHatIndex].layer2);
  }
  cVar1 = (this->m_oldCharacter).m_nGlassesIndex;
  if ((this->m_character).m_nGlassesIndex != cVar1) {
    (this->m_character).m_nGlassesIndex = (this->m_oldCharacter).m_nGlassesIndex;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetModel__10ECharedSimScUi(this,'\0',(this->m_pBodyData->glasses).pData[cVar1]);
  }
  RestoreColorOffsets__11ECharedSkin(this->m_customSkin);
  Update__11ECharedSkin(this->m_customSkin);
  ApplyColorOffsets__11ECharedSkinbT1
            (this->m_customSkin,SUB41(*(undefined4 *)&(this->m_character).m_bAdult,0),
             SUB41(*(undefined4 *)&this->m_character,0));
  return;
}

void ECharedSim::CreatePaletteSkin() {
	EShader *this;
	
  *(undefined4 *)&this->m_bUsePalettizedSkin = 1;
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
  GetSkin__11ECharedSkinP8ETexture(this->m_customSkin,(this->m_pPaletteSkin->m_sd).rp[0].pTexture);
  return;
}

void ECharedSim::CreateFaceImage() {
	void *pHeapPointer;
	ERC *prc;
	EPortalWindow win;
	int i;
	ERenderSurfaceDef rsd;
	ERenderSurface *prs;
	EMat4 mSimOrient;
	ETextureDef td;
	ETexture *pOrigTexture;
	unsigned char nCurPixelColor[3];
	int x;
	int y;
	int z;
	u32 *pOrigPixel;
	u32 *pNewColor;
	u8 *pNewPixel;
	ERTQuantize Quantize;
	int nPaletteSize;
	EVec3 *this;
	ECharedSim *this;
	ECharedSkin *this;
	ERC *this;
	
  undefined *puVar1;
  EGlobalManagerClient__vtable *pEVar2;
  EShader__vtable *pEVar3;
  EShader *pEVar4;
  ETexture__vtable *pEVar5;
  uint uVar6;
  ulong *puVar7;
  void *pvVar8;
  EVec3 *vTarget;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ERC__vtable *pEVar15;
  EDL *this_00;
  ERenderSurface *pRenderSurface;
  undefined4 *puVar16;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 unaff_s2;
  ERModel **ppEVar20;
  undefined8 unaff_s3;
  ERC *prc;
  undefined8 unaff_s4;
  int iVar21;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar22;
  EPortalWindow win;
  ERenderSurfaceDef rsd;
  EMat4 mSimOrient;
  undefined4 local_1e20;
  undefined4 local_1e1c;
  undefined4 local_1e10;
  undefined4 local_1e0c;
  undefined4 local_1e08;
  undefined4 local_1e04;
  uchar nCurPixelColor [3];
  undefined4 local_1df0;
  undefined4 local_1dec;
  undefined4 local_1de8;
  ETextureDef td;
  ERTQuantize Quantize;
  int x;
  int y;
  void *pHeapPointer;
  int *local_b4;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  pHeapPointer = GetUpper32k__17ESimScratchPadMan();
  if (pHeapPointer == (void *)0x0) {
    pvVar8 = AllocateScratchMemory__5GlobsPCvPCci
                       (this,"c:/eor/src2/games/sims/ESRC/charedsim.cpp",0x5de);
    Init__5EHeapPvUi(&_4ESim_m_MyHeap,pvVar8,0x100000);
  }
  else {
    pvVar8 = GetUpper32k__17ESimScratchPadMan();
    Init__5EHeapPvUi(&_4ESim_m_MyHeap,pvVar8,0x8000);
  }
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  uVar12 = (*(code *)pEVar2[6].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 6),0);
  __13EPortalWindow(&win);
                    /* inlined from /eor/src2/engine/e_rendersurface.h */
  rsd.flags = 3;
  rsd.format = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mSimOrient.field0_0x0.d[0][2] = 0.0;
  mSimOrient.field0_0x0.d[0][1] = 0.0;
  mSimOrient.field0_0x0.d[0][0] = 0.0;
  puVar1 = (undefined *)((int)&rsd.bgColor.field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0UL >> (7 - uVar6) * 8;
  uVar6 = (uint)&rsd.bgColor & 7;
  puVar7 = (ulong *)((int)&rsd.bgColor - uVar6);
  *puVar7 = 0L << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  rsd.bgColor.field0_0x0.d[2] = 0.0;
  mSimOrient.field0_0x0.d[0][2] = 0.0;
  mSimOrient.field0_0x0.d[0][1] = 0.0;
  mSimOrient.field0_0x0.d[0][0] = 0.0;
  puVar1 = (undefined *)((int)&rsd.bgColor.field0_0x0 + 7);
                    /* end of inlined section */
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0UL >> (7 - uVar6) * 8;
  uVar6 = (uint)&rsd.bgColor & 7;
  puVar7 = (ulong *)((int)&rsd.bgColor - uVar6);
  *puVar7 = 0L << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  rsd.bgColor.field0_0x0.d[2] = 0.0;
  rsd.xsize = 0x40;
  rsd.ysize = 0x40;
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[0xf].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 0xf));
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  uVar13 = (*(code *)pEVar2[8].ManagedShutdown)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[8].ManagedStartup,
                      &rsd);
  SetProjection__13EPortalWindowffff(&win,14.0,1.0,0.5,500.0);
  pRenderSurface = (ERenderSurface *)uVar13;
  SetRenderSurface__7EWindowP14ERenderSurface((EWindow *)&win,pRenderSurface);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
                    /* end of inlined section */
  vTarget = (EVec3 *)((int)&mSimOrient.field0_0x0 + 0x10);
  prc = (ERC *)uVar12;
  if (*(int *)&(this->m_character).m_bAdult == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[1][0] = -0.195;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[0][1] = 3.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[0][0] = -0.195;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[0][2] = 1.05;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[1][1] = 0.0;
    mSimOrient.field0_0x0.d[1][2] = 1.05;
    mSimOrient.field0_0x0.d[3][0] = 0.0;
    mSimOrient.field0_0x0.d[3][1] = 0.0;
                    /* end of inlined section */
    mSimOrient.field0_0x0.d[3][2] = 1.0;
    SetLookAt__13EPortalWindowRC5EVec3N21
              (&win,(EVec3 *)&mSimOrient,vTarget,(EVec3 *)((int)&mSimOrient.field0_0x0 + 0x30));
    pEVar15 = prc->__vtable;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[1][0] = -0.195;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[0][1] = 3.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[0][0] = -0.195;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[0][2] = 1.5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[1][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[1][2] = 1.5;
    mSimOrient.field0_0x0.d[2][0] = 0.0;
    mSimOrient.field0_0x0.d[2][1] = 0.0;
                    /* end of inlined section */
    mSimOrient.field0_0x0.d[2][2] = 1.0;
    SetLookAt__13EPortalWindowRC5EVec3N21
              (&win,(EVec3 *)&mSimOrient,vTarget,(EVec3 *)((int)&mSimOrient.field0_0x0 + 0x20));
    pEVar15 = prc->__vtable;
  }
  (*(code *)pEVar15[1].SetRasterModes)
            ((int)&prc->m_pdl + (int)*(short *)&pEVar15[1].DisableRasterModes,uVar13,5);
  Select__13EPortalWindowP3ERC(&win,prc);
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mSimOrient.field0_0x0.d[0][0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mSimOrient.field0_0x0.d[0][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mSimOrient.field0_0x0.d[1][0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mSimOrient.field0_0x0.d[1][1] = 1.0;
  mSimOrient.field0_0x0.d[2][0] = 0.0;
  mSimOrient.field0_0x0.d[2][1] = 1.0;
  local_1e10 = 0x3f076c8b;
  local_1e20 = 0x3f800000;
  local_1e1c = 0;
  local_1e0c = 0x3f1374bc;
  local_1e08 = 0x3f46a7f0;
  local_1e04 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&mSimOrient,vTarget,
             (undefined *)((int)&mSimOrient.field0_0x0 + 0x20),&local_1e20,&local_1e10);
  if (*(int *)&this->m_bUsePalettizedSkin == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedskin.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedskin.h */
    pEVar4 = this->m_customSkin->m_pCustomShdr;
                    /* end of inlined section */
    pEVar3 = pEVar4->__vtable;
    (*(code *)pEVar3->ChangeMaterial)
              ((int)(pEVar4->m_sd).rp + *(short *)&pEVar3->Create + -0x10,uVar12,0);
                    /* inlined from /eor/src2/engine/e_rc.h */
    this_00 = prc->m_pdl;
  }
  else {
    pEVar3 = this->m_pPaletteSkin->__vtable;
    (*(code *)pEVar3->ChangeMaterial)
              ((int)(this->m_pPaletteSkin->m_sd).rp + *(short *)&pEVar3->Create + -0x10,uVar12,0);
    this_00 = prc->m_pdl;
  }
  pvVar8 = Alloc__11EAllocGroupUii(&this_00->m_allocGroup,0x50,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar6 = (int)pvVar8 + 7U & 7;
  puVar7 = (ulong *)(((int)pvVar8 + 7U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3f19999a3f19999aU >> (7 - uVar6) * 8;
  uVar6 = (uint)pvVar8 & 7;
  *(ulong *)((int)pvVar8 - uVar6) =
       0x3f19999a3f19999a << uVar6 * 8 |
       *(ulong *)((int)pvVar8 - uVar6) & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  *(undefined4 *)((int)pvVar8 + 8) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar6 = (int)pvVar8 + 0x17U & 7;
  puVar7 = (ulong *)(((int)pvVar8 + 0x17U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3ecccccd3ecccccdU >> (7 - uVar6) * 8;
  uVar6 = (int)pvVar8 + 0x10U & 7;
  puVar7 = (ulong *)(((int)pvVar8 + 0x10U) - uVar6);
  *puVar7 = 0x3ecccccd3ecccccd << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  *(undefined4 *)((int)pvVar8 + 0x18) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar6 = (int)pvVar8 + 0x37U & 7;
  puVar7 = (ulong *)(((int)pvVar8 + 0x37U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3f19999a3f19999aU >> (7 - uVar6) * 8;
  uVar6 = (int)pvVar8 + 0x30U & 7;
  puVar7 = (ulong *)(((int)pvVar8 + 0x30U) - uVar6);
  *puVar7 = 0x3f19999a3f19999a << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  *(undefined4 *)((int)pvVar8 + 0x38) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar6 = (int)pvVar8 + 0x27U & 7;
  puVar7 = (ulong *)(((int)pvVar8 + 0x27U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0xc1200000c1200000U >> (7 - uVar6) * 8;
  uVar6 = (int)pvVar8 + 0x20U & 7;
  puVar7 = (ulong *)(((int)pvVar8 + 0x20U) - uVar6);
  *puVar7 = -0x3edfffff3ee00000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  *(undefined4 *)((int)pvVar8 + 0x28) = 0xc1300000;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mSimOrient.field0_0x0.d[0][1] = 10.0;
  mSimOrient.field0_0x0.d[0][2] = -11.0;
  mSimOrient.field0_0x0.d[0][0] = 10.0;
                    /* end of inlined section */
  uVar6 = (int)pvVar8 + 0x47U & 7;
  puVar7 = (ulong *)(((int)pvVar8 + 0x47U) - uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x4120000041200000U >> (7 - uVar6) * 8;
  uVar6 = (int)pvVar8 + 0x40U & 7;
  puVar7 = (ulong *)(((int)pvVar8 + 0x40U) - uVar6);
  *puVar7 = 0x4120000041200000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  *(undefined4 *)((int)pvVar8 + 0x48) = 0xc1300000;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar22 = sqrtf(*(float *)((int)pvVar8 + 0x20) * *(float *)((int)pvVar8 + 0x20) +
                 *(float *)((int)pvVar8 + 0x24) * *(float *)((int)pvVar8 + 0x24) +
                 *(float *)((int)pvVar8 + 0x28) * *(float *)((int)pvVar8 + 0x28));
  if (fVar22 == 0.0) {
    fVar22 = *(float *)((int)pvVar8 + 0x40);
  }
  else {
    fVar22 = 1.0 / fVar22;
    *(float *)((int)pvVar8 + 0x20) = *(float *)((int)pvVar8 + 0x20) * fVar22;
    *(float *)((int)pvVar8 + 0x24) = *(float *)((int)pvVar8 + 0x24) * fVar22;
    *(float *)((int)pvVar8 + 0x28) = *(float *)((int)pvVar8 + 0x28) * fVar22;
    fVar22 = *(float *)((int)pvVar8 + 0x40);
  }
  fVar22 = sqrtf(fVar22 * fVar22 + *(float *)((int)pvVar8 + 0x44) * *(float *)((int)pvVar8 + 0x44) +
                 *(float *)((int)pvVar8 + 0x48) * *(float *)((int)pvVar8 + 0x48));
  if (fVar22 == 0.0) {
    pEVar15 = prc->__vtable;
  }
  else {
    fVar22 = 1.0 / fVar22;
    *(float *)((int)pvVar8 + 0x40) = *(float *)((int)pvVar8 + 0x40) * fVar22;
    *(float *)((int)pvVar8 + 0x44) = *(float *)((int)pvVar8 + 0x44) * fVar22;
    *(float *)((int)pvVar8 + 0x48) = *(float *)((int)pvVar8 + 0x48) * fVar22;
                    /* end of inlined section */
    pEVar15 = prc->__vtable;
  }
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
  ppEVar20 = this->m_pModels;
  iVar17 = 4;
  (*(code *)pEVar15[1].LineList)((int)&prc->m_pdl + (int)*(short *)&pEVar15[1].QuadList,pvVar8,2);
  SetTrackAnim__15EAnimControlleriUi(&this->m_ac,1,this->m_nIdleAnimationID[8]);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_1de8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  _nCurPixelColor = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_1df0 = 0;
                    /* end of inlined section */
  local_1dec = 0;
  CalcOrientMatrix__15EAnimControllerRC5EVec3N21R5EMat4
            ((EVec3 *)nCurPixelColor,(EVec3 *)&local_1df0,&this->m_vScale,&mSimOrient);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_lastComputeFrame = -1;
                    /* end of inlined section */
  Compute__15EAnimControllerRC5EMat4(&this->m_ac,&mSimOrient);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_lastComputeFrame = -1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_rptr.h */
                    /* end of inlined section */
  CopyMatrices__7ERModelP3ERCP5EMat4i
            (prc,(this->m_ac).m_mNodes,(((this->m_ac).m_pRCharacter.m_p)->m_nodes).field0_0x0.m_size
            );
  local_b4 = &y;
  do {
    if (*ppEVar20 != (ERModel *)0x0) {
      Draw__7ERModelP3ERCUi(*ppEVar20,prc,1);
    }
    iVar17 = iVar17 + -1;
    ppEVar20 = ppEVar20 + 1;
  } while (-1 < iVar17);
  if (this->m_pGlassesModel != (ERModel *)0x0) {
    Draw__7ERModelP3ERCUi(this->m_pGlassesModel,prc,5);
  }
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.pfnAllocAlign = (undefined1 *)0x0;
  td.pfnFree = (undefined1 *)0x0;
  td.flags = 0;
  td.imageFormat = '\x01';
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.paletteFormat = '\0';
  td.bitsPerImagePixel = ' ';
                    /* end of inlined section */
  td.xsize = 0x40;
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.bitsPerPaletteEntry = '\0';
  td.paletteSize = 0;
  td.mipMapLevels = 0;
  td.mipMapShift = 0.0;
                    /* end of inlined section */
  td.ysize = 0x40;
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  lVar14 = (*(code *)pEVar2[7].ManagedShutdown)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[7].ManagedStartup,
                      &td);
  (*(code *)pRenderSurface->__vtable[1].GetFlags)
            ((int)&pRenderSurface->m_xsize + (int)*(short *)&pRenderSurface->__vtable[1].SetFlags,
             lVar14);
  (*(code *)prc->__vtable[1].SetRasterModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].DisableRasterModes,0,5);
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[9].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 9),uVar13);
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[6].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[6].ManagedStartup,uVar12);
  iVar21 = (int)lVar14;
  (**(code **)(*(int *)(iVar21 + 0x20) + 0x2c))
            (iVar21 + *(short *)(*(int *)(iVar21 + 0x20) + 0x28),0);
  iVar17 = (**(code **)(*(int *)(iVar21 + 0x20) + 0x34))
                     (iVar21 + *(short *)(*(int *)(iVar21 + 0x20) + 0x30),0,&x,local_b4);
  pEVar5 = this->m_pFaceImage->__vtable;
  (*(code *)pEVar5->Validate)
            ((int)&(this->m_pFaceImage->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar5->Test1,
             2);
  pEVar5 = this->m_pFaceImage->__vtable;
  piVar9 = (int *)(*(code *)pEVar5[1].Lock)
                            ((int)&(this->m_pFaceImage->m_textureDef).pfnAllocAlign +
                             (int)*(short *)&pEVar5[1].ETexture);
  pEVar5 = this->m_pFaceImage->__vtable;
  iVar10 = (**(code **)(pEVar5 + 1))
                     ((int)&(this->m_pFaceImage->m_textureDef).pfnAllocAlign +
                      (int)*(short *)&pEVar5->Select,0,&x,local_b4);
  __11ERTQuantize(&Quantize);
  Init__11ERTQuantizeUiUiPFUi_PvPFPv_vb
            (&Quantize,0x100,0x7c00,DefaultAlloc__4ESimUi,DefaultFree__4ESimPv,true);
  y = 0;
  do {
    iVar18 = y * 0x40;
    x = 0;
    do {
      puVar16 = (undefined4 *)((iVar18 + x) * 4 + iVar17);
      nCurPixelColor._0_2_ =
           CONCAT11(*(undefined *)((int)puVar16 + 1),*(undefined *)((iVar18 + x) * 4 + iVar17));
      nCurPixelColor = (uchar  [3])CONCAT12((char)((uint)*puVar16 >> 0x10),nCurPixelColor._0_2_);
      _nCurPixelColor = _nCurPixelColor & 0xff000000 | (uint)(uint3)nCurPixelColor;
      AddPixel__11ERTQuantizePUc(&Quantize,nCurPixelColor);
      x = x + 1;
    } while (x < 0x20);
    y = y + 1;
  } while (y < 0x20);
  iVar18 = 0;
  Compute__11ERTQuantize(&Quantize);
  iVar11 = GetPaletteSize__11ERTQuantize(&Quantize);
  if (0 < iVar11) {
    do {
      iVar19 = iVar18 + 1;
      GetPaletteEntry__11ERTQuantizeiPUc(&Quantize,iVar18,nCurPixelColor);
      *piVar9 = -0x1000000;
      iVar18 = (_nCurPixelColor & 0xff) - 0x1000000;
      *piVar9 = iVar18;
      iVar18 = iVar18 + (_nCurPixelColor >> 8 & 0xff) * 0x100;
      *piVar9 = iVar18;
      *piVar9 = iVar18 + (_nCurPixelColor >> 0x10 & 0xff) * 0x10000;
      piVar9 = piVar9 + 1;
      iVar18 = iVar19;
    } while (iVar19 < iVar11);
  }
  y = 0;
  do {
    iVar18 = 0x1f - y;
    iVar11 = y * 0x40;
    x = 0;
    do {
      puVar16 = (undefined4 *)((iVar11 + x) * 4 + iVar17);
      nCurPixelColor._0_2_ =
           CONCAT11(*(undefined *)((int)puVar16 + 1),*(undefined *)((iVar11 + x) * 4 + iVar17));
      nCurPixelColor = (uchar  [3])CONCAT12((char)((uint)*puVar16 >> 0x10),nCurPixelColor._0_2_);
      _nCurPixelColor = _nCurPixelColor & 0xff000000 | (uint)(uint3)nCurPixelColor;
      iVar19 = GetClosestColor__11ERTQuantizePUc(&Quantize,nCurPixelColor);
      *(char *)(iVar10 + iVar18 * 0x20 + x) = (char)iVar19;
      x = x + 1;
    } while (x < 0x20);
    y = y + 1;
  } while (y < 0x20);
  (**(code **)(*(int *)(iVar21 + 0x20) + 0x44))(iVar21 + *(short *)(*(int *)(iVar21 + 0x20) + 0x40))
  ;
  pEVar5 = this->m_pFaceImage->__vtable;
  (*(code *)pEVar5[1].Invalidate)
            ((int)&(this->m_pFaceImage->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pEVar5[1].Unlock);
  while (lVar14 != 0) {
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar2[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar2[8].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 8),lVar14);
    lVar14 = 0;
  }
  Deallocate__11ERTQuantize(&Quantize);
  if (pHeapPointer == (void *)0x0) {
    FreeScratchMemory__5GlobsPCv(this);
  }
  ___11ERTQuantize(&Quantize,2);
  ___13EPortalWindow(&win,2);
  return;
}

ETexture* ECharedSim::GetFaceImage() {
	int x;
	int y;
	ETextureDef td;
	ETexture *pNewFaceTexture;
	u32 *pNewColor;
	u8 *pNewPixel;
	u32 *pOrigColor;
	u8 *pOrigPixel;
	
  EGlobalManagerClient__vtable *pEVar1;
  ETexture__vtable *pEVar2;
  ETexture *pEVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  ETextureDef td;
  int x;
  int y;
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
  
  td.bitsPerPaletteEntry = ' ';
  td.ysize = 0x20;
  td.xsize = 0x20;
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  td.bitsPerImagePixel = '\b';
  td.paletteSize = 0x100;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  td.flags = 3;
  td.paletteFormat = '\x02';
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.pfnAllocAlign = (undefined1 *)0x0;
  td.pfnFree = (undefined1 *)0x0;
  td.mipMapLevels = 0;
  td.mipMapShift = 0.0;
                    /* end of inlined section */
  td.imageFormat = '\0';
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  pEVar3 = (ETexture *)
           (*(code *)pEVar1[7].ManagedShutdown)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[7].ManagedStartup,
                      &td);
  (*(code *)pEVar3->__vtable->Validate)
            ((int)&(pEVar3->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar3->__vtable->Test1,2)
  ;
  iVar4 = (*(code *)pEVar3->__vtable[1].Lock)
                    ((int)&(pEVar3->m_textureDef).pfnAllocAlign +
                     (int)*(short *)&pEVar3->__vtable[1].ETexture);
  iVar5 = (**(code **)(pEVar3->__vtable + 1))
                    ((int)&(pEVar3->m_textureDef).pfnAllocAlign +
                     (int)*(short *)&pEVar3->__vtable->Select,0,&x,&y);
  pEVar2 = this->m_pFaceImage->__vtable;
  (*(code *)pEVar2->Validate)
            ((int)&(this->m_pFaceImage->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar2->Test1,
             1);
  pEVar2 = this->m_pFaceImage->__vtable;
  iVar6 = (*(code *)pEVar2[1].Lock)
                    ((int)&(this->m_pFaceImage->m_textureDef).pfnAllocAlign +
                     (int)*(short *)&pEVar2[1].ETexture);
  pEVar2 = this->m_pFaceImage->__vtable;
  iVar7 = (**(code **)(pEVar2 + 1))
                    ((int)&(this->m_pFaceImage->m_textureDef).pfnAllocAlign +
                     (int)*(short *)&pEVar2->Select,0,&x,&y);
  x = 0;
  do {
    *(undefined4 *)(x * 4 + iVar4) = *(undefined4 *)(x * 4 + iVar6);
    x = x + 1;
  } while (x < 0x100);
  x = 0;
  do {
    *(undefined *)(iVar5 + x) = *(undefined *)(iVar7 + x);
    x = x + 1;
  } while (x < 0x400);
  pEVar2 = this->m_pFaceImage->__vtable;
  (*(code *)pEVar2[1].Invalidate)
            ((int)&(this->m_pFaceImage->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pEVar2[1].Unlock);
  (*(code *)pEVar3->__vtable[1].Invalidate)
            ((int)&(pEVar3->m_textureDef).pfnAllocAlign + (int)*(short *)&pEVar3->__vtable[1].Unlock
            );
  return pEVar3;
}

void ECharedSim::ScaleBone(int nBone, EVec3 &vScale, ERCharacter *pCharacter, EMat4 *mNodes) {
	int index;
	
  void *pvVar1;
  undefined8 unaff_s0;
  EMat4 *this;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  this = mNodes + nBone;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pvVar1 = (pCharacter->m_nodes).field0_0x0.m_p;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  PreTranslate__5EMat4RC5EVec3(this,(EVec3 *)((int)pvVar1 + nBone * 0xb0 + 4));
  PreScale__5EMat4RC5EVec3(this,vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_60 = -*(float *)((int)pvVar1 + nBone * 0xb0 + 4);
  local_58 = -*(float *)((int)pvVar1 + nBone * 0xb0 + 0xc);
  local_5c = -*(float *)((int)pvVar1 + nBone * 0xb0 + 8);
                    /* end of inlined section */
  PreTranslate__5EMat4RC5EVec3(this,(EVec3 *)&local_60);
  return;
}

void ECharedSim::ScaleBones(u32 userParam, EMat4 &mOrient, ERCharacter *pCharacter, EMat4 *mNodes) {
	EVec3 vScale;
	
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EVec3 vScale;
  
  if (_globals.Cheats._52_4_ != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 3.0;
    vScale.field0_0x0.d[1] = 2.0;
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.03;
    PreScale__5EMat4RC5EVec3(mNodes + 0x11,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x13,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x14,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x15,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x16,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x19,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x17,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x1a,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x1b,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x18,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x1c,&vScale);
  }
  cVar1 = *(char *)(userParam + 0xd0);
  if (cVar1 == '\x01') {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
                    /* end of inlined section */
    if (*(int *)(userParam + 0xcc) == 0) {
                    /* end of inlined section */
      if (*(int *)(userParam + 200) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar2 = 1.3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar3 = 1.12;
        vScale.field0_0x0.d[1] = 1.3;
        vScale.field0_0x0.d[0] = 1.12;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar3 = 1.1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.2;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar4 = 1.15;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.2;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar4;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar4;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0xb,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 6,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.2;
        vScale.field0_0x0.d[0] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
        vScale.field0_0x0.d[0] = fVar4;
                    /* end of inlined section */
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar2 = 1.15;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.15;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar3 = 1.1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar2;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar2;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0xb,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 6,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.2;
        vScale.field0_0x0.d[0] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
        vScale.field0_0x0.d[0] = fVar2;
                    /* end of inlined section */
      }
    }
    else {
                    /* end of inlined section */
      if (*(int *)(userParam + 200) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar2 = 1.3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar3 = 1.12;
        vScale.field0_0x0.d[1] = 1.3;
        vScale.field0_0x0.d[0] = 1.12;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar3 = 1.1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.2;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar4 = 1.15;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.2;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar4;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar4;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0xb,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 6,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.4;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.05;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
        vScale.field0_0x0.d[0] = fVar2;
                    /* end of inlined section */
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
        vScale.field0_0x0.d[0] = 1.12;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar2 = 1.1;
        vScale.field0_0x0.d[0] = 1.12;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar3 = 1.2;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar3;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.15;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar4 = 0.9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.15;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar2;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 0xb,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar2;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 6,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.3;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.3;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.3;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.3;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar2;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar4;
        vScale.field0_0x0.d[1] = fVar2;
        PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar2;
        vScale.field0_0x0.d[1] = fVar3;
        PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar4;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar4;
        PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
                    /* end of inlined section */
        vScale.field0_0x0.d[0] = 1.3;
      }
    }
  }
  else {
    if (cVar1 < '\x02') {
      return;
    }
    if (cVar1 != '\x02') {
      return;
    }
                    /* end of inlined section */
    if (*(int *)(userParam + 0xcc) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar2 = 0.9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar3 = 0.8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
      vScale.field0_0x0.d[1] = 0.95;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
      vScale.field0_0x0.d[1] = 0.95;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.95;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.95;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.75;
      vScale.field0_0x0.d[0] = 0.85;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar3;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar3;
      PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar2;
      vScale.field0_0x0.d[1] = fVar3;
      PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar2;
      vScale.field0_0x0.d[1] = fVar3;
      PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.95;
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.98;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar3;
      PreScale__5EMat4RC5EVec3(mNodes + 0x14,&vScale);
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
                    /* end of inlined section */
    if (*(int *)(userParam + 200) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar2 = 0.95;
      vScale.field0_0x0.d[1] = 0.9;
      vScale.field0_0x0.d[0] = 0.95;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar3 = 0.8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar2;
      vScale.field0_0x0.d[1] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar2;
      vScale.field0_0x0.d[1] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.85;
      vScale.field0_0x0.d[1] = 0.75;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar3;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar3;
      PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.83;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar3;
      PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.88;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar3;
      PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar2;
      PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.9;
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.9;
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.9;
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[1] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x14,&vScale);
      return;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar2 = 0.8;
    vScale.field0_0x0.d[0] = 0.9;
    vScale.field0_0x0.d[1] = 0.8;
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar3 = 0.95;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar2;
    PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[0] = fVar3;
    vScale.field0_0x0.d[1] = fVar3;
    PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[0] = fVar3;
    vScale.field0_0x0.d[1] = fVar3;
    PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[0] = fVar3;
    PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[0] = fVar3;
    PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.85;
    vScale.field0_0x0.d[1] = 0.75;
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar2;
    PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar2;
    PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 1.0;
    vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 1.0;
    vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar2;
    PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.88;
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar2;
    PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar3;
    PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[0] = fVar3;
    PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.9;
    vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.9;
    vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.9;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vScale.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
  vScale.field0_0x0.d[1] = 1.0;
  PreScale__5EMat4RC5EVec3(mNodes + 0x14,&vScale);
  return;
}

void ECharedSim::DrawShadow(ERC *prc) {
	ERC *this;
	ERC *this;
	
  EMat4 *this_00;
  EMat4 *this_01;
  float (*paafVar1) [4] [4];
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  EMat4 EStack_d0;
  EMat4 EStack_90;
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
  
                    /* inlined from /eor/src2/engine/e_dl.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/e_dl.h */
  this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
  local_d8 = 0;
  local_dc = 0x3f800000;
  local_e0 = 0x3f800000;
  Scale__5EMat4RC5EVec3(this_00,(EVec3 *)&local_e0);
  local_e0 = 0;
  local_d8 = 0x3c23d70a;
  local_dc = 0;
  PostTranslate__5EMat4RC5EVec3(this_00,(EVec3 *)&local_e0);
  this_01 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  __as__5EMat4RC5EMat4(this_01,&(_7EWindow_m_pCurrentPortalWindow->field0_0x0).m_mLookAt);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  paafVar1 = __opRA3_A3_f__5EMat4(&EStack_90);
  sceVu0MulMatrix(paafVar1,this_01,this_00);
  __as__5EMat4RC5EMat4(this_00,&EStack_90);
  __as__5EMat4RC5EMat4(&EStack_d0,this_00);
                    /* end of inlined section */
  (*(code *)prc->__vtable->RenderSurface)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->AlphaTest,this_00);
  Draw__7ERModelP3ERCUi(this->m_plowResShadowModel,prc,6);
  (*(code *)prc->__vtable->RenderSurface)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->AlphaTest,this_01);
  return;
}

sceVu0FMATRIX& EMat4::operator float (&)[3][3]() {
  return (float (*) [4] [4])this;
}
