// STATUS: NOT STARTED

#include "gametransitions.h"

EGenericTrans* EGenericTrans::EGenericTrans() {
  this->m_pFont = (ERFont *)0x0;
  return this;
}

void EGenericTrans::~EGenericTrans(int __in_chrg) {
	void *ptr;
	
  EWindow *pEVar1;
  
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
  pEVar1 = this->m_pWin;
  if (pEVar1 != (EWindow *)0x0) {
    (*(code *)pEVar1->__vtable->WindowMatrixChanged)
              ((int)&(pEVar1->m_mWindow).field0_0x0 + (int)*(short *)&pEVar1->__vtable->Select,3);
    this->m_pWin = (EWindow *)0x0;
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/gametransitions.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EGenericTrans::Initialize(int ToState) {
	int i;
	
  EGlobalManagerClient__vtable *pEVar1;
  EGenericTrans *pEVar2;
  EWindow *pEVar3;
  ERFont *this_00;
  int iVar4;
  undefined8 unaff_s0;
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
  
  iVar4 = 0;
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  pEVar2 = (EGenericTrans *)this->m_pImages;
  do {
    pEVar2->m_pWin = (EWindow *)0x0;
    iVar4 = iVar4 + -1;
    pEVar2 = (EGenericTrans *)((int)(pEVar2 + 0xffffffff) + 0x328);
  } while (-1 < iVar4);
  this->m_NumImages = 1;
  memset(this->m_ImageUsed,0,4);
  strcpy((char *)this->m_TextMsgs,"Initializing 1D engine");
  strcpy((char *)this->m_TextMsgs[1],"Measuring right angles");
  strcpy((char *)this->m_TextMsgs[2],"Inverting identity matrix");
  strcpy((char *)this->m_TextMsgs[3],"Straightening curved lines");
  strcpy((char *)this->m_TextMsgs[4],"Managing sim egos");
  strcpy((char *)this->m_TextMsgs[5],"Adding armrests to chairs");
  strcpy((char *)this->m_TextMsgs[6],"Counting lost socks in driers");
  strcpy((char *)this->m_TextMsgs[7],"Adjusting couch springs");
  strcpy((char *)this->m_TextMsgs[8],"Aligning seat cushions");
  strcpy((char *)this->m_TextMsgs[9],"Modulating lost coin ratio");
  strcpy((char *)this->m_TextMsgs[10]," ");
  this->m_NumTextMsgs = 0xb;
  memset(this->m_TextMsgUsed,0,0x2c);
  iVar4 = rand();
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  if (this->m_NumImages == 0) {
    trap(7);
  }
  this->m_dtImageAccumulator = 0.0;
  this->m_dtTextAccumulator = 0.0;
  this->m_TextWaitTime = 0.0;
                    /* inlined from /eor/src2/engine/window/e_window.h */
  this->m_CurrentSlide = iVar4 % this->m_NumImages;
  pEVar3 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
  pEVar3 = __7EWindow(pEVar3);
  this->m_pWin = pEVar3;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_40 = 0;
  local_3c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_38 = 0;
                    /* end of inlined section */
  (*(code *)pEVar1[4].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 4),&local_40,1);
  if (this->m_pFont == (ERFont *)0x0) {
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
    this_00 = (ERFont *)
              AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pFont = this_00;
    SetSize__6ERFontffb(this_00,36.0,1.0,true);
    LoadFont__6ERFont(this->m_pFont);
    *(undefined4 *)&this->m_FirstSlide = 1;
  }
  else {
    *(undefined4 *)&this->m_FirstSlide = 1;
  }
  return;
}

void EGenericTrans::Update(ERC *prc, int finalScreen) {
	float TimeBetweenSlide;
	int TextMsgNum;
	float Displacement;
	EVec2 Pos;
	int Found;
	int i;
	EVec2 Pos;
	ERFont *this;
	int Found;
	int i;
	ERFont *this;
	EVec2 Dimensions;
	char *szString;
	ERFont *this;
	ERC *prc;
	char *szString;
	EVec2 Dimensions;
	char *szString;
	ERFont *this;
	ERC *prc;
	char *szString;
	
  EWindow__vtable *pEVar1;
  ERFont *pEVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char (*pacVar8) [64];
  int iVar9;
  int iVar10;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  bool *pbVar11;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar12;
  EHashTableNode *pEVar13;
  EVec2 Pos;
  EVec2 Dimensions;
  EHashTableNode *local_110;
  EStorable__vtable *local_10c;
  int local_100;
  EHashTableNode *local_fc;
  EHashTableNode *local_f0;
  EHashTableNode *local_ec;
  EHashTableNode *local_e8;
  EHashTableNode *local_e4;
  EHashTableNode **local_e0;
  EHashTableNode *local_dc;
  EFontSize *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  ERShader **local_bc;
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
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
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
  pEVar1 = this->m_pWin->__vtable;
  local_c0 = finalScreen;
  (*(code *)pEVar1->OutputCoordinatesChanged)
            ((int)&(this->m_pWin->m_mWindow).field0_0x0 +
             (int)*(short *)&pEVar1->InputCoordinatesChanged);
  if (_dt < 1.0) {
    this->m_dtImageAccumulator = this->m_dtImageAccumulator + _dt;
    iVar10 = *(int *)&this->m_FirstSlide;
  }
  else {
    iVar10 = *(int *)&this->m_FirstSlide;
  }
  fVar12 = 4.0;
  if (iVar10 == 1) {
    fVar12 = 6.0;
  }
  local_bc = this->m_pImages;
  if (fVar12 <= this->m_dtImageAccumulator) {
    iVar10 = this->m_NumImages;
    bVar3 = false;
    pbVar11 = this->m_ImageUsed;
    if (0 < iVar10) {
      if (*(int *)this->m_ImageUsed == 0) {
        bVar3 = true;
      }
      else {
        for (iVar9 = 1; iVar9 < iVar10; iVar9 = iVar9 + 1) {
          if (*(int *)(pbVar11 + iVar9 * 4) == 0) {
            bVar3 = true;
            break;
          }
        }
      }
    }
    if ((!bVar3) && (iVar9 = 0, pacVar8 = (char (*) [64])pbVar11, 0 < iVar10)) {
      do {
        *(undefined4 *)*pacVar8 = 0;
        iVar9 = iVar9 + 1;
        pacVar8 = (char (*) [64])(*pacVar8 + 4);
      } while (iVar9 < this->m_NumImages);
    }
    do {
      iVar10 = rand();
      iVar10 = iVar10 % this->m_NumImages;
      if (this->m_NumImages == 0) {
        trap(7);
      }
    } while (*(int *)(pbVar11 + iVar10 * 4) == 1);
    this->m_CurrentSlide = iVar10;
    *(int *)(pbVar11 + iVar10 * 4) = 1;
    this->m_dtImageAccumulator = 0.0;
    *(undefined4 *)&this->m_FirstSlide = 0;
  }
  pEVar13 = (EHashTableNode *)0x0;
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Dimensions.field0_0x0.d[1] = 1.0;
  Dimensions.field0_0x0.d[0] = 1.0;
  local_10c = (EStorable__vtable *)0x3f800000;
  local_100 = 0x3f800000;
  local_e4 = (EHashTableNode *)0x3f800000;
                    /* end of inlined section */
  Pos.field0_0x0.d[0] = (float)pEVar13;
  Pos.field0_0x0.d[1] = (float)pEVar13;
  local_110 = pEVar13;
  local_fc = pEVar13;
  local_f0 = pEVar13;
  local_ec = pEVar13;
  local_e8 = pEVar13;
  (*(code *)prc->__vtable[1].DisplayList)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Pos,&Dimensions,
             (EVec2 *)&local_110,&local_100,&local_f0);
  if (local_bc[this->m_CurrentSlide] != (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(local_bc[this->m_CurrentSlide],prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Dimensions.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Dimensions.field0_0x0.d[0] = 1.0;
    local_10c = (EStorable__vtable *)0x3f800000;
    local_e0 = (EHashTableNode **)0x3f800000;
    local_d0 = (EFontSize *)0x3f800000;
    local_cc = 0x3f800000;
    local_c8 = 0x3f800000;
    local_c4 = 0x3f800000;
                    /* end of inlined section */
    Pos.field0_0x0.d[0] = (float)pEVar13;
    Pos.field0_0x0._4_4_ = pEVar13;
    local_110 = pEVar13;
    local_dc = pEVar13;
    (*(code *)prc->__vtable[1].DisplayList)
              (pEVar13,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Pos,
               &Dimensions,(EVec2 *)&local_110,&local_e0,&local_d0);
  }
  if (local_c0 < 1) {
    fVar12 = this->m_dtTextAccumulator + _dt;
    this->m_dtTextAccumulator = fVar12;
    if (this->m_TextWaitTime < fVar12) {
      rand();
      bVar3 = false;
      this->m_TextWaitTime = 3.0;
      iVar10 = 0;
      if (*(int *)this->m_TextMsgUsed == 0) {
LAB_0015f590:
        bVar3 = true;
        iVar9 = iVar10;
      }
      else {
        for (iVar10 = 1; iVar9 = 0, iVar10 < 0xb; iVar10 = iVar10 + 1) {
          if (*(int *)(this->m_TextMsgUsed + iVar10 * 4) == 0) goto LAB_0015f590;
        }
      }
      iVar10 = iVar9 << 2;
      if (!bVar3) {
        iVar10 = 10;
        puVar7 = (undefined4 *)&this->field_0x2f4;
        do {
          *puVar7 = 0;
          iVar10 = iVar10 + -1;
          puVar7 = puVar7 + -1;
        } while (-1 < iVar10);
        iVar9 = 0;
        iVar10 = 0;
      }
      do {
      } while (*(int *)(this->m_TextMsgUsed + iVar10) == 1);
      *(undefined4 *)(this->m_TextMsgUsed + iVar10) = 1;
      this->m_dtTextAccumulator = 0.0;
    }
    else {
      iVar9 = this->m_LastTextMsg;
    }
    if (this->m_NumTextMsgs <= iVar9) {
      iVar9 = this->m_NumTextMsgs;
    }
    if (this->m_LastTextMsg != iVar9) {
      if (this->m_CurrentMsg == 0) {
        this->m_CurrentMsg = iVar9;
      }
      else if (this->m_NextMsg == 0) {
        this->m_NextMsg = iVar9;
      }
    }
    fVar12 = _dt * 0.5;
    this->m_LastTextMsg = iVar9;
    fVar12 = this->m_LastDisplacement - fVar12;
    if (this->m_NextMsg == 0) {
      if (fVar12 < -1.0) {
        fVar12 = -1.0;
      }
    }
    else if (fVar12 < -2.0) {
      this->m_CurrentMsg = this->m_NextMsg;
      fVar12 = -1.0;
      this->m_NextMsg = 0;
    }
    Pos.field0_0x0.d[0] = fVar12 + 1.5;
    this->m_LastDisplacement = fVar12;
    Pos.field0_0x0.d[1] = 0.72;
    SetSize__6ERFontffb(this->m_pFont,36.0,1.0,true);
    uVar6 = _WHITE.field0_0x0.d[3];
    uVar5 = _WHITE.field0_0x0.d[2];
    uVar4 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar2 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (pEVar2->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
    (pEVar2->m_vColor).field0_0x0.d[2] = uVar5;
    (pEVar2->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
    Select__6ERFontP3ERC(this->m_pFont,prc);
    iVar10 = this->m_CurrentMsg;
    if ((0 < iVar10) && (*(char *)(this->m_pImages + iVar10 * 0x10 + -0xe) != '\0')) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&Dimensions,this->m_pFont,(bool)((char)iVar10 * '@' + (char)this + -0x34)
                 ,(EWindow *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      Pos.field0_0x0.d[0] = Pos.field0_0x0.d[0] - Dimensions.field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      local_10c = (EStorable__vtable *)Pos.field0_0x0.d[1];
      local_110 = (EHashTableNode *)Pos.field0_0x0.d[0];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,this->m_pImages + this->m_CurrentMsg * 0x10 + -0xe,false,
                 (EVec2 *)&local_110,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
    }
                    /* end of inlined section */
    iVar10 = this->m_NextMsg;
    Pos.field0_0x0.d[0] = fVar12 + 2.5;
    if ((0 < iVar10) && (*(char *)(this->m_pImages + iVar10 * 0x10 + -0xe) != '\0')) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&Dimensions,this->m_pFont,(bool)((char)iVar10 * '@' + (char)this + -0x34)
                 ,(EWindow *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      Pos.field0_0x0.d[0] = Pos.field0_0x0.d[0] - Dimensions.field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      local_10c = (EStorable__vtable *)Pos.field0_0x0.d[1];
      local_110 = (EHashTableNode *)Pos.field0_0x0.d[0];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,this->m_pImages + this->m_NextMsg * 0x10 + -0xe,false,
                 (EVec2 *)&local_110,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
    }
  }
  else {
    fVar12 = this->m_TextFlashingAccumulator + _dt;
    this->m_TextFlashingAccumulator = fVar12;
    if (2.0 < fVar12) {
      this->m_TextFlashingAccumulator = fVar12 - 2.0;
    }
    if ((this->m_TextFlashingAccumulator <= 1.0) || (local_c0 != 1)) {
                    /* end of inlined section */
      Pos.field0_0x0.d[1] = 0.72;
      Pos.field0_0x0.d[0] = 0.5;
      SetSize__6ERFontffb(this->m_pFont,36.0,1.0,true);
      uVar6 = _WHITE.field0_0x0.d[3];
      uVar5 = _WHITE.field0_0x0.d[2];
      uVar4 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar2 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      (pEVar2->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
      (pEVar2->m_vColor).field0_0x0.d[2] = uVar5;
      (pEVar2->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
      Select__6ERFontP3ERC(this->m_pFont,prc);
    }
  }
  return;
}

void EGenericTrans::Reset() {
	int i;
	
  EWindow *pEVar1;
  char (*pacVar2) [64];
  ERShader **ppEVar3;
  int iVar4;
  
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
  ppEVar3 = this->m_pImages;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + -1;
    if (*ppEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&(*ppEVar3)->field0_0x0);
      *ppEVar3 = (ERShader *)0x0;
    }
    ppEVar3 = ppEVar3 + 1;
  } while (-1 < iVar4);
  pacVar2 = this->m_TextMsgs[10];
  iVar4 = 10;
  do {
    (*pacVar2)[0] = '\0';
    iVar4 = iVar4 + -1;
    pacVar2 = pacVar2[-1];
  } while (-1 < iVar4);
  pEVar1 = this->m_pWin;
  if (pEVar1 != (EWindow *)0x0) {
    (*(code *)pEVar1->__vtable->WindowMatrixChanged)
              ((int)&(pEVar1->m_mWindow).field0_0x0 + (int)*(short *)&pEVar1->__vtable->Select,3);
    this->m_pWin = (EWindow *)0x0;
  }
  this->m_CurrentSlide = 0;
  return;
}
