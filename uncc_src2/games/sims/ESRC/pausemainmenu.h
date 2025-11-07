// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEMAINMENU_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEMAINMENU_H

struct EPauseMainMenu : EUIMenu {
protected:
	u8 m_nDisplayMode;
	float m_fAnimationTime;
	EVec4 m_vUI_WHITE;
	EVec4 m_vUI_RED;
	float m_fAlpha;
	float m_fIconBarWidth;
	float m_PulseAccumulator;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pMenuBevelBottomShdr;
	ERShader *m_pDPadBackgroundShdr;
	ERShader *m_pTextLineCenterShdr;
	ERShader *m_pTextLineRightShdr;
	ERShader *m_pTextLineLeftShdr;
	ERShader *m_pMenuTimeReverseShdr;
	ERShader *m_pTextBoxBGBC;
	ERShader *m_pTextBoxBGMR;
	ERShader *m_pTextBoxBGBR;
	ERShader *m_pGlowShader;
	EPauseMenuSlider m_MenuPrompts[8];
	EVec2 m_vBoxTL;
	EVec2 m_vBoxBR;
	EUIIcon m_InfoIcon;
	EUIIcon m_BudgetIcon;
	EUIIcon m_BuyIcon;
	EUIIcon m_BuildIcon;
	EUIIcon m_OptionsIcon;
	EUIIcon m_SaveIcon;
	EUIIcon m_MapIcon;
	EUIIcon m_QuitIcon;
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIPrompt m_Prompts[2];
	u32 m_nNumPrompts;
	EPromptBar m_PromptBar;
	EUIIcon m_XIcon2;
	EUIPrompt m_PromptsSelect[1];
	EPromptBar m_PromptBarSelect;
	ERFont *m_pFont;
	
public:
	EPauseMainMenu& operator=();
	EPauseMainMenu();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EPauseMainMenu();
	/* vtable[1] */ virtual EPauseMainMenu(EPauseMainMenu*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	void Init();
	void Reset();
	void UpdateAnimation();
	void CheckLockStates();
	void SetControllerState(u32 nWhichPlayerPaused);
protected:
	void DrawNormal(ERC *prc);
	void DrawBudget(ERC *prc);
	void SetPauseLayout();
};

extern __vtbl_ptr_type EPauseMainMenu virtual table[25];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EPauseMainMenu::~EPauseMainMenu(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEMAINMENU_H
