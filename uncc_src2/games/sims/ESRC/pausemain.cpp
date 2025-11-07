// STATUS: NOT STARTED

#include "pausemain.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2317;
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
	Panelstateman *$vb2317;
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
	Panelstateman *$vb2317;
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

EPauseMenu *_pPauseMenu = NULL;

__vtbl_ptr_type EPausePanel::Panelstateman virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ -24416,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -24416,
		/* .__index = */ 0,
		/* .__pfn = */ &EPausePanel::~EPausePanel,
		/* .__delta2 = */ 1720
	},
	/* [2] = */ {
		/* .__delta = */ -24416,
		/* .__index = */ 0,
		/* .__pfn = */ &EPausePanel::SetState,
		/* .__delta2 = */ 2496
	},
	/* [3] = */ {
		/* .__delta = */ -24416,
		/* .__index = */ 0,
		/* .__pfn = */ &EPausePanel::SetEvent,
		/* .__delta2 = */ 2816
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EPausePanel virtual table[17] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPausePanel::~EPausePanel,
		/* .__delta2 = */ 1720
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPausePanel::Update,
		/* .__delta2 = */ 5808
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPausePanel::Draw,
		/* .__delta2 = */ 8080
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
		/* .__pfn = */ &EPausePanel::Message,
		/* .__delta2 = */ 9280
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
		/* .__pfn = */ &EPausePanel::Init,
		/* .__delta2 = */ 3144
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPausePanel::Reset,
		/* .__delta2 = */ 8816
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type Panelstateman virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Panelstateman::~Panelstateman,
		/* .__delta2 = */ 12000
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
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

float EPausePanel::m_ItemInfoTimer;
ERShader *EPausePanel::m_pDPadUp;
ERShader *EPausePanel::m_pDPadDown;
ERShader *EPausePanel::m_pDPadLeft;
ERShader *EPausePanel::m_pDPadRight;

EPausePanel* EPausePanel::EPausePanel(int __in_chrg) {
	EVec3 vPos;
	EVec3 vPos;
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
  short sVar10;
  undefined6 uVar11;
  undefined6 uVar12;
  undefined6 uVar13;
  EUIIconDef *iconDef;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  EUITextIconDef *textDef;
  EUITextIconDef *textDef_00;
  EUIIconDef *iconDef_00;
  undefined8 uVar18;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  EUIStaticTextIcon *pEVar19;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  int iVar20;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  __vtbl_ptr_type local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  __vtbl_ptr_type local_340;
  EUIIconDef local_330;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  EUITextIconDef local_2d0;
  EUIIconDef local_2b0;
  EUIIconDef__vtable *local_290;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 local_270;
  __vtbl_ptr_type *local_26c;
  uint local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  uint local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  EUITextIconDef local_220;
  EUIIconDef local_200;
  EUIIconDef__vtable *local_1e0;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  __vtbl_ptr_type *local_1bc;
  uint local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  uint local_198;
  EVec3 vPos;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  EUITextIconDef local_170;
  EUIIconDef local_150;
  EUIIconDef__vtable *local_130;
  EUIIconDef *local_120;
  undefined4 *local_11c;
  undefined4 *local_118;
  EPromptBar *local_114;
  EPromptBar *local_110;
  uint *local_10c;
  uint *local_108;
  EUIStaticTextIcon *local_104;
  EVec3 *local_100;
  EUIStaticTextIcon *local_fc;
  EVec3 *local_f8;
  EUITextIconDef *local_f4;
  EUITextIconDef *local_f0;
  EPromptBar *local_ec;
  EUIIconDef *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
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
  
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
    this->_vb2317 = (Panelstateman *)&this->field_0x5f60;
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    *(__vtbl_ptr_type **)&this->field_0x5f64 = _vt_13Panelstateman;
    *(undefined4 *)&this->field_0x5f60 = 0;
  }
                    /* end of inlined section */
  __13EUIObjectNode((EUIObjectNode *)this);
  this->_vb2317->__vtable = (Panelstateman__vtable *)_vt_11EPausePanel_13Panelstateman;
  uVar13 = _vt_11EPausePanel_13Panelstateman[3]._2_6_;
  uVar12 = _vt_11EPausePanel_13Panelstateman[2]._2_6_;
  uVar11 = _vt_11EPausePanel_13Panelstateman[1]._2_6_;
  if (__in_chrg == 0) {
    local_340 = _vt_11EPausePanel_13Panelstateman[4];
    local_360 = _vt_11EPausePanel_13Panelstateman[0];
    this->_vb2317->__vtable = (Panelstateman__vtable *)&local_360;
    sVar10 = (short)this - ((short)this->_vb2317 + -0x5f60);
    local_358 = CONCAT62(uVar11,_vt_11EPausePanel_13Panelstateman[1].__delta + sVar10);
    local_350 = CONCAT62(uVar12,_vt_11EPausePanel_13Panelstateman[2].__delta + sVar10);
    local_348 = CONCAT62(uVar13,_vt_11EPausePanel_13Panelstateman[3].__delta + sVar10);
  }
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  *(__vtbl_ptr_type **)&this->field_0x38 = _vt_11EPausePanel;
                    /* end of inlined section */
  __11EDialogMenu(&this->m_DialogMenu);
  pEVar19 = (EUIStaticTextIcon *)this->m_PromptsYN;
  __14EPauseMainMenu(&this->m_PauseMainMenu);
  iVar20 = 1;
  local_fc = (EUIStaticTextIcon *)this->m_PromptsYNC;
  __16EPauseBudgetMenu(&this->m_PauseBudgetMenu);
  local_104 = (EUIStaticTextIcon *)this->m_Prompts;
  local_114 = &this->m_PromptBarYN;
  __13EPauseBuyMenu(&this->m_PauseBuyMenu);
  local_ec = &this->m_PromptBarYNC;
  local_110 = &this->m_PromptBar;
  __15EPauseBuildMenu(&this->m_PauseBuildMenu);
  __17EPauseOptionsMenu(&this->m_PauseOptionsMenu);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_flags = 0;
  local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon,&local_330,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_330.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_330,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_330.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_SquareIcon,&local_330,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_330.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon2,&local_330,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_330.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon2,&local_330,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_330.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon3,&local_330,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_330.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_330.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon3,&local_330,0,0,0x40);
  local_118 = &local_280;
  local_108 = &local_260;
  local_f8 = (EVec3 *)&local_230;
  local_f0 = &local_220;
  local_120 = &local_200;
  local_11c = &local_1d0;
  local_10c = &local_1b0;
  local_100 = (EVec3 *)&local_180;
  local_f4 = &local_170;
  local_e8 = &local_150;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_330.m_trigger = 0x40;
    local_310 = 0x20;
    local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_330.m_flags = 0;
    local_330.m_selColorIdx = 0;
    local_330.m_colorIdx = 1;
    local_330.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
    iVar20 = iVar20 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_30c = 0;
    local_308 = 0;
    local_304 = 0x41400000;
    local_300 = 0;
    local_2fc = 1;
    local_2f8 = CONCAT22(local_2f8._2_2_,0xffff);
    local_2d0.m_maxChars = 0x20;
    local_2e8 = 0;
    local_2ec = 0;
    local_2f0 = 0;
    local_2d8 = 0;
    local_2dc = 0;
    local_2e0 = 0;
    local_2d0.m_xAlign = E_FAX_LEFT;
    local_2d0.m_yAlign = E_FAY_TOP;
    local_2d0.m_pointsize = 12.0;
    local_2d0.m_selColorIdx = 0;
    local_2d0.m_colorIdx = 1;
    local_2d0.m_retChar = -1;
    local_2b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_2b0.m_flags = 0;
    local_2b0.m_trigger = 0x40;
    local_2b0.m_selColorIdx = 0;
    local_2b0.m_colorIdx = 1;
    local_2b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar19,&local_2d0,&local_2b0,-1,(EVec3 *)&local_2e0);
    textDef_00 = local_f0;
    puVar17 = local_108;
    puVar15 = local_118;
    iconDef = local_120;
    local_2b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar19->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).m_textdef.m_xAlign + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_30c,local_310) >> (7 - uVar8) * 8;
    pEVar2 = &(pEVar19->field0_0x0).m_textdef;
    uVar8 = (uint)pEVar2 & 7;
    puVar9 = (ulong *)((int)pEVar2 - uVar8);
    *puVar9 = CONCAT44(local_30c,local_310) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).m_textdef.m_pointsize + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_304,local_308) >> (7 - uVar8) * 8;
    pEVar3 = &(pEVar19->field0_0x0).m_textdef.m_yAlign;
    uVar8 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar8);
    *puVar9 = CONCAT44(local_304,local_308) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_2fc,local_300) >> (7 - uVar8) * 8;
    puVar4 = &(pEVar19->field0_0x0).m_textdef.m_selColorIdx;
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)((int)puVar4 - uVar8);
    *puVar9 = CONCAT44(local_2fc,local_300) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    *(undefined4 *)&(pEVar19->field0_0x0).m_textdef.m_retChar = local_2f8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    local_290 = (pEVar19->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_330.m_trigger,local_330.m_flags) >> (7 - uVar8) * 8;
    pEVar5 = &(pEVar19->field0_0x0).field0_0x0.m_def;
    uVar8 = (uint)pEVar5 & 7;
    puVar9 = (ulong *)((int)pEVar5 - uVar8);
    *puVar9 = CONCAT44(local_330.m_trigger,local_330.m_flags) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_330.m_colorIdx,local_330.m_selColorIdx) >> (7 - uVar8) * 8;
    piVar6 = &(pEVar19->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar8 = (uint)piVar6 & 7;
    puVar9 = (ulong *)((int)piVar6 - uVar8);
    *puVar9 = CONCAT44(local_330.m_colorIdx,local_330.m_selColorIdx) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_330.__vtable,local_330.m_pCtrl) >> (7 - uVar8) * 8;
    ppEVar7 = &(pEVar19->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar8 = (uint)ppEVar7 & 7;
    puVar9 = (ulong *)((int)ppEVar7 - uVar8);
    *puVar9 = CONCAT44(local_330.__vtable,local_330.m_pCtrl) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    (pEVar19->field0_0x0).field0_0x0.m_def.__vtable = local_290;
    pEVar19[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    pEVar19[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar19 = (EUIStaticTextIcon *)&pEVar19[1].field0_0x0.field0_0x0.field0_0x0.m_id;
    local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  } while (iVar20 != -1);
  iVar20 = 2;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  uVar18 = 0xffff;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar19 = local_fc;
  do {
    local_26c = _vt_10EUIIconDef;
    local_280 = 0;
    puVar15[1] = local_c0;
    local_278 = 0;
    puVar15[3] = 1;
                    /* end of inlined section */
    iVar20 = iVar20 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_270 = 0;
    local_25c = 0;
    local_258 = 0;
    puVar17[3] = 0x41400000;
    local_250 = 0;
    puVar17[5] = 1;
    local_220.m_retChar = (short)uVar18;
    local_248 = local_248 & 0xffff0000 | (uint)(ushort)local_220.m_retChar;
    local_238 = 0;
    local_23c = 0;
    local_240 = 0;
    local_228 = 0;
    local_22c = 0;
    local_230 = 0;
    local_220.m_xAlign = E_FAX_LEFT;
    local_220.m_yAlign = E_FAY_TOP;
    textDef_00->m_pointsize = 12.0;
    local_220.m_selColorIdx = 0;
    textDef_00->m_colorIdx = 1;
    local_200.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_200.m_flags = 0;
    iconDef->m_trigger = local_c0;
    local_200.m_selColorIdx = 0;
    iconDef->m_colorIdx = 1;
    local_200.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_e0 = (undefined4)uVar18;
    uStack_dc = (undefined4)((ulong)uVar18 >> 0x20);
    local_260 = local_d0;
    local_220.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar19,textDef_00,iconDef,-1,local_f8);
    iconDef_00 = local_e8;
    textDef = local_f4;
    puVar16 = local_10c;
    puVar14 = local_11c;
    local_200.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar19->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).m_textdef.m_xAlign + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_25c,local_260) >> (7 - uVar8) * 8;
    pEVar2 = &(pEVar19->field0_0x0).m_textdef;
    uVar8 = (uint)pEVar2 & 7;
    puVar9 = (ulong *)((int)pEVar2 - uVar8);
    *puVar9 = CONCAT44(local_25c,local_260) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).m_textdef.m_pointsize + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_254,local_258) >> (7 - uVar8) * 8;
    pEVar3 = &(pEVar19->field0_0x0).m_textdef.m_yAlign;
    uVar8 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar8);
    *puVar9 = CONCAT44(uStack_254,local_258) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_24c,local_250) >> (7 - uVar8) * 8;
    puVar4 = &(pEVar19->field0_0x0).m_textdef.m_selColorIdx;
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)((int)puVar4 - uVar8);
    *puVar9 = CONCAT44(uStack_24c,local_250) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    *(uint *)&(pEVar19->field0_0x0).m_textdef.m_retChar = local_248;
    local_1e0 = (pEVar19->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_27c,local_280) >> (7 - uVar8) * 8;
    pEVar5 = &(pEVar19->field0_0x0).field0_0x0.m_def;
    uVar8 = (uint)pEVar5 & 7;
    puVar9 = (ulong *)((int)pEVar5 - uVar8);
    *puVar9 = CONCAT44(uStack_27c,local_280) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_274,local_278) >> (7 - uVar8) * 8;
    piVar6 = &(pEVar19->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar8 = (uint)piVar6 & 7;
    puVar9 = (ulong *)((int)piVar6 - uVar8);
    *puVar9 = CONCAT44(uStack_274,local_278) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_26c,local_270) >> (7 - uVar8) * 8;
    ppEVar7 = &(pEVar19->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar8 = (uint)ppEVar7 & 7;
    puVar9 = (ulong *)((int)ppEVar7 - uVar8);
    *puVar9 = CONCAT44(local_26c,local_270) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    (pEVar19->field0_0x0).field0_0x0.m_def.__vtable = local_1e0;
    pEVar19[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar19[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar19 = (EUIStaticTextIcon *)&pEVar19[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_26c = _vt_10EUIIconDef;
                    /* end of inlined section */
    uVar18 = CONCAT44(uStack_dc,local_e0);
  } while (iVar20 != -1);
  iVar20 = 1;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  uVar18 = 0xffff;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar19 = local_104;
  do {
    local_1bc = _vt_10EUIIconDef;
    local_1d0 = 0;
    puVar14[1] = local_c0;
    local_1c8 = 0;
    puVar14[3] = 1;
                    /* end of inlined section */
    iVar20 = iVar20 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_1c0 = 0;
    local_1ac = 0;
    local_1a8 = 0;
    puVar16[3] = 0x41400000;
    local_1a0 = 0;
    puVar16[5] = 1;
    local_170.m_retChar = (short)uVar18;
    local_198 = local_198 & 0xffff0000 | (uint)(ushort)local_170.m_retChar;
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_178 = 0;
    local_17c = 0;
    local_180 = 0;
    local_170.m_xAlign = E_FAX_LEFT;
    local_170.m_yAlign = E_FAY_TOP;
    textDef->m_pointsize = 12.0;
    local_170.m_selColorIdx = 0;
    textDef->m_colorIdx = 1;
    local_150.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_150.m_flags = 0;
    iconDef_00->m_trigger = local_c0;
    local_150.m_selColorIdx = 0;
    iconDef_00->m_colorIdx = 1;
    local_150.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_e0 = (undefined4)uVar18;
    uStack_dc = (undefined4)((ulong)uVar18 >> 0x20);
    local_1b0 = local_d0;
    local_170.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar19,textDef,iconDef_00,-1,local_100);
    local_150.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar19->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).m_textdef.m_xAlign + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_1ac,local_1b0) >> (7 - uVar8) * 8;
    pEVar2 = &(pEVar19->field0_0x0).m_textdef;
    uVar8 = (uint)pEVar2 & 7;
    puVar9 = (ulong *)((int)pEVar2 - uVar8);
    *puVar9 = CONCAT44(local_1ac,local_1b0) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).m_textdef.m_pointsize + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_1a4,local_1a8) >> (7 - uVar8) * 8;
    pEVar3 = &(pEVar19->field0_0x0).m_textdef.m_yAlign;
    uVar8 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar8);
    *puVar9 = CONCAT44(uStack_1a4,local_1a8) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_19c,local_1a0) >> (7 - uVar8) * 8;
    puVar4 = &(pEVar19->field0_0x0).m_textdef.m_selColorIdx;
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)((int)puVar4 - uVar8);
    *puVar9 = CONCAT44(uStack_19c,local_1a0) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    *(uint *)&(pEVar19->field0_0x0).m_textdef.m_retChar = local_198;
    local_130 = (pEVar19->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_1cc,local_1d0) >> (7 - uVar8) * 8;
    pEVar5 = &(pEVar19->field0_0x0).field0_0x0.m_def;
    uVar8 = (uint)pEVar5 & 7;
    puVar9 = (ulong *)((int)pEVar5 - uVar8);
    *puVar9 = CONCAT44(uStack_1cc,local_1d0) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_1c4,local_1c8) >> (7 - uVar8) * 8;
    piVar6 = &(pEVar19->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar8 = (uint)piVar6 & 7;
    puVar9 = (ulong *)((int)piVar6 - uVar8);
    *puVar9 = CONCAT44(uStack_1c4,local_1c8) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_1bc,local_1c0) >> (7 - uVar8) * 8;
    ppEVar7 = &(pEVar19->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar8 = (uint)ppEVar7 & 7;
    puVar9 = (ulong *)((int)ppEVar7 - uVar8);
    *puVar9 = CONCAT44(local_1bc,local_1c0) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    (pEVar19->field0_0x0).field0_0x0.m_def.__vtable = local_130;
    pEVar19[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar19[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar19 = (EUIStaticTextIcon *)&pEVar19[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
    uVar18 = CONCAT44(uStack_dc,local_e0);
  } while (iVar20 != -1);
  __10EPromptBar(local_114);
  __10EPromptBar(local_ec);
  __10EPromptBar(local_110);
  this->m_pFont = (ERFont *)0x0;
  this->m_pSquareIcon = (ERShader *)0x0;
  this->m_pTriIcon = (ERShader *)0x0;
  this->m_pXIcon = (ERShader *)0x0;
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pMenuBevelShdr = (ERShader *)0x0;
  return this;
}

void EPausePanel::~EPausePanel(int __in_chrg) {
	Panelstateman *this;
	void *pAddress;
	void *pAddress;
	
  EUIObjectNode__vtable *pEVar1;
  short sVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  undefined6 uVar5;
  EUIPrompt *pEVar6;
  EUIPrompt *pEVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  EUIPrompt *pEVar8;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  __vtbl_ptr_type local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  __vtbl_ptr_type local_e0;
  EUIIcon *local_d0;
  EPauseOptionsMenu *local_cc;
  uint local_c8;
  EPauseBuyMenu *local_c4;
  uint local_c0;
  EUIIcon *local_bc;
  EPauseBuildMenu *local_b8;
  EPauseBudgetMenu *local_b4;
  EUIIcon *local_b0;
  EPauseMainMenu *local_ac;
  EUIIcon *local_a8;
  EDialogMenu *local_a4;
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
  
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
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
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  *(__vtbl_ptr_type **)&this->field_0x38 = _vt_11EPausePanel;
  this->_vb2317->__vtable = (Panelstateman__vtable *)_vt_11EPausePanel_13Panelstateman;
  uVar5 = _vt_11EPausePanel_13Panelstateman[3]._2_6_;
  uVar4 = _vt_11EPausePanel_13Panelstateman[2]._2_6_;
  uVar3 = _vt_11EPausePanel_13Panelstateman[1]._2_6_;
  if (__in_chrg == 0) {
    local_e0 = _vt_11EPausePanel_13Panelstateman[4];
    local_100 = _vt_11EPausePanel_13Panelstateman[0];
    this->_vb2317->__vtable = (Panelstateman__vtable *)&local_100;
    sVar2 = (short)this - ((short)this->_vb2317 + -0x5f60);
    local_f8 = CONCAT62(uVar3,_vt_11EPausePanel_13Panelstateman[1].__delta + sVar2);
    local_f0 = CONCAT62(uVar4,_vt_11EPausePanel_13Panelstateman[2].__delta + sVar2);
    local_e8 = CONCAT62(uVar5,_vt_11EPausePanel_13Panelstateman[3].__delta + sVar2);
  }
  Reset__11EPausePanel(this);
  pEVar7 = this->m_Prompts;
  local_c8 = __in_chrg & 1;
  ___10EPromptBar(&this->m_PromptBar,2);
  local_c0 = __in_chrg & 2;
  ___10EPromptBar(&this->m_PromptBarYNC,2);
  pEVar8 = this->m_PromptsYNC;
  ___10EPromptBar(&this->m_PromptBarYN,2);
  local_bc = &this->m_XIcon2;
  local_a8 = &this->m_SquareIcon;
  local_b0 = &this->m_TriIcon;
  local_d0 = &this->m_XIcon;
  local_cc = &this->m_PauseOptionsMenu;
  local_b8 = &this->m_PauseBuildMenu;
  local_c4 = &this->m_PauseBuyMenu;
  local_b4 = &this->m_PauseBudgetMenu;
  local_ac = &this->m_PauseMainMenu;
  local_a4 = &this->m_DialogMenu;
  if ((this != (EPausePanel__69_3945 *)0xffffa328) && (pEVar7 != (EUIPrompt *)&this->m_PromptBarYN))
  {
    for (pEVar6 = this->m_Prompts + 1;
        pEVar1 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar1->Draw)
                  ((int)(pEVar6->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar1->Update + 4,0), pEVar7 != pEVar6; pEVar6 = pEVar6 + -1) {
    }
  }
                    /* end of inlined section */
  if ((this != (EPausePanel__69_3945 *)0xffffa538) && (pEVar8 != pEVar7)) {
    for (pEVar7 = this->m_PromptsYNC + 2;
        pEVar1 = (pEVar7->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar1->Draw)
                  ((int)(pEVar7->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar1->Update + 4,0), pEVar8 != pEVar7; pEVar7 = pEVar7 + -1) {
    }
  }
                    /* end of inlined section */
  if ((this != (EPausePanel__69_3945 *)0xffffa698) && (this->m_PromptsYN != pEVar8)) {
    for (pEVar7 = this->m_PromptsYN + 1;
        pEVar1 = (pEVar7->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar1->Draw)
                  ((int)(pEVar7->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar1->Update + 4,0), this->m_PromptsYN != pEVar7;
        pEVar7 = (EUIPrompt *)((int)(pEVar7 + -2) + 0xb0)) {
    }
  }
  ___7EUIIcon(&this->m_TriIcon3,2);
  ___7EUIIcon(&this->m_XIcon3,2);
  ___7EUIIcon(&this->m_TriIcon2,2);
  ___7EUIIcon(local_bc,2);
  ___7EUIIcon(local_a8,2);
  ___7EUIIcon(local_b0,2);
  ___7EUIIcon(local_d0,2);
  ___17EPauseOptionsMenu(local_cc,2);
  ___15EPauseBuildMenu(local_b8,2);
  ___13EPauseBuyMenu(local_c4,2);
  ___16EPauseBudgetMenu(local_b4,2);
  ___14EPauseMainMenu(local_ac,2);
  ___11EDialogMenu(local_a4,2);
  ___13EUIObjectNode((EUIObjectNode *)this,0);
  if (local_c0 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    this->_vb2317->__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  }
                    /* end of inlined section */
  if (local_c8 != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPausePanel::SetState(Panelstate newstate) {
  uint uVar1;
  EPauseBuyMenu *this_00;
  EPauseBuildMenu *this_01;
  
  this->_vb2317->m_state = newstate;
  if (newstate != PAUSED_PANEL_STATE) {
    return;
  }
  uVar1 = this->m_nDisplayMode;
  if (uVar1 == 5) {
    this_00 = &this->m_PauseBuyMenu;
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this_00,4,true);
    AnimateIn__13EPauseBuyMenu(this_00);
    UpdateBuyCursorFlag__13EPauseBuyMenub(this_00,false);
                    /* end of inlined section */
  }
  else {
    this_01 = &this->m_PauseBuildMenu;
    if (uVar1 == 6) {
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this_01,4,true);
      AnimateIn__15EPauseBuildMenu(this_01);
      UpdateBuildCursorFlag__15EPauseBuildMenub(this_01,false);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadUp = _7DPadWin_m_pUpShdr;
      _11EPausePanel_m_pDPadDown = _7DPadWin_m_pDownShdr;
      _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
      _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
                    /* end of inlined section */
      goto LAB_001b0ad4;
    }
    if (uVar1 == 0) {
      this->m_nDisplayMode = 1;
      goto LAB_001b0ad4;
    }
    if (uVar1 != 1) goto LAB_001b0ad4;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
  _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
  _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
  _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
  _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
LAB_001b0ad4:
  SetControllerState__14EPauseMainMenuUi(&this->m_PauseMainMenu,_globals.m_whichPlayerPaused);
  CheckLockStates__14EPauseMainMenu(&this->m_PauseMainMenu);
  return;
}

void EPausePanel::SetEvent(PanelEvent event, u32 id) {
  Panelstateman__vtable *pPVar1;
  EPauseMainMenu *this_00;
  
  if (event == LANG_EVENT) {
    Reset__16EPauseBudgetMenu(&this->m_PauseBudgetMenu);
    this_00 = &this->m_PauseMainMenu;
    Init__16EPauseBudgetMenu(&this->m_PauseBudgetMenu);
    Reset__13EPauseBuyMenu(&this->m_PauseBuyMenu);
    Init__13EPauseBuyMenu(&this->m_PauseBuyMenu);
    Reset__15EPauseBuildMenu(&this->m_PauseBuildMenu);
    Init__15EPauseBuildMenu(&this->m_PauseBuildMenu);
    Reset__17EPauseOptionsMenu(&this->m_PauseOptionsMenu);
    Init__17EPauseOptionsMenu(&this->m_PauseOptionsMenu);
    Reset__14EPauseMainMenu(this_00);
    Init__14EPauseMainMenu(this_00);
    CheckLockStates__14EPauseMainMenu(this_00);
    (**(code **)(*(int *)&this->field_0x38 + 0x7c))
              ((int)(this->m_DialogMenu).m_sTextBuffer.fChars +
               *(short *)(*(int *)&this->field_0x38 + 0x78) + -0x54);
    (**(code **)(*(int *)&this->field_0x38 + 0x74))
              ((int)(this->m_DialogMenu).m_sTextBuffer.fChars +
               *(short *)(*(int *)&this->field_0x38 + 0x70) + -0x54);
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this_00,4,true);
    pPVar1 = this->_vb2317->__vtable;
    (*(code *)pPVar1[1].Panelstateman)((int)&this->_vb2317->m_state + (int)*(short *)(pPVar1 + 1),8)
    ;
  }
  else if (event == UNLOCK_OBJECT_EVENT) {
    UnlockGUID__13EPauseBuyMenui(&this->m_PauseBuyMenu,id);
    UnlockGUID__15EPauseBuildMenui(&this->m_PauseBuildMenu,id);
  }
  return;
}

void EPausePanel::Init() {
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  short sVar5;
  EUIObjectNode__vtable *pEVar6;
  uint uVar7;
  ulong *puVar8;
  EUIStaticTextIcon *pEVar9;
  ERFont *pEVar10;
  ERShader *pEVar11;
  short *psVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  EUIIcon *this_00;
  undefined8 unaff_s4;
  EUIIcon *this_01;
  undefined8 unaff_s5;
  EUIIcon *this_02;
  undefined8 unaff_s6;
  EUIIcon *this_03;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  float local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  __vtbl_ptr_type *local_16c;
  EUIIconDef__vtable *local_160;
  EUIIconDef__vtable *local_150;
  EUIIconDef__vtable *local_140;
  EUIIconDef__vtable *local_130;
  EUIIconDef__vtable *local_120;
  EUIIconDef__vtable *local_110;
  EUIIcon *local_100;
  EUIPrompt *local_fc;
  EUIPrompt *local_f8;
  EUIPrompt *local_f4;
  EUIPrompt *local_f0;
  EUIPrompt *local_ec;
  EPromptBar *local_e8;
  EPromptBar *local_e4;
  EUIIcon *local_e0;
  EUIIcon *local_dc;
  EUIPrompt *local_d8;
  EUIPrompt *local_d4;
  EPromptBar *local_d0;
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
  
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
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
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar10 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar10;
                    /* end of inlined section */
  AddChild__13EUIObjectNodeP13EUIObjectNode
            ((EUIObjectNode *)this,(EUIObjectNode *)&this->m_PauseMainMenu);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  AddChild__13EUIObjectNodeP13EUIObjectNode
            ((EUIObjectNode *)this,&(this->m_PauseBudgetMenu).field0_0x0);
  AddChild__13EUIObjectNodeP13EUIObjectNode
            ((EUIObjectNode *)this,(EUIObjectNode *)&this->m_PauseBuyMenu);
  AddChild__13EUIObjectNodeP13EUIObjectNode
            ((EUIObjectNode *)this,(EUIObjectNode *)&this->m_PauseBuildMenu);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  AddChild__13EUIObjectNodeP13EUIObjectNode
            ((EUIObjectNode *)this,(EUIObjectNode *)&this->m_PauseOptionsMenu);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bCleanUpModelReference = 0;
  this->m_nDisplayMode = 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bHideDialog = 0;
  this_03 = &this->m_XIcon;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  fVar14 = 32.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pBlankShdr = pEVar11;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc1d9c5ed,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pXIcon = pEVar11;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2ccf500a,(EFile *)0x0,0);
  this_02 = &this->m_TriIcon;
                    /* end of inlined section */
  this->m_pTriIcon = pEVar11;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x8b8cc935,(EFile *)0x0,0);
  this_00 = &this->m_SquareIcon;
  this->m_pSquareIcon = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMenuBevelShdr = pEVar11;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_100 = &this->m_TriIcon2;
                    /* end of inlined section */
  local_fc = this->m_PromptsYN;
  local_f8 = this->m_PromptsYN + 1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
  _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
  _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
  _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
  this_01 = &this->m_XIcon2;
  SetStaticShaders__18EPauseCategoryMenu();
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_f4 = this->m_PromptsYNC;
  local_ec = this->m_PromptsYNC + 2;
  local_e8 = &this->m_PromptBarYN;
  local_f0 = this->m_PromptsYNC + 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
  _11EPausePanel_m_ItemInfoTimer = 2.0;
                    /* end of inlined section */
  UpdateAnimation__14EPauseMainMenu(&this->m_PauseMainMenu);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  uVar15 = 0x3f1fd220;
                    /* end of inlined section */
  local_e4 = &this->m_PromptBarYNC;
  *(undefined4 *)&this->m_bDeleteInfo = 0;
  Init__11EDialogMenu(&this->m_DialogMenu);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0 = &this->m_XIcon3;
                    /* end of inlined section */
                    /* end of inlined section */
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"no");
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_dc = &this->m_TriIcon3;
                    /* end of inlined section */
  local_d8 = this->m_Prompts;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_ppNoYesOptions[0] = psVar12;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"yes");
  local_d4 = this->m_Prompts + 1;
  local_d0 = &this->m_PromptBar;
  this->m_ppNoYesOptions[1] = psVar12;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"yes");
  this->m_ppYesNoOptions[0] = psVar12;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"no");
  this->m_ppYesNoOptions[1] = psVar12;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"cancel");
  this->m_ppCancelSaveNoSaveOptions[0] = psVar12;
  psVar12 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"save_prompt");
  this->m_ppCancelSaveNoSaveOptions[1] = psVar12;
  psVar12 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"nosave_prompt");
  this->m_ppCancelSaveNoSaveOptions[2] = psVar12;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"cancel");
  this->m_ppCancelRemove2Options[0] = psVar12;
  psVar12 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"remove_player_2_prompt");
  this->m_ppCancelRemove2Options[1] = psVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_178 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_174 = 1;
  local_170 = 0;
  local_160 = (this->m_XIcon).m_def.__vtable;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_XIcon).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_XIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_XIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_XIcon).m_def.__vtable = local_160;
  local_16c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar13 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_180 = 0.05;
                    /* end of inlined section */
  local_17c = fVar14 / (float)iVar13;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_17c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_03,-0x3e263a13);
  InitInActiveShader__7EUIIconi(this_03,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_174 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_178 = 0;
  local_170 = 0;
  local_150 = (this->m_TriIcon).m_def.__vtable;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_TriIcon).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_TriIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_TriIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_TriIcon).m_def.__vtable = local_150;
  local_16c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar13 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_180 = 0.05;
                    /* end of inlined section */
  local_17c = fVar14 / (float)iVar13;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_17c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_02,0x2ccf500a);
  InitInActiveShader__7EUIIconi(this_02,0x2ccf500a);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_174 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_178 = 0;
  local_170 = 0;
  local_140 = (this->m_SquareIcon).m_def.__vtable;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_SquareIcon).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_SquareIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_SquareIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_SquareIcon).m_def.__vtable = local_140;
  local_16c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar13 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SquareIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_180 = 0.05;
                    /* end of inlined section */
  local_17c = fVar14 / (float)iVar13;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SquareIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_17c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_00,-0x747336cb);
  InitInActiveShader__7EUIIconi(this_00,-0x747336cb);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_178 = 0;
  local_174 = 1;
  local_170 = 0;
  local_130 = (this->m_XIcon2).m_def.__vtable;
  puVar1 = (undefined *)((int)&(this->m_XIcon2).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_XIcon2).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon2).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_XIcon2).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon2).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_XIcon2).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_XIcon2).m_def.__vtable = local_130;
  local_16c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar13 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon2).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_180 = 0.05;
                    /* end of inlined section */
  local_17c = fVar14 / (float)iVar13;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon2).field0_0x0.m_WDH.field0_0x0.d[2] = local_17c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_01,-0x3e263a13);
  InitInActiveShader__7EUIIconi(this_01,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_174 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_178 = 0;
  local_170 = 0;
  local_120 = (local_100->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_TriIcon2).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_TriIcon2).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon2).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_TriIcon2).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon2).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_TriIcon2).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (local_100->m_def).__vtable = local_120;
  local_16c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar13 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon2).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_180 = 0.05;
                    /* end of inlined section */
  local_17c = fVar14 / (float)iVar13;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon2).field0_0x0.m_WDH.field0_0x0.d[2] = local_17c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_100,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_100,0x2ccf500a);
  pEVar6 = this->m_PromptsYN[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_fc->field0_0x0;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"yes");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar12,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_fc,this_03);
  pEVar6 = this->m_PromptsYN[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_f8->field0_0x0;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"no");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar12,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_f8,this_02);
  pEVar6 = this->m_PromptsYNC[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_f4->field0_0x0;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"yes");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar12,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_f4,this_01);
  pEVar6 = this->m_PromptsYNC[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_f0->field0_0x0;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"no");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar12,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_f0,this_00);
  pEVar6 = this->m_PromptsYNC[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_ec->field0_0x0;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"cancel");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar12,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_ec,local_100);
  Init__10EPromptBar(local_e8);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_180 = 0.5;
  local_17c = (float)uVar15;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_e8,local_fc,2,(EVec2 *)&local_180);
  Init__10EPromptBar(local_e4);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_180 = 0.5;
  local_17c = (float)uVar15;
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_e4,local_f4,3,(EVec2 *)&local_180);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_174 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_178 = 0;
  local_170 = 0;
  local_110 = (local_e0->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_XIcon3).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_XIcon3).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon3).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_XIcon3).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon3).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_XIcon3).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (local_e0->m_def).__vtable = local_110;
  local_16c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar13 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon3).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_180 = 0.05;
                    /* end of inlined section */
  local_17c = fVar14 / (float)iVar13;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon3).field0_0x0.m_WDH.field0_0x0.d[2] = local_17c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_e0,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_e0,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_174 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_178 = 0;
  local_170 = 0;
  local_160 = (local_dc->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_TriIcon3).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_TriIcon3).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon3).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_TriIcon3).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon3).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_TriIcon3).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (local_dc->m_def).__vtable = local_160;
  local_16c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar13 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon3).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_180 = 0.05;
                    /* end of inlined section */
  local_17c = fVar14 / (float)iVar13;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon3).field0_0x0.m_WDH.field0_0x0.d[2] = local_17c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_dc,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_dc,0x2ccf500a);
  pEVar6 = this->m_Prompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_d8->field0_0x0;
  psVar12 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"select_action_prompt");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar12,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_d8,local_e0);
  pEVar6 = this->m_Prompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_d4->field0_0x0;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"cancel");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar12,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_d4,local_dc);
  Init__10EPromptBar(local_d0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  local_180 = (_13EUIObjectNode_SAFE_RIGHT + 0.178) * 0.5;
  local_17c = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_d0,local_d8,2,(EVec2 *)&local_180);
  return;
}

void EPausePanel::Update() {
	bool bResetDPad;
	int nReturn;
	Panelstate state;
	float StickX;
	float StickY;
	EVec3 vStick;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EPauseItemInfo *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ESimsCam *pEVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  EVec3 vStick;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
  bVar4 = false;
                    /* end of inlined section */
  if (1 < this->_vb2317->m_state + ~LIVE_SIM_EDIT) {
    return;
  }
  switch(this->m_nDisplayMode) {
  case 0:
    if (_pPauseMenu != (EPauseMenu *)0x0) {
      pEVar3 = (_pPauseMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar3->SetBoxDims)
                ((int)(_pPauseMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar3->SetPos + -0x44);
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar8 = (*(code *)pEVar1[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                         _globals.m_whichPlayerPaused,0x810);
      if (lVar8 != 0) {
        if (this->_vb2317->m_state == PAUSED_CURSOR_STATE) {
          if (_pPauseMenu != (EPauseMenu *)0x0) {
            pEVar3 = (_pPauseMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
            (*(code *)pEVar3->Draw)
                      ((int)(_pPauseMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                       *(short *)&pEVar3->Update + -0x44,3);
          }
          _pPauseMenu = (EPauseMenu *)0x0;
          iVar6 = *(int *)(*(int *)&this->field_0x8 + 0x38);
          (**(code **)(iVar6 + 0x3c))
                    (*(int *)&this->field_0x8 + (int)*(short *)(iVar6 + 0x38),0,0x25);
        }
        else {
          if (_pPauseMenu != (EPauseMenu *)0x0) {
            pEVar3 = (_pPauseMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
            (*(code *)pEVar3->Draw)
                      ((int)(_pPauseMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                       *(short *)&pEVar3->Update + -0x44,3);
          }
          _pPauseMenu = (EPauseMenu *)0x0;
          iVar6 = *(int *)(*(int *)&this->field_0x8 + 0x38);
          (**(code **)(iVar6 + 0x3c))
                    (*(int *)&this->field_0x8 + (int)*(short *)(iVar6 + 0x38),0,0x23);
        }
      }
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar8 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                       0x810);
    if ((lVar8 != 0) && (this->_vb2317->m_state == PAUSED_CURSOR_STATE)) {
      if (_pPauseMenu != (EPauseMenu *)0x0) {
        pEVar3 = (_pPauseMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar3->Draw)
                  ((int)(_pPauseMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                   *(short *)&pEVar3->Update + -0x44,3);
      }
      _pPauseMenu = (EPauseMenu *)0x0;
      iVar6 = *(int *)(*(int *)&this->field_0x8 + 0x38);
      (**(code **)(iVar6 + 0x3c))(*(int *)&this->field_0x8 + (int)*(short *)(iVar6 + 0x38),0,0x25);
    }
    if (((_pPauseMenu != (EPauseMenu *)0x0) &&
        (bVar5 = InMainMenu__10EPauseMenu(_pPauseMenu), bVar5)) &&
       (this->_vb2317->m_state != PAUSED_CURSOR_STATE)) {
      fVar10 = GetStick__11EControllerii(_ctrlPads[0],0,0);
      fVar11 = GetStick__11EControllerii(_ctrlPads[0],0,1);
      fVar11 = ABS(fVar11) * fVar11;
      pEVar7 = GetCam__7EGlobal(&_globals);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
      fVar10 = fVar10 * ABS(fVar10) * pEVar7->m_transSpeed * _dt;
      pEVar7 = GetCam__7EGlobal(&_globals);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* end of inlined section */
      if ((fVar10 != 0.0) || (fVar11 * pEVar7->m_transSpeed * _dt != 0.0)) {
        iVar6 = *(int *)(*(int *)&this->field_0x8 + 0x38);
        (**(code **)(iVar6 + 0x3c))(*(int *)&this->field_0x8 + (int)*(short *)(iVar6 + 0x38),0,0x24)
        ;
      }
    }
    break;
  case 1:
    Update__14EPauseMainMenu(&this->m_PauseMainMenu);
    break;
  case 2:
    iVar6 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
    if (*(int *)&this->m_bCheckSavedSuccess == 1) {
      if (*(int *)&(_globals.m_pMemCard)->m_bSaveSuccessful != 1) {
        *(undefined4 *)&this->m_bCheckSavedSuccess = 0;
        *(undefined4 *)&this->m_bHideDialog = 0;
        goto LAB_001b1a90;
      }
      this->m_nDisplayMode = 1;
LAB_001b17cc:
      bVar4 = true;
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
    }
    else {
      if (iVar6 == -2) {
        this->m_nDisplayMode = 1;
        goto LAB_001b17cc;
      }
      if (-1 < iVar6) {
        if (iVar6 == 0) {
          this->m_nDisplayMode = 1;
          goto LAB_001b17cc;
        }
        if (iVar6 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          (*(code *)_5Globs_pNeighborhood->__vtable->GetNeighborData)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetNeighborSelector,
                     _5Globs_pNghResFile);
          SetSaveNeighborhoodAndConfigMode__12ESimsMemCard(_globals.m_pMemCard);
          *(undefined4 *)&this->m_bHideDialog = 1;
          *(undefined4 *)&this->m_bCheckSavedSuccess = 1;
        }
      }
    }
    goto LAB_001b1a90;
  case 3:
    Update__14EPauseMainMenu(&this->m_PauseMainMenu);
    pEVar3 = (this->m_pItemInfo->field0_0x0).__vtable;
    (*(code *)pEVar3->SetBoxDims)
              ((int)&(this->m_pItemInfo->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar3->SetPos);
    break;
  case 4:
    Update__14EPauseMainMenu(&this->m_PauseMainMenu);
    Update__16EPauseBudgetMenu(&this->m_PauseBudgetMenu);
    break;
  case 5:
    _11EPausePanel_m_ItemInfoTimer = _11EPausePanel_m_ItemInfoTimer - _dt;
    if (_11EPausePanel_m_ItemInfoTimer < 0.0) {
      _11EPausePanel_m_ItemInfoTimer = 0.0;
    }
    Update__14EPauseMainMenu(&this->m_PauseMainMenu);
    Update__13EPauseBuyMenu(&this->m_PauseBuyMenu);
    break;
  case 6:
    _11EPausePanel_m_ItemInfoTimer = _11EPausePanel_m_ItemInfoTimer - _dt;
    if (_11EPausePanel_m_ItemInfoTimer < 0.0) {
      _11EPausePanel_m_ItemInfoTimer = 0.0;
    }
    Update__14EPauseMainMenu(&this->m_PauseMainMenu);
    Update__15EPauseBuildMenu(&this->m_PauseBuildMenu);
    break;
  case 7:
    Update__14EPauseMainMenu(&this->m_PauseMainMenu);
    Update__17EPauseOptionsMenu(&this->m_PauseOptionsMenu);
    break;
  case 8:
    iVar6 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
    if (iVar6 == -2) {
      this->m_nDisplayMode = 1;
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
      bVar4 = true;
      iVar9 = _globals._324_4_;
    }
    else {
      iVar9 = _globals._324_4_;
      if (-1 < iVar6) {
        if (iVar6 == 0) {
          this->m_nDisplayMode = 1;
          bVar4 = true;
          SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
          iVar9 = _globals._324_4_;
        }
        else if (iVar6 == 1) {
          _globals._324_4_ = iVar6;
          this->m_nDisplayMode = 1;
          bVar4 = true;
          SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
          iVar9 = _globals._324_4_;
        }
      }
    }
    goto LAB_001b1a88;
  case 9:
    iVar6 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
    if (iVar6 == -2) {
      this->m_nDisplayMode = 1;
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
LAB_001b19e0:
      bVar4 = true;
      iVar9 = _globals._328_4_;
    }
    else {
      iVar9 = _globals._328_4_;
      if (-1 < iVar6) {
        if (iVar6 == 0) {
          this->m_nDisplayMode = 1;
LAB_001b1a78:
          bVar4 = true;
          SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
          iVar9 = _globals._328_4_;
        }
        else if (iVar6 == 1) {
          _globals._328_4_ = iVar6;
          this->m_nDisplayMode = 1;
          bVar4 = true;
          SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
          iVar9 = _globals._328_4_;
        }
      }
    }
    goto LAB_001b1a88;
  case 10:
    iVar6 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
    if (*(int *)&this->m_bCheckSavedSuccess == 1) {
      if (*(int *)&(_globals.m_pMemCard)->m_bSaveSuccessful == 1) {
        this->m_nDisplayMode = 1;
        bVar4 = true;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
        _globals._328_4_ = 1;
        iVar9 = _globals._328_4_;
      }
      else {
        *(undefined4 *)&this->m_bCheckSavedSuccess = 0;
        *(undefined4 *)&this->m_bHideDialog = 0;
        iVar9 = _globals._328_4_;
      }
    }
    else {
      if (iVar6 == -2) {
        this->m_nDisplayMode = 1;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
        goto LAB_001b19e0;
      }
      iVar9 = _globals._328_4_;
      if (-1 < iVar6) {
        if (iVar6 == 0) {
          this->m_nDisplayMode = 1;
          SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
          bVar4 = true;
          iVar9 = _globals._328_4_;
        }
        else if (iVar6 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          (*(code *)_5Globs_pNeighborhood->__vtable->GetNeighborData)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetNeighborSelector,
                     _5Globs_pNghResFile);
          SetSaveNeighborhoodAndConfigMode__12ESimsMemCard(_globals.m_pMemCard);
          *(undefined4 *)&this->m_bHideDialog = 1;
          *(undefined4 *)&this->m_bCheckSavedSuccess = 1;
          iVar9 = _globals._328_4_;
        }
        else if (iVar6 == 2) {
          _globals._328_4_ = 1;
          this->m_nDisplayMode = 1;
          goto LAB_001b1a78;
        }
      }
    }
LAB_001b1a88:
    if (iVar9 == 0) {
LAB_001b1a90:
      Update__14EPauseMainMenu(&this->m_PauseMainMenu);
    }
    break;
  case 0xc:
    iVar6 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
    if (iVar6 == -2) {
      this->m_nDisplayMode = 1;
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
      bVar4 = true;
    }
    else if (-1 < iVar6) {
      if (iVar6 == 0) {
        this->m_nDisplayMode = 1;
        bVar4 = true;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
      }
      else if (iVar6 == 1) {
        Message__7EGlobalPvUi(&_globals,(void *)0x0,0x2f);
        bVar4 = true;
        this->m_nDisplayMode = 1;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_PauseMainMenu,4,true);
        iVar6 = *(int *)(*(int *)&this->field_0x8 + 0x38);
        (**(code **)(iVar6 + 0x3c))(*(int *)&this->field_0x8 + (int)*(short *)(iVar6 + 0x38),0,0x23)
        ;
      }
    }
  }
  UpdateAnimation__14EPauseMainMenu(&this->m_PauseMainMenu);
  if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
    _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
    _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
    _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
    _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
                    /* end of inlined section */
    iVar6 = *(int *)&this->m_bDeleteInfo;
  }
  else {
    iVar6 = *(int *)&this->m_bDeleteInfo;
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)&this->m_bCleanUpModelReference;
  }
  else {
    pEVar2 = this->m_pItemInfo;
    if (pEVar2 != (EPauseItemInfo *)0x0) {
      pEVar3 = (pEVar2->field0_0x0).__vtable;
      (*(code *)pEVar3->Draw)
                ((int)&(pEVar2->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar3->Update,3);
    }
    this->m_pItemInfo = (EPauseItemInfo *)0x0;
    *(undefined4 *)&this->m_bDeleteInfo = 0;
    iVar6 = *(int *)&this->m_bCleanUpModelReference;
  }
  if (iVar6 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pObjectFolder->__vtable->GetLeadSelector)
              ((int)&_5Globs_pObjectFolder->__vtable +
               (int)*(short *)&_5Globs_pObjectFolder->__vtable->GetSubTileSelector);
    *(undefined4 *)&this->m_bCleanUpModelReference = 0;
  }
  return;
}

void EPausePanel::Draw(ERC *prc) {
	bool bDrawPrompts;
	Panelstate state;
	EGraphics *this;
	EGraphics *this;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EPauseItemInfo *pEVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar4;
  undefined4 uVar5;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if (1 < this->_vb2317->m_state + ~LIVE_SIM_EDIT) {
    return;
  }
  bVar1 = false;
  switch(this->m_nDisplayMode) {
  case 0:
    if (_pPauseMenu == (EPauseMenu *)0x0) break;
    pEVar2 = (_pPauseMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
    pEVar3 = (EPauseItemInfo *)_pPauseMenu;
    goto LAB_001b2070;
  case 1:
    Draw__14EPauseMainMenuP3ERC(&this->m_PauseMainMenu,prc);
    break;
  case 2:
  case 8:
  case 9:
  case 10:
  case 0xc:
    Draw__14EPauseMainMenuP3ERC(&this->m_PauseMainMenu,prc);
    if (*(int *)&this->m_bHideDialog == 0) {
      bVar1 = true;
      DialogDraw__11EDialogMenuP3ERCb(&this->m_DialogMenu,prc,false);
    }
    break;
  case 3:
    Draw__14EPauseMainMenuP3ERC(&this->m_PauseMainMenu,prc);
    pEVar2 = (((EUIScrollMenu *)&this->m_pItemInfo->field0_0x0)->field0_0x0).field0_0x0.__vtable;
    pEVar3 = this->m_pItemInfo;
LAB_001b2070:
    (*(code *)pEVar2->Message)
              ((int)(((EUIScrollMenu *)&pEVar3->field0_0x0)->field0_0x0).m_maxBackShdrSize +
               *(short *)&pEVar2->SetBoxDims + -0x44,prc);
    break;
  case 4:
    Draw__14EPauseMainMenuP3ERC(&this->m_PauseMainMenu,prc);
    Draw__16EPauseBudgetMenuP3ERC(&this->m_PauseBudgetMenu,prc);
    break;
  case 5:
    Draw__14EPauseMainMenuP3ERC(&this->m_PauseMainMenu,prc);
    Draw__13EPauseBuyMenuP3ERC(&this->m_PauseBuyMenu,prc);
    break;
  case 6:
    Draw__14EPauseMainMenuP3ERC(&this->m_PauseMainMenu,prc);
    Draw__15EPauseBuildMenuP3ERC(&this->m_PauseBuildMenu,prc);
    break;
  case 7:
    Draw__14EPauseMainMenuP3ERC(&this->m_PauseMainMenu,prc);
    Draw__17EPauseOptionsMenuP3ERC(&this->m_PauseOptionsMenu,prc);
  }
  if (bVar1) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    uVar5 = 0x3e3645a2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0 = 0x3e3645a2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = 0x3f800000;
                    /* end of inlined section */
    local_ac = _13EUIObjectNode_SAFE_BOTTOM - 46.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_9c = 0x3f800000;
    local_90 = 0;
    local_8c = 0x3f800000;
    local_7c = 0;
    local_80 = 0x3f800000;
                    /* end of inlined section */
    fVar4 = _13EUIObjectNode_SAFE_BOTTOM;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_b0,&local_a0,
               &local_90,&local_80,0x35f4b0);
    Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = 0x4003851f;
                    /* end of inlined section */
    local_ac = fVar4 - 50.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_9c = 0x3f000000;
    local_64 = 0x3f800000;
    local_68 = 0x3f800000;
    local_6c = 0x3f800000;
    local_70 = 0x3f800000;
                    /* end of inlined section */
    local_b0 = uVar5;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_b0,&local_a0,
               &local_70);
    Draw__10EPromptBarP3ERC(&this->m_PromptBar,prc);
  }
  return;
}

void EPausePanel::Reset() {
  ERShader *pEVar1;
  
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
  (**(code **)(*(int *)&this->field_0x38 + 0x6c))
            ((int)(this->m_DialogMenu).m_sTextBuffer.fChars +
             *(short *)(*(int *)&this->field_0x38 + 0x68) + -0x54,&this->m_PauseMainMenu);
  (**(code **)(*(int *)&this->field_0x38 + 0x6c))
            ((int)(this->m_DialogMenu).m_sTextBuffer.fChars +
             *(short *)(*(int *)&this->field_0x38 + 0x68) + -0x54,&this->m_PauseBudgetMenu);
  (**(code **)(*(int *)&this->field_0x38 + 0x6c))
            ((int)(this->m_DialogMenu).m_sTextBuffer.fChars +
             *(short *)(*(int *)&this->field_0x38 + 0x68) + -0x54,&this->m_PauseBuyMenu);
  (**(code **)(*(int *)&this->field_0x38 + 0x6c))
            ((int)(this->m_DialogMenu).m_sTextBuffer.fChars +
             *(short *)(*(int *)&this->field_0x38 + 0x68) + -0x54,&this->m_PauseBuildMenu);
  (**(code **)(*(int *)&this->field_0x38 + 0x6c))
            ((int)(this->m_DialogMenu).m_sTextBuffer.fChars +
             *(short *)(*(int *)&this->field_0x38 + 0x68) + -0x54,&this->m_PauseOptionsMenu);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsYN);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsYN + 1));
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsYNC);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsYNC + 1));
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsYNC + 2));
  Reset__10EPromptBar(&this->m_PromptBarYN);
  Reset__10EPromptBar(&this->m_PromptBarYNC);
  while (this->m_pSquareIcon != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pSquareIcon->field0_0x0);
    this->m_pSquareIcon = (ERShader *)0x0;
  }
  pEVar1 = this->m_pTriIcon;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pTriIcon = (ERShader *)0x0;
    pEVar1 = this->m_pTriIcon;
  }
  pEVar1 = this->m_pXIcon;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pXIcon = (ERShader *)0x0;
    pEVar1 = this->m_pXIcon;
  }
  pEVar1 = this->m_pBlankShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
    pEVar1 = this->m_pBlankShdr;
  }
  pEVar1 = this->m_pMenuBevelShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pMenuBevelShdr = (ERShader *)0x0;
    pEVar1 = this->m_pMenuBevelShdr;
  }
  DelRefStaticShaders__18EPauseCategoryMenu();
  Reset__10EPromptBar(&this->m_PromptBar);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_Prompts);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_Prompts + 1));
  return;
}

void EPausePanel::Message(EUIObjectNode *pChild, u32 messId) {
	void *result;
	
  int iVar1;
  
  if (messId < 0x1c) {
                    /* WARNING: Could not recover jumptable at 0x001b2474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003b2b40)[messId])((&PTR_LAB_003b2b40)[messId],pChild);
    return;
  }
  iVar1 = *(int *)(*(int *)&this->field_0x8 + 0x38);
  (**(code **)(iVar1 + 0x3c))(*(int *)&this->field_0x8 + (int)*(short *)(iVar1 + 0x38),0);
  return;
}

void EPausePanel::DrawGenericMessageBox(ERC *prc, c16 *Title, c16 *Line1, c16 *Line2, u8 nDialogMode) {
	static EVec2 vTopLeft;
	static EVec2 vTopLeftMessage;
	static EVec2 vWHDialog;
	static EVec2 vWHMessageBack;
	static EVec2 vWHMessageBox;
	static EVec2 vWTitleBar;
	static EVec2 vWPromptBar;
	static float m_fontSize = 15.f;
	static float m_promptoff = 0.025f;
	EVec2 vBigBoxTL;
	EVec2 vBigBoxBR;
	float dialogCenterX;
	EVec2 vposPrompt;
	EVec2 titleStringWH;
	float titleStringw;
	EVec2 vTitleBack;
	float promptBackW;
	EVec2 Pos;
	EVec2 Dimensions;
	u16 *szString;
	ERFont *this;
	ERFont *this;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ERFont *pEVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  float _y;
  float _x;
  float fVar8;
  float fVar9;
  EVec2 vBigBoxTL;
  EVec2 vBigBoxBR;
  EVec2 vposPrompt;
  EVec2 titleStringWH;
  EVec2 vTitleBack;
  EVec2 Pos;
  EVec2 Dimensions;
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
  
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_d0._80_4_ = (EFontSize *)unaff_s4;
  local_d0._84_4_ = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_d0._64_4_ = (EFontSize *)unaff_s3;
  local_d0._68_4_ = (uint)((ulong)unaff_s3 >> 0x20);
  local_d0._48_4_ = (EHashTableNode **)unaff_s2;
  local_d0._52_4_ = (uint)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_d0._32_4_ = (int)unaff_s1;
  local_d0._36_4_ = (int)((ulong)unaff_s1 >> 0x20);
  local_d0._16_4_ = (EFontSize *)unaff_s0;
  local_d0._20_4_ = (EStorable__vtable *)((ulong)unaff_s0 >> 0x20);
  if (__tmp_0_3433 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vTopLeft_3432 = 0.184375;
    DAT_003d07fc = 0.1875;
                    /* end of inlined section */
    __tmp_0_3433 = 1;
  }
  if (__tmp_1_3435 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vTopLeftMessage_3434 = 0.2;
    DAT_003d0804 = 0.28;
                    /* end of inlined section */
    __tmp_1_3435 = 1;
  }
  if (__tmp_2_3437 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vWHDialog_3436 = 0.6390625;
    DAT_003d080c = 0.49375;
                    /* end of inlined section */
    __tmp_2_3437 = 1;
  }
  if (__tmp_3_3439 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vWHMessageBack_3438 = 0x3f0af5c3;
    DAT_003d0814 = 0x3e8851eb;
                    /* end of inlined section */
    __tmp_3_3439 = 1;
  }
  if (__tmp_4_3441 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vWHMessageBox_3440 = 0.603125;
    DAT_003d081c = 0.2958333;
                    /* end of inlined section */
    __tmp_4_3441 = 1;
  }
  if (__tmp_5_3443 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vWTitleBar_3442 = 0.603125;
    DAT_003d0824 = 0.05;
                    /* end of inlined section */
    __tmp_5_3443 = 1;
  }
  if (__tmp_6_3445 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vWPromptBar_3444 = 0x3f1a6666;
    DAT_003d082c = 0x3d4ccccd;
                    /* end of inlined section */
    __tmp_6_3445 = 1;
  }
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,vTopLeft_3432,DAT_003d07fc,vTopLeft_3432 + vWHDialog_3436,
             DAT_003d07fc + DAT_003d080c,1.0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar8 = vTopLeftMessage_3434 + vWTitleBar_3442 * 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&titleStringWH,_globals.m_pFont,SUB41(Title,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  fVar9 = 0.2;
  titleStringWH.field0_0x0.d[0] = titleStringWH.field0_0x0.d[0] + 0.1;
  if (0.2 <= titleStringWH.field0_0x0.d[0]) {
    fVar9 = (float)((int)titleStringWH.field0_0x0.d[0] *
                    (uint)(titleStringWH.field0_0x0.d[0] < vWTitleBar_3442) |
                   (int)vWTitleBar_3442 * (uint)(titleStringWH.field0_0x0.d[0] >= vWTitleBar_3442));
  }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  _x = fVar8 - fVar9 * 0.5;
  _y = DAT_003d0804 - (DAT_003d0824 + 0.01);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetSize__6ERFontffb(_globals.m_pFont,m_fontSize_3446,1.0,true);
  uVar7 = _WHITE.field0_0x0.d[3];
  uVar6 = _WHITE.field0_0x0.d[2];
  uVar5 = _WHITE.field0_0x0._0_8_;
  pEVar4 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar4->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar4->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar4->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  DrawTextBox__10EDialogWinP3ERCffff(prc,_x,_y,fVar9,1.0);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  Pos.field0_0x0.d[1] = 1.0;
  Pos.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,vTopLeftMessage_3434,DAT_003d0804,DAT_003d081c,vWHMessageBox_3440,1.0,(EVec4 *)&Pos
            );
  if (nDialogMode == '\0') {
    Draw__10EPromptBarP3ERC(&this->m_PromptBarYN,prc);
  }
  else if (nDialogMode == '\x01') {
    Draw__10EPromptBarP3ERC(&this->m_PromptBarYNC,prc);
  }
  fVar9 = 0.5;
  SetSize__6ERFontffb(_globals.m_pFont,m_fontSize_3446,1.0,true);
  uVar7 = _WHITE.field0_0x0.d[3];
  uVar6 = _WHITE.field0_0x0.d[2];
  uVar5 = _WHITE.field0_0x0._0_8_;
  pEVar4 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar4->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar4->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar4->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&Dimensions,_globals.m_pFont,SUB41(Title,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  Pos.field0_0x0.d[1] = DAT_003d0804 - DAT_003d0824;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  Pos.field0_0x0.d[0] = fVar8 - Dimensions.field0_0x0.d[0] * fVar9;
  local_d0._0_4_ = (EStorable__vtable *)Pos.field0_0x0.d[0];
  local_d0._4_4_ = (EStorable__vtable *)Pos.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,Title,true,(EVec2 *)(ERFont *)local_d0,E_FAX_LEFT,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  SetSize__6ERFontffb(this->m_pFont,15.0,1.0,true);
  if (Line1 != (short *)0x0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_d0,_globals.m_pFont,SUB41(Line1,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_d0._4_4_,local_d0._0_4_);
    puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)Dimensions.field0_0x0 >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[1] = vTopLeftMessage_3434 + 0.16;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[0] = fVar8 - (float)local_d0._0_4_ * fVar9;
    local_d0._0_4_ = (EStorable__vtable *)Pos.field0_0x0.d[0];
    local_d0._4_4_ = (EStorable__vtable *)Pos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,Line1,true,(EVec2 *)(ERFont *)local_d0,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
  }
                    /* end of inlined section */
  if (Line2 != (short *)0x0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_d0,_globals.m_pFont,SUB41(Line2,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_d0._4_4_,local_d0._0_4_);
    puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)Dimensions.field0_0x0 >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[1] = vTopLeftMessage_3434 + 0.21;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[0] = fVar8 - (float)local_d0._0_4_ * fVar9;
    local_d0._0_4_ = (EStorable__vtable *)Pos.field0_0x0.d[0];
    local_d0._4_4_ = (EStorable__vtable *)Pos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,Line2,true,(EVec2 *)(ERFont *)local_d0,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
  }
                    /* end of inlined section */
  return;
}

ERShader* EGlobal::GetBuyBuildDPadUp() {
  return _11EPausePanel_m_pDPadUp;
}

ERShader* EGlobal::GetBuyBuildDPadDown() {
  return _11EPausePanel_m_pDPadDown;
}

ERShader* EGlobal::GetBuyBuildDPadLeft() {
  return _11EPausePanel_m_pDPadLeft;
}

ERShader* EGlobal::GetBuyBuildDPadRight() {
  return _11EPausePanel_m_pDPadRight;
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

void Panelstateman::~Panelstateman(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EPausePanel::ResetItemInfoTimer() {
  _11EPausePanel_m_ItemInfoTimer = 2.0;
  return;
}

float EPausePanel::GetItemInfoTimer() {
  return _11EPausePanel_m_ItemInfoTimer;
}

ERShader* EPausePanel::GetShaderDPadUp() {
  return _11EPausePanel_m_pDPadUp;
}

ERShader* EPausePanel::GetShaderDPadDown() {
  return _11EPausePanel_m_pDPadDown;
}

ERShader* EPausePanel::GetShaderDPadLeft() {
  return _11EPausePanel_m_pDPadLeft;
}

ERShader* EPausePanel::GetShaderDPadRight() {
  return _11EPausePanel_m_pDPadRight;
}

void EPausePanel::SetDPadUp(bool bOn) {
  _11EPausePanel_m_pDPadUp = _7DPadWin_m_pUpShdr;
  if (!bOn) {
    _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
  }
  return;
}

void EPausePanel::SetDPadDown(bool bOn) {
  _11EPausePanel_m_pDPadDown = _7DPadWin_m_pDownShdr;
  if (!bOn) {
    _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
  }
  return;
}

void EPausePanel::SetDPadLeft(bool bOn) {
  _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
  if (!bOn) {
    _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
  }
  return;
}

void EPausePanel::SetDPadRight(bool bOn) {
  _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
  if (!bOn) {
    _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
  }
  return;
}
