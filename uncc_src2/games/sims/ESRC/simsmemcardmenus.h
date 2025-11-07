// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_SIMSMEMCARDMENUS_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_SIMSMEMCARDMENUS_H

struct ESimsMemCardMenuItem : EUIDynTextIcon {
	int m_Index;
	ESimsMemCardMenuMgr *m_MenuPtr;
	bool m_bNoFilesOnCard;
	int m_Mode;
	EString2 m_Name;
	EString m_FileName;
	
	ESimsMemCardMenuItem& operator=();
	ESimsMemCardMenuItem();
	ESimsMemCardMenuItem();
	/* vtable[1] */ virtual ESimsMemCardMenuItem(ESimsMemCardMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
protected:
	void DrawBackgroud(ERC *prc, EVec2 &UL, EVec2 &LR);
};

typedef TNodeList<ESimsMemCardMenuItem *> ESimsMemCardMenuItemList;

struct ESimsMemCardMenu : EUIScrollMenu {
	ESimsMemCardMenuItemList m_itemList;
protected:
	ERShader *m_pMorePrompts[2];
	
public:
	ESimsMemCardMenu& operator=();
	ESimsMemCardMenu();
	ESimsMemCardMenu();
	/* vtable[1] */ virtual ESimsMemCardMenu(ESimsMemCardMenu*, int, void);
	void Init();
	void Reset();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *p, u32 MessId);
protected:
	void DrawBlinkingPrompt(ERC *prc, int which);
};

extern __vtbl_ptr_type ESimsMemCardMenu virtual table[25];
extern __vtbl_ptr_type ESimsMemCardMenuItem virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void ESimsMemCardMenuItem::~ESimsMemCardMenuItem(int __in_chrg);
void ESimsMemCardMenu::~ESimsMemCardMenu(int __in_chrg);
void ESimsMemCardMenuMgr::~ESimsMemCardMenuMgr(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void global constructors keyed to ESimsMemCardMenuItem::ESimsMemCardMenuItem();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_SIMSMEMCARDMENUS_H
