// STATUS: NOT STARTED

#include "charedskin.h"

EHeap ECharedSkin::m_MyHeap = {
	/* .m_pFreeHead = */ NULL,
	/* .m_pFreeTail = */ NULL,
	/* .m_pHead = */ NULL,
	/* .m_pEnd = */ NULL,
	/* .m_smallestFailedAlloc = */ 0,
	/* .m_memset = */ false
};

float _huecheat = 0.f;
float _satcheat = 0.f;
float _lumcheat = 0.f;

void ECharedSkin::Update() {
	bool bTextureDrawn;
	unsigned char nCurPixelColor[3];
	u32 nNewPixelColor;
	int pitchX;
	int pitchY;
	u32 i;
	
  ERRleTexture *this_00;
  ETexture__vtable *pEVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ERRleTexture *this_01;
  ERRleTexture *this_02;
  ERRleTexture *this_03;
  ERRleTexture *this_04;
  ERRleTexture *this_05;
  ERRleTexture *this_06;
  ERRleTexture *this_07;
  ERRleTexture *this_08;
  ERRleTexture *this_09;
  ERRleTexture *this_10;
  ERRleTexture *this_11;
  ERRleTexture *this_12;
  ERRleTexture *pEVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  uint uVar6;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  uchar nCurPixelColor [3];
  int pitchX;
  int pitchY;
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
  
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  pEVar5 = this->m_pSkinShdr;
  if (pEVar5 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(pEVar5);
  }
  this_00 = this->m_pShirtOneShdr;
  if (this_00 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_00);
    this_01 = this->m_pShirtTwoShdr;
  }
  else {
    this_01 = this->m_pShirtTwoShdr;
  }
  if (this_01 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_01);
    this_02 = this->m_pShoeShdr;
  }
  else {
    this_02 = this->m_pShoeShdr;
  }
  if (this_02 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_02);
    this_03 = this->m_pPantsOneShdr;
  }
  else {
    this_03 = this->m_pPantsOneShdr;
  }
  if (this_03 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_03);
    this_04 = this->m_pPantsTwoShdr;
  }
  else {
    this_04 = this->m_pPantsTwoShdr;
  }
  if (this_04 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_04);
    this_05 = this->m_pFaceShdr;
  }
  else {
    this_05 = this->m_pFaceShdr;
  }
  if (this_05 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_05);
    this_06 = this->m_pEyeWhiteShdr;
  }
  else {
    this_06 = this->m_pEyeWhiteShdr;
  }
  if (this_06 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_06);
    this_07 = this->m_pEyeShdr;
  }
  else {
    this_07 = this->m_pEyeShdr;
  }
  if (this_07 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_07);
    this_08 = this->m_pFacialHairShdr;
  }
  else {
    this_08 = this->m_pFacialHairShdr;
  }
  if (this_08 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_08);
    this_09 = this->m_pLipstickShdr;
  }
  else {
    this_09 = this->m_pLipstickShdr;
  }
  if (this_09 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_09);
    this_10 = this->m_pEyeshadowShdr;
  }
  else {
    this_10 = this->m_pEyeshadowShdr;
  }
  if (this_10 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_10);
    this_11 = this->m_pHairHatShdr;
  }
  else {
    this_11 = this->m_pHairHatShdr;
  }
  if (this_11 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_11);
    this_12 = this->m_pHairHatTwoShdr;
  }
  else {
    this_12 = this->m_pHairHatTwoShdr;
  }
  if (this_12 != (ERRleTexture *)0x0) {
    RestartDecompression__12ERRleTexture(this_12);
  }
  if (this_12 != (ERRleTexture *)0x0 ||
      (this_11 != (ERRleTexture *)0x0 ||
      (this_10 != (ERRleTexture *)0x0 ||
      (this_09 != (ERRleTexture *)0x0 ||
      (this_08 != (ERRleTexture *)0x0 ||
      (this_07 != (ERRleTexture *)0x0 ||
      (this_06 != (ERRleTexture *)0x0 ||
      (this_05 != (ERRleTexture *)0x0 ||
      (this_04 != (ERRleTexture *)0x0 ||
      (this_03 != (ERRleTexture *)0x0 ||
      (this_02 != (ERRleTexture *)0x0 ||
      (this_01 != (ERRleTexture *)0x0 ||
      (this_00 != (ERRleTexture *)0x0 || pEVar5 != (ERRleTexture *)0x0))))))))))))) {
    uVar6 = 0;
    pEVar1 = this->m_pCustomTexture->__vtable;
    (*(code *)pEVar1->Validate)
              ((int)&(this->m_pCustomTexture->m_textureDef).pfnAllocAlign +
               (int)*(short *)&pEVar1->Test1,2);
    pEVar1 = this->m_pCustomTexture->__vtable;
    puVar2 = (uint *)(**(code **)(pEVar1 + 1))
                               ((int)&(this->m_pCustomTexture->m_textureDef).pfnAllocAlign +
                                (int)*(short *)&pEVar1->Select,0,&pitchX,&pitchY);
    do {
      uVar3 = GetNextPixel__12ERRleTexture(this->m_pSkinShdr);
      if (this->m_pShirtOneShdr != (ERRleTexture *)0x0) {
        uVar4 = GetNextPixel__12ERRleTexture(this->m_pShirtOneShdr);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
      }
      if (this->m_pShirtTwoShdr == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pShoeShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(this->m_pShirtTwoShdr);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pShoeShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pPantsOneShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pPantsOneShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pPantsTwoShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pPantsTwoShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pFaceShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pFaceShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pEyeWhiteShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pEyeWhiteShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pEyeShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pEyeShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pFacialHairShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pFacialHairShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pLipstickShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pLipstickShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pEyeshadowShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pEyeshadowShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pHairHatShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pHairHatShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        pEVar5 = this->m_pHairHatTwoShdr;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        pEVar5 = this->m_pHairHatTwoShdr;
      }
      if (pEVar5 == (ERRleTexture *)0x0) {
        *puVar2 = uVar3;
      }
      else {
        uVar4 = GetNextPixel__12ERRleTexture(pEVar5);
        uVar3 = DeterminePixelColor__11ECharedSkinUiUiPUc(this,uVar3,uVar4,nCurPixelColor);
        *puVar2 = uVar3;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar6 < 0x10000);
    pEVar1 = this->m_pCustomTexture->__vtable;
    (*(code *)pEVar1[1].Invalidate)
              ((int)&(this->m_pCustomTexture->m_textureDef).pfnAllocAlign +
               (int)*(short *)&pEVar1[1].Unlock);
  }
  return;
}

void ECharedSkin::Init() {
	ETextureDef td;
	EShaderDef sd;
	int i;
	
  EGlobalManagerClient__vtable *pEVar1;
  EGraphics *pEVar2;
  EShader *pEVar3;
  char *pcVar4;
  ERRleTexture *pEVar5;
  EShaderRenderPassDef *pEVar6;
  int iVar7;
  ETextureDef td;
  EShaderDef sd;
  
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  pEVar6 = sd.rp;
                    /* end of inlined section */
  this->m_pSkinShdr = (ERRleTexture *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
  iVar7 = 1;
                    /* end of inlined section */
  this->m_pShirtOneShdr = (ERRleTexture *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
                    /* end of inlined section */
  this->m_pShirtTwoShdr = (ERRleTexture *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
                    /* end of inlined section */
  this->m_pPantsOneShdr = (ERRleTexture *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
                    /* end of inlined section */
  this->m_pPantsTwoShdr = (ERRleTexture *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
                    /* end of inlined section */
  this->m_pShoeShdr = (ERRleTexture *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
                    /* end of inlined section */
  this->m_pFaceShdr = (ERRleTexture *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
                    /* end of inlined section */
  this->m_pEyeShdr = (ERRleTexture *)0x0;
  this->m_pFacialHairShdr = (ERRleTexture *)0x0;
  this->m_pHairHatShdr = (ERRleTexture *)0x0;
  this->m_pHairHatTwoShdr = (ERRleTexture *)0x0;
  this->m_pLipstickShdr = (ERRleTexture *)0x0;
  this->m_pEyeshadowShdr = (ERRleTexture *)0x0;
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.pfnAllocAlign = (undefined1 *)0x0;
  td.pfnFree = (undefined1 *)0x0;
  td.mipMapLevels = 0;
  td.mipMapShift = 0.0;
  do {
    pEVar6->pTexture = (ETexture *)0x0;
    iVar7 = iVar7 + -1;
    pEVar6->rasterModes = 8;
    pEVar6->flags = 0x18;
    pEVar6->blendA = '\0';
    pEVar6->blendB = '\x01';
    pEVar6->blendC = '\0';
    pEVar6->blendD = '\x01';
    pEVar6->blendFix = 0x80;
    pEVar6->combine = '\0';
    pEVar6->textureGen = '\0';
    pEVar6->alphaTestThreshold = 0.5;
    pEVar6 = pEVar6 + 1;
  } while (iVar7 != -1);
                    /* end of inlined section */
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
                    /* inlined from /eor/src2/engine/e_material.h */
  sd.mat.vDiffuseColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[3] = 1.0;
  sd.flags = 0x817;
  sd.geometryModes = 8;
  sd.nRenderPasses = '\x01';
                    /* end of inlined section */
  td.bitsPerImagePixel = ' ';
  td.xsize = 0x100;
  td.flags = 0;
  td.imageFormat = '\x01';
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
  sd.sortMode = '\0';
  sd.sortValue = 0;
                    /* end of inlined section */
  td.ysize = 0x100;
  td.paletteFormat = '\0';
  td.bitsPerPaletteEntry = '\0';
  td.paletteSize = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  sd.rp[0].pTexture =
       (ETexture *)
       (*(code *)pEVar1[7].ManagedShutdown)
                 ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[7].ManagedStartup,&td)
  ;
  pEVar2 = _pGfx;
  this->m_pCustomTexture = sd.rp[0].pTexture;
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  pEVar3 = (EShader *)
           (*(code *)pEVar1[0xb].EGlobalManagerClient)
                     ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0xb),&sd);
  this->m_pCustomShdr = pEVar3;
  iVar7 = 0xc;
  pcVar4 = this->m_nColorOffset + 0xc;
  do {
    *pcVar4 = '\x01';
    iVar7 = iVar7 + -1;
    pcVar4 = pcVar4 + -1;
  } while (-1 < iVar7);
  this->m_nColorOffset[0] = '\0';
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
                    /* end of inlined section */
  this->m_nColorOffset[6] = '\0';
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
  pEVar5 = (ERRleTexture *)
           AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,0xc9e921e7,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pEyeWhiteShdr = pEVar5;
  SetShader__11ECharedSkinUcUi(this,'\b',0xd57882b9);
  return;
}

void ECharedSkin::Cleanup() {
  EGlobalManagerClient__vtable *pEVar1;
  EShader *pEVar2;
  ETexture *pEVar3;
  ERRleTexture *pEVar4;
  
  if (this->m_pSkinShdr == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pShirtOneShdr;
  }
  else {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pSkinShdr,0);
    DelRef__9EResource(&this->m_pSkinShdr->field0_0x0);
    pEVar4 = this->m_pShirtOneShdr;
  }
  if (pEVar4 == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pShirtTwoShdr;
  }
  else {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,1);
    DelRef__9EResource(&this->m_pShirtOneShdr->field0_0x0);
    pEVar4 = this->m_pShirtTwoShdr;
  }
  if (pEVar4 == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pPantsOneShdr;
  }
  else {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,2);
    DelRef__9EResource(&this->m_pShirtTwoShdr->field0_0x0);
    pEVar4 = this->m_pPantsOneShdr;
  }
  if (pEVar4 == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pPantsTwoShdr;
  }
  else {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,3);
    DelRef__9EResource(&this->m_pPantsOneShdr->field0_0x0);
    pEVar4 = this->m_pPantsTwoShdr;
  }
  if (pEVar4 == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pShoeShdr;
  }
  else {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,4);
    DelRef__9EResource(&this->m_pPantsTwoShdr->field0_0x0);
    pEVar4 = this->m_pShoeShdr;
  }
  if (pEVar4 == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pFaceShdr;
  }
  else {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,5);
    DelRef__9EResource(&this->m_pShoeShdr->field0_0x0);
    pEVar4 = this->m_pFaceShdr;
  }
  if (pEVar4 == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pEyeShdr;
  }
  else {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,6);
    DelRef__9EResource(&this->m_pFaceShdr->field0_0x0);
    pEVar4 = this->m_pEyeShdr;
  }
  if (pEVar4 != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,7);
    DelRef__9EResource(&this->m_pEyeShdr->field0_0x0);
  }
  if (this->m_pEyeWhiteShdr == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pFacialHairShdr;
  }
  else {
    DelRef__9EResource(&this->m_pEyeWhiteShdr->field0_0x0);
    pEVar4 = this->m_pFacialHairShdr;
  }
  if (pEVar4 == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pHairHatShdr;
  }
  else {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,8);
    DelRef__9EResource(&this->m_pFacialHairShdr->field0_0x0);
    pEVar4 = this->m_pHairHatShdr;
  }
  if (pEVar4 != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,9);
    DelRef__9EResource(&this->m_pHairHatShdr->field0_0x0);
  }
  if (this->m_pHairHatTwoShdr == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pLipstickShdr;
  }
  else {
    DelRef__9EResource(&this->m_pHairHatTwoShdr->field0_0x0);
    pEVar4 = this->m_pLipstickShdr;
  }
  if (pEVar4 == (ERRleTexture *)0x0) {
    pEVar4 = this->m_pEyeshadowShdr;
  }
  else {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,0xb);
    DelRef__9EResource(&this->m_pLipstickShdr->field0_0x0);
    pEVar4 = this->m_pEyeshadowShdr;
  }
  if (pEVar4 == (ERRleTexture *)0x0) {
    pEVar2 = this->m_pCustomShdr;
    while (pEVar2 != (EShader *)0x0) {
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[3].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[0xb].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[0xb].ManagedStartup,
                 this->m_pCustomShdr);
      this->m_pCustomShdr = (EShader *)0x0;
LAB_00115000:
      pEVar2 = this->m_pCustomShdr;
    }
    pEVar3 = this->m_pCustomTexture;
    while (pEVar3 != (ETexture *)0x0) {
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[3].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[8].EGlobalManagerClient)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 8),
                 this->m_pCustomTexture);
      this->m_pCustomTexture = (ETexture *)0x0;
      pEVar3 = this->m_pCustomTexture;
    }
    return;
  }
  RestorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar4,0xc);
  DelRef__9EResource(&this->m_pEyeshadowShdr->field0_0x0);
  goto LAB_00115000;
}

void ECharedSkin::ResetColors() {
	int i;
	
  char *pcVar1;
  int iVar2;
  ERRleTexture *pShdr;
  
  if (this->m_pSkinShdr == (ERRleTexture *)0x0) {
    pShdr = this->m_pShirtOneShdr;
  }
  else {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pSkinShdr,0);
    pShdr = this->m_pShirtOneShdr;
  }
  if (pShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,pShdr,1);
  }
  if (this->m_pShirtTwoShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pShirtTwoShdr,2);
  }
  if (this->m_pPantsOneShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pPantsOneShdr,3);
  }
  if (this->m_pPantsTwoShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pPantsTwoShdr,4);
  }
  if (this->m_pShoeShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pShoeShdr,5);
  }
  if (this->m_pFaceShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pFaceShdr,6);
  }
  if (this->m_pEyeShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pEyeShdr,7);
  }
  if (this->m_pFacialHairShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pFacialHairShdr,8);
  }
  if (this->m_pHairHatShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pHairHatShdr,9);
  }
  if (this->m_pLipstickShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pLipstickShdr,0xb);
  }
  if (this->m_pEyeshadowShdr != (ERRleTexture *)0x0) {
    RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pEyeshadowShdr,0xc);
  }
  iVar2 = 0xc;
  pcVar1 = this->m_nColorOffset + 0xc;
  do {
    *pcVar1 = '\x01';
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar1 + -1;
  } while (-1 < iVar2);
  this->m_nColorOffset[6] = '\0';
  this->m_nColorOffset[0] = '\0';
  return;
}

void ECharedSkin::SetShader(u8 nLayer, u32 nShaderID) {
	u32 i;
	EVec3 vHSL;
	u32 nPaletteSize;
	u32 nAlpha;
	u32 *pCurPixel;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	u32 id;
	ERRleTexture *this;
	u32 i;
	EVec3 vHSL;
	u32 nPaletteSize;
	u32 nAlpha;
	u32 *pCurPixel;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	u32 id;
	ERRleTexture *this;
	u32 id;
	u32 id;
	u32 id;
	u32 id;
	u32 id;
	u32 id;
	u32 id;
	u32 id;
	u32 id;
	u32 id;
	u32 id;
	
  uint uVar1;
  ERRleTexture *pEVar2;
  uint *puVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar4;
  undefined8 unaff_s2;
  uint *puVar5;
  undefined8 unaff_s3;
  int iVar6;
  undefined8 unaff_s4;
  uint uVar7;
  undefined8 unaff_s5;
  uint uVar8;
  undefined8 unaff_s6;
  uint uVar9;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar10;
  float fVar11;
  float fVar12;
  EVec3 vHSL;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
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
  
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  uVar9 = (int)(char)nLayer & 0xff;
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
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
  switch(uVar9) {
  case 1:
    if (this->m_pSkinShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pSkinShdr,0);
      DelRef__9EResource(&this->m_pSkinShdr->field0_0x0);
      this->m_pSkinShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pSkinShdr = pEVar2;
      StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vHSL.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vHSL.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vHSL.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
      puVar5 = this->m_pSkinShdr->m_nPalette;
                    /* end of inlined section */
      uVar8 = 0x10;
      if (*(int *)&this->m_pSkinShdr->m_bFourBitImage == 0) {
        uVar8 = 0x100;
      }
      if (_globals.Cheats._60_4_ == 0) {
        if (_globals.Cheats._56_4_ == 0) {
          switch((int)(((byte)this->m_nColorOffset[0] - 1) * 0x1000000) >> 0x18) {
          case 0:
            fVar11 = 0.015;
            fVar10 = 0.04;
            fVar12 = -0.1;
            break;
          case 1:
            fVar11 = 0.028;
            fVar10 = -0.03;
            fVar12 = -0.2;
            break;
          case 2:
            fVar11 = 0.015;
            fVar10 = -0.008;
            fVar12 = -0.27;
            break;
          case 3:
            fVar11 = 0.015;
            fVar10 = -0.005;
            fVar12 = -0.4;
            break;
          case 4:
            fVar11 = 0.03;
            fVar10 = -0.01;
            fVar12 = -0.5;
            break;
          case 5:
            fVar11 = 0.03;
            fVar10 = -0.08;
            fVar12 = -0.55;
            break;
          case 6:
            fVar11 = 0.0;
            fVar10 = -0.0125;
            fVar12 = 0.045;
            break;
          default:
            fVar11 = 0.007;
            fVar10 = -0.006;
            fVar12 = -0.03;
          }
        }
        else {
          fVar12 = -0.15;
          fVar10 = -0.15;
          switch((int)(((byte)this->m_nColorOffset[0] - 1) * 0x1000000) >> 0x18) {
          case 0:
            fVar11 = 0.2;
            break;
          case 1:
            fVar11 = 0.3;
            break;
          case 2:
            fVar11 = 0.4;
            break;
          case 3:
            fVar11 = 0.5;
            break;
          case 4:
            fVar11 = -0.4;
            break;
          case 5:
            fVar11 = -0.29;
            break;
          case 6:
            fVar11 = -0.12;
            break;
          default:
            fVar11 = 0.1;
            fVar10 = -0.15;
            fVar12 = -0.15;
          }
        }
      }
      else {
        fVar11 = -0.38;
        fVar12 = -0.15;
        fVar10 = 0.0;
      }
      uVar7 = 0;
      if (uVar8 != 0) {
        iVar6 = (uVar9 - 1) * 0x400;
        do {
          puVar3 = (uint *)((int)this->m_nOriginalPalette + iVar6);
          uVar1 = *puVar3;
          uVar4 = uVar1 & 0xff000000;
          if (uVar4 == 0) {
            *puVar5 = 0;
          }
          else {
            RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar1,&vHSL);
            if (1.0 <= vHSL.field0_0x0.d[0]) {
              *puVar5 = *puVar3;
            }
            else {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fVar11;
                    /* end of inlined section */
              if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
              }
              else if (vHSL.field0_0x0.d[0] < 0.0) {
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
              }
                    /* end of inlined section */
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fVar10;
              if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[1] = 1.0;
              }
              else if (vHSL.field0_0x0.d[1] < 0.0) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[1] = 0.0;
              }
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar12;
              if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = 1.0;
              }
              else if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = 0.0;
              }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              local_cc = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
              local_c8 = vHSL.field0_0x0.d[2];
              local_d0 = vHSL.field0_0x0.d[0];
              uVar1 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_d0);
              *puVar5 = uVar4 + uVar1;
            }
          }
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar7 < uVar8);
      }
    }
    break;
  case 2:
    if (this->m_pShirtOneShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pShirtOneShdr,1);
      DelRef__9EResource(&this->m_pShirtOneShdr->field0_0x0);
      this->m_pShirtOneShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pShirtOneShdr = pEVar2;
      if (_globals.Cheats._60_4_ == 0) {
        StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,1);
      }
      else {
        SmurfClothes__11ECharedSkinP12ERRleTexturei(this,pEVar2,1);
      }
    }
    break;
  case 3:
    if (this->m_pShirtTwoShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pShirtTwoShdr,2);
      DelRef__9EResource(&this->m_pShirtTwoShdr->field0_0x0);
      this->m_pShirtTwoShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pShirtTwoShdr = pEVar2;
      if (_globals.Cheats._60_4_ == 0) {
        StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,2);
      }
      else {
        SmurfClothes__11ECharedSkinP12ERRleTexturei(this,pEVar2,2);
      }
    }
    break;
  case 4:
    if (this->m_pPantsOneShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pPantsOneShdr,3);
      DelRef__9EResource(&this->m_pPantsOneShdr->field0_0x0);
      this->m_pPantsOneShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pPantsOneShdr = pEVar2;
      if (_globals.Cheats._60_4_ == 0) {
        StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,3);
      }
      else {
        SmurfClothes__11ECharedSkinP12ERRleTexturei(this,pEVar2,3);
      }
    }
    break;
  case 5:
    if (this->m_pPantsTwoShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pPantsTwoShdr,4);
      DelRef__9EResource(&this->m_pPantsTwoShdr->field0_0x0);
      this->m_pPantsTwoShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pPantsTwoShdr = pEVar2;
      if (_globals.Cheats._60_4_ == 0) {
        StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,4);
      }
      else {
        SmurfClothes__11ECharedSkinP12ERRleTexturei(this,pEVar2,4);
      }
    }
    break;
  case 6:
    if (this->m_pShoeShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pShoeShdr,5);
      DelRef__9EResource(&this->m_pShoeShdr->field0_0x0);
      this->m_pShoeShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pShoeShdr = pEVar2;
      if (_globals.Cheats._60_4_ == 0) {
        StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,5);
      }
      else {
        SmurfClothes__11ECharedSkinP12ERRleTexturei(this,pEVar2,5);
      }
    }
    break;
  case 7:
    if (this->m_pFaceShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pFaceShdr,6);
      DelRef__9EResource(&this->m_pFaceShdr->field0_0x0);
      this->m_pFaceShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pFaceShdr = pEVar2;
      StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,6);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vHSL.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vHSL.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vHSL.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
      puVar5 = this->m_pFaceShdr->m_nPalette;
                    /* end of inlined section */
      uVar8 = 0x10;
      if (*(int *)&this->m_pFaceShdr->m_bFourBitImage == 0) {
        uVar8 = 0x100;
      }
      if (_globals.Cheats._60_4_ == 0) {
        if (_globals.Cheats._56_4_ == 0) {
          switch((int)(((byte)this->m_nColorOffset[0] - 1) * 0x1000000) >> 0x18) {
          case 0:
            fVar11 = 0.015;
            fVar10 = 0.04;
            fVar12 = -0.1;
            break;
          case 1:
            fVar11 = 0.028;
            fVar10 = -0.03;
            fVar12 = -0.2;
            break;
          case 2:
            fVar11 = 0.015;
            fVar10 = -0.008;
            fVar12 = -0.27;
            break;
          case 3:
            fVar11 = 0.015;
            fVar10 = -0.005;
            fVar12 = -0.4;
            break;
          case 4:
            fVar11 = 0.03;
            fVar10 = -0.01;
            fVar12 = -0.5;
            break;
          case 5:
            fVar11 = 0.03;
            fVar10 = -0.08;
            fVar12 = -0.55;
            break;
          case 6:
            fVar11 = 0.0;
            fVar10 = -0.0125;
            fVar12 = 0.045;
            break;
          default:
            fVar11 = 0.007;
            fVar10 = -0.006;
            fVar12 = -0.03;
          }
        }
        else {
          fVar12 = -0.15;
          fVar10 = -0.15;
          switch((int)(((byte)this->m_nColorOffset[0] - 1) * 0x1000000) >> 0x18) {
          case 0:
            fVar11 = 0.2;
            break;
          case 1:
            fVar11 = 0.3;
            break;
          case 2:
            fVar11 = 0.4;
            break;
          case 3:
            fVar11 = 0.5;
            break;
          case 4:
            fVar11 = -0.4;
            break;
          case 5:
            fVar11 = -0.29;
            break;
          case 6:
            fVar11 = -0.12;
            break;
          default:
            fVar11 = 0.1;
            fVar10 = -0.15;
            fVar12 = -0.15;
          }
        }
      }
      else {
        fVar11 = -0.38;
        fVar12 = -0.15;
        fVar10 = 0.0;
      }
      uVar7 = 0;
      if (uVar8 != 0) {
        iVar6 = (uVar9 - 1) * 0x400;
        do {
          puVar3 = (uint *)((int)this->m_nOriginalPalette + iVar6);
          uVar1 = *puVar3;
          uVar4 = uVar1 & 0xff000000;
          if (uVar4 == 0) {
            *puVar5 = 0;
          }
          else {
            RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar1,&vHSL);
            if (1.0 <= vHSL.field0_0x0.d[0]) {
              *puVar5 = *puVar3;
            }
            else {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fVar11;
                    /* end of inlined section */
              if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
              }
              else if (vHSL.field0_0x0.d[0] < 0.0) {
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
              }
                    /* end of inlined section */
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fVar10;
              if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[1] = 1.0;
              }
              else if (vHSL.field0_0x0.d[1] < 0.0) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[1] = 0.0;
              }
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar12;
              if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = 1.0;
              }
              else if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = 0.0;
              }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              local_bc = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
              local_b8 = vHSL.field0_0x0.d[2];
              local_c0 = vHSL.field0_0x0.d[0];
              uVar1 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_c0);
              *puVar5 = uVar4 + uVar1;
            }
          }
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar7 < uVar8);
      }
    }
    break;
  case 8:
    if (this->m_pEyeShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pEyeShdr,7);
      DelRef__9EResource(&this->m_pEyeShdr->field0_0x0);
      this->m_pEyeShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pEyeShdr = pEVar2;
      StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,7);
    }
    break;
  case 9:
    if (this->m_pFacialHairShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pFacialHairShdr,8);
      DelRef__9EResource(&this->m_pFacialHairShdr->field0_0x0);
      this->m_pFacialHairShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pFacialHairShdr = pEVar2;
      if (_globals.Cheats._60_4_ == 0) {
        StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,8);
      }
      else {
        SmurfHair__11ECharedSkinP12ERRleTexturei(this,pEVar2,8);
      }
    }
    break;
  case 10:
    if (this->m_pHairHatShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pHairHatShdr,9);
      DelRef__9EResource(&this->m_pHairHatShdr->field0_0x0);
      this->m_pHairHatShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pHairHatShdr = pEVar2;
      if (_globals.Cheats._60_4_ == 0) {
        StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,9);
      }
      else {
        SmurfHair__11ECharedSkinP12ERRleTexturei(this,pEVar2,9);
      }
    }
    break;
  case 0xb:
    if (this->m_pHairHatTwoShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pHairHatTwoShdr,10);
      DelRef__9EResource(&this->m_pHairHatTwoShdr->field0_0x0);
      this->m_pHairHatTwoShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pHairHatTwoShdr = pEVar2;
      if (_globals.Cheats._60_4_ == 0) {
        StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,10);
      }
      else {
        SmurfHair__11ECharedSkinP12ERRleTexturei(this,pEVar2,10);
      }
    }
    break;
  case 0xc:
    if (this->m_pLipstickShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pLipstickShdr,0xb);
      DelRef__9EResource(&this->m_pLipstickShdr->field0_0x0);
      this->m_pLipstickShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pLipstickShdr = pEVar2;
      StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,0xb);
    }
    break;
  case 0xd:
    if (this->m_pEyeshadowShdr != (ERRleTexture *)0x0) {
      RestorePalette__11ECharedSkinP12ERRleTexturei(this,this->m_pEyeshadowShdr,0xc);
      DelRef__9EResource(&this->m_pEyeshadowShdr->field0_0x0);
      this->m_pEyeshadowShdr = (ERRleTexture *)0x0;
    }
    if (nShaderID != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      pEVar2 = (ERRleTexture *)
               AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,nShaderID,(EFile *)0x0,0)
      ;
                    /* end of inlined section */
      this->m_pEyeshadowShdr = pEVar2;
      StorePalette__11ECharedSkinP12ERRleTexturei(this,pEVar2,0xc);
    }
  }
  if (((uVar9 != 10) && (uVar9 != 1)) && (uVar9 != 7)) {
    this->m_nColorOffset[uVar9 - 1] = '\x01';
  }
  return;
}

void ECharedSkin::NextColor(u8 nBodyPart) {
	ERRleTexture *pTempTexture;
	u32 i;
	float fTempHue;
	EVec3 vHSL;
	u32 nPaletteSize;
	u32 nAlpha;
	u32 *pCurPixel;
	ERRleTexture *this;
	ERRleTexture *this;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	
  int iVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  ERRleTexture *pEVar9;
  undefined8 unaff_s0;
  uint *puVar10;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  uint *puVar11;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint uVar12;
  uint uVar13;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  EVec3 vHSL;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  uint nPaletteSize;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar12 = (int)(char)nBodyPart & 0xff;
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  pEVar9 = (ERRleTexture *)0x0;
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  switch(uVar12) {
  case 1:
    pEVar9 = this->m_pSkinShdr;
    break;
  case 2:
    pEVar9 = this->m_pShirtOneShdr;
    break;
  case 3:
    pEVar9 = this->m_pShirtTwoShdr;
    break;
  case 4:
    pEVar9 = this->m_pPantsOneShdr;
    break;
  case 5:
    pEVar9 = this->m_pPantsTwoShdr;
    break;
  case 6:
    pEVar9 = this->m_pShoeShdr;
    break;
  case 7:
    pEVar9 = this->m_pFaceShdr;
    break;
  case 8:
    pEVar9 = this->m_pEyeShdr;
    break;
  case 9:
    pEVar9 = this->m_pFacialHairShdr;
    break;
  case 10:
    pEVar9 = this->m_pHairHatShdr;
    break;
  case 0xb:
    pEVar9 = this->m_pHairHatTwoShdr;
    break;
  case 0xc:
    pEVar9 = this->m_pLipstickShdr;
    break;
  case 0xd:
    pEVar9 = this->m_pEyeshadowShdr;
  }
  if (pEVar9 == (ERRleTexture *)0x0) goto switchD_00116148_caseD_a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vHSL.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  iVar5 = uVar12 - 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vHSL.field0_0x0.d[1] = 0.0;
  vHSL.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  puVar11 = pEVar9->m_nPalette;
  nPaletteSize = 0x10;
  if (*(int *)&pEVar9->m_bFourBitImage == 0) {
    nPaletteSize = 0x100;
  }
                    /* end of inlined section */
  switch(iVar5) {
  case 0:
    cVar4 = this->m_nColorOffset[0] + '\x01';
    this->m_nColorOffset[0] = cVar4;
    if ('\a' < cVar4) {
      this->m_nColorOffset[0] = '\0';
    }
  case 6:
    if (_globals.Cheats._60_4_ == 0) {
      if (_globals.Cheats._56_4_ == 0) {
        switch((int)(((byte)this->m_nColorOffset[0] - 1) * 0x1000000) >> 0x18) {
        case 0:
          fVar15 = 0.015;
          fVar17 = 0.04;
          fVar14 = -0.1;
          break;
        case 1:
          fVar15 = 0.028;
          fVar17 = -0.03;
          fVar14 = -0.2;
          break;
        case 2:
          fVar15 = 0.015;
          fVar17 = -0.008;
          fVar14 = -0.27;
          break;
        case 3:
          fVar15 = 0.015;
          fVar17 = -0.005;
          fVar14 = -0.4;
          break;
        case 4:
          fVar15 = 0.03;
          fVar17 = -0.01;
          fVar14 = -0.5;
          break;
        case 5:
          fVar15 = 0.03;
          fVar17 = -0.08;
          fVar14 = -0.55;
          break;
        case 6:
          fVar15 = 0.0;
          fVar17 = -0.0125;
          fVar14 = 0.045;
          break;
        default:
          fVar15 = 0.007;
          fVar17 = -0.006;
          fVar14 = -0.03;
        }
      }
      else {
        fVar14 = -0.15;
        fVar17 = -0.15;
        switch((int)(((byte)this->m_nColorOffset[0] - 1) * 0x1000000) >> 0x18) {
        case 0:
          fVar15 = 0.2;
          break;
        case 1:
          fVar15 = 0.3;
          break;
        case 2:
          fVar15 = 0.4;
          break;
        case 3:
          fVar15 = 0.5;
          break;
        case 4:
          fVar15 = -0.4;
          break;
        case 5:
          fVar15 = -0.29;
          break;
        case 6:
          fVar15 = -0.12;
          break;
        default:
          fVar15 = 0.1;
          fVar17 = -0.15;
          fVar14 = -0.15;
        }
      }
    }
    else {
      fVar15 = -0.38;
      fVar17 = 0.0;
      fVar14 = -0.15;
    }
    uVar12 = 0;
    if (nPaletteSize != 0) {
      do {
        puVar10 = (uint *)((int)this + uVar12 * 4 + iVar5 * 0x400 + 0x58);
        uVar13 = *puVar10;
        uVar6 = uVar13 & 0xff000000;
        if (uVar6 == 0) {
          *puVar11 = 0;
        }
        else {
          RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar13,&vHSL);
          if (1.0 <= vHSL.field0_0x0.d[0]) {
            *puVar11 = *puVar10;
          }
          else {
            vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fVar15;
                    /* end of inlined section */
            if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
            }
            else if (vHSL.field0_0x0.d[0] < 0.0) {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
            }
                    /* end of inlined section */
                    /* end of inlined section */
            vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fVar17;
            if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 1.0;
            }
            else if (vHSL.field0_0x0.d[1] < 0.0) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 0.0;
            }
                    /* end of inlined section */
            vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar14;
            if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 1.0;
            }
            else if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 0.0;
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_dc = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
            local_d8 = vHSL.field0_0x0.d[2];
            local_e0 = vHSL.field0_0x0.d[0];
            uVar13 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_e0);
            *puVar11 = uVar6 + uVar13;
          }
        }
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar12 < nPaletteSize);
    }
    break;
  default:
    if (uVar12 - 10 < 2) {
      cVar4 = this->m_nColorOffset[uVar12 - 1] + '\x01';
      this->m_nColorOffset[uVar12 - 1] = cVar4;
      switch(cVar4) {
      case '\0':
      case '\x01':
      case '\x02':
      case '\x1b':
      case '\x1e':
      case '\x1f':
        break;
      case '\x03':
        this->m_nColorOffset[uVar12 - 1] = '\x1b';
        break;
      default:
        this->m_nColorOffset[uVar12 - 1] = '\0';
        break;
      case '\x1c':
        this->m_nColorOffset[uVar12 - 1] = '\x1e';
      }
    }
    else {
      pcVar8 = this->m_nColorOffset + (uVar12 - 1);
      cVar4 = *pcVar8;
      *pcVar8 = cVar4 + '\x01';
      if (' ' < (char)(cVar4 + '\x01')) {
        *pcVar8 = '\0';
      }
    }
    uVar13 = 0;
    if (nPaletteSize != 0) {
      fVar17 = 0.15;
      do {
        puVar10 = (uint *)((int)this + uVar13 * 4 + iVar5 * 0x400 + 0x58);
        uVar6 = *puVar10;
        if ((uVar6 & 0xff000000) == 0) {
          *puVar11 = 0;
        }
        else if (_globals.Cheats._60_4_ == 0) {
          if (this->m_nColorOffset[uVar12 - 1] != 1) {
            RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar6,&vHSL);
            if (1.0 <= vHSL.field0_0x0.d[0]) {
              uVar6 = *puVar10;
              goto LAB_00116aac;
            }
            bVar2 = this->m_nColorOffset[uVar12 - 1];
            if (bVar2 - 0x1e < 3) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 0.0;
              iVar1 = (int)(char)bVar2 % 3;
              if (iVar1 == 0) {
                    /* end of inlined section */
                fVar14 = 0.0;
                vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] - 0.2;
                bVar3 = vHSL.field0_0x0.d[2] < 0.0;
                    /* end of inlined section */
LAB_00116bdc:
                if (bVar3) {
                  vHSL.field0_0x0.d[2] = fVar14;
                }
              }
              else {
                    /* end of inlined section */
                if ((iVar1 == 2) &&
                   (vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + 0.2, 1.0 < vHSL.field0_0x0.d[2]))
                {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[2] = 1.0;
                }
              }
            }
            else {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + (float)((int)(char)bVar2 / 3) * 0.1;
              if (1.0 < vHSL.field0_0x0.d[0]) {
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
              }
                    /* end of inlined section */
              iVar1 = (int)this->m_nColorOffset[uVar12 - 1] % 3;
              if (iVar1 == 0) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] - fVar17;
                if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[2] = 0.0;
                }
              }
              else if (iVar1 == 2) {
                    /* end of inlined section */
                fVar14 = 1.0;
                vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar17;
                bVar3 = 1.0 < vHSL.field0_0x0.d[2];
                goto LAB_00116bdc;
              }
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_dc = vHSL.field0_0x0.d[1];
            local_e0 = vHSL.field0_0x0.d[0];
            goto LAB_00116c04;
          }
          *puVar11 = uVar6;
        }
        else {
          RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar6,&vHSL);
          if (1.0 <= vHSL.field0_0x0.d[0]) {
            uVar6 = *puVar10;
LAB_00116aac:
            *puVar11 = uVar6;
          }
          else {
                    /* end of inlined section */
            vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + 0.2;
            if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 1.0;
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_e0 = vHSL.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
            local_dc = 0.0;
                    /* end of inlined section */
LAB_00116c04:
            vHSL.field0_0x0.d[0] = local_e0;
            vHSL.field0_0x0.d[1] = local_dc;
            local_d8 = vHSL.field0_0x0.d[2];
                    /* end of inlined section */
            uVar7 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_e0);
            *puVar11 = (uVar6 & 0xff000000) + uVar7;
          }
        }
        uVar13 = uVar13 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar13 < nPaletteSize);
    }
    break;
  case 8:
    goto switchD_00116148_caseD_8;
  case 9:
    pcVar8 = this->m_nColorOffset + (uVar12 - 1);
    cVar4 = *pcVar8;
    *pcVar8 = cVar4 + '\x01';
    if ('\n' < (char)(cVar4 + '\x01')) {
      *pcVar8 = '\0';
    }
switchD_00116148_caseD_8:
    if (_globals.Cheats._60_4_ != 0) {
switchD_001165c8_caseD_8:
      fVar17 = -0.5;
      fVar14 = -1.0;
      fVar15 = 0.25;
      goto LAB_00116770;
    }
    switch(this->m_nColorOffset[9]) {
    case '\0':
      fVar17 = -0.019445;
      fVar14 = 0.11;
      fVar15 = 0.1;
      break;
    default:
      fVar14 = 0.0;
      fVar17 = 0.0;
      fVar15 = 0.0;
      break;
    case '\x02':
      fVar17 = -0.00833;
      fVar14 = -0.065;
      fVar15 = -0.14;
      break;
    case '\x03':
      fVar17 = -0.03889;
      fVar14 = 0.19;
      fVar15 = -0.175;
      break;
    case '\x04':
      fVar17 = -0.12;
      fVar14 = -0.13;
      fVar15 = -0.255;
      break;
    case '\x05':
      fVar17 = -0.025;
      fVar14 = 0.005;
      fVar15 = -0.265;
      break;
    case '\x06':
      fVar17 = -0.07778;
      goto LAB_001166cc;
    case '\a':
      fVar17 = -0.46665;
LAB_001166cc:
      fVar14 = -0.13;
      fVar15 = -0.35;
      break;
    case '\b':
      goto switchD_001165c8_caseD_8;
    case '\t':
      fVar17 = 0.0;
      fVar14 = -0.1;
      fVar15 = 0.13;
      break;
    case '\n':
      fVar17 = 0.005555;
      fVar14 = 0.025;
      fVar15 = 0.15;
    }
LAB_00116770:
    uVar12 = 0;
    if (nPaletteSize != 0) {
      fVar16 = 0.0;
      puVar10 = (uint *)((int)this + iVar5 * 0x400 + 0x58);
      do {
        uVar13 = *puVar10 & 0xff000000;
        if (uVar13 == 0) {
          *puVar11 = 0;
        }
        else {
          if (this->m_nColorOffset[9] == '\x01') {
            if (_globals.Cheats._60_4_ == 0) {
              *puVar11 = *puVar10;
              goto LAB_001168d0;
            }
            uVar6 = *puVar10;
          }
          else {
            uVar6 = *puVar10;
          }
          RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar6,&vHSL);
          if (1.0 <= vHSL.field0_0x0.d[0]) {
            *puVar11 = *puVar10;
          }
          else {
            vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fVar17;
                    /* end of inlined section */
            if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
            }
            else if (vHSL.field0_0x0.d[0] < fVar16) {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
            }
                    /* end of inlined section */
                    /* end of inlined section */
            vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fVar14;
            if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 1.0;
            }
            else if (vHSL.field0_0x0.d[1] < fVar16) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 0.0;
            }
                    /* end of inlined section */
            vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar15;
            if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 1.0;
            }
            else if (vHSL.field0_0x0.d[2] < fVar16) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 0.0;
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_dc = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
            local_d8 = vHSL.field0_0x0.d[2];
            local_e0 = vHSL.field0_0x0.d[0];
            uVar6 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_e0);
            *puVar11 = uVar13 + uVar6;
          }
        }
LAB_001168d0:
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar12 < nPaletteSize);
    }
    break;
  case 10:
    break;
  }
switchD_00116148_caseD_a:
  Update__11ECharedSkin(this);
  return;
}

void ECharedSkin::PreviousColor(u8 nBodyPart) {
	ERRleTexture *pTempTexture;
	u32 i;
	float fTempHue;
	EVec3 vHSL;
	u32 nPaletteSize;
	u32 nAlpha;
	u32 *pCurPixel;
	ERRleTexture *this;
	ERRleTexture *this;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	
  int iVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  ERRleTexture *pEVar9;
  undefined8 unaff_s0;
  uint *puVar10;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  uint *puVar11;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint uVar12;
  uint uVar13;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  EVec3 vHSL;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  uint nPaletteSize;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar12 = (int)(char)nBodyPart & 0xff;
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  pEVar9 = (ERRleTexture *)0x0;
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  switch(uVar12) {
  case 1:
    pEVar9 = this->m_pSkinShdr;
    break;
  case 2:
    pEVar9 = this->m_pShirtOneShdr;
    break;
  case 3:
    pEVar9 = this->m_pShirtTwoShdr;
    break;
  case 4:
    pEVar9 = this->m_pPantsOneShdr;
    break;
  case 5:
    pEVar9 = this->m_pPantsTwoShdr;
    break;
  case 6:
    pEVar9 = this->m_pShoeShdr;
    break;
  case 7:
    pEVar9 = this->m_pFaceShdr;
    break;
  case 8:
    pEVar9 = this->m_pEyeShdr;
    break;
  case 9:
    pEVar9 = this->m_pFacialHairShdr;
    break;
  case 10:
    pEVar9 = this->m_pHairHatShdr;
    break;
  case 0xb:
    pEVar9 = this->m_pHairHatTwoShdr;
    break;
  case 0xc:
    pEVar9 = this->m_pLipstickShdr;
    break;
  case 0xd:
    pEVar9 = this->m_pEyeshadowShdr;
  }
  if (pEVar9 == (ERRleTexture *)0x0) goto switchD_00116da0_caseD_a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vHSL.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  iVar5 = uVar12 - 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vHSL.field0_0x0.d[1] = 0.0;
  vHSL.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  puVar11 = pEVar9->m_nPalette;
  nPaletteSize = 0x10;
  if (*(int *)&pEVar9->m_bFourBitImage == 0) {
    nPaletteSize = 0x100;
  }
                    /* end of inlined section */
  switch(iVar5) {
  case 0:
    bVar3 = this->m_nColorOffset[0] - 1;
    this->m_nColorOffset[0] = bVar3;
    if ((int)((uint)bVar3 << 0x18) < 0) {
      this->m_nColorOffset[0] = '\a';
    }
  case 6:
    if (_globals.Cheats._60_4_ == 0) {
      if (_globals.Cheats._56_4_ == 0) {
        switch((int)(((byte)this->m_nColorOffset[0] - 1) * 0x1000000) >> 0x18) {
        case 0:
          fVar15 = 0.015;
          fVar16 = 0.04;
          fVar14 = -0.1;
          break;
        case 1:
          fVar15 = 0.028;
          fVar16 = -0.03;
          fVar14 = -0.2;
          break;
        case 2:
          fVar15 = 0.015;
          fVar16 = -0.008;
          fVar14 = -0.27;
          break;
        case 3:
          fVar15 = 0.015;
          fVar16 = -0.005;
          fVar14 = -0.4;
          break;
        case 4:
          fVar15 = 0.03;
          fVar16 = -0.01;
          fVar14 = -0.5;
          break;
        case 5:
          fVar15 = 0.03;
          fVar16 = -0.08;
          fVar14 = -0.55;
          break;
        case 6:
          fVar15 = 0.0;
          fVar16 = -0.0125;
          fVar14 = 0.045;
          break;
        default:
          fVar15 = 0.007;
          fVar16 = -0.006;
          fVar14 = -0.03;
        }
      }
      else {
        fVar14 = -0.15;
        fVar16 = -0.15;
        switch((int)(((byte)this->m_nColorOffset[0] - 1) * 0x1000000) >> 0x18) {
        case 0:
          fVar15 = 0.2;
          break;
        case 1:
          fVar15 = 0.3;
          break;
        case 2:
          fVar15 = 0.4;
          break;
        case 3:
          fVar15 = 0.5;
          break;
        case 4:
          fVar15 = -0.4;
          break;
        case 5:
          fVar15 = -0.29;
          break;
        case 6:
          fVar15 = -0.12;
          break;
        default:
          fVar15 = 0.1;
          fVar16 = -0.15;
          fVar14 = -0.15;
        }
      }
    }
    else {
      fVar15 = -0.38;
      fVar16 = 0.0;
      fVar14 = -0.15;
    }
    uVar12 = 0;
    if (nPaletteSize != 0) {
      do {
        puVar10 = (uint *)((int)this + uVar12 * 4 + iVar5 * 0x400 + 0x58);
        uVar13 = *puVar10;
        uVar6 = uVar13 & 0xff000000;
        if (uVar6 == 0) {
          *puVar11 = 0;
        }
        else {
          RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar13,&vHSL);
          if (1.0 <= vHSL.field0_0x0.d[0]) {
            *puVar11 = *puVar10;
          }
          else {
            vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fVar15;
                    /* end of inlined section */
            if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
            }
            else if (vHSL.field0_0x0.d[0] < 0.0) {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
            }
                    /* end of inlined section */
                    /* end of inlined section */
            vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fVar16;
            if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 1.0;
            }
            else if (vHSL.field0_0x0.d[1] < 0.0) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 0.0;
            }
                    /* end of inlined section */
            vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar14;
            if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 1.0;
            }
            else if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 0.0;
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_dc = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
            local_d8 = vHSL.field0_0x0.d[2];
            local_e0 = vHSL.field0_0x0.d[0];
            uVar13 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_e0);
            *puVar11 = uVar6 + uVar13;
          }
        }
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar12 < nPaletteSize);
    }
    break;
  default:
    if (uVar12 - 10 < 2) {
      cVar4 = this->m_nColorOffset[uVar12 - 1] + -1;
      this->m_nColorOffset[uVar12 - 1] = cVar4;
      switch(cVar4) {
      case '\0':
      case '\x01':
      case '\x02':
      case '\x1b':
      case '\x1e':
      case '\x1f':
        break;
      default:
        this->m_nColorOffset[uVar12 - 1] = '\x1f';
        break;
      case '\x1a':
        this->m_nColorOffset[uVar12 - 1] = '\x02';
        break;
      case '\x1d':
        this->m_nColorOffset[uVar12 - 1] = '\x1b';
      }
    }
    else {
      pcVar8 = this->m_nColorOffset + (uVar12 - 1);
      bVar3 = *pcVar8;
      *pcVar8 = bVar3 - 1;
      if ((int)((uint)(byte)(bVar3 - 1) << 0x18) < 0) {
        *pcVar8 = 0x20;
      }
    }
    uVar13 = 0;
    if (nPaletteSize != 0) {
      fVar16 = 0.0;
      do {
        puVar10 = (uint *)((int)this + uVar13 * 4 + iVar5 * 0x400 + 0x58);
        uVar6 = *puVar10;
        if ((uVar6 & 0xff000000) == 0) {
          *puVar11 = 0;
        }
        else if (_globals.Cheats._60_4_ == 0) {
          if (this->m_nColorOffset[uVar12 - 1] != 1) {
            RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar6,&vHSL);
            if (1.0 <= vHSL.field0_0x0.d[0]) {
              uVar6 = *puVar10;
              goto LAB_001176c4;
            }
            bVar3 = this->m_nColorOffset[uVar12 - 1];
            if (bVar3 - 0x1e < 3) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 0.0;
              iVar1 = (int)(char)bVar3 % 3;
              if (iVar1 == 0) {
                    /* end of inlined section */
                fVar14 = 0.0;
                vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] - 0.2;
                bVar2 = vHSL.field0_0x0.d[2] < 0.0;
                    /* end of inlined section */
LAB_001177f4:
                if (bVar2) {
                  vHSL.field0_0x0.d[2] = fVar14;
                }
              }
              else {
                    /* end of inlined section */
                if ((iVar1 == 2) &&
                   (vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + 0.2, 1.0 < vHSL.field0_0x0.d[2]))
                {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[2] = 1.0;
                }
              }
            }
            else {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + (float)((int)(char)bVar3 / 3) * 0.1;
              if (1.0 < vHSL.field0_0x0.d[0]) {
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
              }
                    /* end of inlined section */
              iVar1 = (int)this->m_nColorOffset[uVar12 - 1] % 3;
              if (iVar1 == 0) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] - 0.2;
                if (vHSL.field0_0x0.d[2] < fVar16) {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[2] = 0.0;
                }
              }
              else if (iVar1 == 2) {
                    /* end of inlined section */
                fVar14 = 1.0;
                vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + 0.2;
                bVar2 = 1.0 < vHSL.field0_0x0.d[2];
                goto LAB_001177f4;
              }
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_dc = vHSL.field0_0x0.d[1];
            local_e0 = vHSL.field0_0x0.d[0];
            goto LAB_0011781c;
          }
          *puVar11 = uVar6;
        }
        else {
          RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar6,&vHSL);
          if (1.0 <= vHSL.field0_0x0.d[0]) {
            uVar6 = *puVar10;
LAB_001176c4:
            *puVar11 = uVar6;
          }
          else {
                    /* end of inlined section */
            vHSL.field0_0x0.d[1] = 0.0;
            vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + 0.2;
            if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 1.0;
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_e0 = vHSL.field0_0x0.d[0];
            local_dc = fVar16;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
LAB_0011781c:
            vHSL.field0_0x0.d[0] = local_e0;
            local_d8 = vHSL.field0_0x0.d[2];
                    /* end of inlined section */
            uVar7 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_e0);
            *puVar11 = (uVar6 & 0xff000000) + uVar7;
          }
        }
        uVar13 = uVar13 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar13 < nPaletteSize);
    }
    break;
  case 8:
    goto switchD_00116da0_caseD_8;
  case 9:
    pcVar8 = this->m_nColorOffset + (uVar12 - 1);
    bVar3 = *pcVar8;
    *pcVar8 = bVar3 - 1;
    if ((int)((uint)(byte)(bVar3 - 1) << 0x18) < 0) {
      *pcVar8 = 10;
    }
switchD_00116da0_caseD_8:
    if (_globals.Cheats._60_4_ != 0) {
switchD_0011721c_caseD_8:
      fVar16 = -0.5;
      fVar14 = -1.0;
      fVar15 = 0.25;
      goto LAB_00117398;
    }
    switch(this->m_nColorOffset[9]) {
    case '\0':
      fVar16 = -0.019445;
      fVar14 = 0.11;
      fVar15 = 0.1;
      break;
    default:
      fVar14 = 0.0;
      fVar16 = 0.0;
      fVar15 = 0.0;
      break;
    case '\x02':
      fVar16 = -0.00833;
      fVar14 = -0.065;
      fVar15 = -0.14;
      break;
    case '\x03':
      fVar16 = -0.03889;
      fVar14 = 0.19;
      fVar15 = -0.175;
      break;
    case '\x04':
      fVar16 = -0.12;
      fVar14 = -0.13;
      fVar15 = -0.255;
      break;
    case '\x05':
      fVar16 = -0.025;
      fVar14 = 0.005;
      fVar15 = -0.265;
      break;
    case '\x06':
      fVar16 = -0.07778;
      goto LAB_00117320;
    case '\a':
      fVar16 = -0.46665;
LAB_00117320:
      fVar14 = -0.13;
      fVar15 = -0.35;
      break;
    case '\b':
      goto switchD_0011721c_caseD_8;
    case '\t':
      fVar16 = 0.0;
      fVar14 = -0.1;
      fVar15 = 0.13;
    }
LAB_00117398:
    uVar12 = 0;
    if (nPaletteSize != 0) {
      fVar17 = 0.0;
      puVar10 = (uint *)((int)this + iVar5 * 0x400 + 0x58);
      do {
        uVar13 = *puVar10 & 0xff000000;
        if (uVar13 == 0) {
          *puVar11 = 0;
        }
        else {
          if (this->m_nColorOffset[9] == '\x01') {
            if (_globals.Cheats._60_4_ == 0) {
              *puVar11 = *puVar10;
              goto LAB_001174f8;
            }
            uVar6 = *puVar10;
          }
          else {
            uVar6 = *puVar10;
          }
          RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar6,&vHSL);
          if (1.0 <= vHSL.field0_0x0.d[0]) {
            *puVar11 = *puVar10;
          }
          else {
            vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fVar16;
                    /* end of inlined section */
            if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
            }
            else if (vHSL.field0_0x0.d[0] < fVar17) {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
            }
                    /* end of inlined section */
                    /* end of inlined section */
            vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fVar14;
            if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 1.0;
            }
            else if (vHSL.field0_0x0.d[1] < fVar17) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 0.0;
            }
                    /* end of inlined section */
            vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar15;
            if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 1.0;
            }
            else if (vHSL.field0_0x0.d[2] < fVar17) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 0.0;
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_dc = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
            local_d8 = vHSL.field0_0x0.d[2];
            local_e0 = vHSL.field0_0x0.d[0];
            uVar6 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_e0);
            *puVar11 = uVar13 + uVar6;
          }
        }
LAB_001174f8:
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar12 < nPaletteSize);
    }
    break;
  case 10:
    break;
  }
switchD_00116da0_caseD_a:
  Update__11ECharedSkin(this);
  return;
}

void ECharedSkin::GetSkin(ETexture *pPalTexture) {
	unsigned char nCurPixelColor[3];
	int i;
	int pitchX;
	int pitchY;
	u32 *pOrigTextureData;
	ERTQuantize Quantize;
	u32 *pNewTextureData;
	int nPaletteSize;
	u8 *pNewPixel;
	
  undefined4 uVar1;
  undefined4 *puVar2;
  void *p;
  int *piVar3;
  int iVar4;
  int iVar5;
  ETexture__vtable *pEVar6;
  undefined *puVar7;
  undefined8 unaff_s0;
  undefined4 *puVar8;
  undefined8 unaff_s1;
  int iVar9;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  uchar nCurPixelColor [3];
  ERTQuantize Quantize;
  int pitchX;
  int pitchY;
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
  
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
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
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar9 = 0x10000;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pEVar6 = this->m_pCustomTexture->__vtable;
  (*(code *)pEVar6->Validate)
            ((int)&(this->m_pCustomTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pEVar6->Test1,1);
  pEVar6 = this->m_pCustomTexture->__vtable;
  puVar2 = (undefined4 *)
           (**(code **)(pEVar6 + 1))
                     ((int)&(this->m_pCustomTexture->m_textureDef).pfnAllocAlign +
                      (int)*(short *)&pEVar6->Select,0,&pitchX);
  p = GetUpper32k__17ESimScratchPadMan();
  Init__5EHeapPvUi(&_11ECharedSkin_m_MyHeap,p,0x8000);
  __11ERTQuantize(&Quantize);
  Init__11ERTQuantizeUiUiPFUi_PvPFPv_vb
            (&Quantize,0x100,0x7c00,DefaultAlloc__11ECharedSkinUi,DefaultFree__11ECharedSkinPv,true)
  ;
  nCurPixelColor[0] = *(uchar *)puVar2;
  puVar8 = puVar2;
  while( true ) {
    iVar9 = iVar9 + -1;
    nCurPixelColor[1] = *(uchar *)((int)puVar8 + 1);
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    nCurPixelColor[2] = (uchar)((uint)uVar1 >> 0x10);
    AddPixel__11ERTQuantizePUc(&Quantize,nCurPixelColor);
    if (iVar9 == 0) break;
    nCurPixelColor[0] = *(uchar *)puVar8;
  }
  iVar9 = 0;
  Compute__11ERTQuantize(&Quantize);
  (*(code *)pPalTexture->__vtable->Validate)
            ((int)&(pPalTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pPalTexture->__vtable->Test1,2);
  piVar3 = (int *)(*(code *)pPalTexture->__vtable[1].Lock)
                            ((int)&(pPalTexture->m_textureDef).pfnAllocAlign +
                             (int)*(short *)&pPalTexture->__vtable[1].ETexture);
  iVar4 = GetPaletteSize__11ERTQuantize(&Quantize);
  if (iVar4 < 1) {
    pEVar6 = pPalTexture->__vtable;
  }
  else {
    do {
      iVar5 = iVar9 + 1;
      GetPaletteEntry__11ERTQuantizeiPUc(&Quantize,iVar9,nCurPixelColor);
      *piVar3 = -0x1000000;
      *piVar3 = nCurPixelColor[0] - 0x1000000;
      iVar9 = (nCurPixelColor[0] - 0x1000000) + (uint)nCurPixelColor[1] * 0x100;
      *piVar3 = iVar9;
      *piVar3 = iVar9 + (uint)nCurPixelColor[2] * 0x10000;
      piVar3 = piVar3 + 1;
      iVar9 = iVar5;
    } while (iVar5 < iVar4);
    pEVar6 = pPalTexture->__vtable;
  }
  iVar4 = 0;
  iVar9 = (**(code **)(pEVar6 + 1))
                    ((int)&(pPalTexture->m_textureDef).pfnAllocAlign +
                     (int)*(short *)&pEVar6->Select,0,&pitchX,&pitchY);
  nCurPixelColor[0] = *(uchar *)puVar2;
  while( true ) {
    nCurPixelColor[1] = *(uchar *)((int)puVar2 + 1);
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    nCurPixelColor[2] = (uchar)((uint)uVar1 >> 0x10);
    iVar5 = GetClosestColor__11ERTQuantizePUc(&Quantize,nCurPixelColor);
    puVar7 = (undefined *)(iVar9 + iVar4);
    iVar4 = iVar4 + 1;
    *puVar7 = (char)iVar5;
    if (0xffff < iVar4) break;
    nCurPixelColor[0] = *(uchar *)puVar2;
  }
  (*(code *)pPalTexture->__vtable[1].Invalidate)
            ((int)&(pPalTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pPalTexture->__vtable[1].Unlock);
  pEVar6 = this->m_pCustomTexture->__vtable;
  (*(code *)pEVar6[1].Invalidate)
            ((int)&(this->m_pCustomTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pEVar6[1].Unlock);
  ___11ERTQuantize(&Quantize,2);
  return;
}

void ECharedSkin::StorePalette(ERRleTexture *pShdr, int nPaletteIndex) {
	u32 i;
	u32 *pCurPixel;
	u32 nPaletteSize;
	ERRleTexture *this;
	ERRleTexture *this;
	
  uint uVar1;
  uint (*pauVar2) [256];
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  uVar5 = 0x10;
  puVar3 = pShdr->m_nPalette;
  if (*(int *)&pShdr->m_bFourBitImage == 0) {
    uVar5 = 0x100;
  }
                    /* end of inlined section */
  uVar4 = 0;
  if (uVar5 != 0) {
    pauVar2 = this->m_nOriginalPalette[nPaletteIndex];
    do {
      uVar1 = *puVar3;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
      (*pauVar2)[0] = uVar1;
      pauVar2 = (uint (*) [256])(*pauVar2 + 1);
    } while (uVar4 < uVar5);
  }
  return;
}

void ECharedSkin::RestorePalette(ERRleTexture *pShdr, int nPaletteIndex) {
	u32 i;
	u32 *pCurPixel;
	u32 nPaletteSize;
	ERRleTexture *this;
	ERRleTexture *this;
	
  uint *puVar1;
  uint (*pauVar2) [256];
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  uVar5 = 0x10;
  puVar3 = pShdr->m_nPalette;
  if (*(int *)&pShdr->m_bFourBitImage == 0) {
    uVar5 = 0x100;
  }
                    /* end of inlined section */
  uVar4 = 0;
  if (uVar5 != 0) {
    pauVar2 = this->m_nOriginalPalette[nPaletteIndex];
    do {
      puVar1 = *pauVar2;
      uVar4 = uVar4 + 1;
      pauVar2 = (uint (*) [256])(*pauVar2 + 1);
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar5);
  }
  return;
}

void ECharedSkin::StoreColorOffsets() {
	u32 i;
	
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = this->m_nOldHueOffset;
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
    *pcVar1 = pcVar1[-0xd];
    pcVar1 = pcVar1 + 1;
  } while (uVar2 < 0xd);
  return;
}

void ECharedSkin::RestoreColorOffsets() {
	u32 i;
	
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = this->m_nColorOffset;
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
    *pcVar1 = pcVar1[0xd];
    pcVar1 = pcVar1 + 1;
  } while (uVar2 < 0xd);
  return;
}

void ECharedSkin::ApplyColorOffsets(bool bIsAdult, bool bIsMale) {
	int nBodyPart;
	ERRleTexture *pTempTexture;
	u32 i;
	float fTempHue;
	EVec3 vHSL;
	u32 nPaletteSize;
	u32 nAlpha;
	u32 *pCurPixel;
	ERRleTexture *this;
	ERRleTexture *this;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ERRleTexture *pEVar7;
  uint *puVar8;
  uint (*pauVar9) [256];
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  uint *puVar10;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint uVar11;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  EVec3 vHSL;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  int local_d0;
  int local_cc;
  uint nPaletteSize;
  int local_c4;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_cc = (int)bIsMale;
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_c4 = 0;
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_d0 = (int)bIsAdult;
  iVar4 = -1;
  do {
    pEVar7 = (ERRleTexture *)0x0;
    switch(iVar4) {
    case 0:
      pEVar7 = this->m_pSkinShdr;
      break;
    case 1:
      pEVar7 = this->m_pShirtOneShdr;
      break;
    case 2:
      pEVar7 = this->m_pShirtTwoShdr;
      break;
    case 3:
      pEVar7 = this->m_pPantsOneShdr;
      break;
    case 4:
      pEVar7 = this->m_pPantsTwoShdr;
      break;
    case 5:
      pEVar7 = this->m_pShoeShdr;
      break;
    case 6:
      pEVar7 = this->m_pFaceShdr;
      break;
    case 7:
      pEVar7 = this->m_pEyeShdr;
      break;
    case 8:
      if ((local_d0 != 0) && (local_cc != 0)) {
        pEVar7 = this->m_pFacialHairShdr;
      }
      break;
    case 9:
      pEVar7 = this->m_pHairHatShdr;
      break;
    case 10:
      pEVar7 = this->m_pHairHatTwoShdr;
      break;
    case 0xb:
      pEVar7 = this->m_pLipstickShdr;
      break;
    case 0xc:
      pEVar7 = this->m_pEyeshadowShdr;
    }
    iVar1 = local_c4 + 1;
    if (pEVar7 == (ERRleTexture *)0x0) goto LAB_00118824;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vHSL.field0_0x0.d[2] = 0.0;
    vHSL.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vHSL.field0_0x0.d[0] = 0.0;
    puVar10 = pEVar7->m_nPalette;
    nPaletteSize = 0x10;
    if (*(int *)&pEVar7->m_bFourBitImage == 0) {
      nPaletteSize = 0x100;
    }
                    /* end of inlined section */
    switch(iVar4) {
    case 0:
    case 6:
      if (_globals.Cheats._60_4_ == 0) {
        if (_globals.Cheats._56_4_ == 0) {
          switch((int)(((byte)this->m_nColorOffset[0] - 1) * 0x1000000) >> 0x18) {
          case 0:
            fVar15 = 0.015;
            fVar12 = 0.04;
            fVar13 = -0.1;
            break;
          case 1:
            fVar15 = 0.028;
            fVar12 = -0.03;
            fVar13 = -0.2;
            break;
          case 2:
            fVar15 = 0.015;
            fVar12 = -0.008;
            fVar13 = -0.27;
            break;
          case 3:
            fVar15 = 0.015;
            fVar12 = -0.005;
            fVar13 = -0.4;
            break;
          case 4:
            fVar15 = 0.03;
            fVar12 = -0.01;
            fVar13 = -0.5;
            break;
          case 5:
            fVar15 = 0.03;
            fVar12 = -0.08;
            fVar13 = -0.55;
            break;
          case 6:
            fVar15 = 0.0;
            fVar12 = -0.0125;
            fVar13 = 0.045;
            break;
          default:
            fVar15 = 0.007;
            fVar12 = -0.006;
            fVar13 = -0.03;
          }
        }
        else {
          fVar13 = -0.15;
          fVar12 = -0.15;
          switch((int)(((byte)this->m_nColorOffset[0] - 1) * 0x1000000) >> 0x18) {
          case 0:
            fVar15 = 0.2;
            break;
          case 1:
            fVar15 = 0.3;
            break;
          case 2:
            fVar15 = 0.4;
            break;
          case 3:
            fVar15 = 0.5;
            break;
          case 4:
            fVar15 = -0.4;
            break;
          case 5:
            fVar15 = -0.29;
            break;
          case 6:
            fVar15 = -0.12;
            break;
          default:
            fVar15 = 0.1;
          }
        }
      }
      else {
        fVar15 = -0.38;
        fVar12 = 0.0;
        fVar13 = -0.15;
      }
      local_c4 = local_c4 + 1;
      uVar11 = 0;
      iVar1 = local_c4;
      if (nPaletteSize != 0) {
        do {
          puVar8 = this->m_nOriginalPalette[iVar4] + uVar11;
          uVar5 = *puVar8;
          uVar6 = uVar5 & 0xff000000;
          if (uVar6 == 0) {
            *puVar10 = 0;
          }
          else {
            RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar5,&vHSL);
            if (1.0 <= vHSL.field0_0x0.d[0]) {
              *puVar10 = *puVar8;
            }
            else {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fVar15;
                    /* end of inlined section */
              if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
              }
              else if (vHSL.field0_0x0.d[0] < 0.0) {
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
              }
                    /* end of inlined section */
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fVar12;
              if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[1] = 1.0;
              }
              else if (vHSL.field0_0x0.d[1] < 0.0) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[1] = 0.0;
              }
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar13;
              if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = 1.0;
              }
              else if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = 0.0;
              }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              local_dc = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
              local_d8 = vHSL.field0_0x0.d[2];
              local_e0 = vHSL.field0_0x0.d[0];
              uVar5 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_e0);
              *puVar10 = uVar6 + uVar5;
            }
          }
          uVar11 = uVar11 + 1;
          puVar10 = puVar10 + 1;
          iVar1 = local_c4;
        } while (uVar11 < nPaletteSize);
      }
      break;
    default:
      local_c4 = local_c4 + 1;
      uVar11 = 0;
      iVar1 = local_c4;
      if (nPaletteSize != 0) {
        fVar15 = 0.15;
        do {
          puVar8 = this->m_nOriginalPalette[iVar4] + uVar11;
          uVar5 = *puVar8;
          if ((uVar5 & 0xff000000) == 0) {
            *puVar10 = 0;
          }
          else if (_globals.Cheats._60_4_ == 0) {
            if (this->m_nColorOffset[iVar4] != 1) {
              RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar5,&vHSL);
              if (1.0 <= vHSL.field0_0x0.d[0]) {
                uVar5 = *puVar8;
                goto LAB_0011869c;
              }
              bVar2 = this->m_nColorOffset[iVar4];
              if (bVar2 - 0x1e < 3) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[1] = 0.0;
                iVar1 = (int)(char)bVar2 % 3;
                if (iVar1 == 0) {
                    /* end of inlined section */
                  fVar12 = 0.0;
                  vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] - 0.2;
                  bVar3 = vHSL.field0_0x0.d[2] < 0.0;
                    /* end of inlined section */
LAB_001187cc:
                  if (bVar3) {
                    vHSL.field0_0x0.d[2] = fVar12;
                  }
                }
                else {
                    /* end of inlined section */
                  if ((iVar1 == 2) &&
                     (vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + 0.2, 1.0 < vHSL.field0_0x0.d[2])
                     ) {
                    /* end of inlined section */
                    vHSL.field0_0x0.d[2] = 1.0;
                  }
                }
              }
              else {
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + (float)((int)(char)bVar2 / 3) * 0.1;
                if (1.0 < vHSL.field0_0x0.d[0]) {
                  vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
                }
                    /* end of inlined section */
                iVar1 = (int)this->m_nColorOffset[iVar4] % 3;
                if (iVar1 == 0) {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] - fVar15;
                  if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
                    vHSL.field0_0x0.d[2] = 0.0;
                  }
                }
                else if (iVar1 == 2) {
                    /* end of inlined section */
                  fVar12 = 1.0;
                  vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar15;
                  bVar3 = 1.0 < vHSL.field0_0x0.d[2];
                  goto LAB_001187cc;
                }
              }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              local_dc = vHSL.field0_0x0.d[1];
              local_e0 = vHSL.field0_0x0.d[0];
              goto LAB_001187f4;
            }
            *puVar10 = uVar5;
          }
          else {
            RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar5,&vHSL);
            if (1.0 <= vHSL.field0_0x0.d[0]) {
              uVar5 = *puVar8;
LAB_0011869c:
              *puVar10 = uVar5;
            }
            else {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + 0.2;
              if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = 1.0;
              }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              local_e0 = vHSL.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
              local_dc = 0.0;
                    /* end of inlined section */
LAB_001187f4:
              vHSL.field0_0x0.d[0] = local_e0;
              vHSL.field0_0x0.d[1] = local_dc;
              local_d8 = vHSL.field0_0x0.d[2];
                    /* end of inlined section */
              uVar6 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_e0);
              *puVar10 = (uVar5 & 0xff000000) + uVar6;
            }
          }
          uVar11 = uVar11 + 1;
          puVar10 = puVar10 + 1;
          iVar1 = local_c4;
        } while (uVar11 < nPaletteSize);
      }
      break;
    case 8:
    case 9:
      if (_globals.Cheats._60_4_ != 0) {
switchD_001181d8_caseD_8:
        fVar15 = -0.5;
        fVar12 = -1.0;
        fVar13 = 0.25;
        goto LAB_00118380;
      }
      switch(this->m_nColorOffset[9]) {
      case '\0':
        fVar15 = -0.019445;
        fVar12 = 0.11;
        fVar13 = 0.1;
        break;
      default:
        fVar12 = 0.0;
        fVar15 = 0.0;
        fVar13 = 0.0;
        break;
      case '\x02':
        fVar15 = -0.00833;
        fVar12 = -0.065;
        fVar13 = -0.14;
        break;
      case '\x03':
        fVar15 = -0.03889;
        fVar12 = 0.19;
        fVar13 = -0.175;
        break;
      case '\x04':
        fVar15 = -0.12;
        fVar12 = -0.13;
        fVar13 = -0.255;
        break;
      case '\x05':
        fVar15 = -0.025;
        fVar12 = 0.005;
        fVar13 = -0.265;
        break;
      case '\x06':
        fVar15 = -0.07778;
        goto LAB_001182dc;
      case '\a':
        fVar15 = -0.46665;
LAB_001182dc:
        fVar12 = -0.13;
        fVar13 = -0.35;
        break;
      case '\b':
        goto switchD_001181d8_caseD_8;
      case '\t':
        fVar15 = 0.0;
        fVar12 = -0.1;
        fVar13 = 0.13;
        break;
      case '\n':
        fVar15 = 0.005555;
        fVar12 = 0.025;
        fVar13 = 0.15;
      }
LAB_00118380:
      local_c4 = local_c4 + 1;
      uVar11 = 0;
      iVar1 = local_c4;
      if (nPaletteSize != 0) {
        fVar14 = 0.0;
        pauVar9 = this->m_nOriginalPalette[iVar4];
        do {
          uVar5 = (*pauVar9)[0];
          if ((uVar5 & 0xff000000) == 0) {
            *puVar10 = 0;
          }
          else if (_globals.Cheats._60_4_ == 0) {
            if (this->m_nColorOffset[9] != '\x01') {
              RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar5,&vHSL);
              if (vHSL.field0_0x0.d[0] < 1.0) {
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fVar15;
                    /* end of inlined section */
                if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
                }
                else if (vHSL.field0_0x0.d[0] < fVar14) {
                  vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
                }
                    /* end of inlined section */
                    /* end of inlined section */
                vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fVar12;
                if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[1] = 1.0;
                }
                else if (vHSL.field0_0x0.d[1] < fVar14) {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[1] = 0.0;
                }
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar13;
                if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[2] = 1.0;
                }
                else if (vHSL.field0_0x0.d[2] < fVar14) {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[2] = 0.0;
                }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                local_dc = vHSL.field0_0x0.d[1];
                goto LAB_00118540;
              }
              uVar5 = (*pauVar9)[0];
              goto LAB_00118474;
            }
            *puVar10 = uVar5;
          }
          else {
            RGBtoHSL__11ECharedSkinUiP5EVec3(this,uVar5,&vHSL);
            if (vHSL.field0_0x0.d[0] < 1.0) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 0.0;
              vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + 0.2;
              local_dc = fVar14;
              if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = 1.0;
              }
LAB_00118540:
                    /* end of inlined section */
              local_e0 = vHSL.field0_0x0.d[0];
              local_d8 = vHSL.field0_0x0.d[2];
                    /* end of inlined section */
              uVar6 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_e0);
              *puVar10 = (uVar5 & 0xff000000) + uVar6;
            }
            else {
              uVar5 = (*pauVar9)[0];
LAB_00118474:
              *puVar10 = uVar5;
            }
          }
          uVar11 = uVar11 + 1;
          puVar10 = puVar10 + 1;
          pauVar9 = (uint (*) [256])(*pauVar9 + 1);
          iVar1 = local_c4;
        } while (uVar11 < nPaletteSize);
      }
      break;
    case 10:
      break;
    }
LAB_00118824:
    local_c4 = iVar1;
    iVar4 = local_c4 + -1;
    if (0xd < local_c4) {
      Update__11ECharedSkin(this);
      return;
    }
  } while( true );
}

void ECharedSkin::GetColorOffsets(CustomCharacter *pCharacter) {
  pCharacter->m_nUpperBodyColor = this->m_nColorOffset[1];
  pCharacter->m_nLowerBodyColor = this->m_nColorOffset[3];
  pCharacter->m_nShoesColor = this->m_nColorOffset[5];
  pCharacter->m_nSkinColor = this->m_nColorOffset[0];
  pCharacter->m_nHairHatColor = this->m_nColorOffset[9];
  pCharacter->m_nEyeColor = this->m_nColorOffset[7];
  return;
}

void ECharedSkin::SetColorOffsets(CustomCharacter *pCharacter) {
  this->m_nColorOffset[0] = pCharacter->m_nSkinColor;
  this->m_nColorOffset[1] = pCharacter->m_nUpperBodyColor;
  this->m_nColorOffset[3] = pCharacter->m_nLowerBodyColor;
  this->m_nColorOffset[5] = pCharacter->m_nShoesColor;
  this->m_nColorOffset[9] = pCharacter->m_nHairHatColor;
  this->m_nColorOffset[7] = pCharacter->m_nEyeColor;
  StoreColorOffsets__11ECharedSkin(this);
  return;
}

u32 ECharedSkin::HSLtoRGB(EVec3 vHSL) {
	float r;
	float g;
	float b;
	float v;
	float h;
	float sl;
	float l;
	u32 nReturnValue;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	int sextant;
	float m;
	float sv;
	float fract;
	float vsf;
	float mid1;
	float mid2;
	
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = (vHSL->field0_0x0).d[2];
  fVar6 = (vHSL->field0_0x0).d[1];
  if (fVar4 <= 0.5) {
    fVar6 = fVar6 * fVar4 + fVar4;
  }
  else {
    fVar6 = (fVar4 + fVar6) - fVar4 * fVar6;
  }
  if (0.0 < fVar6) {
    fVar7 = (vHSL->field0_0x0).d[0] * 6.0;
    fVar5 = (fVar4 + fVar4) - fVar6;
    iVar2 = (int)fVar7;
    fVar3 = fVar6 * ((fVar6 - fVar5) / fVar6) * (fVar7 - (float)iVar2);
    fVar1 = fVar6 - fVar3;
    fVar3 = fVar5 + fVar3;
    fVar4 = fVar5;
    fVar7 = fVar5;
    switch(iVar2) {
    case 0:
      fVar7 = fVar6;
      break;
    case 1:
      fVar7 = fVar1;
      fVar3 = fVar6;
      break;
    case 2:
      fVar4 = fVar3;
      fVar3 = fVar6;
      break;
    case 3:
      fVar4 = fVar6;
      fVar3 = fVar1;
      break;
    case 4:
      fVar4 = fVar6;
      fVar7 = fVar3;
      fVar3 = fVar5;
      break;
    case 5:
    case 6:
      fVar4 = fVar1;
      fVar7 = fVar6;
      fVar3 = fVar5;
      break;
    default:
      goto switchD_001189b0_caseD_7;
    }
  }
  else {
switchD_001189b0_caseD_7:
    fVar4 = 0.0;
    fVar7 = 0.0;
    fVar3 = 0.0;
  }
  return ((int)(fVar7 * 255.0) & 0xffU) + ((int)(fVar3 * 255.0) & 0xffU) * 0x100 +
         ((int)(fVar4 * 255.0) & 0xffU) * 0x10000;
}

void ECharedSkin::RGBtoHSL(u32 rgb, EVec3 *vHSL) {
	float v;
	float m;
	float vm;
	float r2;
	float g2;
	float b2;
	float r;
	float g;
	float b;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)(rgb & 0xff) * 0.003921569;
  fVar7 = (float)(rgb >> 8 & 0xff) * 0.003921569;
  fVar1 = (float)((int)fVar7 * (uint)(fVar6 < fVar7) | (int)fVar6 * (uint)(fVar6 >= fVar7));
  fVar4 = (float)((int)fVar7 * (uint)(fVar7 < fVar6) | (int)fVar6 * (uint)(fVar7 >= fVar6));
  fVar3 = (float)(rgb >> 0x10 & 0xff) * 0.003921569;
  fVar2 = (float)((int)fVar3 * (uint)(fVar1 < fVar3) | (int)fVar1 * (uint)(fVar1 >= fVar3));
  fVar5 = (float)((int)fVar3 * (uint)(fVar3 < fVar4) | (int)fVar4 * (uint)(fVar3 >= fVar4));
  fVar1 = fVar5 + fVar2;
  fVar4 = fVar2 - fVar5;
  (vHSL->field0_0x0).d[1] = fVar4;
  (vHSL->field0_0x0).d[2] = fVar1 * 0.5;
  if (0.5 < fVar1 * 0.5) {
    fVar1 = (2.0 - fVar2) - fVar5;
  }
  (vHSL->field0_0x0).d[1] = fVar4 / fVar1;
  fVar3 = (fVar2 - fVar3) / fVar4;
  fVar1 = (fVar2 - fVar6) / fVar4;
  fVar4 = (fVar2 - fVar7) / fVar4;
  if (fVar6 == fVar2) {
    if (fVar7 == fVar5) {
      fVar1 = fVar3 + 5.0;
    }
    else {
      fVar1 = 1.0 - fVar4;
    }
  }
  else if (fVar7 == fVar2) {
    if (fVar6 == fVar5) {
      fVar1 = fVar1 + 3.0;
    }
    else {
      fVar1 = 3.0 - fVar3;
    }
  }
  else if (fVar6 == fVar5) {
    fVar1 = fVar4 + 3.0;
  }
  else {
    fVar1 = 5.0 - fVar1;
  }
  (vHSL->field0_0x0).d[0] = fVar1;
  (vHSL->field0_0x0).d[0] = (vHSL->field0_0x0).d[0] * 0.1666667;
  return;
}

void* ECharedSkin::DefaultAlloc(u32 size) {
  void *pvVar1;
  
  pvVar1 = Alloc__5EHeapUiUi(&_11ECharedSkin_m_MyHeap,size,4);
  return pvVar1;
}

void ECharedSkin::DefaultFree(void *p) {
  Free__5EHeapPv(&_11ECharedSkin_m_MyHeap,p);
  return;
}

u32 ECharedSkin::DeterminePixelColor(u32 nOriginalColor, u32 nNewColor, u8 *pOutputRGB) {
	u32 nCurColorChannel;
	u32 nGarbage;
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = nNewColor >> 0x18;
  if (uVar4 == 0) {
    pOutputRGB[2] = (uchar)(nOriginalColor >> 0x10);
    pOutputRGB[1] = (uchar)(nOriginalColor >> 8);
    *pOutputRGB = (uchar)nOriginalColor;
  }
  else {
    iVar3 = 0xff - uVar4;
    uVar1 = (int)(uVar4 * (nNewColor & 0xff) + iVar3 * (nOriginalColor & 0xff)) / 0xff;
    *pOutputRGB = (uchar)uVar1;
    uVar2 = (int)(uVar4 * ((nNewColor & 0xff00) >> 8) + iVar3 * ((nOriginalColor & 0xff00) >> 8)) /
            0xff;
    uVar4 = (int)(uVar4 * ((nNewColor & 0xff0000) >> 0x10) +
                 iVar3 * ((nOriginalColor & 0xff0000) >> 0x10)) / 0xff;
    pOutputRGB[1] = (uchar)uVar2;
    pOutputRGB[2] = (uchar)uVar4;
    nOriginalColor = (uVar1 & 0xff) + (uVar2 & 0xff) * 0x100 + (uVar4 & 0xff) * 0x10000;
  }
  return nOriginalColor;
}

void ECharedSkin::SmurfClothes(ERRleTexture *pTempTexture, int nPaletteIndex) {
	u32 i;
	EVec3 vHSL;
	u32 nPaletteSize;
	u32 nAlpha;
	u32 *pCurPixel;
	ERRleTexture *this;
	ERRleTexture *this;
	
  uint rgb;
  uint uVar1;
  uint *puVar2;
  undefined8 unaff_s0;
  uint (*pauVar3) [256];
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  uint uVar4;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint uVar5;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar6;
  EVec3 vHSL;
  float local_a0;
  undefined4 local_9c;
  float local_98;
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
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  uVar5 = 0x10;
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  uVar4 = 0;
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  puVar2 = pTempTexture->m_nPalette;
  if (*(int *)&pTempTexture->m_bFourBitImage == 0) {
    uVar5 = 0x100;
  }
  vHSL.field0_0x0.d[2] = 0.0;
  vHSL.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  vHSL.field0_0x0.d[0] = 0.0;
  if (uVar5 != 0) {
    fVar6 = 0.2;
    pauVar3 = this->m_nOriginalPalette[nPaletteIndex];
    do {
      rgb = *puVar2;
      (*pauVar3)[0] = rgb;
      if ((rgb & 0xff000000) == 0) {
        *puVar2 = 0;
      }
      else {
        RGBtoHSL__11ECharedSkinUiP5EVec3(this,rgb,&vHSL);
        if (1.0 <= vHSL.field0_0x0.d[0]) {
          *puVar2 = (*pauVar3)[0];
        }
        else {
                    /* end of inlined section */
          vHSL.field0_0x0.d[1] = 0.0;
          vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar6;
          if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
            vHSL.field0_0x0.d[2] = 1.0;
          }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          local_a0 = vHSL.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          local_98 = vHSL.field0_0x0.d[2];
                    /* end of inlined section */
          local_9c = 0;
          uVar1 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_a0);
          *puVar2 = (rgb & 0xff000000) + uVar1;
        }
      }
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
      pauVar3 = (uint (*) [256])(*pauVar3 + 1);
    } while (uVar4 < uVar5);
  }
  return;
}

void ECharedSkin::SmurfHair(ERRleTexture *pTempTexture, int nPaletteIndex) {
	u32 i;
	EVec3 vHSL;
	u32 nPaletteSize;
	u32 nAlpha;
	u32 *pCurPixel;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	ERRleTexture *this;
	ERRleTexture *this;
	
  uint rgb;
  uint uVar1;
  uint *puVar2;
  undefined8 unaff_s0;
  uint *puVar3;
  undefined8 unaff_s1;
  uint uVar4;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint uVar5;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar6;
  float fVar7;
  EVec3 vHSL;
  float local_b0;
  float local_ac;
  float local_a8;
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
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
                    /* end of inlined section */
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  uVar5 = 0x10;
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  uVar4 = 0;
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar7 = -0.5;
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  puVar3 = pTempTexture->m_nPalette;
  if (*(int *)&pTempTexture->m_bFourBitImage == 0) {
    uVar5 = 0x100;
  }
  vHSL.field0_0x0.d[2] = 0.0;
  vHSL.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  fVar6 = 0.25;
  vHSL.field0_0x0.d[0] = 0.0;
  if (uVar5 != 0) {
    do {
      rgb = *puVar3;
      puVar2 = this->m_nOriginalPalette[nPaletteIndex] + uVar4;
      *puVar2 = rgb;
      if ((rgb & 0xff000000) == 0) {
        *puVar3 = 0;
      }
      else {
        RGBtoHSL__11ECharedSkinUiP5EVec3(this,rgb,&vHSL);
        if (1.0 <= vHSL.field0_0x0.d[0]) {
          *puVar3 = *puVar2;
        }
        else {
          vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fVar7;
                    /* end of inlined section */
          if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
            vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
          }
          else if (vHSL.field0_0x0.d[0] < 0.0) {
            vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
          }
                    /* end of inlined section */
                    /* end of inlined section */
          vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + -1.0;
          if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
            vHSL.field0_0x0.d[1] = 1.0;
          }
          else if (vHSL.field0_0x0.d[1] < 0.0) {
                    /* end of inlined section */
            vHSL.field0_0x0.d[1] = 0.0;
          }
                    /* end of inlined section */
          vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar6;
          if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
            vHSL.field0_0x0.d[2] = 1.0;
          }
          else if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
            vHSL.field0_0x0.d[2] = 0.0;
          }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          local_ac = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
          local_a8 = vHSL.field0_0x0.d[2];
          local_b0 = vHSL.field0_0x0.d[0];
          uVar1 = HSLtoRGB__11ECharedSkinG5EVec3(this,(EVec3 *)&local_b0);
          *puVar3 = (rgb & 0xff000000) + uVar1;
        }
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar5);
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

void global constructors keyed to ECharedSkin::m_MyHeap() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
