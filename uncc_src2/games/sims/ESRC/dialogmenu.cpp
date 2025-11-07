// STATUS: NOT STARTED

#include "dialogmenu.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2698;
	float m_infoWinAlpha;
	float m_infoWinAlphaTime;
	s32 m_curwindow;
protected:
	s32 m_pressed;
	bool m_bButtdown;
	bool m_bDrawInfo;
	float m_introAnimDur;
	float m_infointroAnimDur;
	float m_infoDelayDur;
	float m_introTime;
	float m_hoverTime;
	float m_infoInTime;
	float m_simnametimeout;
	int m_curOpt;
	ERelationsWin m_rltnsMenu;
	static ESlideTextBox m_nameBoxs[2];
	static ESlideTextBox m_playerNameBoxs[2];
	static bool m_bInit;
	static void (*m_DrawTable[4])(/* parameters unknown */);
	static void (*m_UpdateTable[4])(/* parameters unknown */);
	static ERFont *m_pFont;
public:
	static ERShader *m_textarrowl;
	static ERShader *m_textarrowr;
	static ERShader *m_pDpadInverse;
	static ERShader *m_pMenubevel_T_L;
	static ERShader *m_pTextBoxBGBL;
	static ERShader *m_pTextBoxBGBR;
	static ERShader *m_pTextBoxBGTL;
	static ERShader *m_pTextBoxBGTR;
	static ERShader *m_pTextBoxBGML;
	static ERShader *m_pTextBoxBGMR;
	static ERShader *m_pTextBoxBGTC;
	static ERShader *m_pTextBoxBGBC;
	static ERShader *m_pTextBoxHBL;
	static ERShader *m_pTextBoxHBR;
	static ERShader *m_pTextBoxHTL;
	static ERShader *m_pTextBoxHTR;
	static ERShader *m_pTextBoxHML;
	static ERShader *m_pTextBoxHMR;
	static ERShader *m_pTextBoxHTC;
	static ERShader *m_pTextBoxHBC;
	static ERShader *m_pTextLineBGL;
	static ERShader *m_pTextLineBGR;
	static ERShader *m_pTextLineBGC;
	static ERShader *m_pTextPopOutC;
	static ERShader *m_pTextPopOutCH;
	static ERShader *m_pTextPopOutL;
	static ERShader *m_pTextPopOutLH;
	static ERShader *m_pTextPopOutR;
	static ERShader *m_pTextPopOutRH;
	static UiStringLookUpTableEntry __MoodStrings[8];
	static UiStringLookUpTableEntry __PersStrings[8];
	static UiStringLookUpTableEntry __JobStrings[8];
	static UiStringLookUpTableEntry __RelaStrings[8];
	static UiStringLookUpTableEntry *__InfoTextLookup[4];
	
	SimInfoWin& operator=();
	SimInfoWin();
	SimInfoWin();
	/* vtable[1] */ virtual SimInfoWin(SimInfoWin*, int, void);
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void Update();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawInfo();
	void SetWindow();
	s32 GetWindow();
	void GetBut();
	void ResetState();
	void ChangedSelectedSim();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawTextBox(/* parameters unknown */);
	static void DrawBigHighlightBox(/* parameters unknown */);
protected:
	int GetDirection();
	void DrawBackGround();
	void StartIntro();
	void StartTextSlide();
	void UpdateIntroAnim();
	void UpdateInfoIntroAnim();
	void StartInfoIntro();
	void ResetAllclocks();
	void JobDrawInfo();
};

__vtbl_ptr_type EDialogMenu virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogMenu::~EDialogMenu,
		/* .__delta2 = */ -11992
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogMenu::Init,
		/* .__delta2 = */ -11912
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogMenu::Reset,
		/* .__delta2 = */ -9384
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EDialogMenu* EDialogMenu::EDialogMenu() {
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
  this->__vtable = (EDialogMenu__vtable *)_vt_11EDialogMenu;
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&(this->m_sTextBuffer).field0_0x0,(this->m_sTextBuffer).fChars,0x400);
                    /* end of inlined section */
  this->m_pFont = (ERFont *)0x0;
  this->m_pWin = (EWindow *)0x0;
  return this;
}

void EDialogMenu::~EDialogMenu(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EDialogMenu__vtable *)_vt_11EDialogMenu;
  Reset__11EDialogMenu(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EDialogMenu::Init() {
	EVec2 vScreen;
	EGraphics *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ERFont *pEVar5;
  EWindow *pEVar6;
  int iVar7;
  int iVar8;
  EVec2 vScreen;
  
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar5 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar5;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  iVar8 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  iVar7 = _pGfx->m_xscreen;
  puVar1 = (undefined *)((int)&(this->m_vDialogSize).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x3f0000003f19999aU >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDialogSize & 7;
  puVar3 = (ulong *)((int)&this->m_vDialogSize - uVar2);
  *puVar3 = 0x3f0000003f19999a << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&(this->m_vDialogPos).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x3e19999a3e4ccccdU >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDialogPos & 7;
  puVar3 = (ulong *)((int)&this->m_vDialogPos - uVar2);
  *puVar3 = 0x3e19999a3e4ccccd << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  *(undefined4 *)&this->m_bNeedAdjustDialog = 0;
  this->m_sText = (short *)0x0;
  erase__13StringBuffer2(&(this->m_sTextBuffer).field0_0x0);
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bMoreDown = 0;
  this->m_nLinesScrolled = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar4 = CONCAT44(4.0 / (float)iVar8,10.0 / (float)iVar7);
  puVar1 = (undefined *)((int)&(this->m_vTextGapSize).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vTextGapSize & 7;
  puVar3 = (ulong *)((int)&this->m_vTextGapSize - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* inlined from /eor/src2/engine/window/e_window.h */
  pEVar6 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
  pEVar6 = __7EWindow(pEVar6);
  this->m_pWin = pEVar6;
  return;
}

void EDialogMenu::SetupDialog(EVec2 vPosTopLeft, float fWidth, s32 nNumMenuOptions, c16 **ppMenuOptions, c16 *sText, bool bSaveText) {
	EVec2 vScreen;
	float fTemp;
	EVec2 vGapSize;
	EVec2 vInteriorSize;
	float fHeight;
	EVec2 m_vInteriorPos;
	EGraphics *this;
	ERFont *this;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  EGraphics *pEVar9;
  undefined4 uVar10;
  undefined doubleByte;
  ulong in_v0;
  ulong uVar12;
  short **ppsVar13;
  ERFont *pEVar14;
  uint uVar15;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  EVec2 vScreen;
  EVec2 vGapSize;
  EVec2 vInteriorSize;
  EVec2 m_vInteriorPos;
  TRect_float_ local_60;
  EHashTableNode **local_50;
  uint uStack_4c;
  EFontSize *local_40;
  int iStack_3c;
  EHashTableNode **local_30;
  uint uStack_2c;
  EFontSize *local_20;
  undefined4 uStack_1c;
  short *psVar11;
  
  local_40 = (EFontSize *)unaff_s1;
  iStack_3c = (int)((ulong)unaff_s1 >> 0x20);
  local_30 = (EHashTableNode **)unaff_s2;
  uStack_2c = (uint)((ulong)unaff_s2 >> 0x20);
  local_20 = (EFontSize *)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (EHashTableNode **)unaff_s0;
  uStack_4c = (uint)((ulong)unaff_s0 >> 0x20);
  puVar1 = (undefined *)((int)&vPosTopLeft->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vPosTopLeft & 7;
  uVar12 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)vPosTopLeft - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->m_vDialogPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar12 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDialogPos & 7;
  puVar5 = (ulong *)((int)&this->m_vDialogPos - uVar2);
  *puVar5 = uVar12 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vDialogSize).field0_0x0.d[0] = fWidth;
  this->m_nNumMenuOptions = nNumMenuOptions;
  this->m_ppMenuOptions = ppMenuOptions;
  *(int *)&this->m_bSaveText = (int)bSaveText;
  if (bSaveText) {
    erase__13StringBuffer2(&(this->m_sTextBuffer).field0_0x0);
    append__13StringBuffer2PCUsi(&(this->m_sTextBuffer).field0_0x0,sText,0x3ff);
  }
  else {
    this->m_sText = sText;
  }
                    /* inlined from /eor/src2/engine/e_graphics.h */
  pEVar9 = _pGfx;
                    /* end of inlined section */
  this->m_nDialogSelectedOption = 0;
  fVar17 = (float)pEVar9->m_xscreen;
  fVar20 = (float)pEVar9->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vTextPos).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vTextPos & 7;
  puVar5 = (ulong *)((int)&this->m_vTextPos - uVar2);
  *puVar5 = 0L << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar18 = (this->m_vDialogSize).field0_0x0.d[0] - 32.0 / fVar17;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vTextSize).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | (ulong)((uint)fVar18 >> (7 - uVar2) * 8);
  uVar2 = (uint)&this->m_vTextSize & 7;
  puVar5 = (ulong *)((int)&this->m_vTextSize - uVar2);
  *puVar5 = (ulong)(uint)fVar18 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  vGapSize.field0_0x0.d[0] =
       (this->m_vTextPos).field0_0x0.d[0] + (this->m_vTextGapSize).field0_0x0.d[0];
  vGapSize.field0_0x0.d[1] =
       (this->m_vTextPos).field0_0x0.d[1] + (this->m_vTextGapSize).field0_0x0.d[1] +
       (this->m_vArrowSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vCurTextPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 |
            CONCAT44(vGapSize.field0_0x0.d[1],vGapSize.field0_0x0.d[0]) >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vCurTextPos & 7;
  puVar5 = (ulong *)((int)&this->m_vCurTextPos - uVar2);
  *puVar5 = CONCAT44(vGapSize.field0_0x0.d[1],vGapSize.field0_0x0.d[0]) << uVar2 * 8 |
            *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  *(undefined4 *)&this->m_bMoreDown = 0;
  this->m_nSkippedLines = 0;
  SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
  uVar8 = _WHITE.field0_0x0.d[3];
  uVar7 = _WHITE.field0_0x0.d[2];
  uVar6 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar14 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (pEVar14->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar14->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
  (pEVar14->m_vColor).field0_0x0.d[2] = uVar7;
  (pEVar14->m_vColor).field0_0x0.d[3] = uVar8;
  DrawText__11EDialogMenuP3ERCbT2(this,(ERC *)0x0,false,false);
  if (*(int *)&this->m_bSaveText == 0) {
    pEVar14 = this->m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    doubleByte = SUB41(this->m_sText,0);
  }
  else {
    pEVar14 = this->m_pFont;
    psVar11 = c_str__C13StringBuffer2(&(this->m_sTextBuffer).field0_0x0);
    doubleByte = SUB41(psVar11,0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  }
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vGapSize,pEVar14,(bool)doubleByte,(EWindow *)&pGifTag1);
  uVar10 = vGapSize.field0_0x0.d[1];
                    /* end of inlined section */
  uVar12 = (ulong)(int)this->m_pFont;
  fVar18 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
  uVar2 = this->m_nSkippedLines;
  if ((int)uVar2 < 0) {
    fVar21 = (float)(uVar2 & 1 | uVar2 >> 1);
    fVar21 = fVar21 + fVar21;
  }
  else {
    fVar21 = (float)uVar2;
  }
  fVar16 = (this->m_vTextGapSize).field0_0x0.d[1];
  uVar2 = this->m_nSkippedLines;
  (this->m_vTextSize).field0_0x0.d[1] = fVar21 * (uVar10 + fVar18) + fVar16 + fVar16;
  if (uVar2 == 1) {
    *(undefined4 *)&this->m_bSingleLine = 1;
  }
  else {
    *(undefined4 *)&this->m_bSingleLine = 0;
  }
  uVar15 = 0;
  vGapSize.field0_0x0.d[0] = 5.0 / fVar17;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vGapSize.field0_0x0.d[1] = 5.0 / fVar20;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar18 = 0.0;
  uVar4 = this->m_nNumMenuOptions;
  puVar1 = (undefined *)((int)&(this->m_vTextSize).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vTextSize & 7;
  vInteriorSize.field0_0x0 =
       (EVec2__null___1__1)
       ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
        uVar12 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
       *(ulong *)((int)&this->m_vTextSize - uVar3) >> uVar3 * 8);
  puVar1 = (undefined *)((int)&vInteriorSize.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | (ulong)vInteriorSize.field0_0x0 >> (7 - uVar2) * 8;
  (this->m_vMenuSize).field0_0x0.d[0] = vInteriorSize.field0_0x0.d[0];
  if (uVar4 != 0) {
    ppsVar13 = this->m_ppMenuOptions;
    while( true ) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&m_vInteriorPos,this->m_pFont,SUB41(ppsVar13[uVar15],0),
                 (EWindow *)&pGifTag1);
                    /* end of inlined section */
      fVar18 = fVar18 + m_vInteriorPos.field0_0x0.d[1];
      if (uVar15 < this->m_nNumMenuOptions - 1) {
        fVar21 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        fVar18 = fVar18 + fVar21;
      }
      uVar15 = uVar15 + 1;
      if (this->m_nNumMenuOptions <= uVar15) break;
      ppsVar13 = this->m_ppMenuOptions;
    }
  }
  fVar19 = (this->m_vDialogPos).field0_0x0.d[0];
  fVar21 = (this->m_vDialogPos).field0_0x0.d[1];
  fVar16 = vInteriorSize.field0_0x0.d[1] + fVar18 + vGapSize.field0_0x0.d[1];
  (this->m_vMenuSize).field0_0x0.d[1] = fVar18;
  fVar21 = fVar21 + 16.0 / fVar20;
  m_vInteriorPos.field0_0x0.d[0] = fVar19 + 16.0 / fVar17;
  vInteriorSize.field0_0x0 =
       (EVec2__null___1__1)
       ((ulong)vInteriorSize.field0_0x0 & 0xffffffff | (ulong)(uint)fVar16 << 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (this->m_vDialogSize).field0_0x0.d[1] = fVar16 + 32.0 / fVar20;
  uVar12 = CONCAT44(fVar21,m_vInteriorPos.field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&(this->m_vTextPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar12 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vTextPos & 7;
  puVar5 = (ulong *)((int)&this->m_vTextPos - uVar2);
  *puVar5 = uVar12 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  m_vInteriorPos.field0_0x0.d[1] =
       fVar21 + (this->m_vTextSize).field0_0x0.d[1] + vGapSize.field0_0x0.d[1];
  puVar1 = (undefined *)((int)&(this->m_vMenuPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 |
            CONCAT44(m_vInteriorPos.field0_0x0.d[1],m_vInteriorPos.field0_0x0.d[0]) >>
            (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vMenuPos & 7;
  puVar5 = (ulong *)((int)&this->m_vMenuPos - uVar2);
  *puVar5 = CONCAT44(m_vInteriorPos.field0_0x0.d[1],m_vInteriorPos.field0_0x0.d[0]) << uVar2 * 8 |
            *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  fVar21 = (this->m_vTextPos).field0_0x0.d[0];
  fVar18 = (this->m_vTextPos).field0_0x0.d[1];
  fVar19 = (this->m_vTextGapSize).field0_0x0.d[0];
  fVar16 = (this->m_vTextGapSize).field0_0x0.d[1];
  local_60.right = ((fVar21 + (this->m_vTextSize).field0_0x0.d[0]) - fVar19) + 1.0 / fVar17;
  local_60.bottom = ((fVar18 + (this->m_vTextSize).field0_0x0.d[1]) - fVar16) + 1.0 / fVar20;
  local_60.left = (fVar21 + fVar19) - 1.0 / fVar17;
  local_60.top = (fVar18 + fVar16) - 1.0 / fVar20;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  SetClip__7EWindowRCt5TRect1Zf(this->m_pWin,&local_60);
  return;
}

s32 EDialogMenu::DialogUpdate() {
  EUIVirtualCtrl__vtable *pEVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar4 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                     _globals.m_whichPlayerPaused,0x10);
  if (lVar4 == 0) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar4 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       _globals.m_whichPlayerPaused,0x40);
    if (lVar4 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar4 = (*(code *)pEVar1[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                         _globals.m_whichPlayerPaused,0x1000);
      if (lVar4 == 0) {
        pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar4 = (*(code *)pEVar1[1].GetBut)
                          ((int)(_globals.m_pCtrlPad)->m_pressed +
                           *(short *)&pEVar1[1].ClearBut + -4,_globals.m_whichPlayerPaused,0x4000);
        if (lVar4 == 0) {
          return -1;
        }
        uVar3 = this->m_nDialogSelectedOption + 1;
        uVar5 = this->m_nNumMenuOptions - 1;
        this->m_nDialogSelectedOption = uVar3;
        if (uVar5 < uVar3) {
          this->m_nDialogSelectedOption = uVar5;
        }
        else {
          if (_8EUiAudio__pUiAudioMan == (EUiAudio *)0x0) {
            return -1;
          }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
        }
      }
      else {
        iVar2 = this->m_nDialogSelectedOption + -1;
        this->m_nDialogSelectedOption = iVar2;
        if (-1 < iVar2) {
          if (_8EUiAudio__pUiAudioMan == (EUiAudio *)0x0) {
            return -1;
          }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
          return -1;
                    /* end of inlined section */
        }
        this->m_nDialogSelectedOption = 0;
      }
                    /* end of inlined section */
      iVar2 = -1;
    }
    else if (_8EUiAudio__pUiAudioMan == (EUiAudio *)0x0) {
      iVar2 = this->m_nDialogSelectedOption;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
      iVar2 = this->m_nDialogSelectedOption;
    }
  }
  else {
    iVar2 = -2;
    if (_8EUiAudio__pUiAudioMan != (EUiAudio *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
      iVar2 = -2;
                    /* end of inlined section */
    }
  }
  return iVar2;
}

void EDialogMenu::DialogDraw(ERC *prc, bool bCenterJustify) {
	EVec2 vScreen;
	int i;
	EVec2 vPos;
	EGraphics *this;
	ERFont *this;
	float y;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  undefined *puVar1;
  EWindow *pEVar2;
  ERFont *pEVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar9;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  int iVar10;
  int iVar11;
  float fVar12;
  float _l;
  EVec2 vScreen;
  EVec2 vPos;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
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
  
                    /* inlined from /eor/src2/engine/e_graphics.h */
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar10 = _pGfx->m_yscreen;
  iVar11 = _pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
  _l = (this->m_vDialogPos).field0_0x0.d[0];
  fVar12 = (this->m_vDialogPos).field0_0x0.d[1];
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,_l,fVar12,_l + (this->m_vDialogSize).field0_0x0.d[0],
             fVar12 + (this->m_vDialogSize).field0_0x0.d[1],1.0);
  if (*(int *)&this->m_bSingleLine == 0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vPos.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vPos.field0_0x0.d[0] = 1.0;
    DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
              (prc,(this->m_vTextPos).field0_0x0.d[0],(this->m_vTextPos).field0_0x0.d[1],
               (this->m_vTextSize).field0_0x0.d[1],(this->m_vTextSize).field0_0x0.d[0],1.0,
               (EVec4 *)&vPos);
    pEVar2 = this->m_pWin;
  }
  else {
    DrawTextBox__10SimInfoWinP3ERCffff
              (prc,(this->m_vTextPos).field0_0x0.d[0],(this->m_vTextPos).field0_0x0.d[1],
               (this->m_vTextSize).field0_0x0.d[0],1.0);
    pEVar2 = this->m_pWin;
  }
  uVar9 = 0;
  (*(code *)pEVar2->__vtable->OutputCoordinatesChanged)
            ((int)&(pEVar2->m_mWindow).field0_0x0 +
             (int)*(short *)&pEVar2->__vtable->InputCoordinatesChanged,prc);
  vPos.field0_0x0.d[0] = (this->m_vTextPos).field0_0x0.d[0] + (this->m_vTextGapSize).field0_0x0.d[0]
  ;
  vPos.field0_0x0.d[1] = (this->m_vTextPos).field0_0x0.d[1] + (this->m_vTextGapSize).field0_0x0.d[1]
  ;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vCurTextPos).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
            CONCAT44(vPos.field0_0x0.d[1],vPos.field0_0x0.d[0]) >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_vCurTextPos & 7;
  puVar5 = (ulong *)((int)&this->m_vCurTextPos - uVar4);
  *puVar5 = CONCAT44(vPos.field0_0x0.d[1],vPos.field0_0x0.d[0]) << uVar4 * 8 |
            *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  *(undefined4 *)&this->m_bMoreDown = 0;
  this->m_nSkippedLines = 0;
  Select__6ERFontP3ERC(this->m_pFont,prc);
  SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
  uVar8 = _WHITE.field0_0x0.d[3];
  uVar7 = _WHITE.field0_0x0.d[2];
  uVar6 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar3 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (pEVar3->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar7;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar8;
  DrawText__11EDialogMenuP3ERCbT2(this,prc,true,bCenterJustify);
  (*(code *)(_app.m_pFullWindow)->__vtable->OutputCoordinatesChanged)
            ((int)&((_app.m_pFullWindow)->m_mWindow).field0_0x0 +
             (int)*(short *)&(_app.m_pFullWindow)->__vtable->InputCoordinatesChanged,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0.d[1] = (this->m_vMenuPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vPos.field0_0x0.d[0] =
       (this->m_vMenuPos).field0_0x0.d[0] + (this->m_vMenuSize).field0_0x0.d[0] * 0.5;
                    /* end of inlined section */
  if (this->m_nNumMenuOptions != 0) {
    do {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      uVar8 = _BLACK.field0_0x0.d[3];
      uVar7 = _BLACK.field0_0x0.d[2];
      uVar6 = _BLACK.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar3 = this->m_pFont;
      (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
      (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
      (pEVar3->m_vColor).field0_0x0.d[2] = uVar7;
      (pEVar3->m_vColor).field0_0x0.d[3] = uVar8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_b0 = vPos.field0_0x0.d[0] + 1.0 / (float)iVar11;
      local_ac = vPos.field0_0x0.d[1] + 1.0 / (float)iVar10;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_a0 = local_b0;
      local_9c = local_ac;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,this->m_ppMenuOptions[uVar9],true,(EVec2 *)&local_a0,E_FAX_CENTER
                 ,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
      pEVar3 = this->m_pFont;
      uVar6 = _WHITE.field0_0x0._0_8_;
      uVar7 = _WHITE.field0_0x0.d[2];
      uVar8 = _WHITE.field0_0x0.d[3];
      if (uVar9 == this->m_nDialogSelectedOption) {
        uVar6 = _CYAN.field0_0x0._0_8_;
        uVar7 = _CYAN.field0_0x0.d[2];
        uVar8 = _CYAN.field0_0x0.d[3];
                    /* end of inlined section */
      }
      (pEVar3->m_vColor).field0_0x0.d[0] = (float)uVar6;
      (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
      (pEVar3->m_vColor).field0_0x0.d[2] = uVar7;
      (pEVar3->m_vColor).field0_0x0.d[3] = uVar8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_b0 = vPos.field0_0x0.d[0];
      local_ac = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,this->m_ppMenuOptions[uVar9],true,(EVec2 *)&local_b0,E_FAX_CENTER
                 ,E_FAY_TOP,&vPos);
                    /* end of inlined section */
      uVar9 = uVar9 + 1;
      vPos.field0_0x0.d[0] =
           (this->m_vMenuPos).field0_0x0.d[0] + (this->m_vMenuSize).field0_0x0.d[0] * 0.5;
      fVar12 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
      vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar12;
    } while (uVar9 < this->m_nNumMenuOptions);
  }
  return;
}

void EDialogMenu::Reset() {
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
  return;
}

void EDialogMenu::DrawText(ERC *prc, bool bDraw, bool bCenterJustify) {
	float fStartx;
	float fClipW;
	float flineinc;
	c16 *pStr;
	c16 *pPos;
	bool gotline;
	short unsigned int sLine[256];
	EVec2 vnewstrw;
	int nCharsInWord;
	int i;
	c16 *pBuffPos;
	int cPos0;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	EVec2 &vPos;
	EVec2 &v;
	float y;
	ERFont *this;
	ERC *prc;
	
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  bool bVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  undefined8 unaff_s0;
  int iVar11;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  short *psVar12;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  int iVar13;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  short sLine [256];
  EVec2 vnewstrw;
  undefined local_100 [20];
  EStorable__vtable *local_ec;
  EStorable__vtable *local_e0;
  char *local_dc;
  ERC *local_d0;
  int local_cc;
  EHashTableNode *local_c8;
  EHashTableNode **local_c0;
  uint uStack_bc;
  EFontSize *local_b0;
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
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
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
  local_b0 = (EFontSize *)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (EHashTableNode **)unaff_s0;
  uStack_bc = (uint)((ulong)unaff_s0 >> 0x20);
  local_cc = (int)bDraw;
  local_c8 = (EHashTableNode *)(int)bCenterJustify;
  local_d0 = prc;
  if (*(int *)&this->m_bSaveText == 0) {
    psVar7 = this->m_sText;
  }
  else {
    psVar7 = (short *)length__C13StringBuffer2(&(this->m_sTextBuffer).field0_0x0);
  }
  if (psVar7 != (short *)0x0) {
    if (local_cc == 0) {
      fVar16 = (this->m_vTextGapSize).field0_0x0.d[0];
    }
    else {
      Select__6ERFontP3ERC(this->m_pFont,local_d0);
                    /* end of inlined section */
      fVar16 = (this->m_vTextGapSize).field0_0x0.d[0];
    }
    fVar14 = (this->m_vTextSize).field0_0x0.d[0];
    fVar22 = (this->m_vCurTextPos).field0_0x0.d[0];
    fVar17 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
    if (*(int *)&this->m_bSaveText == 0) {
      psVar7 = this->m_sText;
    }
    else {
      psVar7 = c_str__C13StringBuffer2(&(this->m_sTextBuffer).field0_0x0);
    }
    sVar2 = *psVar7;
    while (sVar2 != 0) {
      iVar11 = 0;
      memset(sLine,0,0x200);
      bVar5 = false;
      iVar13 = 0;
      psVar12 = sLine;
      sVar2 = *psVar7;
      if (*psVar7 != 0) {
        do {
          sLine[0] = sVar2;
          if (*psVar7 == 10) {
            psVar7 = psVar7 + 1;
            bVar5 = true;
          }
          else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      ((ERFont *)local_100,this->m_pFont,SUB41(psVar12,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
            vnewstrw.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_100._4_4_,local_100._0_4_);
            puVar1 = (undefined *)((int)&vnewstrw.field0_0x0 + 7);
            uVar9 = (uint)puVar1 & 7;
            puVar4 = (ulong *)(puVar1 + -uVar9);
            *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 |
                      (ulong)vnewstrw.field0_0x0 >> (7 - uVar9) * 8;
            bVar6 = Isspace__FUs(*psVar7);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            if (bVar6) {
              iVar13 = iVar11;
            }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      ((ERFont *)local_100,this->m_pFont,SUB41(sLine,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
            iVar8 = iVar11 - iVar13;
            if (fVar14 - (fVar16 + fVar16) < (float)local_100._0_4_) {
              bVar5 = true;
              if (iVar8 == 0) {
                psVar10 = sLine + iVar11;
                iVar11 = iVar11 + -1;
                *psVar10 = 0;
              }
              else {
                if (iVar11 == iVar8) {
                  iVar8 = 0;
                  psVar7 = psVar7 + -1;
                }
                else {
                  iVar11 = iVar11 - iVar8;
                }
                psVar10 = sLine + iVar11;
                psVar7 = psVar7 + -iVar8;
                iVar11 = iVar11 + -1;
                *psVar10 = 0;
              }
            }
            iVar11 = iVar11 + 1;
            psVar12 = psVar12 + 1;
            psVar7 = psVar7 + 1;
            if (0xfd < iVar11) break;
          }
          if ((*psVar7 == 0) || (bVar5)) break;
          *psVar12 = *psVar7;
          sVar2 = sLine[0];
        } while( true );
      }
      if (bVar5) {
        uVar9 = this->m_nSkippedLines;
LAB_0012ddd4:
        uVar3 = this->m_nLinesScrolled;
        sLine[iVar11] = 0;
        if ((uVar9 < uVar3) || (local_cc == 0)) {
          this->m_nSkippedLines = this->m_nSkippedLines + 1;
        }
        else {
          if (local_c8 == (EHashTableNode *)0x0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            local_100._16_4_ = (this->m_vCurTextPos).field0_0x0.d[0];
            local_ec = (EStorable__vtable *)(this->m_vCurTextPos).field0_0x0.d[1];
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (this->m_pFont,local_d0,sLine,true,(EVec2 *)(local_100 + 0x10),E_FAX_LEFT,
                       E_FAY_TOP,&this->m_vCurTextPos);
                    /* end of inlined section */
            fVar20 = (this->m_vTextSize).field0_0x0.d[1];
          }
          else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            local_100._4_4_ = (char *)(this->m_vCurTextPos).field0_0x0.d[1];
                    /* end of inlined section */
            local_100._0_4_ =
                 (EStorable__vtable *)
                 ((this->m_vTextPos).field0_0x0.d[0] + (this->m_vTextSize).field0_0x0.d[0] * 0.5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            local_e0 = local_100._0_4_;
            local_dc = local_100._4_4_;
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (this->m_pFont,local_d0,sLine,true,(EVec2 *)&local_e0,E_FAX_CENTER,E_FAY_TOP,
                       &this->m_vCurTextPos);
                    /* end of inlined section */
            fVar20 = (this->m_vTextSize).field0_0x0.d[1];
          }
          fVar18 = (this->m_vTextPos).field0_0x0.d[1];
          fVar19 = (this->m_vTextGapSize).field0_0x0.d[1];
          fVar21 = (this->m_vArrowSize).field0_0x0.d[1];
          fVar15 = (this->m_vCurTextPos).field0_0x0.d[1] + fVar17;
          (this->m_vCurTextPos).field0_0x0.d[0] = fVar22;
          (this->m_vCurTextPos).field0_0x0.d[1] = fVar15;
          if (((fVar18 + fVar20) - fVar19) - fVar21 < fVar15) {
            *(undefined4 *)&this->m_bMoreDown = 1;
          }
        }
        sVar2 = *psVar7;
      }
      else {
        if (sLine[0] != 0) {
          uVar9 = this->m_nSkippedLines;
          goto LAB_0012ddd4;
        }
        sVar2 = *psVar7;
      }
    }
  }
  return;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}
