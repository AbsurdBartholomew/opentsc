// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEOPTIONSMENU_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEOPTIONSMENU_H

struct EPauseMenuBoolItem : EUIStaticTextIcon {
protected:
	bool m_bData;
	float m_fDataX;
	bool m_bChanged;
	ERShader *m_pLeftArrowShdr;
	ERShader *m_pRightArrowShdr;
	
public:
	EPauseMenuBoolItem& operator=();
	EPauseMenuBoolItem();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EPauseMenuBoolItem();
	/* vtable[1] */ virtual EPauseMenuBoolItem(EPauseMenuBoolItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[17] */ virtual void SetText(u16 *str);
	/* vtable[2] */ virtual void Update();
	/* vtable[9] */ virtual void OnButtonRepeat(int buttonId);
	bool GetDataValue();
	void SetDataValue(bool bData);
	void SetXPos(float fX);
	bool GetChanged();
};

struct EPauseMenuRangeItem : EUIStaticTextIcon {
protected:
	u32 m_nData;
	u32 m_nMin;
	u32 m_nMax;
	float m_fDataX;
	bool m_bChanged;
	ERShader *m_pLeftArrowShdr;
	ERShader *m_pRightArrowShdr;
	
public:
	EPauseMenuRangeItem& operator=();
	EPauseMenuRangeItem();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EPauseMenuRangeItem();
	/* vtable[1] */ virtual EPauseMenuRangeItem(EPauseMenuRangeItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[17] */ virtual void SetText(u16 *str);
	/* vtable[2] */ virtual void Update();
	/* vtable[9] */ virtual void OnButtonRepeat(int buttonId);
	u32 GetDataValue();
	void SetDataValue(u32 nData);
	void SetDataRange(u32 nMin, u32 nMax);
	void SetXPos(float fX);
	bool GetChanged();
};

struct EPauseOptionsMenu : EUIMenu {
protected:
	EUIObjectNodeList m_ItemList;
	EUIObjectNode *m_pScreenAdjustObject;
	EUIObjectNode *m_pSFXVolumeObject;
	EUIObjectNode *m_pMusicVolumeObject;
	u8 m_nDisplayMode;
	float m_fAnimationTime;
	bool m_bResetSound;
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
	EVec2 m_vBottomPos;
	EVec2 m_vBottomPosStart;
	EVec2 m_vBottomPosEnd;
	EVec2 m_vBottomSize;
	EWindow *m_pWin;
	EVec2 m_vCurScreenAdjust;
	EVec2 m_vOldScreenAdjust;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pTextBoxBGBC;
	ERShader *m_pTextBoxBGMR;
	ERShader *m_pTextBoxBGBR;
	EUIIcon m_XIcon2;
	EUIIcon m_TriIcon2;
	EUIPrompt m_PromptsSelectCancel[2];
	EPromptBar m_PromptBarSelectCancel;
	EUIIcon m_XIcon3;
	EUIIcon m_TriIcon3;
	EUIPrompt m_PromptsOKCancel[2];
	EPromptBar m_PromptBarOKCancel;
	ERFont *m_pFont;
	int m_prefChangeState;
	bool m_bChanged;
	
public:
	EPauseOptionsMenu& operator=();
	EPauseOptionsMenu();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EPauseOptionsMenu();
	/* vtable[1] */ virtual EPauseOptionsMenu(EPauseOptionsMenu*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	/* vtable[21] */ virtual void NextItem();
	/* vtable[22] */ virtual void PrevItem();
	/* vtable[9] */ virtual void OnButtonRepeat(int buttonId);
	void Init();
	void Reset();
	void CheckScreenPosition(EControllerContext *pPadContext);
	void SaveCurrentValues();
	static bool CheckFloatPref(/* parameters unknown */);
	static bool CheckIntPref(/* parameters unknown */);
};

extern __vtbl_ptr_type EPauseOptionsMenu virtual table[25];
extern __vtbl_ptr_type EPauseMenuRangeItem virtual table[23];
extern __vtbl_ptr_type EPauseMenuBoolItem virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EPauseMenuBoolItem::~EPauseMenuBoolItem(int __in_chrg);
void EPauseMenuRangeItem::~EPauseMenuRangeItem(int __in_chrg);
void EPauseOptionsMenu::~EPauseOptionsMenu(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEOPTIONSMENU_H
