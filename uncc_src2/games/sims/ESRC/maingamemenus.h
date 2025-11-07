// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_MAINGAMEMENUS_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_MAINGAMEMENUS_H

typedef TNodeList<EUIObjectNode *> EUIObjectNodeList;

struct EChallengeMenuItem : EUIStaticTextIcon {
protected:
	u8 m_nData;
	ERShader *m_pLeftArrowShdr;
	ERShader *m_pRightArrowShdr;
	
public:
	EChallengeMenuItem& operator=();
	EChallengeMenuItem();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EChallengeMenuItem();
	/* vtable[1] */ virtual EChallengeMenuItem(EChallengeMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[17] */ virtual void SetText(u16 *str);
	u8 GetDataValue();
	void SetDataValue(u8 nData);
};

struct EGameMenuOptions : EUIMenu {
private:
	EGameMenuMainPanel *m_pPanel;
	ERShader *m_pBackground;
	EUIObjectNodeList m_ItemList;
	EUIObjectNode *m_pScreenAdjustObject;
	EUIObjectNode *m_pSFXVolumeObject;
	EUIObjectNode *m_pMusicVolumeObject;
	u8 m_nDisplayMode;
	float m_fAnimationTime;
	bool m_bOrigFreeWill;
	bool m_bOrigRumble;
	bool m_bOrigAutoCenter;
	s32 m_nOrigSFXVolume;
	s32 m_nOrigMusicVolume;
	s32 m_nOrigScreenAdjustX;
	s32 m_nOrigScreenAdjustY;
	EVec2 m_vBoxTL;
	EVec2 m_vBoxBR;
	EVec2 m_vBoxAnimateTL;
	EVec2 m_vBoxAnimateBR;
	EVec2 m_vBoxStartTL;
	EVec2 m_vBoxStartBR;
	EWindow *m_pWin;
	ERFont *m_pFont;
	EVec2 m_vCurScreenAdjust;
	EVec2 m_vOldScreenAdjust;
	bool m_ButtonDownLastTime;
	
public:
	EGameMenuOptions& operator=();
	EGameMenuOptions();
	EGameMenuOptions();
	/* vtable[1] */ virtual EGameMenuOptions(EGameMenuOptions*, int, void);
	void Init2(EGameMenuMainPanel *pPanel);
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	void SaveCurrentValues();
	void SetButtonDown();
};

struct EGameMenuStoryMenu : EUIObjectNode {
private:
	EGameMenuMainPanel *m_pPanel;
	int m_OptionSelected;
	int m_MaxOption;
	bool m_ButtonDownLastTime;
	float m_PulseAccumulator;
	bool m_bAllowBonus;
	ERShader *m_pBackground;
	ERShader *m_pSimsLogoShader;
	ERShader *m_pLeftArrowShader;
	ERShader *m_pRightArrowShader;
	ERShader *m_pGlow;
	
public:
	EGameMenuStoryMenu& operator=();
	EGameMenuStoryMenu();
	EGameMenuStoryMenu();
	/* vtable[1] */ virtual EGameMenuStoryMenu(EGameMenuStoryMenu*, int, void);
	void Init2(EGameMenuMainPanel *pPanel);
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void SetButtonDown();
};

struct EGameMenuBonusMenu : EUIObjectNode {
	EChallengeMenuItem *m_pPartyMotel;
private:
	EGameMenuMainPanel *m_pPanel;
	EUIMenu m_ChallengeLevels;
	EUIObjectNodeList m_ChallengeItemList;
	EVec2 m_vScoreSize;
	EVec2 m_vScorePosCur;
	EVec2 m_vScorePosStart;
	EVec2 m_vScorePosEnd;
	EVec2 m_vDetailSize;
	EVec2 m_vDetailPosCur;
	EVec2 m_vDetailPosStart;
	EVec2 m_vDetailPosEnd;
	int m_OptionSelected;
	int m_MaxOption;
	int m_nDisplayMode;
	float m_fAnimationTime;
	bool m_ButtonDownLastTime;
	float m_PulseAccumulator;
	ERShader *m_pBackground;
	ERShader *m_pSimsLogoShader;
	ERShader *m_pLeftArrowShader;
	ERShader *m_pRightArrowShader;
	ERShader *m_pGlow;
	
public:
	EGameMenuBonusMenu& operator=();
	EGameMenuBonusMenu();
	EGameMenuBonusMenu();
	/* vtable[1] */ virtual EGameMenuBonusMenu(EGameMenuBonusMenu*, int, void);
	void Init2(EGameMenuMainPanel *pPanel);
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void SetButtonDown();
};

struct EGameMenuSandboxMenu : EUIObjectNode {
private:
	EGameMenuMainPanel *m_pPanel;
	EUIObjectNodeList m_ItemList;
	int m_OptionSelected;
	int m_MaxOption;
	ERShader *m_pBackground;
	ERShader *m_pSimsLogoShader;
	ERShader *m_pGlow;
	bool m_ButtonDownLastTime;
	float m_PulseAccumulator;
	
public:
	EGameMenuSandboxMenu& operator=();
	EGameMenuSandboxMenu();
	EGameMenuSandboxMenu();
	/* vtable[1] */ virtual EGameMenuSandboxMenu(EGameMenuSandboxMenu*, int, void);
	void Init2(EGameMenuMainPanel *pPanel);
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void SetButtonDown();
};

struct EGameMenuCredits : EUIObjectNode {
private:
	EGameMenuMainPanel *m_pPanel;
	EUIObjectNodeList m_ItemList;
	int m_OptionSelected;
	int m_MaxOption;
	ERShader *m_pBackground;
	ERShader *m_pSimsLogoShader;
	ERShader *m_pGlow;
	bool m_ButtonDownLastTime;
	float m_PulseAccumulator;
	
public:
	EGameMenuCredits& operator=();
	EGameMenuCredits();
	EGameMenuCredits();
	/* vtable[1] */ virtual EGameMenuCredits(EGameMenuCredits*, int, void);
	void Init2(EGameMenuMainPanel *pPanel);
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void SetButtonDown();
};

struct EGameMenuMainMenu : EUIObjectNode {
private:
	EGameMenuMainPanel *m_pPanel;
	EUIObjectNodeList m_ItemList;
	int m_OptionSelected;
	int m_MaxOption;
	ERShader *m_pBackground;
	ERShader *m_pSimsLogoShader;
	ERShader *m_pGlow;
	ERShader *m_pBlankShader;
	bool m_ButtonDownLastTime;
	float m_PulseAccumulator;
	bool m_bFreeplayUnlocked;
	bool m_bCheatCodeEntryUp;
	ETextEntryDialog *m_pKeyboard;
	bool m_bWaitForButUp;
	
public:
	EGameMenuMainMenu& operator=();
	EGameMenuMainMenu();
	EGameMenuMainMenu();
	/* vtable[1] */ virtual EGameMenuMainMenu(EGameMenuMainMenu*, int, void);
	void Init2(EGameMenuMainPanel *pPanel);
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void SetButtonDown();
};

extern EVec4 _vGlowColor;
extern __vtbl_ptr_type EGameMenuMainPanel virtual table[15];
extern __vtbl_ptr_type EGameMenuMainMenu virtual table[15];
extern __vtbl_ptr_type EGameMenuCredits virtual table[15];
extern __vtbl_ptr_type EGameMenuSandboxMenu virtual table[15];
extern __vtbl_ptr_type EGameMenuBonusMenu virtual table[15];
extern __vtbl_ptr_type EGameMenuStoryMenu virtual table[15];
extern __vtbl_ptr_type EGameMenuOptions virtual table[25];
extern __vtbl_ptr_type EChallengeMenuItem virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EChallengeMenuItem::~EChallengeMenuItem(int __in_chrg);
void EGameMenuOptions::~EGameMenuOptions(int __in_chrg);
void EGameMenuStoryMenu::~EGameMenuStoryMenu(int __in_chrg);
void EGameMenuBonusMenu::~EGameMenuBonusMenu(int __in_chrg);
void EGameMenuSandboxMenu::~EGameMenuSandboxMenu(int __in_chrg);
void EGameMenuCredits::~EGameMenuCredits(int __in_chrg);
void EGameMenuMainMenu::~EGameMenuMainMenu(int __in_chrg);
void EGameMenuMainPanel::~EGameMenuMainPanel(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void global constructors keyed to _vGlowColor();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_MAINGAMEMENUS_H
