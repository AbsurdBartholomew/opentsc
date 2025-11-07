// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_DIALOGMENU_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_DIALOGMENU_H

typedef StackString2<1024> StringBufW1024;

struct EDialogMenu {
protected:
	ERFont *m_pFont;
	bool m_bSaveText;
	c16 *m_sText;
	StringBufW1024 m_sTextBuffer;
	bool m_bMoreDown;
	u32 m_nLinesScrolled;
	u32 m_nSkippedLines;
	s32 m_nDialogSelectedOption;
	bool m_bNeedAdjustDialog;
	bool m_bSingleLine;
	EWindow *m_pWin;
	EVec2 m_vDialogSize;
	EVec2 m_vDialogPos;
	EVec2 m_vTextSize;
	EVec2 m_vTextPos;
	EVec2 m_vMenuSize;
	EVec2 m_vMenuPos;
	EVec2 m_vTextGapSize;
	EVec2 m_vArrowSize;
	EVec2 m_vCurTextPos;
	c16 **m_ppMenuOptions;
	u32 m_nNumMenuOptions;
public:
	__vtbl_ptr_type *$vf2882;
	
	EDialogMenu& operator=();
	EDialogMenu();
	EDialogMenu();
	/* vtable[1] */ virtual EDialogMenu(EDialogMenu*, int, void);
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Reset();
	void SetupDialog(EVec2 vPosTopLeft, float fWidth, s32 nNumMenuOptions, c16 **ppMenuOptions, c16 *sText, bool bSaveText);
	s32 DialogUpdate();
	void DialogDraw(ERC *prc, bool bCenterJustify);
protected:
	void DrawText(ERC *prc, bool bDraw, bool bCenterJustify);
};

extern __vtbl_ptr_type EDialogMenu virtual table[5];

void EDialogMenu::~EDialogMenu(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_DIALOGMENU_H
