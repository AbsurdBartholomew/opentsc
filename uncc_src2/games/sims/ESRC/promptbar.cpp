// STATUS: NOT STARTED

#include "promptbar.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2722;
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

__vtbl_ptr_type EPromptBar virtual table[17] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPromptBar::~EPromptBar,
		/* .__delta2 = */ -11024
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPromptBar::Update,
		/* .__delta2 = */ -10728
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPromptBar::Draw,
		/* .__delta2 = */ -10696
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetPos,
		/* .__delta2 = */ 2768
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3560
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3592
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Message,
		/* .__delta2 = */ 3616
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::StateChanged,
		/* .__delta2 = */ 3672
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnButtonRepeat,
		/* .__delta2 = */ 3680
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnStickRepeat,
		/* .__delta2 = */ 3688
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::GetPos,
		/* .__delta2 = */ 3912
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::AddChild,
		/* .__delta2 = */ 3024
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::RemoveChild,
		/* .__delta2 = */ 3072
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPromptBar::Init,
		/* .__delta2 = */ -10952
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPromptBar::Reset,
		/* .__delta2 = */ -10832
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EUIIconDef virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIconDef::~EUIIconDef,
		/* .__delta2 = */ -25888
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EPromptBar* EPromptBar::EPromptBar() {
  __13EUIObjectNode(&this->field0_0x0);
  this->m_Prompts = (EUIPrompt *)0x0;
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_10EPromptBar;
  this->m_nNumPrompts = 0;
  this->m_pFont = (ERFont *)0x0;
  this->m_pTextLineButtonBevelShdr = (ERShader *)0x0;
  return this;
}

void EPromptBar::~EPromptBar(int __in_chrg) {
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_10EPromptBar;
  Reset__10EPromptBar(this);
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void EPromptBar::Init() {
	EGraphics *this;
	
  EGraphics *pEVar1;
  ERShader *pEVar2;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x527287a1,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextLineButtonBevelShdr = pEVar2;
  pEVar1 = _pGfx;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  this->m_fMarginWidth = 20.0 / (float)_pGfx->m_xscreen;
  this->m_fGapWidth = 15.0 / (float)pEVar1->m_xscreen;
  return;
}

void EPromptBar::Reset() {
  ERFont *this_00;
  
  while (this->m_pTextLineButtonBevelShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pTextLineButtonBevelShdr->field0_0x0);
    this->m_pTextLineButtonBevelShdr = (ERShader *)0x0;
  }
  if (this->m_Prompts == (EUIPrompt *)0x0) {
    this_00 = this->m_pFont;
    while (this_00 != (ERFont *)0x0) {
      DelRef__9EResource(&this_00->field0_0x0);
      this->m_pFont = (ERFont *)0x0;
LAB_001bd5f0:
      this_00 = this->m_pFont;
    }
    return;
  }
  RemoveAllChildren__13EUIObjectNode(&this->field0_0x0);
  goto LAB_001bd5f0;
}

void EPromptBar::Update() {
  Update__13EUIObjectNode(&this->field0_0x0);
  return;
}

void EPromptBar::Draw(ERC *prc) {
	EUIObjectNode *this;
	int i;
	EGraphics *this;
	EGraphics *this;
	
  short sVar1;
  ERC__vtable *pEVar2;
  float *pfVar3;
  int iVar4;
  EUIPrompt *pEVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar6;
  undefined8 unaff_s5;
  uint uVar7;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float local_e0;
  float local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
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
  
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 1 & 1U) != 0) {
    uVar9 = 0x3f800000;
    uVar7 = 0;
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,(this->m_vTextBoxPos).field0_0x0.d[0],(this->m_vTextBoxPos).field0_0x0.d[1],
               this->m_fTextBoxWidth,1.0);
    Select__8ERShaderP3ERCi(this->m_pTextLineButtonBevelShdr,prc,0);
    if (this->m_nNumPrompts != 0) {
      pEVar5 = this->m_Prompts;
      iVar6 = 0;
      while( true ) {
        uVar7 = uVar7 + 1;
        pEVar2 = prc->__vtable;
        iVar4 = *(int *)((int)(pEVar5->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-5] +
                        iVar6 + 4);
        sVar1 = *(short *)&pEVar2[1].ClipRatio;
        pfVar3 = (float *)(**(code **)(iVar4 + 0x5c))
                                    ((int)(pEVar5->field0_0x0).field0_0x0.field0_0x0.
                                          m_maxBackShdrSize[-0xc] +
                                     *(short *)(iVar4 + 0x58) + iVar6 + 4);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
        iVar8 = _pGfx->m_xscreen;
        fVar10 = *pfVar3;
        iVar4 = *(int *)((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize
                              [-5] + iVar6 + 4);
        iVar4 = (**(code **)(iVar4 + 0x5c))
                          ((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.
                                m_maxBackShdrSize[-0xc] + *(short *)(iVar4 + 0x58) + iVar6 + 4);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_dc = *(float *)(iVar4 + 8) - 16.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_e0 = fVar10 - 16.0 / (float)iVar8;
        local_d0 = uVar9;
        local_cc = uVar9;
        local_c0 = uVar9;
        local_bc = uVar9;
        local_b8 = uVar9;
        local_b4 = uVar9;
        (*(code *)pEVar2[1].ClipRect)(0,(int)&prc->m_pdl + (int)sVar1,&local_e0,&local_d0,&local_c0)
        ;
        if (this->m_nNumPrompts <= uVar7) break;
        pEVar5 = this->m_Prompts;
        iVar6 = iVar6 + 0xb0;
      }
    }
    Draw__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
  }
  return;
}

void EPromptBar::Setup(EUIPrompt *prompts, u32 nNumPrompts, EVec2 vTarget) {
	EUIIconDef icondef;
	EUITextIconDef texticon;
	int i;
	float fWidth;
	EVec3 vPos;
	ERFont *this;
	EUIIcon *this;
	EUIPrompt *this;
	EUIPrompt *this;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	EGraphics *this;
	
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  EUIPrompt *pEVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  ulong *puVar8;
  EVec3__null___1__1 *pEVar9;
  EGraphics *pEVar10;
  bool doubleByte;
  ERFont *pEVar11;
  EUIObjectNode__vtable *pEVar12;
  int **ppiVar13;
  int iVar14;
  EVec3 *pEVar15;
  int iVar16;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar17;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  EUIIconDef icondef;
  EUITextIconDef texticon;
  EVec3 vPos;
  undefined local_d0 [96];
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
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  fVar19 = 16.0;
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* end of inlined section */
  local_d0._64_4_ = (EHashTableNode **)unaff_s2;
  local_d0._68_4_ = (uint)((ulong)unaff_s2 >> 0x20);
  local_d0._48_4_ = (int)unaff_s1;
  local_d0._52_4_ = (int)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
  uVar17 = 0;
  local_d0._80_4_ = (EFontSize *)unaff_s3;
  local_d0._84_4_ = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_d0._32_4_ = (int)unaff_s0;
  local_d0._36_4_ = (int)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  texticon.m_maxChars = 0;
  texticon.m_xAlign = E_FAX_LEFT;
  texticon.m_yAlign = E_FAY_CENTER;
  texticon.m_pointsize = 16.0;
                    /* end of inlined section */
  this->m_Prompts = prompts;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  texticon.m_selColorIdx = 0;
                    /* end of inlined section */
  this->m_nNumPrompts = nNumPrompts;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  texticon.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  texticon.m_retChar = -1;
  pEVar11 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar11;
  SetSize__6ERFontffb(pEVar11,fVar19,1.0,true);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pEVar11 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vPos.field0_0x0.d[2] = 0.9;
  vPos.field0_0x0.d[1] = 0.9;
  (pEVar11->m_vColor).field0_0x0.d[0] = 0.9;
  (pEVar11->m_vColor).field0_0x0.d[1] = 0.9;
  (pEVar11->m_vColor).field0_0x0.d[2] = 0.9;
  (pEVar11->m_vColor).field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
  if (this->m_nNumPrompts == 0) {
    fVar19 = this->m_fMarginWidth;
  }
  else {
    uVar18 = 0x3bc49ba6;
    iVar16 = 0;
    do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
      pEVar4 = this->m_Prompts;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
      vPos.field0_0x0.d[0] =
           *(float *)((int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-2] +
                     iVar16 + 4);
      uVar1 = (int)&((EUIIconDef *)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-4])
                    ->m_flags + iVar16 + 7;
      uVar7 = uVar1 & 7;
      puVar8 = (ulong *)(uVar1 - uVar7);
      *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
      uVar1 = (int)&((EUIIconDef *)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-4])
                    ->m_flags + iVar16;
      uVar7 = uVar1 & 7;
      puVar8 = (ulong *)(uVar1 - uVar7);
      *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
      uVar1 = (int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-3] + iVar16 + 7;
      uVar7 = uVar1 & 7;
      puVar8 = (ulong *)(uVar1 - uVar7);
      *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
      uVar1 = (int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-3] + iVar16;
      uVar7 = uVar1 & 7;
      puVar8 = (ulong *)(uVar1 - uVar7);
      *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
      uVar1 = (int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-2] + iVar16 + 7;
      uVar7 = uVar1 & 7;
      puVar8 = (ulong *)(uVar1 - uVar7);
      *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
      uVar1 = (int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-2] + iVar16;
      uVar7 = uVar1 & 7;
      puVar8 = (ulong *)(uVar1 - uVar7);
      *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
      *(undefined4 *)
       ((int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-2] + iVar16 + 4) =
           vPos.field0_0x0.d[0];
                    /* end of inlined section */
      iVar14 = *(int *)((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize
                             [-5] + iVar16 + 4);
      (**(code **)(iVar14 + 0x9c))
                ((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)(iVar14 + 0x98) + iVar16 + 4,&texticon);
      SetFont__11EUITextIconi
                ((EUITextIcon *)
                 ((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 iVar16 + 4),-0x2080f4e9);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
      *(undefined4 *)((int)&this->m_Prompts->m_gap + iVar16) = uVar18;
                    /* end of inlined section */
      ppiVar13 = (int **)((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize
                               [-0xc] + iVar16 + 4);
      piVar5 = ppiVar13[0xe];
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
      sVar3 = *(short *)(piVar5 + 0xc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      iVar14 = 0;
      if (*ppiVar13 != (int *)0x0) {
        iVar14 = **ppiVar13;
      }
      pEVar4 = this->m_Prompts;
      fVar20 = *(float *)(iVar14 + 0x18);
                    /* end of inlined section */
      pEVar11 = this->m_pFont;
      iVar14 = *(int *)((int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-5] +
                       iVar16 + 4);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
      fVar19 = *(float *)((int)&pEVar4->m_gap + iVar16);
                    /* end of inlined section */
      doubleByte = (bool)(**(code **)(iVar14 + 0xa4))
                                   ((int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.
                                         m_maxBackShdrSize[-0xc] +
                                    *(short *)(iVar14 + 0xa0) + iVar16 + 4);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)local_d0,pEVar11,doubleByte,(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      piVar6 = *(int **)((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize
                              [-0xc] + iVar16 + 4);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      vPos.field0_0x0.d[0] = fVar20 + fVar19 + (float)local_d0._0_4_;
      if (piVar6 == (int *)0x0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *piVar6;
      }
      vPos.field0_0x0.d[1] = *(float *)(iVar14 + 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      uVar17 = uVar17 + 1;
      (*(code *)piVar5[0xd])((int)ppiVar13 + (int)sVar3,&vPos);
      SetFlagsPropigate__13EUIObjectNodeUib
                ((EUIObjectNode *)
                 ((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 iVar16 + 4),2,true);
      iVar16 = iVar16 + 0xb0;
    } while (uVar17 < this->m_nNumPrompts);
    fVar19 = this->m_fMarginWidth;
  }
  uVar17 = 0;
  fVar20 = fVar19;
  if (this->m_nNumPrompts != 0) {
    pEVar15 = &(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH;
    do {
      pEVar9 = &pEVar15->field0_0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      uVar17 = uVar17 + 1;
      pEVar15 = (EVec3 *)((int)(pEVar15 + 0xe) + 8);
      fVar20 = fVar20 + pEVar9->d[0] + this->m_fGapWidth;
    } while (uVar17 < this->m_nNumPrompts);
  }
  uVar17 = 0;
  fVar20 = (fVar20 - this->m_fGapWidth) + fVar19;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vPos.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  vPos.field0_0x0.d[2] = (vTarget->field0_0x0).d[1] - 16.0 / (float)_pGfx->m_yscreen;
  vPos.field0_0x0.d[0] = ((vTarget->field0_0x0).d[0] - fVar20 * 0.5) + fVar19;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (this->m_nNumPrompts != 0) {
    iVar16 = 0;
    do {
      uVar17 = uVar17 + 1;
      iVar14 = *(int *)((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize
                             [-5] + iVar16 + 4);
      (**(code **)(iVar14 + 0x24))
                ((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)(iVar14 + 0x20) + iVar16 + 4,&vPos);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      iVar14 = iVar16 + 4;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      iVar16 = iVar16 + 0xb0;
      vPos.field0_0x0.d[0] =
           vPos.field0_0x0.d[0] +
           *(float *)((int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-9]
                     + iVar14) + this->m_fGapWidth;
    } while (uVar17 < this->m_nNumPrompts);
  }
                    /* inlined from /eor/src2/engine/e_graphics.h */
  pEVar10 = _pGfx;
                    /* end of inlined section */
  fVar20 = fVar20 + 4.0 / (float)_pGfx->m_xscreen;
  this->m_fTextBoxWidth = fVar20;
  local_d0._16_4_ = (vTarget->field0_0x0).d[0] - fVar20 * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_d0._20_4_ =
       (EStorable__vtable *)((vTarget->field0_0x0).d[1] - 13.0 / (float)pEVar10->m_yscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar2 = (undefined *)((int)&(this->m_vTextBoxPos).field0_0x0 + 7);
  uVar17 = (uint)puVar2 & 7;
  puVar8 = (ulong *)(puVar2 + -uVar17);
  *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 |
            CONCAT44(local_d0._20_4_,local_d0._16_4_) >> (7 - uVar17) * 8;
  uVar17 = (uint)&this->m_vTextBoxPos & 7;
  puVar8 = (ulong *)((int)&this->m_vTextBoxPos - uVar17);
  *puVar8 = CONCAT44(local_d0._20_4_,local_d0._16_4_) << uVar17 * 8 |
            *puVar8 & 0xffffffffffffffffU >> (8 - uVar17) * 8;
  uVar17 = 0;
  if (this->m_nNumPrompts != 0) {
    iVar16 = 0;
    pEVar12 = (this->field0_0x0).__vtable;
    while( true ) {
      uVar17 = uVar17 + 1;
      iVar14 = iVar16 + 4;
      iVar16 = iVar16 + 0xb0;
      (*(code *)pEVar12[1].GetPos)
                ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar12[1].OnStickRepeat,
                 (int)(this->m_Prompts->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 iVar14);
      if (this->m_nNumPrompts <= uVar17) break;
      pEVar12 = (this->field0_0x0).__vtable;
    }
  }
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
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

void EUIIconDef::~EUIIconDef(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}
