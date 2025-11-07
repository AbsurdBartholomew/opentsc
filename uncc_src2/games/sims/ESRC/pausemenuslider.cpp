// STATUS: NOT STARTED

#include "pausemenuslider.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2351;
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

// warning: multiple differing types with the same name (name not equal)
struct DPadWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2351;
protected:
	EVec2 m_vPosOff;
	struct {
		short int __delta;
		short int __index;
		union {
			void (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_fnTab[10];
public:
	static bool m_bInit;
	static ERShader *m_pBack;
	static ERShader *m_pBack1;
	static ERShader *m_pBack2;
	static ERShader *m_pUpShdr;
	static ERShader *m_pDownShdr;
	static ERShader *m_pLeftShdr;
	static ERShader *m_pRightShdr;
	static ERShader *m_pDelqueueShdr;
	static ERShader *m_pJobShdr;
	static ERShader *m_pMoodShdr;
	static ERShader *m_pMovequeueShdr;
	static ERShader *m_pPersonalityShdr;
	static ERShader *m_pRelationshipsShdr;
	static ERShader *m_pBlankUp;
	static ERShader *m_pBlankDown;
	static ERShader *m_pBlankLeft;
	static ERShader *m_pBlankRight;
	static ERShader *m_pQuestion;
	static ERShader *m_pCancle;
	
	DPadWin& operator=();
	DPadWin();
	DPadWin();
	/* vtable[1] */ virtual DPadWin(DPadWin*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void SetDefaultFlags();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawButtonPrompts(/* parameters unknown */);
protected:
	void DrawHead();
	void DrawLIVE_DEFAULT();
	void DrawLIVE_DIALOG();
	void DrawLIVE_ACTIONQ();
	void DrawLIVE_INFOUP();
	void DrawLIVE_PIMENU();
};

// warning: multiple differing types with the same name (name not equal)
struct EPausePanel : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2351;
	EDialogMenu m_DialogMenu;
	c16 *m_ppNoYesOptions[2];
	c16 *m_ppYesNoOptions[2];
	c16 *m_ppCancelSaveNoSaveOptions[3];
	c16 *m_ppCancelRemove2Options[2];
protected:
	ERFont *m_pFont;
	float m_PauseTimer;
	static float m_ItemInfoTimer;
	u32 m_nDisplayMode;
	bool m_bCleanUpModelReference;
	bool m_bCheckSavedSuccess;
	bool m_bHideDialog;
	EPauseMainMenu m_PauseMainMenu;
	EPauseBudgetMenu m_PauseBudgetMenu;
	EPauseBuyMenu m_PauseBuyMenu;
	EPauseBuildMenu m_PauseBuildMenu;
	EPauseOptionsMenu m_PauseOptionsMenu;
	EPauseItemInfo *m_pItemInfo;
	bool m_bDeleteInfo;
	ERShader *m_pBlankShdr;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pSquareIcon;
	ERShader *m_pMenuBevelShdr;
	static ERShader *m_pDPadUp;
	static ERShader *m_pDPadDown;
	static ERShader *m_pDPadLeft;
	static ERShader *m_pDPadRight;
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIIcon m_SquareIcon;
	EUIIcon m_XIcon2;
	EUIIcon m_TriIcon2;
	EUIIcon m_XIcon3;
	EUIIcon m_TriIcon3;
	EUIPrompt m_PromptsYN[2];
	EUIPrompt m_PromptsYNC[3];
	EUIPrompt m_Prompts[2];
	EPromptBar m_PromptBarYN;
	EPromptBar m_PromptBarYNC;
	EPromptBar m_PromptBar;
	
public:
	EPausePanel& operator=();
	EPausePanel();
	EPausePanel();
	/* vtable[1] */ virtual EPausePanel(EPausePanel*, int, void);
	/* vtable[14] */ virtual void Init();
	/* vtable[15] */ virtual void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawGenericMessageBox();
	static void ResetItemInfoTimer(/* parameters unknown */);
	static float GetItemInfoTimer(/* parameters unknown */);
	static ERShader* GetShaderDPadUp(/* parameters unknown */);
	static ERShader* GetShaderDPadDown(/* parameters unknown */);
	static ERShader* GetShaderDPadLeft(/* parameters unknown */);
	static ERShader* GetShaderDPadRight(/* parameters unknown */);
	static void SetDPadUp(/* parameters unknown */);
	static void SetDPadDown(/* parameters unknown */);
	static void SetDPadLeft(/* parameters unknown */);
	static void SetDPadRight(/* parameters unknown */);
};

__vtbl_ptr_type EPauseMenuSlider virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenuSlider::~EPauseMenuSlider,
		/* .__delta2 = */ 29200
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenuSlider::Update,
		/* .__delta2 = */ -32576
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenuSlider::Draw,
		/* .__delta2 = */ 29424
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIPrompt::SetPos,
		/* .__delta2 = */ 1816
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIPrompt::SetBoxDims,
		/* .__delta2 = */ 1760
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIPrompt::SetBoxDims,
		/* .__delta2 = */ 1864
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
		/* .__pfn = */ &EUIPrompt::StateChanged,
		/* .__delta2 = */ 856
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
		/* .__pfn = */ &EUIPrompt::AddChild,
		/* .__delta2 = */ 1728
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
		/* .__pfn = */ &EUIIcon::ShaderRect,
		/* .__delta2 = */ 12848
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::SetText,
		/* .__delta2 = */ -5592
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::InitString,
		/* .__delta2 = */ -5584
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::SetText,
		/* .__delta2 = */ -5576
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::InitString,
		/* .__delta2 = */ -5568
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::SetTextDef,
		/* .__delta2 = */ -5560
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::GetText,
		/* .__delta2 = */ -5496
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::DrawText,
		/* .__delta2 = */ -5488
	},
	/* [22] = */ {
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

float EPauseMenuSlider::SlideMaxTime;

EPauseMenuSlider* EPauseMenuSlider::EPauseMenuSlider(char *str, EUIIconDef &icondef, EUITextIconDef &textdef, int fontId, EVec3 vPos) {
	EUIPrompt *this;
	EVec3 vPos;
	
  EUITextIconDef *pEVar1;
  EFontAlignY *pEVar2;
  uint *puVar3;
  EUIIconDef *pEVar4;
  int *piVar5;
  EUIVirtualCtrl **ppEVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong *puVar11;
  ERShader *pEVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined4 local_e8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  EUITextIconDef local_c0;
  EUIIconDef local_a0;
  EUIIconDef__vtable *local_80;
  EUIIconDef__vtable *local_70;
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
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  uVar16 = 0x20;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_c0.m_maxChars = 0x20;
  local_e8 = CONCAT22(local_e8._2_2_,0xffff);
  local_c8 = 0;
  local_cc = 0;
  local_d0 = 0;
  local_c0.m_xAlign = E_FAX_LEFT;
  local_c0.m_yAlign = E_FAY_TOP;
  local_c0.m_pointsize = 12.0;
  local_c0.m_selColorIdx = 0;
  local_c0.m_colorIdx = 1;
  local_a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_c0.m_retChar = -1;
  local_a0.m_flags = 0;
  local_a0.m_trigger = 0x40;
  local_a0.m_selColorIdx = 0;
  local_a0.m_colorIdx = 1;
  local_a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            ((EUIStaticTextIcon *)this,&local_c0,&local_a0,-1,(EVec3 *)&local_d0);
  local_a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x20UL >> (7 - uVar10) * 8;
  pEVar1 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef;
  uVar10 = (uint)pEVar1 & 7;
  puVar11 = (ulong *)((int)pEVar1 - uVar10);
  *puVar11 = 0x20L << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x4140000000000000U >> (7 - uVar10) * 8;
  pEVar2 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar10 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar10);
  *puVar11 = 0x4140000000000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x100000000U >> (7 - uVar10) * 8;
  puVar3 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar10 = (uint)puVar3 & 7;
  puVar11 = (ulong *)((int)puVar3 - uVar10);
  *puVar11 = 0x100000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  *(undefined4 *)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_retChar = local_e8;
  local_80 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x4000000000U >> (7 - uVar10) * 8;
  pEVar4 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar10 = (uint)pEVar4 & 7;
  puVar11 = (ulong *)((int)pEVar4 - uVar10);
  *puVar11 = 0x4000000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x100000000U >> (7 - uVar10) * 8;
  piVar5 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar10 = (uint)piVar5 & 7;
  puVar11 = (ulong *)((int)piVar5 - uVar10);
  *puVar11 = 0x100000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x3a890800000000U >> (7 - uVar10) * 8;
  ppEVar6 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar10 = (uint)ppEVar6 & 7;
  puVar11 = (ulong *)((int)ppEVar6 - uVar10);
  *puVar11 = 0x3a890800000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_80;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_16EPauseMenuSlider;
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (this->field0_0x0).m_gap = 0.0;
  (this->field0_0x0).m_lastPressed = 0;
                    /* end of inlined section */
  this->m_nDrawMode = '\0';
  puVar7 = (undefined *)((int)&textdef->m_xAlign + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)textdef & 7;
  uVar13 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           0xffffffffffffffffU >> (uVar10 + 1) * 8 & 0x3b3150) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)textdef - uVar8) >> uVar8 * 8;
  puVar7 = (undefined *)((int)&textdef->m_pointsize + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)&textdef->m_yAlign & 7;
  uVar14 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           (long)(int)local_80 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)&textdef->m_yAlign - uVar8) >> uVar8 * 8;
  puVar7 = (undefined *)((int)&textdef->m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)&textdef->m_selColorIdx & 7;
  uVar15 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           0xffffffffffffffffU >> (uVar10 + 1) * 8 & 0x4000000000) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)&textdef->m_selColorIdx - uVar8) >> uVar8 * 8;
  uVar9 = *(undefined4 *)&textdef->m_retChar;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar13 >> (7 - uVar10) * 8;
  pEVar1 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef;
  uVar10 = (uint)pEVar1 & 7;
  puVar11 = (ulong *)((int)pEVar1 - uVar10);
  *puVar11 = uVar13 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
  pEVar2 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar10 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar10);
  *puVar11 = uVar14 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar15 >> (7 - uVar10) * 8;
  puVar3 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar10 = (uint)puVar3 & 7;
  puVar11 = (ulong *)((int)puVar3 - uVar10);
  *puVar11 = uVar15 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  *(undefined4 *)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_retChar = uVar9;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  local_70 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar7 = (undefined *)((int)&icondef->m_trigger + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)icondef & 7;
  uVar15 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           0xffffffffffffffffU >> (uVar10 + 1) * 8 & 0x3a890800000000) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)icondef - uVar8) >> uVar8 * 8;
  puVar7 = (undefined *)((int)&icondef->m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)&icondef->m_selColorIdx & 7;
  uVar16 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           uVar16 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)&icondef->m_selColorIdx - uVar8) >> uVar8 * 8;
  puVar7 = (undefined *)((int)&icondef->__vtable + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)&icondef->m_pCtrl & 7;
  uVar13 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           uVar14 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)&icondef->m_pCtrl - uVar8) >> uVar8 * 8;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar15 >> (7 - uVar10) * 8;
  pEVar4 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar10 = (uint)pEVar4 & 7;
  puVar11 = (ulong *)((int)pEVar4 - uVar10);
  *puVar11 = uVar15 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar16 >> (7 - uVar10) * 8;
  piVar5 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar10 = (uint)piVar5 & 7;
  puVar11 = (ulong *)((int)piVar5 - uVar10);
  *puVar11 = uVar16 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar13 >> (7 - uVar10) * 8;
  ppEVar6 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar10 = (uint)ppEVar6 & 7;
  puVar11 = (ulong *)((int)ppEVar6 - uVar10);
  *puVar11 = uVar13 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  (this->field0_0x0).m_gap = 0.0;
  (this->field0_0x0).m_lastPressed = 0;
  this->m_nMessage = 0;
  this->m_SlideTime = 0.0;
  this->m_DelayTime = 0.0;
  this->m_IconWidth = 0.0;
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pTextBoxBGBC = (ERShader *)0x0;
  this->m_pTextBoxBGBL = (ERShader *)0x0;
  this->m_pTextBoxBGBR = (ERShader *)0x0;
  this->m_bFinishedSlideOpen = 0;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_70;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar12 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBlankShdr = pEVar12;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar12 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x502567e1,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextBoxBGBC = pEVar12;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar12 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc09a7a70,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextBoxBGBL = pEVar12;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar12 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3a954713,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextBoxBGBR = pEVar12;
  return this;
}

void EPauseMenuSlider::~EPauseMenuSlider(int __in_chrg) {
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	void *ptr;
	
  ERShader *pEVar1;
  
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_16EPauseMenuSlider;
  while (this->m_pBlankShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
  }
  while (this->m_pTextBoxBGBC != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pTextBoxBGBC->field0_0x0);
    this->m_pTextBoxBGBC = (ERShader *)0x0;
  }
  pEVar1 = this->m_pTextBoxBGBL;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pTextBoxBGBL = (ERShader *)0x0;
    pEVar1 = this->m_pTextBoxBGBL;
  }
  pEVar1 = this->m_pTextBoxBGBR;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pTextBoxBGBR = (ERShader *)0x0;
    pEVar1 = this->m_pTextBoxBGBR;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)this,0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPauseMenuSlider::Draw(ERC *prc) {
	EUIObjectNode *this;
	
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags >> 1 & 1U) != 0)
  {
    DrawNormal__16EPauseMenuSliderP3ERC(this,prc);
  }
  return;
}

void EPauseMenuSlider::DrawNormal(ERC *prc) {
	NLIterator nli;
	EVec2 vScreenSize;
	float fTextWidth;
	EGraphics *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EVec2 vCenterPos;
	EVec2 vShaderSize;
	EGraphics *this;
	float y;
	float y;
	float y;
	ERFont *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EUIObjectNode *this;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ERFont *pEVar12;
  short *psVar13;
  undefined4 uVar14;
  undefined8 unaff_s0;
  int *piVar15;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar16;
  float fVar17;
  EHashTableNode **ppEVar18;
  float fVar19;
  float fVar20;
  EVec2 vScreenSize;
  EVec2 vCenterPos;
  EVec2 vShaderSize;
  float local_120;
  float local_11c;
  float local_110;
  float local_10c;
  EHashTableNode **local_100;
  uint local_fc;
  EFontSize *local_f0;
  EHashTableNode **local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  EHashTableNode **local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
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
  
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pEVar12 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
  if (pEVar12 != (ERFont *)0x0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    vScreenSize.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
    vScreenSize.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    SetSize__6ERFontffb(pEVar12,(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_pointsize,1.0,
                        true);
    psVar13 = (this->field0_0x0).field0_0x0.m_pLong;
    bVar1 = psVar13 == (short *)0x0;
    if (bVar1) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar12 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
      psVar13 = (short *)(this->field0_0x0).field0_0x0.m_pShort;
    }
    else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar12 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
                    /* end of inlined section */
    }
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)&vCenterPos,pEVar12,SUB41(psVar13,0),(EWindow *)(uint)!bVar1);
                    /* end of inlined section */
    fVar20 = vCenterPos.field0_0x0.d[0] + 40.0 / vScreenSize.field0_0x0.d[0];
    if (fVar20 < 0.1) {
      fVar20 = 0.1;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    uVar11 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((((int)uVar11 >> 3 & 1U) != 0) && (((int)uVar11 >> 2 & 1U) != 0)) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vCenterPos.field0_0x0.d[0] = 0.39;
      vShaderSize.field0_0x0.d[1] = 32.0;
      vShaderSize.field0_0x0.d[0] = 32.0;
                    /* end of inlined section */
      fVar16 = 16.0;
      ppEVar18 = (EHashTableNode **)0x0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      vCenterPos.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP + 40.0 / (float)_pGfx->m_yscreen;
                    /* end of inlined section */
      Select__8ERShaderP3ERCi(this->m_pTextBoxBGBC,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      fVar19 = fVar20 * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_11c = vCenterPos.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_110 = (vCenterPos.field0_0x0.d[0] + fVar19) - fVar16 / vScreenSize.field0_0x0.d[0];
      local_10c = vCenterPos.field0_0x0.d[1] +
                  vShaderSize.field0_0x0.d[0] / vScreenSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_120 = (vCenterPos.field0_0x0.d[0] - fVar19) + fVar16 / vScreenSize.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_fc = 0x3f800000;
      local_f0 = (EFontSize *)0x3f800000;
      local_d4 = 0x3f800000;
      local_d8 = 0x3f800000;
      local_dc = 0x3f800000;
      local_e0 = 0x3f800000;
                    /* end of inlined section */
      local_100 = ppEVar18;
      local_ec = ppEVar18;
      (*(code *)prc->__vtable[1].DisplayList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_120,
                 &local_110,&local_100,&local_f0,&local_e0);
      Select__8ERShaderP3ERCi(this->m_pTextBoxBGBL,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_11c = vCenterPos.field0_0x0.d[1];
                    /* end of inlined section */
      local_110 = (vCenterPos.field0_0x0.d[0] - fVar19) + fVar16 / vScreenSize.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_120 = (vCenterPos.field0_0x0.d[0] - fVar19) - fVar16 / vScreenSize.field0_0x0.d[0];
      local_10c = vCenterPos.field0_0x0.d[1] +
                  vShaderSize.field0_0x0.d[0] / vScreenSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_fc = 0x3f800000;
      local_d0 = 0x3f800000;
      local_b4 = 0x3f800000;
      local_b8 = 0x3f800000;
      local_bc = 0x3f800000;
      local_c0 = 0x3f800000;
                    /* end of inlined section */
      local_100 = ppEVar18;
      local_cc = ppEVar18;
      (*(code *)prc->__vtable[1].DisplayList)
                (ppEVar18,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_120,
                 &local_110,&local_100,&local_d0,&local_c0);
      Select__8ERShaderP3ERCi(this->m_pTextBoxBGBR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_11c = vCenterPos.field0_0x0.d[1];
                    /* end of inlined section */
      local_110 = vCenterPos.field0_0x0.d[0] + fVar19 + fVar16 / vScreenSize.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_120 = (vCenterPos.field0_0x0.d[0] + fVar19) - fVar16 / vScreenSize.field0_0x0.d[0];
      local_10c = vCenterPos.field0_0x0.d[1] +
                  vShaderSize.field0_0x0.d[0] / vScreenSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_fc = 0x3f800000;
      local_f0 = (EFontSize *)0x3f800000;
      local_a4 = 0x3f800000;
      local_a8 = 0x3f800000;
      local_ac = 0x3f800000;
      local_b0 = 0x3f800000;
                    /* end of inlined section */
      local_100 = ppEVar18;
      local_ec = ppEVar18;
      (*(code *)prc->__vtable[1].DisplayList)
                (ppEVar18,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_120,
                 &local_110,&local_100,&local_f0,&local_b0);
      DrawTextBox__10EDialogWinP3ERCffff
                (prc,vCenterPos.field0_0x0.d[0] - fVar19,vCenterPos.field0_0x0.d[1],fVar20,1.0);
    }
    Select__6ERFontP3ERC((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc);
    uVar6 = _BLACK.field0_0x0.d[3];
    uVar5 = _BLACK.field0_0x0.d[2];
    uVar4 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar12 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
    (pEVar12->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar12->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
    (pEVar12->m_vColor).field0_0x0.d[2] = uVar5;
    (pEVar12->m_vColor).field0_0x0.d[3] = uVar6;
    uVar11 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
    uVar9 = (int)uVar11 >> 2;
    if (((int)uVar11 >> 3 & 1U) == 0) {
LAB_001b77cc:
      uVar9 = (int)uVar11 >> 2;
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((uVar9 & 1) != 0) {
        psVar13 = (this->field0_0x0).field0_0x0.m_pLong;
        if (psVar13 == (short *)0x0) {
          pcVar2 = (this->field0_0x0).field0_0x0.m_pShort;
          if (pcVar2 != (char *)0x0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            vCenterPos.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP + 44.0 / (float)_pGfx->m_yscreen;
            vCenterPos.field0_0x0.d[0] = 1.0 / (float)_pGfx->m_xscreen + 0.39;
            vShaderSize.field0_0x0.d[0] = vCenterPos.field0_0x0.d[0];
            vShaderSize.field0_0x0.d[1] = vCenterPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      ((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc,pcVar2,false,
                       &vShaderSize,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
          }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
          uVar11 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags;
        }
        else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          vCenterPos.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP + 44.0 / (float)_pGfx->m_yscreen;
          vCenterPos.field0_0x0.d[0] = 1.0 / (float)_pGfx->m_xscreen + 0.39;
          vShaderSize.field0_0x0.d[0] = vCenterPos.field0_0x0.d[0];
          vShaderSize.field0_0x0.d[1] = vCenterPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    ((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc,psVar13,true,&vShaderSize,
                     E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
          uVar11 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags;
        }
        goto LAB_001b77cc;
      }
    }
    fVar8 = _7EUIIcon_m_vColors[6].field0_0x0._12_4_;
    fVar7 = _7EUIIcon_m_vColors[6].field0_0x0._8_4_;
    fVar17 = _7EUIIcon_m_vColors[6].field0_0x0._4_4_;
    fVar19 = _7EUIIcon_m_vColors[1].field0_0x0._12_4_;
    fVar16 = _7EUIIcon_m_vColors[1].field0_0x0._8_4_;
    fVar20 = _7EUIIcon_m_vColors[1].field0_0x0._4_4_;
                    /* end of inlined section */
    if ((uVar9 & 1) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)uVar11 >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        pEVar12 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
        fVar20 = _7EUIIcon_m_vColors[1].field0_0x0._8_4_;
        fVar16 = _7EUIIcon_m_vColors[1].field0_0x0._0_4_;
        fVar19 = _7EUIIcon_m_vColors[1].field0_0x0._4_4_;
        fVar17 = _7EUIIcon_m_vColors[1].field0_0x0._12_4_;
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        pEVar12 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
        fVar20 = _7EUIIcon_m_vColors[6].field0_0x0._8_4_;
        fVar16 = _7EUIIcon_m_vColors[6].field0_0x0._0_4_;
        fVar19 = _7EUIIcon_m_vColors[6].field0_0x0._4_4_;
        fVar17 = _7EUIIcon_m_vColors[6].field0_0x0._12_4_;
                    /* end of inlined section */
      }
      vCenterPos.field0_0x0.d[0] = fVar16 * 0.65;
      vCenterPos.field0_0x0.d[1] = fVar19 * 0.65;
      (pEVar12->m_vColor).field0_0x0.d[0] = vCenterPos.field0_0x0.d[0];
      (pEVar12->m_vColor).field0_0x0.d[1] = vCenterPos.field0_0x0.d[1];
      (pEVar12->m_vColor).field0_0x0.d[2] = fVar20 * 0.65;
      (pEVar12->m_vColor).field0_0x0.d[3] = fVar17 * 0.65;
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)uVar11 >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        pEVar12 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
                    /* end of inlined section */
        (pEVar12->m_vColor).field0_0x0.d[0] = _7EUIIcon_m_vColors[1].field0_0x0._0_4_;
        (pEVar12->m_vColor).field0_0x0.d[1] = fVar20;
        (pEVar12->m_vColor).field0_0x0.d[2] = fVar16;
        (pEVar12->m_vColor).field0_0x0.d[3] = fVar19;
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        pEVar12 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
                    /* end of inlined section */
        (pEVar12->m_vColor).field0_0x0.d[0] = _7EUIIcon_m_vColors[6].field0_0x0._0_4_;
        (pEVar12->m_vColor).field0_0x0.d[1] = fVar17;
        (pEVar12->m_vColor).field0_0x0.d[2] = fVar7;
        (pEVar12->m_vColor).field0_0x0.d[3] = fVar8;
      }
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    uVar11 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
    if (((int)uVar11 >> 3 & 1U) != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)uVar11 >> 2 & 1U) == 0) {
        piVar15 = *(int **)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                            m_ChildList.field0_0x0;
        goto LAB_001b7994;
      }
      psVar13 = (this->field0_0x0).field0_0x0.m_pLong;
      if (psVar13 != (short *)0x0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vShaderSize.field0_0x0.d[0] = 0.39;
        vCenterPos.field0_0x0.d[0] = 0.39;
                    /* end of inlined section */
        vCenterPos.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP + 43.0 / (float)_pGfx->m_yscreen;
        vShaderSize.field0_0x0.d[1] = vCenterPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  ((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc,psVar13,true,&vShaderSize,
                   E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
        piVar15 = *(int **)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                            m_ChildList.field0_0x0;
        goto LAB_001b7994;
      }
      pcVar2 = (this->field0_0x0).field0_0x0.m_pShort;
      if (pcVar2 != (char *)0x0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vShaderSize.field0_0x0.d[0] = 0.39;
        vCenterPos.field0_0x0.d[0] = 0.39;
                    /* end of inlined section */
        vCenterPos.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP + 43.0 / (float)_pGfx->m_yscreen;
        vShaderSize.field0_0x0.d[1] = vCenterPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  ((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc,pcVar2,false,&vShaderSize,
                   E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
      }
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  piVar15 = *(int **)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.
                      field0_0x0;
LAB_001b7994:
                    /* end of inlined section */
  if (piVar15 == (int *)0x0) {
    return;
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  iVar3 = *piVar15;
  do {
    iVar10 = *(int *)(iVar3 + 0x10);
                    /* end of inlined section */
    if ((iVar10 >> 1 & 1U) == 0) {
LAB_001b7abc:
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      piVar15 = (int *)piVar15[2];
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((iVar10 >> 2 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((iVar10 >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          vScreenSize.field0_0x0.d[0] = _7EUIIcon_m_vColors[1].field0_0x0._0_4_ * 0.65;
          vScreenSize.field0_0x0.d[1] = _7EUIIcon_m_vColors[1].field0_0x0._4_4_ * 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
          (**(code **)(*(int *)(iVar3 + 0x38) + 0x74))
                    (iVar3 + *(short *)(*(int *)(iVar3 + 0x38) + 0x70),prc,0,&vScreenSize);
          goto LAB_001b7abc;
        }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        vScreenSize.field0_0x0.d[0] = _7EUIIcon_m_vColors[6].field0_0x0._0_4_ * 0.65;
        vScreenSize.field0_0x0.d[1] = _7EUIIcon_m_vColors[6].field0_0x0._4_4_ * 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        (**(code **)(*(int *)(iVar3 + 0x38) + 0x74))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x38) + 0x70),prc,0,&vScreenSize);
        piVar15 = (int *)piVar15[2];
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((iVar10 >> 3 & 1U) == 0) {
          iVar10 = *(int *)(iVar3 + 0x38);
          uVar14 = 0x3896f0;
        }
        else {
          iVar10 = *(int *)(iVar3 + 0x38);
          uVar14 = 0x389740;
        }
        (**(code **)(iVar10 + 0x74))(iVar3 + *(short *)(iVar10 + 0x70),prc,0,uVar14);
        piVar15 = (int *)piVar15[2];
      }
    }
                    /* end of inlined section */
    if (piVar15 == (int *)0x0) {
      return;
    }
    iVar3 = *piVar15;
  } while( true );
}

void EPauseMenuSlider::DrawSliding(ERC *prc) {
	NLIterator nli;
	EUIObjectNode *this;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	float fRight;
	EUIObjectNode *this;
	EUIObjectNode *this;
	float Left;
	float Right;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	EFontAlignX xAlign;
	EFontAlignY yAlign;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	EFontAlignX xAlign;
	EFontAlignY yAlign;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  EWindow__vtable *pEVar2;
  short *szString;
  char *szString_00;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  EWindow *pEVar9;
  int iVar10;
  ERFont *pEVar11;
  undefined4 uVar12;
  undefined8 unaff_s0;
  int *piVar13;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar14;
  float fVar15;
  TRect_float_ local_70;
  float local_60;
  float local_5c;
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
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  pEVar11 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
  if (pEVar11 != (ERFont *)0x0) {
    SetSize__6ERFontffb(pEVar11,(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_pointsize,1.0,
                        true);
    fVar7 = _7EUIIcon_m_vColors[6].field0_0x0._12_4_;
    fVar6 = _7EUIIcon_m_vColors[6].field0_0x0._8_4_;
    fVar5 = _7EUIIcon_m_vColors[6].field0_0x0._4_4_;
    fVar4 = _7EUIIcon_m_vColors[1].field0_0x0._12_4_;
    fVar15 = _7EUIIcon_m_vColors[1].field0_0x0._8_4_;
    fVar14 = _7EUIIcon_m_vColors[1].field0_0x0._4_4_;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    uVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
    uVar8 = (int)uVar1 >> 3;
    if (((int)uVar1 >> 2 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((uVar8 & 1) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        pEVar11 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
        local_70.right = _7EUIIcon_m_vColors[1].field0_0x0._8_4_;
        local_70.left = _7EUIIcon_m_vColors[1].field0_0x0._0_4_;
        local_70.top = _7EUIIcon_m_vColors[1].field0_0x0._4_4_;
        local_70.bottom = _7EUIIcon_m_vColors[1].field0_0x0._12_4_;
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        pEVar11 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
        local_70.right = _7EUIIcon_m_vColors[6].field0_0x0._8_4_;
        local_70.left = _7EUIIcon_m_vColors[6].field0_0x0._0_4_;
        local_70.top = _7EUIIcon_m_vColors[6].field0_0x0._4_4_;
        local_70.bottom = _7EUIIcon_m_vColors[6].field0_0x0._12_4_;
                    /* end of inlined section */
      }
      local_70.bottom = local_70.bottom * 0.65;
      local_70.left = local_70.left * 0.65;
      local_70.top = local_70.top * 0.65;
      local_70.right = local_70.right * 0.65;
      (pEVar11->m_vColor).field0_0x0.d[0] = local_70.left;
      (pEVar11->m_vColor).field0_0x0.d[1] = local_70.top;
      (pEVar11->m_vColor).field0_0x0.d[2] = local_70.right;
      (pEVar11->m_vColor).field0_0x0.d[3] = local_70.bottom;
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((uVar8 & 1) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        pEVar11 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
                    /* end of inlined section */
        (pEVar11->m_vColor).field0_0x0.d[0] = _7EUIIcon_m_vColors[1].field0_0x0._0_4_;
        (pEVar11->m_vColor).field0_0x0.d[1] = fVar14;
        (pEVar11->m_vColor).field0_0x0.d[2] = fVar15;
        (pEVar11->m_vColor).field0_0x0.d[3] = fVar4;
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        pEVar11 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
                    /* end of inlined section */
        (pEVar11->m_vColor).field0_0x0.d[0] = _7EUIIcon_m_vColors[6].field0_0x0._0_4_;
        (pEVar11->m_vColor).field0_0x0.d[1] = fVar5;
        (pEVar11->m_vColor).field0_0x0.d[2] = fVar6;
        (pEVar11->m_vColor).field0_0x0.d[3] = fVar7;
      }
    }
                    /* end of inlined section */
    Select__6ERFontP3ERC((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc);
    fVar14 = GetSliderWidth__16EPauseMenuSlider(this);
    if (fVar14 - this->m_IconWidth < 0.002) {
      piVar13 = *(int **)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList
                          .field0_0x0;
      goto LAB_001b7d98;
    }
                    /* end of inlined section */
    fVar14 = GetSliderWidth__16EPauseMenuSlider(this);
    fVar14 = ((this->field0_0x0).m_textPos.field0_0x0.d[0] + fVar14) - this->m_IconWidth;
    if (0.75 < fVar14) {
      fVar14 = 0.75;
    }
                    /* inlined from /eor/src2/engine/window/e_window.h */
    pEVar9 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
    pEVar9 = __7EWindow(pEVar9);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    local_70.top = (this->field0_0x0).m_textPos.field0_0x0.d[2];
    fVar15 = *(float *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                              field0_0x0 + 8) * 0.5;
                    /* inlined from /eor/src2/common/math/e_rect.h */
    local_70.left = (this->field0_0x0).m_textPos.field0_0x0.d[0];
                    /* end of inlined section */
    local_70.bottom = local_70.top + fVar15;
    this->m_pWin = pEVar9;
    local_70.top = local_70.top - fVar15;
    local_70.right = fVar14;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    SetClip__7EWindowRCt5TRect1Zf(pEVar9,&local_70);
    pEVar2 = this->m_pWin->__vtable;
    (*(code *)pEVar2->OutputCoordinatesChanged)
              ((int)&(this->m_pWin->m_mWindow).field0_0x0 +
               (int)*(short *)&pEVar2->InputCoordinatesChanged,prc);
    szString = (this->field0_0x0).field0_0x0.m_pLong;
    if (szString == (short *)0x0) {
      szString_00 = (this->field0_0x0).field0_0x0.m_pShort;
      if (szString_00 != (char *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_70.left = (this->field0_0x0).m_textPos.field0_0x0.d[0];
        local_70.top = (this->field0_0x0).m_textPos.field0_0x0.d[2];
        local_60 = local_70.left;
        local_5c = local_70.top;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  ((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc,szString_00,false,
                   (EVec2 *)&local_60,(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_xAlign,
                   (this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_yAlign,(EVec2 *)0x0);
      }
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_70.left = (this->field0_0x0).m_textPos.field0_0x0.d[0];
      local_70.top = (this->field0_0x0).m_textPos.field0_0x0.d[2];
      local_60 = local_70.left;
      local_5c = local_70.top;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                ((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc,szString,true,
                 (EVec2 *)&local_60,(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_xAlign,
                 (this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_yAlign,(EVec2 *)0x0);
                    /* end of inlined section */
    }
    SelectWin__7EGlobalP3ERC(&_globals,prc);
    pEVar9 = this->m_pWin;
    if (pEVar9 != (EWindow *)0x0) {
      (*(code *)pEVar9->__vtable->WindowMatrixChanged)
                ((int)&(pEVar9->m_mWindow).field0_0x0 + (int)*(short *)&pEVar9->__vtable->Select,3);
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  piVar13 = *(int **)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.
                      field0_0x0;
LAB_001b7d98:
                    /* end of inlined section */
  if (piVar13 == (int *)0x0) {
    return;
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  iVar3 = *piVar13;
  do {
    iVar10 = *(int *)(iVar3 + 0x10);
                    /* end of inlined section */
    if ((iVar10 >> 1 & 1U) == 0) {
LAB_001b7ec4:
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      piVar13 = (int *)piVar13[2];
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((iVar10 >> 2 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((iVar10 >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_70.left = _7EUIIcon_m_vColors[1].field0_0x0._0_4_ * 0.65;
          local_70.top = _7EUIIcon_m_vColors[1].field0_0x0._4_4_ * 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_70.right = _7EUIIcon_m_vColors[1].field0_0x0._8_4_ * 0.65;
          local_70.bottom = _7EUIIcon_m_vColors[1].field0_0x0._12_4_ * 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
          (**(code **)(*(int *)(iVar3 + 0x38) + 0x74))
                    (iVar3 + *(short *)(*(int *)(iVar3 + 0x38) + 0x70),prc,0,&local_70);
          goto LAB_001b7ec4;
        }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_70.left = _7EUIIcon_m_vColors[6].field0_0x0._0_4_ * 0.65;
        local_70.top = _7EUIIcon_m_vColors[6].field0_0x0._4_4_ * 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_70.right = _7EUIIcon_m_vColors[6].field0_0x0._8_4_ * 0.65;
        local_70.bottom = _7EUIIcon_m_vColors[6].field0_0x0._12_4_ * 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        (**(code **)(*(int *)(iVar3 + 0x38) + 0x74))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x38) + 0x70),prc,0,&local_70);
        piVar13 = (int *)piVar13[2];
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((iVar10 >> 3 & 1U) == 0) {
          iVar10 = *(int *)(iVar3 + 0x38);
          uVar12 = 0x3896f0;
        }
        else {
          iVar10 = *(int *)(iVar3 + 0x38);
          uVar12 = 0x389740;
        }
        (**(code **)(iVar10 + 0x74))(iVar3 + *(short *)(iVar10 + 0x70),prc,0,uVar12);
        piVar13 = (int *)piVar13[2];
      }
    }
                    /* end of inlined section */
    if (piVar13 == (int *)0x0) {
      return;
    }
    iVar3 = *piVar13;
  } while( true );
}

void EPauseMenuSlider::UpdateAnimation() {
	float timeChange;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  byte bVar1;
  float fVar2;
  
  fVar2 = _dt;
  if (0.0 < this->m_DelayTime) {
    fVar2 = this->m_DelayTime - _dt;
    this->m_DelayTime = fVar2;
    if (fVar2 < 0.0) {
      this->m_DelayTime = 0.0;
      fVar2 = -fVar2;
    }
    else {
      fVar2 = 0.0;
    }
  }
  if (0.0 < this->m_SlideTime) {
    this->m_SlideTime = this->m_SlideTime - fVar2;
    fVar2 = this->m_SlideTime;
  }
  else {
    fVar2 = this->m_SlideTime;
  }
  if (fVar2 < 0.0) {
    this->m_SlideTime = 0.0;
  }
  fVar2 = _16EPauseMenuSlider_SlideMaxTime;
  bVar1 = this->m_nDrawMode;
  if (bVar1 == 1) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) == 0
       ) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
      this->m_nDrawMode = '\x02';
      this->m_SlideTime = fVar2 - this->m_SlideTime;
      return;
    }
    if (this->m_SlideTime <= 0.0) {
      this->m_bFinishedSlideOpen = 1;
      this->m_nDrawMode = '\0';
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U)
            != 0) {
          if (this->m_bFinishedSlideOpen != 0) {
            return;
          }
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
          this->m_SlideTime = _16EPauseMenuSlider_SlideMaxTime;
          this->m_DelayTime = 0.1;
          this->m_nDrawMode = '\x01';
          return;
        }
        if (this->m_bFinishedSlideOpen != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
          this->m_DelayTime = 0.0;
          this->m_SlideTime = fVar2;
          this->m_nDrawMode = '\x02';
          this->m_bFinishedSlideOpen = 0;
          return;
        }
      }
      return;
    }
    if (bVar1 != 2) {
      return;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) != 0
       ) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
      fVar2 = _16EPauseMenuSlider_SlideMaxTime - this->m_SlideTime;
      this->m_nDrawMode = '\x01';
      this->m_DelayTime = 0.1;
      this->m_bFinishedSlideOpen = 0;
      this->m_SlideTime = fVar2;
      return;
    }
    if (this->m_SlideTime <= 0.0) {
      this->m_bFinishedSlideOpen = 0;
      this->m_nDrawMode = '\0';
    }
  }
  return;
}

void EPauseMenuSlider::Update() {
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  uint uVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  int iVar3;
  EUIObjectNode *pEVar4;
  long lVar5;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
  if (((int)uVar1 >> 2 & 1U) == 0) {
    return;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)uVar1 >> 3 & 1U) == 0) {
    return;
  }
  pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar5 = (*(code *)pEVar2[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,0,
                     0x40);
  if (lVar5 == 0) {
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,1,
                       0x40);
    if (lVar5 == 0) {
      return;
    }
    iVar3 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_activeCtrl;
    if ((iVar3 != 1) && (iVar3 != -1)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
      return;
    }
    pEVar4 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_pParent;
  }
  else {
    if (1 < (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_activeCtrl + 1U) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
      return;
                    /* end of inlined section */
    }
    pEVar4 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_pParent;
  }
  (*(code *)pEVar4->__vtable[1].EUIObjectNode)
            ((int)&(pEVar4->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)(pEVar4->__vtable + 1),this,this->m_nMessage);
  return;
}

float EPauseMenuSlider::GetSliderWidth() {
	EUIObjectMover HermiteBlend;
	EUIObjectNode *this;
	
  float fVar1;
  EUIObjectMover HermiteBlend;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  fVar1 = 0.0;
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags >> 1 & 1U) != 0)
  {
    fVar1 = this->m_IconWidth;
  }
  return fVar1;
}

void EPauseMenuSlider::CalculateIconWidth() {
	EVec2 StringSize;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  ERFont *szString;
  short *psVar6;
  EWindow *pWin;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar7;
  EVec2 StringSize;
  EVec2__null___1__1 EStack_40;
  int local_30;
  EStorable__vtable *pEStack_2c;
  int local_20;
  int iStack_1c;
  int local_10;
  int iStack_c;
  
                    /* end of inlined section */
  local_30 = (int)unaff_s0;
  pEStack_2c = (EStorable__vtable *)((ulong)unaff_s0 >> 0x20);
  local_10 = (int)unaff_retaddr;
  iStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  local_20 = (int)unaff_s1;
  iStack_1c = (int)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  piVar2 = *(int **)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.
                     field0_0x0;
                    /* end of inlined section */
  StringSize.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x0;
  if (piVar2 == (int *)0x0) {
    return;
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  iVar3 = *piVar2;
                    /* end of inlined section */
  psVar6 = (this->field0_0x0).field0_0x0.m_pLong;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  this->m_IconWidth = *(float *)(iVar3 + 0x18);
  if (psVar6 == (short *)0x0) {
    psVar6 = (short *)(this->field0_0x0).field0_0x0.m_pShort;
    if (psVar6 == (short *)0x0) goto LAB_001b827c;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    szString = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
    pWin = (EWindow *)0x0;
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    szString = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
    pWin = (EWindow *)&pGifTag1;
                    /* end of inlined section */
  }
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&EStack_40,szString,SUB41(psVar6,0),pWin);
  puVar1 = (undefined *)((int)&StringSize.field0_0x0 + 7);
                    /* end of inlined section */
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)EStack_40 >> (7 - uVar4) * 8;
  StringSize.field0_0x0 = (EVec2__null___1__1)(EVec2__null___1__1)EStack_40.field1;
LAB_001b827c:
                    /* end of inlined section */
  fVar7 = (this->field0_0x0).m_gap;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       this->m_IconWidth + StringSize.field0_0x0.d[0] + fVar7 + fVar7;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  *(undefined4 *)
   ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0 + 8) =
       *(undefined4 *)(iVar3 + 0x20);
  SetPositions__9EUIPrompt(&this->field0_0x0);
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

void* EPauseMenuSlider::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,4);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPauseMenuSlider::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void EPauseMenuSlider::SetMessage(u32 nMessage) {
  this->m_nMessage = nMessage;
  return;
}

void EPauseMenuSlider::SetSlideMaxTime(float t) {
  _16EPauseMenuSlider_SlideMaxTime = t;
  return;
}

float EPauseMenuSlider::GetSlideMaxTime() {
  return _16EPauseMenuSlider_SlideMaxTime;
}
