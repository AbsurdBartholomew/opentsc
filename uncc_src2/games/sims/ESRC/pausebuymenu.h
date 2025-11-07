// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEBUYMENU_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEBUYMENU_H

struct EPauseBuyMenu : EUIMenu {
protected:
	u8 m_nDisplayMode;
	float m_fAnimationTime;
	bool m_bWaitForPreload;
	bool m_bCleanUpModelReference;
	ObjSelector *m_pPreloadSelector;
	float m_PulseAccumulator;
	bool m_bListenToStick;
	EVec2 m_vSidePos;
	EVec2 m_vSidePosStart;
	EVec2 m_vSidePosEnd;
	EVec2 m_vSideSize;
	EVec2 m_vBottomPos;
	EVec2 m_vBottomPosStart;
	EVec2 m_vBottomPosEnd;
	EVec2 m_vBottomSize;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelRightShdr;
	ERShader *m_pTextLineButtonBevelShdr;
	ERShader *m_pMenuDPadReverseShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pGlowShader;
	EPauseCategoryMenu m_Categories[8];
	EPauseItemInfo *m_pItemInfo;
	bool m_bShowInfo;
	bool m_bDeleteInfo;
	int m_bBuyCursor;
	ERFont *m_pFont;
	ESlideTextBox m_SlideTextBox;
	bool m_bShowingSlider;
	StringBufW255 m_sSliderText;
	s32 m_nSliderNumber;
	EUIIcon m_BuyPromptIcon;
	EUIIcon m_InfoPromptIcon;
	EUIIcon m_BackPromptIcon;
	EUIIcon m_SellPromptIcon;
	EUIIcon m_RotateLPromptIcon;
	EUIIcon m_RotateRPromptIcon;
	EUIIcon m_GrabPromptIcon;
	EUIIcon m_CancelPromptIcon;
	EUIIcon m_PlacePromptIcon;
	EUIIcon m_WallsPromptIcon;
	EUIPrompt m_BuyPrompt;
	EUIPrompt m_InfoPrompt;
	EUIPrompt m_BackPrompt;
	EUIPrompt m_SellPrompt;
	EUIPrompt m_RotatePrompt;
	EUIPrompt m_GrabPrompt;
	EUIPrompt m_CancelPrompt;
	EUIPrompt m_PlacePrompt;
	EUIPrompt m_WallsPrompt;
	
public:
	EPauseBuyMenu& operator=();
	EPauseBuyMenu();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EPauseBuyMenu();
	/* vtable[1] */ virtual EPauseBuyMenu(EPauseBuyMenu*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	void Init();
	void Reset();
	void UpdateBuyCursorFlag(bool flag);
	void UnlockGUID(s32 guid);
	void AnimateIn();
	/* vtable[21] */ virtual void NextItem();
	/* vtable[22] */ virtual void PrevItem();
};

extern float _pbm_text_line_x;
extern float _pbm_text_line_y;
extern __vtbl_ptr_type EPauseBuyMenu virtual table[25];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EPauseBuyMenu::~EPauseBuyMenu(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void global constructors keyed to EPauseBuyMenu::EPauseBuyMenu();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEBUYMENU_H
