// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_UI_E_UIALPHAMENU_H
#define C__EOR_SRC2_ENGINE_UI_E_UIALPHAMENU_H

struct EUIIconDef {
	u32 m_flags;
	s32 m_trigger;
	int m_selColorIdx;
	int m_colorIdx;
	EUIVirtualCtrl *m_pCtrl;
	__vtbl_ptr_type *$vf2708;
};

struct EUIAlphaMenuDef {
	u32 m_nColumns;
	s32 m_fontid;
	f32 m_pointSize;
	u32 m_nChars;
	EVec2 m_charWH;
	s32 m_selColorIdxBack;
	s32 m_colorIdxBack;
	s32 m_selColorIdxTxt;
	s32 m_colorIdxTxt;
	u32 m_iconflags;
	EUIVirtualCtrl *m_pCtrl;
	c16 m_skipChar;
};

struct EUIAlphaMenu : EUIGridMenu {
protected:
	EUIMenu **m_ppColumns;
	EUITextIcon **m_ppLetters;
	EUIAlphaMenuDef m_def;
	u16 m_lastSelectedChar;
	
public:
	EUIAlphaMenu& operator=();
	EUIAlphaMenu(EUIAlphaMenuDef &_def, u16 *szCharlist);
	EUIAlphaMenu();
	/* vtable[1] */ virtual EUIAlphaMenu(EUIAlphaMenu*, int, void);
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	void Init(EUIAlphaMenuDef &_def, u16 *szLongCharlist);
	void Init();
	void SetPointSize(float size);
	void CleanUp();
	void SetLetterBackShader(int id);
	char GetLastSelChar();
};

extern __vtbl_ptr_type EUIAlphaMenu virtual table[28];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EUIIconDef::~EUIIconDef(int __in_chrg);
void EUIAlphaMenu::~EUIAlphaMenu(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_UI_E_UIALPHAMENU_H
