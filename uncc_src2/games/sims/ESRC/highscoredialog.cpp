// STATUS: NOT STARTED

#include "highscoredialog.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2398;
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
	Panelstateman *$vb2398;
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
	Panelstateman *$vb2398;
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

__vtbl_ptr_type EHighScoreDialog virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHighScoreDialog::~EHighScoreDialog,
		/* .__delta2 = */ 14160
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Update,
		/* .__delta2 = */ 2272
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHighScoreDialog::Draw,
		/* .__delta2 = */ 15648
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
		/* .__pfn = */ &EHighScoreDialog::Message,
		/* .__delta2 = */ 18600
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

EHighScoreDialog* EHighScoreDialog::EHighScoreDialog() {
	EVec3 vPos;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  uint uVar8;
  ulong *puVar9;
  EUIStaticTextIcon *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EUIIconDef local_170;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  EVec3 vPos;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  EUITextIconDef local_110;
  EUIIconDef local_f0;
  EUIIconDef__vtable *local_d0;
  int local_c0;
  EVec3 *local_bc;
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
  
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
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
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this_00 = (EUIStaticTextIcon *)this->m_Prompts;
  __13EUIObjectNode(&this->field0_0x0);
  local_c0 = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16EHighScoreDialog;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.m_trigger = 0x40;
  local_170.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_170.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon,&local_170,0,0,0x40);
  local_bc = (EVec3 *)&local_120;
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_170.m_trigger = 0x40;
                    /* end of inlined section */
    local_c0 = local_c0 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_170.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_170.m_flags = 0;
    local_170.m_selColorIdx = 0;
    local_170.m_colorIdx = 1;
    local_170.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_150 = 0x20;
    local_14c = 0;
    local_148 = 0;
    local_144 = 0x41400000;
    local_140 = 0;
    local_13c = 1;
    local_138 = CONCAT22(local_138._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_118 = 0;
    local_11c = 0;
    local_120 = 0;
    local_110.m_maxChars = 0x20;
    local_110.m_xAlign = E_FAX_LEFT;
    local_110.m_yAlign = E_FAY_TOP;
    local_110.m_pointsize = 12.0;
    local_110.m_selColorIdx = 0;
    local_110.m_colorIdx = 1;
    local_110.m_retChar = -1;
    local_f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_f0.m_flags = 0;
    local_f0.m_trigger = 0x40;
    local_f0.m_selColorIdx = 0;
    local_f0.m_colorIdx = 1;
    local_f0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (this_00,&local_110,&local_f0,-1,local_bc);
    local_f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_00->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_xAlign + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_14c,local_150) >> (7 - uVar8) * 8;
    pEVar2 = &(this_00->field0_0x0).m_textdef;
    uVar8 = (uint)pEVar2 & 7;
    puVar9 = (ulong *)((int)pEVar2 - uVar8);
    *puVar9 = CONCAT44(local_14c,local_150) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_pointsize + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_144,local_148) >> (7 - uVar8) * 8;
    pEVar3 = &(this_00->field0_0x0).m_textdef.m_yAlign;
    uVar8 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar8);
    *puVar9 = CONCAT44(local_144,local_148) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_13c,local_140) >> (7 - uVar8) * 8;
    puVar4 = &(this_00->field0_0x0).m_textdef.m_selColorIdx;
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)((int)puVar4 - uVar8);
    *puVar9 = CONCAT44(local_13c,local_140) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    *(undefined4 *)&(this_00->field0_0x0).m_textdef.m_retChar = local_138;
    local_d0 = (this_00->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_170.m_trigger,local_170.m_flags) >> (7 - uVar8) * 8;
    pEVar5 = &(this_00->field0_0x0).field0_0x0.m_def;
    uVar8 = (uint)pEVar5 & 7;
    puVar9 = (ulong *)((int)pEVar5 - uVar8);
    *puVar9 = CONCAT44(local_170.m_trigger,local_170.m_flags) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_170.m_colorIdx,local_170.m_selColorIdx) >> (7 - uVar8) * 8;
    piVar6 = &(this_00->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar8 = (uint)piVar6 & 7;
    puVar9 = (ulong *)((int)piVar6 - uVar8);
    *puVar9 = CONCAT44(local_170.m_colorIdx,local_170.m_selColorIdx) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_170.__vtable,local_170.m_pCtrl) >> (7 - uVar8) * 8;
    ppEVar7 = &(this_00->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar8 = (uint)ppEVar7 & 7;
    puVar9 = (ulong *)((int)ppEVar7 - uVar8);
    *puVar9 = CONCAT44(local_170.__vtable,local_170.m_pCtrl) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
    (this_00->field0_0x0).field0_0x0.m_def.__vtable = local_d0;
                    /* end of inlined section */
    this_00 = (EUIStaticTextIcon *)&this_00[1].field0_0x0.field0_0x0.field0_0x0.m_id;
    local_170.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  } while (local_c0 != -1);
  __10EPromptBar(&this->m_PromptBar);
  this->m_pTextEntryDialog = (ETextEntryDialog *)0x0;
  this->m_pBlankShader = (ERShader *)0x0;
  this->m_pStar = (ERShader *)0x0;
  Init__16EHighScoreDialog(this);
  return this;
}

EHighScoreDialog* EHighScoreDialog::EHighScoreDialog(s32 nNewScoreIndex, s32 nChallengePlayerNum, s32 nChallengeScore) {
	EVec3 vPos;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  uint uVar8;
  ulong *puVar9;
  EUIStaticTextIcon *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar10;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EUIIconDef local_190;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  EVec3 vPos;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  EUITextIconDef local_130;
  EUIIconDef local_110;
  EUIIconDef__vtable *local_f0;
  int local_e0;
  int local_dc;
  int local_d8;
  EVec3 *local_d4;
  uint local_d0;
  undefined4 uStack_cc;
  int local_c0;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  iVar10 = 0;
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this_00 = (EUIStaticTextIcon *)this->m_Prompts;
  local_e0 = nNewScoreIndex;
  local_dc = nChallengePlayerNum;
  local_d8 = nChallengeScore;
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16EHighScoreDialog;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_190.m_trigger = 0x40;
  local_190.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_190.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_190.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_190.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_190.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon,&local_190,0,0,0x40);
  local_d4 = (EVec3 *)&local_140;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_190.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_190.m_flags = 0;
    local_190.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar10 = iVar10 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_190.m_colorIdx = 1;
    local_190.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_16c = 0;
    local_168 = 0;
    local_164 = 0x41400000;
    local_160 = 0;
    local_15c = 1;
    local_158 = CONCAT22(local_158._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_138 = 0;
    local_13c = 0;
    local_140 = 0;
    local_130.m_xAlign = E_FAX_LEFT;
    local_130.m_yAlign = E_FAY_TOP;
    local_130.m_pointsize = 12.0;
    local_130.m_selColorIdx = 0;
    local_130.m_colorIdx = 1;
    local_130.m_retChar = -1;
    local_110.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_110.m_flags = 0;
    local_110.m_selColorIdx = 0;
    local_110.m_colorIdx = 1;
    local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_190.m_trigger = local_c0;
    local_170 = local_d0;
    local_130.m_maxChars = local_d0;
    local_110.m_trigger = local_c0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (this_00,&local_130,&local_110,-1,local_d4);
    local_110.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_00->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_xAlign + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_16c,local_170) >> (7 - uVar8) * 8;
    pEVar2 = &(this_00->field0_0x0).m_textdef;
    uVar8 = (uint)pEVar2 & 7;
    puVar9 = (ulong *)((int)pEVar2 - uVar8);
    *puVar9 = CONCAT44(local_16c,local_170) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_pointsize + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_164,local_168) >> (7 - uVar8) * 8;
    pEVar3 = &(this_00->field0_0x0).m_textdef.m_yAlign;
    uVar8 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar8);
    *puVar9 = CONCAT44(local_164,local_168) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_15c,local_160) >> (7 - uVar8) * 8;
    puVar4 = &(this_00->field0_0x0).m_textdef.m_selColorIdx;
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)((int)puVar4 - uVar8);
    *puVar9 = CONCAT44(local_15c,local_160) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    *(undefined4 *)&(this_00->field0_0x0).m_textdef.m_retChar = local_158;
    local_f0 = (this_00->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_190.m_trigger,local_190.m_flags) >> (7 - uVar8) * 8;
    pEVar5 = &(this_00->field0_0x0).field0_0x0.m_def;
    uVar8 = (uint)pEVar5 & 7;
    puVar9 = (ulong *)((int)pEVar5 - uVar8);
    *puVar9 = CONCAT44(local_190.m_trigger,local_190.m_flags) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_190.m_colorIdx,local_190.m_selColorIdx) >> (7 - uVar8) * 8;
    piVar6 = &(this_00->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar8 = (uint)piVar6 & 7;
    puVar9 = (ulong *)((int)piVar6 - uVar8);
    *puVar9 = CONCAT44(local_190.m_colorIdx,local_190.m_selColorIdx) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_190.__vtable,local_190.m_pCtrl) >> (7 - uVar8) * 8;
    ppEVar7 = &(this_00->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar8 = (uint)ppEVar7 & 7;
    puVar9 = (ulong *)((int)ppEVar7 - uVar8);
    *puVar9 = CONCAT44(local_190.__vtable,local_190.m_pCtrl) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    (this_00->field0_0x0).field0_0x0.m_def.__vtable = local_f0;
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    this_00 = (EUIStaticTextIcon *)&this_00[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_190.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar10 != -1);
  __10EPromptBar(&this->m_PromptBar);
  this->m_nScoreIndex = local_e0;
  this->m_nChallengePlayerNum = local_dc;
  this->m_pTextEntryDialog = (ETextEntryDialog *)0x0;
  this->m_nChallengeScore = local_d8;
  this->m_pBlankShader = (ERShader *)0x0;
  this->m_pStar = (ERShader *)0x0;
  Init__16EHighScoreDialog(this);
  return this;
}

void EHighScoreDialog::~EHighScoreDialog(int __in_chrg) {
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIPrompt *pEVar3;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16EHighScoreDialog;
  Reset__16EHighScoreDialog(this);
  ___10EPromptBar(&this->m_PromptBar,2);
  if ((this != (EHighScoreDialog *)0xfffffcbc) &&
     (this->m_Prompts != (EUIPrompt *)&this->m_PromptBar)) {
    pEVar3 = this->m_Prompts;
    do {
      pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->Update + 4,0);
      bVar1 = this->m_Prompts != pEVar3;
      pEVar3 = pEVar3 + -1;
    } while (bVar1);
  }
  ___7EUIIcon(&this->m_XIcon,2);
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/highscoredialog.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EHighScoreDialog::InitParticles(int nSet) {
	int i;
	int nStart;
	int nEnd;
	float fSpeed;
	float fDirection;
	EVec2 vPos;
	EGraphics *this;
	
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float x;
  EVec2 vPos;
  
  iVar4 = rand();
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  uVar5 = rand();
  fVar11 = 0.25;
  if ((uVar5 & 1) == 0) {
    fVar11 = 0.75;
  }
  if (nSet == 0) {
    iVar6 = rand();
    uVar5 = 0;
    uVar10 = 10;
    fVar13 = (float)(iVar6 % 0x50 + 10) * 0.01;
    iVar6 = rand();
    iVar7 = rand();
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    (this->m_vParticle0ColorEnd).field0_0x0.d[0] = fVar13;
    (this->m_vParticle0ColorEnd).field0_0x0.d[1] = (float)(iVar6 % 0x50 + 10) * 0.01;
    (this->m_vParticle0ColorEnd).field0_0x0.d[2] = (float)(iVar7 % 0x50 + 10) * 0.01;
    (this->m_vParticle0ColorEnd).field0_0x0.d[3] = 1.0;
  }
  else {
    iVar6 = rand();
    uVar5 = 10;
    uVar10 = 0x14;
    fVar13 = (float)(iVar6 % 0x50 + 10) * 0.01;
    iVar6 = rand();
    iVar7 = rand();
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    (this->m_vParticle1ColorEnd).field0_0x0.d[0] = fVar13;
    (this->m_vParticle1ColorEnd).field0_0x0.d[1] = (float)(iVar6 % 0x50 + 10) * 0.01;
    (this->m_vParticle1ColorEnd).field0_0x0.d[2] = (float)(iVar7 % 0x50 + 10) * 0.01;
    (this->m_vParticle1ColorEnd).field0_0x0.d[3] = 1.0;
  }
  if (uVar5 < uVar10) {
    fVar13 = 0.01745329;
    pfVar8 = this->m_fParticleLife[uVar5] + 1;
    pfVar9 = this->m_fParticlePos[uVar5] + 1;
    do {
      uVar5 = uVar5 + 1;
      (*(float (*) [2])(pfVar9 + -1))[0] = fVar11;
      *pfVar9 = (float)(iVar4 % 0x19 + 0x19) * 0.01;
      iVar6 = rand();
      pfVar9 = pfVar9 + 2;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
      fVar14 = (float)(iVar6 % 0x4b + 0x9b) / (float)_pGfx->m_xscreen;
      iVar6 = rand();
      x = (float)(iVar6 % 0x168) * fVar13;
      fVar12 = cosf(x);
      pfVar8[-0x29] = fVar12 * fVar14;
      fVar12 = sinf(x);
      (*(float (*) [2])(pfVar8 + -1))[0] = 0.1;
      *pfVar8 = 1.25;
      pfVar8[-0x28] = fVar12 * fVar14;
      pfVar8 = pfVar8 + 2;
    } while ((int)uVar5 < (int)uVar10);
  }
  uVar3 = _WHITE.field0_0x0.d[3];
  uVar2 = _WHITE.field0_0x0.d[2];
  uVar1 = _WHITE.field0_0x0._0_8_;
  (this->m_vParticleColorStart).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this->m_vParticleColorStart).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
  (this->m_vParticleColorStart).field0_0x0.d[2] = uVar2;
  (this->m_vParticleColorStart).field0_0x0.d[3] = uVar3;
  return;
}

void EHighScoreDialog::Init() {
	EHouse *this;
	ERFont *this;
	
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ETextEntryDialog *pEVar4;
  short *pTitle;
  ERShader *pEVar5;
  ERFont *pEVar6;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
  this->m_nDialogMode = 0;
  pEVar4 = (ETextEntryDialog *)_memmanAlloc__FUiUi(0x1c0,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
                    /* end of inlined section */
  pTitle = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"enter_initials_prompt");
  pEVar4 = __16ETextEntryDialogPCUsUiib(pEVar4,pTitle,3,this->m_nChallengePlayerNum,true);
  this->m_pTextEntryDialog = pEVar4;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  this->m_nHouseNum = (_globals._pCurHouse)->m_lotNum + -1;
  InitParticles__16EHighScoreDialogi(this,0);
  InitParticles__16EHighScoreDialogi(this,2);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_fTicker0 = 0.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_fTicker1 = 0.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bDelaySet1Start = 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x50410c9d,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pStar = pEVar5;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar6 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar6;
  SetSize__6ERFontffb(pEVar6,16.0,1.0,true);
  uVar3 = _WHITE.field0_0x0.d[3];
  uVar2 = _WHITE.field0_0x0.d[2];
  uVar1 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar6 = this->m_pFont;
  (pEVar6->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar6->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
  (pEVar6->m_vColor).field0_0x0.d[2] = uVar2;
  (pEVar6->m_vColor).field0_0x0.d[3] = uVar3;
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBlankShader = pEVar5;
  return;
}

void EHighScoreDialog::Reset() {
  ETextEntryDialog *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  ERShader *pEVar3;
  
  pEVar1 = this->m_pTextEntryDialog;
  if (pEVar1 == (ETextEntryDialog *)0x0) {
    pEVar3 = this->m_pBlankShader;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pBlankShader = (ERShader *)0x0;
LAB_00163cd8:
      pEVar3 = this->m_pBlankShader;
    }
    pEVar3 = this->m_pStar;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pStar = (ERShader *)0x0;
      pEVar3 = this->m_pStar;
    }
    return;
  }
  pEVar2 = (pEVar1->field0_0x0).__vtable;
  (*(code *)pEVar2->Draw)((int)pEVar1->m_szText + *(short *)&pEVar2->Update + -0x3e,3);
  this->m_pTextEntryDialog = (ETextEntryDialog *)0x0;
  goto LAB_00163cd8;
}

void EHighScoreDialog::Draw(ERC *prc) {
	EVec2 vPos;
	EVec2 vScreen;
	EUIObjectNode *this;
	EGraphics *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	int i;
	float fSize;
	EGraphics *this;
	EGraphics *this;
	ERFont *this;
	
  EUIObjectNode__vtable *pEVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  ERFont *pEVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar7;
  undefined8 unaff_s2;
  float *pfVar8;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  float (*pafVar9) [2];
  undefined8 unaff_s6;
  int iVar10;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  EVec2 vPos;
  EVec2 vScreen;
  float local_110;
  float local_10c;
  undefined8 local_100;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
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
  undefined4 local_40;
  undefined4 uStack_3c;
  
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 1 & 1U) != 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar14 = 1.0;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pBlankShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_110 = 0.0;
    local_100._4_4_ = 0.0;
    local_f0 = 0;
    local_ec = 0;
    local_e8 = 0;
    local_e4 = 0x3f000000;
                    /* end of inlined section */
    vScreen.field0_0x0.d[0] = fVar14;
    vScreen.field0_0x0.d[1] = fVar14;
    local_10c = fVar14;
    local_100._0_4_ = fVar14;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vPos,&vScreen,
               (EVec2 *)&local_110,&local_100,&local_f0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0.d[0] = 0.5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0.d[1] = 0.12;
                    /* end of inlined section */
    vScreen.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
    vScreen.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    SetSize__6ERFontffb(this->m_pFont,24.0,fVar14,true);
    Select__6ERFontP3ERC(this->m_pFont,prc);
    uVar4 = _BLACK.field0_0x0.d[3];
    uVar3 = _BLACK.field0_0x0.d[2];
    uVar2 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar6 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (pEVar6->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar6->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar6->m_vColor).field0_0x0.d[2] = uVar3;
    (pEVar6->m_vColor).field0_0x0.d[3] = uVar4;
                    /* end of inlined section */
    if (this->m_nChallengePlayerNum == 0) {
      psVar5 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"congrats1_text");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_110 = vPos.field0_0x0.d[0] + fVar14 / vScreen.field0_0x0.d[0];
      local_10c = vPos.field0_0x0.d[1] + fVar14 / vScreen.field0_0x0.d[1];
      local_e0 = local_110;
      local_dc = local_10c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar5,true,(EVec2 *)&local_e0,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
      uVar4 = _WHITE.field0_0x0.d[3];
      uVar3 = _WHITE.field0_0x0.d[2];
      uVar2 = _WHITE.field0_0x0._0_8_;
      pEVar6 = this->m_pFont;
                    /* end of inlined section */
                    /* end of inlined section */
      (pEVar6->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar6->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
      (pEVar6->m_vColor).field0_0x0.d[2] = uVar3;
      (pEVar6->m_vColor).field0_0x0.d[3] = uVar4;
      psVar5 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"congrats1_text");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_110 = vPos.field0_0x0.d[0];
      local_10c = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar5,true,(EVec2 *)&local_110,E_FAX_CENTER,E_FAY_TOP,&vPos);
                    /* end of inlined section */
      pEVar6 = this->m_pFont;
    }
    else {
      psVar5 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"congrats2_text");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_110 = vPos.field0_0x0.d[0] + fVar14 / vScreen.field0_0x0.d[0];
      local_10c = vPos.field0_0x0.d[1] + fVar14 / vScreen.field0_0x0.d[1];
      local_100._0_4_ = local_110;
      local_100._4_4_ = local_10c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar5,true,(EVec2 *)&local_100,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
      uVar4 = _WHITE.field0_0x0.d[3];
      uVar3 = _WHITE.field0_0x0.d[2];
      uVar2 = _WHITE.field0_0x0._0_8_;
      pEVar6 = this->m_pFont;
                    /* end of inlined section */
                    /* end of inlined section */
      (pEVar6->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar6->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
      (pEVar6->m_vColor).field0_0x0.d[2] = uVar3;
      (pEVar6->m_vColor).field0_0x0.d[3] = uVar4;
      psVar5 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"congrats2_text");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_110 = vPos.field0_0x0.d[0];
      local_10c = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar5,true,(EVec2 *)&local_110,E_FAX_CENTER,E_FAY_TOP,&vPos);
                    /* end of inlined section */
      pEVar6 = this->m_pFont;
    }
    fVar14 = 0.5;
    fVar11 = GetLineSpacing__6ERFontP7EWindow(pEVar6,(EWindow *)0x0);
    uVar4 = _BLACK.field0_0x0.d[3];
    uVar3 = _BLACK.field0_0x0.d[2];
    uVar2 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar11;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar6 = this->m_pFont;
                    /* end of inlined section */
    vPos.field0_0x0.d[0] = 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (pEVar6->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar6->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar6->m_vColor).field0_0x0.d[2] = uVar3;
    (pEVar6->m_vColor).field0_0x0.d[3] = uVar4;
    uVar7 = 0;
                    /* end of inlined section */
    psVar5 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"high_score_text");
    fVar11 = 0.375;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    pfVar8 = this->m_fParticlePos + 1;
    local_10c = vPos.field0_0x0.d[1] + 1.0 / vScreen.field0_0x0.d[1];
    iVar10 = 0;
    local_110 = vPos.field0_0x0.d[0] + 1.0 / vScreen.field0_0x0.d[0];
    pafVar9 = this->m_fParticleLife;
    local_100._0_4_ = local_110;
    local_100._4_4_ = local_10c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar5,true,(EVec2 *)&local_100,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0
              );
    uVar4 = _WHITE.field0_0x0.d[3];
    uVar3 = _WHITE.field0_0x0.d[2];
    uVar2 = _WHITE.field0_0x0._0_8_;
    pEVar6 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
    (pEVar6->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar6->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar6->m_vColor).field0_0x0.d[2] = uVar3;
    (pEVar6->m_vColor).field0_0x0.d[3] = uVar4;
    psVar5 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"high_score_text");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_110 = vPos.field0_0x0.d[0];
    local_10c = vPos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar5,true,(EVec2 *)&local_110,E_FAX_CENTER,E_FAY_TOP,&vPos);
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pStar,prc,0);
    do {
      if (((*pafVar9)[0] <= 0.0) && (0.0 <= *(float *)((int)this->m_fParticleLife + iVar10 + 4))) {
        fVar13 = 32.0;
        if ((uVar7 & 3) != 0) {
          fVar13 = 22.0;
        }
        if ((uVar7 & 2) != 0) {
          fVar13 = fVar13 + 5.0;
        }
        if ((uVar7 & 1) != 0) {
          fVar13 = fVar13 + 20.0;
        }
        if ((int)uVar7 < 10) {
          fVar12 = this->m_fTicker0;
        }
        else {
          fVar12 = this->m_fTicker1;
        }
        if (fVar12 < fVar11) {
          fVar13 = fVar13 * (fVar12 + fVar12 + 0.25);
        }
        if ((int)uVar7 < 10) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
          local_100._0_4_ = fVar13 * 0.03125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_10c = *pfVar8 - (fVar13 / (float)_pGfx->m_yscreen) * fVar14;
          local_110 = (*(float (*) [2])(pfVar8 + -1))[0] -
                      (fVar13 / (float)_pGfx->m_xscreen) * fVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_100._4_4_ = (float)local_100;
          (*(code *)prc->__vtable[1].ClipRect)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
                     (EVec2 *)&local_110,&local_100,&this->m_vParticle0Color);
        }
        else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
          local_100._0_4_ = fVar13 * 0.03125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_10c = *pfVar8 - (fVar13 / (float)_pGfx->m_yscreen) * fVar14;
          local_110 = (*(float (*) [2])(pfVar8 + -1))[0] -
                      (fVar13 / (float)_pGfx->m_xscreen) * fVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_100._4_4_ = (float)local_100;
          (*(code *)prc->__vtable[1].ClipRect)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
                     (EVec2 *)&local_110,&local_100,&this->m_vParticle1Color);
        }
      }
      uVar4 = _WHITE.field0_0x0.d[3];
      uVar3 = _WHITE.field0_0x0.d[2];
      uVar2 = _WHITE.field0_0x0._0_8_;
      uVar7 = uVar7 + 1;
      pfVar8 = pfVar8 + 2;
      iVar10 = iVar10 + 8;
      pafVar9 = pafVar9[1];
    } while ((int)uVar7 < 0x14);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar6 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (pEVar6->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar6->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar6->m_vColor).field0_0x0.d[2] = uVar3;
    (pEVar6->m_vColor).field0_0x0.d[3] = uVar4;
                    /* end of inlined section */
    SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
    pEVar1 = (this->m_pTextEntryDialog->field0_0x0).__vtable;
    (*(code *)pEVar1->Message)
              ((int)this->m_pTextEntryDialog->m_szText + *(short *)&pEVar1->SetBoxDims + -0x3e,prc);
  }
  return;
}

bool EHighScoreDialog::DialogUpdate() {
	bool bExitDialog;
	short unsigned int Buffer[32];
	
  ETextEntryDialog *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float (*pafVar11) [2];
  float (*pafVar12) [2];
  int iVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  short Buffer [32];
  
  bVar14 = false;
  fVar15 = this->m_fTicker0 + _dt;
  this->m_fTicker0 = fVar15;
  if (*(int *)&this->m_bDelaySet1Start == 0) {
LAB_001643d4:
    this->m_fTicker1 = this->m_fTicker1 + _dt;
  }
  else {
    if (0.75 < fVar15) {
      *(undefined4 *)&this->m_bDelaySet1Start = 0;
    }
    if (*(int *)&this->m_bDelaySet1Start == 0) goto LAB_001643d4;
  }
  bVar3 = UpdateKeyboard__16ETextEntryDialog(this->m_pTextEntryDialog);
  if (!bVar3) {
    GetBuffer__16ETextEntryDialogPUs(this->m_pTextEntryDialog,Buffer);
    pEVar1 = this->m_pTextEntryDialog;
    if (pEVar1 != (ETextEntryDialog *)0x0) {
      pEVar2 = (pEVar1->field0_0x0).__vtable;
      (*(code *)pEVar2->Draw)((int)pEVar1->m_szText + *(short *)&pEVar2->Update + -0x3e,3);
    }
    this->m_pTextEntryDialog = (ETextEntryDialog *)0x0;
    bVar14 = true;
    erase__13StringBuffer2
              (&(_globals.m_pOptionsRecon)->m_HighScores[this->m_nHouseNum][this->m_nScoreIndex].
                m_sbPlayerInitials.field0_0x0);
    append__13StringBuffer2PCUsi
              (&(_globals.m_pOptionsRecon)->m_HighScores[this->m_nHouseNum][this->m_nScoreIndex].
                m_sbPlayerInitials.field0_0x0,Buffer,3);
  }
  fVar15 = _dt;
  iVar13 = 0;
  pfVar9 = this->m_fParticleSpeed + 1;
  pafVar12 = this->m_fParticleSpeed;
  pafVar11 = this->m_fParticleLife;
  pfVar10 = this->m_fParticlePos + 1;
  do {
    fVar4 = _dt;
    if (0.0 < (*pafVar11)[0]) {
      if (((int)pafVar11 < (int)this->m_fParticleLife[10]) ||
         (*(int *)&this->m_bDelaySet1Start == 0)) {
        (*pafVar11)[0] = (*pafVar11)[0] - fVar15;
      }
    }
    else if (0.0 < pfVar9[0x28]) {
      fVar5 = (*(float (*) [2])(pfVar9 + -1))[0];
      pfVar9[0x28] = pfVar9[0x28] - _dt;
      if (0.0015 < fVar5) {
        (*(float (*) [2])(pfVar9 + -1))[0] = fVar5 - fVar4 * 0.2;
LAB_001645ac:
        fVar4 = *pfVar9;
      }
      else {
        if (fVar5 < -0.0015) {
          (*pafVar12)[0] = fVar5 + fVar4 * 0.2;
          goto LAB_001645ac;
        }
        fVar4 = *pfVar9;
      }
      if (0.01 < fVar4) {
        fVar4 = fVar4 - fVar15 * 0.15;
LAB_001645e4:
        *pfVar9 = fVar4;
      }
      else if (fVar4 < -0.015) {
        fVar4 = fVar4 + fVar15 * 0.1;
        goto LAB_001645e4;
      }
      pfVar8 = (float *)((int)this->m_fParticleSpeed + iVar13 + 4);
      *pfVar8 = *pfVar8 + fVar15 * 0.5;
      fVar4 = *pfVar10;
      (*(float (*) [2])(pfVar10 + -1))[0] =
           (*(float (*) [2])(pfVar10 + -1))[0] +
           *(float *)((int)this->m_fParticleSpeed + iVar13) * fVar15;
      *pfVar10 = fVar4 + *pfVar8 * fVar15;
    }
    pafVar11 = pafVar11[1];
    pfVar10 = pfVar10 + 2;
    iVar13 = iVar13 + 8;
    pfVar9 = pfVar9 + 2;
    pafVar12 = pafVar12[1];
  } while ((int)pafVar11 < (int)&this->m_fTicker0);
  if (this->m_fParticleLife[1] <= 0.0) {
    InitParticles__16EHighScoreDialogi(this,0);
    this->m_fTicker0 = 0.0;
  }
  if (this->m_fParticleLife[10][1] <= 0.0) {
    InitParticles__16EHighScoreDialogi(this,1);
    this->m_fTicker1 = 0.0;
  }
  fVar15 = this->m_fTicker0;
  if (fVar15 <= 0.0) {
    fVar15 = (this->m_vParticleColorStart).field0_0x0.d[0];
    fVar4 = (this->m_vParticleColorStart).field0_0x0.d[1];
    fVar5 = (this->m_vParticleColorStart).field0_0x0.d[2];
    fVar6 = (this->m_vParticleColorStart).field0_0x0.d[3];
LAB_0016477c:
    (this->m_vParticle0Color).field0_0x0.d[0] = fVar15;
    (this->m_vParticle0Color).field0_0x0.d[1] = fVar4;
    (this->m_vParticle0Color).field0_0x0.d[2] = fVar5;
    (this->m_vParticle0Color).field0_0x0.d[3] = fVar6;
    (this->m_vParticle0Color).field0_0x0.d[3] = 0.0;
  }
  else {
    if (1.25 <= fVar15) {
      fVar15 = (this->m_vParticle0ColorEnd).field0_0x0.d[0];
      fVar4 = (this->m_vParticle0ColorEnd).field0_0x0.d[1];
      fVar5 = (this->m_vParticle0ColorEnd).field0_0x0.d[2];
      fVar6 = (this->m_vParticle0ColorEnd).field0_0x0.d[3];
      goto LAB_0016477c;
    }
    fVar7 = (this->m_vParticleColorStart).field0_0x0.d[0];
    fVar6 = (this->m_vParticleColorStart).field0_0x0.d[1];
    fVar16 = (this->m_vParticleColorStart).field0_0x0.d[2];
    fVar4 = (this->m_vParticle0ColorEnd).field0_0x0.d[1];
    fVar5 = (this->m_vParticle0ColorEnd).field0_0x0.d[2];
    (this->m_vParticle0Color).field0_0x0.d[0] =
         fVar7 + ((this->m_vParticle0ColorEnd).field0_0x0.d[0] - fVar7) * fVar15 * 0.8;
    (this->m_vParticle0Color).field0_0x0.d[1] = fVar6 + (fVar4 - fVar6) * fVar15 * 0.8;
    (this->m_vParticle0Color).field0_0x0.d[2] = fVar16 + (fVar5 - fVar16) * fVar15 * 0.8;
    if (fVar15 < 0.25) {
LAB_00164744:
      (this->m_vParticle0Color).field0_0x0.d[3] = fVar15 * 4.0;
    }
    else {
      if (1.0 < fVar15) {
        fVar15 = 1.25 - fVar15;
        goto LAB_00164744;
      }
      (this->m_vParticle0Color).field0_0x0.d[3] = 1.0;
    }
  }
  fVar4 = this->m_fTicker1;
  fVar15 = 0.0;
  if (fVar4 <= 0.0) {
    fVar4 = (this->m_vParticleColorStart).field0_0x0.d[0];
    fVar5 = (this->m_vParticleColorStart).field0_0x0.d[1];
    fVar6 = (this->m_vParticleColorStart).field0_0x0.d[2];
    fVar7 = (this->m_vParticleColorStart).field0_0x0.d[3];
  }
  else {
    if (fVar4 < 1.25) {
      fVar7 = (this->m_vParticleColorStart).field0_0x0.d[0];
      fVar6 = (this->m_vParticleColorStart).field0_0x0.d[1];
      fVar16 = (this->m_vParticleColorStart).field0_0x0.d[2];
      fVar15 = (this->m_vParticle1ColorEnd).field0_0x0.d[1];
      fVar5 = (this->m_vParticle1ColorEnd).field0_0x0.d[2];
      (this->m_vParticle1Color).field0_0x0.d[0] =
           fVar7 + ((this->m_vParticle1ColorEnd).field0_0x0.d[0] - fVar7) * fVar4 * 0.8;
      (this->m_vParticle1Color).field0_0x0.d[1] = fVar6 + (fVar15 - fVar6) * fVar4 * 0.8;
      (this->m_vParticle1Color).field0_0x0.d[2] = fVar16 + (fVar5 - fVar16) * fVar4 * 0.8;
      if (fVar4 < 0.25) {
        fVar15 = fVar4 * 4.0;
      }
      else {
        if (fVar4 <= 1.0) {
          (this->m_vParticle1Color).field0_0x0.d[3] = 1.0;
          return bVar14;
        }
        fVar15 = (1.25 - fVar4) * 4.0;
      }
      goto LAB_00164878;
    }
    fVar4 = (this->m_vParticle1ColorEnd).field0_0x0.d[0];
    fVar5 = (this->m_vParticle1ColorEnd).field0_0x0.d[1];
    fVar6 = (this->m_vParticle1ColorEnd).field0_0x0.d[2];
    fVar7 = (this->m_vParticle1ColorEnd).field0_0x0.d[3];
  }
  (this->m_vParticle1Color).field0_0x0.d[0] = fVar4;
  (this->m_vParticle1Color).field0_0x0.d[1] = fVar5;
  (this->m_vParticle1Color).field0_0x0.d[2] = fVar6;
  (this->m_vParticle1Color).field0_0x0.d[3] = fVar7;
LAB_00164878:
  (this->m_vParticle1Color).field0_0x0.d[3] = fVar15;
  return bVar14;
}

void EHighScoreDialog::Message(EUIObjectNode *pChild, u32 messId) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
  return;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
                    /* end of inlined section */
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

void* EHighScoreDialog::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EHighScoreDialog::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void EHighScoreDialog::SetReceiver(EUIObjectNode *pNode) {
  this->m_pReceiver = pNode;
  return;
}

void EHighScoreDialog::SetDialogMode(int mode) {
  this->m_nDialogMode = mode;
  return;
}
