// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEBUDGETMENU_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEBUDGETMENU_H

struct EPauseBudgetMenu : EUIObjectNode {
protected:
	u8 m_nDisplayMode;
	float m_fAnimationTime;
	EVec2 m_vBoxTL;
	EVec2 m_vBoxBR;
	EVec2 m_vBoxAnimateTL;
	EVec2 m_vBoxAnimateBR;
	EVec2 m_vBoxStartTL;
	EVec2 m_vBoxStartBR;
	EVec2 m_vBottomPos;
	EVec2 m_vBottomPosStart;
	EVec2 m_vBottomPosEnd;
	EVec2 m_vBottomSize;
	EWindow *m_pWin;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pTextBoxBGBC;
	ERShader *m_pTextBoxBGMR;
	ERShader *m_pTextBoxBGBR;
	EUIIcon m_TriIcon;
	EUIPrompt m_Prompts[1];
	EPromptBar m_PromptBar;
	ERFont *m_pFont;
	
public:
	EPauseBudgetMenu& operator=();
	EPauseBudgetMenu();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EPauseBudgetMenu();
	/* vtable[1] */ virtual EPauseBudgetMenu(EPauseBudgetMenu*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	void DrawBudget(ERC *prc);
	void Init();
	void Reset();
};

extern __vtbl_ptr_type EPauseBudgetMenu virtual table[15];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EPauseBudgetMenu::~EPauseBudgetMenu(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEBUDGETMENU_H
