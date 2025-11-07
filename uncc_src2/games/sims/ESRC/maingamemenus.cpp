// STATUS: NOT STARTED

#include "maingamemenus.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb4142;
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

EVec4 _vGlowColor = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

__vtbl_ptr_type EGameMenuMainPanel virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuMainPanel::~EGameMenuMainPanel,
		/* .__delta2 = */ 18448
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
		/* .__pfn = */ &EGameMenuMainPanel::Draw,
		/* .__delta2 = */ 25024
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGameMenuMainMenu virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuMainMenu::~EGameMenuMainMenu,
		/* .__delta2 = */ 9704
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuMainMenu::Update,
		/* .__delta2 = */ 10248
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuMainMenu::Draw,
		/* .__delta2 = */ 11568
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGameMenuCredits virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuCredits::~EGameMenuCredits,
		/* .__delta2 = */ 7056
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuCredits::Update,
		/* .__delta2 = */ 7424
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuCredits::Draw,
		/* .__delta2 = */ 7936
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGameMenuSandboxMenu virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuSandboxMenu::~EGameMenuSandboxMenu,
		/* .__delta2 = */ 4416
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuSandboxMenu::Update,
		/* .__delta2 = */ 4784
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuSandboxMenu::Draw,
		/* .__delta2 = */ 5304
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGameMenuBonusMenu virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuBonusMenu::~EGameMenuBonusMenu,
		/* .__delta2 = */ -2368
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuBonusMenu::Update,
		/* .__delta2 = */ -8
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuBonusMenu::Draw,
		/* .__delta2 = */ 1904
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGameMenuStoryMenu virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuStoryMenu::~EGameMenuStoryMenu,
		/* .__delta2 = */ -6024
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuStoryMenu::Update,
		/* .__delta2 = */ -5272
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuStoryMenu::Draw,
		/* .__delta2 = */ -4664
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGameMenuOptions virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuOptions::~EGameMenuOptions,
		/* .__delta2 = */ -11944
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuOptions::Update,
		/* .__delta2 = */ -9264
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuOptions::Draw,
		/* .__delta2 = */ -7664
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
		/* .__pfn = */ &EUIMenu::SetBoxDims,
		/* .__delta2 = */ 8880
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetBoxDims,
		/* .__delta2 = */ 8944
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameMenuOptions::Message,
		/* .__delta2 = */ -6432
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
		/* .__pfn = */ &EUIMenu::OnButtonRepeat,
		/* .__delta2 = */ 11384
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::OnStickRepeat,
		/* .__delta2 = */ 11496
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
		/* .__pfn = */ &EUIMenu::AddChild,
		/* .__delta2 = */ 11632
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
		/* .__pfn = */ &EUIMenu::RemoveAllOpts,
		/* .__delta2 = */ 7024
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::RemoveOpt,
		/* .__delta2 = */ 8688
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::AddOpt,
		/* .__delta2 = */ 8456
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetPositions,
		/* .__delta2 = */ 9000
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetCurOpt,
		/* .__delta2 = */ 7336
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetLayout,
		/* .__delta2 = */ 11688
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetStick,
		/* .__delta2 = */ 11960
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::NextItem,
		/* .__delta2 = */ 11968
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::PrevItem,
		/* .__delta2 = */ 12000
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::ProcessStickAndButtonAutoRepeat,
		/* .__delta2 = */ 11080
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EChallengeMenuItem virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EChallengeMenuItem::~EChallengeMenuItem,
		/* .__delta2 = */ -12712
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIcon::Update,
		/* .__delta2 = */ 13552
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EChallengeMenuItem::Draw,
		/* .__delta2 = */ -12624
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
		/* .__pfn = */ &EChallengeMenuItem::SetText,
		/* .__delta2 = */ -12152
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

EChallengeMenuItem* EChallengeMenuItem::EChallengeMenuItem() {
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EUIVirtualCtrl *pCtrl;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  ulong *puVar6;
  EUIIconDef__vtable *local_110;
  undefined4 local_10c;
  undefined4 local_108;
  EUITextIconDef local_100;
  EUIIconDef local_e0;
  EUIIconDef icondef;
  EUITextIconDef textdef;
  
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_100.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_108 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_10c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_110 = (EUIIconDef__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_100.m_xAlign = E_FAX_LEFT;
  local_100.m_yAlign = E_FAY_TOP;
  local_100.m_pointsize = 12.0;
  local_100.m_selColorIdx = 0;
  local_100.m_colorIdx = 1;
  local_100.m_retChar = -1;
  local_e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_e0.m_flags = 0;
  local_e0.m_trigger = 0x40;
  local_e0.m_selColorIdx = 0;
  local_e0.m_colorIdx = 1;
                    /* end of inlined section */
  local_e0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&this->field0_0x0,&local_100,&local_e0,-1,(EVec3 *)&local_110);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_18EChallengeMenuItem;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_selColorIdx = 1;
  icondef.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
  textdef.m_maxChars = 0x20;
  textdef.m_xAlign = E_FAX_LEFT;
  textdef.m_yAlign = E_FAY_TOP;
  textdef.m_selColorIdx = 6;
  textdef.m_pointsize = 16.0;
  textdef.m_colorIdx = 1;
                    /* end of inlined section */
  textdef.m_retChar = -1;
  SetFont__11EUITextIconi((EUITextIcon *)this,-0x2080f4e9);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110 = (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_10c = 0x3d23d70a;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] = 0.25;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = 0.04;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar5) * 8;
  pEVar2 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def;
  uVar5 = (uint)pEVar2 & 7;
  puVar6 = (ulong *)((int)pEVar2 - uVar5);
  *puVar6 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar5) * 8;
  piVar3 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar5 = (uint)piVar3 & 7;
  puVar6 = (ulong *)((int)piVar3 - uVar5);
  *puVar6 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar5) * 8;
  ppEVar4 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar5 = (uint)ppEVar4 & 7;
  puVar6 = (ulong *)((int)ppEVar4 - uVar5);
  *puVar6 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_110;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&this->field0_0x0,&textdef);
  InitString__17EUIStaticTextIconPCUsi(&this->field0_0x0,(short *)0x0,0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_nData = '\0';
  return this;
}

void EChallengeMenuItem::~EChallengeMenuItem(int __in_chrg) {
	EUIStaticTextIcon *this;
	void *ptr;
	
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)this,0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EChallengeMenuItem::Draw(ERC *prc) {
	EVec2 vPos;
	ERFont *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EFontAlignX xAlign;
	EFontAlignY yAlign;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EFontAlignX xAlign;
	EFontAlignY yAlign;
	
  undefined *puVar1;
  char *szString;
  uint uVar2;
  ulong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ERFont *pEVar7;
  short *psVar8;
  EWindow *pWin;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar9;
  float fVar10;
  EVec2 vPos;
  EStorable__vtable *local_60;
  EStorable__vtable *local_5c;
  EStorable__vtable *local_50;
  EStorable__vtable *local_4c;
  EStorable__vtable *local_40;
  EStorable__vtable *local_3c;
  int local_30;
  int iStack_2c;
  EHashTableNode **local_20;
  uint uStack_1c;
  EFontSize *local_10;
  undefined4 uStack_c;
  
  local_20 = (EHashTableNode **)unaff_s1;
  uStack_1c = (uint)((ulong)unaff_s1 >> 0x20);
  local_30 = (int)unaff_s0;
  iStack_2c = (int)((ulong)unaff_s0 >> 0x20);
  local_10 = (EFontSize *)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pEVar7 = (this->field0_0x0).field0_0x0.m_pFont;
  if (pEVar7 == (ERFont *)0x0) goto LAB_0017d06c;
  SetSize__6ERFontffb(pEVar7,(this->field0_0x0).field0_0x0.m_textdef.m_pointsize,1.0,true);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar4 = _BLACK.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar7 = (this->field0_0x0).field0_0x0.m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar7->m_vColor).field0_0x0.d[0] = _BLACK.field0_0x0.d[0];
  (pEVar7->m_vColor).field0_0x0.d[1] = uVar4;
  (pEVar7->m_vColor).field0_0x0.d[2] = uVar5;
  (pEVar7->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  Select__6ERFontP3ERC((this->field0_0x0).field0_0x0.m_pFont,prc);
  psVar8 = (this->field0_0x0).m_pLong;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vPos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x0;
  if (psVar8 == (short *)0x0) {
    psVar8 = (short *)(this->field0_0x0).m_pShort;
    if (psVar8 != (short *)0x0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar7 = (this->field0_0x0).field0_0x0.m_pFont;
      pWin = (EWindow *)0x0;
      goto LAB_0017cf38;
    }
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar7 = (this->field0_0x0).field0_0x0.m_pFont;
    pWin = (EWindow *)&pGifTag1;
                    /* end of inlined section */
LAB_0017cf38:
    DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&local_60,pEVar7,SUB41(psVar8,0),pWin);
                    /* end of inlined section */
    vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_5c,local_60);
    puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)vPos.field0_0x0 >> (7 - uVar2) * 8;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  psVar8 = (this->field0_0x0).m_pLong;
  fVar9 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[0] +
          ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] -
          vPos.field0_0x0.d[0]) * 0.5;
  fVar10 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] +
           ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] -
           vPos.field0_0x0.d[1]) * 0.5;
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar10,fVar9);
  if (psVar8 == (short *)0x0) {
    szString = (this->field0_0x0).m_pShort;
    if (szString != (char *)0x0) {
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
      local_5c = (EStorable__vtable *)(fVar10 + 1.0 / (float)_pGfx->m_yscreen);
      local_60 = (EStorable__vtable *)(fVar9 + 1.0 / (float)_pGfx->m_xscreen);
      local_40 = local_60;
      local_3c = local_5c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                ((this->field0_0x0).field0_0x0.m_pFont,prc,szString,false,(EVec2 *)&local_40,
                 (this->field0_0x0).field0_0x0.m_textdef.m_xAlign,
                 (this->field0_0x0).field0_0x0.m_textdef.m_yAlign,(EVec2 *)0x0);
    }
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
    local_5c = (EStorable__vtable *)(fVar10 + 1.0 / (float)_pGfx->m_yscreen);
    local_60 = (EStorable__vtable *)(fVar9 + 1.0 / (float)_pGfx->m_xscreen);
    local_50 = local_60;
    local_4c = local_5c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).field0_0x0.m_pFont,prc,psVar8,true,(EVec2 *)&local_50,
               (this->field0_0x0).field0_0x0.m_textdef.m_xAlign,
               (this->field0_0x0).field0_0x0.m_textdef.m_yAlign,(EVec2 *)0x0);
                    /* end of inlined section */
  }
LAB_0017d06c:
  Draw__11EUITextIconP3ERC((EUITextIcon *)this,prc);
  return;
}

void EChallengeMenuItem::SetText(u16 *str) {
	EVec2 vSize;
	u16 *szString;
	float x;
	float z;
	
  EUIObjectNode__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EVec2 vSize;
  float local_40;
  EStorable__vtable *local_3c;
  ENodeListNode *local_38;
  int local_30;
  int iStack_2c;
  int local_20;
  int iStack_1c;
  EHashTableNode **local_10;
  uint uStack_c;
  
  local_20 = (int)unaff_s1;
  iStack_1c = (int)((ulong)unaff_s1 >> 0x20);
  local_30 = (int)unaff_s0;
  iStack_2c = (int)((ulong)unaff_s0 >> 0x20);
  local_10 = (EHashTableNode **)unaff_retaddr;
  uStack_c = (uint)((ulong)unaff_retaddr >> 0x20);
  SetText__17EUIStaticTextIconPCUs(&this->field0_0x0,str);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vSize,(this->field0_0x0).field0_0x0.m_pFont,SUB41(str,0),
             (EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_40 = vSize.field0_0x0.d[0];
  local_38 = (ENodeListNode *)vSize.field0_0x0.d[1];
  local_3c = (EStorable__vtable *)0x0;
                    /* end of inlined section */
  (*(code *)pEVar1->GetPos)
            ((int)(this->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar1->OnStickRepeat + 4,&local_40);
  return;
}

EGameMenuOptions* EGameMenuOptions::EGameMenuOptions() {
  __7EUIMenuiifff(&this->field0_0x0,-1,0,0.05,0.0,0.0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ItemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_16EGameMenuOptions;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ItemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  return this;
}

void EGameMenuOptions::~EGameMenuOptions(int __in_chrg) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_16EGameMenuOptions;
  RemoveAll__9ENodeList(&(this->m_ItemList).field0_0x0);
                    /* end of inlined section */
  ___7EUIMenu(&this->field0_0x0,__in_chrg);
  return;
}

void EGameMenuOptions::Init2(EGameMenuMainPanel *pPanel) {
	EUIObjectNode *pItem;
	float fXPos;
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EVec2 vSize;
	EUIMenu *this;
	EGraphics *this;
	EGraphics *this;
	void *result;
	EPauseMenuBoolItem *this;
	bool bData;
	EPauseMenuBoolItem *this;
	float fX;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	void *result;
	EPauseMenuBoolItem *this;
	bool bData;
	EPauseMenuBoolItem *this;
	float fX;
	EUIObjectNode *data;
	void *result;
	EPauseMenuBoolItem *this;
	bool bData;
	EPauseMenuBoolItem *this;
	float fX;
	EUIObjectNode *data;
	void *result;
	EPauseMenuRangeItem *this;
	EPauseMenuRangeItem *this;
	EPauseMenuRangeItem *this;
	float fX;
	EUIObjectNode *data;
	void *result;
	EPauseMenuRangeItem *this;
	EPauseMenuRangeItem *this;
	EPauseMenuRangeItem *this;
	float fX;
	EUIObjectNode *data;
	EUIVirtualCtrl *pCtrl;
	float x;
	float z;
	EUIIcon *this;
	EUIObjectNode *data;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  EUIObjectNode__vtable *pEVar9;
  undefined4 uVar10;
  ulong *puVar11;
  ERShader *pEVar12;
  ERFont *pEVar13;
  short *psVar14;
  EPauseMenuBoolItem *pEVar15;
  EPauseMenuRangeItem *pEVar16;
  EUIStaticTextIcon *pEVar17;
  ulong uVar18;
  undefined8 unaff_s0;
  char *pRef;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  TNodeList_EUIObjectNode___ *this_00;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar19;
  float fVar20;
  EUIIconDef icondef;
  EUITextIconDef textdef;
  EVec2 vSize;
  EUIIconDef local_e0;
  EFontSize *local_c0;
  int local_bc;
  EHashTableNode *local_b8;
  EHashTableNode **local_b0;
  uint uStack_ac;
  EFontSize *local_a0;
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
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
                    /* end of inlined section */
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (EFontSize *)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (EHashTableNode **)unaff_s0;
  uStack_ac = (uint)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  this->m_pPanel = pPanel;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar12 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xb873bc96,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBackground = pEVar12;
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->m_vCurScreenAdjust).field0_0x0.d[0] =
       (float)(int)(_globals.m_pOptionsRecon)->m_nScreenAdjustX;
  uVar18 = (ulong)(int)_globals.m_pOptionsRecon;
  (this->m_vCurScreenAdjust).field0_0x0.d[1] =
       (float)(int)(_globals.m_pOptionsRecon)->m_nScreenAdjustY;
  puVar1 = (undefined *)((int)&(this->m_vCurScreenAdjust).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar7 = (uint)&this->m_vCurScreenAdjust & 7;
  uVar18 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           uVar18 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar7) * 8 |
           *(ulong *)((int)&this->m_vCurScreenAdjust - uVar7) >> uVar7 * 8;
  puVar1 = (undefined *)((int)&(this->m_vOldScreenAdjust).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar6);
  *puVar11 = *puVar11 & -1L << (uVar6 + 1) * 8 | uVar18 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vOldScreenAdjust & 7;
  puVar11 = (ulong *)((int)&this->m_vOldScreenAdjust - uVar6);
  *puVar11 = uVar18 << uVar6 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  icondef.m_flags = 0x3e4ccccd;
  icondef.m_selColorIdx = 0x3e99999a;
  icondef.m_trigger = 0;
                    /* end of inlined section */
  (*(code *)pEVar9->OnButtonRepeat)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9->StateChanged + -0x44,
             &icondef);
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  if (_iVideoMode == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    icondef.m_flags = 0x3f200000;
    icondef.m_trigger = 0x3e9c28f6;
                    /* end of inlined section */
    (*(code *)pEVar9->RemoveChild)
              ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9->AddChild + -0x44,
               &icondef);
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    icondef.m_flags = 0x3f200000;
    icondef.m_trigger = 0x3e851eb8;
                    /* end of inlined section */
    (*(code *)pEVar9->RemoveChild)
              ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9->AddChild + -0x44,
               &icondef);
  }
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (this->field0_0x0).m_optgap = 0.006;
  (*(code *)pEVar9[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].GetPos)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].OnStickRepeat + -0x44,
             0,1,1);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,1,true);
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].RemoveChild)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].AddChild + -0x44,4);
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar13 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar13;
  SetSize__6ERFontffb(pEVar13,16.0,1.0,true);
  this->m_nDisplayMode = '\0';
  fVar20 = _13EUIObjectNode_SAFE_TOP;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar19 = _13EUIObjectNode_SAFE_TOP + 0.09151;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  icondef.m_trigger = (int)(_13EUIObjectNode_SAFE_TOP + 0.4);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar18 = (ulong)(uint)(_13EUIObjectNode_SAFE_TOP - 75.0 / (float)_pGfx->m_yscreen) << 0x20;
  puVar1 = (undefined *)((int)&(this->m_vBoxStartTL).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar6);
  *puVar11 = *puVar11 & -1L << (uVar6 + 1) * 8 | uVar18 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxStartTL & 7;
  puVar11 = (ulong *)((int)&this->m_vBoxStartTL - uVar6);
  *puVar11 = uVar18 << uVar6 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar18 = CONCAT44(fVar19,0x3f347ae1);
  puVar1 = (undefined *)((int)&(this->m_vBoxStartBR).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar6);
  *puVar11 = *puVar11 & -1L << (uVar6 + 1) * 8 | uVar18 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxStartBR & 7;
  puVar11 = (ulong *)((int)&this->m_vBoxStartBR - uVar6);
  *puVar11 = uVar18 << uVar6 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar18 = (ulong)(uint)(fVar20 + 41.0 / (float)_pGfx->m_yscreen) << 0x20;
  puVar1 = (undefined *)((int)&(this->m_vBoxTL).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar6);
  *puVar11 = *puVar11 & -1L << (uVar6 + 1) * 8 | uVar18 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxTL & 7;
  puVar11 = (ulong *)((int)&this->m_vBoxTL - uVar6);
  *puVar11 = uVar18 << uVar6 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3f347ae1;
                    /* end of inlined section */
  uVar18 = CONCAT44(icondef.m_trigger,0x3f347ae1);
  puVar1 = (undefined *)((int)&(this->m_vBoxBR).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar6);
  *puVar11 = *puVar11 & -1L << (uVar6 + 1) * 8 | uVar18 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxBR & 7;
  puVar11 = (ulong *)((int)&this->m_vBoxBR - uVar6);
  *puVar11 = uVar18 << uVar6 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxStartTL).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar7 = (uint)&this->m_vBoxStartTL & 7;
  uVar18 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           uVar18 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar7) * 8 |
           *(ulong *)((int)&this->m_vBoxStartTL - uVar7) >> uVar7 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxAnimateTL).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar6);
  *puVar11 = *puVar11 & -1L << (uVar6 + 1) * 8 | uVar18 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxAnimateTL & 7;
  puVar11 = (ulong *)((int)&this->m_vBoxAnimateTL - uVar6);
  *puVar11 = uVar18 << uVar6 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxStartBR).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar7 = (uint)&this->m_vBoxStartBR & 7;
  uVar18 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           uVar18 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar7) * 8 |
           *(ulong *)((int)&this->m_vBoxStartBR - uVar7) >> uVar7 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxAnimateBR).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar6);
  *puVar11 = *puVar11 & -1L << (uVar6 + 1) * 8 | uVar18 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxAnimateBR & 7;
  puVar11 = (ulong *)((int)&this->m_vBoxAnimateBR - uVar6);
  *puVar11 = uVar18 << uVar6 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  pEVar13 = this->m_pFont;
  psVar14 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"on_boolean_value");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&icondef,pEVar13,SUB41(psVar14,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar13 = this->m_pFont;
  pRef = "off_boolean_value";
  psVar14 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"off_boolean_value");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&icondef.m_pCtrl,pEVar13,SUB41(psVar14,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  if ((float)icondef.m_pCtrl < (float)icondef.m_flags) {
    pRef = "on_boolean_value";
                    /* end of inlined section */
  }
  pEVar13 = this->m_pFont;
  psVar14 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,pRef);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&textdef,pEVar13,SUB41(psVar14,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  fVar20 = 0.8 - (float)textdef.m_maxChars;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  pEVar15 = (EPauseMenuBoolItem *)_memmanAlloc__FUiUi(0xb0,4);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  memset(pEVar15,0,0xb0);
  this_00 = &this->m_ItemList;
                    /* end of inlined section */
                    /* end of inlined section */
  pEVar15 = __18EPauseMenuBoolItem(pEVar15);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
  pEVar9 = (pEVar15->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar14 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"free_will_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar15->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,
             psVar14);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  uVar10 = *(undefined4 *)_globals.m_pOptionsRecon;
  pEVar15->m_fDataX = fVar20;
  *(undefined4 *)&pEVar15->m_bData = uVar10;
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
  icondef.m_flags = 0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar15
             ,&icondef);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar15);
  pEVar15 = (EPauseMenuBoolItem *)_memmanAlloc__FUiUi(0xb0,4);
  memset(pEVar15,0,0xb0);
                    /* end of inlined section */
  pEVar15 = __18EPauseMenuBoolItem(pEVar15);
  pEVar9 = (pEVar15->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar14 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"rumble_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar15->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,
             psVar14);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  uVar10 = *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bRumble;
  pEVar15->m_fDataX = fVar20;
  *(undefined4 *)&pEVar15->m_bData = uVar10;
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
  icondef.m_flags = 0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar15
             ,&icondef);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar15);
  pEVar15 = (EPauseMenuBoolItem *)_memmanAlloc__FUiUi(0xb0,4);
  memset(pEVar15,0,0xb0);
                    /* end of inlined section */
  pEVar15 = __18EPauseMenuBoolItem(pEVar15);
  pEVar9 = (pEVar15->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar14 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"auto_center_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar15->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,
             psVar14);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  uVar10 = *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bAutoCenter;
  pEVar15->m_fDataX = fVar20;
  *(undefined4 *)&pEVar15->m_bData = uVar10;
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
  icondef.m_flags = 0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar15
             ,&icondef);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar15);
  pEVar16 = (EPauseMenuRangeItem *)_memmanAlloc__FUiUi(0xb8,4);
  memset(pEVar16,0,0xb8);
                    /* end of inlined section */
  pEVar16 = __19EPauseMenuRangeItem(pEVar16);
  pEVar9 = (pEVar16->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar14 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"sound_effects_volume_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar16->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,
             psVar14);
  cVar5 = (_globals.m_pOptionsRecon)->m_nSFXVolume;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  pEVar16->m_nMax = 10;
  pEVar16->m_fDataX = fVar20;
  pEVar16->m_nMin = 0;
  pEVar16->m_nData = (int)cVar5;
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
  icondef.m_flags = 0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar16
             ,&icondef);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar16);
                    /* end of inlined section */
  this->m_pSFXVolumeObject = (EUIObjectNode *)pEVar16;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  pEVar16 = (EPauseMenuRangeItem *)_memmanAlloc__FUiUi(0xb8,4);
  memset(pEVar16,0,0xb8);
                    /* end of inlined section */
  pEVar16 = __19EPauseMenuRangeItem(pEVar16);
  pEVar9 = (pEVar16->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar14 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"music_volume_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar16->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,
             psVar14);
  cVar5 = (_globals.m_pOptionsRecon)->m_nMusicVolume;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  pEVar16->m_nMax = 10;
  pEVar16->m_fDataX = fVar20;
  pEVar16->m_nData = (int)cVar5;
  pEVar16->m_nMin = 0;
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
  icondef.m_flags = 0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar16
             ,&icondef);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar16);
                    /* end of inlined section */
  this->m_pMusicVolumeObject = (EUIObjectNode *)pEVar16;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
                    /* end of inlined section */
  icondef.m_flags = 0;
  pEVar17 = (EUIStaticTextIcon *)__builtin_new(0x9c);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  textdef.m_selColorIdx = 0x20;
  textdef.m_colorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  textdef._24_4_ = 0;
  vSize.field0_0x0.d[0] = 0.0;
  vSize.field0_0x0.d[1] = 1.401298e-45;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_e0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0.m_trigger = (int)&GM_WEIGHTING;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0.m_selColorIdx = 0;
  local_e0.m_colorIdx = (int)&pGifTag1;
                    /* end of inlined section */
  local_e0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  pEVar17 = __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                      (pEVar17,(EUITextIconDef *)&textdef.m_selColorIdx,&local_e0,-1,
                       (EVec3 *)&icondef);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  pEVar9 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar14 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"screen_adjust_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar17->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,psVar14);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_trigger = 0x40;
  textdef.m_maxChars = 0x20;
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_selColorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_flags = 0;
  textdef.m_xAlign = E_FAX_LEFT;
  textdef.m_yAlign = E_FAY_TOP;
  textdef.m_pointsize = 16.0;
  textdef.m_selColorIdx = 6;
  textdef.m_colorIdx = 1;
  textdef._24_4_ = CONCAT22(textdef._26_2_,0xffff);
                    /* end of inlined section */
  SetFont__11EUITextIconi(&pEVar17->field0_0x0,-0x2080f4e9);
  pEVar13 = this->m_pFont;
  psVar14 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"screen_adjust_option");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vSize,pEVar13,SUB41(psVar14,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar9 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_c0 = (EFontSize *)vSize.field0_0x0.d[0];
  local_b8 = (EHashTableNode *)vSize.field0_0x0.d[1];
  local_bc = 0;
                    /* end of inlined section */
  (*(code *)pEVar9->GetPos)
            ((int)(pEVar17->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar9->OnStickRepeat + 4,&local_c0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_c0 = (EFontSize *)(pEVar17->field0_0x0).field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar6);
  *puVar11 = *puVar11 & -1L << (uVar6 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar6) * 8;
  pEVar2 = &(pEVar17->field0_0x0).field0_0x0.m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar6);
  *puVar11 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar6 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar6);
  *puVar11 = *puVar11 & -1L << (uVar6 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar6) * 8;
  piVar3 = &(pEVar17->field0_0x0).field0_0x0.m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar6);
  *puVar11 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar6 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar6);
  *puVar11 = *puVar11 & -1L << (uVar6 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar6) * 8;
  ppEVar4 = &(pEVar17->field0_0x0).field0_0x0.m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar11 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar11 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar6 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* end of inlined section */
  pEVar9 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  (pEVar17->field0_0x0).field0_0x0.m_def.__vtable = (EUIIconDef__vtable *)local_c0;
                    /* end of inlined section */
  (*(code *)pEVar9[2].GetPos)
            ((int)(pEVar17->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar9[2].OnStickRepeat + 4,&textdef);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_b8 = (EHashTableNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_bc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_c0 = (EFontSize *)0x0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar17
             ,&local_c0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar17);
                    /* end of inlined section */
  this->m_pScreenAdjustObject = (EUIObjectNode *)pEVar17;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  return;
}

void EGameMenuOptions::Reset() {
	TNodeList<EUIObjectNode *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  EUIObjectNode__vtable *pEVar1;
  uint uVar2;
  ENodeListNode *pEVar3;
  ERShader *this_00;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[2].EUIObjectNode)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)(pEVar1 + 2) + -0x44);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_ItemList).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar2 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      if (uVar2 != 0) {
        (**(code **)(*(int *)(uVar2 + 0x38) + 0xc))
                  (uVar2 + (int)*(short *)(*(int *)(uVar2 + 0x38) + 8),3);
      }
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar2 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_ItemList).field0_0x0);
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
  this_00 = this->m_pBackground;
  while (this_00 != (ERShader *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pBackground = (ERShader *)0x0;
    this_00 = this->m_pBackground;
  }
  this->m_pPanel = (EGameMenuMainPanel *)0x0;
  return;
}

void EGameMenuOptions::Update() {
	bool bChanged;
	EUIMenu *this;
	NLIterator nli;
	EUIObjectNode *pNode;
	NLIterator i;
	NLIterator i;
	EPauseMenuBoolItem *this;
	bool bData;
	NLIterator i;
	NLIterator i;
	EPauseMenuBoolItem *this;
	bool bData;
	NLIterator i;
	NLIterator i;
	EPauseMenuBoolItem *this;
	bool bData;
	NLIterator i;
	NLIterator i;
	EPauseMenuRangeItem *this;
	u32 nData;
	float fVolume;
	NLIterator i;
	NLIterator i;
	EPauseMenuRangeItem *this;
	u32 nData;
	EUIObjectNode *this;
	EUIMenu *this;
	bool bTemp;
	int nVolume;
	EPauseMenuRangeItem *this;
	float fVolume;
	EUIMenu *this;
	bool bTemp;
	EPauseMenuRangeItem *this;
	EUIMenu *this;
	EUIMenu *this;
	bool bTemp;
	bool bChanged;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	
  undefined *puVar1;
  uchar uVar2;
  uint uVar3;
  uint uVar4;
  ENodeListNode *pEVar5;
  EUiMonitorAutoRepeat *pEVar6;
  int lVolume;
  EUIVirtualCtrl__vtable *pEVar7;
  ulong *puVar8;
  bool bVar9;
  EGraphics *pEVar10;
  cSoundPlayer *this_00;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  EUIObjectNode *pEVar14;
  EGameMenuMainPanel *this_01;
  float fVar15;
  
  SetBackPrompt__18EGameMenuMainPanel(this->m_pPanel);
  if (this->m_nDisplayMode == '\x03') {
    bVar9 = false;
    SetOKCancelPrompt__18EGameMenuMainPanel(this->m_pPanel);
    pEVar7 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar12 = (*(code *)pEVar7[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar7[1].ClearBut + -4,0
                        ,0x1000);
    if (lVar12 != 0) {
      bVar9 = true;
      fVar15 = (this->m_vCurScreenAdjust).field0_0x0.d[1] - 1.0;
      (this->m_vCurScreenAdjust).field0_0x0.d[1] = fVar15;
      if (fVar15 < -25.0) {
        (this->m_vCurScreenAdjust).field0_0x0.d[1] = -25.0;
        bVar9 = false;
      }
    }
    pEVar7 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar12 = (*(code *)pEVar7[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar7[1].ClearBut + -4,0
                        ,0x4000);
    if (lVar12 != 0) {
      bVar9 = true;
      fVar15 = (this->m_vCurScreenAdjust).field0_0x0.d[1] + 1.0;
      (this->m_vCurScreenAdjust).field0_0x0.d[1] = fVar15;
      if (25.0 < fVar15) {
        (this->m_vCurScreenAdjust).field0_0x0.d[1] = 25.0;
        bVar9 = false;
      }
    }
    pEVar7 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar12 = (*(code *)pEVar7[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar7[1].ClearBut + -4,0
                        ,0x8000);
    if (lVar12 != 0) {
      bVar9 = true;
      fVar15 = (this->m_vCurScreenAdjust).field0_0x0.d[0] - 1.0;
      (this->m_vCurScreenAdjust).field0_0x0.d[0] = fVar15;
      if (fVar15 < -25.0) {
        (this->m_vCurScreenAdjust).field0_0x0.d[0] = -25.0;
        bVar9 = false;
      }
    }
    pEVar7 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar12 = (*(code *)pEVar7[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar7[1].ClearBut + -4,0
                        ,0x2000);
    if (lVar12 != 0) {
      bVar9 = true;
      fVar15 = (this->m_vCurScreenAdjust).field0_0x0.d[0] + 1.0;
      (this->m_vCurScreenAdjust).field0_0x0.d[0] = fVar15;
      if (25.0 < fVar15) {
        (this->m_vCurScreenAdjust).field0_0x0.d[0] = 25.0;
        bVar9 = false;
      }
    }
    pEVar7 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    uVar13 = (*(code *)pEVar7[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar7[1].ClearBut + -4,0
                        ,0x10);
    if (uVar13 == 0) {
      pEVar7 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      uVar13 = (*(code *)pEVar7[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar7[1].ClearBut + -4
                          ,0,0x40);
      if (uVar13 != 0) {
        puVar1 = (undefined *)((int)&(this->m_vCurScreenAdjust).field0_0x0 + 7);
        uVar3 = (uint)puVar1 & 7;
        uVar4 = (uint)&this->m_vCurScreenAdjust & 7;
        uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                 uVar13 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)&this->m_vCurScreenAdjust - uVar4) >> uVar4 * 8;
        puVar1 = (undefined *)((int)&(this->m_vOldScreenAdjust).field0_0x0 + 7);
        uVar3 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar3);
        *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
        uVar3 = (uint)&this->m_vOldScreenAdjust & 7;
        puVar8 = (ulong *)((int)&this->m_vOldScreenAdjust - uVar3);
        *puVar8 = uVar13 << uVar3 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        (_globals.m_pOptionsRecon)->m_nScreenAdjustX =
             (char)(int)(this->m_vCurScreenAdjust).field0_0x0.d[0];
        (_globals.m_pOptionsRecon)->m_nScreenAdjustY =
             (char)(int)(this->m_vCurScreenAdjust).field0_0x0.d[1];
        pEVar10 = _pGfx;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
        _pGfx->m_xoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
        pEVar10->m_yoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[1];
                    /* end of inlined section */
        this->m_nDisplayMode = '\0';
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        if (_13EUIObjectNode_m_uiSfxSelect != (undefined1 *)0x0) {
          (*(code *)_13EUIObjectNode_m_uiSfxSelect)();
        }
      }
    }
    else {
      puVar1 = (undefined *)((int)&(this->m_vOldScreenAdjust).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_vOldScreenAdjust & 7;
      uVar13 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar13 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_vOldScreenAdjust - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_vCurScreenAdjust).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar3);
      *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
      uVar3 = (uint)&this->m_vCurScreenAdjust & 7;
      puVar8 = (ulong *)((int)&this->m_vCurScreenAdjust - uVar3);
      *puVar8 = uVar13 << uVar3 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      pEVar10 = _pGfx;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
      _pGfx->m_xoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
      pEVar10->m_yoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[1];
                    /* end of inlined section */
      this->m_nDisplayMode = '\0';
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      if (_13EUIObjectNode_m_uiSfxBack != (undefined1 *)0x0) {
        (*(code *)_13EUIObjectNode_m_uiSfxBack)();
                    /* end of inlined section */
      }
    }
                    /* end of inlined section */
    if (!bVar9) {
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
    pEVar10 = _pGfx;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
    _pGfx->m_xoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
    pEVar10->m_yoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[1];
    return;
                    /* end of inlined section */
  }
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
  if ((this->field0_0x0).m_pCurOpt == this->m_pScreenAdjustObject) {
    SetSelectCancelPrompt__18EGameMenuMainPanel(this->m_pPanel);
  }
  else {
    SetOKCancelPrompt__18EGameMenuMainPanel(this->m_pPanel);
  }
  pEVar7 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar12 = (*(code *)pEVar7[1].GetBut)
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar7[1].ClearBut + -4,0,
                      0x10);
  if (lVar12 == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)this->m_pScreenAdjustObject->m_flags >> 3 & 1U) == 0) {
      pEVar7 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar12 = (*(code *)pEVar7[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar7[1].ClearBut + -4
                          ,0,0x40);
      if (lVar12 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar5 = (this->m_ItemList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
        *(undefined4 *)_globals.m_pOptionsRecon = *(undefined4 *)(pEVar5->data + 0x9c);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar5 = pEVar5->pNext;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
        *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bRumble = *(undefined4 *)(pEVar5->data + 0x9c)
        ;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar5 = pEVar5->pNext;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
        *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bAutoCenter =
             *(undefined4 *)(pEVar5->data + 0x9c);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar5 = pEVar5->pNext;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
        (_globals.m_pOptionsRecon)->m_nSFXVolume = (char)*(undefined4 *)(pEVar5->data + 0x9c);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
        (_globals.m_pOptionsRecon)->m_nMusicVolume =
             (char)*(undefined4 *)(pEVar5->pNext->data + 0x9c);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        pcVar11 = (code *)_13EUIObjectNode_m_uiSfxSelect;
        goto LAB_0017dddc;
      }
      uVar2 = this->m_nDisplayMode;
    }
    else {
      uVar2 = this->m_nDisplayMode;
    }
    if (uVar2 == '\0') {
      Update__7EUIMenu(&this->field0_0x0);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
      pEVar14 = (this->field0_0x0).m_pCurOpt;
    }
    else {
      pEVar14 = (this->field0_0x0).m_pCurOpt;
    }
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar5 = (this->m_ItemList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    *(undefined4 *)(pEVar5->data + 0x9c) = *(undefined4 *)&this->m_bOrigFreeWill;
    pEVar5 = pEVar5->pNext;
    *(undefined4 *)(pEVar5->data + 0x9c) = *(undefined4 *)&this->m_bOrigRumble;
    pEVar5 = pEVar5->pNext;
    *(undefined4 *)(pEVar5->data + 0x9c) = *(undefined4 *)&this->m_bOrigAutoCenter;
    pEVar5 = pEVar5->pNext;
    *(int *)(pEVar5->data + 0x9c) = this->m_nOrigSFXVolume;
                    /* end of inlined section */
    fVar15 = (float)this->m_nOrigSFXVolume * 0.1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    if (0.0 <= fVar15) {
      _8EUiAudio_m_fVolume =
           (float)((int)fVar15 * (uint)(fVar15 < 1.0) | (uint)(fVar15 >= 1.0) * 0x3f800000);
    }
    else {
      _8EUiAudio_m_fVolume = 0.0;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
    SetFXVolume__12cSoundPlayeri(_5Globs_pSound,this->m_nOrigSFXVolume);
    SetVoxVolume__12cSoundPlayeri(_5Globs_pSound,this->m_nOrigSFXVolume);
    this_00 = _5Globs_pSound;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    *(int *)(pEVar5->pNext->data + 0x9c) = this->m_nOrigMusicVolume;
                    /* end of inlined section */
    SetMusicVolume__12cSoundPlayeri(this_00,this->m_nOrigMusicVolume);
    pcVar11 = (code *)_13EUIObjectNode_m_uiSfxBack;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
LAB_0017dddc:
    if (pcVar11 == (code *)0x0) {
      this_01 = this->m_pPanel;
    }
    else {
      (*pcVar11)();
                    /* end of inlined section */
      this_01 = this->m_pPanel;
    }
    HandleMessage__18EGameMenuMainPaneli(this_01,1);
    pEVar14 = (this->field0_0x0).m_pCurOpt;
  }
                    /* end of inlined section */
  bVar9 = false;
  if (pEVar14 == this->m_pSFXVolumeObject) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    pEVar6 = pEVar14[2].m_pAutoRepeatMonitor;
                    /* end of inlined section */
    pEVar14[2].m_pAutoRepeatMonitor = (EUiMonitorAutoRepeat *)0x0;
    if (pEVar6 != (EUiMonitorAutoRepeat *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
      lVolume = *(int *)&this->m_pSFXVolumeObject[2].m_pos.field0_0x0;
                    /* end of inlined section */
      fVar15 = (float)lVolume * 0.1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      if (0.0 <= fVar15) {
        _8EUiAudio_m_fVolume =
             (float)((int)fVar15 * (uint)(fVar15 < 1.0) | (uint)(fVar15 >= 1.0) * 0x3f800000);
      }
      else {
        _8EUiAudio_m_fVolume = 0.0;
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
      SetFXVolume__12cSoundPlayeri(_5Globs_pSound,lVolume);
      SetVoxVolume__12cSoundPlayeri(_5Globs_pSound,lVolume);
      bVar9 = true;
    }
  }
  else {
                    /* end of inlined section */
    if (pEVar14 == this->m_pMusicVolumeObject) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
      pEVar6 = pEVar14[2].m_pAutoRepeatMonitor;
                    /* end of inlined section */
      pEVar14[2].m_pAutoRepeatMonitor = (EUiMonitorAutoRepeat *)0x0;
      if (pEVar6 != (EUiMonitorAutoRepeat *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
                    /* end of inlined section */
        SetMusicVolume__12cSoundPlayeri
                  (_5Globs_pSound,(int)this->m_pMusicVolumeObject[2].m_pos.field0_0x0.d[0]);
        bVar9 = true;
      }
    }
    else {
                    /* end of inlined section */
      if (pEVar14 != this->m_pScreenAdjustObject) {
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
        fVar15 = pEVar14[2].m_pos.field0_0x0.d[2];
        pEVar14[2].m_pos.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
        bVar9 = fVar15 != 0.0;
      }
    }
  }
  if (bVar9) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
  }
  return;
}

void EGameMenuOptions::Draw(ERC *prc) {
	EVec2 vScreen;
	EVec2 vPos;
	EVec2 vSize;
	EGraphics *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	float x;
	float y;
	float x;
	float y;
	float fTextHeight;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	
  undefined *puVar1;
  ERFont *pEVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short *psVar8;
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
  char *pcVar9;
  float fVar10;
  EStorable__vtable *pEVar11;
  float fVar12;
  float fVar13;
  EVec2 vScreen;
  EVec2 vPos;
  EVec2 vSize;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined local_f0 [20];
  EStorable__vtable *local_dc;
  ENodeListNode *local_d8;
  ENodeListNode *local_d4;
  EStorable__vtable *local_d0;
  char *local_cc;
  int local_c0;
  int iStack_bc;
  EHashTableNode **local_b0;
  uint uStack_ac;
  EFontSize *local_a0;
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
  local_a0 = (EFontSize *)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (EHashTableNode **)unaff_s1;
  uStack_ac = (uint)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  local_c0 = (int)unaff_s0;
  iStack_bc = (int)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBackground,prc,0);
  fVar12 = 0.05;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f8000003f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vSize.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f80000000000000;
  local_110 = 0x3f800000;
  local_10c = 0;
  local_f4 = 0x3f800000;
  local_f8 = 0x3f800000;
  local_fc = 0x3f800000;
  local_100 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vScreen,&vPos,&vSize,
             &local_110,&local_100);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  vScreen.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
  vScreen.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,true);
  uVar7 = _BLACK.field0_0x0.d[3];
  uVar6 = _BLACK.field0_0x0.d[2];
  uVar5 = _BLACK.field0_0x0._0_8_;
  pEVar2 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar2->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar2->m_vColor).field0_0x0.d[3] = uVar7;
  psVar8 = GetMainMenuUIString__7EGlobalPCc(&_globals,"options title");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  fVar10 = 1.0 / vScreen.field0_0x0.d[0] + 0.5;
  fVar13 = 1.0 / vScreen.field0_0x0.d[1] + fVar12;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vSize.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar13,fVar10);
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar13,fVar10);
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar8,true,&vSize,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
  uVar7 = _WHITE.field0_0x0.d[3];
  uVar6 = _WHITE.field0_0x0.d[2];
  uVar5 = _WHITE.field0_0x0._0_8_;
  pEVar2 = _globals.m_pFont;
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar2->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar2->m_vColor).field0_0x0.d[3] = uVar7;
  psVar8 = GetMainMenuUIString__7EGlobalPCc(&_globals,"options title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar12,0x3f000000);
  vSize.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar12,0x3f000000);
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar8,true,&vSize,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  if (this->m_nDisplayMode == '\x03') {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._0_4_ = (EStorable__vtable *)0x3e800000;
    local_f0._4_4_ = (EStorable__vtable *)0x3ed9999a;
                    /* end of inlined section */
    vPos.field0_0x0 = (EVec2__null___1__1)0x3ed9999a3e800000;
    puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3ed9999a3e800000U >> (7 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._0_4_ = (EStorable__vtable *)0x3f000000;
    local_f0._4_4_ = (EStorable__vtable *)0x3e0f5c29;
                    /* end of inlined section */
    vSize.field0_0x0 = (EVec2__null___1__1)0x3e0f5c293f000000;
    puVar1 = (undefined *)((int)&vSize.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3e0f5c293f000000U >> (7 - uVar3) * 8;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._0_4_ = (EStorable__vtable *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
    local_f0._4_4_ = (EStorable__vtable *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2];
    pcVar9 = (char *)(this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2];
    pEVar11 = (EStorable__vtable *)(this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
    vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_f0._4_4_,local_f0._0_4_);
    puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)vPos.field0_0x0 >> (7 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._0_4_ = pEVar11;
    local_f0._4_4_ = (EStorable__vtable *)pcVar9;
                    /* end of inlined section */
    vSize.field0_0x0 = (EVec2__null___1__1)CONCAT44(pcVar9,pEVar11);
    puVar1 = (undefined *)((int)&vSize.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)vSize.field0_0x0 >> (7 - uVar3) * 8;
  }
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,vPos.field0_0x0.d[0] - 36.0 / vScreen.field0_0x0.d[0],
             vPos.field0_0x0.d[1] - 36.0 / vScreen.field0_0x0.d[1],
             vPos.field0_0x0.d[0] + vSize.field0_0x0.d[0] + 36.0 / vScreen.field0_0x0.d[0],
             vPos.field0_0x0.d[1] + vSize.field0_0x0.d[1] + 36.0 / vScreen.field0_0x0.d[1],1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_d4 = (ENodeListNode *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_d8 = (ENodeListNode *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_dc = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_f0._16_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,vPos.field0_0x0.d[0] - 20.0 / vScreen.field0_0x0.d[0],
             vPos.field0_0x0.d[1] - 20.0 / vScreen.field0_0x0.d[1],
             vSize.field0_0x0.d[1] + 40.0 / vScreen.field0_0x0.d[1],
             vSize.field0_0x0.d[0] + 40.0 / vScreen.field0_0x0.d[0],1.0,(EVec4 *)(local_f0 + 0x10));
  if (this->m_nDisplayMode == '\x03') {
    pEVar11 = (EStorable__vtable *)0x3f000000;
    Select__6ERFontP3ERC(this->m_pFont,prc);
    uVar7 = _WHITE.field0_0x0.d[3];
    uVar6 = _WHITE.field0_0x0.d[2];
    uVar5 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar2 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (pEVar2->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
    (pEVar2->m_vColor).field0_0x0.d[2] = uVar6;
    (pEVar2->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
    SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
    fVar12 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
    pEVar2 = this->m_pFont;
    psVar8 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"adjust_message_line1");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_f0,pEVar2,SUB41(psVar8,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    fVar12 = (float)local_f0._4_4_ + fVar12;
    psVar8 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"adjust_message_line1");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_f0._4_4_ = (EStorable__vtable *)((float)pEVar11 - fVar12);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._0_4_ = pEVar11;
    local_d0 = pEVar11;
    local_cc = (char *)local_f0._4_4_;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar8,true,(EVec2 *)&local_d0,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0)
    ;
                    /* end of inlined section */
    psVar8 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"adjust_message_line2");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._0_4_ = pEVar11;
    local_f0._4_4_ = pEVar11;
    local_f0._16_4_ = pEVar11;
    local_dc = pEVar11;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar8,true,(EVec2 *)(EVec4 *)(local_f0 + 0x10),E_FAX_CENTER,
               E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  }
  else {
    Draw__7EUIMenuP3ERC(&this->field0_0x0,prc);
  }
  return;
}

void EGameMenuOptions::Message(EUIObjectNode *pChild, u32 messId) {
	EUIObjectNode *pNode;
	EUIObjectNode *pLastNode;
	EUIMenu *this;
	EUIMenu *this;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EUIMenu *this;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	EGraphics *this;
	
  EUIObjectNode *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  undefined1 *puVar3;
  EGraphics *pEVar4;
  EUIObjectNode **ppEVar5;
  EUIObjectNode *pEVar6;
  
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).m_pCurOpt;
  if (messId == 0x1d) {
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
    ppEVar5 = *(EUIObjectNode ***)(pEVar1->m_listIr + 8);
  }
  else {
    if (messId < 0x1e) {
      if (messId != 1) {
        return;
      }
      this->m_nDisplayMode = '\x03';
      pEVar4 = _pGfx;
      puVar3 = _13EUIObjectNode_m_uiSfxSelect;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
      (this->m_vOldScreenAdjust).field0_0x0.d[0] = (float)_pGfx->m_xoffset;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      (this->m_vOldScreenAdjust).field0_0x0.d[1] = (float)pEVar4->m_yoffset;
      if (puVar3 == (undefined1 *)0x0) {
        return;
      }
      (*(code *)puVar3)(this,pChild);
      return;
    }
    if (messId != 0x1e) {
      return;
    }
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
    ppEVar5 = *(EUIObjectNode ***)(pEVar1->m_listIr + 4);
  }
  pEVar6 = (EUIObjectNode *)0x0;
  if (ppEVar5 != (EUIObjectNode **)0x0) {
    pEVar6 = *ppEVar5;
  }
                    /* end of inlined section */
  if (pEVar6 != (EUIObjectNode *)0x0) {
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[2].OnButtonRepeat)
              ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar2[2].StateChanged + -0x44
               ,pEVar6);
  }
  if (pEVar6 != pEVar1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
  }
  return;
}

void EGameMenuOptions::SaveCurrentValues() {
  *(undefined4 *)&this->m_bOrigFreeWill = *(undefined4 *)_globals.m_pOptionsRecon;
  *(undefined4 *)&this->m_bOrigRumble = *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bRumble;
  *(undefined4 *)&this->m_bOrigAutoCenter =
       *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bAutoCenter;
  this->m_nOrigSFXVolume = (int)(_globals.m_pOptionsRecon)->m_nSFXVolume;
  this->m_nOrigMusicVolume = (int)(_globals.m_pOptionsRecon)->m_nMusicVolume;
  this->m_nOrigScreenAdjustX = (int)(_globals.m_pOptionsRecon)->m_nScreenAdjustX;
  this->m_nOrigScreenAdjustY = (int)(_globals.m_pOptionsRecon)->m_nScreenAdjustY;
  return;
}

EGameMenuStoryMenu* EGameMenuStoryMenu::EGameMenuStoryMenu() {
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_18EGameMenuStoryMenu;
  return this;
}

void EGameMenuStoryMenu::~EGameMenuStoryMenu(int __in_chrg) {
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_18EGameMenuStoryMenu;
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void EGameMenuStoryMenu::Init2(EGameMenuMainPanel *pPanel) {
	ChallengeData *pChallengeData;
	int nNumHouses;
	bool bLocked;
	bool bFound;
	int nTargetId;
	ERQTable<ChallengeData> *pTable;
	int nHouse;
	int nId;
	unsigned int n;
	
  int iVar1;
  int iVar2;
  UnlockedId *pUVar3;
  bool bVar4;
  bool bVar5;
  ERShader *pEVar6;
  ERQuickdata *this_00;
  void *pvVar7;
  int iVar8;
  UnlockedId *pUVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pPanel = pPanel;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_MaxOption = 3;
  pEVar6 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xb873bc96,(EFile *)0x0,0);
  this->m_pBackground = pEVar6;
  pEVar6 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x163691ff,(EFile *)0x0,0);
  this->m_pSimsLogoShader = pEVar6;
  pEVar6 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3f933f2,(EFile *)0x0,0);
  this->m_pLeftArrowShader = pEVar6;
  pEVar6 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x24100c84,(EFile *)0x0,0);
  this->m_pRightArrowShader = pEVar6;
  pEVar6 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xda8131bb,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_OptionSelected = 0;
  this->m_PulseAccumulator = 0.0;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bAllowBonus = 0;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this->m_pGlow = pEVar6;
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
  pvVar7 = getTable__11ERQuickdataPCc(this_00,"ChallengeData");
                    /* end of inlined section */
  iVar1 = *(int *)((int)pvVar7 + 0xc);
  iVar2 = *(int *)((int)pvVar7 + 4);
  SetSize__6ERFontffb(_globals.m_pFont,16.0,1.0,true);
  iVar12 = 0;
  if (0 < iVar1) {
    iVar8 = 0;
    do {
                    /* end of inlined section */
      iVar12 = iVar12 + 1;
      bVar5 = true;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      iVar11 = 0;
      bVar4 = false;
                    /* inlined from ../MSrc/vector.h */
      iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels.finish -
               (int)((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels.start;
                    /* end of inlined section */
      if (0 < iVar10) {
        pUVar3 = ((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels.start;
                    /* inlined from ../MSrc/vector.h */
        pUVar9 = pUVar3;
        do {
                    /* end of inlined section */
          iVar11 = iVar11 + 1;
          if (pUVar9->id == *(uchar *)(iVar8 + iVar2 + 0xc)) {
            bVar4 = true;
            bVar5 = false;
          }
        } while ((iVar11 < iVar10) && (pUVar9 = pUVar3 + iVar11, !bVar4));
      }
      if (bVar5) {
        if (_globals.Cheats._12_4_ != 0) {
          *(undefined4 *)&this->m_bAllowBonus = 1;
        }
      }
      else {
        *(undefined4 *)&this->m_bAllowBonus = 1;
      }
      iVar8 = iVar12 * 100;
    } while (iVar12 < iVar1);
  }
  DelRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
  return;
}

void EGameMenuStoryMenu::Reset() {
  ERShader *pEVar1;
  
  while (this->m_pBackground != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pBackground->field0_0x0);
    this->m_pBackground = (ERShader *)0x0;
  }
  pEVar1 = this->m_pSimsLogoShader;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pSimsLogoShader = (ERShader *)0x0;
    pEVar1 = this->m_pSimsLogoShader;
  }
  pEVar1 = this->m_pLeftArrowShader;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pLeftArrowShader = (ERShader *)0x0;
    pEVar1 = this->m_pLeftArrowShader;
  }
  pEVar1 = this->m_pRightArrowShader;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pRightArrowShader = (ERShader *)0x0;
    pEVar1 = this->m_pRightArrowShader;
  }
  pEVar1 = this->m_pGlow;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pGlow = (ERShader *)0x0;
    pEVar1 = this->m_pGlow;
  }
  this->m_OptionSelected = 0;
  this->m_pPanel = (EGameMenuMainPanel *)0x0;
  return;
}

void EGameMenuStoryMenu::Update() {
  EUIVirtualCtrl__vtable *pEVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x1000);
  if (lVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
    iVar2 = this->m_OptionSelected + -1;
    this->m_OptionSelected = iVar2;
    if (iVar2 < 0) {
      this->m_OptionSelected = this->m_MaxOption + -1;
    }
    if ((this->m_OptionSelected == 2) && (*(int *)&this->m_bAllowBonus == 0)) {
      this->m_OptionSelected = 1;
    }
  }
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x4000);
  if (lVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
    iVar2 = this->m_OptionSelected + 1;
    this->m_OptionSelected = iVar2;
    if (this->m_MaxOption <= iVar2) {
      this->m_OptionSelected = 0;
    }
    if ((this->m_OptionSelected == 2) && (*(int *)&this->m_bAllowBonus == 0)) {
      this->m_OptionSelected = 0;
    }
  }
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x40);
  if ((lVar3 == 0) || (*(int *)&this->m_ButtonDownLastTime != 0)) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                       0x10);
    if (lVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
      HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,1);
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
    iVar2 = this->m_OptionSelected;
    if (iVar2 == 0) {
      HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,7);
    }
    else if (iVar2 == 1) {
      HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,0xb);
    }
    else if (iVar2 == 2) {
      HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,3);
    }
    *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  }
  fVar4 = _dt * 5.0;
  *(undefined4 *)&this->m_ButtonDownLastTime = 0;
  fVar4 = this->m_PulseAccumulator + fVar4;
  this->m_PulseAccumulator = fVar4;
  if (6.283185 < fVar4) {
    this->m_PulseAccumulator = 0.0;
  }
  SetFullPrompt__18EGameMenuMainPanel(this->m_pPanel);
  return;
}

void EGameMenuStoryMenu::Draw(ERC *prc) {
	EVec2 vScreen;
	float PulseFactor;
	float PulseFactorX;
	float PulseFactorY;
	EVec4 PulseColor;
	float fWidth;
	float fHeight;
	EVec2 vGlowPos;
	EGraphics *this;
	float y;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  int iVar1;
  ERFont *pEVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  EVec2 *vPos;
  short *psVar6;
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
  float fVar7;
  float fVar8;
  EStorable__vtable *pEVar9;
  float fVar10;
  EVec2 vScreen;
  EVec4 PulseColor;
  EVec2 vGlowPos;
  undefined local_130 [20];
  EStorable__vtable *local_11c;
  ENodeListNode *local_118;
  ENodeListNode *local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  float local_100;
  float local_fc;
  EHashTableNode **local_f0;
  uint local_ec;
  EFontSize *local_e0;
  undefined4 local_dc;
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
  
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBackground,prc,0);
  fVar8 = 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos = (EVec2 *)(local_130 + 0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[1] = 0.0;
  PulseColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  PulseColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._4_4_ = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._0_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_114 = (ENodeListNode *)0x3f800000;
  local_118 = (ENodeListNode *)0x3f800000;
  local_11c = (EStorable__vtable *)0x3f800000;
  local_130._16_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
  local_fc = 0.1;
  local_100 = local_fc;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vScreen,&PulseColor,
             &vGlowPos,(ERFont *)local_130,vPos);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  vScreen.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
  vScreen.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pSimsLogoShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  PulseColor.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
  PulseColor.field0_0x0.d[0] = fVar8 - 128.0 / vScreen.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[1] = 1.0;
  vGlowPos.field0_0x0.d[0] = 1.0;
  local_104 = 0x3f800000;
  local_108 = 0x3f800000;
  local_10c = 0x3f800000;
  local_110 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&PulseColor,&vGlowPos,
             &local_110);
  fVar7 = sinf(this->m_PulseAccumulator);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  PulseColor.field0_0x0.d[0] = _CYAN.field0_0x0.d[0];
                    /* end of inlined section */
  fVar7 = (fVar7 * fVar8 + 1.0) * 10.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  PulseColor.field0_0x0.d[1] = _CYAN.field0_0x0.d[1];
  PulseColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
  PulseColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
                    /* end of inlined section */
  fVar10 = fVar7 / vScreen.field0_0x0.d[0];
  fVar7 = fVar7 / vScreen.field0_0x0.d[1];
  vGlowPos.field0_0x0.d[0] = fVar8;
  vGlowPos.field0_0x0.d[1] = fVar8;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pGlow,prc,0);
  iVar1 = this->m_OptionSelected;
  if (iVar1 == 0) {
    SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,false);
    pEVar2 = _globals.m_pFont;
    psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"start a life");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar2,SUB41(psVar6,0),(EWindow *)&pGifTag1);
    pEVar2 = _globals.m_pFont;
                    /* end of inlined section */
    local_100 = (float)local_130._0_4_ * 1.18 + fVar10;
    psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"start a life");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar2,SUB41(psVar6,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    vGlowPos.field0_0x0.d[1] = 0.42;
    vGlowPos.field0_0x0.d[0] = fVar8;
  }
  else if (iVar1 == 1) {
    SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,false);
    pEVar2 = _globals.m_pFont;
    psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"continue life");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar2,SUB41(psVar6,0),(EWindow *)&pGifTag1);
    pEVar2 = _globals.m_pFont;
                    /* end of inlined section */
    local_100 = (float)local_130._0_4_ * 1.18 + fVar10;
    psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"continue life");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar2,SUB41(psVar6,0),(EWindow *)&pGifTag1);
    vGlowPos.field0_0x0.d[0] = fVar8;
    vGlowPos.field0_0x0.d[1] = fVar8;
                    /* end of inlined section */
  }
  else {
    if (iVar1 != 2) goto LAB_0017f1e4;
    SetSize__6ERFontffb(_globals.m_pFont,20.0,1.0,false);
    pEVar2 = _globals.m_pFont;
    psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"bonus");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar2,SUB41(psVar6,0),(EWindow *)&pGifTag1);
    pEVar2 = _globals.m_pFont;
                    /* end of inlined section */
    local_100 = (float)local_130._0_4_ * 1.18 + fVar10;
    psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"bonus");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar2,SUB41(psVar6,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    vGlowPos.field0_0x0.d[1] = 0.6;
    vGlowPos.field0_0x0.d[0] = fVar8;
  }
  local_fc = (float)local_130._4_4_ * 1.75 + fVar7;
LAB_0017f1e4:
  fVar8 = 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_130._0_4_ = (EStorable__vtable *)(vGlowPos.field0_0x0.d[0] - local_100 * 0.5);
  local_130._4_4_ = (EStorable__vtable *)(vGlowPos.field0_0x0.d[1] - local_fc * 0.5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_f0 = (EHashTableNode **)0x0;
                    /* end of inlined section */
  local_100 = (float)local_130._0_4_ + local_100;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_fc = (float)local_130._4_4_ + local_fc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ec = 0x3f800000;
  local_dc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_e0 = (EFontSize *)0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,(ERFont *)local_130,
             &local_100,&local_f0,&local_e0,0x3632a0);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,false);
  uVar5 = _BLACK.field0_0x0.d[3];
  uVar4 = _BLACK.field0_0x0.d[2];
  uVar3 = _BLACK.field0_0x0._0_8_;
  pEVar2 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
  (pEVar2->m_vColor).field0_0x0.d[2] = uVar4;
  (pEVar2->m_vColor).field0_0x0.d[3] = uVar5;
  psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"start a life");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_130._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + fVar8);
  local_130._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + 0.42);
  local_130._16_4_ = local_130._0_4_;
  local_11c = local_130._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar6,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  uVar5 = _WHITE.field0_0x0.d[3];
  uVar4 = _WHITE.field0_0x0.d[2];
  uVar3 = _WHITE.field0_0x0._0_8_;
  pEVar2 = _globals.m_pFont;
                    /* end of inlined section */
  if (this->m_OptionSelected == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
    (pEVar2->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
    (pEVar2->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
    (pEVar2->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar2->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar2->m_vColor).field0_0x0.d[3] = uVar5;
  }
                    /* end of inlined section */
  psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"start a life");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar8 = 0.5;
  local_130._0_4_ = (EStorable__vtable *)0x3f000000;
  local_130._4_4_ = (EStorable__vtable *)0x3ed70a3d;
  local_130._16_4_ = (EStorable__vtable *)0x3f000000;
  local_11c = (EStorable__vtable *)0x3ed70a3d;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar6,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,true);
  uVar5 = _BLACK.field0_0x0.d[3];
  uVar4 = _BLACK.field0_0x0.d[2];
  uVar3 = _BLACK.field0_0x0._0_8_;
  pEVar2 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
  (pEVar2->m_vColor).field0_0x0.d[2] = uVar4;
  (pEVar2->m_vColor).field0_0x0.d[3] = uVar5;
  psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"continue life");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_130._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + fVar8);
  local_130._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + fVar8);
  local_130._16_4_ = local_130._0_4_;
  local_11c = local_130._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar6,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  uVar5 = _WHITE.field0_0x0.d[3];
  uVar4 = _WHITE.field0_0x0.d[2];
  uVar3 = _WHITE.field0_0x0._0_8_;
  pEVar2 = _globals.m_pFont;
                    /* end of inlined section */
  if (this->m_OptionSelected == 1) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
    (pEVar2->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
    (pEVar2->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
    (pEVar2->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar2->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar2->m_vColor).field0_0x0.d[3] = uVar5;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar9 = (EStorable__vtable *)0x3f000000;
                    /* end of inlined section */
  psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"continue life");
  local_130._0_4_ = pEVar9;
  local_130._4_4_ = pEVar9;
  local_130._16_4_ = pEVar9;
  local_11c = pEVar9;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar6,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
  if (*(int *)&this->m_bAllowBonus != 0) {
    Select__6ERFontP3ERC(_globals.m_pFont,prc);
    SetSize__6ERFontffb(_globals.m_pFont,20.0,1.0,true);
    uVar5 = _BLACK.field0_0x0.d[3];
    uVar4 = _BLACK.field0_0x0.d[2];
    uVar3 = _BLACK.field0_0x0._0_8_;
    pEVar2 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar2->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar2->m_vColor).field0_0x0.d[3] = uVar5;
    psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"bonus");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_130._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + (float)pEVar9);
    local_130._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + 0.6);
    local_130._16_4_ = local_130._0_4_;
    local_11c = local_130._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar6,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
    uVar5 = _WHITE.field0_0x0.d[3];
    uVar4 = _WHITE.field0_0x0.d[2];
    uVar3 = _WHITE.field0_0x0._0_8_;
    pEVar2 = _globals.m_pFont;
                    /* end of inlined section */
    if (this->m_OptionSelected == 2) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
      (pEVar2->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
      (pEVar2->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
      (pEVar2->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
    }
    else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
      (pEVar2->m_vColor).field0_0x0.d[2] = uVar4;
      (pEVar2->m_vColor).field0_0x0.d[3] = uVar5;
    }
                    /* end of inlined section */
    psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"bonus");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130._0_4_ = (EStorable__vtable *)0x3f000000;
    local_130._4_4_ = (EStorable__vtable *)0x3f19999a;
    local_130._16_4_ = (EStorable__vtable *)0x3f000000;
    local_11c = (EStorable__vtable *)0x3f19999a;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar6,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  }
                    /* end of inlined section */
  return;
}

EGameMenuBonusMenu* EGameMenuBonusMenu::EGameMenuBonusMenu() {
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_18EGameMenuBonusMenu;
  __7EUIMenuiifff(&this->m_ChallengeLevels,-1,0,0.05,0.0,0.0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ChallengeItemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_ChallengeItemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pPartyMotel = (EChallengeMenuItem *)0x0;
  return this;
}

void EGameMenuBonusMenu::~EGameMenuBonusMenu(int __in_chrg) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_18EGameMenuBonusMenu;
  RemoveAll__9ENodeList(&(this->m_ChallengeItemList).field0_0x0);
                    /* end of inlined section */
  ___7EUIMenu(&this->m_ChallengeLevels,2);
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void EGameMenuBonusMenu::Init2(EGameMenuMainPanel *pPanel) {
	EChallengeMenuItem *pItem;
	ChallengeData *pChallengeData;
	int nNumHouses;
	bool bLocked;
	bool bFound;
	int nTargetId;
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EVec2 vSize;
	float x;
	EGraphics *this;
	ERQTable<ChallengeData> *pTable;
	int nHouse;
	int nId;
	unsigned int n;
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EVec2 vSize;
	void *result;
	ELocString *this;
	EUIVirtualCtrl *pCtrl;
	ELocString *this;
	float x;
	float z;
	EUIIcon *this;
	EChallengeMenuItem *this;
	EUIObjectNode *data;
	void *result;
	EUIVirtualCtrl *pCtrl;
	float x;
	float z;
	EUIIcon *this;
	EChallengeMenuItem *this;
	EUIObjectNode *this;
	EUIObjectNode *data;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  EUIObjectNode__vtable *pEVar6;
  int iVar7;
  UnlockedId *pUVar8;
  uint uVar9;
  ulong *puVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  ERShader *pEVar14;
  ERQuickdata *this_00;
  void *pvVar15;
  UnlockedId *pUVar16;
  EChallengeMenuItem *pEVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  undefined8 unaff_s0;
  EUIMenu *this_01;
  undefined8 unaff_s1;
  int iVar21;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  int iVar22;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float ySize;
  EVec2 vSize;
  Controllpad *local_140;
  __vtbl_ptr_type *local_13c;
  ENodeListNode *local_138;
  EUIIconDef icondef;
  EUITextIconDef textdef;
  EUIIconDef__vtable *local_f0;
  int local_ec;
  float local_e8;
  EUIIconDef__vtable *local_e0;
  int local_dc;
  EHashTableNode *local_d8;
  int nNumHouses;
  EUIIconDef *local_cc;
  EVec3 *local_c8;
  TNodeList_EUIObjectNode___ *local_c4;
  EUIMenu *local_c0;
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
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_c4 = &this->m_ChallengeItemList;
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  this_01 = &this->m_ChallengeLevels;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* end of inlined section */
  this->m_pPanel = pPanel;
  this->m_MaxOption = 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  ySize = 16.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar14 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xb873bc96,(EFile *)0x0,0);
  this->m_pBackground = pEVar14;
  pEVar14 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x163691ff,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pSimsLogoShader = pEVar14;
  local_c0 = this_01;
  pEVar14 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3f933f2,(EFile *)0x0,0);
  this->m_pLeftArrowShader = pEVar14;
  pEVar14 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x24100c84,(EFile *)0x0,0);
  this->m_pRightArrowShader = pEVar14;
  pEVar14 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xda8131bb,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  this->m_pGlow = pEVar14;
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  this->m_OptionSelected = 0;
  this->m_PulseAccumulator = 0.0;
  this->m_nDisplayMode = 0;
  this->m_fAnimationTime = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vScoreSize).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3e8000003eb33333U >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vScoreSize & 7;
  puVar10 = (ulong *)((int)&this->m_vScoreSize - uVar9);
  *puVar10 = 0x3e8000003eb33333 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_vScorePosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3ee666663f0ccccdU >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vScorePosStart & 7;
  puVar10 = (ulong *)((int)&this->m_vScorePosStart - uVar9);
  *puVar10 = 0x3ee666663f0ccccd << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_vScorePosEnd).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3ee666663dcccccdU >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vScorePosEnd & 7;
  puVar10 = (ulong *)((int)&this->m_vScorePosEnd - uVar9);
  *puVar10 = 0x3ee666663dcccccd << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_vScorePosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar9 = (uint)puVar1 & 7;
  uVar5 = (uint)&this->m_vScorePosStart & 7;
  uVar18 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
           0xffffffffffffffffU >> (uVar9 + 1) * 8 & 0x3ee666663dcccccd) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)&this->m_vScorePosStart - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&(this->m_vScorePosCur).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar18 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vScorePosCur & 7;
  puVar10 = (ulong *)((int)&this->m_vScorePosCur - uVar9);
  *puVar10 = uVar18 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_vDetailSize).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3e8000003e99999aU >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vDetailSize & 7;
  puVar10 = (ulong *)((int)&this->m_vDetailSize - uVar9);
  *puVar10 = 0x3e8000003e99999a << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_vDetailPosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3ee666663f866666U >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vDetailPosStart & 7;
  puVar10 = (ulong *)((int)&this->m_vDetailPosStart - uVar9);
  *puVar10 = 0x3ee666663f866666 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  fVar13 = _13EUIObjectNode_SAFE_LEFT;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vSize.field0_0x0.d[0] = 0.6;
  vSize.field0_0x0.d[1] = 0.45;
  puVar1 = (undefined *)((int)&(this->m_vDetailPosEnd).field0_0x0 + 7);
                    /* end of inlined section */
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3ee666663f19999aU >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vDetailPosEnd & 7;
  puVar10 = (ulong *)((int)&this->m_vDetailPosEnd - uVar9);
  *puVar10 = 0x3ee666663f19999a << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_vDetailPosStart).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  uVar5 = (uint)&this->m_vDetailPosStart & 7;
  uVar18 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
           (long)(int)pEVar14 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)&this->m_vDetailPosStart - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&(this->m_vDetailPosCur).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar18 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vDetailPosCur & 7;
  puVar10 = (ulong *)((int)&this->m_vDetailPosCur - uVar9);
  *puVar10 = uVar18 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_140 = (Controllpad *)fVar13;
  local_13c = (__vtbl_ptr_type *)0x0;
                    /* end of inlined section */
  local_138 = (ENodeListNode *)0x3ea8f5c3;
  SetPos__13EUIObjectNodeRC5EVec3(&this_01->field0_0x0,(EVec3 *)&local_140);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vSize.field0_0x0.d[0] = 0.5 - fVar13;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vSize.field0_0x0.d[1] = 0.4;
                    /* end of inlined section */
  SetBoxDims__7EUIMenuRC5EVec2(this_01,&vSize);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar6 = (this->m_ChallengeLevels).field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  (this->m_ChallengeLevels).m_optgap = 4.0 / (float)_pGfx->m_yscreen;
  (*(code *)pEVar6[2].Message)
            ((int)this_01->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
  (this->m_ChallengeLevels).m_layout = 0;
  SetOptJust__7EUIMenuii(this_01,0,1);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib(&this_01->field0_0x0,1,true);
  SetFlagsPropigate__13EUIObjectNodeUib(&this_01->field0_0x0,4,true);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  (this->m_ChallengeLevels).m_stick = 4;
                    /* end of inlined section */
  SetActiveController__13EUIObjectNodeUi(&this_01->field0_0x0,0);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
  pvVar15 = getTable__11ERQuickdataPCc(this_00,"ChallengeData");
                    /* end of inlined section */
  nNumHouses = *(int *)((int)pvVar15 + 0xc);
  iVar7 = *(int *)((int)pvVar15 + 4);
  SetSize__6ERFontffb(_globals.m_pFont,ySize,1.0,true);
  local_cc = &icondef;
  local_c8 = (EVec3 *)&local_e0;
  if (0 < nNumHouses) {
    iVar21 = 0;
    do {
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      bVar12 = true;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      iVar20 = 0;
      bVar11 = false;
      iVar22 = iVar21 + 1;
                    /* inlined from ../MSrc/vector.h */
      iVar19 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels.finish -
               (int)((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels.start;
                    /* end of inlined section */
      if (0 < iVar19) {
        pUVar8 = ((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels.start;
                    /* inlined from ../MSrc/vector.h */
        pUVar16 = pUVar8;
        do {
          iVar20 = iVar20 + 1;
          if (pUVar16->id == *(uchar *)(iVar21 * 100 + iVar7 + 0xc)) {
            bVar11 = true;
            bVar12 = false;
          }
        } while ((iVar20 < iVar19) && (pUVar16 = pUVar8 + iVar20, !bVar11));
      }
      if ((iVar21 != 6) && ((!bVar12 || (_globals.Cheats._12_4_ != 0)))) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
        pEVar17 = (EChallengeMenuItem *)_memmanAlloc__FUiUi(0xa8,4);
        memset(pEVar17,0,0xa8);
                    /* end of inlined section */
        pEVar17 = __18EChallengeMenuItem(pEVar17);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        pEVar6 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        (*(code *)pEVar6[2].Message)
                  ((int)(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar6[2].SetBoxDims + 4,**(undefined4 **)(iVar21 * 100 + iVar7));
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
        icondef.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
        textdef.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        icondef.m_selColorIdx = 1;
        icondef.m_colorIdx = 1;
        icondef.m_flags = 0;
        textdef.m_xAlign = E_FAX_LEFT;
        textdef.m_yAlign = E_FAY_TOP;
        textdef.m_colorIdx = 1;
        textdef.m_selColorIdx = 6;
                    /* end of inlined section */
        textdef.m_retChar = -1;
        textdef.m_pointsize = ySize;
        SetFont__11EUITextIconi((EUITextIcon *)pEVar17,-0x2080f4e9);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        DoGetStringSize__6ERFontPvbP7EWindow
                  ((ERFont *)&vSize,_globals.m_pFont,
                   SUB41(**(undefined4 **)(iVar21 * 100 + iVar7),0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
        pEVar6 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_f0 = (EUIIconDef__vtable *)vSize.field0_0x0.d[0];
        local_e8 = vSize.field0_0x0.d[1];
        local_ec = 0;
                    /* end of inlined section */
        (*(code *)pEVar6->GetPos)
                  ((int)(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar6->OnStickRepeat + 4,(EVec3 *)&local_f0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        local_f0 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        puVar1 = (undefined *)
                 ((int)&(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.m_trigger + 3);
        uVar9 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar9);
        *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
                   CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar9) * 8;
        pEVar2 = &(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def;
        uVar9 = (uint)pEVar2 & 7;
        puVar10 = (ulong *)((int)pEVar2 - uVar9);
        *puVar10 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar9 * 8 |
                   *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
        puVar1 = (undefined *)
                 ((int)&(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
        uVar9 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar9);
        *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
                   CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar9) * 8;
        piVar3 = &(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.m_selColorIdx;
        uVar9 = (uint)piVar3 & 7;
        puVar10 = (ulong *)((int)piVar3 - uVar9);
        *puVar10 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar9 * 8 |
                   *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
        puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable + 3)
        ;
        uVar9 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar9);
        *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
                   CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar9) * 8;
        ppEVar4 = &(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.m_pCtrl;
        uVar9 = (uint)ppEVar4 & 7;
        puVar10 = (ulong *)((int)ppEVar4 - uVar9);
        *puVar10 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar9 * 8 |
                   *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* end of inlined section */
        pEVar6 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
        (pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_f0;
                    /* end of inlined section */
        (*(code *)pEVar6[2].GetPos)
                  ((int)(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar6[2].OnStickRepeat + 4,&textdef);
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
        pEVar17->m_nData = (uchar)iVar21;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_e8 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_ec = 0;
                    /* end of inlined section */
        local_f0 = (EUIIconDef__vtable *)0x0;
        AddOpt__7EUIMenuP13EUIObjectNodeG5EVec3
                  (local_c0,(EUIObjectNode *)pEVar17,(EVec3 *)&local_f0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&local_c4->field0_0x0,(uint)pEVar17);
        icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
      }
      iVar21 = iVar22;
    } while (iVar22 < nNumHouses);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
  pEVar17 = (EChallengeMenuItem *)_memmanAlloc__FUiUi(0xa8,4);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
  memset(pEVar17,0,0xa8);
                    /* end of inlined section */
  pEVar17 = __18EChallengeMenuItem(pEVar17);
  pEVar6 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  (*(code *)pEVar6[2].Message)
            ((int)(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6[2].SetBoxDims + 4,**(undefined4 **)(iVar7 + 600));
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_flags = 0x20;
  vSize.field0_0x0.d[1] = 8.96831e-44;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_140 = _globals.m_pCtrlPad;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_13c = _vt_10EUIIconDef;
  vSize.field0_0x0.d[0] = 0.0;
  icondef.m_trigger = 0;
  icondef.m_selColorIdx = 0;
  local_cc->m_colorIdx = 0x41800000;
  local_cc->__vtable = (EUIIconDef__vtable *)&pGifTag1;
  local_cc->m_pCtrl = (EUIVirtualCtrl *)&pmTrans;
                    /* end of inlined section */
  SetFont__11EUITextIconi((EUITextIcon *)pEVar17,-0x2080f4e9);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&textdef,_globals.m_pFont,SUB41(**(undefined4 **)(iVar7 + 600),0),
             (EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar6 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_e0 = (EUIIconDef__vtable *)textdef.m_maxChars;
  local_d8 = (EHashTableNode *)textdef.m_xAlign;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_dc = 0;
                    /* end of inlined section */
  (*(code *)pEVar6->GetPos)
            ((int)(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6->OnStickRepeat + 4,local_c8);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
             CONCAT44(vSize.field0_0x0.d[1],vSize.field0_0x0.d[0]) >> (7 - uVar9) * 8;
  pEVar2 = &(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = CONCAT44(vSize.field0_0x0.d[1],vSize.field0_0x0.d[0]) << uVar9 * 8 |
             *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000001U >> (7 - uVar9) * 8;
  piVar3 = &(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000001 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_13c,local_140) >> (7 - uVar9) * 8;
  ppEVar4 = &(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = CONCAT44(local_13c,local_140) << uVar9 * 8 |
             *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* end of inlined section */
  pEVar6 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  (pEVar17->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_e0;
                    /* end of inlined section */
  (*(code *)pEVar6[2].GetPos)
            ((int)(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6[2].OnStickRepeat + 4,local_cc);
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
  pEVar17->m_nData = '\x06';
                    /* end of inlined section */
  if (_globals.Cheats._16_4_ == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    pEVar6 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6[1].Draw)
              ((int)(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6[1].Update + 4,0x16,0);
    (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags =
         (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags & 0xffffffe9;
                    /* end of inlined section */
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_d8 = (EHashTableNode *)0x0;
  local_dc = 0;
                    /* end of inlined section */
  local_e0 = (EUIIconDef__vtable *)0x0;
  AddOpt__7EUIMenuP13EUIObjectNodeG5EVec3(local_c0,(EUIObjectNode *)pEVar17,local_c8);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&local_c4->field0_0x0,(uint)pEVar17);
                    /* end of inlined section */
  this->m_pPartyMotel = pEVar17;
  DelRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  return;
}

void EGameMenuBonusMenu::Reset() {
	NLIterator i;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ERShader *pEVar2;
  ENodeListNode *pEVar3;
  
  while( true ) {
    if (this->m_pBackground == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pBackground->field0_0x0);
    this->m_pBackground = (ERShader *)0x0;
  }
  while (this->m_pSimsLogoShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pSimsLogoShader->field0_0x0);
    this->m_pSimsLogoShader = (ERShader *)0x0;
  }
  pEVar2 = this->m_pLeftArrowShader;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pLeftArrowShader = (ERShader *)0x0;
    pEVar2 = this->m_pLeftArrowShader;
  }
  pEVar2 = this->m_pRightArrowShader;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pRightArrowShader = (ERShader *)0x0;
    pEVar2 = this->m_pRightArrowShader;
  }
  pEVar2 = this->m_pGlow;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pGlow = (ERShader *)0x0;
    pEVar2 = this->m_pGlow;
  }
  this->m_pPanel = (EGameMenuMainPanel *)0x0;
  this->m_OptionSelected = 0;
  RemoveAllOpts__7EUIMenu(&this->m_ChallengeLevels);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_ChallengeItemList).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      if (uVar1 != 0) {
        (**(code **)(*(int *)(uVar1 + 0x38) + 0xc))
                  (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x38) + 8),3);
      }
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_ChallengeItemList).field0_0x0);
  return;
}

void EGameMenuBonusMenu::Update() {
	EUIObjectMover HermiteBlend;
	EUIObjectMover *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	EUIObjectMover *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	EController *this;
	bool bStable;
	bool bSupported;
	EController *this;
	bool bStable;
	bool bSupported;
	
  undefined *puVar1;
  uint uVar2;
  EUIVirtualCtrl__vtable *pEVar3;
  ulong *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EUIObjectMover HermiteBlend;
  
  if ((this->m_nDisplayMode - 2U < 2) &&
     (fVar11 = this->m_fAnimationTime - _dt, this->m_fAnimationTime = fVar11, fVar11 <= 0.0)) {
    this->m_fAnimationTime = 0.0;
    if (this->m_nDisplayMode == 2) {
      this->m_nDisplayMode = 0;
    }
    else {
      this->m_nDisplayMode = 1;
    }
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  fVar11 = 0.0;
                    /* end of inlined section */
  iVar6 = this->m_nDisplayMode;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  if (iVar6 == 3) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
    fVar10 = 0.5 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    if (0.0 <= fVar10) {
      fVar11 = (float)((int)fVar10 * (uint)(fVar10 < 0.5) | (uint)(fVar10 >= 0.5) * 0x3f000000);
    }
    fVar12 = (this->m_vScorePosStart).field0_0x0.d[0];
    fVar10 = 1.0 - (0.5 - fVar11) / 0.5;
    fVar10 = fVar10 * -2.0 * fVar10 * fVar10 + fVar10 * 3.0 * fVar10;
    uVar7 = CONCAT44((this->m_vScorePosStart).field0_0x0.d[1] +
                     ((this->m_vScorePosEnd).field0_0x0.d[1] -
                     (this->m_vScorePosStart).field0_0x0.d[1]) * fVar10,
                     fVar12 + ((this->m_vScorePosEnd).field0_0x0.d[0] - fVar12) * fVar10);
    puVar1 = (undefined *)((int)&(this->m_vScorePosCur).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar9);
    *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 | uVar7 >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vScorePosCur & 7;
    puVar4 = (ulong *)((int)&this->m_vScorePosCur - uVar9);
    *puVar4 = uVar7 << uVar9 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* end of inlined section */
    fVar10 = (this->m_vScorePosEnd).field0_0x0.d[0];
    if ((this->m_vScorePosCur).field0_0x0.d[0] < fVar10) {
      (this->m_vScorePosCur).field0_0x0.d[0] = fVar10;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar10 = (this->m_vDetailPosStart).field0_0x0.d[0];
    fVar11 = 1.0 - (0.5 - fVar11) / 0.5;
    fVar11 = fVar11 * -2.0 * fVar11 * fVar11 + fVar11 * 3.0 * fVar11;
    uVar7 = CONCAT44((this->m_vDetailPosStart).field0_0x0.d[1] +
                     ((this->m_vDetailPosEnd).field0_0x0.d[1] -
                     (this->m_vDetailPosStart).field0_0x0.d[1]) * fVar11,
                     fVar10 + ((this->m_vDetailPosEnd).field0_0x0.d[0] - fVar10) * fVar11);
    puVar1 = (undefined *)((int)&(this->m_vDetailPosCur).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar9);
    *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 | uVar7 >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vDetailPosCur & 7;
    puVar4 = (ulong *)((int)&this->m_vDetailPosCur - uVar9);
    *puVar4 = uVar7 << uVar9 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* end of inlined section */
    fVar11 = (this->m_vDetailPosEnd).field0_0x0.d[0];
    bVar5 = (this->m_vDetailPosCur).field0_0x0.d[0] < fVar11;
code_r0x001803b4:
    if (bVar5) {
      (this->m_vDetailPosCur).field0_0x0.d[0] = fVar11;
LAB_0018041c:
      iVar6 = this->m_nDisplayMode;
    }
    else {
      iVar6 = this->m_nDisplayMode;
    }
  }
  else {
    if (iVar6 == 2) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar10 = 0.5 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (0.0 <= fVar10) {
        fVar11 = (float)((int)fVar10 * (uint)(fVar10 < 0.5) | (uint)(fVar10 >= 0.5) * 0x3f000000);
      }
      fVar12 = (this->m_vScorePosEnd).field0_0x0.d[0];
      fVar10 = 1.0 - (0.5 - fVar11) / 0.5;
      fVar10 = fVar10 * -2.0 * fVar10 * fVar10 + fVar10 * 3.0 * fVar10;
      uVar7 = CONCAT44((this->m_vScorePosEnd).field0_0x0.d[1] +
                       ((this->m_vScorePosStart).field0_0x0.d[1] -
                       (this->m_vScorePosEnd).field0_0x0.d[1]) * fVar10,
                       fVar12 + ((this->m_vScorePosStart).field0_0x0.d[0] - fVar12) * fVar10);
      puVar1 = (undefined *)((int)&(this->m_vScorePosCur).field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar9);
      *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 | uVar7 >> (7 - uVar9) * 8;
      uVar9 = (uint)&this->m_vScorePosCur & 7;
      puVar4 = (ulong *)((int)&this->m_vScorePosCur - uVar9);
      *puVar4 = uVar7 << uVar9 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* end of inlined section */
      fVar10 = (this->m_vScorePosStart).field0_0x0.d[0];
      if (fVar10 < (this->m_vScorePosCur).field0_0x0.d[0]) {
        (this->m_vScorePosCur).field0_0x0.d[0] = fVar10;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      fVar10 = (this->m_vDetailPosEnd).field0_0x0.d[0];
      fVar11 = 1.0 - (0.5 - fVar11) / 0.5;
      fVar11 = fVar11 * -2.0 * fVar11 * fVar11 + fVar11 * 3.0 * fVar11;
      uVar7 = CONCAT44((this->m_vDetailPosEnd).field0_0x0.d[1] +
                       ((this->m_vDetailPosStart).field0_0x0.d[1] -
                       (this->m_vDetailPosEnd).field0_0x0.d[1]) * fVar11,
                       fVar10 + ((this->m_vDetailPosStart).field0_0x0.d[0] - fVar10) * fVar11);
      puVar1 = (undefined *)((int)&(this->m_vDetailPosCur).field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar9);
      *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 | uVar7 >> (7 - uVar9) * 8;
      uVar9 = (uint)&this->m_vDetailPosCur & 7;
      puVar4 = (ulong *)((int)&this->m_vDetailPosCur - uVar9);
      *puVar4 = uVar7 << uVar9 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* end of inlined section */
      fVar11 = (this->m_vDetailPosStart).field0_0x0.d[0];
      bVar5 = fVar11 < (this->m_vDetailPosCur).field0_0x0.d[0];
      goto code_r0x001803b4;
    }
    if (iVar6 != 0) {
      if (iVar6 != 1) {
        iVar6 = this->m_nDisplayMode;
        goto LAB_00180420;
      }
      puVar1 = (undefined *)((int)&(this->m_vScorePosEnd).field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      uVar2 = (uint)&this->m_vScorePosEnd & 7;
      uVar7 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
              0xffffffffffffffffU >> (uVar9 + 1) * 8 & 1) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)&this->m_vScorePosEnd - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&(this->m_vScorePosCur).field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar9);
      *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 | uVar7 >> (7 - uVar9) * 8;
      uVar9 = (uint)&this->m_vScorePosCur & 7;
      puVar4 = (ulong *)((int)&this->m_vScorePosCur - uVar9);
      *puVar4 = uVar7 << uVar9 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
      puVar1 = (undefined *)((int)&(this->m_vDetailPosEnd).field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      uVar2 = (uint)&this->m_vDetailPosEnd & 7;
      uVar7 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
              uVar7 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((int)&this->m_vDetailPosEnd - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&(this->m_vDetailPosCur).field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar9);
      *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 | uVar7 >> (7 - uVar9) * 8;
      uVar9 = (uint)&this->m_vDetailPosCur & 7;
      puVar4 = (ulong *)((int)&this->m_vDetailPosCur - uVar9);
      *puVar4 = uVar7 << uVar9 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
      goto LAB_0018041c;
    }
    puVar1 = (undefined *)((int)&(this->m_vScorePosStart).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    uVar2 = (uint)&this->m_vScorePosStart & 7;
    uVar7 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
            0xffffffffffffffffU >> (uVar9 + 1) * 8 & 1) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)&this->m_vScorePosStart - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&(this->m_vScorePosCur).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar9);
    *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 | uVar7 >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vScorePosCur & 7;
    puVar4 = (ulong *)((int)&this->m_vScorePosCur - uVar9);
    *puVar4 = uVar7 << uVar9 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this->m_vDetailPosStart).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    uVar2 = (uint)&this->m_vDetailPosStart & 7;
    uVar7 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)&this->m_vDetailPosStart - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&(this->m_vDetailPosCur).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar9);
    *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 | uVar7 >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vDetailPosCur & 7;
    puVar4 = (ulong *)((int)&this->m_vDetailPosCur - uVar9);
    *puVar4 = uVar7 << uVar9 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    iVar6 = this->m_nDisplayMode;
  }
LAB_00180420:
  if (iVar6 == 0) {
                    /* inlined from /eor/src2/engine/e_ctrl.h */
    uVar9 = 0;
    if ((_ctrlPads[1]->m_status >> 2 & 1U) != 0) {
      uVar9 = _ctrlPads[1]->m_status & 1;
    }
                    /* end of inlined section */
    if (uVar9 == 0) {
      SetDetBackPrompt__18EGameMenuMainPanel(this->m_pPanel);
      uVar9 = this->m_nDisplayMode;
    }
    else {
      SetSelDetBackPrompt__18EGameMenuMainPanel(this->m_pPanel);
      uVar9 = this->m_nDisplayMode;
    }
  }
  else if (iVar6 == 1) {
    SetBackPrompt__18EGameMenuMainPanel(this->m_pPanel);
    uVar9 = this->m_nDisplayMode;
  }
  else {
    DisablePrompt__18EGameMenuMainPanel(this->m_pPanel);
    uVar9 = this->m_nDisplayMode;
  }
  if (1 < uVar9) {
    return;
  }
  pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar8 = (*(code *)pEVar3[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,0,
                     0x40);
  if ((lVar8 == 0) || (*(int *)&this->m_ButtonDownLastTime != 0)) {
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar8 = (*(code *)pEVar3[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,0,
                       0x10);
    if (lVar8 != 0) {
      if (this->m_nDisplayMode != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
        iVar6 = 2;
                    /* end of inlined section */
LAB_0018062c:
        this->m_nDisplayMode = iVar6;
        this->m_fAnimationTime = 0.5;
        goto LAB_00180634;
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
      HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,2);
      iVar6 = this->m_nDisplayMode;
      goto LAB_00180638;
    }
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar8 = (*(code *)pEVar3[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,0,
                       0x80);
    iVar6 = this->m_nDisplayMode;
    if (lVar8 == 0) goto LAB_00180638;
    if (iVar6 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
      iVar6 = 3;
      goto LAB_0018062c;
    }
  }
  else {
    if (this->m_nDisplayMode == 0) {
                    /* inlined from /eor/src2/engine/e_ctrl.h */
      uVar9 = 0;
      if ((_ctrlPads[1]->m_status >> 2 & 1U) != 0) {
        uVar9 = _ctrlPads[1]->m_status & 1;
      }
                    /* end of inlined section */
      if (uVar9 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
        HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,9);
        _globals._20_4_ = 1;
      }
    }
    *(undefined4 *)&this->m_ButtonDownLastTime = 1;
LAB_00180634:
    iVar6 = this->m_nDisplayMode;
LAB_00180638:
    if (iVar6 == 0) {
      Update__7EUIMenu(&this->m_ChallengeLevels);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
                    /* end of inlined section */
      _globals.ChallengeModeHouseNum =
           *(char *)&(this->m_ChallengeLevels).m_pCurOpt[2].m_pos.field0_0x0 + '\x01';
      goto LAB_00180714;
    }
  }
  if (iVar6 == 1) {
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar8 = (*(code *)pEVar3[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,0,
                       0x1000);
    if (lVar8 == 0) {
      pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar8 = (*(code *)pEVar3[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                         0,0x4000);
      if (lVar8 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
        iVar6 = this->m_OptionSelected + 1;
        this->m_OptionSelected = iVar6;
        if (4 < iVar6) {
          this->m_OptionSelected = 0;
        }
      }
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
      iVar6 = this->m_OptionSelected + -1;
      this->m_OptionSelected = iVar6;
      if (iVar6 < 0) {
        this->m_OptionSelected = 4;
      }
    }
  }
LAB_00180714:
  fVar11 = _dt * 5.0;
  *(undefined4 *)&this->m_ButtonDownLastTime = 0;
  fVar11 = this->m_PulseAccumulator + fVar11;
  this->m_PulseAccumulator = fVar11;
  if (6.283185 < fVar11) {
    this->m_PulseAccumulator = 0.0;
  }
  return;
}

void EGameMenuBonusMenu::Draw(ERC *prc) {
	int i;
	EVec2 vScreen;
	EVec2 vPos;
	EVec2 vSize;
	float PulseFactor;
	float PulseFactorX;
	float PulseFactorY;
	EGraphics *this;
	float y;
	EVec2 vPos;
	EVec2 vSize;
	float fWidth;
	float fHeight;
	EVec2 vGlowPos;
	NLIterator nli;
	bool bDone;
	NLIterator i;
	NLIterator i;
	NLIterator nli;
	NLIterator i;
	NLIterator i;
	int nHouse;
	EVec2 vLinePos;
	short unsigned int sBuffer[32];
	EVec2 &v;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	float y;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	float y;
	ERFont *this;
	ERC *prc;
	ChallengeData *pChallengeData;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	float y;
	ERFont *this;
	ERC *prc;
	
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  bool bVar6;
  ERFont *pEVar7;
  float *pfVar8;
  int iVar9;
  short *psVar10;
  ERQuickdata *this_00;
  void *pvVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ENodeListNode *pEVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  EVec2 vScreen;
  float local_1d0;
  float local_1cc;
  float local_1c0;
  float local_1bc;
  EVec2 vPos;
  float local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  undefined4 local_188;
  undefined4 local_184;
  EVec2 vSize;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_140;
  undefined4 local_13c;
  short sBuffer [32];
  undefined1 *nli;
  EVec2 *v;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar24 = 0.0;
  Select__8ERShaderP3ERCi(this->m_pBackground,prc,0);
  fVar20 = 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1d0 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1cc = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1bc = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar24,0x3f800000);
  local_194 = 0x3f800000;
  local_198 = 0x3f800000;
  local_19c = 1.0;
  local_1a0 = 1.0;
                    /* end of inlined section */
  fVar19 = 16.0;
  vScreen.field0_0x0.d[0] = fVar24;
  vScreen.field0_0x0.d[1] = fVar24;
  local_1c0 = fVar24;
  (*(code *)prc->__vtable[1].DisplayList)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vScreen,&local_1d0,
             &local_1c0,(EVec4 *)&vPos,&local_1a0);
  fVar25 = 8.0;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  vScreen.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
  vScreen.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pSimsLogoShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1cc = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
  local_1d0 = 0.5 - 128.0 / vScreen.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1bc = 1.0;
  local_1c0 = 1.0;
  local_184 = 0x3f800000;
  local_188 = 0x3f800000;
  local_18c = 1.0;
  local_190 = 1.0;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (fVar24,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_1d0,
             &local_1c0,&local_190);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1d0 = (this->m_vScorePosCur).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1cc = (this->m_vScorePosCur).field0_0x0.d[1];
  local_1c0 = (this->m_vScoreSize).field0_0x0.d[0];
  local_1bc = (this->m_vScoreSize).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,local_1d0 - 24.0 / vScreen.field0_0x0.d[0],
             local_1cc - 24.0 / vScreen.field0_0x0.d[1],
             local_1d0 + local_1c0 + 24.0 / vScreen.field0_0x0.d[0],
             local_1cc + local_1bc + 24.0 / vScreen.field0_0x0.d[1],1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vPos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f8000003f800000;
                    /* end of inlined section */
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,local_1d0 - fVar25 / vScreen.field0_0x0.d[0],
             local_1cc - fVar25 / vScreen.field0_0x0.d[1],
             local_1bc + fVar19 / vScreen.field0_0x0.d[1],
             local_1c0 + fVar19 / vScreen.field0_0x0.d[0],1.0,(EVec4 *)&vPos);
  if (this->m_nDisplayMode != 0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar22 = (this->m_vDetailPosCur).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar21 = (this->m_vDetailPosCur).field0_0x0.d[1];
    vPos.field0_0x0 =
         (EVec2__null___1__1)*(EVec2__null___1__1 *)&(this->m_vDetailPosCur).field0_0x0.field1;
    vSize.field0_0x0.d[0] = (this->m_vDetailSize).field0_0x0.d[0];
    vSize.field0_0x0.d[1] = (this->m_vDetailSize).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    DrawBigBox__10EDialogWinP3ERCfffff
              (prc,fVar22 - 24.0 / vScreen.field0_0x0.d[0],fVar21 - 24.0 / vScreen.field0_0x0.d[1],
               fVar22 + vSize.field0_0x0.d[0] + 24.0 / vScreen.field0_0x0.d[0],
               fVar21 + vSize.field0_0x0.d[1] + 24.0 / vScreen.field0_0x0.d[1],1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_164 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_168 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_16c = 0x3f800000;
    local_170 = 0x3f800000;
                    /* end of inlined section */
    DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
              (prc,vPos.field0_0x0.d[0] - fVar25 / vScreen.field0_0x0.d[0],
               vPos.field0_0x0.d[1] - fVar25 / vScreen.field0_0x0.d[1],
               vSize.field0_0x0.d[1] + fVar19 / vScreen.field0_0x0.d[1],
               vSize.field0_0x0.d[0] + fVar19 / vScreen.field0_0x0.d[0],1.0,(EVec4 *)&local_170);
  }
  fVar19 = sinf(this->m_PulseAccumulator);
  uVar18 = this->m_nDisplayMode;
  fVar19 = (fVar19 * 0.5 + 1.0) * 10.0;
  fVar25 = fVar19 / vScreen.field0_0x0.d[1];
  fVar19 = fVar19 / vScreen.field0_0x0.d[0];
  if (uVar18 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vPos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f0000003f000000;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pGlow,prc,0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar15 = (this->m_ChallengeItemList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    bVar6 = false;
    if (pEVar15 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      uVar18 = pEVar15->data;
      while( true ) {
                    /* end of inlined section */
        if ((*(int *)(uVar18 + 0x10) >> 3 & 1U) != 0) {
          SetSize__6ERFontffb(_globals.m_pFont,16.0,1.0,false);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          fVar23 = *(float *)(uVar18 + 0x18) * 1.18 + fVar19;
          fVar22 = *(float *)(uVar18 + 0x20) * 1.75 + fVar25;
          pfVar8 = (float *)(**(code **)(*(int *)(uVar18 + 0x38) + 0x5c))
                                      (uVar18 + (int)*(short *)(*(int *)(uVar18 + 0x38) + 0x58));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          vPos.field0_0x0 =
               (EVec2__null___1__1)
               ((ulong)vPos.field0_0x0 & 0xffffffff00000000 |
               (ulong)(uint)(*pfVar8 + *(float *)(uVar18 + 0x18) * fVar20));
          iVar9 = (**(code **)(*(int *)(uVar18 + 0x38) + 0x5c))
                            (uVar18 + (int)*(short *)(*(int *)(uVar18 + 0x38) + 0x58));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          local_1a0 = vPos.field0_0x0.d[0] - fVar23 * fVar20;
          fVar21 = *(float *)(iVar9 + 8) + *(float *)(uVar18 + 0x20) * fVar20;
          local_160 = local_1a0 + fVar23;
          local_19c = fVar21 - fVar22 * fVar20;
          vPos.field0_0x0 =
               (EVec2__null___1__1)
               ((ulong)vPos.field0_0x0 & 0xffffffff | (ulong)(uint)fVar21 << 0x20);
          local_15c = local_19c + fVar22;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_150 = 0;
          local_14c = 0x3f800000;
          local_140 = 0x3f800000;
          local_13c = 0;
                    /* end of inlined section */
          (*(code *)prc->__vtable[1].DisplayList)
                    (fVar24,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
                     &local_1a0,&local_160,&local_150,&local_140,0x3632a0);
          bVar6 = true;
        }
                    /* end of inlined section */
        pEVar15 = pEVar15->pNext;
        if ((bVar6) || (pEVar15 == (ENodeListNode *)0x0)) break;
        uVar18 = pEVar15->data;
      }
    }
    Draw__7EUIMenuP3ERC(&this->m_ChallengeLevels,prc);
    uVar18 = this->m_nDisplayMode;
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((uVar18 < 2) &&
     (nli = (undefined1 *)(this->m_ChallengeItemList).field0_0x0.m_l.m_pHead,
     (ENodeListNode *)nli != (ENodeListNode *)0x0)) {
    v = &this->m_vScorePosCur;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      if ((*(int *)(*(int *)nli + 0x10) >> 3 & 1U) != 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        bVar2 = *(byte *)(*(int *)nli + 0x9c);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vPos.field0_0x0 =
             (EVec2__null___1__1)
             CONCAT44((v->field0_0x0).d[1],(this->m_vScorePosCur).field0_0x0.d[0]);
                    /* end of inlined section */
        Select__6ERFontP3ERC(_globals.m_pFont,prc);
        SetSize__6ERFontffb(_globals.m_pFont,16.0,1.0,true);
        uVar18 = (uint)bVar2;
        iVar9 = 0;
        do {
          pEVar7 = _globals.m_pFont;
          uVar12 = _WHITE.field0_0x0._0_8_;
          uVar13 = _WHITE.field0_0x0.d[2];
          uVar14 = _WHITE.field0_0x0.d[3];
          if ((this->m_nDisplayMode == 1) && (iVar9 == this->m_OptionSelected)) {
            uVar12 = _CYAN.field0_0x0._0_8_;
            uVar13 = _CYAN.field0_0x0.d[2];
            uVar14 = _CYAN.field0_0x0.d[3];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          }
          ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)uVar12;
          (pEVar7->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar12 >> 0x20);
          (pEVar7->m_vColor).field0_0x0.d[2] = uVar13;
          (pEVar7->m_vColor).field0_0x0.d[3] = uVar14;
                    /* end of inlined section */
          iVar16 = iVar9 + 1;
          psVar10 = c_str__C13StringBuffer2
                              ((StringBuffer2 *)
                               ((_globals.m_pOptionsRecon)->m_HighScores[uVar18] + iVar9));
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_1a0 = vPos.field0_0x0.d[0];
          local_19c = vPos.field0_0x0.d[1];
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (_globals.m_pFont,prc,psVar10,true,(EVec2 *)&local_1a0,E_FAX_LEFT,E_FAY_TOP,
                     (EVec2 *)0x0);
                    /* end of inlined section */
          psVar10 = c_str__C13StringBuffer2
                              (&(_globals.m_pOptionsRecon)->m_HighScores[uVar18][iVar9].
                                m_sbPlayerInitials.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          local_1a0 = local_1d0 + 0.2;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          local_18c = vPos.field0_0x0.d[1];
          local_19c = vPos.field0_0x0.d[1];
          local_190 = local_1a0;
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (_globals.m_pFont,prc,psVar10,true,(EVec2 *)&local_190,E_FAX_LEFT,E_FAY_TOP,
                     (EVec2 *)0x0);
                    /* end of inlined section */
          IntToWString__FiPUsUii
                    ((_globals.m_pOptionsRecon)->m_HighScores[uVar18][iVar9].m_nScore,sBuffer,0x20,0
                    );
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          local_1a0 = local_1d0 + local_1c0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          local_18c = vPos.field0_0x0.d[1];
          local_19c = vPos.field0_0x0.d[1];
          local_190 = local_1a0;
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (_globals.m_pFont,prc,sBuffer,true,(EVec2 *)&local_190,E_FAX_RIGHT,E_FAY_TOP,
                     &vPos);
                    /* end of inlined section */
          fVar20 = GetLineSpacing__6ERFontP7EWindow(_globals.m_pFont,(EWindow *)0x0);
          vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(vPos.field0_0x0.d[1] + fVar20,local_1d0);
          iVar9 = iVar16;
        } while (iVar16 < 5);
        if (this->m_nDisplayMode == 1) {
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
          this_00 = (ERQuickdata *)
                    AddRef__16EResourceManagerUiP5EFilei
                              (&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
                    /* end of inlined section */
          iVar16 = 0;
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
          pvVar11 = getTable__11ERQuickdataPCc(this_00,"ChallengeData");
                    /* end of inlined section */
          iVar9 = *(int *)((int)pvVar11 + 4);
          puVar1 = (undefined *)((int)&(this->m_vDetailPosCur).field0_0x0 + 7);
          uVar3 = (uint)puVar1 & 7;
          uVar4 = (uint)&this->m_vDetailPosCur & 7;
          vPos.field0_0x0 =
               (EVec2__null___1__1)
               ((*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                0xffffffffffffffffU >> (uVar3 + 1) * 8 & 0x360000) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_vDetailPosCur - uVar4) >> uVar4 * 8);
          puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
          uVar3 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar3);
          *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)vPos.field0_0x0 >> (7 - uVar3) * 8;
          puVar17 = (undefined4 *)(uVar18 * 100 + iVar9 + 0x54);
          do {
            Select__6ERFontP3ERC(_globals.m_pFont,prc);
            SetSize__6ERFontffb(_globals.m_pFont,16.0,1.0,true);
            uVar14 = _WHITE.field0_0x0.d[3];
            uVar13 = _WHITE.field0_0x0.d[2];
            uVar12 = _WHITE.field0_0x0._0_8_;
            pEVar7 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
            (pEVar7->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar12 >> 0x20);
            (pEVar7->m_vColor).field0_0x0.d[2] = uVar13;
            (pEVar7->m_vColor).field0_0x0.d[3] = uVar14;
            local_1a0 = vPos.field0_0x0.d[0];
            local_19c = vPos.field0_0x0.d[1];
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (_globals.m_pFont,prc,*(void **)*puVar17,true,(EVec2 *)&local_1a0,E_FAX_LEFT,
                       E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
            if (iVar16 == 1) {
              IntToWString__FiPUsUii
                        ((_globals.m_pOptionsRecon)->m_HighScores[bVar2][this->m_OptionSelected].
                         m_nComponent2,sBuffer,0x20,0);
              local_1a0 = (this->m_vDetailSize).field0_0x0.d[0];
            }
            else if (iVar16 < 2) {
              if (iVar16 == 0) {
                IntToWString__FiPUsUii
                          ((_globals.m_pOptionsRecon)->m_HighScores[bVar2][this->m_OptionSelected].
                           m_nComponent1,sBuffer,0x20,0);
                local_1a0 = (this->m_vDetailSize).field0_0x0.d[0];
              }
              else {
                local_1a0 = (this->m_vDetailSize).field0_0x0.d[0];
              }
            }
            else if (iVar16 == 2) {
              IntToWString__FiPUsUii
                        ((_globals.m_pOptionsRecon)->m_HighScores[bVar2][this->m_OptionSelected].
                         m_nComponent3,sBuffer,0x20,0);
              local_1a0 = (this->m_vDetailSize).field0_0x0.d[0];
            }
            else if (iVar16 == 3) {
              IntToWString__FiPUsUii
                        ((_globals.m_pOptionsRecon)->m_HighScores[bVar2][this->m_OptionSelected].
                         m_nComponent4,sBuffer,0x20,0);
              local_1a0 = (this->m_vDetailSize).field0_0x0.d[0];
            }
            else {
              local_1a0 = (this->m_vDetailSize).field0_0x0.d[0];
            }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            local_1a0 = (this->m_vDetailPosCur).field0_0x0.d[0] + local_1a0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            local_18c = vPos.field0_0x0.d[1];
            local_19c = vPos.field0_0x0.d[1];
            local_190 = local_1a0;
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (_globals.m_pFont,prc,sBuffer,true,(EVec2 *)&local_190,E_FAX_RIGHT,E_FAY_TOP,
                       &vPos);
                    /* end of inlined section */
            iVar16 = iVar16 + 1;
            puVar17 = puVar17 + 1;
            fVar20 = GetLineSpacing__6ERFontP7EWindow(_globals.m_pFont,(EWindow *)0x0);
            vPos.field0_0x0 =
                 (EVec2__null___1__1)
                 CONCAT44(vPos.field0_0x0.d[1] + fVar20,(this->m_vDetailPosCur).field0_0x0.d[0]);
          } while (iVar16 < 4);
          DelRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
        }
      }
      nli = *(undefined1 **)(nli + 8);
                    /* end of inlined section */
    } while (nli != (undefined1 *)0x0);
  }
  return;
}

EGameMenuSandboxMenu* EGameMenuSandboxMenu::EGameMenuSandboxMenu() {
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ItemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_20EGameMenuSandboxMenu;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ItemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  return this;
}

void EGameMenuSandboxMenu::~EGameMenuSandboxMenu(int __in_chrg) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_20EGameMenuSandboxMenu;
  RemoveAll__9ENodeList(&(this->m_ItemList).field0_0x0);
                    /* end of inlined section */
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void EGameMenuSandboxMenu::Init2(EGameMenuMainPanel *pPanel) {
  ERShader *pEVar1;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pPanel = pPanel;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_MaxOption = 2;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xb873bc96,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBackground = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x163691ff,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pSimsLogoShader = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xda8131bb,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pGlow = pEVar1;
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  this->m_OptionSelected = 0;
  this->m_PulseAccumulator = 0.0;
  return;
}

void EGameMenuSandboxMenu::Reset() {
  ERShader *pEVar1;
  
  while (this->m_pBackground != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pBackground->field0_0x0);
    this->m_pBackground = (ERShader *)0x0;
  }
  pEVar1 = this->m_pSimsLogoShader;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pSimsLogoShader = (ERShader *)0x0;
    pEVar1 = this->m_pSimsLogoShader;
  }
  pEVar1 = this->m_pGlow;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pGlow = (ERShader *)0x0;
    pEVar1 = this->m_pGlow;
  }
  this->m_OptionSelected = 0;
  this->m_pPanel = (EGameMenuMainPanel *)0x0;
  return;
}

void EGameMenuSandboxMenu::Update() {
  EUIVirtualCtrl__vtable *pEVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x1000);
  if (lVar3 == 0) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                       0x4000);
    if (lVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
      iVar2 = this->m_OptionSelected + 1;
      this->m_OptionSelected = iVar2;
      if (this->m_MaxOption <= iVar2) {
        this->m_OptionSelected = 0;
      }
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
    iVar2 = this->m_OptionSelected + -1;
    this->m_OptionSelected = iVar2;
    if (iVar2 < 0) {
      this->m_OptionSelected = this->m_MaxOption + -1;
    }
  }
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x40);
  if ((lVar3 == 0) || (*(int *)&this->m_ButtonDownLastTime != 0)) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                       0x10);
    if (lVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
      HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,1);
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
    if (this->m_OptionSelected == 0) {
      HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,8);
    }
    else if (this->m_OptionSelected == 1) {
      HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,10);
    }
    *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  }
  fVar4 = _dt * 5.0;
  *(undefined4 *)&this->m_ButtonDownLastTime = 0;
  fVar4 = this->m_PulseAccumulator + fVar4;
  this->m_PulseAccumulator = fVar4;
  if (6.283185 < fVar4) {
    this->m_PulseAccumulator = 0.0;
  }
  SetFullPrompt__18EGameMenuMainPanel(this->m_pPanel);
  return;
}

void EGameMenuSandboxMenu::Draw(ERC *prc) {
	EVec2 vScreen;
	float PulseFactor;
	float PulseFactorX;
	float PulseFactorY;
	EVec4 PulseColor;
	float fWidth;
	float fHeight;
	EVec2 vGlowPos;
	EGraphics *this;
	float y;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  ERFont *pEVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  EVec2 *vPos;
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
  float fVar6;
  EStorable__vtable *pEVar7;
  float fVar8;
  float fVar9;
  EVec2 vScreen;
  EVec4 PulseColor;
  EVec2 vGlowPos;
  undefined local_130 [20];
  EStorable__vtable *local_11c;
  ENodeListNode *local_118;
  ENodeListNode *local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  float local_100;
  float local_fc;
  EHashTableNode **local_f0;
  uint local_ec;
  EFontSize *local_e0;
  undefined4 local_dc;
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
  
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBackground,prc,0);
  fVar8 = 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos = (EVec2 *)(local_130 + 0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  PulseColor.field0_0x0.d[0] = 1.0;
  PulseColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._4_4_ = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._0_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_114 = (ENodeListNode *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_118 = (ENodeListNode *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_11c = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_130._16_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
  local_100 = 0.1;
  local_fc = local_100;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vScreen,&PulseColor,
             &vGlowPos,(ERFont *)local_130,vPos);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  vScreen.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
  vScreen.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pSimsLogoShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  PulseColor.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
  PulseColor.field0_0x0.d[0] = fVar8 - 128.0 / vScreen.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[1] = 1.0;
  vGlowPos.field0_0x0.d[0] = 1.0;
  local_104 = 0x3f800000;
  local_108 = 0x3f800000;
  local_10c = 0x3f800000;
  local_110 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&PulseColor,&vGlowPos,
             &local_110);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  fVar6 = sinf(this->m_PulseAccumulator);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  PulseColor.field0_0x0.d[0] = _CYAN.field0_0x0.d[0];
                    /* end of inlined section */
  fVar6 = (fVar6 * fVar8 + 1.0) * 10.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  PulseColor.field0_0x0.d[1] = _CYAN.field0_0x0.d[1];
  PulseColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
  PulseColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
                    /* end of inlined section */
  fVar9 = fVar6 / vScreen.field0_0x0.d[0];
  fVar6 = fVar6 / vScreen.field0_0x0.d[1];
  vGlowPos.field0_0x0.d[0] = fVar8;
  vGlowPos.field0_0x0.d[1] = fVar8;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pGlow,prc,0);
  if (this->m_OptionSelected == 0) {
    SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,false);
    pEVar1 = _globals.m_pFont;
    psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"new neighborhood");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar1,SUB41(psVar5,0),(EWindow *)&pGifTag1);
    pEVar7 = local_130._0_4_;
    pEVar1 = _globals.m_pFont;
    psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"new neighborhood");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar1,SUB41(psVar5,0),(EWindow *)&pGifTag1);
    vGlowPos.field0_0x0.d[1] = 0.42;
    vGlowPos.field0_0x0.d[0] = fVar8;
                    /* end of inlined section */
                    /* end of inlined section */
  }
  else {
    if (this->m_OptionSelected != 1) goto LAB_00181820;
    SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,false);
    pEVar1 = _globals.m_pFont;
    psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"continue neighborhood");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar1,SUB41(psVar5,0),(EWindow *)&pGifTag1);
    pEVar7 = local_130._0_4_;
    pEVar1 = _globals.m_pFont;
                    /* end of inlined section */
    psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"continue neighborhood");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar1,SUB41(psVar5,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    vGlowPos.field0_0x0.d[0] = fVar8;
    vGlowPos.field0_0x0.d[1] = fVar8;
  }
  local_100 = (float)pEVar7 * 1.18 + fVar9;
  local_fc = (float)local_130._4_4_ * 1.75 + fVar6;
LAB_00181820:
  fVar8 = 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_130._0_4_ = (EStorable__vtable *)(vGlowPos.field0_0x0.d[0] - local_100 * 0.5);
  local_130._4_4_ = (EStorable__vtable *)(vGlowPos.field0_0x0.d[1] - local_fc * 0.5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_f0 = (EHashTableNode **)0x0;
                    /* end of inlined section */
  local_100 = (float)local_130._0_4_ + local_100;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_fc = (float)local_130._4_4_ + local_fc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ec = 0x3f800000;
  local_dc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_e0 = (EFontSize *)0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,(ERFont *)local_130,
             &local_100,&local_f0,&local_e0,0x3632a0);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,false);
  uVar4 = _BLACK.field0_0x0.d[3];
  uVar3 = _BLACK.field0_0x0.d[2];
  uVar2 = _BLACK.field0_0x0._0_8_;
  pEVar1 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
  (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
  (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
  psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"new neighborhood");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_130._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + fVar8);
  local_130._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + 0.42);
  local_130._16_4_ = local_130._0_4_;
  local_11c = local_130._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar5,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  uVar4 = _WHITE.field0_0x0.d[3];
  uVar3 = _WHITE.field0_0x0.d[2];
  uVar2 = _WHITE.field0_0x0._0_8_;
  pEVar1 = _globals.m_pFont;
                    /* end of inlined section */
  if (this->m_OptionSelected == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
    (pEVar1->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
    (pEVar1->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
    (pEVar1->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
    (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
  }
                    /* end of inlined section */
  psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"new neighborhood");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar8 = 0.5;
  local_130._0_4_ = (EStorable__vtable *)0x3f000000;
  local_130._4_4_ = (EStorable__vtable *)0x3ed70a3d;
  local_130._16_4_ = (EStorable__vtable *)0x3f000000;
  local_11c = (EStorable__vtable *)0x3ed70a3d;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar5,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,true);
  uVar4 = _BLACK.field0_0x0.d[3];
  uVar3 = _BLACK.field0_0x0.d[2];
  uVar2 = _BLACK.field0_0x0._0_8_;
  pEVar1 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
  (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
  (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
  psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"continue neighborhood");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_130._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + fVar8);
  local_130._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + fVar8);
  local_130._16_4_ = local_130._0_4_;
  local_11c = local_130._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar5,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  uVar4 = _WHITE.field0_0x0.d[3];
  uVar3 = _WHITE.field0_0x0.d[2];
  uVar2 = _WHITE.field0_0x0._0_8_;
  pEVar1 = _globals.m_pFont;
                    /* end of inlined section */
  if (this->m_OptionSelected == 1) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
    (pEVar1->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
    (pEVar1->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
    (pEVar1->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
    (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
  }
                    /* end of inlined section */
  psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"continue neighborhood");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._4_4_ = (EStorable__vtable *)0x3f000000;
  local_130._0_4_ = (EStorable__vtable *)0x3f000000;
  local_11c = (EStorable__vtable *)0x3f000000;
  local_130._16_4_ = (EStorable__vtable *)0x3f000000;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar5,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  return;
}

EGameMenuCredits* EGameMenuCredits::EGameMenuCredits() {
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ItemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16EGameMenuCredits;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ItemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  return this;
}

void EGameMenuCredits::~EGameMenuCredits(int __in_chrg) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16EGameMenuCredits;
  RemoveAll__9ENodeList(&(this->m_ItemList).field0_0x0);
                    /* end of inlined section */
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void EGameMenuCredits::Init2(EGameMenuMainPanel *pPanel) {
  ERShader *pEVar1;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pPanel = pPanel;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_MaxOption = 2;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xb873bc96,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBackground = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x163691ff,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pSimsLogoShader = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xda8131bb,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pGlow = pEVar1;
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  this->m_OptionSelected = 0;
  this->m_PulseAccumulator = 0.0;
  return;
}

void EGameMenuCredits::Reset() {
  ERShader *pEVar1;
  
  while (this->m_pBackground != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pBackground->field0_0x0);
    this->m_pBackground = (ERShader *)0x0;
  }
  pEVar1 = this->m_pSimsLogoShader;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pSimsLogoShader = (ERShader *)0x0;
    pEVar1 = this->m_pSimsLogoShader;
  }
  pEVar1 = this->m_pGlow;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pGlow = (ERShader *)0x0;
    pEVar1 = this->m_pGlow;
  }
  this->m_OptionSelected = 0;
  this->m_pPanel = (EGameMenuMainPanel *)0x0;
  return;
}

void EGameMenuCredits::Update() {
  EUIVirtualCtrl__vtable *pEVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x1000);
  if (lVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
    iVar2 = this->m_OptionSelected + -1;
    this->m_OptionSelected = iVar2;
    if (iVar2 < 0) {
      this->m_OptionSelected = this->m_MaxOption + -1;
    }
  }
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x4000);
  if (lVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
    iVar2 = this->m_OptionSelected + 1;
    this->m_OptionSelected = iVar2;
    if (this->m_MaxOption <= iVar2) {
      this->m_OptionSelected = 0;
    }
  }
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x40);
  if ((lVar3 != 0) && (*(int *)&this->m_ButtonDownLastTime == 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
    if (this->m_OptionSelected == 0) {
      HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,0xc);
    }
    else if (this->m_OptionSelected == 1) {
      HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,0xd);
    }
    *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  }
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x10);
  if (lVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
    HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,1);
  }
  fVar4 = _dt * 5.0;
  *(undefined4 *)&this->m_ButtonDownLastTime = 0;
  fVar4 = this->m_PulseAccumulator + fVar4;
  this->m_PulseAccumulator = fVar4;
  if (6.283185 < fVar4) {
    this->m_PulseAccumulator = 0.0;
  }
  SetFullPrompt__18EGameMenuMainPanel(this->m_pPanel);
  return;
}

void EGameMenuCredits::Draw(ERC *prc) {
	EVec2 vScreen;
	float PulseFactor;
	float PulseFactorX;
	float PulseFactorY;
	EVec4 PulseColor;
	float fWidth;
	float fHeight;
	EVec2 vGlowPos;
	EGraphics *this;
	float y;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  ERFont *pEVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  EVec2 *vPos;
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
  float fVar6;
  float fVar7;
  EStorable__vtable *pEVar8;
  float fVar9;
  EVec2 vScreen;
  EVec4 PulseColor;
  EVec2 vGlowPos;
  undefined local_130 [20];
  EStorable__vtable *local_11c;
  ENodeListNode *local_118;
  ENodeListNode *local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  float local_100;
  float local_fc;
  EHashTableNode **local_f0;
  uint local_ec;
  EFontSize *local_e0;
  undefined4 local_dc;
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
  
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBackground,prc,0);
  fVar7 = 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos = (EVec2 *)(local_130 + 0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  PulseColor.field0_0x0.d[0] = 1.0;
  PulseColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._4_4_ = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._0_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_114 = (ENodeListNode *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_118 = (ENodeListNode *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_11c = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_130._16_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
  local_100 = 0.1;
  local_fc = local_100;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vScreen,&PulseColor,
             &vGlowPos,(ERFont *)local_130,vPos);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  vScreen.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
  vScreen.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pSimsLogoShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  PulseColor.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
  PulseColor.field0_0x0.d[0] = fVar7 - 128.0 / vScreen.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[1] = 1.0;
  vGlowPos.field0_0x0.d[0] = 1.0;
  local_104 = 0x3f800000;
  local_108 = 0x3f800000;
  local_10c = 0x3f800000;
  local_110 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&PulseColor,&vGlowPos,
             &local_110);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  fVar6 = sinf(this->m_PulseAccumulator);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  PulseColor.field0_0x0.d[0] = _CYAN.field0_0x0.d[0];
                    /* end of inlined section */
  fVar6 = (fVar6 * fVar7 + 1.0) * 10.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  PulseColor.field0_0x0.d[1] = _CYAN.field0_0x0.d[1];
  PulseColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
  PulseColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
                    /* end of inlined section */
  fVar9 = fVar6 / vScreen.field0_0x0.d[0];
  fVar6 = fVar6 / vScreen.field0_0x0.d[1];
  vGlowPos.field0_0x0.d[0] = fVar7;
  vGlowPos.field0_0x0.d[1] = fVar7;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pGlow,prc,0);
  if (this->m_OptionSelected == 0) {
    SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,false);
    pEVar1 = _globals.m_pFont;
    psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"edge of reality");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar1,SUB41(psVar5,0),(EWindow *)&pGifTag1);
    pEVar8 = local_130._0_4_;
    pEVar1 = _globals.m_pFont;
    psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"edge of reality");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar1,SUB41(psVar5,0),(EWindow *)&pGifTag1);
    vGlowPos.field0_0x0.d[0] = fVar7;
    vGlowPos.field0_0x0.d[1] = fVar7;
                    /* end of inlined section */
                    /* end of inlined section */
  }
  else {
    if (this->m_OptionSelected != 1) goto LAB_00182268;
    SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,false);
    pEVar1 = _globals.m_pFont;
    psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"maxis ea");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar1,SUB41(psVar5,0),(EWindow *)&pGifTag1);
    pEVar8 = local_130._0_4_;
    pEVar1 = _globals.m_pFont;
                    /* end of inlined section */
    psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"maxis ea");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_130,pEVar1,SUB41(psVar5,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    vGlowPos.field0_0x0.d[1] = 0.58;
    vGlowPos.field0_0x0.d[0] = fVar7;
  }
  local_100 = (float)pEVar8 * 1.18 + fVar9;
  local_fc = (float)local_130._4_4_ * 1.75 + fVar6;
LAB_00182268:
  fVar7 = 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_130._0_4_ = (EStorable__vtable *)(vGlowPos.field0_0x0.d[0] - local_100 * 0.5);
  local_130._4_4_ = (EStorable__vtable *)(vGlowPos.field0_0x0.d[1] - local_fc * 0.5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_f0 = (EHashTableNode **)0x0;
                    /* end of inlined section */
  local_100 = (float)local_130._0_4_ + local_100;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_fc = (float)local_130._4_4_ + local_fc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ec = 0x3f800000;
  local_dc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_e0 = (EFontSize *)0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,(ERFont *)local_130,
             &local_100,&local_f0,&local_e0,0x3632a0);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,false);
  uVar4 = _BLACK.field0_0x0.d[3];
  uVar3 = _BLACK.field0_0x0.d[2];
  uVar2 = _BLACK.field0_0x0._0_8_;
  pEVar1 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
  (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
  (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
  psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"edge of reality");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_130._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + fVar7);
  local_130._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + fVar7);
  local_130._16_4_ = local_130._0_4_;
  local_11c = local_130._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar5,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  uVar4 = _WHITE.field0_0x0.d[3];
  uVar3 = _WHITE.field0_0x0.d[2];
  uVar2 = _WHITE.field0_0x0._0_8_;
  pEVar1 = _globals.m_pFont;
                    /* end of inlined section */
  if (this->m_OptionSelected == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
    (pEVar1->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
    (pEVar1->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
    (pEVar1->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
    (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar8 = (EStorable__vtable *)0x3f000000;
                    /* end of inlined section */
  psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"edge of reality");
  local_130._0_4_ = pEVar8;
  local_130._4_4_ = pEVar8;
  local_130._16_4_ = pEVar8;
  local_11c = pEVar8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar5,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,true);
  uVar4 = _BLACK.field0_0x0.d[3];
  uVar3 = _BLACK.field0_0x0.d[2];
  uVar2 = _BLACK.field0_0x0._0_8_;
  pEVar1 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
  (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
  (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
  psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"maxis ea");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_130._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + (float)pEVar8);
  local_130._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + 0.58);
  local_130._16_4_ = local_130._0_4_;
  local_11c = local_130._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar5,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  uVar4 = _WHITE.field0_0x0.d[3];
  uVar3 = _WHITE.field0_0x0.d[2];
  uVar2 = _WHITE.field0_0x0._0_8_;
  pEVar1 = _globals.m_pFont;
                    /* end of inlined section */
  if (this->m_OptionSelected == 1) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
    (pEVar1->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
    (pEVar1->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
    (pEVar1->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
    (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
  }
                    /* end of inlined section */
  psVar5 = GetMainMenuUIString__7EGlobalPCc(&_globals,"maxis ea");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._0_4_ = (EStorable__vtable *)0x3f000000;
  local_130._4_4_ = (EStorable__vtable *)0x3f147ae1;
  local_130._16_4_ = (EStorable__vtable *)0x3f000000;
  local_11c = (EStorable__vtable *)0x3f147ae1;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar5,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  return;
}

EGameMenuMainMenu* EGameMenuMainMenu::EGameMenuMainMenu() {
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ItemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_17EGameMenuMainMenu;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ItemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pKeyboard = (ETextEntryDialog *)0x0;
  this->m_pBackground = (ERShader *)0x0;
  this->m_pSimsLogoShader = (ERShader *)0x0;
  this->m_pGlow = (ERShader *)0x0;
  this->m_pBlankShader = (ERShader *)0x0;
  return this;
}

void EGameMenuMainMenu::~EGameMenuMainMenu(int __in_chrg) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_17EGameMenuMainMenu;
  RemoveAll__9ENodeList(&(this->m_ItemList).field0_0x0);
                    /* end of inlined section */
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void EGameMenuMainMenu::Init2(EGameMenuMainPanel *pPanel) {
	s32 nData;
	
  bool bVar1;
  ERShader *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int nData;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  this->m_pPanel = pPanel;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_MaxOption = 4;
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xb873bc96,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pBackground = pEVar2;
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x163691ff,(EFile *)0x0,0);
  this->m_pSimsLogoShader = pEVar2;
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xda8131bb,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pGlow = pEVar2;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_OptionSelected = 0;
  this->m_PulseAccumulator = 0.0;
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  *(undefined4 *)&this->m_bFreeplayUnlocked = 0;
  this->m_pBlankShader = pEVar2;
  bVar1 = CheckLockableById__FUiUiPi(1,0,&nData);
  if (bVar1) {
    bVar1 = CheckGlobalUnlocked__FUiUi(1,0);
    *(int *)&this->m_bFreeplayUnlocked = (int)bVar1;
  }
  if (_globals.Cheats._12_4_ != 0) {
    *(undefined4 *)&this->m_bFreeplayUnlocked = 1;
  }
  *(undefined4 *)&this->m_bWaitForButUp = 0;
  *(undefined4 *)&this->m_bCheatCodeEntryUp = 0;
  this->m_pKeyboard = (ETextEntryDialog *)0x0;
  return;
}

void EGameMenuMainMenu::Reset() {
  ETextEntryDialog *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  ERShader *pEVar3;
  
  while (this->m_pBackground != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pBackground->field0_0x0);
    this->m_pBackground = (ERShader *)0x0;
  }
  pEVar3 = this->m_pSimsLogoShader;
  while (pEVar3 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar3->field0_0x0);
    this->m_pSimsLogoShader = (ERShader *)0x0;
    pEVar3 = this->m_pSimsLogoShader;
  }
  pEVar3 = this->m_pGlow;
  while (pEVar3 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar3->field0_0x0);
    this->m_pGlow = (ERShader *)0x0;
    pEVar3 = this->m_pGlow;
  }
  pEVar3 = this->m_pBlankShader;
  while (pEVar3 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar3->field0_0x0);
    this->m_pBlankShader = (ERShader *)0x0;
    pEVar3 = this->m_pBlankShader;
  }
  pEVar1 = this->m_pKeyboard;
  this->m_pPanel = (EGameMenuMainPanel *)0x0;
  this->m_OptionSelected = 0;
  *(undefined4 *)&this->m_bCheatCodeEntryUp = 0;
  if (pEVar1 != (ETextEntryDialog *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar2->Draw)((int)pEVar1->m_szText + *(short *)&pEVar2->Update + -0x3e,3);
  }
  this->m_pKeyboard = (ETextEntryDialog *)0x0;
  return;
}

void EGameMenuMainMenu::Update() {
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	short unsigned int Buffer[32];
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	ECheats *this;
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	
  EUIObjectNode__vtable *pEVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  EUiAudio *this_00;
  bool bVar3;
  ETextEntryDialog *pEVar4;
  short *pTitle;
  int iVar5;
  long lVar6;
  EGameMenuMainPanel *pEVar7;
  float fVar8;
  short Buffer [32];
  
  iVar5 = *(int *)&this->m_bCheatCodeEntryUp;
  if (iVar5 != 1) {
LAB_001829e4:
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
    if ((((iVar5 == 0) && (*(int *)&(_globals.m_pCheats)->m_bCheatsOn == 0)) &&
        (pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
        lVar6 = (**(code **)(pEVar2 + 1))
                          ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,
                           4), lVar6 != 0)) &&
       (((pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
         lVar6 = (**(code **)(pEVar2 + 1))
                           ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0
                            ,1), lVar6 != 0 &&
         (pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
         lVar6 = (**(code **)(pEVar2 + 1))
                           ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0
                            ,8), lVar6 != 0)) &&
        (pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
        lVar6 = (**(code **)(pEVar2 + 1))
                          ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,
                           2), lVar6 != 0)))) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
                    /* end of inlined section */
      *(undefined4 *)&this->m_bCheatCodeEntryUp = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
      *(undefined4 *)&this->m_bWaitForButUp = 1;
      pEVar4 = (ETextEntryDialog *)_memmanAlloc__FUiUi(0x1c0,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
                    /* end of inlined section */
      pTitle = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"cheat_title");
      pEVar4 = __16ETextEntryDialogPCUsfib(pEVar4,pTitle,0.15,0,true);
      this->m_pKeyboard = pEVar4;
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
      this->m_pPanel->m_pDPadLeft = this->m_pPanel->m_pLeftShdr;
      this->m_pPanel->m_pDPadRight = this->m_pPanel->m_pRightShdr;
    }
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,0,
                       0x1000);
    if (lVar6 == 0) {
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar6 = (*(code *)pEVar2[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                         0,0x4000);
      if (lVar6 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
        iVar5 = this->m_OptionSelected + 1;
        this->m_OptionSelected = iVar5;
        if (this->m_MaxOption <= iVar5) {
          this->m_OptionSelected = 0;
        }
        if (((this->m_OptionSelected == 1) && (*(int *)&this->m_bFreeplayUnlocked == 0)) &&
           (_globals.Cheats._20_4_ == 0)) {
          this->m_OptionSelected = 2;
        }
      }
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
      iVar5 = this->m_OptionSelected + -1;
      this->m_OptionSelected = iVar5;
      if (iVar5 < 0) {
        this->m_OptionSelected = this->m_MaxOption + -1;
      }
      if (((this->m_OptionSelected == 1) && (*(int *)&this->m_bFreeplayUnlocked == 0)) &&
         (_globals.Cheats._20_4_ == 0)) {
        this->m_OptionSelected = 0;
      }
    }
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,0,
                       0x40);
    if ((lVar6 != 0) && (*(int *)&this->m_ButtonDownLastTime == 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
      iVar5 = this->m_OptionSelected;
      if (iVar5 == 0) {
        HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,2);
      }
      else if (iVar5 == 1) {
        HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,4);
      }
      else if (iVar5 == 2) {
        HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,5);
      }
      else if (iVar5 == 3) {
        HandleMessage__18EGameMenuMainPaneli(this->m_pPanel,6);
      }
      *(undefined4 *)&this->m_ButtonDownLastTime = 1;
    }
    fVar8 = _dt * 5.0;
    *(undefined4 *)&this->m_ButtonDownLastTime = 0;
    fVar8 = this->m_PulseAccumulator + fVar8;
    this->m_PulseAccumulator = fVar8;
    if (6.283185 < fVar8) {
      this->m_PulseAccumulator = 0.0;
    }
    SetSinglePrompt__18EGameMenuMainPanel(this->m_pPanel);
    return;
  }
  if (this->m_pKeyboard == (ETextEntryDialog *)0x0) {
    iVar5 = *(int *)&this->m_bCheatCodeEntryUp;
    goto LAB_001829e4;
  }
  if (*(int *)&this->m_bWaitForButUp == 0) {
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (**(code **)(pEVar2 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,0x10
                      );
    if (lVar6 != 0) {
      pEVar4 = this->m_pKeyboard;
      if (pEVar4 != (ETextEntryDialog *)0x0) {
        pEVar1 = (pEVar4->field0_0x0).__vtable;
        (*(code *)pEVar1->Draw)((int)pEVar4->m_szText + *(short *)&pEVar1->Update + -0x3e,3);
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      this_00 = _8EUiAudio__pUiAudioMan;
                    /* end of inlined section */
      this->m_pKeyboard = (ETextEntryDialog *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      *(undefined4 *)&this->m_bCheatCodeEntryUp = 0;
      PlayUiSound__8EUiAudioUi(this_00,0x48ae94f);
                    /* end of inlined section */
      pEVar7 = this->m_pPanel;
      goto LAB_001829cc;
    }
    iVar5 = *(int *)&this->m_bWaitForButUp;
  }
  else {
    iVar5 = *(int *)&this->m_bWaitForButUp;
  }
  if (iVar5 == 1) {
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (**(code **)(pEVar2 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,4);
    if (lVar6 != 0) {
      return;
    }
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (**(code **)(pEVar2 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,1);
    if (lVar6 != 0) {
      return;
    }
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (**(code **)(pEVar2 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,8);
    if (lVar6 != 0) {
      return;
    }
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (**(code **)(pEVar2 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,2);
    if (lVar6 != 0) {
      return;
    }
    *(undefined4 *)&this->m_bWaitForButUp = 0;
    return;
  }
  bVar3 = UpdateKeyboard__16ETextEntryDialog(this->m_pKeyboard);
  if (bVar3) {
    return;
  }
  GetBuffer__16ETextEntryDialogPUs(this->m_pKeyboard,Buffer);
  ProcessCheatCode__7EGlobalPUs(&_globals,Buffer);
  pEVar4 = this->m_pKeyboard;
  if (pEVar4 != (ETextEntryDialog *)0x0) {
    pEVar1 = (pEVar4->field0_0x0).__vtable;
    (*(code *)pEVar1->Draw)((int)pEVar4->m_szText + *(short *)&pEVar1->Update + -0x3e,3);
  }
  this->m_pKeyboard = (ETextEntryDialog *)0x0;
  *(undefined4 *)&this->m_bCheatCodeEntryUp = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
  pEVar7 = this->m_pPanel;
LAB_001829cc:
  pEVar7->m_pDPadLeft = pEVar7->m_pLeftBlankShdr;
                    /* end of inlined section */
  this->m_pPanel->m_pDPadRight = this->m_pPanel->m_pRightBlankShdr;
  return;
}

void EGameMenuMainMenu::Draw(ERC *prc) {
	EVec2 vScreen;
	float PulseFactor;
	float PulseFactorX;
	float PulseFactorY;
	EVec4 PulseColor;
	float fWidth;
	float fHeight;
	EVec2 vGlowPos;
	EGraphics *this;
	float y;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  int iVar1;
  EUIObjectNode__vtable *pEVar2;
  ERFont *pEVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  EVec2 *vPos;
  short *psVar7;
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
  float fVar8;
  float fVar9;
  EStorable__vtable *pEVar10;
  float fVar11;
  EStorable__vtable *aspect;
  EVec2 vScreen;
  EVec4 PulseColor;
  EVec2 vGlowPos;
  undefined local_160 [20];
  EStorable__vtable *local_14c;
  EStorable__vtable *local_148;
  EStorable__vtable *local_144;
  EStorable__vtable *local_140;
  EStorable__vtable *local_13c;
  EStorable__vtable *local_138;
  EStorable__vtable *local_134;
  float local_130;
  float local_12c;
  EHashTableNode **local_120;
  uint local_11c;
  EFontSize *local_110;
  undefined4 local_10c;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
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
  
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  aspect = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBackground,prc,0);
  fVar9 = 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos = (EVec2 *)(local_160 + 0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_160._4_4_ = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  local_12c = 0.1;
  local_130 = local_12c;
  PulseColor.field0_0x0.d[0] = (float)aspect;
  PulseColor.field0_0x0.d[1] = (float)aspect;
  vGlowPos.field0_0x0.d[1] = (float)aspect;
  local_160._0_4_ = aspect;
  local_160._16_4_ = aspect;
  local_14c = aspect;
  local_148 = aspect;
  local_144 = aspect;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vScreen,&PulseColor,
             &vGlowPos,(ERFont *)local_160,vPos);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  vScreen.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
  vScreen.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pSimsLogoShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  PulseColor.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
  PulseColor.field0_0x0.d[0] = fVar9 - 128.0 / vScreen.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vGlowPos.field0_0x0.d[0] = (float)aspect;
  vGlowPos.field0_0x0.d[1] = (float)aspect;
  local_140 = aspect;
  local_13c = aspect;
  local_138 = aspect;
  local_134 = aspect;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&PulseColor,&vGlowPos,
             &local_140);
  fVar8 = sinf(this->m_PulseAccumulator);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  PulseColor.field0_0x0.d[0] = _CYAN.field0_0x0.d[0];
                    /* end of inlined section */
  fVar8 = (fVar8 * fVar9 + (float)aspect) * 10.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  PulseColor.field0_0x0.d[1] = _CYAN.field0_0x0.d[1];
  PulseColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
  PulseColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
                    /* end of inlined section */
  fVar11 = fVar8 / vScreen.field0_0x0.d[0];
  fVar8 = fVar8 / vScreen.field0_0x0.d[1];
  vGlowPos.field0_0x0.d[0] = fVar9;
  vGlowPos.field0_0x0.d[1] = fVar9;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pGlow,prc,0);
  iVar1 = this->m_OptionSelected;
  if (iVar1 == 0) {
    SetSize__6ERFontffb(_globals.m_pFont,30.0,(float)aspect,false);
    pEVar3 = _globals.m_pFont;
    psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"get a life");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_160,pEVar3,SUB41(psVar7,0),(EWindow *)&pGifTag1);
    pEVar3 = _globals.m_pFont;
                    /* end of inlined section */
    local_130 = (float)local_160._0_4_ * 1.18 + fVar11;
    psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"get a life");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_160,pEVar3,SUB41(psVar7,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    vGlowPos.field0_0x0.d[1] = 0.42;
    vGlowPos.field0_0x0.d[0] = fVar9;
  }
  else if (iVar1 == 1) {
    SetSize__6ERFontffb(_globals.m_pFont,30.0,(float)aspect,true);
    pEVar3 = _globals.m_pFont;
    psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"play sims");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_160,pEVar3,SUB41(psVar7,0),(EWindow *)&pGifTag1);
    pEVar3 = _globals.m_pFont;
                    /* end of inlined section */
    local_130 = (float)local_160._0_4_ * 1.18 + fVar11;
    psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"play sims");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_160,pEVar3,SUB41(psVar7,0),(EWindow *)&pGifTag1);
    vGlowPos.field0_0x0.d[0] = fVar9;
    vGlowPos.field0_0x0.d[1] = fVar9;
                    /* end of inlined section */
  }
  else if (iVar1 == 2) {
    SetSize__6ERFontffb(_globals.m_pFont,20.0,(float)aspect,true);
    pEVar3 = _globals.m_pFont;
    psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"options");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_160,pEVar3,SUB41(psVar7,0),(EWindow *)&pGifTag1);
    pEVar3 = _globals.m_pFont;
                    /* end of inlined section */
    local_130 = (float)local_160._0_4_ * 1.18 + fVar11;
    psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"options");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_160,pEVar3,SUB41(psVar7,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    vGlowPos.field0_0x0.d[1] = 0.6;
    vGlowPos.field0_0x0.d[0] = fVar9;
  }
  else {
    if (iVar1 != 3) goto LAB_00183208;
    SetSize__6ERFontffb(_globals.m_pFont,20.0,(float)aspect,true);
    pEVar3 = _globals.m_pFont;
    psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"credits");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_160,pEVar3,SUB41(psVar7,0),(EWindow *)&pGifTag1);
    pEVar3 = _globals.m_pFont;
                    /* end of inlined section */
    local_130 = (float)local_160._0_4_ * 1.18 + fVar11;
    psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"credits");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_160,pEVar3,SUB41(psVar7,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    vGlowPos.field0_0x0.d[1] = 0.67;
    vGlowPos.field0_0x0.d[0] = fVar9;
  }
  local_12c = (float)local_160._4_4_ * 1.75 + fVar8;
LAB_00183208:
  fVar9 = 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_160._0_4_ = (EStorable__vtable *)(vGlowPos.field0_0x0.d[0] - local_130 * 0.5);
  local_160._4_4_ = (EStorable__vtable *)(vGlowPos.field0_0x0.d[1] - local_12c * 0.5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_120 = (EHashTableNode **)0x0;
                    /* end of inlined section */
  local_130 = (float)local_160._0_4_ + local_130;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_12c = (float)local_160._4_4_ + local_12c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_10c = 0;
  local_110 = (EFontSize *)0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,(ERFont *)local_160,
             &local_130,&local_120,&local_110,0x3632a0);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(_globals.m_pFont,(float)aspect * 30.0,1.0,false);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar4 = _BLACK.field0_0x0._0_8_;
  pEVar3 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
  psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"get a life");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_160._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + fVar9);
  local_160._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + 0.42);
  local_160._16_4_ = local_160._0_4_;
  local_14c = local_160._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar7,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  pEVar3 = _globals.m_pFont;
                    /* end of inlined section */
  if (this->m_OptionSelected == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
    (pEVar3->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
    (pEVar3->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
    (pEVar3->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
    (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
    (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"get a life");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_160._0_4_ = (EStorable__vtable *)0x3f000000;
  local_160._4_4_ = (EStorable__vtable *)0x3ed70a3d;
  local_160._16_4_ = (EStorable__vtable *)0x3f000000;
  local_14c = (EStorable__vtable *)0x3ed70a3d;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar7,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
  if ((*(int *)&this->m_bFreeplayUnlocked != 0) || (_globals.Cheats._20_4_ != 0)) {
    Select__6ERFontP3ERC(_globals.m_pFont,prc);
    uVar6 = _BLACK.field0_0x0.d[3];
    uVar5 = _BLACK.field0_0x0.d[2];
    uVar4 = _BLACK.field0_0x0._0_8_;
    pEVar3 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
    (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
    (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
    psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"play sims");
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
    local_160._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + 0.5);
    local_160._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + 0.5);
    local_160._16_4_ = local_160._0_4_;
    local_14c = local_160._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar7,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
    uVar6 = _WHITE.field0_0x0.d[3];
    uVar5 = _WHITE.field0_0x0.d[2];
    uVar4 = _WHITE.field0_0x0._0_8_;
    pEVar3 = _globals.m_pFont;
                    /* end of inlined section */
    if (this->m_OptionSelected == 1) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
      (pEVar3->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
      (pEVar3->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
      (pEVar3->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
    }
    else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
      (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
      (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
    }
                    /* end of inlined section */
    psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"play sims");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_160._4_4_ = (EStorable__vtable *)0x3f000000;
    local_160._0_4_ = (EStorable__vtable *)0x3f000000;
    local_14c = (EStorable__vtable *)0x3f000000;
    local_160._16_4_ = (EStorable__vtable *)0x3f000000;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar7,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
  }
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(_globals.m_pFont,(float)aspect * 20.0,1.0,true);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar4 = _BLACK.field0_0x0._0_8_;
  pEVar3 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
  psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"options");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_160._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + 0.5);
  local_160._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + 0.6);
  local_160._16_4_ = local_160._0_4_;
  local_14c = local_160._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar7,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  pEVar3 = _globals.m_pFont;
                    /* end of inlined section */
  if (this->m_OptionSelected == 2) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
    (pEVar3->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
    (pEVar3->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
    (pEVar3->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
    (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
    (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar10 = (EStorable__vtable *)0x3f000000;
                    /* end of inlined section */
  psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"options");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_160._4_4_ = (EStorable__vtable *)0x3f19999a;
  local_14c = (EStorable__vtable *)0x3f19999a;
  local_160._0_4_ = pEVar10;
  local_160._16_4_ = pEVar10;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar7,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  SetSize__6ERFontffb(_globals.m_pFont,(float)aspect * 20.0,1.0,true);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar4 = _BLACK.field0_0x0._0_8_;
  pEVar3 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
  psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"credits");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_160._0_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[0] + (float)pEVar10);
  local_160._4_4_ = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + 0.67);
  local_160._16_4_ = local_160._0_4_;
  local_14c = local_160._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar7,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  pEVar3 = _globals.m_pFont;
                    /* end of inlined section */
  if (this->m_OptionSelected == 3) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = PulseColor.field0_0x0.d[0];
    (pEVar3->m_vColor).field0_0x0.d[1] = PulseColor.field0_0x0.d[1];
    (pEVar3->m_vColor).field0_0x0.d[2] = PulseColor.field0_0x0.d[2];
    (pEVar3->m_vColor).field0_0x0.d[3] = PulseColor.field0_0x0.d[3];
  }
  else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
    (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
    (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  psVar7 = GetMainMenuUIString__7EGlobalPCc(&_globals,"credits");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_160._0_4_ = (EStorable__vtable *)0x3f000000;
  local_160._4_4_ = (EStorable__vtable *)0x3f2b851f;
  local_160._16_4_ = (EStorable__vtable *)0x3f000000;
  local_14c = (EStorable__vtable *)0x3f2b851f;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar7,true,vPos,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
  if ((*(int *)&this->m_bCheatCodeEntryUp == 1) && (this->m_pKeyboard != (ETextEntryDialog *)0x0)) {
    Select__8ERShaderP3ERCi(this->m_pBlankShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_160._0_4_ = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_160._4_4_ = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_160._16_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_14c = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_100 = 0;
    local_fc = 0x3f800000;
    local_f0 = 0x3f800000;
    local_ec = 0;
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0;
    local_d4 = 0x3f000000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,(ERFont *)local_160,
               vPos,&local_100,&local_f0,&local_e0);
    pEVar2 = (this->m_pKeyboard->field0_0x0).__vtable;
    (*(code *)pEVar2->Message)
              ((int)this->m_pKeyboard->m_szText + *(short *)&pEVar2->SetBoxDims + -0x3e,prc);
  }
  return;
}

EGameMenuMainPanel* EGameMenuMainPanel::EGameMenuMainPanel() {
	EVec3 vPos;
	EUIPrompt *this;
	EVec3 vPos;
	EUIPrompt *this;
	EVec3 vPos;
	EVec3 vPos;
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
  EUITextIconDef *pEVar8;
  uint *puVar9;
  EUIIconDef *pEVar10;
  uint uVar11;
  ulong *puVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  EUIStaticTextIcon *pEVar13;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  int iVar14;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar15;
  EUIIconDef local_660;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  EUITextIconDef local_600;
  EUIIconDef local_5e0;
  EUIIconDef__vtable *local_5c0;
  EUIIconDef local_5b0;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  EUITextIconDef local_550;
  EUIIconDef local_530;
  EUIIconDef__vtable *local_510;
  EUIIconDef local_500;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  EUITextIconDef local_4a0;
  EUIIconDef local_480;
  EUIIconDef__vtable *local_460;
  EUIIconDef local_450;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  EUITextIconDef local_3f0;
  EUIIconDef local_3d0;
  EUIIconDef__vtable *local_3b0;
  EUIIconDef local_3a0;
  uint local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  EUITextIconDef local_340;
  EUIIconDef local_320;
  EUIIconDef__vtable *local_300;
  EUIIconDef local_2f0;
  uint local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  EUITextIconDef local_290;
  EUIIconDef local_270;
  EUIIconDef__vtable *local_250;
  EUIIconDef local_240;
  uint local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  EVec3 vPos;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  EUITextIconDef local_1e0;
  EUIIconDef local_1c0;
  EUIIconDef__vtable *local_1a0;
  int local_190;
  undefined4 *local_18c;
  EUITextIconDef *local_188;
  EUIIconDef *local_184;
  EPromptBar *local_180;
  EUIIconDef *local_17c;
  EUIIconDef *local_178;
  uint *local_174;
  undefined4 *local_170;
  undefined4 *local_16c;
  EUIStaticTextIcon *local_168;
  EUIIcon *local_164;
  EVec3 *local_160;
  EVec3 *local_15c;
  EVec3 *local_158;
  EUIIcon *local_154;
  EUIIcon *local_150;
  EUITextIconDef *local_14c;
  EUITextIconDef *local_148;
  EUITextIconDef *local_144;
  EUIIconDef *local_140;
  EUIIconDef *local_13c;
  EUIIconDef *local_138;
  EUIIcon *local_134;
  EUIIconDef *local_130;
  EUIIconDef *local_12c;
  EUIIconDef *local_128;
  EUIIcon *local_124;
  EPromptBar *local_120;
  EUIStaticTextIcon *local_11c;
  uint *local_118;
  uint *local_114;
  undefined4 *local_110;
  EPromptBar *local_10c;
  EVec3 *local_108;
  EVec3 *local_104;
  EVec3 *local_100;
  EVec3 *local_fc;
  EUITextIconDef *local_f8;
  EUITextIconDef *local_f4;
  EUITextIconDef *local_f0;
  EUIIcon *local_ec;
  EUIIconDef *local_e8;
  EUIIconDef *local_e4;
  EUIIconDef *local_e0;
  EPromptBar *local_dc;
  EUIStaticTextIcon *local_d8;
  EUIIcon *local_d4;
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
  
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  iVar14 = 1;
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  pEVar13 = (EUIStaticTextIcon *)this->m_Prompts;
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_18EGameMenuMainPanel;
  __16EGameMenuOptions(&this->m_OptionsMenu);
  __18EGameMenuStoryMenu(&this->m_StoryMenu);
  __18EGameMenuBonusMenu(&this->m_BonusMenu);
  __20EGameMenuSandboxMenu(&this->m_SandboxMenu);
  __16EGameMenuCredits(&this->m_Credits);
  __17EGameMenuMainMenu(&this->m_MainMenu);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_660.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_660.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_660.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_660.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_660.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_660.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon,&local_660,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_660.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_660.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_660.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_660.m_flags = 0;
  local_660.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_660.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_660,0,0,0x40);
  local_fc = (EVec3 *)&local_610;
  local_16c = &local_590;
  local_158 = (EVec3 *)&local_560;
  local_144 = &local_550;
  local_138 = &local_530;
  local_128 = &local_500;
  local_110 = &local_4e0;
  local_100 = (EVec3 *)&local_4b0;
  local_f0 = &local_4a0;
  local_e0 = &local_480;
  local_178 = &local_450;
  local_170 = &local_430;
  local_15c = (EVec3 *)&local_400;
  local_148 = &local_3f0;
  local_13c = &local_3d0;
  local_12c = &local_3a0;
  local_114 = &local_380;
  local_104 = (EVec3 *)&local_350;
  local_f4 = &local_340;
  local_e4 = &local_320;
  local_17c = &local_2f0;
  local_174 = &local_2d0;
  local_160 = (EVec3 *)&local_2a0;
  local_14c = &local_290;
  local_140 = &local_270;
  local_130 = &local_240;
  local_118 = &local_220;
  local_108 = (EVec3 *)&local_1f0;
  local_f8 = &local_1e0;
  local_e8 = &local_1c0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_660.m_trigger = 0x40;
    local_640 = 0x20;
    local_660.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_660.m_flags = 0;
    local_660.m_selColorIdx = 0;
    local_660.m_colorIdx = 1;
                    /* end of inlined section */
    iVar14 = iVar14 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    local_660.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_63c = 0;
    local_638 = 0;
    local_634 = 0x41400000;
    local_630 = 0;
    local_62c = 1;
    local_600.m_maxChars = 0x20;
    local_628 = CONCAT22(local_628._2_2_,0xffff);
    local_618 = 0;
    local_61c = 0;
    local_620 = 0;
    local_608 = 0;
    local_60c = 0;
    local_610 = 0;
    local_600.m_xAlign = E_FAX_LEFT;
    local_600.m_yAlign = E_FAY_TOP;
    local_600.m_pointsize = 12.0;
    local_600.m_selColorIdx = 0;
    local_600.m_colorIdx = 1;
    local_600.m_retChar = -1;
    local_5e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_5e0.m_flags = 0;
    local_5e0.m_trigger = 0x40;
    local_5e0.m_selColorIdx = 0;
    local_5e0.m_colorIdx = 1;
    local_5e0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar13,&local_600,&local_5e0,-1,local_fc);
    local_5e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar13->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_xAlign + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_63c,local_640) >> (7 - uVar11) * 8;
    pEVar2 = &(pEVar13->field0_0x0).m_textdef;
    uVar11 = (uint)pEVar2 & 7;
    puVar12 = (ulong *)((int)pEVar2 - uVar11);
    *puVar12 = CONCAT44(local_63c,local_640) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_pointsize + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_634,local_638) >> (7 - uVar11) * 8;
    pEVar3 = &(pEVar13->field0_0x0).m_textdef.m_yAlign;
    uVar11 = (uint)pEVar3 & 7;
    puVar12 = (ulong *)((int)pEVar3 - uVar11);
    *puVar12 = CONCAT44(local_634,local_638) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_62c,local_630) >> (7 - uVar11) * 8;
    puVar4 = &(pEVar13->field0_0x0).m_textdef.m_selColorIdx;
    uVar11 = (uint)puVar4 & 7;
    puVar12 = (ulong *)((int)puVar4 - uVar11);
    *puVar12 = CONCAT44(local_62c,local_630) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    *(undefined4 *)&(pEVar13->field0_0x0).m_textdef.m_retChar = local_628;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    local_5c0 = (pEVar13->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_660.m_trigger,local_660.m_flags) >> (7 - uVar11) * 8;
    pEVar5 = &(pEVar13->field0_0x0).field0_0x0.m_def;
    uVar11 = (uint)pEVar5 & 7;
    puVar12 = (ulong *)((int)pEVar5 - uVar11);
    *puVar12 = CONCAT44(local_660.m_trigger,local_660.m_flags) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_660.m_colorIdx,local_660.m_selColorIdx) >> (7 - uVar11) * 8;
    piVar6 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar11 = (uint)piVar6 & 7;
    puVar12 = (ulong *)((int)piVar6 - uVar11);
    *puVar12 = CONCAT44(local_660.m_colorIdx,local_660.m_selColorIdx) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_660.__vtable,local_660.m_pCtrl) >> (7 - uVar11) * 8;
    ppEVar7 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar11 = (uint)ppEVar7 & 7;
    puVar12 = (ulong *)((int)ppEVar7 - uVar11);
    *puVar12 = CONCAT44(local_660.__vtable,local_660.m_pCtrl) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    (pEVar13->field0_0x0).field0_0x0.m_def.__vtable = local_5c0;
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar13 = (EUIStaticTextIcon *)&pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_id;
    local_660.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  } while (iVar14 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(&this->m_PromptBar);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_5b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_5b0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_5b0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_5b0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_5b0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_5b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon2,&local_5b0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  fVar15 = 12.0;
  local_5b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_5b0.m_flags = 0;
  local_5b0.m_trigger = 0x40;
  local_5b0.m_selColorIdx = 0;
  local_5b0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_5b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  pEVar13 = (EUIStaticTextIcon *)this->m_PromptsSelectCancel;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_590 = 0x20;
  local_58c = 0;
  local_588 = 0;
  local_16c[3] = 0x41400000;
  local_580 = 0;
  local_16c[5] = 1;
                    /* end of inlined section */
  local_188 = local_148;
  local_18c = local_170;
  local_180 = &this->m_PromptBarSelectCancel;
  local_184 = local_13c;
  local_124 = &this->m_TriIcon4;
  local_154 = &this->m_XIcon4;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_578 = CONCAT22(local_578._2_2_,0xffff);
  local_568 = 0;
  local_56c = 0;
  local_570 = 0;
  local_558 = 0;
  local_55c = 0;
  local_560 = 0;
  local_550.m_maxChars = 0x20;
                    /* end of inlined section */
  local_190 = 1;
  local_d8 = (EUIStaticTextIcon *)this->m_PromptsOKCancel;
  local_dc = &this->m_PromptBarOKCancel;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_550.m_xAlign = E_FAX_LEFT;
                    /* end of inlined section */
  local_164 = &this->m_XIcon5;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_550.m_yAlign = E_FAY_TOP;
  local_144->m_pointsize = 12.0;
                    /* end of inlined section */
  local_134 = &this->m_SquareIcon5;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_550.m_selColorIdx = 0;
                    /* end of inlined section */
  local_ec = &this->m_TriIcon5;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_144->m_colorIdx = 1;
                    /* end of inlined section */
  local_168 = (EUIStaticTextIcon *)this->m_PromptsSelDetBack;
  local_10c = &this->m_PromptBarSelDetBack;
  local_d4 = &this->m_SquareIcon6;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_550.m_retChar = -1;
                    /* end of inlined section */
  local_150 = &this->m_TriIcon6;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_530.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_530.m_flags = 0;
  local_138->m_trigger = 0x40;
                    /* end of inlined section */
  local_11c = (EUIStaticTextIcon *)this->m_PromptsDetBack;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_530.m_selColorIdx = 0;
                    /* end of inlined section */
  local_120 = &this->m_PromptBarDetBack;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_138->m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_530.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_PromptShort).field0_0x0,local_144,local_138,-1,local_158);
  local_530.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (this->m_PromptShort).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_PromptShort).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 | CONCAT44(local_58c,local_590) >> (7 - uVar11) * 8;
  pEVar2 = &(this->m_PromptShort).field0_0x0.field0_0x0.m_textdef;
  uVar11 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar11);
  *puVar12 = CONCAT44(local_58c,local_590) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PromptShort).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 | CONCAT44(uStack_584,local_588) >> (7 - uVar11) * 8
  ;
  pEVar3 = &(this->m_PromptShort).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar11 = (uint)pEVar3 & 7;
  puVar12 = (ulong *)((int)pEVar3 - uVar11);
  *puVar12 = CONCAT44(uStack_584,local_588) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  puVar1 = (undefined *)((int)&(this->m_PromptShort).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3)
  ;
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 | CONCAT44(uStack_57c,local_580) >> (7 - uVar11) * 8
  ;
  puVar4 = &(this->m_PromptShort).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar11 = (uint)puVar4 & 7;
  puVar12 = (ulong *)((int)puVar4 - uVar11);
  *puVar12 = CONCAT44(uStack_57c,local_580) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  *(undefined4 *)&(this->m_PromptShort).field0_0x0.field0_0x0.m_textdef.m_retChar = local_578;
  local_510 = (this->m_PromptShort).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_PromptShort).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
             CONCAT44(local_5b0.m_trigger,local_5b0.m_flags) >> (7 - uVar11) * 8;
  pEVar5 = &(this->m_PromptShort).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar11 = (uint)pEVar5 & 7;
  puVar12 = (ulong *)((int)pEVar5 - uVar11);
  *puVar12 = CONCAT44(local_5b0.m_trigger,local_5b0.m_flags) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PromptShort).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
             CONCAT44(local_5b0.m_colorIdx,local_5b0.m_selColorIdx) >> (7 - uVar11) * 8;
  piVar6 = &(this->m_PromptShort).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar11 = (uint)piVar6 & 7;
  puVar12 = (ulong *)((int)piVar6 - uVar11);
  *puVar12 = CONCAT44(local_5b0.m_colorIdx,local_5b0.m_selColorIdx) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PromptShort).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
             CONCAT44(local_5b0.__vtable,local_5b0.m_pCtrl) >> (7 - uVar11) * 8;
  ppEVar7 = &(this->m_PromptShort).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar11 = (uint)ppEVar7 & 7;
  puVar12 = (ulong *)((int)ppEVar7 - uVar11);
  *puVar12 = CONCAT44(local_5b0.__vtable,local_5b0.m_pCtrl) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  (this->m_PromptShort).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_510;
  (this->m_PromptShort).m_lastPressed = 0;
  (this->m_PromptShort).m_gap = 0.0;
                    /* end of inlined section */
  local_5b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  __10EPromptBar(&this->m_PromptBarShort);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_500.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_500.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_128->m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_500.m_selColorIdx = 0;
  local_128->m_colorIdx = 1;
                    /* end of inlined section */
  local_500.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon2,local_128,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_500.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_500.m_flags = 0;
  local_128->m_trigger = 0x40;
  local_500.m_selColorIdx = 0;
  local_128->m_colorIdx = 1;
  local_500.m_pCtrl = (EUIVirtualCtrl *)0x0;
  local_4e0 = 0x20;
  local_4dc = 0;
  local_4d8 = 0;
  local_110[3] = 0x41400000;
  local_4d0 = 0;
  local_110[5] = 1;
  local_4a0.m_maxChars = 0x20;
  local_4c8 = CONCAT22(local_4c8._2_2_,0xffff);
  local_4b8 = 0;
  local_4bc = 0;
  local_4c0 = 0;
  local_4a8 = 0;
  local_4ac = 0;
  local_4b0 = 0;
  local_4a0.m_xAlign = E_FAX_LEFT;
  local_4a0.m_yAlign = E_FAY_TOP;
  local_f0->m_pointsize = 12.0;
  local_4a0.m_selColorIdx = 0;
  local_f0->m_colorIdx = 1;
  local_4a0.m_retChar = -1;
  local_480.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_480.m_flags = 0;
  local_e0->m_trigger = 0x40;
  local_480.m_selColorIdx = 0;
  local_e0->m_colorIdx = 1;
  local_480.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_PromptShort2).field0_0x0,local_f0,local_e0,-1,local_100);
  local_480.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (this->m_PromptShort2).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_PromptShort2).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 | CONCAT44(local_4dc,local_4e0) >> (7 - uVar11) * 8;
  pEVar2 = &(this->m_PromptShort2).field0_0x0.field0_0x0.m_textdef;
  uVar11 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar11);
  *puVar12 = CONCAT44(local_4dc,local_4e0) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PromptShort2).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 | CONCAT44(uStack_4d4,local_4d8) >> (7 - uVar11) * 8
  ;
  pEVar3 = &(this->m_PromptShort2).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar11 = (uint)pEVar3 & 7;
  puVar12 = (ulong *)((int)pEVar3 - uVar11);
  *puVar12 = CONCAT44(uStack_4d4,local_4d8) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PromptShort2).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 | CONCAT44(uStack_4cc,local_4d0) >> (7 - uVar11) * 8
  ;
  puVar4 = &(this->m_PromptShort2).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar11 = (uint)puVar4 & 7;
  puVar12 = (ulong *)((int)puVar4 - uVar11);
  *puVar12 = CONCAT44(uStack_4cc,local_4d0) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  *(undefined4 *)&(this->m_PromptShort2).field0_0x0.field0_0x0.m_textdef.m_retChar = local_4c8;
  local_460 = (this->m_PromptShort2).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_PromptShort2).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
             CONCAT44(local_500.m_trigger,local_500.m_flags) >> (7 - uVar11) * 8;
  pEVar5 = &(this->m_PromptShort2).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar11 = (uint)pEVar5 & 7;
  puVar12 = (ulong *)((int)pEVar5 - uVar11);
  *puVar12 = CONCAT44(local_500.m_trigger,local_500.m_flags) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PromptShort2).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
             CONCAT44(local_500.m_colorIdx,local_500.m_selColorIdx) >> (7 - uVar11) * 8;
  piVar6 = &(this->m_PromptShort2).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar11 = (uint)piVar6 & 7;
  puVar12 = (ulong *)((int)piVar6 - uVar11);
  *puVar12 = CONCAT44(local_500.m_colorIdx,local_500.m_selColorIdx) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PromptShort2).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
             CONCAT44(local_500.__vtable,local_500.m_pCtrl) >> (7 - uVar11) * 8;
  ppEVar7 = &(this->m_PromptShort2).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar11 = (uint)ppEVar7 & 7;
  puVar12 = (ulong *)((int)ppEVar7 - uVar11);
  *puVar12 = CONCAT44(local_500.__vtable,local_500.m_pCtrl) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  (this->m_PromptShort2).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_460;
  (this->m_PromptShort2).m_lastPressed = 0;
  (this->m_PromptShort2).m_gap = 0.0;
                    /* end of inlined section */
  local_500.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  __10EPromptBar(&this->m_PromptBarShort2);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_450.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_450.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_178->m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_450.m_selColorIdx = 0;
  local_178->m_colorIdx = 1;
                    /* end of inlined section */
  local_450.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon3,local_178,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_450.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_450.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_178->m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_450.m_selColorIdx = 0;
  local_178->m_colorIdx = 1;
                    /* end of inlined section */
  local_450.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon3,local_178,0,0,0x40);
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_450.m_colorIdx = 1;
                    /* end of inlined section */
    local_190 = local_190 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_450.m_trigger = 0x40;
    local_450.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_430 = 0x20;
    local_450.m_flags = 0;
    local_450.m_selColorIdx = 0;
    local_450.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_42c = 0;
    local_428 = 0;
    local_18c[3] = fVar15;
    local_420 = 0;
    local_18c[5] = 1;
    local_418 = CONCAT22(local_418._2_2_,0xffff);
    local_3f0.m_maxChars = 0x20;
    local_408 = 0;
    local_40c = 0;
    local_410 = 0;
    local_3f8 = 0;
    local_3fc = 0;
    local_400 = 0;
    local_3f0.m_xAlign = E_FAX_LEFT;
    local_3f0.m_yAlign = E_FAY_TOP;
    local_188->m_pointsize = fVar15;
    local_3f0.m_selColorIdx = 0;
    local_188->m_colorIdx = 1;
    local_3f0.m_retChar = -1;
    local_3d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_3d0.m_flags = 0;
    local_184->m_trigger = 0x40;
    local_3d0.m_selColorIdx = 0;
    local_184->m_colorIdx = 1;
    local_3d0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar13,local_188,local_184,-1,local_15c);
    local_3d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar13->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_xAlign + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_42c,local_430) >> (7 - uVar11) * 8;
    pEVar2 = &(pEVar13->field0_0x0).m_textdef;
    uVar11 = (uint)pEVar2 & 7;
    puVar12 = (ulong *)((int)pEVar2 - uVar11);
    *puVar12 = CONCAT44(local_42c,local_430) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_pointsize + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(uStack_424,local_428) >> (7 - uVar11) * 8;
    pEVar3 = &(pEVar13->field0_0x0).m_textdef.m_yAlign;
    uVar11 = (uint)pEVar3 & 7;
    puVar12 = (ulong *)((int)pEVar3 - uVar11);
    *puVar12 = CONCAT44(uStack_424,local_428) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(uStack_41c,local_420) >> (7 - uVar11) * 8;
    puVar4 = &(pEVar13->field0_0x0).m_textdef.m_selColorIdx;
    uVar11 = (uint)puVar4 & 7;
    puVar12 = (ulong *)((int)puVar4 - uVar11);
    *puVar12 = CONCAT44(uStack_41c,local_420) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    *(undefined4 *)&(pEVar13->field0_0x0).m_textdef.m_retChar = local_418;
    local_3b0 = (pEVar13->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_450.m_trigger,local_450.m_flags) >> (7 - uVar11) * 8;
    pEVar5 = &(pEVar13->field0_0x0).field0_0x0.m_def;
    uVar11 = (uint)pEVar5 & 7;
    puVar12 = (ulong *)((int)pEVar5 - uVar11);
    *puVar12 = CONCAT44(local_450.m_trigger,local_450.m_flags) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_450.m_colorIdx,local_450.m_selColorIdx) >> (7 - uVar11) * 8;
    piVar6 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar11 = (uint)piVar6 & 7;
    puVar12 = (ulong *)((int)piVar6 - uVar11);
    *puVar12 = CONCAT44(local_450.m_colorIdx,local_450.m_selColorIdx) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_450.__vtable,local_450.m_pCtrl) >> (7 - uVar11) * 8;
    ppEVar7 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar11 = (uint)ppEVar7 & 7;
    puVar12 = (ulong *)((int)ppEVar7 - uVar11);
    *puVar12 = CONCAT44(local_450.__vtable,local_450.m_pCtrl) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
    (pEVar13->field0_0x0).field0_0x0.m_def.__vtable = local_3b0;
                    /* end of inlined section */
    pEVar13 = (EUIStaticTextIcon *)&pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_id;
    local_450.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  } while (local_190 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(local_180);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_3a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_3a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_12c->m_trigger = 0x40;
                    /* end of inlined section */
  iVar14 = 1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_3a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_12c->m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_3a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_154,local_12c,0,0,0x40);
  pEVar13 = local_d8;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_3a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_3a0.m_flags = 0;
  local_12c->m_trigger = 0x40;
  local_3a0.m_selColorIdx = 0;
  local_12c->m_colorIdx = 1;
                    /* end of inlined section */
  local_3a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_124,local_12c,0,0,0x40);
  pEVar5 = local_e4;
  pEVar2 = local_f4;
  puVar4 = local_114;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_3a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_3a0.m_flags = 0;
    local_3a0.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar14 = iVar14 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_3a0.m_colorIdx = 1;
    local_3a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_37c = 0;
    local_378 = 0;
    puVar4[3] = 0x41400000;
    local_370 = 0;
    puVar4[5] = 1;
    local_368 = CONCAT22(local_368._2_2_,0xffff);
    local_358 = 0;
    local_35c = 0;
    local_360 = 0;
    local_348 = 0;
    local_34c = 0;
    local_350 = 0;
    local_340.m_xAlign = E_FAX_LEFT;
    local_340.m_yAlign = E_FAY_TOP;
    pEVar2->m_pointsize = 12.0;
    local_340.m_selColorIdx = 0;
    pEVar2->m_colorIdx = 1;
    local_340.m_retChar = -1;
    local_320.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_320.m_flags = 0;
    pEVar5->m_trigger = local_c0;
    local_320.m_selColorIdx = 0;
    pEVar5->m_colorIdx = 1;
    local_320.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_3a0.m_trigger = local_c0;
    local_380 = local_d0;
    local_340.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar13,pEVar2,pEVar5,-1,local_104);
    local_320.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar13->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_xAlign + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_37c,local_380) >> (7 - uVar11) * 8;
    pEVar8 = &(pEVar13->field0_0x0).m_textdef;
    uVar11 = (uint)pEVar8 & 7;
    puVar12 = (ulong *)((int)pEVar8 - uVar11);
    *puVar12 = CONCAT44(local_37c,local_380) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_pointsize + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(uStack_374,local_378) >> (7 - uVar11) * 8;
    pEVar3 = &(pEVar13->field0_0x0).m_textdef.m_yAlign;
    uVar11 = (uint)pEVar3 & 7;
    puVar12 = (ulong *)((int)pEVar3 - uVar11);
    *puVar12 = CONCAT44(uStack_374,local_378) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(uStack_36c,local_370) >> (7 - uVar11) * 8;
    puVar9 = &(pEVar13->field0_0x0).m_textdef.m_selColorIdx;
    uVar11 = (uint)puVar9 & 7;
    puVar12 = (ulong *)((int)puVar9 - uVar11);
    *puVar12 = CONCAT44(uStack_36c,local_370) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    *(undefined4 *)&(pEVar13->field0_0x0).m_textdef.m_retChar = local_368;
    local_300 = (pEVar13->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_3a0.m_trigger,local_3a0.m_flags) >> (7 - uVar11) * 8;
    pEVar10 = &(pEVar13->field0_0x0).field0_0x0.m_def;
    uVar11 = (uint)pEVar10 & 7;
    puVar12 = (ulong *)((int)pEVar10 - uVar11);
    *puVar12 = CONCAT44(local_3a0.m_trigger,local_3a0.m_flags) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_3a0.m_colorIdx,local_3a0.m_selColorIdx) >> (7 - uVar11) * 8;
    piVar6 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar11 = (uint)piVar6 & 7;
    puVar12 = (ulong *)((int)piVar6 - uVar11);
    *puVar12 = CONCAT44(local_3a0.m_colorIdx,local_3a0.m_selColorIdx) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_3a0.__vtable,local_3a0.m_pCtrl) >> (7 - uVar11) * 8;
    ppEVar7 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar11 = (uint)ppEVar7 & 7;
    puVar12 = (ulong *)((int)ppEVar7 - uVar11);
    *puVar12 = CONCAT44(local_3a0.__vtable,local_3a0.m_pCtrl) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    (pEVar13->field0_0x0).field0_0x0.m_def.__vtable = local_300;
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar13 = (EUIStaticTextIcon *)&pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_3a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar14 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(local_dc);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_2f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_2f0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_17c->m_trigger = 0x40;
                    /* end of inlined section */
  iVar14 = 2;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_2f0.m_selColorIdx = 0;
  local_17c->m_colorIdx = 1;
                    /* end of inlined section */
  local_2f0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_164,local_17c,0,0,0x40);
  pEVar13 = local_168;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_2f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_2f0.m_flags = 0;
  local_17c->m_trigger = 0x40;
  local_2f0.m_selColorIdx = 0;
  local_17c->m_colorIdx = 1;
                    /* end of inlined section */
  local_2f0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_134,local_17c,0,0,0x40);
  pEVar2 = local_14c;
  puVar4 = local_174;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_2f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_2f0.m_flags = 0;
  local_17c->m_trigger = 0x40;
  local_2f0.m_selColorIdx = 0;
  local_17c->m_colorIdx = 1;
  local_2f0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(local_ec,local_17c,0,0,0x40);
  pEVar5 = local_140;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_2f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_2f0.m_flags = 0;
    local_2f0.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar14 = iVar14 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_2f0.m_colorIdx = 1;
    local_2f0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_2cc = 0;
    local_2c8 = 0;
    puVar4[3] = 0x41400000;
    local_2c0 = 0;
    puVar4[5] = 1;
    local_2b8 = CONCAT22(local_2b8._2_2_,0xffff);
    local_2a8 = 0;
    local_2ac = 0;
    local_2b0 = 0;
    local_298 = 0;
    local_29c = 0;
    local_2a0 = 0;
    local_290.m_xAlign = E_FAX_LEFT;
    local_290.m_yAlign = E_FAY_TOP;
    pEVar2->m_pointsize = 12.0;
    local_290.m_selColorIdx = 0;
    pEVar2->m_colorIdx = 1;
    local_290.m_retChar = -1;
    local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_270.m_flags = 0;
    pEVar5->m_trigger = local_c0;
    local_270.m_selColorIdx = 0;
    pEVar5->m_colorIdx = 1;
    local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_2f0.m_trigger = local_c0;
    local_2d0 = local_d0;
    local_290.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar13,pEVar2,pEVar5,-1,local_160);
    local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar13->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_xAlign + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_2cc,local_2d0) >> (7 - uVar11) * 8;
    pEVar8 = &(pEVar13->field0_0x0).m_textdef;
    uVar11 = (uint)pEVar8 & 7;
    puVar12 = (ulong *)((int)pEVar8 - uVar11);
    *puVar12 = CONCAT44(local_2cc,local_2d0) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_pointsize + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(uStack_2c4,local_2c8) >> (7 - uVar11) * 8;
    pEVar3 = &(pEVar13->field0_0x0).m_textdef.m_yAlign;
    uVar11 = (uint)pEVar3 & 7;
    puVar12 = (ulong *)((int)pEVar3 - uVar11);
    *puVar12 = CONCAT44(uStack_2c4,local_2c8) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(uStack_2bc,local_2c0) >> (7 - uVar11) * 8;
    puVar9 = &(pEVar13->field0_0x0).m_textdef.m_selColorIdx;
    uVar11 = (uint)puVar9 & 7;
    puVar12 = (ulong *)((int)puVar9 - uVar11);
    *puVar12 = CONCAT44(uStack_2bc,local_2c0) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    *(undefined4 *)&(pEVar13->field0_0x0).m_textdef.m_retChar = local_2b8;
    local_250 = (pEVar13->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_2f0.m_trigger,local_2f0.m_flags) >> (7 - uVar11) * 8;
    pEVar10 = &(pEVar13->field0_0x0).field0_0x0.m_def;
    uVar11 = (uint)pEVar10 & 7;
    puVar12 = (ulong *)((int)pEVar10 - uVar11);
    *puVar12 = CONCAT44(local_2f0.m_trigger,local_2f0.m_flags) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_2f0.m_colorIdx,local_2f0.m_selColorIdx) >> (7 - uVar11) * 8;
    piVar6 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar11 = (uint)piVar6 & 7;
    puVar12 = (ulong *)((int)piVar6 - uVar11);
    *puVar12 = CONCAT44(local_2f0.m_colorIdx,local_2f0.m_selColorIdx) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_2f0.__vtable,local_2f0.m_pCtrl) >> (7 - uVar11) * 8;
    ppEVar7 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar11 = (uint)ppEVar7 & 7;
    puVar12 = (ulong *)((int)ppEVar7 - uVar11);
    *puVar12 = CONCAT44(local_2f0.__vtable,local_2f0.m_pCtrl) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    (pEVar13->field0_0x0).field0_0x0.m_def.__vtable = local_250;
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar13 = (EUIStaticTextIcon *)&pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_2f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar14 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(local_10c);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_240.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_240.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130->m_trigger = 0x40;
                    /* end of inlined section */
  iVar14 = 1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_240.m_selColorIdx = 0;
  local_130->m_colorIdx = 1;
                    /* end of inlined section */
  local_240.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_d4,local_130,0,0,0x40);
  pEVar13 = local_11c;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_240.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_240.m_flags = 0;
  local_130->m_trigger = 0x40;
  local_240.m_selColorIdx = 0;
  local_130->m_colorIdx = 1;
                    /* end of inlined section */
  local_240.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_150,local_130,0,0,0x40);
  pEVar5 = local_e8;
  pEVar2 = local_f8;
  puVar4 = local_118;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_240.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_240.m_flags = 0;
    local_240.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar14 = iVar14 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_240.m_colorIdx = 1;
    local_240.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_21c = 0;
    local_218 = 0;
    puVar4[3] = 0x41400000;
    local_210 = 0;
    puVar4[5] = 1;
    local_208 = CONCAT22(local_208._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_1e8 = 0;
    local_1ec = 0;
    local_1f0 = 0;
    local_1e0.m_xAlign = E_FAX_LEFT;
    local_1e0.m_yAlign = E_FAY_TOP;
    pEVar2->m_pointsize = 12.0;
    local_1e0.m_selColorIdx = 0;
    pEVar2->m_colorIdx = 1;
    local_1e0.m_retChar = -1;
    local_1c0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_1c0.m_flags = 0;
    pEVar5->m_trigger = local_c0;
    local_1c0.m_selColorIdx = 0;
    pEVar5->m_colorIdx = 1;
    local_1c0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_240.m_trigger = local_c0;
    local_220 = local_d0;
    local_1e0.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar13,pEVar2,pEVar5,-1,local_108);
    local_1c0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar13->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_xAlign + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_21c,local_220) >> (7 - uVar11) * 8;
    pEVar8 = &(pEVar13->field0_0x0).m_textdef;
    uVar11 = (uint)pEVar8 & 7;
    puVar12 = (ulong *)((int)pEVar8 - uVar11);
    *puVar12 = CONCAT44(local_21c,local_220) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_pointsize + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(uStack_214,local_218) >> (7 - uVar11) * 8;
    pEVar3 = &(pEVar13->field0_0x0).m_textdef.m_yAlign;
    uVar11 = (uint)pEVar3 & 7;
    puVar12 = (ulong *)((int)pEVar3 - uVar11);
    *puVar12 = CONCAT44(uStack_214,local_218) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(uStack_20c,local_210) >> (7 - uVar11) * 8;
    puVar9 = &(pEVar13->field0_0x0).m_textdef.m_selColorIdx;
    uVar11 = (uint)puVar9 & 7;
    puVar12 = (ulong *)((int)puVar9 - uVar11);
    *puVar12 = CONCAT44(uStack_20c,local_210) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    *(undefined4 *)&(pEVar13->field0_0x0).m_textdef.m_retChar = local_208;
    local_1a0 = (pEVar13->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_240.m_trigger,local_240.m_flags) >> (7 - uVar11) * 8;
    pEVar10 = &(pEVar13->field0_0x0).field0_0x0.m_def;
    uVar11 = (uint)pEVar10 & 7;
    puVar12 = (ulong *)((int)pEVar10 - uVar11);
    *puVar12 = CONCAT44(local_240.m_trigger,local_240.m_flags) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_240.m_colorIdx,local_240.m_selColorIdx) >> (7 - uVar11) * 8;
    piVar6 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar11 = (uint)piVar6 & 7;
    puVar12 = (ulong *)((int)piVar6 - uVar11);
    *puVar12 = CONCAT44(local_240.m_colorIdx,local_240.m_selColorIdx) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_240.__vtable,local_240.m_pCtrl) >> (7 - uVar11) * 8;
    ppEVar7 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar11 = (uint)ppEVar7 & 7;
    puVar12 = (ulong *)((int)ppEVar7 - uVar11);
    *puVar12 = CONCAT44(local_240.__vtable,local_240.m_pCtrl) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    (pEVar13->field0_0x0).field0_0x0.m_def.__vtable = local_1a0;
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar13 = (EUIStaticTextIcon *)&pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_240.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar14 != -1);
  __10EPromptBar(local_120);
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pMenuBevelShdr = (ERShader *)0x0;
  this->m_pUpShdr = (ERShader *)0x0;
  this->m_pDownShdr = (ERShader *)0x0;
  this->m_pLeftShdr = (ERShader *)0x0;
  this->m_pRightShdr = (ERShader *)0x0;
  this->m_pDPadBack = (ERShader *)0x0;
  this->m_pUpBlankShdr = (ERShader *)0x0;
  this->m_pDownBlankShdr = (ERShader *)0x0;
  this->m_pLeftBlankShdr = (ERShader *)0x0;
  this->m_pRightBlankShdr = (ERShader *)0x0;
  this->m_pDPadUp = (ERShader *)0x0;
  this->m_pDPadDown = (ERShader *)0x0;
  this->m_pDPadLeft = (ERShader *)0x0;
  this->m_pDPadRight = (ERShader *)0x0;
  return this;
}

void EGameMenuMainPanel::~EGameMenuMainPanel(int __in_chrg) {
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EPromptBar *this_00;
  EPromptBar *this_01;
  EUIPrompt *pEVar3;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_18EGameMenuMainPanel;
  ___10EPromptBar(&this->m_PromptBarDetBack,2);
  if ((this != (EGameMenuMainPanel *)0xffffebac) &&
     (this->m_PromptsDetBack != (EUIPrompt *)&this->m_PromptBarDetBack)) {
    pEVar3 = this->m_PromptsDetBack + 1;
    do {
      pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->Update + 4,0);
      bVar1 = this->m_PromptsDetBack != pEVar3;
      pEVar3 = (EUIPrompt *)((int)(pEVar3 + -2) + 0xb0);
    } while (bVar1);
  }
                    /* end of inlined section */
  ___7EUIIcon(&this->m_TriIcon6,2);
  ___7EUIIcon(&this->m_SquareIcon6,2);
  ___10EPromptBar(&this->m_PromptBarSelDetBack,2);
  this_00 = &this->m_PromptBarSelectCancel;
  this_01 = &this->m_PromptBar;
  if ((this != (EGameMenuMainPanel *)0xffffef04) &&
     (this->m_PromptsSelDetBack != (EUIPrompt *)&this->m_PromptBarSelDetBack)) {
    for (pEVar3 = this->m_PromptsSelDetBack + 2;
        pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar2->Draw)
                  ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar2->Update + 4,0), this->m_PromptsSelDetBack != pEVar3;
        pEVar3 = pEVar3 + -1) {
    }
  }
  ___7EUIIcon(&this->m_TriIcon5,2);
  ___7EUIIcon(&this->m_SquareIcon5,2);
  ___7EUIIcon(&this->m_XIcon5,2);
  ___10EPromptBar(&this->m_PromptBarOKCancel,2);
  if ((this != (EGameMenuMainPanel *)0xfffff220) &&
     (this->m_PromptsOKCancel != (EUIPrompt *)&this->m_PromptBarOKCancel)) {
    pEVar3 = this->m_PromptsOKCancel + 1;
    do {
      pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->Update + 4,0);
      bVar1 = this->m_PromptsOKCancel != pEVar3;
      pEVar3 = (EUIPrompt *)((int)(pEVar3 + -2) + 0xb0);
    } while (bVar1);
  }
  ___7EUIIcon(&this->m_TriIcon4,2);
  ___7EUIIcon(&this->m_XIcon4,2);
  ___10EPromptBar(this_00,2);
  if (this != (EGameMenuMainPanel *)0xfffff4c8) {
    while (this->m_PromptsSelectCancel != (EUIPrompt *)this_00) {
      (**(code **)(*(int *)((int)(this_00 + -2) + 0x48) + 0xc))
                ((undefined *)
                 ((int)&(((EPromptBar *)((int)(this_00 + -2) + 0x10))->field0_0x0).m_ChildList.
                        field0_0x0.m_l.m_pHead +
                 (int)*(short *)(*(int *)((int)(this_00 + -2) + 0x48) + 8)),0);
      this_00 = (EPromptBar *)((int)(this_00 + -2) + 0x10);
    }
  }
  ___7EUIIcon(&this->m_TriIcon3,2);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
  ___7EUIIcon(&this->m_XIcon3,2);
  ___10EPromptBar(&this->m_PromptBarShort2,2);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  (this->m_PromptShort2).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_PromptShort2,2);
                    /* end of inlined section */
  ___7EUIIcon(&this->m_TriIcon2,2);
  ___10EPromptBar(&this->m_PromptBarShort,2);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  (this->m_PromptShort).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_PromptShort,2);
                    /* end of inlined section */
  ___7EUIIcon(&this->m_XIcon2,2);
  ___10EPromptBar(this_01,2);
  if (this != (EGameMenuMainPanel *)0xfffffa78) {
    while (this->m_Prompts != (EUIPrompt *)this_01) {
      (**(code **)(*(int *)((int)(this_01 + -2) + 0x48) + 0xc))
                ((undefined *)
                 ((int)&(((EPromptBar *)((int)(this_01 + -2) + 0x10))->field0_0x0).m_ChildList.
                        field0_0x0.m_l.m_pHead +
                 (int)*(short *)(*(int *)((int)(this_01 + -2) + 0x48) + 8)),0);
      this_01 = (EPromptBar *)((int)(this_01 + -2) + 0x10);
    }
  }
  ___7EUIIcon(&this->m_TriIcon,2);
  ___7EUIIcon(&this->m_XIcon,2);
  ___17EGameMenuMainMenu(&this->m_MainMenu,2);
  ___16EGameMenuCredits(&this->m_Credits,2);
  ___20EGameMenuSandboxMenu(&this->m_SandboxMenu,2);
  ___18EGameMenuBonusMenu(&this->m_BonusMenu,2);
  ___18EGameMenuStoryMenu(&this->m_StoryMenu,2);
  ___16EGameMenuOptions(&this->m_OptionsMenu,2);
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void EGameMenuMainPanel::Init() {
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
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
  ERShader *pEVar10;
  short *psVar11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s4;
  EUIIcon *this_00;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_1d0;
  float local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  __vtbl_ptr_type *local_1bc;
  EUIIconDef__vtable *local_1b0;
  EUIIconDef__vtable *local_1a0;
  EUIIconDef__vtable *local_190;
  EUIIconDef__vtable *local_180;
  EUIIconDef__vtable *local_170;
  EUIIconDef__vtable *local_160;
  EUIIcon *local_150;
  EUIIcon *local_14c;
  EUIPrompt *local_148;
  EUIPrompt *local_144;
  EPromptBar *local_140;
  EUIIcon *local_13c;
  EUIPrompt *local_138;
  EUIPrompt *local_134;
  EPromptBar *local_130;
  EUIIcon *local_12c;
  EUIIcon *local_128;
  EUIPrompt *local_124;
  EUIPrompt *local_120;
  EPromptBar *local_11c;
  EUIIcon *local_118;
  EUIPrompt *local_114;
  EPromptBar *local_110;
  EUIIcon *local_10c;
  EUIPrompt *local_108;
  EPromptBar *local_104;
  EUIIcon *local_100;
  EUIIcon *local_fc;
  EUIIcon *local_f8;
  EUIPrompt *local_f4;
  EUIPrompt *local_f0;
  EUIPrompt *local_ec;
  EPromptBar *local_e8;
  EUIIcon *local_e4;
  EUIIcon *local_e0;
  EUIPrompt *local_dc;
  EUIPrompt *local_d8;
  EPromptBar *local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
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
  
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (_globals.m_nCreditMode == 0) {
    this->m_MenuActive = 0;
  }
  else {
    this->m_MenuActive = 5;
    _globals.m_nCreditMode = 0;
  }
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6[1].OnStickRepeat,&this->m_OptionsMenu);
  pEVar6 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_150 = &this->m_XIcon;
  local_14c = &this->m_TriIcon;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  this_00 = &this->m_XIcon3;
                    /* end of inlined section */
                    /* end of inlined section */
  (*(code *)pEVar6[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6[1].OnStickRepeat,&this->m_StoryMenu);
  fVar13 = 32.0;
  pEVar6 = (this->field0_0x0).__vtable;
  local_148 = this->m_Prompts;
  local_144 = this->m_Prompts + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_140 = &this->m_PromptBar;
  (*(code *)pEVar6[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6[1].OnStickRepeat,&this->m_BonusMenu);
  pEVar6 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_13c = &this->m_TriIcon3;
                    /* end of inlined section */
  local_138 = this->m_PromptsSelectCancel;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  local_134 = this->m_PromptsSelectCancel + 1;
  local_130 = &this->m_PromptBarSelectCancel;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_12c = &this->m_XIcon4;
                    /* end of inlined section */
                    /* end of inlined section */
  (*(code *)pEVar6[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6[1].OnStickRepeat,&this->m_SandboxMenu);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_128 = &this->m_TriIcon4;
                    /* end of inlined section */
  local_124 = this->m_PromptsOKCancel;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  local_120 = this->m_PromptsOKCancel + 1;
  local_11c = &this->m_PromptBarOKCancel;
  pEVar6 = (this->field0_0x0).__vtable;
  local_114 = &this->m_PromptShort;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_118 = &this->m_XIcon2;
                    /* end of inlined section */
                    /* end of inlined section */
  (*(code *)pEVar6[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6[1].OnStickRepeat,&this->m_Credits);
  local_110 = &this->m_PromptBarShort;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_10c = &this->m_TriIcon2;
                    /* end of inlined section */
  local_108 = &this->m_PromptShort2;
  local_104 = &this->m_PromptBarShort2;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_100 = &this->m_XIcon5;
                    /* end of inlined section */
  pEVar6 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_fc = &this->m_SquareIcon5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (*(code *)pEVar6[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6[1].OnStickRepeat,&this->m_MainMenu);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_f8 = &this->m_TriIcon5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  Init2__16EGameMenuOptionsP18EGameMenuMainPanel(&this->m_OptionsMenu,this);
  local_f4 = this->m_PromptsSelDetBack;
  Init2__18EGameMenuStoryMenuP18EGameMenuMainPanel(&this->m_StoryMenu,this);
  local_f0 = this->m_PromptsSelDetBack + 1;
  Init2__18EGameMenuBonusMenuP18EGameMenuMainPanel(&this->m_BonusMenu,this);
  local_ec = this->m_PromptsSelDetBack + 2;
  Init2__20EGameMenuSandboxMenuP18EGameMenuMainPanel(&this->m_SandboxMenu,this);
  local_e8 = &this->m_PromptBarSelDetBack;
  Init2__16EGameMenuCreditsP18EGameMenuMainPanel(&this->m_Credits,this);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e4 = &this->m_SquareIcon6;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  Init2__17EGameMenuMainMenuP18EGameMenuMainPanel(&this->m_MainMenu,this);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0 = &this->m_TriIcon6;
                    /* end of inlined section */
  this->m_PromptLevel = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  local_dc = this->m_PromptsDetBack;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pBlankShdr = pEVar10;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
                    /* end of inlined section */
  local_d8 = this->m_PromptsDetBack + 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pMenuBevelShdr = pEVar10;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x32272593,(EFile *)0x0,0);
                    /* end of inlined section */
  local_d4 = &this->m_PromptBarDetBack;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pUpShdr = pEVar10;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xcbf05ef5,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pDownShdr = pEVar10;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xad6829a6,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLeftShdr = pEVar10;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf3afb5a5,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pRightShdr = pEVar10;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2d14ac7d,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pDPadBack = pEVar10;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x29a47441,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pUpBlankShdr = pEVar10;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x64928389,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pDownBlankShdr = pEVar10;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x20af4da,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLeftBlankShdr = pEVar10;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xaab3ea6f,(EFile *)0x0,0);
  this->m_pDPadUp = this->m_pUpShdr;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
  this->m_pDPadDown = this->m_pDownShdr;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
  this->m_pDPadLeft = this->m_pLeftBlankShdr;
  this->m_pDPadRight = pEVar10;
  local_1c4 = 1;
  local_1c8 = 0;
  local_1c0 = 0;
                    /* end of inlined section */
  this->m_pRightBlankShdr = pEVar10;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0 = (local_150->m_def).__vtable;
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
  (local_150->m_def).__vtable = local_1b0;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_150,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_150,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
  local_1c0 = 0;
  local_1a0 = (local_14c->m_def).__vtable;
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
  (local_14c->m_def).__vtable = local_1a0;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_14c,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_14c,0x2ccf500a);
  pEVar6 = this->m_Prompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_148->field0_0x0;
  psVar11 = GetMainMenuUIString__7EGlobalPCc(&_globals,"select");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_148,local_150);
  pEVar6 = this->m_Prompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_144->field0_0x0;
  psVar11 = GetMainMenuUIString__7EGlobalPCc(&_globals,"back");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_144,local_14c);
  Init__10EPromptBar(local_140);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  fVar15 = (_13EUIObjectNode_SAFE_RIGHT + 0.178) * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_1cc = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
  fVar14 = _13EUIObjectNode_SAFE_BOTTOM;
  local_1d0 = fVar15;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_140,local_148,2,(EVec2 *)&local_1d0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
  local_1c8 = 0;
  local_1c0 = 0;
  local_190 = (this->m_XIcon3).m_def.__vtable;
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
  (this->m_XIcon3).m_def.__vtable = local_190;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon3).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon3).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_00,-0x3e263a13);
  InitInActiveShader__7EUIIconi(this_00,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
  local_1c0 = 0;
  local_180 = (local_13c->m_def).__vtable;
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
  (local_13c->m_def).__vtable = local_180;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon3).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon3).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_13c,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_13c,0x2ccf500a);
  pEVar6 = this->m_PromptsSelectCancel[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_138->field0_0x0;
  psVar11 = GetMainMenuUIString__7EGlobalPCc(&_globals,"select");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_138,this_00);
  pEVar6 = this->m_PromptsSelectCancel[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_134->field0_0x0;
  psVar11 = GetUiString__7EGlobalPCc(&_globals,"cancel");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_134,local_13c);
  Init__10EPromptBar(local_130);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_1cc = fVar14 - 23.0 / (float)_pGfx->m_yscreen;
  local_1d0 = fVar15;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_130,local_138,2,(EVec2 *)&local_1d0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
  local_1c0 = 0;
  local_170 = (local_12c->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_XIcon4).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_XIcon4).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon4).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_XIcon4).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon4).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_XIcon4).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (local_12c->m_def).__vtable = local_170;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon4).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon4).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_12c,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_12c,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
  local_1c0 = 0;
  local_160 = (local_128->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_TriIcon4).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_TriIcon4).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon4).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_TriIcon4).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon4).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_TriIcon4).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (local_128->m_def).__vtable = local_160;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon4).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon4).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_128,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_128,0x2ccf500a);
  pEVar6 = this->m_PromptsOKCancel[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_124->field0_0x0;
  psVar11 = GetUiString__7EGlobalPCc(&_globals,"ok");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_124,local_12c);
  pEVar6 = this->m_PromptsOKCancel[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_120->field0_0x0;
  psVar11 = GetUiString__7EGlobalPCc(&_globals,"cancel");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_120,local_128);
  Init__10EPromptBar(local_11c);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_1cc = fVar14 - 23.0 / (float)_pGfx->m_yscreen;
  local_1d0 = fVar15;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_11c,local_124,2,(EVec2 *)&local_1d0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b0 = (local_118->m_def).__vtable;
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
  (local_118->m_def).__vtable = local_1b0;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon2).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon2).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_118,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_118,-0x3e263a13);
  psVar11 = GetMainMenuUIString__7EGlobalPCc(&_globals,"select");
  InitString__17EUIStaticTextIconPCUsi(&local_114->field0_0x0,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_114,local_118);
  Init__10EPromptBar(local_110);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_1cc = fVar14 - 23.0 / (float)_pGfx->m_yscreen;
  local_1d0 = fVar15;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_110,local_114,1,(EVec2 *)&local_1d0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
  local_1c0 = 0;
  local_1b0 = (local_10c->m_def).__vtable;
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
  (local_10c->m_def).__vtable = local_1b0;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon2).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon2).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_10c,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_10c,0x2ccf500a);
  psVar11 = GetMainMenuUIString__7EGlobalPCc(&_globals,"back");
  InitString__17EUIStaticTextIconPCUsi(&local_108->field0_0x0,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_108,local_10c);
  Init__10EPromptBar(local_104);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_1cc = fVar14 - 23.0 / (float)_pGfx->m_yscreen;
  local_1d0 = fVar15;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_104,local_108,1,(EVec2 *)&local_1d0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b0 = (local_100->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_XIcon5).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_XIcon5).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon5).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_XIcon5).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon5).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_XIcon5).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (local_100->m_def).__vtable = local_1b0;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon5).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon5).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_100,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_100,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b0 = (local_fc->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon5).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_SquareIcon5).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon5).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_SquareIcon5).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon5).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_SquareIcon5).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (local_fc->m_def).__vtable = local_1b0;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SquareIcon5).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SquareIcon5).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_fc,-0x747336cb);
  InitInActiveShader__7EUIIconi(local_fc,-0x747336cb);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b0 = (local_f8->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_TriIcon5).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_TriIcon5).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon5).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_TriIcon5).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon5).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_TriIcon5).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (local_f8->m_def).__vtable = local_1b0;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon5).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon5).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_f8,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_f8,0x2ccf500a);
  pEVar6 = this->m_PromptsSelDetBack[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_f4->field0_0x0;
  psVar11 = GetMainMenuUIString__7EGlobalPCc(&_globals,"select");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_f4,local_100);
  pEVar6 = this->m_PromptsSelDetBack[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_f0->field0_0x0;
  psVar11 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"details_action_prompt");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_f0,local_fc);
  pEVar6 = this->m_PromptsSelDetBack[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_ec->field0_0x0;
  psVar11 = GetMainMenuUIString__7EGlobalPCc(&_globals,"back");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_ec,local_f8);
  Init__10EPromptBar(local_e8);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_1cc = fVar14 - 23.0 / (float)_pGfx->m_yscreen;
  local_1d0 = fVar15;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_e8,local_f4,3,(EVec2 *)&local_1d0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b0 = (local_e4->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon6).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_SquareIcon6).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon6).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_SquareIcon6).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon6).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_SquareIcon6).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (local_e4->m_def).__vtable = local_1b0;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SquareIcon6).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SquareIcon6).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_e4,-0x747336cb);
  InitInActiveShader__7EUIIconi(local_e4,-0x747336cb);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c4 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b0 = (local_e0->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_TriIcon6).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_TriIcon6).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon6).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_TriIcon6).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon6).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_TriIcon6).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (local_e0->m_def).__vtable = local_1b0;
  local_1bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar12 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon6).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = 0.05;
                    /* end of inlined section */
  local_1cc = fVar13 / (float)iVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon6).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_e0,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_e0,0x2ccf500a);
  pEVar6 = this->m_PromptsDetBack[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_dc->field0_0x0;
  psVar11 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"details_action_prompt");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_dc,local_e4);
  pEVar6 = this->m_PromptsDetBack[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = &local_d8->field0_0x0;
  psVar11 = GetMainMenuUIString__7EGlobalPCc(&_globals,"back");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar11,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_d8,local_e0);
  Init__10EPromptBar(local_d4);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_1cc = fVar14 - 23.0 / (float)_pGfx->m_yscreen;
  local_1d0 = fVar15;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_d4,local_dc,2,(EVec2 *)&local_1d0);
  *(undefined4 *)&this->m_bWaitForButtonUp = 0;
  this->m_ReturnCode = -1;
  *(undefined4 *)&this->m_bLoadingNeigbhorhood = 0;
  return;
}

void EGameMenuMainPanel::Reset() {
  ERShader *pEVar1;
  
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_Prompts);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_Prompts + 1));
  Reset__10EPromptBar(&this->m_PromptBar);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsSelectCancel);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsSelectCancel + 1));
  Reset__10EPromptBar(&this->m_PromptBarSelectCancel);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsOKCancel);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsOKCancel + 1));
  Reset__10EPromptBar(&this->m_PromptBarOKCancel);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_PromptShort);
  Reset__10EPromptBar(&this->m_PromptBarShort);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_PromptShort2);
  Reset__10EPromptBar(&this->m_PromptBarShort2);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsSelDetBack);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsSelDetBack + 1));
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsSelDetBack + 2));
  Reset__10EPromptBar(&this->m_PromptBarSelDetBack);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsDetBack);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsDetBack + 1));
  Reset__10EPromptBar(&this->m_PromptBarDetBack);
  while( true ) {
    if (this->m_pUpShdr == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pUpShdr->field0_0x0);
    this->m_pUpShdr = (ERShader *)0x0;
  }
  while (this->m_pDownShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pDownShdr->field0_0x0);
    this->m_pDownShdr = (ERShader *)0x0;
  }
  pEVar1 = this->m_pLeftShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pLeftShdr = (ERShader *)0x0;
    pEVar1 = this->m_pLeftShdr;
  }
  pEVar1 = this->m_pRightShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pRightShdr = (ERShader *)0x0;
    pEVar1 = this->m_pRightShdr;
  }
  pEVar1 = this->m_pDPadBack;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pDPadBack = (ERShader *)0x0;
    pEVar1 = this->m_pDPadBack;
  }
  pEVar1 = this->m_pUpBlankShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pUpBlankShdr = (ERShader *)0x0;
    pEVar1 = this->m_pUpBlankShdr;
  }
  pEVar1 = this->m_pDownBlankShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pDownBlankShdr = (ERShader *)0x0;
    pEVar1 = this->m_pDownBlankShdr;
  }
  pEVar1 = this->m_pLeftBlankShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pLeftBlankShdr = (ERShader *)0x0;
    pEVar1 = this->m_pLeftBlankShdr;
  }
  pEVar1 = this->m_pRightBlankShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pRightBlankShdr = (ERShader *)0x0;
    pEVar1 = this->m_pRightBlankShdr;
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
  Reset__17EGameMenuMainMenu(&this->m_MainMenu);
  Reset__16EGameMenuCredits(&this->m_Credits);
  Reset__20EGameMenuSandboxMenu(&this->m_SandboxMenu);
  Reset__18EGameMenuStoryMenu(&this->m_StoryMenu);
  Reset__18EGameMenuBonusMenu(&this->m_BonusMenu);
  Reset__16EGameMenuOptions(&this->m_OptionsMenu);
  this->m_MenuActive = 0;
  RemoveAllChildren__13EUIObjectNode(&this->field0_0x0);
  return;
}

int EGameMenuMainPanel::UpdateReturn() {
	int ReturnCode;
	
  EUIVirtualCtrl__vtable *pEVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (*(int *)&this->m_bWaitForButtonUp != 0) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar4 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                       0x40);
    if (lVar4 != 0) {
      return -1;
    }
    *(undefined4 *)&this->m_bWaitForButtonUp = 0;
  }
  if (*(int *)&this->m_bLoadingNeigbhorhood == 0) {
    switch(this->m_MenuActive) {
    case 0:
      Update__17EGameMenuMainMenu(&this->m_MainMenu);
      iVar2 = *(int *)&this->m_bLoadingNeigbhorhood;
      break;
    case 1:
      Update__18EGameMenuStoryMenu(&this->m_StoryMenu);
      iVar2 = *(int *)&this->m_bLoadingNeigbhorhood;
      break;
    case 2:
      Update__18EGameMenuBonusMenu(&this->m_BonusMenu);
      iVar2 = *(int *)&this->m_bLoadingNeigbhorhood;
      break;
    case 3:
      Update__20EGameMenuSandboxMenu(&this->m_SandboxMenu);
      iVar2 = *(int *)&this->m_bLoadingNeigbhorhood;
      break;
    case 4:
      Update__16EGameMenuOptions(&this->m_OptionsMenu);
      iVar2 = *(int *)&this->m_bLoadingNeigbhorhood;
      break;
    case 5:
      Update__16EGameMenuCredits(&this->m_Credits);
    default:
      iVar2 = *(int *)&this->m_bLoadingNeigbhorhood;
    }
    iVar3 = -1;
    if (iVar2 == 0) {
      iVar3 = this->m_ReturnCode;
      this->m_ReturnCode = -1;
    }
    return iVar3;
  }
  *(undefined4 *)&this->m_bLoadingNeigbhorhood = 0;
  if (*(int *)_globals.m_pMemCard == 0) {
    this->m_ReturnCode = -1;
    return -1;
  }
  return this->m_ReturnCode;
}

void EGameMenuMainPanel::Draw(ERC *prc) {
	float _xtemp_BUTTONPAD_POS[3];
	float _ytemp_BUTTONPAD_POS[3];
	EGraphics *this;
	EGraphics *this;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	
  uint uVar1;
  ulong *puVar2;
  float fVar3;
  int iVar4;
  ERShader *pEVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined4 uVar6;
  undefined4 uVar7;
  float _xtemp_BUTTONPAD_POS [3];
  float _ytemp_BUTTONPAD_POS [3];
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
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
  
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*(int *)&this->m_bLoadingNeigbhorhood != 0) {
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    _xtemp_BUTTONPAD_POS._0_8_ = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    _ytemp_BUTTONPAD_POS._0_8_ = 0x3f8000003f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_ec = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = 0;
    local_e0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,_xtemp_BUTTONPAD_POS
               ,_ytemp_BUTTONPAD_POS,&local_f0,&local_e0,0x35f4d0);
    return;
  }
  switch(this->m_MenuActive) {
  case 0:
    Draw__17EGameMenuMainMenuP3ERC(&this->m_MainMenu,prc);
    pEVar5 = this->m_pBlankShdr;
    break;
  case 1:
    Draw__18EGameMenuStoryMenuP3ERC(&this->m_StoryMenu,prc);
    pEVar5 = this->m_pBlankShdr;
    break;
  case 2:
    Draw__18EGameMenuBonusMenuP3ERC(&this->m_BonusMenu,prc);
    pEVar5 = this->m_pBlankShdr;
    break;
  case 3:
    Draw__20EGameMenuSandboxMenuP3ERC(&this->m_SandboxMenu,prc);
    pEVar5 = this->m_pBlankShdr;
    break;
  case 4:
    Draw__16EGameMenuOptionsP3ERC(&this->m_OptionsMenu,prc);
    pEVar5 = this->m_pBlankShdr;
    break;
  case 5:
    Draw__16EGameMenuCreditsP3ERC(&this->m_Credits,prc);
  default:
    pEVar5 = this->m_pBlankShdr;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(pEVar5,prc,0);
  fVar3 = _13EUIObjectNode_SAFE_BOTTOM;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  uVar6 = 0x3e3645a2;
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
  _xtemp_BUTTONPAD_POS._0_8_ =
       CONCAT44(_13EUIObjectNode_SAFE_BOTTOM - 46.0 / (float)_pGfx->m_yscreen,0x3e3645a2);
  _ytemp_BUTTONPAD_POS._0_8_ = 0x3f8000003f800000;
  local_d0 = 0;
  local_cc = 0x3f800000;
  local_bc = 0;
  local_c0 = 0x3f800000;
                    /* end of inlined section */
  uVar7 = 0;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,_xtemp_BUTTONPAD_POS,
             _ytemp_BUTTONPAD_POS,&local_d0,&local_c0);
  Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  _xtemp_BUTTONPAD_POS._0_8_ = CONCAT44(fVar3 - 50.0 / (float)_pGfx->m_yscreen,uVar6);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  _ytemp_BUTTONPAD_POS._0_8_ = CONCAT44(0x3f000000,(float)_pGfx->m_xscreen * 0.003210938);
  local_e4 = 0x3f800000;
  local_e8 = 0x3f800000;
  local_ec = 1.0;
  local_f0 = 1.0;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar7,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
             _xtemp_BUTTONPAD_POS,_ytemp_BUTTONPAD_POS,&local_f0);
  iVar4 = this->m_PromptLevel;
  if (iVar4 == 1) {
    Draw__10EPromptBarP3ERC(&this->m_PromptBarShort,prc);
    iVar4 = this->m_PromptLevel;
  }
  if (iVar4 == 2) {
    Draw__10EPromptBarP3ERC(&this->m_PromptBar,prc);
    iVar4 = this->m_PromptLevel;
  }
  else {
    iVar4 = this->m_PromptLevel;
  }
  if (iVar4 == 3) {
    Draw__10EPromptBarP3ERC(&this->m_PromptBarShort2,prc);
    iVar4 = this->m_PromptLevel;
  }
  else {
    iVar4 = this->m_PromptLevel;
  }
  if (iVar4 == 4) {
    Draw__10EPromptBarP3ERC(&this->m_PromptBarSelectCancel,prc);
    iVar4 = this->m_PromptLevel;
  }
  else {
    iVar4 = this->m_PromptLevel;
  }
  if (iVar4 == 5) {
    Draw__10EPromptBarP3ERC(&this->m_PromptBarOKCancel,prc);
    iVar4 = this->m_PromptLevel;
  }
  else {
    iVar4 = this->m_PromptLevel;
  }
  if (iVar4 == 6) {
    Draw__10EPromptBarP3ERC(&this->m_PromptBarSelDetBack,prc);
    iVar4 = this->m_PromptLevel;
  }
  else {
    iVar4 = this->m_PromptLevel;
  }
  if (iVar4 == 7) {
    Draw__10EPromptBarP3ERC(&this->m_PromptBarDetBack,prc);
    pEVar5 = this->m_pDPadBack;
  }
  else {
    pEVar5 = this->m_pDPadBack;
  }
  Select__8ERShaderP3ERCi(pEVar5,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  _xtemp_BUTTONPAD_POS._0_8_ = 0x3f3f75c9be6147ae;
  _ytemp_BUTTONPAD_POS._0_8_ = 0x3f8000003f800000;
  local_f0 = 1.0;
  local_ec = 1.0;
  local_e8 = 0x3f800000;
  local_e4 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar7,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
             _xtemp_BUTTONPAD_POS,_ytemp_BUTTONPAD_POS,&local_f0);
  pEVar5 = this->m_pDPadUp;
  uVar1 = (int)_xtemp_BUTTONPAD_POS + 7U & 7;
  puVar2 = (ulong *)(((int)_xtemp_BUTTONPAD_POS + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b0b18 >> (7 - uVar1) * 8;
  _xtemp_BUTTONPAD_POS._0_8_ = DAT_003b0b18;
  _xtemp_BUTTONPAD_POS[2] = DAT_003b0b20;
  uVar1 = (int)_ytemp_BUTTONPAD_POS + 7U & 7;
  puVar2 = (ulong *)(((int)_ytemp_BUTTONPAD_POS + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b0b28 >> (7 - uVar1) * 8;
  _ytemp_BUTTONPAD_POS._0_8_ = DAT_003b0b28;
  _ytemp_BUTTONPAD_POS[2] = DAT_003b0b30;
  Select__8ERShaderP3ERCi(pEVar5,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_f0 = _xtemp_BUTTONPAD_POS[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ec = _ytemp_BUTTONPAD_POS[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ac = 0x3f800000;
  local_b0 = 0x3f800000;
  local_94 = 0x3f800000;
  local_98 = 0x3f800000;
  local_9c = 0x3f800000;
  local_a0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar7,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_f0,&local_b0
             ,&local_a0);
  Select__8ERShaderP3ERCi(this->m_pDPadDown,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_f0 = _xtemp_BUTTONPAD_POS[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ec = _ytemp_BUTTONPAD_POS[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_dc = 0x3f800000;
  local_e0 = 0x3f800000;
  local_84 = 0x3f800000;
  local_88 = 0x3f800000;
  local_8c = 0x3f800000;
  local_90 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar7,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_f0,&local_e0
             ,&local_90);
  Select__8ERShaderP3ERCi(this->m_pDPadLeft,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_f0 = _xtemp_BUTTONPAD_POS[1];
  local_ec = _ytemp_BUTTONPAD_POS[0];
  local_dc = 0x3f800000;
  local_e0 = 0x3f800000;
  local_c4 = 0x3f800000;
  local_c8 = 0x3f800000;
  local_cc = 0x3f800000;
  local_d0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar7,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_f0,&local_e0
             ,&local_d0);
  Select__8ERShaderP3ERCi(this->m_pDPadRight,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_f0 = _xtemp_BUTTONPAD_POS[2];
  local_ec = _ytemp_BUTTONPAD_POS[0];
  local_dc = 0x3f800000;
  local_e0 = 0x3f800000;
  local_c4 = 0x3f800000;
  local_c8 = 0x3f800000;
  local_cc = 0x3f800000;
  local_d0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar7,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_f0,&local_e0
             ,&local_d0);
  return;
}

void EGameMenuMainPanel::SetSinglePrompt() {
  this->m_PromptLevel = 1;
  return;
}

void EGameMenuMainPanel::SetFullPrompt() {
  this->m_PromptLevel = 2;
  return;
}

void EGameMenuMainPanel::SetSelectCancelPrompt() {
  this->m_PromptLevel = 4;
  return;
}

void EGameMenuMainPanel::SetOKCancelPrompt() {
  this->m_PromptLevel = 5;
  return;
}

void EGameMenuMainPanel::DisablePrompt() {
  this->m_PromptLevel = 0;
  return;
}

void EGameMenuMainPanel::SetBackPrompt() {
  this->m_PromptLevel = 3;
  return;
}

void EGameMenuMainPanel::SetSelDetBackPrompt() {
  this->m_PromptLevel = 6;
  return;
}

void EGameMenuMainPanel::SetDetBackPrompt() {
  this->m_PromptLevel = 7;
  return;
}

void EGameMenuMainPanel::HandleMessage(int Message) {
	bool bTurnOnLeftRight;
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	EGameMenuMainPanel *this;
	
  EChallengeMenuItem *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  bool bVar3;
  uint uVar4;
  ERShader *pEVar5;
  ERShader *pEVar6;
  
  bVar3 = false;
  switch(Message) {
  case 1:
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
                    /* end of inlined section */
    this->m_MenuActive = 0;
                    /* end of inlined section */
    *(undefined4 *)&(this->m_MainMenu).m_ButtonDownLastTime = 1;
    break;
  case 2:
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
    *(undefined4 *)&(this->m_StoryMenu).m_ButtonDownLastTime = 1;
                    /* end of inlined section */
    this->m_MenuActive = 1;
    break;
  case 3:
    pEVar1 = (this->m_BonusMenu).m_pPartyMotel;
    if (pEVar1 != (EChallengeMenuItem *)0x0) {
      if (_globals.Cheats._16_4_ == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        pEVar2 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar2[1].Draw)
                  ((int)(pEVar1->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar2[1].Update + 4,0x16,0);
        uVar4 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags & 0xffffffe9;
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        pEVar2 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar2[1].Draw)
                  ((int)(pEVar1->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar2[1].Update + 4,0x16,1);
        uVar4 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags | 0x16;
                    /* end of inlined section */
      }
      (pEVar1->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags = uVar4;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
                    /* end of inlined section */
    this->m_MenuActive = 2;
                    /* end of inlined section */
    *(undefined4 *)&(this->m_BonusMenu).m_ButtonDownLastTime = 1;
    break;
  case 4:
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
                    /* end of inlined section */
    this->m_MenuActive = 3;
                    /* end of inlined section */
    *(undefined4 *)&(this->m_SandboxMenu).m_ButtonDownLastTime = 1;
    break;
  case 5:
    this->m_MenuActive = 4;
    SaveCurrentValues__16EGameMenuOptions(&this->m_OptionsMenu);
    bVar3 = true;
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
                    /* end of inlined section */
    *(undefined4 *)&(this->m_OptionsMenu).m_ButtonDownLastTime = 1;
    break;
  case 6:
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
                    /* end of inlined section */
    this->m_MenuActive = 5;
                    /* end of inlined section */
    *(undefined4 *)&(this->m_Credits).m_ButtonDownLastTime = 1;
    break;
  case 7:
    this->m_ReturnCode = 0;
    break;
  case 8:
    this->m_ReturnCode = 1;
    break;
  case 9:
    this->m_ReturnCode = 2;
    break;
  case 10:
    this->m_ReturnCode = 3;
    *(undefined4 *)&this->m_bLoadingNeigbhorhood = 1;
    SetLoadNeighborhoodMode__12ESimsMemCard(_globals.m_pMemCard);
    pEVar5 = this->m_pUpShdr;
    goto LAB_00186998;
  case 0xb:
    SetLoadStoryMode__12ESimsMemCard(_globals.m_pMemCard);
    *(undefined4 *)&this->m_bLoadingNeigbhorhood = 1;
    this->m_ReturnCode = 4;
    break;
  case 0xc:
    _globals.m_nCreditMode = 1;
    goto LAB_00186988;
  case 0xd:
    _globals.m_nCreditMode = 2;
LAB_00186988:
    this->m_ReturnCode = 5;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
  pEVar5 = this->m_pUpShdr;
LAB_00186998:
  this->m_pDPadUp = pEVar5;
                    /* end of inlined section */
  this->m_pDPadDown = this->m_pDownShdr;
  if (bVar3) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
    pEVar5 = this->m_pLeftShdr;
                    /* end of inlined section */
    pEVar6 = this->m_pRightShdr;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
    pEVar5 = this->m_pLeftBlankShdr;
    pEVar6 = this->m_pRightBlankShdr;
  }
  this->m_pDPadLeft = pEVar5;
  this->m_pDPadRight = pEVar6;
                    /* end of inlined section */
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

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    _vGlowColor.field0_0x0.d[0] = 0.2;
    _vGlowColor.field0_0x0.d[3] = 1.0;
    _vGlowColor.field0_0x0.d[1] = 0.2;
    _vGlowColor.field0_0x0.d[2] = 0.8;
  }
  return;
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

void* EChallengeMenuItem::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,4);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EChallengeMenuItem::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

u8 EChallengeMenuItem::GetDataValue() {
  return this->m_nData;
}

void EChallengeMenuItem::SetDataValue(u8 nData) {
  this->m_nData = nData;
  return;
}

void EGameMenuOptions::SetButtonDown() {
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  return;
}

void EGameMenuStoryMenu::SetButtonDown() {
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  return;
}

void EGameMenuBonusMenu::SetButtonDown() {
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  return;
}

void EGameMenuSandboxMenu::SetButtonDown() {
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  return;
}

void EGameMenuCredits::SetButtonDown() {
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  return;
}

void EGameMenuMainMenu::SetButtonDown() {
  *(undefined4 *)&this->m_ButtonDownLastTime = 1;
  return;
}

void EGameMenuMainPanel::ResetReturnCode() {
  this->m_ReturnCode = -1;
  return;
}

void EGameMenuMainPanel::SetDPadUp(bool bOn) {
  ERShader *pEVar1;
  
  if (bOn) {
    pEVar1 = this->m_pUpShdr;
  }
  else {
    pEVar1 = this->m_pUpBlankShdr;
  }
  this->m_pDPadUp = pEVar1;
  return;
}

void EGameMenuMainPanel::SetDPadDown(bool bOn) {
  ERShader *pEVar1;
  
  if (bOn) {
    pEVar1 = this->m_pDownShdr;
  }
  else {
    pEVar1 = this->m_pDownBlankShdr;
  }
  this->m_pDPadDown = pEVar1;
  return;
}

void EGameMenuMainPanel::SetDPadLeft(bool bOn) {
  ERShader *pEVar1;
  
  if (bOn) {
    pEVar1 = this->m_pLeftShdr;
  }
  else {
    pEVar1 = this->m_pLeftBlankShdr;
  }
  this->m_pDPadLeft = pEVar1;
  return;
}

void EGameMenuMainPanel::SetDPadRight(bool bOn) {
  ERShader *pEVar1;
  
  if (bOn) {
    pEVar1 = this->m_pRightShdr;
  }
  else {
    pEVar1 = this->m_pRightBlankShdr;
  }
  this->m_pDPadRight = pEVar1;
  return;
}

void global constructors keyed to _vGlowColor() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
